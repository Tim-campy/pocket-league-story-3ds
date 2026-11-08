// Bound source inventory; never emits game text, keys or original binaries.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.Json;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Syntax;

class CultureRequest {
    public string root{get;set;}="";
    public string[] kairo_sources{get;set;}=Array.Empty<string>();
    public string[] game_sources{get;set;}=Array.Empty<string>();
    public string[] references{get;set;}=Array.Empty<string>();
}
class CultureRow {
    public string assembly{get;set;}="";public string caller{get;set;}="";public string callee{get;set;}="";
    public string source{get;set;}="";public int line{get;set;}public int span{get;set;}
    public string operation{get;set;}="";public string culture{get;set;}="";
    public string[] origins{get;set;}=Array.Empty<string>();public bool default_comparer{get;set;}
}
class CultureInventory {
    static void SelfTest(){
        const string source=@"using System;using System.Globalization;using System.Collections.Generic;
class Fixture{void Cases(string x,string y,bool ignore){
x.IndexOf(y);x.IndexOf(y,0);x.LastIndexOf(y);x.StartsWith(y);x.EndsWith(y);
x.Equals(y,StringComparison.CurrentCultureIgnoreCase);
x.Equals(y,ignore?StringComparison.CurrentCulture:StringComparison.CurrentCultureIgnoreCase);
x.ToLower();char.ToUpper('a');x.CompareTo(y);
x.IndexOf('a');x.Equals(y);x.Equals(y,StringComparison.Ordinal);string.CompareOrdinal(x,y);
new List<string>().Sort();new Dictionary<string,int>().ContainsKey(x);}}";
        var core=Path.GetDirectoryName(typeof(object).Assembly.Location)!;
        var refs=new[]{typeof(object).Assembly.Location,Path.Combine(core,"System.Runtime.dll"),Path.Combine(core,"System.Collections.dll")}.Distinct().Select(p=>MetadataReference.CreateFromFile(p));
        var tree=CSharpSyntaxTree.ParseText(source);var compilation=CSharpCompilation.Create("OwnCultureFixture",new[]{tree},refs,new CSharpCompilationOptions(OutputKind.DynamicallyLinkedLibrary));
        if(compilation.GetDiagnostics().Any(d=>d.Severity==DiagnosticSeverity.Error))throw new Exception("Own fixture binding failed");
        var m=compilation.GetSemanticModel(tree);var counts=new Dictionary<string,int>();int excluded=0;bool conditional=false;
        foreach(var call in tree.GetRoot().DescendantNodes().OfType<InvocationExpressionSyntax>()){
            var method=(IMethodSymbol)m.GetSymbolInfo(call).Symbol!;var row=Sensitive(call,method,m);
            if(row==null){++excluded;continue;}counts[row.Value.operation]=counts.GetValueOrDefault(row.Value.operation)+1;
            conditional|=row.Value.culture=="one_of(CurrentCulture|CurrentCultureIgnoreCase)";
        }
        if(counts.GetValueOrDefault("historical_ordinal")!=1||counts.GetValueOrDefault("search")!=4||counts.GetValueOrDefault("case_mapping")!=2||counts.GetValueOrDefault("comparison")!=3||counts.GetValueOrDefault("ordering")!=1||excluded!=5||!conditional)throw new Exception("Culture inventory semantic classification failed");
        Console.WriteLine(JsonSerializer.Serialize(new{status="PASS",classified_invocations=16,excluded_ordinal_or_equality=excluded,conditional_selector_proved=conditional}));
    }
    static string Id(ISymbol s)=>s.OriginalDefinition.GetDocumentationCommentId()??s.ToDisplayString();
    static string Owner(IMethodSymbol s)=>s.ContainingType.OriginalDefinition.ToDisplayString();
    static string Culture(ExpressionSyntax? expression,SemanticModel m){
        if(expression==null)return "CurrentCulture (implicit)";
        if(expression is ConditionalExpressionSyntax choice)return "one_of("+Culture(choice.WhenTrue,m)+"|"+Culture(choice.WhenFalse,m)+")";
        var symbol=m.GetSymbolInfo(expression).Symbol;
        if(symbol?.ContainingType?.ToDisplayString()=="System.Globalization.CultureInfo")return symbol.Name;
        if(symbol?.ContainingType?.ToDisplayString()=="System.StringComparison")return symbol.Name;
        if(expression.IsKind(SyntaxKind.NullLiteralExpression))return "CurrentCulture (null culture argument)";
        if(expression is ObjectCreationExpressionSyntax creation&&m.GetTypeInfo(creation).Type?.ToDisplayString()=="System.Globalization.CultureInfo"){
            var arg=creation.ArgumentList?.Arguments.FirstOrDefault()?.Expression;
            if(arg!=null&&m.GetConstantValue(arg) is {HasValue:true,Value:string name})return "CultureInfo("+name+")";
        }
        return "UNKNOWN: "+(symbol==null?expression.Kind().ToString():Id(symbol));
    }
    static (string operation,string culture,bool comparer)? Sensitive(InvocationExpressionSyntax call,IMethodSymbol method,SemanticModel m){
        var owner=Owner(method);var name=method.Name;
        if(owner=="string"||owner=="System.String"){
            if(name is "CompareOrdinal" or "ToLowerInvariant" or "ToUpperInvariant")return name.Contains("Invariant")?("case_mapping","InvariantCulture",false):null;
            bool search=name is "IndexOf" or "LastIndexOf" or "StartsWith" or "EndsWith";
            bool comparison=name is "Compare" or "CompareTo" or "Equals";
            bool casing=name is "ToLower" or "ToUpper";
            if(!search&&!comparison&&!casing)return null;
            if(name=="IndexOf"&&method.Parameters.Length==1&&method.Parameters[0].Type.SpecialType==SpecialType.System_String)return ("historical_ordinal","Ordinal (Mono 2.6 string overload)",false);
            if(search&&(name is "IndexOf" or "LastIndexOf")&&method.Parameters.FirstOrDefault()?.Type.SpecialType!=SpecialType.System_String)return null;
            var selector=method.Parameters.FirstOrDefault(p=>p.Type.ToDisplayString() is "System.StringComparison" or "System.Globalization.CultureInfo");
            if(name=="Equals"&&selector==null)return null; // Ordinary string equality is ordinal.
            var arg=selector==null?null:call.ArgumentList.Arguments.ElementAtOrDefault(selector.Ordinal)?.Expression;
            var culture=Culture(arg,m);if(culture is "Ordinal" or "OrdinalIgnoreCase")return null;
            return (casing?"case_mapping":search?"search":"comparison",culture,false);
        }
        if(owner=="char"||owner=="System.Char"){
            if(name is "ToLower" or "ToUpper" or "ToLowerInvariant" or "ToUpperInvariant"){
                var parameter=method.Parameters.FirstOrDefault(p=>p.Type.ToDisplayString()=="System.Globalization.CultureInfo");
                return ("case_mapping",name.EndsWith("Invariant",StringComparison.Ordinal)?"InvariantCulture":Culture(parameter==null?null:call.ArgumentList.Arguments.ElementAtOrDefault(parameter.Ordinal)?.Expression,m),false);
            }
        }
        if(owner=="System.Globalization.CompareInfo"&&name is "Compare" or "IndexOf" or "LastIndexOf" or "IsPrefix" or "IsSuffix" or "GetSortKey")return ("compare_info","UNKNOWN: CompareInfo instance",false);
        // Default generic string comparers use CurrentCulture; equality-based
        // Dictionary<string,T> and List<string>.IndexOf are deliberately excluded.
        if(name is "Sort" or "BinarySearch" or "OrderBy" or "OrderByDescending" or "ThenBy" or "ThenByDescending"){
            bool standard=owner is "System.Array" or "System.Linq.Enumerable"||owner.StartsWith("System.Collections.Generic.List<",StringComparison.Ordinal);
            bool strings=method.TypeArguments.Any(t=>t.SpecialType==SpecialType.System_String)||method.ContainingType.TypeArguments.Any(t=>t.SpecialType==SpecialType.System_String);
            strings|=call.ArgumentList.Arguments.Any(a=>m.GetTypeInfo(a.Expression).Type is IArrayTypeSymbol ar&&ar.ElementType.SpecialType==SpecialType.System_String);
            if(standard&&strings){bool custom=method.Parameters.Any(p=>p.Type.ToDisplayString().Contains("Comparer")||p.Type.ToDisplayString().Contains("Comparison"));return ("ordering",custom?"UNKNOWN: explicit comparer":"CurrentCulture (default string comparer)",!custom);}
        }
        if(owner.StartsWith("System.Collections.Generic.Comparer<",StringComparison.Ordinal)&&method.ContainingType.TypeArguments.Any(t=>t.SpecialType==SpecialType.System_String))return ("ordering","UNKNOWN: comparer instance",false);
        return null;
    }
    static IEnumerable<string> Origins(ExpressionSyntax e,SemanticModel m,HashSet<ISymbol> seen,int depth=0){
        if(depth>8)return new[]{"UNKNOWN: origin depth limit"};
        if(e is LiteralExpressionSyntax literal)return new[]{literal.IsKind(SyntaxKind.StringLiteralExpression)?"source_string_literal (content omitted)":"source_literal"};
        if(e is ParenthesizedExpressionSyntax parenthesis)return Origins(parenthesis.Expression,m,seen,depth+1);
        if(e is CastExpressionSyntax cast)return Origins(cast.Expression,m,seen,depth+1);
        if(e is ElementAccessExpressionSyntax element)return Origins(element.Expression,m,seen,depth+1).Select(s=>"element_of:"+s);
        var symbol=m.GetSymbolInfo(e).Symbol;
        if(symbol is IParameterSymbol parameter)return new[]{"parameter:"+Id(parameter.ContainingSymbol)+"#"+parameter.Ordinal};
        if(symbol is IFieldSymbol field)return new[]{"field:"+Id(field)};
        if(symbol is IPropertySymbol property)return new[]{"property:"+Id(property)};
        if(symbol is ILocalSymbol local){
            if(!seen.Add(local))return new[]{"local_cycle:"+local.Name};
            var expressions=new List<ExpressionSyntax>();
            foreach(var syntax in local.DeclaringSyntaxReferences.Select(r=>r.GetSyntax()))if(syntax is VariableDeclaratorSyntax declarator&&declarator.Initializer!=null)expressions.Add(declarator.Initializer.Value);
            var body=e.Ancestors().FirstOrDefault(n=>n is BaseMethodDeclarationSyntax||n is AccessorDeclarationSyntax);
            if(body!=null)foreach(var assignment in body.DescendantNodes().OfType<AssignmentExpressionSyntax>())if(SymbolEqualityComparer.Default.Equals(m.GetSymbolInfo(assignment.Left).Symbol,local))expressions.Add(assignment.Right);
            return expressions.Count==0?new[]{"local_without_initializer:"+local.Name}:expressions.SelectMany(v=>Origins(v,m,new HashSet<ISymbol>(seen,SymbolEqualityComparer.Default),depth+1));
        }
        if(symbol is IMethodSymbol method)return new[]{"return:"+Id(method)};
        if(e is BinaryExpressionSyntax binary)return Origins(binary.Left,m,seen,depth+1).Concat(Origins(binary.Right,m,seen,depth+1));
        if(e is ConditionalExpressionSyntax conditional)return Origins(conditional.WhenTrue,m,seen,depth+1).Concat(Origins(conditional.WhenFalse,m,seen,depth+1));
        return new[]{"UNKNOWN: "+e.Kind()};
    }
    static void Main(string[] args){
        if(args.Length==1&&args[0]=="--self-test"){SelfTest();return;}
        var request=JsonSerializer.Deserialize<CultureRequest>(File.ReadAllText(args[0]))!;
        var refs=request.references.Select(p=>MetadataReference.CreateFromFile(p)).ToArray();
        var options=new CSharpCompilationOptions(OutputKind.DynamicallyLinkedLibrary,metadataImportOptions:MetadataImportOptions.All,assemblyIdentityComparer:DesktopAssemblyIdentityComparer.Default);
        SyntaxTree[] Parse(string[] files)=>files.Select(p=>CSharpSyntaxTree.ParseText(File.ReadAllText(p),path:p)).ToArray();
        var kairo=CSharpCompilation.Create("KairoLibrary",Parse(request.kairo_sources),refs,options);
        var game=CSharpCompilation.Create("Assembly-CSharp",Parse(request.game_sources),refs.Append<MetadataReference>(kairo.ToMetadataReference()),options);
        var diagnostics=kairo.GetDiagnostics().Concat(game.GetDiagnostics()).Where(d=>d.Severity==DiagnosticSeverity.Error).ToArray();
        if(diagnostics.Length>0)throw new InvalidOperationException("Binding failed: "+String.Join("\n",diagnostics.Take(8).Select(d=>d.Id+" "+d.GetMessage())));
        var rows=new List<CultureRow>();var graph=new Dictionary<string,HashSet<string>>();var cultureWrites=new List<object>();
        var unresolved=new Dictionary<string,int>();int invocations=0;
        foreach(var compilation in new[]{kairo,game})foreach(var tree in compilation.SyntaxTrees){
            var m=compilation.GetSemanticModel(tree);var root=tree.GetRoot();
            foreach(var assignment in root.DescendantNodes().OfType<AssignmentExpressionSyntax>()){
                var target=m.GetSymbolInfo(assignment.Left).Symbol;
                if(target?.Name is "CurrentCulture" or "CurrentUICulture" or "DefaultThreadCurrentCulture" or "DefaultThreadCurrentUICulture")cultureWrites.Add(new{assembly=compilation.AssemblyName,symbol=Id(target),source=Path.GetRelativePath(request.root,tree.FilePath).Replace('\\','/'),line=assignment.GetLocation().GetLineSpan().StartLinePosition.Line+1,value=Culture(assignment.Right,m)});
            }
            foreach(var call in root.DescendantNodes().OfType<InvocationExpressionSyntax>()){
                ++invocations;var info=m.GetSymbolInfo(call);if(info.Symbol is not IMethodSymbol method){var kind=info.CandidateReason.ToString();unresolved[kind]=unresolved.GetValueOrDefault(kind)+1;continue;}
                var caller=m.GetEnclosingSymbol(call.SpanStart);while(caller!=null&&(caller is not IMethodSymbol enclosing||enclosing.MethodKind is MethodKind.AnonymousFunction or MethodKind.LocalFunction))caller=caller.ContainingSymbol;
                var callerId=caller==null?"UNKNOWN: initializer":Id(caller);var callee=Id(method.ReducedFrom??method);
                if(!graph.TryGetValue(callerId,out var edges))graph[callerId]=edges=new();edges.Add(callee);
                var sensitive=Sensitive(call,method,m);if(sensitive==null)continue;
                var inputs=new List<ExpressionSyntax>();
                if(!method.IsStatic&&call.Expression is MemberAccessExpressionSyntax receiver)inputs.Add(receiver.Expression);
                for(int i=0;i<call.ArgumentList.Arguments.Count;++i){var expression=call.ArgumentList.Arguments[i].Expression;var type=m.GetTypeInfo(expression).Type;
                    if(type?.SpecialType is SpecialType.System_String or SpecialType.System_Char||type is IArrayTypeSymbol array&&array.ElementType.SpecialType==SpecialType.System_String)inputs.Add(expression);
                }
                rows.Add(new CultureRow{assembly=compilation.AssemblyName!,caller=callerId,callee=callee,source=Path.GetRelativePath(request.root,tree.FilePath).Replace('\\','/'),line=call.GetLocation().GetLineSpan().StartLinePosition.Line+1,span=call.SpanStart,operation=sensitive.Value.operation,culture=sensitive.Value.culture,default_comparer=sensitive.Value.comparer,origins=inputs.SelectMany(e=>Origins(e,m,new(SymbolEqualityComparer.Default))).Distinct().OrderBy(s=>s).ToArray()});
            }
        }
        var cultural=rows.Where(r=>r.operation!="historical_ordinal").ToArray();
        var dependent=cultural.Select(r=>r.caller).ToHashSet();bool changed;
        do{changed=false;foreach(var pair in graph)if(!dependent.Contains(pair.Key)&&pair.Value.Any(dependent.Contains)){dependent.Add(pair.Key);changed=true;}}while(changed);
        var result=new{operation="bound-culture-comparison-ordering-case-source-inventory",source_files=request.game_sources.Length+request.kairo_sources.Length,invocations,semantic_errors=diagnostics.Length,unresolved_invocations=unresolved,
            direct_calls=cultural.OrderBy(r=>r.assembly).ThenBy(r=>r.source).ThenBy(r=>r.span),historical_ordinal_calls=rows.Where(r=>r.operation=="historical_ordinal").OrderBy(r=>r.source).ThenBy(r=>r.span),source_callers_transitively_reaching_culture=dependent.OrderBy(s=>s),culture_assignments=cultureWrites,
            source_call_graph=graph.OrderBy(p=>p.Key).ToDictionary(p=>p.Key,p=>p.Value.OrderBy(s=>s).ToArray()),
            limitations=new[]{"Static syntactic call graph; virtual/interface dispatch, reflection and callbacks may add paths.","Origins preserve exact symbol provenance; data semantics require separate source-backed review.","No source literal content, asset text, key or player/team value is serialized.","No culture assignment means effective runtime culture UNKNOWN, not necessarily English."}};
        File.WriteAllText(args[1],JsonSerializer.Serialize(result,new JsonSerializerOptions{WriteIndented=true})+"\n",new System.Text.UTF8Encoding(false));
    }
}
