// Read-only Roslyn inventory. Never serializes source text or string values.
using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using System.Text.Json;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Syntax;

public static class SubsetInventory
{
    sealed class Unit {
        public string Assembly;
        public string Relative;
        public SyntaxTree Tree;
        public SemanticModel Model;
    }
    sealed class LiteralInfo {
        public string assembly {get;set;}
        public string source {get;set;}
        public int line {get;set;}
        public string type {get;set;}
        public string classification {get;set;} = "UNKNOWN";
        public string evidence_api {get;set;} = "";
        public int argument_index {get;set;} = -1;
        public bool empty {get;set;}
        public string Id;
    }
    static string TypeName(INamedTypeSymbol type) {
        if(type==null)return "<global>";
        if(type.ContainingType!=null)return TypeName(type.ContainingType)+"/"+type.MetadataName;
        return (type.ContainingNamespace.IsGlobalNamespace?"":type.ContainingNamespace.ToDisplayString()+".")+type.MetadataName;
    }
    static string MethodName(IMethodSymbol method) {
        method = (method.ReducedFrom??method).OriginalDefinition;
        return TypeName(method.ContainingType)+"::"+method.MetadataName+"("+
            string.Join(",",method.Parameters.Select(p=>p.Type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)))+")";
    }
    static string ParameterKey(IParameterSymbol p) {
        var method=p.ContainingSymbol as IMethodSymbol;
        return method==null?null:MethodName(method)+"#"+p.Ordinal;
    }
    static string LiteralKey(Unit unit,LiteralExpressionSyntax node)=>unit.Assembly+":"+unit.Relative+":"+node.SpanStart;
    static readonly Dictionary<string,HashSet<string>> Sinks = new Dictionary<string,HashSet<string>> {
        ["kairo.unity.ui.Graphics"] = new HashSet<string>{"DrawString","DrawString2","DrawStringBold","DrawStringBold2","DrawText","DrawTextBold"},
        ["kairo.unity.ui.Font"] = new HashSet<string>{"Draw"},
        ["kairo.unity.ui.TextLayout"] = new HashSet<string>{"SetText","Draw"},
        ["kairo.unity.ui.Balloon"] = new HashSet<string>{"Init"},
        ["kairo.unity.ui.Dialog"] = new HashSet<string>{"SetText","SetButtons","SetSoftLabel"},
        ["kairo.unity.ui.Canvas"] = new HashSet<string>{"SetSoftLabel"},
        ["kairo.unity.form.FormBase"] = new HashSet<string>{"SetSoftLabel"},
        ["kairo.unity.panel.Label"] = new HashSet<string>{"SetText"},
        ["kairo.unity.panel.FepPanel"] = new HashSet<string>{"SetSoftLabel"},
        ["UnityEngine.GUI"] = new HashSet<string>{"Label","Button","Box","TextField","TextArea","PasswordField"},
        ["UnityEngine.GUILayout"] = new HashSet<string>{"Label","Button","Box","TextField","TextArea","PasswordField"},
        ["UnityEngine.GUIContent"] = new HashSet<string>{".ctor"}
    };
    static bool IsSink(IMethodSymbol method,int position) {
        if(position<0 || method==null || method.Parameters.Length==0)return false;
        position=Math.Min(position,method.Parameters.Length-1);
        var p=method.Parameters[position].Type;
        bool text=p.SpecialType==SpecialType.System_String || p is IArrayTypeSymbol a && a.ElementType.SpecialType==SpecialType.System_String;
        return text && Sinks.TryGetValue(TypeName(method.ContainingType),out var names) && names.Contains(method.MetadataName);
    }
    static bool IsCodeKey(IMethodSymbol method,int position) {
        if(method==null)return false;
        string t=TypeName(method.ContainingType),n=method.Name;
        if(t=="UnityEngine.Resources" && n.StartsWith("Load"))return position==0;
        if(t=="UnityEngine.PlayerPrefs")return position==0;
        if(t=="System.Type" && n=="GetType")return true;
        if(t=="System.Reflection.Assembly" && n.StartsWith("Get"))return true;
        if(t=="UnityEngine.AndroidJavaObject" || t=="UnityEngine.AndroidJavaClass")return position==0;
        if(t.StartsWith("System.IO.") && (n.StartsWith("Open")||n.StartsWith("Read")||n.StartsWith("Write")||n=="Exists"))return position==0;
        return false;
    }
    // Value-preserving syntax only. Comparisons, dictionary keys, conditions and
    // unknown transformations are intentionally not treated as displayed text.
    static IEnumerable<ExpressionSyntax> ValueChildren(ExpressionSyntax e) {
        if(e is ParenthesizedExpressionSyntax p)yield return p.Expression;
        else if(e is CastExpressionSyntax c)yield return c.Expression;
        else if(e is BinaryExpressionSyntax b && (b.IsKind(SyntaxKind.AddExpression)||b.IsKind(SyntaxKind.CoalesceExpression))) {
            yield return b.Left;yield return b.Right;
        } else if(e is ConditionalExpressionSyntax q) {yield return q.WhenTrue;yield return q.WhenFalse;}
        else if(e is ArrayCreationExpressionSyntax a && a.Initializer!=null)foreach(var x in a.Initializer.Expressions)yield return x;
        else if(e is ImplicitArrayCreationExpressionSyntax ia)foreach(var x in ia.Initializer.Expressions)yield return x;
        else if(e is InitializerExpressionSyntax init)foreach(var x in init.Expressions)yield return x;
    }
    static void CollectValue(Unit u,ExpressionSyntax e,List<LiteralInfo> found,List<IParameterSymbol> parameters,
        Dictionary<string,LiteralInfo> literals,bool allowAlias,HashSet<ISymbol> visited=null) {
        if(e==null)return;
        if(e is LiteralExpressionSyntax literal && literal.IsKind(SyntaxKind.StringLiteralExpression)) {
            if(literals.TryGetValue(LiteralKey(u,literal),out var value))found.Add(value);
            return;
        }
        var symbol=u.Model.GetSymbolInfo(e).Symbol;
        if(symbol is IParameterSymbol parameter) {parameters.Add(parameter);return;}
        if(allowAlias && symbol is ILocalSymbol local) {
            visited=visited??new HashSet<ISymbol>(SymbolEqualityComparer.Default);
            if(visited.Add(local)) {
                var decl=local.DeclaringSyntaxReferences.FirstOrDefault()?.GetSyntax() as VariableDeclaratorSyntax;
                var scope=e.Ancestors().FirstOrDefault(n=>n is BaseMethodDeclarationSyntax||n is AccessorDeclarationSyntax||n is AnonymousFunctionExpressionSyntax);
                if(decl?.Initializer!=null && scope!=null) {
                    // Accept an initializer alias only when no subsequent assignment,
                    // ref/out use or increment can replace its value in this callable.
                    bool changed=scope.DescendantNodes().OfType<IdentifierNameSyntax>().Any(id=>
                        SymbolEqualityComparer.Default.Equals(u.Model.GetSymbolInfo(id).Symbol,local) &&
                        ((id.Parent is AssignmentExpressionSyntax ass && ass.Left==id) ||
                         id.Parent is PrefixUnaryExpressionSyntax || id.Parent is PostfixUnaryExpressionSyntax ||
                         (id.Parent is ArgumentSyntax ar && !ar.RefKindKeyword.IsKind(SyntaxKind.None))));
                    if(!changed)CollectValue(u,decl.Initializer.Value,found,parameters,literals,true,visited);
                }
            }
            return;
        }
        if(e is InvocationExpressionSyntax invocation && symbol is IMethodSymbol m &&
            TypeName(m.ContainingType)=="System.String" && (m.Name=="Concat"||m.Name=="Format")) {
            foreach(var argument in invocation.ArgumentList.Arguments)CollectValue(u,argument.Expression,found,parameters,literals,allowAlias,visited);
            return;
        }
        foreach(var child in ValueChildren(e))CollectValue(u,child,found,parameters,literals,allowAlias,visited);
    }
    static string Owner(Unit unit,SyntaxNode node) {
        var type=node.Ancestors().OfType<BaseTypeDeclarationSyntax>().FirstOrDefault();
        if(type!=null)return TypeName(unit.Model.GetDeclaredSymbol(type) as INamedTypeSymbol);
        return "<assembly>";
    }
    static IEnumerable<(IMethodSymbol method,SeparatedSyntaxList<ArgumentSyntax> arguments)> Calls(Unit u) {
        foreach(var call in u.Tree.GetRoot().DescendantNodes().OfType<InvocationExpressionSyntax>()) {
            var method=u.Model.GetSymbolInfo(call).Symbol as IMethodSymbol;
            if(method!=null)yield return (method,call.ArgumentList.Arguments);
        }
        foreach(var call in u.Tree.GetRoot().DescendantNodes().OfType<ObjectCreationExpressionSyntax>()) {
            var method=u.Model.GetSymbolInfo(call).Symbol as IMethodSymbol;
            if(method!=null && call.ArgumentList!=null)yield return(method,call.ArgumentList.Arguments);
        }
    }
    static int Position(IMethodSymbol method,ArgumentSyntax arg,int ordinary) {
        if(arg.NameColon!=null) {
            for(int n=0;n<method.Parameters.Length;n++)if(method.Parameters[n].Name==arg.NameColon.Name.Identifier.ValueText)return n;
        }
        return Math.Min(ordinary,Math.Max(0,method.Parameters.Length-1));
    }
    public static int Main(string[] args) {
        // Request holds only paths and metadata, never source snippets or literals.
        using var request=JsonDocument.Parse(File.ReadAllText(args[0]));
        var input=request.RootElement;
        string root=input.GetProperty("reference").GetString();
        var units=new List<Unit>();
        var diagnostics=new Dictionary<string,Dictionary<string,int>>();
        foreach(string assembly in new[]{"Assembly-CSharp","KairoLibrary"}) {
            var order=File.ReadAllLines(Path.Combine(root,"config","compile-order",assembly+".txt"))
                .Where(s=>s.Length>0&&!s.StartsWith("#")).ToList();
            string attributes="src/"+assembly+"/AssemblyInfo.cs";
            if(!order.Contains(attributes))order.Add(attributes);
            var trees=order.Select(relative=>CSharpSyntaxTree.ParseText(File.ReadAllText(Path.Combine(root,relative)),new CSharpParseOptions(LanguageVersion.Latest),relative)).ToArray();
            var refs=input.GetProperty("references").GetProperty(assembly).EnumerateArray().Select(x=>MetadataReference.CreateFromFile(x.GetString()));
            // Retargetable Unity profile references need desktop identity
            // unification, just as in the independent boundary inventory.
            var compilation=CSharpCompilation.Create(assembly,trees,refs,new CSharpCompilationOptions(OutputKind.DynamicallyLinkedLibrary,optimizationLevel:OptimizationLevel.Release)
                .WithAssemblyIdentityComparer(DesktopAssemblyIdentityComparer.Default));
            diagnostics[assembly]=compilation.GetDiagnostics().Where(d=>d.Severity==DiagnosticSeverity.Error).GroupBy(d=>d.Id).ToDictionary(g=>g.Key,g=>g.Count());
            foreach(var tree in trees)units.Add(new Unit{Assembly=assembly,Relative=tree.FilePath.Replace('\\','/'),Tree=tree,Model=compilation.GetSemanticModel(tree,true)});
        }
        var game=units.Where(u=>u.Assembly=="Assembly-CSharp").ToArray();
        var allGameNodes=game.SelectMany(u=>u.Tree.GetRoot().DescendantNodesAndSelf()).ToArray();
        var histogram=allGameNodes.GroupBy(n=>n.Kind().ToString()).OrderBy(g=>g.Key).ToDictionary(g=>g.Key,g=>g.Count());
        var tokens=game.SelectMany(u=>u.Tree.GetRoot().DescendantTokens()).GroupBy(t=>t.Kind().ToString()).OrderBy(g=>g.Key).ToDictionary(g=>g.Key,g=>g.Count());
        var literals=new Dictionary<string,LiteralInfo>();
        foreach(var u in units)foreach(var node in u.Tree.GetRoot().DescendantNodes().OfType<LiteralExpressionSyntax>().Where(n=>n.IsKind(SyntaxKind.StringLiteralExpression))) {
            string id=LiteralKey(u,node);
            literals.Add(id,new LiteralInfo{Id=id,assembly=u.Assembly,source=u.Relative,line=node.GetLocation().GetLineSpan().StartLinePosition.Line+1,type=Owner(u,node),empty=node.Token.ValueText.Length==0});
        }
        var calls=units.SelectMany(u=>Calls(u).Select(c=>(u,c.method,c.arguments))).ToArray();
        var wrapperParameters=new HashSet<string>();
        int rounds=0,newWrappers;
        do {
            newWrappers=0;rounds++;
            foreach(var call in calls)for(int n=0;n<call.arguments.Count;n++) {
                var argument=call.arguments[n];int position=Position(call.method,argument,n);
                string key=MethodName(call.method)+"#"+position;
                bool direct=IsSink(call.method,position);
                if(!direct&&!wrapperParameters.Contains(key))continue;
                var found=new List<LiteralInfo>();var parameters=new List<IParameterSymbol>();
                CollectValue(call.u,argument.Expression,found,parameters,literals,false);
                foreach(var literal in found)if(literal.classification=="UNKNOWN" || direct) {
                    literal.classification=direct?"ui_value_direct":"ui_value_wrapper";
                    literal.evidence_api=MethodName(call.method);literal.argument_index=position;
                }
                var viaAlias=new List<LiteralInfo>();var aliasParameters=new List<IParameterSymbol>();
                CollectValue(call.u,argument.Expression,viaAlias,aliasParameters,literals,true);
                foreach(var literal in viaAlias)if(literal.classification=="UNKNOWN") {
                    literal.classification="ui_value_single_assignment_local";
                    literal.evidence_api=MethodName(call.method);literal.argument_index=position;
                }
                foreach(var parameter in parameters.Concat(aliasParameters)) {
                    string pkey=ParameterKey(parameter);
                    if(pkey!=null&&wrapperParameters.Add(pkey))newWrappers++;
                }
            }
        }while(newWrappers>0 && rounds<64);
        foreach(var call in calls)for(int n=0;n<call.arguments.Count;n++) {
            int position=Position(call.method,call.arguments[n],n);
            if(!IsCodeKey(call.method,position))continue;
            var found=new List<LiteralInfo>();var parameters=new List<IParameterSymbol>();
            CollectValue(call.u,call.arguments[n].Expression,found,parameters,literals,false);
            foreach(var literal in found)if(literal.classification=="UNKNOWN") {
                literal.classification="code_key_direct";literal.evidence_api=MethodName(call.method);literal.argument_index=position;
            }
        }
        var byClass=literals.Values.GroupBy(x=>new{x.assembly,x.type}).OrderBy(g=>g.Key.assembly).ThenBy(g=>g.Key.type).Select(g=>new{
            assembly=g.Key.assembly,type=g.Key.type,total=g.Count(),empty=g.Count(x=>x.empty),
            ui_value_direct=g.Count(x=>x.classification=="ui_value_direct"),
            ui_value_wrapper=g.Count(x=>x.classification=="ui_value_wrapper"),
            ui_value_single_assignment_local=g.Count(x=>x.classification=="ui_value_single_assignment_local"),
            code_key_direct=g.Count(x=>x.classification=="code_key_direct"),
            unknown=g.Count(x=>x.classification=="UNKNOWN"),
            ui_nonempty=g.Count(x=>!x.empty&&x.classification.StartsWith("ui_value_")),
            sources=g.Select(x=>x.source).Distinct().OrderBy(x=>x).ToArray()
        }).ToArray();
        var features=new Dictionary<string,int>();
        string[] kinds={"ClassDeclaration","StructDeclaration","InterfaceDeclaration","EnumDeclaration","DelegateDeclaration","MethodDeclaration","ConstructorDeclaration","DestructorDeclaration","OperatorDeclaration","ConversionOperatorDeclaration","PropertyDeclaration","IndexerDeclaration","EventDeclaration","EventFieldDeclaration","FieldDeclaration","VariableDeclarator","LocalDeclarationStatement","IfStatement","SwitchStatement","SwitchExpression","ForStatement","ForEachStatement","ForEachVariableStatement","WhileStatement","DoStatement","BreakStatement","ContinueStatement","GotoStatement","ReturnStatement","YieldReturnStatement","YieldBreakStatement","TryStatement","CatchClause","FinallyClause","ThrowStatement","ThrowExpression","UsingStatement","LockStatement","UnsafeStatement","FixedStatement","CheckedStatement","CheckedExpression","UncheckedStatement","UncheckedExpression","SimpleLambdaExpression","ParenthesizedLambdaExpression","AnonymousMethodExpression","AnonymousObjectCreationExpression","QueryExpression","AwaitExpression","AsyncKeyword","LocalFunctionStatement","ConditionalAccessExpression","CoalesceExpression","CoalesceAssignmentExpression","InterpolatedStringExpression","NameOfExpression","IsPatternExpression","TupleExpression","TupleType","ArrayCreationExpression","ImplicitArrayCreationExpression","StackAllocArrayCreationExpression","CollectionExpression","ObjectCreationExpression","ImplicitObjectCreationExpression","ElementAccessExpression","AssignmentExpression","ConditionalExpression","CastExpression","TypeOfExpression","SizeOfExpression","DefaultExpression"};
        foreach(var kind in kinds.Where(k=>k!="AssignmentExpression"&&k!="AsyncKeyword"&&k!="NameOfExpression"))
            features[kind]=histogram.TryGetValue(kind,out var count)?count:0;
        features["VarDeclarations"]=allGameNodes.OfType<VariableDeclarationSyntax>().Count(v=>v.Type.IsVar);
        features["ExplicitBaseLists"]=allGameNodes.OfType<BaseListSyntax>().Count();
        features["BaseTypeEntries"]=allGameNodes.OfType<BaseTypeSyntax>().Count();
        features["GenericTypeDeclarations"]=allGameNodes.OfType<TypeDeclarationSyntax>().Count(t=>t.TypeParameterList!=null);
        features["GenericMethodDeclarations"]=allGameNodes.OfType<MethodDeclarationSyntax>().Count(t=>t.TypeParameterList!=null);
        features["RefArguments"]=allGameNodes.OfType<ArgumentSyntax>().Count(a=>a.RefKindKeyword.IsKind(SyntaxKind.RefKeyword));
        features["OutArguments"]=allGameNodes.OfType<ArgumentSyntax>().Count(a=>a.RefKindKeyword.IsKind(SyntaxKind.OutKeyword));
        features["InArguments"]=allGameNodes.OfType<ArgumentSyntax>().Count(a=>a.RefKindKeyword.IsKind(SyntaxKind.InKeyword));
        features["ParamsParameters"]=allGameNodes.OfType<ParameterSyntax>().Count(p=>p.Modifiers.Any(t=>t.IsKind(SyntaxKind.ParamsKeyword)));
        features["MethodBodies"]=allGameNodes.OfType<BaseMethodDeclarationSyntax>().Count(m=>m.Body!=null||m.ExpressionBody!=null);
        features["AccessorBodies"]=allGameNodes.OfType<AccessorDeclarationSyntax>().Count(m=>m.Body!=null||m.ExpressionBody!=null);
        features["EmptyStatements"]=allGameNodes.OfType<EmptyStatementSyntax>().Count();
        features["StringLiterals"]=game.Sum(u=>u.Tree.GetRoot().DescendantNodes().Count(n=>n.IsKind(SyntaxKind.StringLiteralExpression)));
        features["AssignmentExpressions"]=allGameNodes.OfType<AssignmentExpressionSyntax>().Count();
        features["AnonymousFunctions"]=allGameNodes.OfType<AnonymousFunctionExpressionSyntax>().Count();
        features["AsyncModifiers"]=allGameNodes.OfType<MemberDeclarationSyntax>().Count(m=>m.ChildTokens().Any(t=>t.IsKind(SyntaxKind.AsyncKeyword)));
        features["NameofExpressions"]=allGameNodes.OfType<InvocationExpressionSyntax>().Count(m=>m.Expression is IdentifierNameSyntax id&&id.Identifier.ValueText=="nameof");
        var captures=new List<object>();int analyzedCaptures=0,captureFailures=0,functionsWithCapturedSymbols=0,capturedSymbolOccurrences=0;
        foreach(var u in game)foreach(var function in u.Tree.GetRoot().DescendantNodes().OfType<AnonymousFunctionExpressionSyntax>()) {
            try {
                var flow=u.Model.AnalyzeDataFlow(function);
                if(flow==null||!flow.Succeeded){captureFailures++;continue;}
                analyzedCaptures++;
                int count=flow.CapturedInside.Length;
                if(count>0)functionsWithCapturedSymbols++;
                capturedSymbolOccurrences+=count;
                captures.Add(new{source=u.Relative,line=function.GetLocation().GetLineSpan().StartLinePosition.Line+1,
                    type=Owner(u,function),syntax=function.Kind().ToString(),captured_symbols=count,
                    captured_symbol_kinds=flow.CapturedInside.GroupBy(s=>s.Kind.ToString()).ToDictionary(g=>g.Key,g=>g.Count())});
            }catch(ArgumentException){captureFailures++;}
        }
        features["AnonymousFunctionsCaptureAnalysisSucceeded"]=analyzedCaptures;
        features["AnonymousFunctionsCaptureAnalysisFailed"]=captureFailures;
        features["AnonymousFunctionsWithCapturedSymbols"]=functionsWithCapturedSymbols;
        features["CapturedSymbolOccurrences"]=capturedSymbolOccurrences;
        var result=new{operation="roslyn-read-only-syntax-and-string-use-inventory",roslyn_version=typeof(CSharpCompilation).Assembly.GetName().Version.ToString(),
            source_files=game.Length,kairo_source_files=units.Count(u=>u.Assembly=="KairoLibrary"),
            syntax_nodes=allGameNodes.Length,syntax_kind_count=histogram.Count,syntax_histogram=histogram,token_histogram=tokens,features,
            semantic_errors_by_code=diagnostics,wrapper_parameter_count=wrapperParameters.Count,wrapper_fixed_point_rounds=rounds,
            wrapper_limit_reached=newWrappers>0,string_occurrences=literals.Count,string_class_counts=byClass,
            string_occurrence_evidence=literals.Values.OrderBy(x=>x.assembly).ThenBy(x=>x.source).ThenBy(x=>x.line).ToArray(),
            closure_capture_evidence=captures,
            no_literal_values_serialized=true,sink_definitions=Sinks.ToDictionary(x=>x.Key,x=>x.Value.OrderBy(v=>v).ToArray())};
        File.WriteAllText(args[1],JsonSerializer.Serialize(result,new JsonSerializerOptions{WriteIndented=true}));
        Console.WriteLine(JsonSerializer.Serialize(new{source_files=game.Length,syntax_nodes=allGameNodes.Length,syntax_kinds=histogram.Count,string_occurrences=literals.Count,semantic_error_count=diagnostics.Sum(x=>x.Value.Values.Sum())}));
        return 0;
    }
}
