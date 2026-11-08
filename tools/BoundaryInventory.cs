// Static semantic inventory only. Never executes or emits the game.
using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using System.Text.Json;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Syntax;
using Microsoft.CodeAnalysis.Operations;

public static class BoundaryInventory
{
    sealed class RefRow
    {
        public string assembly { get; set; }
        public string id { get; set; }
        public string type { get; set; }
        public string member { get; set; }
        public string kind { get; set; }
        public SortedSet<string> callers { get; set; } = new SortedSet<string>();
        public SortedSet<string> sites { get; set; } = new SortedSet<string>();
        public SortedSet<string> roles { get; set; } = new SortedSet<string>();
        public int sourceOccurrences { get; set; }
        public HashSet<string> unique { get; set; } = new HashSet<string>();
    }

    static ISymbol Canonical(ISymbol s)
    {
        if (s is IAliasSymbol a) s = a.Target;
        if (s is IMethodSymbol m)
        {
            if (m.AssociatedSymbol != null) s = m.AssociatedSymbol;
            else s = (m.ReducedFrom ?? m).OriginalDefinition;
        }
        return s?.OriginalDefinition;
    }

    static string TypeName(ITypeSymbol t) => t?.ToDisplayString(SymbolDisplayFormat.CSharpErrorMessageFormat) ?? "";
    static string SymbolId(ISymbol s) => s.GetDocumentationCommentId() ?? s.ToDisplayString(SymbolDisplayFormat.CSharpErrorMessageFormat);

    static string Caller(SemanticModel model, SyntaxNode n)
    {
        var declaring = n.AncestorsAndSelf().FirstOrDefault(p => p is BaseMethodDeclarationSyntax || p is AccessorDeclarationSyntax || p is PropertyDeclarationSyntax ||
            (p is VariableDeclaratorSyntax v && v.Parent?.Parent is BaseFieldDeclarationSyntax) || p is BaseTypeDeclarationSyntax);
        ISymbol s = declaring == null ? null : model.GetDeclaredSymbol(declaring);
        if (s == null) s = model.GetEnclosingSymbol(n.SpanStart);
        while (s is IMethodSymbol m && m.MethodKind == MethodKind.AnonymousFunction) s = s.ContainingSymbol;
        return s == null ? "<file>" : SymbolId(s);
    }

    public static int Main(string[] args)
    {
        var input = JsonDocument.Parse(File.ReadAllText(args[0]));
        var root = input.RootElement;
        var sources = root.GetProperty("sources").EnumerateArray().Select(x => x.GetString()).ToArray();
        var paths = root.GetProperty("references").EnumerateArray().Select(x => x.GetString()).ToArray();
        var trees = sources.Select(p => CSharpSyntaxTree.ParseText(File.ReadAllText(p), new CSharpParseOptions(LanguageVersion.Latest), p)).ToArray();
        var compilation = CSharpCompilation.Create("Assembly-CSharp", trees, paths.Select(p => MetadataReference.CreateFromFile(p)),
            new CSharpCompilationOptions(OutputKind.DynamicallyLinkedLibrary, allowUnsafe:false, optimizationLevel:OptimizationLevel.Release)
                .WithAssemblyIdentityComparer(DesktopAssemblyIdentityComparer.Default));
        var rows = new Dictionary<string,RefRow>();
        var unresolved = new List<object>();
        long nodeCount = 0, symbolQueries = 0, typeQueries = 0, operationCount = 0;
        foreach (var tree in trees)
        {
            var model = compilation.GetSemanticModel(tree, true);
            var syntax = tree.GetRoot();
            void Add(ISymbol symbol, SyntaxNode n, string role)
            {
                symbol = Canonical(symbol);
                if (symbol == null) return;
                if (symbol is IArrayTypeSymbol arr) { Add(arr.ElementType, n, role+":array-element"); return; }
                if (symbol is IPointerTypeSymbol ptr) { Add(ptr.PointedAtType, n, role+":pointer-element"); return; }
                var assembly = symbol.ContainingAssembly?.Name;
                if (assembly != "KairoLibrary" && assembly != "UnityEngine") return;
                if (!(symbol is INamedTypeSymbol || symbol is IMethodSymbol || symbol is IPropertySymbol || symbol is IFieldSymbol || symbol is IEventSymbol)) return;
                if(!(symbol is INamedTypeSymbol) && symbol.ContainingType!=null)
                    AddType(symbol.ContainingType,n,"member-declaring-type");
                string id = SymbolId(symbol), key=assembly+"::"+id;
                // A call has several binding syntax nodes (identifier, access,
                // invocation). Count the call once, not once per nested name.
                if (symbol is IMethodSymbol)
                    foreach(var parent in n.AncestorsAndSelf())
                        if(parent is InvocationExpressionSyntax || parent is ObjectCreationExpressionSyntax || parent is ConstructorInitializerSyntax)
                            if(SymbolEqualityComparer.Default.Equals(Canonical(model.GetSymbolInfo(parent).Symbol),symbol)){n=parent;break;}
                if (!rows.TryGetValue(key, out var row))
                {
                    row = new RefRow {assembly=assembly,id=id,type=TypeName(symbol as ITypeSymbol ?? symbol.ContainingType),
                        member=symbol is INamedTypeSymbol ? "<type>" : symbol.ToDisplayString(SymbolDisplayFormat.CSharpErrorMessageFormat),kind=symbol.Kind.ToString()};
                    rows.Add(key,row);
                }
                string unique=tree.FilePath+":"+n.SpanStart+":"+n.Span.Length;
                if(row.unique.Add(unique))row.sourceOccurrences++;
                row.callers.Add(Caller(model,n));row.roles.Add(role);
                var line=tree.GetLineSpan(n.Span).StartLinePosition;
                row.sites.Add(Path.GetFileName(tree.FilePath)+":"+(line.Line+1)+":"+(line.Character+1));
            }
            void AddType(ITypeSymbol type, SyntaxNode n, string role)
            {
                if(type is IArrayTypeSymbol a){AddType(a.ElementType,n,role+":array-element");return;}
                if(type is IPointerTypeSymbol p){AddType(p.PointedAtType,n,role+":pointer-element");return;}
                if(type is INamedTypeSymbol g)
                {
                    Add(g.OriginalDefinition,n,role);
                    foreach(var argument in g.TypeArguments) if(argument.TypeKind!=TypeKind.TypeParameter) AddType(argument,n,"generic-argument");
                }
            }
            void BindOperation(IOperation operation)
            {
                if(operation==null)return;
                operationCount++;
                if(operation is IInvocationOperation invocation)Add(invocation.TargetMethod,operation.Syntax,"bound-operation-call");
                if(operation is IObjectCreationOperation creation)Add(creation.Constructor,operation.Syntax,"bound-operation-constructor");
                if(operation is IMethodReferenceOperation methodReference)Add(methodReference.Method,operation.Syntax,"bound-operation-method-group");
                if(operation is IFieldReferenceOperation fieldReference)Add(fieldReference.Field,operation.Syntax,"bound-operation-field");
                if(operation is IPropertyReferenceOperation propertyReference)Add(propertyReference.Property,operation.Syntax,"bound-operation-property");
                if(operation is IEventReferenceOperation eventReference)Add(eventReference.Event,operation.Syntax,"bound-operation-event");
                if(operation is IConversionOperation conversion)Add(conversion.OperatorMethod,operation.Syntax,"bound-operation-conversion");
                if(operation is IBinaryOperation binary)Add(binary.OperatorMethod,operation.Syntax,"bound-operation-operator");
                if(operation is IUnaryOperation unary)Add(unary.OperatorMethod,operation.Syntax,"bound-operation-operator");
                if(operation is ICompoundAssignmentOperation compound)Add(compound.OperatorMethod,operation.Syntax,"bound-operation-operator");
                if(operation is IIncrementOrDecrementOperation increment)Add(increment.OperatorMethod,operation.Syntax,"bound-operation-operator");
                foreach(var child in operation.ChildOperations)BindOperation(child);
            }
            // All nodes are visited: names, signatures, base types, attributes,
            // constructors, fields, constants and inferred expression types.
            foreach(var node in syntax.DescendantNodesAndSelf())
            {
                nodeCount++;
                if(node is BaseMethodDeclarationSyntax || node is AccessorDeclarationSyntax || node is EqualsValueClauseSyntax || node is ArrowExpressionClauseSyntax)
                {
                    var rootOperation=model.GetOperation(node);
                    if(rootOperation!=null && rootOperation.Parent==null)BindOperation(rootOperation);
                }
                if(node is TypeDeclarationSyntax declaration)
                {
                    var named=model.GetDeclaredSymbol(declaration);
                    if(named!=null && named.InstanceConstructors.Any(c=>c.IsImplicitlyDeclared && c.Parameters.Length==0))
                    {
                        var baseConstructor=named.BaseType?.InstanceConstructors.SingleOrDefault(c=>c.Parameters.Length==0);
                        Add(baseConstructor,node,"implicit-default-base-constructor");
                    }
                }
                if(node is ExpressionSyntax || node is TypeSyntax || node is AttributeSyntax || node is ConstructorInitializerSyntax)
                {
                    var info=model.GetSymbolInfo(node);symbolQueries++;
                    if(info.Symbol!=null)Add(info.Symbol,node,"source-symbol");
                    else if(info.CandidateSymbols.Length>0)
                        unresolved.Add(new {file=Path.GetFileName(tree.FilePath),line=tree.GetLineSpan(node.Span).StartLinePosition.Line+1,kind=node.Kind().ToString(),reason=info.CandidateReason.ToString(),candidate_count=info.CandidateSymbols.Length});
                }
                if(node is ExpressionSyntax || node is TypeSyntax)
                {
                    var ti=model.GetTypeInfo(node);typeQueries++;
                    if(ti.Type!=null)AddType(ti.Type,node,"expression-or-signature-type");
                    if(ti.ConvertedType!=null && !SymbolEqualityComparer.Default.Equals(ti.Type,ti.ConvertedType))AddType(ti.ConvertedType,node,"converted-type");
                }
                // Bind implicit protocol members too, e.g. foreach/using operations.
                if(node is ForEachStatementSyntax fe)
                {
                    var i=model.GetForEachStatementInfo(fe);
                    Add(i.GetEnumeratorMethod,node,"foreach-protocol");Add(i.MoveNextMethod,node,"foreach-protocol");
                    Add(i.CurrentProperty,node,"foreach-protocol");Add(i.DisposeMethod,node,"foreach-protocol");
                }
                if(node is BinaryExpressionSyntax || node is PrefixUnaryExpressionSyntax || node is PostfixUnaryExpressionSyntax || node is AssignmentExpressionSyntax)
                {
                    var op=model.GetOperation(node);operationCount++;
                    if(op is IBinaryOperation b)Add(b.OperatorMethod,node,"bound-operator");
                    if(op is IUnaryOperation u)Add(u.OperatorMethod,node,"bound-operator");
                    if(op is ICompoundAssignmentOperation ca)Add(ca.OperatorMethod,node,"bound-operator");
                    if(op is IIncrementOrDecrementOperation inc)Add(inc.OperatorMethod,node,"bound-operator");
                }
            }
        }
        var diagnostics=compilation.GetDiagnostics().Where(d=>d.Severity==DiagnosticSeverity.Error).Select(d=>new {
            code=d.Id,file=d.Location.IsInSource?Path.GetFileName(d.Location.SourceTree.FilePath):"<compilation>",
            line=d.Location.IsInSource?d.Location.GetLineSpan().StartLinePosition.Line+1:0}).ToArray();
        var output=new {schema_version=1,operation="roslyn-semantic-boundary-inventory",compiler=typeof(CSharpCompilation).Assembly.GetName().Version.ToString(),
            source_files=sources.Length,node_count=nodeCount,symbol_queries=symbolQueries,type_queries=typeQueries,operator_operation_queries=operationCount,
            compilation_errors=diagnostics,unresolved_symbol_sites=unresolved,
            members=rows.Values.OrderBy(x=>x.assembly).ThenBy(x=>x.id).Select(x=>new {x.assembly,x.id,x.type,x.member,x.kind,callers=x.callers.ToArray(),sites=x.sites.ToArray(),roles=x.roles.ToArray(),source_occurrences=x.sourceOccurrences}).ToArray(),
            literal_values_emitted=false,game_emitted=false,game_executed=false};
        File.WriteAllText(args[1],JsonSerializer.Serialize(output,new JsonSerializerOptions{WriteIndented=true}));
        Console.WriteLine(JsonSerializer.Serialize(new {source_files=sources.Length,unique_symbols=rows.Count,compilation_errors=diagnostics.Length,unresolved_sites=unresolved.Count}));
        return diagnostics.Length==0?0:1;
    }
}
