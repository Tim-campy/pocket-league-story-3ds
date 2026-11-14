// Static call-graph extractor over the reconstructed C# (Assembly-CSharp +
// KairoLibrary, optionally the generated platform bootstrap adapter).
// It only reads source; it never writes game code. Reachability, platform
// cuts and classification are done by tools/callgraph/analyze.py.
//
// Output (JSON): nodes (every source method/accessor/ctor/delegate member,
// synthetic static constructors, lambdas), edges with kinds and guards,
// per-type dispatch tables (class-hierarchy + interface resolution),
// Config/MyConfig flag evaluation and reflection limits.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.Json;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Syntax;
using Microsoft.CodeAnalysis.Operations;

static class CallGraph
{
    sealed class Node
    {
        public string id = "", name = "", containing_type = "", kind = "", return_type = "", origin = "", file = "", owner = "";
        public int line;
        public bool is_constructor, is_static, has_body, is_implicit, is_abstract, is_extern, synthetic;
        public int arity;
        public List<string> parameters = new();
        public string? host;       // top-level member hosting a lambda
        public string? lambda_parent;
    }

    sealed class Guard
    {
        public string kind = "", text = "", file = "";
        public int line;
        public bool taken_value;   // evaluated condition value that makes the branch dead
        public List<string> flags = new();
        public string role = "";   // when-true-dead | when-false-dead | right-operand-dead | after-exit-dead
    }

    sealed class Write
    {
        public IFieldSymbol field = null!;
        public IOperation? value;
        public bool compound;
        public bool dead;
        public string where = "";
    }

    static CSharpCompilation compilation = null!;
    static readonly Dictionary<SyntaxTree, SemanticModel> models = new();
    static readonly Dictionary<string, Node> nodes = new();
    static readonly List<object[]> edges = new();
    static readonly HashSet<string> edgeKeys = new();
    static readonly List<Guard> guards = new();
    static readonly Dictionary<string, int> guardIndex = new();
    static readonly List<Write> writes = new();
    static readonly List<Dictionary<string, object?>> limits = new();
    static readonly HashSet<string> limitKeys = new();
    static readonly Dictionary<string, int> lambdaCounters = new();
    static readonly Dictionary<SyntaxNode, string> lambdaIds = new();
    static string bootstrapPath = "";
    static INamedTypeSymbol? configType, myConfigType, monoBehaviour, runtimePlatform;
    static object? androidPlatform;
    static readonly HashSet<string> copyExcluded = new() { "APPLI_TYPE" };
    static readonly Dictionary<IFieldSymbol, IOperation?> flagInit = new(SymbolEqualityComparer.Default);
    static readonly Dictionary<IFieldSymbol, object?> initialMemo = new(SymbolEqualityComparer.Default);
    static readonly HashSet<IFieldSymbol> invalidFlags = new(SymbolEqualityComparer.Default);
    static readonly Dictionary<IFieldSymbol, bool> debugMemo = new(SymbolEqualityComparer.Default);
    static readonly object Unknown = new();

    static SemanticModel Model(SyntaxTree tree)
    {
        if (!models.TryGetValue(tree, out var m)) models[tree] = m = compilation.GetSemanticModel(tree);
        return m;
    }

    static string Id(ISymbol s)
    {
        var d = s.OriginalDefinition;
        if (d is IMethodSymbol { MethodKind: MethodKind.ReducedExtension } r && r.ReducedFrom != null) d = r.ReducedFrom;
        return d.GetDocumentationCommentId() ?? ("?" + d.ToDisplayString());
    }

    static bool InSource(ISymbol s) => s.OriginalDefinition.Locations.Any(l => l.IsInSource);

    static string Origin(string file)
    {
        var f = file.Replace('\\', '/');
        if (bootstrapPath.Length > 0 && string.Equals(Path.GetFullPath(file), bootstrapPath, StringComparison.OrdinalIgnoreCase)) return "bootstrap";
        if (f.Contains("/src/Assembly-CSharp/")) return "game";
        if (f.Contains("/src/KairoLibrary/")) return "kairo";
        return "other";
    }

    static (string file, int line) Where(SyntaxNode n)
    {
        var span = n.GetLocation().GetLineSpan();
        return (span.Path, span.StartLinePosition.Line + 1);
    }

    static void Edge(string from, string to, string kind, int guard, string? type = null)
    {
        var key = from + "\u0001" + to + "\u0001" + kind + "\u0001" + guard;
        if (!edgeKeys.Add(key)) return;
        edges.Add(new object[] { from, to, kind, guard });
    }

    static void Limit(string kind, string node, SyntaxNode at, string detail)
    {
        var (file, line) = Where(at);
        var key = kind + file + line + detail;
        if (!limitKeys.Add(key)) return;
        limits.Add(new Dictionary<string, object?> { ["kind"] = kind, ["method"] = node, ["file"] = file, ["line"] = line, ["detail"] = detail });
    }

    // ---------------------------------------------------------------- flags
    static bool IsFlagType(INamedTypeSymbol? t) =>
        t != null && (SymbolEqualityComparer.Default.Equals(t.OriginalDefinition, configType) || SymbolEqualityComparer.Default.Equals(t.OriginalDefinition, myConfigType));

    static bool IsFlag(IFieldSymbol f) => f.IsStatic && !f.IsConst && IsFlagType(f.ContainingType) && flagInit.ContainsKey(f.OriginalDefinition);

    static object? DefaultOf(ITypeSymbol t) => t.SpecialType switch
    {
        SpecialType.System_Boolean => false,
        SpecialType.System_Int32 or SpecialType.System_Int64 or SpecialType.System_Int16 or SpecialType.System_Byte => 0L,
        _ => null,
    };

    // Value a flag has after its own static initializer (textual order is not
    // needed: initializers only reference flags already initialized).
    static object? Initial(IFieldSymbol f)
    {
        f = f.OriginalDefinition;
        if (initialMemo.TryGetValue(f, out var v)) return v;
        initialMemo[f] = Unknown; // cycle guard
        var init = flagInit[f];
        v = init == null ? DefaultOf(f.Type) : Eval(init, Initial);
        initialMemo[f] = v;
        return v;
    }

    // Runtime value after IApplication.Awake -> Config.Create(typeof(MyConfig)):
    // every public Config static field with a same-named MyConfig static
    // field (except APPLI_TYPE) receives MyConfig's value via reflection.
    static object? Final(IFieldSymbol f)
    {
        f = f.OriginalDefinition;
        if (invalidFlags.Contains(f)) return Unknown;
        if (SymbolEqualityComparer.Default.Equals(f.ContainingType, configType) && myConfigType != null && !copyExcluded.Contains(f.Name)
            && f.DeclaredAccessibility == Accessibility.Public)
        {
            var mine = myConfigType.GetMembers(f.Name).OfType<IFieldSymbol>().FirstOrDefault(x => x.IsStatic);
            if (mine != null) return invalidFlags.Contains(mine) ? Unknown : Initial(mine);
        }
        return Initial(f);
    }

    static IFieldSymbol? CopySource(IFieldSymbol f)
    {
        if (SymbolEqualityComparer.Default.Equals(f.ContainingType, configType) && myConfigType != null && !copyExcluded.Contains(f.Name) && f.DeclaredAccessibility == Accessibility.Public)
            return myConfigType.GetMembers(f.Name).OfType<IFieldSymbol>().FirstOrDefault(x => x.IsStatic);
        return null;
    }

    static bool DebugDerived(IFieldSymbol f)
    {
        f = f.OriginalDefinition;
        if (debugMemo.TryGetValue(f, out var b)) return b;
        debugMemo[f] = false;
        bool r = f.Name.Contains("DEBUG");
        if (!r && flagInit.TryGetValue(f, out var init) && init != null)
            r = init.DescendantsAndSelf().OfType<IFieldReferenceOperation>().Any(x => IsFlag(x.Field) && DebugDerived(x.Field.OriginalDefinition));
        var src = CopySource(f);
        if (!r && src != null) r = DebugDerived(src);
        debugMemo[f] = r;
        return r;
    }

    static object? Eval(IOperation? op, Func<IFieldSymbol, object?> field)
    {
        if (op == null) return Unknown;
        if (op.ConstantValue.HasValue)
        {
            var c = op.ConstantValue.Value;
            return c switch { bool b => b, string s => s, null => Unknown, _ => IsIntegral(c) ? Convert.ToInt64(c) : Unknown };
        }
        switch (op)
        {
            case IFieldInitializerOperation fi: return Eval(fi.Value, field);
            case IParenthesizedOperation p: return Eval(p.Operand, field);
            case IConversionOperation cv when cv.OperatorMethod == null: return Eval(cv.Operand, field);
            case IFieldReferenceOperation fr when IsFlag(fr.Field): return field(fr.Field.OriginalDefinition);
            case IPropertyReferenceOperation pr when pr.Property.Name == "platform" && pr.Property.ContainingType.ToDisplayString() == "UnityEngine.Application":
                return androidPlatform ?? Unknown;
            case IUnaryOperation u:
                {
                    var x = Eval(u.Operand, field);
                    if (u.OperatorKind == UnaryOperatorKind.Not && x is bool b) return !b;
                    if (u.OperatorKind == UnaryOperatorKind.Minus && x is long l) return -l;
                    if (u.OperatorKind == UnaryOperatorKind.Plus && x is long l2) return l2;
                    return Unknown;
                }
            case IBinaryOperation bo when bo.OperatorMethod == null:
                {
                    var a = Eval(bo.LeftOperand, field);
                    if (bo.OperatorKind == BinaryOperatorKind.ConditionalAnd) { if (a is false) return false; var r = Eval(bo.RightOperand, field); if (a is true) return r is bool ? r : Unknown; return r is false ? false : Unknown; }
                    if (bo.OperatorKind == BinaryOperatorKind.ConditionalOr) { if (a is true) return true; var r = Eval(bo.RightOperand, field); if (a is false) return r is bool ? r : Unknown; return r is true ? true : Unknown; }
                    var c = Eval(bo.RightOperand, field);
                    if (a == Unknown || c == Unknown) return Unknown;
                    switch (bo.OperatorKind)
                    {
                        case BinaryOperatorKind.Equals: return Equals(a, c);
                        case BinaryOperatorKind.NotEquals: return !Equals(a, c);
                        case BinaryOperatorKind.And when a is bool x && c is bool y: return x & y;
                        case BinaryOperatorKind.Or when a is bool x && c is bool y: return x | y;
                        case BinaryOperatorKind.ExclusiveOr when a is bool x && c is bool y: return x ^ y;
                    }
                    if (a is long p && c is long q)
                        switch (bo.OperatorKind)
                        {
                            case BinaryOperatorKind.LessThan: return p < q;
                            case BinaryOperatorKind.LessThanOrEqual: return p <= q;
                            case BinaryOperatorKind.GreaterThan: return p > q;
                            case BinaryOperatorKind.GreaterThanOrEqual: return p >= q;
                            case BinaryOperatorKind.Add: return p + q;
                            case BinaryOperatorKind.Subtract: return p - q;
                            case BinaryOperatorKind.Multiply: return p * q;
                            case BinaryOperatorKind.And: return p & q;
                            case BinaryOperatorKind.Or: return p | q;
                        }
                    return Unknown;
                }
            case IConditionalOperation t when t.WhenFalse != null:
                {
                    var k = Eval(t.Condition, field);
                    if (k is true) return Eval(t.WhenTrue, field);
                    if (k is false) return Eval(t.WhenFalse, field);
                    var x = Eval(t.WhenTrue, field); var y = Eval(t.WhenFalse, field);
                    return x != Unknown && Equals(x, y) ? x : Unknown;
                }
        }
        return Unknown;
    }

    static bool IsIntegral(object c) => c is int or long or short or byte or sbyte or ushort or uint or char;

    static bool? EvalBool(IOperation? op) => Eval(op, Final) is bool b ? b : null;

    static int NewGuard(IOperation cond, bool value, string role)
    {
        var (file, line) = Where(cond.Syntax);
        var col = cond.Syntax.GetLocation().GetLineSpan().StartLinePosition.Character;
        var key = file + ":" + line + ":" + col + ":" + role;
        if (guardIndex.TryGetValue(key, out var i)) return i;
        var g = new Guard { file = file, line = line, taken_value = value, role = role };
        var text = string.Join(" ", cond.Syntax.ToString().Split((char[]?)null, StringSplitOptions.RemoveEmptyEntries));
        g.text = text.Length > 160 ? text.Substring(0, 157) + "..." : text;
        bool debug = false, flag = false, platform = false;
        foreach (var d in cond.DescendantsAndSelf())
        {
            if (d is IFieldReferenceOperation fr && IsFlag(fr.Field))
            {
                var f = fr.Field.OriginalDefinition; flag = true;
                if (DebugDerived(f)) debug = true;
                var name = f.ContainingType.Name + "." + f.Name + "=" + Show(Final(f));
                if (!g.flags.Contains(name)) g.flags.Add(name);
            }
            if (d is IPropertyReferenceOperation pr && pr.Property.Name == "platform" && pr.Property.ContainingType.ToDisplayString() == "UnityEngine.Application") platform = true;
        }
        g.kind = debug ? "debug" : flag ? "config" : platform ? "platform" : "constant";
        guards.Add(g);
        guardIndex[key] = guards.Count - 1;
        return guards.Count - 1;
    }

    static string Show(object? v) => v == Unknown ? "?" : v is bool b ? (b ? "true" : "false") : v?.ToString() ?? "null";

    // --------------------------------------------------------------- walker
    static bool AlwaysExits(IOperation? op) => op switch
    {
        IReturnOperation or IBranchOperation or IThrowOperation => true,
        IExpressionStatementOperation { Operation: IThrowOperation } => true,
        IBlockOperation b => b.Operations.Length > 0 && AlwaysExits(b.Operations[^1]),
        _ => false,
    };

    static bool IsVirtualMember(IMethodSymbol m) => !m.IsStatic && (m.IsVirtual || m.IsAbstract || m.IsOverride || m.ContainingType.TypeKind == TypeKind.Interface);

    static string LambdaNode(SyntaxNode syntax, string parent, string label)
    {
        if (lambdaIds.TryGetValue(syntax, out var id)) return id;
        lambdaCounters.TryGetValue(parent, out var n);
        lambdaCounters[parent] = n + 1;
        id = parent + "#" + label + n;
        lambdaIds[syntax] = id;
        var p = nodes[parent];
        var (file, line) = Where(syntax);
        nodes[id] = new Node
        {
            id = id, name = label + n, containing_type = p.containing_type, kind = "AnonymousFunction", origin = p.origin, file = file, line = line,
            owner = p.owner, has_body = true, synthetic = true, host = p.host ?? p.id, lambda_parent = parent, return_type = ""
        };
        return id;
    }

    static void Inst(string node, ITypeSymbol? t, int guard, string kind = "inst")
    {
        if (t is INamedTypeSymbol nt && InSource(nt)) Edge(node, Id(nt), kind, guard);
    }

    static void Visit(IOperation? op, string node, int guard)
    {
        if (op == null) return;
        switch (op)
        {
            case IAnonymousFunctionOperation af:
                {
                    var id = LambdaNode(af.Syntax, node, "lambda");
                    Edge(node, id, "lambda", guard);
                    Visit(af.Body, id, -1);
                    return;
                }
            case ILocalFunctionOperation lf:
                {
                    var id = LambdaNode(lf.Syntax, node, "local");
                    Edge(node, id, "lambda", guard);
                    Visit(lf.Body ?? (IOperation?)lf.IgnoredBody, id, -1);
                    return;
                }
            case IConditionalOperation c:
                {
                    Visit(c.Condition, node, guard);
                    var v = EvalBool(c.Condition);
                    int gt = guard, gf = guard;
                    if (guard < 0 && v == false) gt = NewGuard(c.Condition, false, "when-true-dead");
                    if (guard < 0 && v == true && c.WhenFalse != null) gf = NewGuard(c.Condition, true, "when-false-dead");
                    Visit(c.WhenTrue, node, gt);
                    Visit(c.WhenFalse, node, gf);
                    return;
                }
            case IBinaryOperation b when b.OperatorKind is BinaryOperatorKind.ConditionalAnd or BinaryOperatorKind.ConditionalOr:
                {
                    Visit(b.LeftOperand, node, guard);
                    var v = EvalBool(b.LeftOperand);
                    bool dead = (b.OperatorKind == BinaryOperatorKind.ConditionalAnd && v == false) || (b.OperatorKind == BinaryOperatorKind.ConditionalOr && v == true);
                    Visit(b.RightOperand, node, dead && guard < 0 ? NewGuard(b.LeftOperand, v!.Value, "right-operand-dead") : guard);
                    if (b.OperatorMethod != null) Edge(node, Id(b.OperatorMethod), "call", guard);
                    return;
                }
            case IBlockOperation blk:
                {
                    int g = guard;
                    foreach (var s in blk.Operations)
                    {
                        Visit(s, node, g);
                        if (g < 0 && s is IConditionalOperation ci && ci.WhenFalse == null && AlwaysExits(ci.WhenTrue) && EvalBool(ci.Condition) == true)
                            g = NewGuard(ci.Condition, true, "after-exit-dead");
                    }
                    return;
                }
            case IInvocationOperation inv:
                {
                    var m = inv.TargetMethod;
                    var def = (m.ReducedFrom ?? m).OriginalDefinition;
                    if (def.MethodKind == MethodKind.LocalFunction)
                    {
                        var decl = def.DeclaringSyntaxReferences.FirstOrDefault()?.GetSyntax();
                        if (decl != null && lambdaIds.TryGetValue(decl, out var lid)) Edge(node, lid, "call", guard);
                        else Limit("local-function-call", node, inv.Syntax, def.Name);
                        break;
                    }
                    bool isBase = inv.Instance?.Syntax is BaseExpressionSyntax;
                    bool virt = inv.IsVirtual && !isBase;
                    Edge(node, Id(def), virt ? "virtual" : "call", guard);
                    // StreamUtil.ReadObject<T>/ReadArray instantiate ISerializable
                    // element types through Activator.CreateInstance.
                    if (def.ContainingType.ToDisplayString() == "kairo.unity.util.StreamUtil" && def.Name.StartsWith("Read"))
                    {
                        var seen = new List<ITypeSymbol>(m.TypeArguments);
                        seen.AddRange(inv.Arguments.Select(a => a.Value.Type).OfType<ITypeSymbol>());
                        foreach (var ta in seen)
                        {
                            var e = ta;
                            while (e is IArrayTypeSymbol at) e = at.ElementType;
                            if (e is INamedTypeSymbol en && InSource(en) && !en.IsAbstract && en.TypeKind == TypeKind.Class && en.AllInterfaces.Any(i => i.Name == "ISerializable"))
                            {
                                Inst(node, en, guard, "inst-reflection");
                                Limit("reflective-instantiation", node, inv.Syntax, Id(en));
                            }
                        }
                    }
                    if (!InSource(def))
                    {
                        if (def.Name == "AddComponent" && m.TypeArguments.Length == 1) Inst(node, m.TypeArguments[0], guard, "inst-unity");
                        Reflection(def, inv, node);
                    }
                    break;
                }
            case IObjectCreationOperation oc:
                {
                    if (oc.Constructor != null) Edge(node, Id(oc.Constructor), "new", guard);
                    // An object discarded at creation (expression statement or a
                    // local never read) runs its constructor but can never be a
                    // later virtual-call receiver: it does not enable dispatch.
                    Inst(node, oc.Type, guard, Discarded(oc) ? "inst-discarded" : "inst");
                    break;
                }
            case ITypeParameterObjectCreationOperation tp:
                {
                    if (tp.Type is ITypeParameterSymbol par)
                    {
                        foreach (var cand in ConcreteSatisfying(par))
                        {
                            var ctor = cand.InstanceConstructors.FirstOrDefault(x => x.Parameters.Length == 0);
                            if (ctor != null) Edge(node, Id(ctor), "new", guard);
                            Inst(node, cand, guard, "inst-generic");
                        }
                        Limit("generic-new", node, tp.Syntax, "new " + par.Name + "() resolved to every concrete source type satisfying its constraints");
                    }
                    break;
                }
            case IDelegateCreationOperation dc:
                {
                    if (dc.Type is INamedTypeSymbol dt && dt.TypeKind == TypeKind.Delegate && InSource(dt))
                        foreach (var ctor in dt.OriginalDefinition.InstanceConstructors) Edge(node, Id(ctor), "new", guard);
                    break;
                }
            case IMethodReferenceOperation mr:
                {
                    var def = mr.Method.OriginalDefinition;
                    if (def.MethodKind == MethodKind.LocalFunction)
                    {
                        var decl = def.DeclaringSyntaxReferences.FirstOrDefault()?.GetSyntax();
                        if (decl != null && lambdaIds.TryGetValue(decl, out var lid)) Edge(node, lid, "delegate", guard);
                        break;
                    }
                    bool virt = mr.IsVirtual && mr.Instance?.Syntax is not BaseExpressionSyntax;
                    Edge(node, Id(def), virt ? "delegate-virtual" : "delegate", guard);
                    break;
                }
            case IPropertyReferenceOperation pr:
                {
                    bool get = true, set = false;
                    var parent = pr.Parent;
                    if (parent is ISimpleAssignmentOperation sa && sa.Target == pr) { get = false; set = true; }
                    else if ((parent is ICompoundAssignmentOperation ca && ca.Target == pr) || (parent is IIncrementOrDecrementOperation) || (parent is ICoalesceAssignmentOperation co && co.Target == pr)) { get = set = true; }
                    bool isBase = pr.Instance?.Syntax is BaseExpressionSyntax;
                    if (get) { var acc = Accessor(pr.Property, true); if (acc != null) Edge(node, Id(acc), !isBase && IsVirtualMember(acc) ? "virtual" : "call", guard); }
                    if (set) { var acc = Accessor(pr.Property, false); if (acc != null) Edge(node, Id(acc), !isBase && IsVirtualMember(acc) ? "virtual" : "call", guard); }
                    if (!InSource(pr.Property) && pr.Property.IsStatic) { }
                    break;
                }
            case IEventAssignmentOperation ea:
                {
                    if (ea.EventReference is IEventReferenceOperation er)
                    {
                        var acc = ea.Adds ? er.Event.AddMethod : er.Event.RemoveMethod;
                        if (acc != null) Edge(node, Id(acc), IsVirtualMember(acc) && er.Instance?.Syntax is not BaseExpressionSyntax ? "virtual" : "call", guard);
                    }
                    break;
                }
            case IUnaryOperation u when u.OperatorMethod != null: Edge(node, Id(u.OperatorMethod), "call", guard); break;
            case IBinaryOperation bo when bo.OperatorMethod != null: Edge(node, Id(bo.OperatorMethod), "call", guard); break;
            case IIncrementOrDecrementOperation io:
                if (io.OperatorMethod != null) Edge(node, Id(io.OperatorMethod), "call", guard);
                RecordWrite(io.Target, null, true, node, guard);
                break;
            case ICompoundAssignmentOperation ca2:
                if (ca2.OperatorMethod != null) Edge(node, Id(ca2.OperatorMethod), "call", guard);
                RecordWrite(ca2.Target, null, true, node, guard);
                break;
            case ISimpleAssignmentOperation sa2:
                RecordWrite(sa2.Target, sa2.Value, false, node, guard);
                break;
            case IArgumentOperation arg when arg.Parameter != null && arg.Parameter.RefKind != RefKind.None:
                RecordWrite(arg.Value, null, true, node, guard);
                break;
            case IConversionOperation cv when cv.OperatorMethod != null: Edge(node, Id(cv.OperatorMethod), "call", guard); break;
            case IForEachLoopOperation fe:
                {
                    if (fe.Syntax is CommonForEachStatementSyntax fs)
                    {
                        var info = Model(fs.SyntaxTree).GetForEachStatementInfo(fs);
                        foreach (var mm in new[] { info.GetEnumeratorMethod, info.MoveNextMethod, info.CurrentProperty?.GetMethod, info.DisposeMethod })
                            if (mm != null) Edge(node, Id(mm), IsVirtualMember(mm) ? "virtual" : "call", guard);
                    }
                    break;
                }
            case IUsingOperation:
                Edge(node, "M:System.IDisposable.Dispose", "virtual", guard);
                break;
            case IFieldReferenceOperation fr when fr.Field.IsStatic && !fr.Field.IsConst:
                {
                    var t = fr.Field.ContainingType.OriginalDefinition;
                    if (InSource(t)) Edge(node, Id(t), "typeinit", guard);
                    break;
                }
        }
        foreach (var ch in op.ChildOperations) Visit(ch, node, guard);
    }

    static bool Discarded(IOperation creation)
    {
        var p = creation.Parent;
        while (p is IConversionOperation) p = p.Parent;
        if (p is IExpressionStatementOperation) return true;
        if (p is IVariableInitializerOperation vi && vi.Parent is IVariableDeclaratorOperation vd)
        {
            var root = vd;
            IOperation top = vd;
            while (top.Parent != null) top = top.Parent;
            return !top.DescendantsAndSelf().OfType<ILocalReferenceOperation>().Any(r => SymbolEqualityComparer.Default.Equals(r.Local, vd.Symbol));
        }
        return false;
    }

    static IMethodSymbol? Accessor(IPropertySymbol p, bool get)
    {
        for (var q = p; q != null; q = q.OverriddenProperty)
        {
            var a = get ? q.GetMethod : q.SetMethod;
            if (a != null) return a;
        }
        return null;
    }

    static void RecordWrite(IOperation target, IOperation? value, bool compound, string node, int guard)
    {
        if (target is IFieldReferenceOperation fr && IsFlag(fr.Field))
        {
            if (nodes.TryGetValue(node, out var n) && n.origin == "bootstrap") return; // port adapter mirrors Config.Create
            var (file, line) = Where(target.Syntax);
            writes.Add(new Write { field = fr.Field.OriginalDefinition, value = value, compound = compound, dead = guard >= 0, where = file + ":" + line });
        }
    }

    static IEnumerable<INamedTypeSymbol> ConcreteSatisfying(ITypeParameterSymbol par)
    {
        foreach (var t in allTypes)
        {
            if (t.IsAbstract || t.IsStatic || t.TypeKind != TypeKind.Class || t.IsGenericType) continue;
            if (par.HasConstructorConstraint && !t.InstanceConstructors.Any(c => c.Parameters.Length == 0 && c.DeclaredAccessibility == Accessibility.Public)) continue;
            bool ok = true;
            foreach (var c in par.ConstraintTypes)
                if (!DerivesFrom(t, c.OriginalDefinition)) { ok = false; break; }
            if (ok) yield return t;
        }
    }

    static bool DerivesFrom(INamedTypeSymbol t, ITypeSymbol b)
    {
        for (INamedTypeSymbol? s = t; s != null; s = s.BaseType) if (SymbolEqualityComparer.Default.Equals(s.OriginalDefinition, b)) return true;
        return t.AllInterfaces.Any(i => SymbolEqualityComparer.Default.Equals(i.OriginalDefinition, b));
    }

    static void Reflection(IMethodSymbol def, IInvocationOperation inv, string node)
    {
        var owner = def.ContainingType?.ToDisplayString() ?? "";
        var name = def.Name;
        bool reflective = owner.StartsWith("System.Reflection.") || owner == "System.Activator"
            || (owner == "System.Type" && (name is "GetType" or "GetMethod" or "GetMethods" or "GetField" or "GetFields" or "GetProperty" or "GetProperties" or "InvokeMember" or "GetMember"))
            || name is "SendMessage" or "BroadcastMessage" or "SendMessageUpwards" or "Invoke" && owner.StartsWith("UnityEngine.") || name is "InvokeRepeating" or "StartCoroutine" or "GetTypes";
        if (reflective) Limit("reflection", node, inv.Syntax, owner + "." + name);
    }

    // --------------------------------------------------------------- nodes
    static readonly List<INamedTypeSymbol> allTypes = new();

    static void CollectTypes(INamespaceOrTypeSymbol ns)
    {
        foreach (var m in ns.GetMembers())
        {
            if (m is INamespaceSymbol n) CollectTypes(n);
            else if (m is INamedTypeSymbol t && InSource(t)) { allTypes.Add(t); CollectTypes(t); }
        }
    }

    static string FileOf(ISymbol s)
    {
        var loc = s.Locations.FirstOrDefault(l => l.IsInSource) ?? s.ContainingType?.Locations.FirstOrDefault(l => l.IsInSource);
        return loc?.SourceTree?.FilePath ?? "";
    }

    static int LineOf(ISymbol s)
    {
        var loc = s.Locations.FirstOrDefault(l => l.IsInSource) ?? s.ContainingType?.Locations.FirstOrDefault(l => l.IsInSource);
        return loc == null ? 0 : loc.GetLineSpan().StartLinePosition.Line + 1;
    }

    static Node MakeNode(IMethodSymbol m)
    {
        var file = FileOf(m);
        var n = new Node
        {
            id = Id(m), name = m.Arity > 0 ? m.Name + "``" + m.Arity : m.Name, containing_type = m.ContainingType.ToDisplayString(), kind = m.MethodKind.ToString(),
            return_type = m.MethodKind == MethodKind.Constructor ? m.ContainingType.ToDisplayString() : m.ReturnType.ToDisplayString(),
            origin = Origin(file), file = file, line = LineOf(m), owner = Id(m.ContainingType), is_constructor = m.MethodKind == MethodKind.Constructor,
            is_static = m.IsStatic, is_implicit = m.IsImplicitlyDeclared, is_abstract = m.IsAbstract, is_extern = m.IsExtern, arity = m.Arity,
        };
        foreach (var p in m.Parameters) n.parameters.Add((p.RefKind != RefKind.None ? "ref " : "") + p.Type.ToDisplayString());
        return n;
    }

    static readonly Dictionary<INamedTypeSymbol, List<(IOperation op, bool isStatic)>> initializers = new(SymbolEqualityComparer.Default);

    static List<(IOperation op, bool isStatic)> Initializers(INamedTypeSymbol t)
    {
        if (initializers.TryGetValue(t, out var list)) return list;
        list = new();
        foreach (var r in t.DeclaringSyntaxReferences)
        {
            if (r.GetSyntax() is not TypeDeclarationSyntax td) continue;
            var model = Model(td.SyntaxTree);
            foreach (var member in td.Members)
            {
                if (member is FieldDeclarationSyntax fd)
                {
                    bool st = fd.Modifiers.Any(SyntaxKind.StaticKeyword) || fd.Modifiers.Any(SyntaxKind.ConstKeyword);
                    if (fd.Modifiers.Any(SyntaxKind.ConstKeyword)) continue;
                    foreach (var v in fd.Declaration.Variables)
                        if (v.Initializer != null && model.GetOperation(v.Initializer) is IOperation op) list.Add((op, st));
                }
                else if (member is PropertyDeclarationSyntax pd && pd.Initializer != null && model.GetOperation(pd.Initializer) is IOperation pop)
                    list.Add((pop, pd.Modifiers.Any(SyntaxKind.StaticKeyword)));
                else if (member is EventFieldDeclarationSyntax ef)
                {
                    bool st = ef.Modifiers.Any(SyntaxKind.StaticKeyword);
                    foreach (var v in ef.Declaration.Variables)
                        if (v.Initializer != null && model.GetOperation(v.Initializer) is IOperation op) list.Add((op, st));
                }
            }
        }
        initializers[t] = list;
        return list;
    }

    static void BaseCtor(string node, INamedTypeSymbol t)
    {
        var b = t.BaseType;
        if (b == null || !InSource(b)) return;
        var ctor = b.OriginalDefinition.InstanceConstructors.OrderBy(c => c.Parameters.Length).FirstOrDefault(c => c.Parameters.All(p => p.IsOptional || p.IsParams));
        if (ctor != null) Edge(node, Id(ctor), "base-ctor", -1);
    }

    static void WalkAll()
    {
        edges.Clear(); edgeKeys.Clear(); guards.Clear(); guardIndex.Clear(); writes.Clear(); limits.Clear(); limitKeys.Clear();
        lambdaCounters.Clear(); lambdaIds.Clear();
        foreach (var k in nodes.Where(kv => kv.Value.kind is "AnonymousFunction").Select(kv => kv.Key).ToList()) nodes.Remove(k);
        foreach (var t in allTypes)
        {
            foreach (var m in t.GetMembers().OfType<IMethodSymbol>())
            {
                var id = Id(m);
                if (!nodes.ContainsKey(id)) continue;
                var syntax = m.DeclaringSyntaxReferences.Select(r => r.GetSyntax()).ToList();
                if (m.MethodKind == MethodKind.Constructor)
                {
                    var decl = syntax.OfType<ConstructorDeclarationSyntax>().FirstOrDefault();
                    bool chainsThis = decl?.Initializer?.ThisOrBaseKeyword.IsKind(SyntaxKind.ThisKeyword) ?? false;
                    if (decl?.Initializer == null && t.TypeKind == TypeKind.Class) BaseCtor(id, t);
                    if (!chainsThis) foreach (var (op, st) in Initializers(t)) if (!st) Visit(op, id, -1);
                    if (decl != null) Visit(Model(decl.SyntaxTree).GetOperation(decl), id, -1);
                    continue;
                }
                if (m.MethodKind == MethodKind.StaticConstructor)
                {
                    foreach (var (op, st) in Initializers(t)) if (st) Visit(op, id, -1);
                    var decl = syntax.OfType<ConstructorDeclarationSyntax>().FirstOrDefault();
                    if (decl != null) Visit(Model(decl.SyntaxTree).GetOperation(decl), id, -1);
                    continue;
                }
                foreach (var s in syntax)
                {
                    SyntaxNode? bodyOwner = s switch
                    {
                        BaseMethodDeclarationSyntax bm when bm.Body != null || bm.ExpressionBody != null => bm,
                        AccessorDeclarationSyntax ad when ad.Body != null || ad.ExpressionBody != null => ad,
                        ArrowExpressionClauseSyntax ae => ae,
                        _ => null,
                    };
                    if (bodyOwner == null) continue;
                    Visit(Model(bodyOwner.SyntaxTree).GetOperation(bodyOwner), id, -1);
                }
            }
            var cctor = "M:" + Id(t).Substring(2) + ".#cctor";
            if (nodes.TryGetValue(cctor, out var cn) && cn.synthetic)
                foreach (var (op, st) in Initializers(t)) if (st) Visit(op, cctor, -1);
        }
    }

    static void BuildNodes()
    {
        foreach (var t in allTypes)
        {
            foreach (var m in t.GetMembers().OfType<IMethodSymbol>())
            {
                var n = MakeNode(m);
                var syntax = m.DeclaringSyntaxReferences.Select(r => r.GetSyntax()).ToList();
                n.has_body = syntax.Any(s => s switch
                {
                    BaseMethodDeclarationSyntax bm => bm.Body != null || bm.ExpressionBody != null,
                    AccessorDeclarationSyntax ad => ad.Body != null || ad.ExpressionBody != null,
                    ArrowExpressionClauseSyntax => true,
                    _ => false,
                }) || m.MethodKind == MethodKind.Constructor || m.MethodKind == MethodKind.StaticConstructor;
                if (t.TypeKind == TypeKind.Delegate) n.has_body = false;
                if (syntax.Count > 0) { var (f, l) = Where(syntax[0]); n.line = l; }
                nodes[n.id] = n;
            }
            if (!t.StaticConstructors.Any() && Initializers(t).Any(x => x.isStatic))
            {
                var id = "M:" + Id(t).Substring(2) + ".#cctor";
                var file = FileOf(t);
                nodes[id] = new Node
                {
                    id = id, name = ".cctor", containing_type = t.ToDisplayString(), kind = "StaticConstructor", return_type = "void", origin = Origin(file),
                    file = file, line = LineOf(t), owner = Id(t), is_static = true, has_body = true, is_implicit = true, synthetic = true,
                };
            }
        }
    }

    // -------------------------------------------------------------- dispatch
    static Dictionary<string, string> Dispatch(INamedTypeSymbol t)
    {
        var map = new Dictionary<string, string>();
        for (INamedTypeSymbol? s = t; s != null; s = s.BaseType)
        {
            foreach (var m in s.OriginalDefinition.GetMembers().OfType<IMethodSymbol>())
            {
                if (m.IsStatic) continue;
                if (m.IsOverride)
                {
                    for (var o = m.OverriddenMethod; o != null; o = o.OverriddenMethod) map.TryAdd(Id(o), Id(m));
                    map.TryAdd(Id(m), Id(m));
                }
                else if (m.IsVirtual || m.IsAbstract) map.TryAdd(Id(m), Id(m));
            }
        }
        foreach (var i in t.AllInterfaces)
            foreach (var im in i.GetMembers().OfType<IMethodSymbol>())
            {
                if (t.FindImplementationForInterfaceMember(im) is not IMethodSymbol impl) continue;
                var implId = Id(impl);
                if (map.TryGetValue(implId, out var most)) implId = most;
                map.TryAdd(Id(im), implId);
            }
        return map.Where(kv => nodes.TryGetValue(kv.Value, out var n) && !n.is_abstract).ToDictionary(kv => kv.Key, kv => kv.Value);
    }

    static bool IsMono(INamedTypeSymbol t)
    {
        for (var s = t.BaseType; s != null; s = s.BaseType) if (SymbolEqualityComparer.Default.Equals(s, monoBehaviour)) return true;
        return false;
    }

    static int Main(string[] args)
    {
        var request = JsonDocument.Parse(File.ReadAllText(args[0])).RootElement;
        var sources = request.GetProperty("sources").EnumerateArray().Select(x => x.GetString()!).ToList();
        if (request.TryGetProperty("bootstrap_source", out var bs) && bs.GetString() is string b && b.Length > 0)
        {
            bootstrapPath = Path.GetFullPath(b);
            sources.Add(b);
        }
        var trees = sources.Select(p => CSharpSyntaxTree.ParseText(File.ReadAllText(p), path: p, encoding: Encoding.UTF8)).ToList();
        var refs = request.GetProperty("references").EnumerateArray().Select(x => (MetadataReference)MetadataReference.CreateFromFile(x.GetString()!)).ToList();
        compilation = CSharpCompilation.Create("Assembly-CSharp", trees, refs,
            new CSharpCompilationOptions(OutputKind.DynamicallyLinkedLibrary, optimizationLevel: OptimizationLevel.Release, assemblyIdentityComparer: DesktopAssemblyIdentityComparer.Default).WithMetadataImportOptions(MetadataImportOptions.All));
        var errors = compilation.GetDiagnostics().Where(d => d.Severity == DiagnosticSeverity.Error).ToList();
        configType = compilation.GetTypeByMetadataName("kairo.common.cfg.Config");
        myConfigType = compilation.GetTypeByMetadataName("cfg.MyConfig");
        monoBehaviour = compilation.GetTypeByMetadataName("UnityEngine.MonoBehaviour");
        runtimePlatform = compilation.GetTypeByMetadataName("UnityEngine.RuntimePlatform");
        var android = runtimePlatform?.GetMembers("Android").OfType<IFieldSymbol>().FirstOrDefault();
        if (android?.HasConstantValue == true) androidPlatform = Convert.ToInt64(android.ConstantValue);
        CollectTypes(compilation.Assembly.GlobalNamespace);

        foreach (var ft in new[] { configType, myConfigType })
        {
            if (ft == null) continue;
            foreach (var f in ft.GetMembers().OfType<IFieldSymbol>().Where(f => f.IsStatic && !f.IsConst))
            {
                IOperation? init = null;
                foreach (var r in f.DeclaringSyntaxReferences)
                    if (r.GetSyntax() is VariableDeclaratorSyntax v && v.Initializer != null) init = Model(v.SyntaxTree).GetOperation(v.Initializer);
                flagInit[f.OriginalDefinition] = init;
            }
        }

        BuildNodes();
        // Fixed point: a flag stays constant only if every source write keeps
        // its value, restores a saved copy, or lies in a branch already dead.
        var history = new List<object>();
        for (int round = 0; ; round++)
        {
            WalkAll();
            var bad = new List<object>();
            foreach (var w in writes)
            {
                if (invalidFlags.Contains(w.field) || w.dead) continue;
                bool ok = false;
                if (!w.compound && w.value != null)
                {
                    var v = Eval(w.value, Final);
                    var cur = Final(w.field);
                    if (v != Unknown && Equals(v, cur)) ok = true;
                    var inner = w.value;
                    while (inner is IConversionOperation c) inner = c.Operand;
                    if (inner is ILocalReferenceOperation lr)
                    {
                        var decl = lr.Local.DeclaringSyntaxReferences.FirstOrDefault()?.GetSyntax() as VariableDeclaratorSyntax;
                        if (decl?.Initializer != null)
                        {
                            var iop = Model(decl.SyntaxTree).GetOperation(decl.Initializer.Value);
                            while (iop is IConversionOperation c2) iop = c2.Operand;
                            if (iop is IFieldReferenceOperation src && (SymbolEqualityComparer.Default.Equals(src.Field.OriginalDefinition, w.field) || src.Field.Name == w.field.Name && IsFlag(src.Field))) ok = true;
                        }
                    }
                }
                if (!ok) { invalidFlags.Add(w.field); bad.Add(new { field = Id(w.field), at = w.where }); }
            }
            history.Add(new { round, invalidated = bad });
            if (bad.Count == 0) break;
            if (round > 10) throw new Exception("flag fixed point did not converge");
        }

        var types = new List<object>();
        foreach (var t in allTypes)
        {
            bool concrete = (t.TypeKind == TypeKind.Class && !t.IsAbstract && !t.IsStatic) || t.TypeKind == TypeKind.Struct;
            var file = FileOf(t);
            var dispatch = concrete ? Dispatch(t) : new Dictionary<string, string>();
            var metadataKeys = new List<string>();
            foreach (var kv in dispatch)
            {
                var sym = DocumentationCommentId.GetFirstSymbolForDeclarationId(kv.Key, compilation);
                if (sym != null && !InSource(sym)) metadataKeys.Add(kv.Key);
            }
            var unity = new List<string>(); var sendMessage = new List<string>();
            bool mono = IsMono(t);
            if (mono && concrete)
            {
                var seen = new HashSet<string>();
                for (INamedTypeSymbol? s = t; s != null && InSource(s); s = s.BaseType)
                    foreach (var m in s.GetMembers().OfType<IMethodSymbol>().Where(m => m.MethodKind == MethodKind.Ordinary && !m.IsStatic && !m.IsAbstract))
                    {
                        if (!seen.Add(m.Name + "/" + m.Parameters.Length)) continue;
                        if (UnityMessages.Contains(m.Name)) unity.Add(Id(m));
                        else if (m.ReturnsVoid && m.Parameters.Length == 1 && m.Parameters[0].Type.SpecialType == SpecialType.System_String && !m.IsOverride) sendMessage.Add(Id(m));
                    }
            }
            var dctor = t.InstanceConstructors.Where(c => c.Parameters.Length == 0).Select(Id).FirstOrDefault();
            types.Add(new
            {
                id = Id(t), name = t.ToDisplayString(), kind = t.TypeKind.ToString(), origin = Origin(file), file, line = LineOf(t), is_abstract = t.IsAbstract,
                concrete, monobehaviour = mono, @base = t.BaseType == null ? null : Id(t.BaseType), dispatch, metadata_keys = metadataKeys,
                unity_messages = unity, send_message = sendMessage, default_ctor = dctor,
                cctor = nodes.ContainsKey("M:" + Id(t).Substring(2) + ".#cctor") ? "M:" + Id(t).Substring(2) + ".#cctor" : null,
            });
        }

        var flags = flagInit.Keys.Select(f => new
        {
            id = Id(f), value = Show(Final(f)), initial = Show(Initial(f)), constant = !invalidFlags.Contains(f) && Final(f) != Unknown, debug = DebugDerived(f),
            copied_from = CopySource(f) is IFieldSymbol cs ? Id(cs) : null,
        }).OrderBy(x => x.id).ToList();

        var output = new
        {
            operation = "static-call-graph",
            compile_errors = errors.Count,
            compile_error_samples = errors.Take(20).Select(e => e.ToString()).ToArray(),
            platform_fact = new { property = "UnityEngine.Application.platform", value = androidPlatform, name = "RuntimePlatform.Android" },
            nodes = nodes.Values.OrderBy(n => n.id, StringComparer.Ordinal).Select(n => new
            {
                n.id, n.name, n.containing_type, n.kind, n.return_type, parameters = n.parameters.Select(p => new { type = p.StartsWith("ref ") ? p.Substring(4) : p }).ToArray(),
                n.origin, n.file, n.line, n.owner, n.is_constructor, n.is_static, n.has_body, n.is_implicit, n.is_abstract, n.is_extern, n.synthetic, n.host, n.lambda_parent,
            }).ToArray(),
            edges,
            guards = guards.Select(g => new { g.kind, g.text, g.file, g.line, g.role, g.flags }).ToArray(),
            types,
            flags,
            flag_rounds = history,
            limits,
        };
        var opts = new JsonSerializerOptions { WriteIndented = false };
        File.WriteAllText(args[1], JsonSerializer.Serialize(output, opts), new UTF8Encoding(false));
        Console.WriteLine(JsonSerializer.Serialize(new { nodes = nodes.Count, edges = edges.Count, guards = guards.Count, types = types.Count, compile_errors = errors.Count, limits = limits.Count }));
        return 0;
    }

    static readonly HashSet<string> UnityMessages = new()
    {
        "Awake", "Start", "Update", "LateUpdate", "FixedUpdate", "OnGUI", "OnEnable", "OnDisable", "OnDestroy", "OnApplicationPause",
        "OnApplicationFocus", "OnApplicationQuit", "OnPreRender", "OnPostRender", "OnRenderObject", "OnRenderImage", "OnPreCull",
        "OnWillRenderObject", "OnBecameVisible", "OnBecameInvisible", "OnLevelWasLoaded", "OnValidate", "Reset",
    };
}
