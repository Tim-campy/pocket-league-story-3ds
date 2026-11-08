// Bound field accesses/calls only. Never emits literal values or asset content.
using System;using System.Collections.Generic;using System.IO;using System.Linq;using System.Text.Json;
using Microsoft.CodeAnalysis;using Microsoft.CodeAnalysis.CSharp;using Microsoft.CodeAnalysis.CSharp.Syntax;
class BootRequest{public string root{get;set;}="";public string[] kairo_sources{get;set;}=Array.Empty<string>();public string[] game_sources{get;set;}=Array.Empty<string>();public string[] references{get;set;}=Array.Empty<string>();}
class BootConcurrency{
 static string Id(ISymbol s)=>s.OriginalDefinition.GetDocumentationCommentId()??s.ToDisplayString();
 static ISymbol? Caller(SyntaxNode node,SemanticModel model){ISymbol? s=model.GetEnclosingSymbol(node.SpanStart);while(s!=null&&(s is not IMethodSymbol m||m.MethodKind is MethodKind.AnonymousFunction or MethodKind.LocalFunction))s=s.ContainingSymbol;return s;}
 static ExpressionSyntax FieldExpression(IdentifierNameSyntax node)=>node.Parent is MemberAccessExpressionSyntax ma&&ma.Name==node?ma:node;
 static string Access(ExpressionSyntax expr){
  while(expr.Parent is ParenthesizedExpressionSyntax p)expr=p;
  if(expr.Parent is AssignmentExpressionSyntax a&&a.Left==expr)return a.IsKind(SyntaxKind.SimpleAssignmentExpression)?"write":"read_write";
  if(expr.Parent is PrefixUnaryExpressionSyntax pre&&pre.IsKind(SyntaxKind.PreIncrementExpression)||expr.Parent is PrefixUnaryExpressionSyntax pre2&&pre2.IsKind(SyntaxKind.PreDecrementExpression)||expr.Parent is PostfixUnaryExpressionSyntax post&&post.IsKind(SyntaxKind.PostIncrementExpression)||expr.Parent is PostfixUnaryExpressionSyntax post2&&post2.IsKind(SyntaxKind.PostDecrementExpression))return "read_write";
  if(expr.Parent is ArgumentSyntax arg&&arg.RefKindKeyword.Kind() is SyntaxKind.RefKeyword or SyntaxKind.OutKeyword)return arg.RefKindKeyword.IsKind(SyntaxKind.OutKeyword)?"write_by_out":"read_write_by_ref";
  return "read";
 }
 static void Main(string[] args){
  if(args.Length==1&&args[0]=="--self-test"){
   var tree=CSharpSyntaxTree.ParseText("class Own{int n;int[] a;void Cases(){n=1;n++;int x=n;a[0]=n;}}");var compilation=CSharpCompilation.Create("OwnFieldAudit",new[]{tree},new[]{MetadataReference.CreateFromFile(typeof(object).Assembly.Location)},new CSharpCompilationOptions(OutputKind.DynamicallyLinkedLibrary));var model=compilation.GetSemanticModel(tree);var ops=new List<string>();var elements=new List<string>();
   foreach(var node in tree.GetRoot().DescendantNodes().OfType<IdentifierNameSyntax>())if(model.GetSymbolInfo(node).Symbol is IFieldSymbol f){var expr=FieldExpression(node);ops.Add(f.Name+":"+Access(expr));if(expr.Parent is ElementAccessExpressionSyntax element&&element.Expression==expr)elements.Add(Access(element));}
   if(ops.Count(x=>x=="n:write")!=1||ops.Count(x=>x=="n:read_write")!=1||ops.Count(x=>x=="n:read")!=2||ops.Count(x=>x=="a:read")!=1||!elements.SequenceEqual(new[]{"write"}))throw new Exception("Own field-access classification failed");
   Console.WriteLine(JsonSerializer.Serialize(new{status="PASS",field_accesses=ops.Count,array_reference_is_read=true,array_element_write_is_separate=true}));return;
  }
  var request=JsonSerializer.Deserialize<BootRequest>(File.ReadAllText(args[0]))!;
  var refs=request.references.Select(p=>MetadataReference.CreateFromFile(p)).ToArray();var options=new CSharpCompilationOptions(OutputKind.DynamicallyLinkedLibrary,metadataImportOptions:MetadataImportOptions.All,assemblyIdentityComparer:DesktopAssemblyIdentityComparer.Default);
  SyntaxTree[] Parse(string[] files)=>files.Select(p=>CSharpSyntaxTree.ParseText(File.ReadAllText(p),path:p)).ToArray();
  var kairo=CSharpCompilation.Create("KairoLibrary",Parse(request.kairo_sources),refs,options);var game=CSharpCompilation.Create("Assembly-CSharp",Parse(request.game_sources),refs.Append<MetadataReference>(kairo.ToMetadataReference()),options);
  var errors=kairo.GetDiagnostics().Concat(game.GetDiagnostics()).Where(d=>d.Severity==DiagnosticSeverity.Error).ToArray();if(errors.Length>0)throw new Exception("Binding errors: "+string.Join("\n",errors.Take(8).Select(d=>d.Id+" "+d.GetMessage())));
  var fields=new Dictionary<string,object>();var accesses=new List<object>();var calls=new List<object>();
  var selected=new HashSet<string>{"form.BootForm","form.MyFormBase","main.AppData","game.UserData","kairo.common.cfg.Config","kairo.unity.ui.ResourceManager","kairo.unity.form.FormBase","kairo.unity.form.FormManagerBase","kairo.unity.ui.Canvas","kairo.unity.ui.Image","kairo.unity.util.Property","game.GameUtil","surface.GameView"};
  foreach(var compilation in new[]{kairo,game})foreach(var tree in compilation.SyntaxTrees){var model=compilation.GetSemanticModel(tree);var root=tree.GetRoot();string path=Path.GetRelativePath(request.root,tree.FilePath).Replace('\\','/');
   foreach(var declaration in root.DescendantNodes().OfType<VariableDeclaratorSyntax>())if(model.GetDeclaredSymbol(declaration) is IFieldSymbol f&&selected.Contains(f.ContainingType.ToDisplayString()))fields[Id(f)]=new{id=Id(f),type=f.Type.ToDisplayString(),is_static=f.IsStatic,is_readonly=f.IsReadOnly,is_const=f.IsConst,is_volatile=f.IsVolatile,source=path,line=declaration.GetLocation().GetLineSpan().StartLinePosition.Line+1};
   foreach(var name in root.DescendantNodes().OfType<IdentifierNameSyntax>())if(model.GetSymbolInfo(name).Symbol is IFieldSymbol field&&selected.Contains(field.ContainingType.ToDisplayString())){
    var expression=FieldExpression(name);var access=Access(expression);var owner=Caller(name,model);if(owner==null)continue;
    var element=expression.Parent as ElementAccessExpressionSyntax;var elementAccess=element!=null&&element.Expression==expression?Access(element):"none";
    var locks=name.Ancestors().OfType<LockStatementSyntax>().Select(v=>model.GetSymbolInfo(v.Expression).Symbol).Where(v=>v!=null).Select(v=>Id(v!)).Distinct().ToArray();
    accesses.Add(new{field=Id(field),caller=Id(owner),access,element_access=elementAccess,source=path,line=name.GetLocation().GetLineSpan().StartLinePosition.Line+1,locks,
      in_lambda=name.Ancestors().Any(n=>n is AnonymousFunctionExpressionSyntax)});
   }
   foreach(var node in root.DescendantNodes().Where(n=>n is InvocationExpressionSyntax or ObjectCreationExpressionSyntax))if(model.GetSymbolInfo(node).Symbol is IMethodSymbol callee){var owner=Caller(node,model);if(owner==null)continue;calls.Add(new{caller=Id(owner),callee=Id(callee.ReducedFrom??callee),dispatch=callee.IsAbstract?"abstract_target_UNKNOWN":callee.IsVirtual||callee.IsOverride?"virtual_target_not_expanded_UNKNOWN":"bound_target",source=path,line=node.GetLocation().GetLineSpan().StartLinePosition.Line+1,in_lambda=node.Ancestors().Any(n=>n is AnonymousFunctionExpressionSyntax)});}
  }
  File.WriteAllText(args[1],JsonSerializer.Serialize(new{status="PASS",binding_errors=errors.Length,fields=fields.Values,accesses,calls},new JsonSerializerOptions{WriteIndented=true}));
 }
}
