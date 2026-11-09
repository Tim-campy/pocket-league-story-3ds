// Bind exact Unity Input/Screen symbols; never publish source argument strings.
using System;using System.Collections.Generic;using System.IO;using System.Linq;using System.Text.Json;
using Microsoft.CodeAnalysis;using Microsoft.CodeAnalysis.CSharp;using Microsoft.CodeAnalysis.CSharp.Syntax;
class DebugRequest {public string root{get;set;}="";public string[] kairo_sources{get;set;}=Array.Empty<string>();public string[] game_sources{get;set;}=Array.Empty<string>();public string[] references{get;set;}=Array.Empty<string>();}
class DebugInputInventory {
 static string Id(ISymbol symbol)=>symbol.OriginalDefinition.GetDocumentationCommentId()??symbol.ToDisplayString();
 static void Main(string[]args){
  var request=JsonSerializer.Deserialize<DebugRequest>(File.ReadAllText(args[0]))!;
  var refs=request.references.Select(p=>MetadataReference.CreateFromFile(p)).ToArray();
  var options=new CSharpCompilationOptions(OutputKind.DynamicallyLinkedLibrary,metadataImportOptions:MetadataImportOptions.All,assemblyIdentityComparer:DesktopAssemblyIdentityComparer.Default);
  SyntaxTree[] Parse(string[]files)=>files.Select(p=>CSharpSyntaxTree.ParseText(File.ReadAllText(p),path:p)).ToArray();
  var kairo=CSharpCompilation.Create("KairoLibrary",Parse(request.kairo_sources),refs,options);var game=CSharpCompilation.Create("Assembly-CSharp",Parse(request.game_sources),refs.Append<MetadataReference>(kairo.ToMetadataReference()),options);
  var errors=kairo.GetDiagnostics().Concat(game.GetDiagnostics()).Where(d=>d.Severity==DiagnosticSeverity.Error).ToArray();if(errors.Length>0)throw new InvalidOperationException("Original source binding failed: "+String.Join(";",errors.Take(5).Select(d=>d.Id)));
  var rows=new List<object>();int unresolved=0;
  foreach(var compilation in new[]{kairo,game})foreach(var tree in compilation.SyntaxTrees){var model=compilation.GetSemanticModel(tree);
   foreach(var member in tree.GetRoot().DescendantNodes().OfType<MemberAccessExpressionSyntax>()){
    var symbol=model.GetSymbolInfo(member).Symbol;
    if(symbol==null){if(member.Expression is IdentifierNameSyntax name&&name.Identifier.ValueText=="Input")++unresolved;continue;}
    string owner=symbol.ContainingType?.ToDisplayString()??"";
    if(owner!="UnityEngine.Input"&&!(owner=="UnityEngine.Screen"&&symbol.Name=="height"))continue;
    var caller=model.GetEnclosingSymbol(member.SpanStart);while(caller!=null&&(caller is not IMethodSymbol method||method.MethodKind is MethodKind.AnonymousFunction or MethodKind.LocalFunction))caller=caller.ContainingSymbol;
    int? argument=null;string argumentKind="none";
    if(member.Parent is InvocationExpressionSyntax call&&call.ArgumentList.Arguments.Count>0){var expr=call.ArgumentList.Arguments[0].Expression;var constant=model.GetConstantValue(expr);argumentKind=constant.HasValue?"constant_without_content":"dynamic";if(constant is {HasValue:true,Value:int n}){argument=n;argumentKind="constant_integer";}}
    bool admitted=(owner=="UnityEngine.Screen"&&symbol.Name=="height")||(owner=="UnityEngine.Input"&&(symbol.Name=="mousePosition"||symbol.Name=="GetKey"&&(argument==303||argument==304)||(symbol.Name=="GetMouseButton"||symbol.Name=="GetMouseButtonDown")&&(argument==0||argument==1)));
    rows.Add(new{assembly=compilation.AssemblyName,caller=caller==null?"UNKNOWN":Id(caller),callee=Id(symbol),source=Path.GetRelativePath(request.root,tree.FilePath).Replace('\\','/'),line=member.GetLocation().GetLineSpan().StartLinePosition.Line+1,span=member.SpanStart,argument_integer=argument,argument_kind=argumentKind,leaf_binding=admitted?"admitted":"REFUSE_UNPROVED"});
   }
  }
  File.WriteAllText(args[1],JsonSerializer.Serialize(new{operation="bound-original-Unity-debug-input-inventory",semantic_errors=errors.Length,unresolved_input_members=unresolved,calls=rows,game_binary_executed=false},new JsonSerializerOptions{WriteIndented=true})+"\n",new System.Text.UTF8Encoding(false));
 }
}
