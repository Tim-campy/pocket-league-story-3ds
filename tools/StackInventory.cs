// Bound corpus census. Names/locations only; no source literals or data emitted.
using System;using System.Collections.Generic;using System.IO;using System.Linq;using System.Text.Json;
using Microsoft.CodeAnalysis;using Microsoft.CodeAnalysis.CSharp;using Microsoft.CodeAnalysis.CSharp.Syntax;
class StackRequest {public string root{get;set;}="";public string[] kairo_sources{get;set;}=Array.Empty<string>();public string[] game_sources{get;set;}=Array.Empty<string>();public string[] references{get;set;}=Array.Empty<string>();}
class StackInventory {
 static bool IsStack(INamedTypeSymbol? type)=>type?.OriginalDefinition.MetadataName=="Stack`1"&&type.ContainingNamespace.ToDisplayString()=="System.Collections.Generic";
 static string Id(ISymbol symbol)=>symbol.OriginalDefinition.GetDocumentationCommentId()??symbol.ToDisplayString();
 static void Main(string[]args){var request=JsonSerializer.Deserialize<StackRequest>(File.ReadAllText(args[0]))!;var refs=request.references.Select(p=>MetadataReference.CreateFromFile(p)).ToArray();var options=new CSharpCompilationOptions(OutputKind.DynamicallyLinkedLibrary,metadataImportOptions:MetadataImportOptions.All,assemblyIdentityComparer:DesktopAssemblyIdentityComparer.Default);
 SyntaxTree[] Parse(string[]files)=>files.Select(p=>CSharpSyntaxTree.ParseText(File.ReadAllText(p),path:p)).ToArray();
 var kairo=CSharpCompilation.Create("KairoLibrary",Parse(request.kairo_sources),refs,options);var game=CSharpCompilation.Create("Assembly-CSharp",Parse(request.game_sources),refs.Append<MetadataReference>(kairo.ToMetadataReference()),options);
 var errors=kairo.GetDiagnostics().Concat(game.GetDiagnostics()).Where(d=>d.Severity==DiagnosticSeverity.Error).ToArray();if(errors.Length>0)throw new InvalidOperationException("Source binding failed: "+String.Join(";",errors.Take(5).Select(d=>d.Id)));
 var rows=new List<object>();var fields=new List<object>();
 foreach(var compilation in new[]{kairo,game})foreach(var tree in compilation.SyntaxTrees){var model=compilation.GetSemanticModel(tree);
  foreach(var variable in tree.GetRoot().DescendantNodes().OfType<VariableDeclaratorSyntax>())if(model.GetDeclaredSymbol(variable) is IFieldSymbol field&&IsStack(field.Type as INamedTypeSymbol))fields.Add(new{assembly=compilation.AssemblyName,id=Id(field),type=field.Type.ToDisplayString(),source=Path.GetRelativePath(request.root,tree.FilePath).Replace('\\','/'),line=variable.GetLocation().GetLineSpan().StartLinePosition.Line+1});
  foreach(var node in tree.GetRoot().DescendantNodes()){
   if(node is not ObjectCreationExpressionSyntax&&node is not InvocationExpressionSyntax&&node is not MemberAccessExpressionSyntax)continue;
   if(node is MemberAccessExpressionSyntax member&&member.Parent is InvocationExpressionSyntax)continue;
   var symbol=model.GetSymbolInfo(node).Symbol;if(symbol==null||!IsStack(symbol.ContainingType))continue;
   var caller=model.GetEnclosingSymbol(node.SpanStart);while(caller!=null&&caller is not IFieldSymbol&&(caller is not IMethodSymbol method||method.MethodKind is MethodKind.AnonymousFunction or MethodKind.LocalFunction))caller=caller.ContainingSymbol;
   rows.Add(new{assembly=compilation.AssemblyName,caller=caller==null?"UNKNOWN":Id(caller),callee=Id(symbol),kind=node is ObjectCreationExpressionSyntax?"constructor":symbol is IPropertySymbol?"property":"method",source=Path.GetRelativePath(request.root,tree.FilePath).Replace('\\','/'),line=node.GetLocation().GetLineSpan().StartLinePosition.Line+1});
  }
 }
 File.WriteAllText(args[1],JsonSerializer.Serialize(new{operation="bound-Stack-corpus-inventory",semantic_errors=0,fields,calls=rows,game_binary_executed=false},new JsonSerializerOptions{WriteIndented=true})+"\n",new System.Text.UTF8Encoding(false));
 }
}
