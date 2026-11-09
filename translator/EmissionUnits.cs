// Mechanical packaging of the existing emitter's declarations and definitions.
// This layer changes ownership/includes, never any generated expression/body.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Text.RegularExpressions;
using Microsoft.CodeAnalysis;

sealed partial class Lowerer {
    sealed class TypeUnit {
        public string Id="",Stem="";
        public StringBuilder Header=new(),Templates=new(),Cpp=new();
        public HashSet<string> Layout=new();
        public HashSet<string> BodyHeaders=new();
    }
    static void WriteStableBytes(string path,byte[] data){
        if(!File.Exists(path)||!File.ReadAllBytes(path).SequenceEqual(data))File.WriteAllBytes(path,data);
    }
    static void WriteStable(string path,string text)=>WriteStableBytes(path,new UTF8Encoding(false).GetBytes(text.Replace("\r\n","\n")));
    // The input is generated C++, not an arbitrary source parser. Preserve every
    // byte of each complete declaration; strings/comments never affect braces.
    static List<string> TopLevelDeclarations(string text){
        var result=new List<string>();int start=0,depth=0,parens=0;char quote='\0';
        bool line=false,comment=false,escaped=false,function=false;
        for(int i=0;i<text.Length;i++){
            char c=text[i],next=i+1<text.Length?text[i+1]:'\0';
            if(line){if(c=='\n')line=false;continue;}
            if(comment){if(c=='*'&&next=='/'){comment=false;i++;}continue;}
            if(quote!='\0'){if(escaped)escaped=false;else if(c=='\\')escaped=true;else if(c==quote)quote='\0';continue;}
            if(c=='/'&&next=='/'){line=true;i++;continue;}
            if(c=='/'&&next=='*'){comment=true;i++;continue;}
            if(c=='"'||c=='\''){quote=c;continue;}
            if(c=='(')parens++;else if(c==')')parens--;
            if(c=='{'){
                if(depth==0){var prefix=Regex.Replace(text[start..i],@"//[^\n]*|/\*.*?\*/","",RegexOptions.Singleline).Trim();
                    function=!Regex.IsMatch(prefix,@"^(?:template\s*<[^>]*>\s*)?struct\b")&&Regex.IsMatch(prefix,@"\)\s*(?:(?:const|noexcept|override|final)\s*)*$");}
                depth++;
            }else if(c=='}'){
                if(--depth<0)throw new InvalidOperationException("Unbalanced generated declaration");
                if(depth==0&&function){result.Add(text[start..(i+1)]+"\n");start=i+1;function=false;}
            }else if(c==';'&&depth==0&&parens==0){result.Add(text[start..(i+1)]+"\n");start=i+1;}
        }
        if(depth!=0||parens!=0||quote!='\0'||comment)throw new InvalidOperationException("Incomplete generated declaration");
        if(!String.IsNullOrWhiteSpace(text[start..]))throw new InvalidOperationException("Unassigned generated declaration: "+text[start..Math.Min(text.Length,start+160)]);
        return result;
    }
    string[] WritePerTypeUnits(Request input,string basename,string ns,string oldHeader,string oldCpp,HashSet<string> usedClasses,HashSet<string> usedTypes,HashSet<string> usedFields,IMethodSymbol? bootstrap){
        var units=new SortedDictionary<string,TypeUnit>(StringComparer.Ordinal);
        TypeUnit Unit(INamedTypeSymbol type){var id=Id(type.OriginalDefinition);if(!units.TryGetValue(id,out var unit))units[id]=unit=new TypeUnit{Id=id,Stem=basename+"_type_"+Hash(id)};return unit;}
        var owners=new Dictionary<string,TypeUnit>(StringComparer.Ordinal);
        foreach(var id in usedClasses){var type=classes[id];owners[Name(type)]=Unit(type);
            foreach(var field in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))owners[Name(field)]=Unit(type);
        }
        foreach(var id in emitted.Keys){var method=methods[id];owners[Name(method)]=Unit(method.ContainingType);owners[Name(method)+"_init"]=Unit(method.ContainingType);}
        foreach(var id in usedFields){var field=fieldSymbols[id];owners[Name(field)]=Unit(field.ContainingType);owners[Name(field)+"_value"]=Unit(field.ContainingType);}
        foreach(var id in usedTypes){var type=initializedTypes[id];owners[TypeInitName(type)]=Unit(type);}
        if(bootstrap!=null&&emitted.ContainsKey(Id(bootstrap)))owners["create_application"]=Unit(bootstrap.ContainingType);
        string WithoutComments(string value)=>Regex.Replace(value,@"//[^\n]*|/\*.*?\*/","",RegexOptions.Singleline).Trim();
        TypeUnit? DeclarationOwner(string block){
            var clean=WithoutComments(block);
            var structure=Regex.Match(clean,@"^(?:template\s*<[^>]*>\s*)?struct\s+(\w+)");
            if(structure.Success)return owners.GetValueOrDefault(structure.Groups[1].Value);
            var member=Regex.Match(clean,@"\b(cs_[0-9a-f]{16})(?:<[^<>;{}()]*>)?::\w+\s*\(");
            if(member.Success)return owners.GetValueOrDefault(member.Groups[1].Value);
            foreach(Match match in Regex.Matches(clean,@"\b(cs_(?:init_)?[0-9a-f]{16}(?:_init|_value)?|create_application)\b")){
                int end=match.Index+match.Length;while(end<clean.Length&&Char.IsWhiteSpace(clean[end]))end++;
                if(end<clean.Length&&clean[end]=='<'){
                    int nesting=0;do{if(clean[end]=='<')nesting++;else if(clean[end]=='>')nesting--;end++;}while(end<clean.Length&&nesting!=0);
                    while(end<clean.Length&&Char.IsWhiteSpace(clean[end]))end++;
                }
                if(end<clean.Length&&clean[end]=='('&&owners.TryGetValue(match.Groups[1].Value,out var owner))return owner;
            }
            foreach(Match match in Regex.Matches(clean,@"\bcs_[0-9a-f]{16}_value\b"))if(owners.TryGetValue(match.Value,out var owner))return owner;
            return null;
        }
        string Unwrap(string value,out string prefix){var marker="namespace "+ns+" {\n";int at=value.IndexOf(marker,StringComparison.Ordinal);if(at<0||!value.TrimEnd().EndsWith("}",StringComparison.Ordinal))throw new InvalidOperationException("Unexpected generated namespace envelope");prefix=value[..at];return value[(at+marker.Length)..value.LastIndexOf('}')];}
        var headerBody=Unwrap(oldHeader,out var runtimePrefix);var cppBody=Unwrap(oldCpp,out _);
        var forward=new StringBuilder();var common=new StringBuilder();
        foreach(var block in TopLevelDeclarations(headerBody)){
            var clean=WithoutComments(block);var owner=DeclarationOwner(block);
            if(Regex.IsMatch(clean,@"^(?:template\s*<[^>]*>\s*)?struct\s+\w+\s*;\s*$")){forward.Append(block);continue;}
            if(owner==null){common.Append(block);continue;}
            var isStructure=Regex.IsMatch(clean,@"^(?:template\s*<[^>]*>\s*)?struct\b");
            if(!isStructure&&clean.Contains('{')){
                if(clean.StartsWith("template",StringComparison.Ordinal))owner.Templates.Append(block);
                else owner.Cpp.Append(Regex.Replace(block,@"\binline\s+",""));
            }else owner.Header.Append(block);
        }
        foreach(var block in TopLevelDeclarations(cppBody)){
            var owner=DeclarationOwner(block)??throw new InvalidOperationException("Generated definition has no declaring type: "+WithoutComments(block)[..Math.Min(150,WithoutComments(block).Length)]);
            owner.Cpp.Append(block);
        }
        // Portable units are independent output. Consume only their public
        // symbol->header manifest, without including the portable umbrella.
        var external=new Dictionary<string,(string Header,string? Templates)>(StringComparer.Ordinal);
        if(input.external_unit_manifest.Length!=0){
            using var externalManifest=JsonDocument.Parse(File.ReadAllText(input.external_unit_manifest));
            foreach(var symbol in externalManifest.RootElement.GetProperty("symbols").EnumerateObject()){
                var row=symbol.Value;external[symbol.Name]=("generated/"+row.GetProperty("header").GetString(),row.TryGetProperty("templates",out var template)&&template.ValueKind!=JsonValueKind.Null?"generated/"+template.GetString():null);
            }
            runtimePrefix=runtimePrefix.Replace("#include \"generated/portable_generated.hpp\"\n","#include \"generated/portable_generated_runtime.hpp\"\n#include \"generated/portable_generated_forward.hpp\"\n");
        }
        IEnumerable<string> Tokens(string value)=>Regex.Matches(Regex.Replace(value,@"//[^\n]*|/\*.*?\*/|""(?:\\.|[^""\\])*""","",RegexOptions.Singleline),@"\bcs_(?:init_)?[0-9a-f]{16}(?:_init|_value)?\b").Cast<Match>().Select(m=>m.Value).Distinct();
        IEnumerable<string> DependencyHeaders(string value,TypeUnit own){
            foreach(var token in Tokens(value)){
                if(owners.TryGetValue(token,out var dependency)&&dependency!=own)yield return dependency.Stem+".hpp";
                else if(external.TryGetValue(token,out var item))yield return item.Header;
            }
        }
        IEnumerable<string> DependencyTemplates(string value,TypeUnit own){
            foreach(var token in Tokens(value)){
                if(owners.TryGetValue(token,out var dependency)&&dependency.Templates.Length!=0)yield return dependency.Stem+"_templates.hpp";
                else if(external.TryGetValue(token,out var item)&&item.Templates!=null)yield return item.Templates;
            }
        }
        void AddLayout(TypeUnit owner,ITypeSymbol? symbol,bool reference=false){
            if(symbol is not INamedTypeSymbol type)return;
            if(type.TypeKind==TypeKind.Struct&&!RecordStruct(type))return;
            if(!reference&&type.TypeKind!=TypeKind.Struct)return;
            var name=Name(type.OriginalDefinition);
            if(owners.TryGetValue(name,out var dependency)&&dependency!=owner)owner.Layout.Add(dependency.Stem+".hpp");
            else if(external.TryGetValue(name,out var item))owner.Layout.Add(item.Header);
        }
        foreach(var id in usedClasses){var type=classes[id];var unit=Unit(type);
            AddLayout(unit,type.BaseType,true);foreach(var iface in type.AllInterfaces)AddLayout(unit,iface,true);
            foreach(var field in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))AddLayout(unit,field.Type);
        }
        void AddBodyDependencies(TypeUnit unit,IEnumerable<string> dependencies){foreach(var id in dependencies)if(units.TryGetValue(id,out var dependency)&&dependency!=unit)unit.BodyHeaders.Add(dependency.Stem+".hpp");}
        foreach(var id in emitted.Keys)AddBodyDependencies(Unit(methods[id].ContainingType),classDependencies[id]);
        foreach(var id in usedTypes)AddBodyDependencies(Unit(initializedTypes[id]),initializerClasses[id]);
        // auto locals and inherited member access erase the receiver's concrete
        // type from C++ spelling. Keep the bound expression types, rather than
        // guessing these dependencies from member names alone.
        var semanticModels=new Dictionary<SyntaxTree,SemanticModel>();
        void AddExpressionType(TypeUnit owner,ITypeSymbol? symbol){
            if(symbol is IArrayTypeSymbol array){AddExpressionType(owner,array.ElementType);return;}
            if(symbol is not INamedTypeSymbol type)return;
            var name=Name(type.OriginalDefinition);
            if(owners.TryGetValue(name,out var dependency)&&dependency!=owner)owner.BodyHeaders.Add(dependency.Stem+".hpp");
            else if(external.TryGetValue(name,out var item))owner.BodyHeaders.Add(item.Header);
            foreach(var argument in type.TypeArguments)if(!SymbolEqualityComparer.Default.Equals(argument,type))AddExpressionType(owner,argument);
        }
        foreach(var id in emitted.Keys){
            var site=syntax[id];if(!semanticModels.TryGetValue(site.SyntaxTree,out var semantic))semanticModels[site.SyntaxTree]=semantic=compilation.GetSemanticModel(site.SyntaxTree);
            var owner=Unit(methods[id].ContainingType);
            foreach(var expression in site.DescendantNodesAndSelf().OfType<Microsoft.CodeAnalysis.CSharp.Syntax.ExpressionSyntax>())AddExpressionType(owner,semantic.GetTypeInfo(expression).Type);
        }
        var generated=new List<string>();
        void Write(string name,string text){generated.AddRange(WriteGenerated(input.output,name,text,input.chunk_bytes));}
        string Includes(IEnumerable<string> names)=>String.Concat(names.Distinct().OrderBy(x=>x,StringComparer.Ordinal).Select(name=>"#include \""+name+"\"\n"));
        string RuntimeIncludes(string value)=>value.Contains("pls::cs::math_min_single",StringComparison.Ordinal)?"#include \"managed_math.hpp\"\n":"";
        string Wrap(string text)=>"namespace "+ns+" {\n"+text+"}\n";
        var banner="// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.\n";
        Write(basename+"_runtime.hpp",runtimePrefix+Wrap(common.ToString()));
        Write(basename+"_forward.hpp",banner+"#pragma once\n"+Includes(new[]{basename+"_runtime.hpp"})+Wrap(forward.ToString()));
        foreach(var unit in units.Values){
            Write(unit.Stem+".hpp",banner+"#pragma once\n"+Includes(new[]{basename+"_forward.hpp"}.Concat(unit.Layout))+Wrap(unit.Header.ToString()));
            var content=unit.Cpp.ToString();var headers=DependencyHeaders(content+unit.Header,unit).Concat(unit.BodyHeaders).Append(unit.Stem+".hpp").ToArray();
            var templates=DependencyTemplates(content+unit.Header,unit).Distinct().ToArray();
            Write(unit.Stem+".cpp",banner+Includes(headers)+Includes(templates)+RuntimeIncludes(content)+Wrap(content));
            if(unit.Templates.Length!=0){var template=unit.Templates.ToString();
                Write(unit.Stem+"_templates.hpp",banner+"#pragma once\n"+Includes(DependencyHeaders(template,unit).Concat(unit.BodyHeaders).Append(unit.Stem+".hpp"))+Includes(DependencyTemplates(template,unit).Where(name=>name!=unit.Stem+"_templates.hpp"))+RuntimeIncludes(template)+Wrap(template));
            }
        }
        Write(basename+".hpp",banner+"#pragma once\n"+Includes(new[]{basename+"_forward.hpp"}.Concat(units.Values.Select(unit=>unit.Stem+".hpp")))+Includes(units.Values.Where(unit=>unit.Templates.Length!=0).Select(unit=>unit.Stem+"_templates.hpp")));
        Write(basename+".cpp",banner+"// Compatibility anchor; definitions live exclusively in the per-type units.\n");
        var manifest=new{format="declaring-type-units-v1",units=units.Values.Select(unit=>new{id=unit.Id,header=unit.Stem+".hpp",cpp=unit.Stem+".cpp",templates=unit.Templates.Length==0?null:unit.Stem+"_templates.hpp",layout_headers=unit.Layout.OrderBy(x=>x).ToArray()}).ToArray(),symbols=owners.OrderBy(pair=>pair.Key).ToDictionary(pair=>pair.Key,pair=>new{header=pair.Value.Stem+".hpp",templates=pair.Value.Templates.Length==0?null:pair.Value.Stem+"_templates.hpp"})};
        WriteStable(Path.Combine(input.output,"emission_units.json"),JsonSerializer.Serialize(manifest,new JsonSerializerOptions{WriteIndented=true})+"\n");
        // Only remove obsolete files with this producer's exact reserved stem.
        foreach(var file in Directory.GetFiles(input.output,basename+"*"))if((Path.GetExtension(file) is ".cpp" or ".hpp" or ".inc")&&!generated.Contains(Path.GetFileName(file)))File.Delete(file);
        return generated.ToArray();
    }
}
