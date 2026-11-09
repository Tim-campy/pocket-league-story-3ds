// Source-bound C# -> C++17 lowering. Unsupported semantics fail the method;
// diagnostic emission is never evidence that a method has been translated.
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Text.Json;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Syntax;
using Microsoft.CodeAnalysis.Operations;

sealed class Unsupported : Exception {
    public readonly string Kind;
    public readonly string Site;
    public Unsupported(SyntaxNode node, string reason) : base(reason) {Kind=node.Kind().ToString();var loc=node.GetLocation().GetLineSpan();Site=loc.Path+":"+(loc.StartLinePosition.Line+1)+":"+node.ToString().Substring(0,Math.Min(node.ToString().Length,180));}
}
sealed class Request {
    public string assembly {get;set;}="KairoLibrary";
    public string[] sources {get;set;}=Array.Empty<string>();
    public string[] references {get;set;}=Array.Empty<string>();
    public string[] selected {get;set;}=Array.Empty<string>();
    public string[] check_symbols {get;set;}=Array.Empty<string>();
    public bool diagnostics_only {get;set;}
    public bool select_all_source_methods {get;set;}
    public string select_source_prefix {get;set;}="";
    public Dictionary<string,string> external_types {get;set;}=new();
    public Dictionary<string,string> external_value_types {get;set;}=new();
    public Dictionary<string,string> external_methods {get;set;}=new();
    public Dictionary<string,string> external_fields {get;set;}=new();
    public Dictionary<string,string> external_slots {get;set;}=new();
    public Dictionary<string,string> external_type_initializers {get;set;}=new();
    public string[] external_complete_bases {get;set;}=Array.Empty<string>();
    public string[] source_native_helpers {get;set;}=Array.Empty<string>();
    public string bootstrap_method {get;set;}="";
    public string[] native_includes {get;set;}=Array.Empty<string>();
    public string[] shared_fields {get;set;}=Array.Empty<string>();
    public Dictionary<string,JsonElement> service_overrides {get;set;}=new();
    public Dictionary<string,string> oracle_external_methods {get;set;}=new();
    public string oracle_support {get;set;}="";
    public string oracle_native_setup {get;set;}="";

    public string source_root {get;set;}="";
    public Dictionary<string,BakedSpec> baked_arrays {get;set;}=new();
    public int chunk_bytes {get;set;}=900000;
    public string output {get;set;}="";
}
sealed class BakedSpec {public string source {get;set;}="";public int span_start {get;set;}public string element_type {get;set;}="";public int count {get;set;}}
sealed class Lowerer {
    static Dictionary<string,string> externalTypes=new();
    static Dictionary<string,string> externalValueTypes=new();
    static Dictionary<string,string> oracleExternalMethods=new();
    static Dictionary<string,string> externalSlots=new();
    static HashSet<string> externalCompleteBases=new();
    readonly Dictionary<string,string> externalMethods;
    readonly Dictionary<string,string> externalFields;
    readonly Request request;
    readonly HashSet<string> sharedFields=new();
    readonly HashSet<string> bakedUsed=new();
    readonly Dictionary<string,INamedTypeSymbol> exceptionTypes=new();
    readonly CSharpCompilation compilation;
    readonly Dictionary<string,IMethodSymbol> methods=new();
    readonly Dictionary<string,SyntaxNode> syntax=new();
    readonly Dictionary<string,INamedTypeSymbol> classes=new();
    readonly Dictionary<string,INamedTypeSymbol> sourceEnums=new();
    readonly Dictionary<string,HashSet<string>> classDependencies=new();
    readonly Dictionary<string,string> emitted=new();
    readonly Dictionary<string,object> rejected=new();
    readonly Dictionary<string,string> fields=new();
    readonly Dictionary<string,IFieldSymbol> fieldSymbols=new();
    readonly Dictionary<string,string> typeInitializers=new();
    readonly Dictionary<string,INamedTypeSymbol> initializedTypes=new();
    readonly Dictionary<string,HashSet<string>> initializerMethods=new(),initializerFields=new(),initializerClasses=new();
    readonly HashSet<string> initializingTypes=new();
    static string TypeInitName(INamedTypeSymbol type)=>"cs_init_"+Hash(Id(type));
    string TypeInitFunction(INamedTypeSymbol type)=>request.external_type_initializers.GetValueOrDefault(Id(type),TypeInitName(type));
    static string OracleStatics(INamedTypeSymbol type)=>"OracleStatics_"+Hash(Id(type));
    string FieldStorage(IFieldSymbol field)=>sharedFields.Contains(Id(field))?"pls::cs::SharedField<"+TypeName(field.Type)+">":TypeName(field.Type);
    IEnumerable<IFieldSymbol> OrderedStaticFields(INamedTypeSymbol type)=>type.GetMembers().OfType<IFieldSymbol>().Where(f=>f.IsStatic&&!f.IsConst&&f.DeclaringSyntaxReferences.Length!=0&&f.DeclaringSyntaxReferences[0].GetSyntax() is VariableDeclaratorSyntax).OrderBy(f=>Array.IndexOf(compilation.SyntaxTrees.ToArray(),f.DeclaringSyntaxReferences[0].SyntaxTree)).ThenBy(f=>f.DeclaringSyntaxReferences[0].Span.Start);
    void EnsureTypeInitializer(INamedTypeSymbol type,SyntaxNode site) {
        if(type.DeclaringSyntaxReferences.Length==0)return;
        if(request.external_type_initializers.ContainsKey(Id(type)))return;
        if(type.TypeParameters.Length!=0){if(OrderedStaticFields(type).Any())throw new Unsupported(site,"generic static field initialization requires per-instantiation state");return;}
        var key=Id(type);
        if(initializingTypes.Contains(key))return;
        if(typeInitializers.ContainsKey(key)){
            dependencies[current].UnionWith(initializerMethods[key]);fieldDependencies[current].UnionWith(initializerFields[key]);classDependencies[current].UnionWith(initializerClasses[key]);return;
        }
        var beforeMethods=new HashSet<string>(dependencies[current]);var beforeFields=new HashSet<string>(fieldDependencies[current]);var beforeClasses=new HashSet<string>(classDependencies[current]);
        initializingTypes.Add(key);initializedTypes[key]=type;var saved=model;
        try {
            var body=new StringBuilder();
            foreach(var field in OrderedStaticFields(type)){
                var id=Id(field);var d=(VariableDeclaratorSyntax)field.DeclaringSyntaxReferences[0].GetSyntax();model=compilation.GetSemanticModel(d.SyntaxTree);
                if(d.Initializer!=null){fieldSymbols[id]=field;fieldDependencies[current].Add(id);fields[id]=Type(field.Type,d)+" "+Name(field)+"_value{};";body.Append(Name(field)+"_value = pls::cs::evaluate_type_initializer_field(\""+id+"\",[&](){return "+Converted(d.Initializer.Value,field.Type)+";});\n");}
            }
            var cctor=type.GetMembers().OfType<IMethodSymbol>().FirstOrDefault(m=>m.MethodKind==MethodKind.StaticConstructor&&!m.IsImplicitlyDeclared);
            if(cctor!=null){var d=(ConstructorDeclarationSyntax)cctor.DeclaringSyntaxReferences[0].GetSyntax();model=compilation.GetSemanticModel(d.SyntaxTree);body.Append(Statement(d.Body!,cctor));}
            typeInitializers[key]=body.ToString();initializerMethods[key]=dependencies[current].Except(beforeMethods).ToHashSet();initializerFields[key]=fieldDependencies[current].Except(beforeFields).Concat(OrderedStaticFields(type).Where(f=>((VariableDeclaratorSyntax)f.DeclaringSyntaxReferences[0].GetSyntax()).Initializer!=null).Select(Id)).ToHashSet();initializerClasses[key]=classDependencies[current].Except(beforeClasses).ToHashSet();
        }catch{typeInitializers.Remove(key);initializedTypes.Remove(key);throw;}
        finally{model=saved;initializingTypes.Remove(key);}
    }
    readonly Dictionary<string,HashSet<string>> dependencies=new();
    readonly Dictionary<string,HashSet<string>> fieldDependencies=new();
    readonly HashSet<string> active=new();
    readonly HashSet<string> returnFlowMethods=new();
    readonly Dictionary<string,Dictionary<string,int>> methodKinds=new();
    SemanticModel model=null!;
    string current="";
    HashSet<ISymbol> capturedVariables=new(SymbolEqualityComparer.Default);
    string ReadLocal(ISymbol symbol)=>capturedVariables.Contains(symbol)?Local(symbol)+"_cell->value":Local(symbol);
    static ITypeSymbol VariableType(ISymbol symbol)=>symbol is ILocalSymbol local?local.Type:((IParameterSymbol)symbol).Type;
    string CellType(ISymbol symbol,SyntaxNode site)=>"pls::cs::Ref<pls::cs::Cell<"+Type(VariableType(symbol),site)+">>";
    string CellAllocation(ISymbol symbol,string value,SyntaxNode site)=>"pls::cs::make_ref<pls::cs::Cell<"+Type(VariableType(symbol),site)+">>("+value+")";
    int temporary;
    bool hoistLocals;
    bool staticInitializer;
    static string[] WriteGenerated(string folder,string filename,string text,int budget) {
        if(budget<4096)throw new ArgumentException("Generated-file byte budget must be at least 4096");
        text=text.Replace("\r\n","\n");var bytes=Encoding.UTF8.GetBytes(text);var stem=Path.GetFileNameWithoutExtension(filename);var extension=Path.GetExtension(filename).TrimStart('.');
        foreach(var old in Directory.GetFiles(folder,stem+"_"+extension+"_part_*.inc"))File.Delete(old);
        if(bytes.Length<=budget){File.WriteAllBytes(Path.Combine(folder,filename),bytes);return new[]{filename};}
        var files=new List<string>();int start=0,safe=0;byte quote=0;bool lineComment=false,blockComment=false,escape=false;
        for(int i=0;i<bytes.Length;i++) {
            var b=bytes[i];var next=i+1<bytes.Length?bytes[i+1]:(byte)0;
            if(lineComment){if(b==10){lineComment=false;safe=i+1;}}
            else if(blockComment){if(b==(byte)'*'&&next==(byte)'/'){blockComment=false;i++;}}
            else if(quote!=0){if(escape)escape=false;else if(b==(byte)'\\')escape=true;else if(b==quote)quote=0;}
            else if(b==(byte)'/'&&next==(byte)'/'){lineComment=true;i++;}
            else if(b==(byte)'/'&&next==(byte)'*'){blockComment=true;i++;}
            else if(b==(byte)'"'||b==(byte)'\'')quote=b;
            else if(b==10||b==(byte)';'||b==(byte)','||b==(byte)'{'||b==(byte)'}')safe=i+1;
            if(i-start>=budget-2) {
                if(safe<=start)throw new InvalidOperationException("A generated literal/token exceeds the per-file byte budget");
                var name=stem+"_"+extension+"_part_"+files.Count.ToString("d4",CultureInfo.InvariantCulture)+".inc";
                var end=safe;while(end>start&&bytes[end-1]==10)end--;var part=new byte[end-start+1];Array.Copy(bytes,start,part,0,end-start);part[^1]=10;File.WriteAllBytes(Path.Combine(folder,name),part);files.Add(name);start=safe;
            }
        }
        if(start<bytes.Length){var name=stem+"_"+extension+"_part_"+files.Count.ToString("d4",CultureInfo.InvariantCulture)+".inc";File.WriteAllBytes(Path.Combine(folder,name),bytes[start..]);files.Add(name);}
        var wrapper="// GENERATED include chunks preserve one translation unit and one globals/template definition.\n"+(extension=="hpp"?"#pragma once\n":"")+String.Join("",files.Select(f=>"#include \""+f+"\"\n"));
        File.WriteAllText(Path.Combine(folder,filename),wrapper,new UTF8Encoding(false));return new[]{filename}.Concat(files).ToArray();
    }
    public Lowerer(CSharpCompilation c,Request? request=null) {
        compilation=c;
        this.request=request??new();
        oracleExternalMethods=request?.oracle_external_methods??new();
        externalTypes=request?.external_types??new();externalValueTypes=request?.external_value_types??new();externalMethods=request?.external_methods??new();externalFields=request?.external_fields??new();
        externalSlots=request?.external_slots??new();externalCompleteBases=new(request?.external_complete_bases??Array.Empty<string>());
        foreach(var id in this.request.shared_fields){
            var field=DocumentationCommentId.GetSymbolsForDeclarationId(id,c).OfType<IFieldSymbol>().SingleOrDefault();
            if(field==null||field.IsStatic||field.IsConst||field.IsReadOnly||field.ContainingType.IsValueType||field.DeclaringSyntaxReferences.Length==0)throw new InvalidOperationException("Shared field policy requires a mutable source instance field in a reference class: "+id);
            sharedFields.Add(id);
        }
        foreach(var tree in c.SyntaxTrees) {
            var m=c.GetSemanticModel(tree);
            foreach(var d in tree.GetRoot().DescendantNodes().OfType<BaseMethodDeclarationSyntax>()) {
                var s=m.GetDeclaredSymbol(d) as IMethodSymbol; if(s==null||s.MethodKind==MethodKind.StaticConstructor)continue;
                var id=Id(s); methods[id]=s;syntax[id]=d;
            }
            foreach(var d in tree.GetRoot().DescendantNodes().OfType<BasePropertyDeclarationSyntax>()) {
                if(m.GetDeclaredSymbol(d) is not IPropertySymbol property)continue;
                foreach(var accessor in new[]{property.GetMethod,property.SetMethod}.Where(a=>a!=null)) {
                    var source=accessor!.DeclaringSyntaxReferences.FirstOrDefault()?.GetSyntax()??d;
                    if(source is not AccessorDeclarationSyntax)source=d;
                    methods[Id(accessor)]=accessor;syntax[Id(accessor)]=source;
                }
            }
        }
    }
    static string Id(ISymbol symbol)=>symbol.OriginalDefinition.GetDocumentationCommentId()??symbol.ToDisplayString();
    static string Hash(string s)=>Convert.ToHexString(SHA256.HashData(Encoding.UTF8.GetBytes(s))).Substring(0,16).ToLowerInvariant();
    static string QualifyHelpers(string source,bool game){
        var scope=game?"pls::game::":"pls::generated::";
        foreach(var name in new[]{"cs_concat_strings4","cs_concat_object_array","cs_concat_objects3","cs_object_string","cs_contains_string","cs_is","cs_value_hash","cs_string_identity","cs_require","cs_string_equals","cs_network_to_host","cs_string_from_chars","cs_is_little_endian","cs_substring1","cs_substring2","cs_to_chars","cs_index_char1","cs_index_char2","cs_last_index_char1","cs_char_string","cs_integer_string","cs_clone_array","cs_bit_bytes","cs_bits_from","cs_f32","cs_f64"})source=System.Text.RegularExpressions.Regex.Replace(source,"(?<![a-zA-Z0-9_:])"+name+"(?=\\s*[<(])",scope+name);
        return source;
    }
    static string Name(ISymbol symbol)=>"cs_"+Hash(Id(symbol));
    static string ParameterType(IParameterSymbol parameter)=>TypeName(parameter.Type)+(parameter.RefKind is RefKind.Ref or RefKind.Out?"&":"");
    static string SwitchSectionLabel(SwitchStatementSyntax owner,SwitchSectionSyntax section)=>"cs_switch_"+owner.SpanStart+"_section_"+owner.Sections.IndexOf(section);
    static string SwitchConstantKey(object value)=>value is char character?((int)character).ToString(CultureInfo.InvariantCulture):Convert.ToString(value,CultureInfo.InvariantCulture)!;
    static string ClassName(INamedTypeSymbol type)=>Name(type)+(type.TypeArguments.Length==0?"":"<"+String.Join(",",type.TypeArguments.Select(TypeName))+">");
    static string NativeClass(INamedTypeSymbol type)=>FrameworkClass(type)??FrameworkValue(type)??(externalTypes.TryGetValue(Id(type),out var native)?native+(type.TypeArguments.Length==0?"":"<"+String.Join(",",type.TypeArguments.Select(TypeName))+">"):ClassName(type));
    static string Template(IEnumerable<ITypeParameterSymbol> parameters) {var p=parameters.ToArray();return p.Length==0?"":"template<"+String.Join(",",p.Select(t=>"typename T_"+t.Name))+">\n";}
    static ITypeParameterSymbol[] TypeParameters(IMethodSymbol m)=>m.ContainingType.TypeParameters.Concat(m.TypeParameters).ToArray();
    static IMethodSymbol SlotRoot(IMethodSymbol m){while(m.OverriddenMethod!=null)m=m.OverriddenMethod;return m;}
    static string Slot(IMethodSymbol m){var root=SlotRoot(m);return externalSlots.TryGetValue(Id(root),out var mapped)?mapped:root.ContainingType.SpecialType==SpecialType.System_Object||(root.ContainingType.ToDisplayString()=="System.IO.Stream"||(externalCompleteBases.Contains(Id(root.ContainingType))&&externalTypes.TryGetValue(Id(root.ContainingType),out var nativeRoot)&&nativeRoot.StartsWith("pls::kairo::",StringComparison.Ordinal)))?root.Name:"cs_virtual_"+Hash(Id(root));}
    static IEnumerable<IMethodSymbol> InterfaceMethods(INamedTypeSymbol type)=>type.GetMembers().OfType<IMethodSymbol>().Concat(type.GetMembers().OfType<IPropertySymbol>().SelectMany(p=>new[]{p.GetMethod,p.SetMethod}.OfType<IMethodSymbol>())).DistinctBy(Id);
    static IMethodSymbol? InterfaceImplementation(INamedTypeSymbol type,IMethodSymbol member){
        if(member.AssociatedSymbol is IPropertySymbol property&&type.FindImplementationForInterfaceMember(property) is IPropertySymbol implementation)return member.MethodKind==MethodKind.PropertyGet?implementation.GetMethod:implementation.SetMethod;
        return type.FindImplementationForInterfaceMember(member) as IMethodSymbol;
    }
    static IEnumerable<string> MethodSlots(IMethodSymbol method){
        var slots=new HashSet<string>();if(method.IsVirtual||method.IsOverride||method.IsAbstract)slots.Add(Slot(method));
        foreach(var iface in method.ContainingType.AllInterfaces.Where(t=>t.DeclaringSyntaxReferences.Length!=0))foreach(var member in InterfaceMethods(iface))if(InterfaceImplementation(method.ContainingType,member) is IMethodSymbol implementation&&SymbolEqualityComparer.Default.Equals(implementation.OriginalDefinition,method.OriginalDefinition))slots.Add(Slot(member));
        return slots;
    }
    static string ConcreteCpp(ITypeParameterSymbol parameter)=>parameter.ContainingSymbol is IMethodSymbol m&&m.Name=="MakeArray"&&m.ContainingType.ToDisplayString()=="java.util.JTool"?"pls::cs::Array<pls::cs::Array<std::uint8_t>>":"std::int32_t";
    static string ConcreteCs(ITypeParameterSymbol parameter)=>parameter.ContainingSymbol is IMethodSymbol m&&m.Name=="MakeArray"&&m.ContainingType.ToDisplayString()=="java.util.JTool"?"byte[][]":"int";
    static string Concrete(string type,IEnumerable<ITypeParameterSymbol> parameters,bool cpp=false) {foreach(var p in parameters)type=cpp?type.Replace("T_"+p.Name,ConcreteCpp(p)):System.Text.RegularExpressions.Regex.Replace(type,"\\b"+p.Name+"\\b",ConcreteCs(p));return type;}
    static bool SystemList(ITypeSymbol? t)=>t is INamedTypeSymbol n&&n.OriginalDefinition.ToDisplayString()=="System.Collections.Generic.List<T>";
    static bool SystemDictionary(ITypeSymbol? t)=>t is INamedTypeSymbol n&&n.OriginalDefinition.ToDisplayString()=="System.Collections.Generic.Dictionary<TKey, TValue>";
    static bool SystemPair(ITypeSymbol? t)=>t is INamedTypeSymbol n&&n.OriginalDefinition.ToDisplayString()=="System.Collections.Generic.KeyValuePair<TKey, TValue>";
    static bool SystemStack(ITypeSymbol? t)=>t is INamedTypeSymbol n&&n.OriginalDefinition.ToDisplayString()=="System.Collections.Generic.Stack<T>";
    static bool ExceptionClass(ITypeSymbol? type){for(var current=type as INamedTypeSymbol;current!=null;current=current.BaseType)if(current.ToDisplayString()=="System.Exception")return true;return false;}
    static string? FrameworkClass(ITypeSymbol? t)=>ExceptionClass(t)&&t!.DeclaringSyntaxReferences.Length==0?"pls::cs::ExceptionObject":t?.ToDisplayString() switch {"System.Random"=>"pls::cs::Random","System.Text.StringBuilder"=>"pls::cs::StringBuilder","System.TimeZoneInfo"=>"pls::cs::TimeZoneInfo","System.IO.Stream"=>"pls::cs::Stream","System.IO.MemoryStream"=>"pls::cs::MemoryStream","System.IO.BinaryReader"=>"pls::cs::BinaryReader","System.Type"=>"pls::cs::RuntimeType","System.Reflection.Assembly"=>"pls::cs::RuntimeAssembly","System.Threading.Thread"=>"pls::cs::Thread","System.Text.Encoding"=>"pls::cs::RuntimeEncoding","System.IO.StreamReader"=>"pls::cs::RuntimeStreamReader","System.Text.RegularExpressions.MatchCollection"=>"pls::cs::RegexMatchCollection","System.Text.RegularExpressions.Match"=>"pls::cs::RegexMatch","System.Text.RegularExpressions.GroupCollection"=>"pls::cs::RegexGroupCollection","System.Text.RegularExpressions.Group"=>"pls::cs::RegexGroup","System.Text.RegularExpressions.Capture"=>"pls::cs::RegexGroup",_=>null};
    static string? FrameworkValue(ITypeSymbol? t)=>t is INamedTypeSymbol named&&externalValueTypes.TryGetValue(Id(named),out var native)?native:SystemPair(t)?"pls::cs::KeyValuePair<"+String.Join(",",((INamedTypeSymbol)t!).TypeArguments.Select(TypeName))+">":t?.ToDisplayString() switch {"System.Guid"=>"pls::cs::Guid","System.DateTime"=>"pls::cs::DateTime","System.TimeSpan"=>"pls::cs::TimeSpan",_=>null};
    static string Local(ISymbol symbol)=>"v_"+symbol.Name.TrimStart('@')+(symbol is ILocalSymbol?"_"+symbol.DeclaringSyntaxReferences.FirstOrDefault()?.Span.Start:"");
    static IEnumerable<SyntaxNode> OwnScopeNodes(SyntaxNode body)=>body.DescendantNodes(descendIntoChildren:n=>n is not AnonymousFunctionExpressionSyntax&&n is not LocalFunctionStatementSyntax);
    static (BlockSyntax? block,ArrowExpressionClauseSyntax? arrow) ExecutableBody(SyntaxNode declaration){
        var method=declaration as BaseMethodDeclarationSyntax;
        return (method?.Body??(declaration as AccessorDeclarationSyntax)?.Body,
            method?.ExpressionBody??(declaration as AccessorDeclarationSyntax)?.ExpressionBody??(declaration as PropertyDeclarationSyntax)?.ExpressionBody??(declaration as IndexerDeclarationSyntax)?.ExpressionBody);
    }
    static string TypeName(ITypeSymbol? t) {
        if(t is IArrayTypeSymbol a) {
            if(a.Rank!=1)throw new InvalidOperationException("rectangular array rank is not lowered");
            return "pls::cs::Array<"+TypeName(a.ElementType)+">";
        }
        if(t is ITypeParameterSymbol tp)return "T_"+tp.Name;
        if(t is INamedTypeSymbol{TypeKind:TypeKind.Delegate} delegateType){var invoke=delegateType.DelegateInvokeMethod!;return "pls::cs::Delegate<"+TypeName(invoke.ReturnType)+"("+String.Join(",",invoke.Parameters.Select(p=>TypeName(p.Type)))+")>";}
        if(SystemDictionary(t))return "pls::cs::Dictionary<"+String.Join(",",((INamedTypeSymbol)t!).TypeArguments.Select(TypeName))+">";
        if(SystemList(t))return "pls::cs::List<"+TypeName(((INamedTypeSymbol)t!).TypeArguments[0])+">";
        if(SystemStack(t))return "pls::cs::Stack<"+TypeName(((INamedTypeSymbol)t!).TypeArguments[0])+">";
        if(t?.ToDisplayString()=="System.Array")return "pls::cs::Ref<pls::cs::ArrayBase>";
        if(FrameworkValue(t) is string nativeValue)return nativeValue;
        if(t is INamedTypeSymbol record&&RecordStruct(record))return externalTypes.TryGetValue(Id(record),out var externalRecord)?externalRecord:ClassName(record);
        if(FrameworkClass(t) is string framework)return "pls::cs::Ref<"+framework+">";
        if(FrameworkValue(t) is string valueType)return valueType;
        if(t?.ToDisplayString()=="System.Threading.ThreadStart")return "pls::cs::Delegate<void()>";
        if(t?.ToDisplayString()=="System.Threading.ThreadPriority")return "pls::cs::ThreadPriority";
        if(t?.ToDisplayString()=="System.Threading.ThreadState")return "pls::cs::ThreadState";
        if(t?.ToDisplayString()=="System.DateTimeKind")return "pls::cs::DateTimeKind";
        if(t?.ToDisplayString()=="System.IO.SeekOrigin")return "pls::cs::SeekOrigin";
        if(t?.ToDisplayString()=="kairo.unity.ui.AppEventType")return "pls::kairo::AppEventType";
        if(t?.ToDisplayString()=="kairo.unity.ui.Image.Format")return "pls::kairo::Image::Format";
        if(t?.ToDisplayString()=="kairo.unity.ui.Image.Filter")return "pls::kairo::Image::Filter";
        if(t is INamedTypeSymbol{TypeKind:TypeKind.Enum} enumeration)return TypeName(enumeration.EnumUnderlyingType);
        if(t is INamedTypeSymbol external&&externalTypes.ContainsKey(Id(external)))return "pls::cs::Ref<"+NativeClass(external)+">";
        switch(t?.SpecialType) {
            case SpecialType.System_Void:return "void";
            case SpecialType.System_Boolean:return "bool";
            case SpecialType.System_Byte:return "std::uint8_t";
            case SpecialType.System_SByte:return "std::int8_t";
            case SpecialType.System_Int16:return "std::int16_t";
            case SpecialType.System_UInt16:return "std::uint16_t";
            case SpecialType.System_Char:return "char16_t";
            case SpecialType.System_Int32:return "std::int32_t";
            case SpecialType.System_UInt32:return "std::uint32_t";
            case SpecialType.System_Int64:return "std::int64_t";
            case SpecialType.System_UInt64:return "std::uint64_t";
            case SpecialType.System_Single:return "float";
            case SpecialType.System_Double:return "double";
            case SpecialType.System_String:return "pls::cs::String";
            case SpecialType.System_Object:return "pls::cs::Ref<pls::cs::Object>";
            case SpecialType.None when t is INamedTypeSymbol named&&(PlainClass(named)||RecordStruct(named)||(named.TypeKind==TypeKind.Interface&&named.DeclaringSyntaxReferences.Length!=0)):return "pls::cs::Ref<"+ClassName(named)+">";
            default:throw new InvalidOperationException("type not lowered: "+t?.ToDisplayString());
        }
    }
    bool IdentityHash(IMethodSymbol method){
        if(method.Name!="GetHashCode"||syntax[Id(method)] is not MethodDeclarationSyntax declaration||declaration.Body?.Statements.Count!=1||declaration.Body.Statements[0] is not ReturnStatementSyntax{Expression:InvocationExpressionSyntax call}||call.Expression is not MemberAccessExpressionSyntax{Expression:BaseExpressionSyntax})return false;
        return (compilation.GetSemanticModel(call.SyntaxTree).GetSymbolInfo(call).Symbol as IMethodSymbol)?.ContainingType.SpecialType==SpecialType.System_Object;
    }
    static bool RecordStruct(INamedTypeSymbol type)=>type.TypeKind==TypeKind.Struct&&type.DeclaringSyntaxReferences.Length!=0&&type.TypeParameters.Length==0&&type.GetMembers().OfType<IMethodSymbol>().Where(m=>!m.IsImplicitlyDeclared).All(m=>m.MethodKind==MethodKind.Constructor||m.MethodKind==MethodKind.Ordinary&&!m.IsVirtual&&!m.IsOverride)&&type.Interfaces.Length==0;
    static bool PlainClass(INamedTypeSymbol t)=>t.TypeKind==TypeKind.Class&&t.DeclaringSyntaxReferences.Length!=0&&!t.IsStatic&&(t.ContainingType==null||t.ContainingType.TypeParameters.Length==0)&&(t.BaseType?.SpecialType==SpecialType.System_Object||(t.BaseType!=null&&(FrameworkClass(t.BaseType)!=null||externalCompleteBases.Contains(Id(t.BaseType))||PlainClass(t.BaseType))));
    static IEnumerable<IFieldSymbol> InstanceFields(INamedTypeSymbol type) {
        foreach(var f in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))yield return f;
        if(type.BaseType!=null&&PlainClass(type.BaseType))foreach(var f in InstanceFields(type.BaseType))yield return f;
    }
    static int ClassDepth(INamedTypeSymbol type)=>type.BaseType!=null&&PlainClass(type.BaseType)?1+ClassDepth(type.BaseType):0;
    void RequireClass(INamedTypeSymbol type,SyntaxNode node) {
        if(externalTypes.ContainsKey(Id(type))||externalValueTypes.ContainsKey(Id(type)))return;
        if(type.TypeKind==TypeKind.Interface&&type.DeclaringSyntaxReferences.Length!=0){
            var interfaceId=Id(type);classDependencies[current].Add(interfaceId);if(classes.ContainsKey(interfaceId))return;classes[interfaceId]=type;
            foreach(var method in InterfaceMethods(type)){Type(method.ReturnType,node);foreach(var parameter in method.Parameters)Type(parameter.Type,node);}return;
        }
        if(RecordStruct(type)){var recordId=Id(type);classDependencies[current].Add(recordId);if(classes.ContainsKey(recordId))return;classes[recordId]=type;try{foreach(var field in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))Type(field.Type,node);}catch{classes.Remove(recordId);throw;}return;}
        if(!PlainClass(type))throw new Unsupported(node,"class layout/base binding not lowered: "+type.ToDisplayString()+"; base="+type.BaseType?.ToDisplayString());
        type=type.OriginalDefinition;
        if(type.BaseType?.ToDisplayString()=="System.IO.Stream")foreach(var required in type.GetMembers().OfType<IMethodSymbol>().Where(m=>m.IsOverride))dependencies[current].Add(Id(required));
        if(compilation.AssemblyName!="Assembly-CSharp")foreach(var required in type.GetMembers().OfType<IMethodSymbol>().Where(m=>MethodSlots(m).Any()&&!m.IsAbstract))dependencies[current].Add(Id(required));
        var id=Id(type);classDependencies[current].Add(id);if(classes.ContainsKey(id))return;
        classes[id]=type;
        try {foreach(var iface in type.Interfaces.Where(t=>t.DeclaringSyntaxReferences.Length!=0))RequireClass(iface,node);if(type.BaseType!=null&&PlainClass(type.BaseType))RequireClass(type.BaseType,node);foreach(var field in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))Type(field.Type,node);}
        catch {classes.Remove(id);throw;}
    }
    string Type(ITypeSymbol? t,SyntaxNode node) {
        try {
            if(t is INamedTypeSymbol{TypeKind:TypeKind.Enum} sourceEnum&&sourceEnum.DeclaringSyntaxReferences.Length!=0)sourceEnums[Id(sourceEnum)]=sourceEnum;
            if(t is IArrayTypeSymbol array)Type(array.ElementType,node);
            if(SystemList(t)||SystemStack(t))Type(((INamedTypeSymbol)t!).TypeArguments[0],node);
            if(SystemDictionary(t)||SystemPair(t))foreach(var argument in ((INamedTypeSymbol)t!).TypeArguments)Type(argument,node);
            if(t is INamedTypeSymbol external&&externalTypes.ContainsKey(Id(external)))foreach(var argument in external.TypeArguments)Type(argument,node);
            if(t is INamedTypeSymbol named&&(PlainClass(named)||RecordStruct(named)||named.TypeKind==TypeKind.Interface)&&named.DeclaringSyntaxReferences.Length!=0&&!externalTypes.ContainsKey(Id(named)))RequireClass(named,node);
            return TypeName(t);
        }catch(InvalidOperationException e){throw new Unsupported(node,e.Message);}
    }
    static bool Integral(ITypeSymbol? t)=>t is INamedTypeSymbol{TypeKind:TypeKind.Enum} e?Integral(e.EnumUnderlyingType):t!=null&&new[]{SpecialType.System_Byte,SpecialType.System_SByte,SpecialType.System_Int16,SpecialType.System_UInt16,SpecialType.System_Char,SpecialType.System_Int32,SpecialType.System_UInt32,SpecialType.System_Int64,SpecialType.System_UInt64}.Contains(t.SpecialType);
    static bool BakedScalar(ITypeSymbol? t)=>Integral(t)||t?.SpecialType is SpecialType.System_Single or SpecialType.System_Double or SpecialType.System_Boolean;
    static string NumericSuffix(ITypeSymbol? t)=>t?.SpecialType switch {
        SpecialType.System_Int32=>"i32",SpecialType.System_UInt32=>"u32",SpecialType.System_Int64=>"i64",SpecialType.System_UInt64=>"u64",_=>""};
    void Used(SyntaxNode n){var kind=n.Kind().ToString();var counts=methodKinds[current];counts[kind]=counts.GetValueOrDefault(kind)+1;}
    string Cast(string value,ITypeSymbol? from,ITypeSymbol? to,SyntaxNode node) {
        if(to==null||SymbolEqualityComparer.Default.Equals(from,to))return value;
        if(to.ToDisplayString()=="System.Threading.ThreadPriority"||to.ToDisplayString()=="System.Threading.ThreadState")return "static_cast<"+Type(to,node)+">("+value+")";
        if(to.ToDisplayString()=="System.DateTimeKind")return "static_cast<pls::cs::DateTimeKind>("+value+")";
        if(from?.ToDisplayString()=="System.DateTimeKind")return "static_cast<"+Type(to,node)+">("+value+")";
        if(to.ToDisplayString()=="System.IO.SeekOrigin")return "static_cast<pls::cs::SeekOrigin>("+value+")";
        if(from?.ToDisplayString()=="System.IO.SeekOrigin")return "static_cast<"+Type(to,node)+">("+value+")";
        if(Integral(from)&&Integral(to))return "pls::cs::cast_integral<"+Type(to,node)+">("+value+")";
        if((to.SpecialType==SpecialType.System_Single||to.SpecialType==SpecialType.System_Double)&& (Integral(from)||from?.SpecialType==SpecialType.System_Single||from?.SpecialType==SpecialType.System_Double))return "static_cast<"+Type(to,node)+">("+value+")";
        if(Integral(to)&&(from?.SpecialType==SpecialType.System_Single||from?.SpecialType==SpecialType.System_Double)) {
            if(to.SpecialType==SpecialType.System_Int32)return "pls::cs::conv_i32("+value+")";
            if(to.SpecialType==SpecialType.System_Int64)return "pls::cs::conv_i64("+value+")";
            throw new Unsupported(node,"floating-to-narrow/unsigned conversion requires target CLR contract");
        }
        if(to.SpecialType==SpecialType.System_Object) {
            if(from is INamedTypeSymbol nativeValue&&externalValueTypes.ContainsKey(Id(nativeValue)))throw new Unsupported(node,"native value boxing requires an exact Equals/hash/ToString contract");
            Type(from,node);return "pls::cs::box("+value+")";
        }
        if(to.ToDisplayString()=="System.Array"&&from?.SpecialType==SpecialType.System_Object)return "pls::cs::array_cast("+value+")";
        if(to.ToDisplayString()=="System.Array"&&from is IArrayTypeSymbol)return "pls::cs::array_cast(pls::cs::box("+value+"))";
        if(from?.ToDisplayString()=="System.Array"&&to is IArrayTypeSymbol)return "pls::cs::unbox<"+Type(to,node)+">("+value+")";
        if(from?.SpecialType==SpecialType.System_Object) return "pls::cs::unbox<"+Type(to,node)+">("+value+")";
        if(from is IArrayTypeSymbol{Rank:1} sourceArray&&to is IArrayTypeSymbol{Rank:1} targetArray&&sourceArray.ElementType.IsReferenceType&&targetArray.ElementType.IsReferenceType&&sourceArray.ElementType is INamedTypeSymbol&&targetArray.ElementType is INamedTypeSymbol&&sourceArray.ElementType.SpecialType!=SpecialType.System_String&&targetArray.ElementType.SpecialType!=SpecialType.System_String){
            Type(sourceArray,node);Type(targetArray,node);
            return compilation.ClassifyConversion(from,to).IsImplicit?Type(to,node)+"::covariant_from<"+Type(sourceArray.ElementType,node)+">("+value+")":Type(to,node)+"::from_object(pls::cs::box("+value+"))";
        }
        if(from!=null&&!SymbolEqualityComparer.Default.Equals(from,to)&&from.IsReferenceType&&to.IsReferenceType) {
            if(from is INamedTypeSymbol f&&to is INamedTypeSymbol t&&(FrameworkClass(f)!=null||PlainClass(f)||f.TypeKind==TypeKind.Interface||externalTypes.ContainsKey(Id(f)))&&(FrameworkClass(t)!=null||PlainClass(t)||t.TypeKind==TypeKind.Interface||externalTypes.ContainsKey(Id(t)))) {
                Type(to,node);return compilation.ClassifyConversion(from,to).IsImplicit?value:"pls::cs::unbox<"+Type(to,node)+">(pls::cs::box("+value+"))";
            }
            throw new Unsupported(node,"reference covariance/interface conversion not lowered");
        }
        Type(to,node);return value;
    }
    string Constant(object? value,ITypeSymbol? type,SyntaxNode node) {
        if(value==null)return Type(type,node)+"{}";
        if(type is INamedTypeSymbol{TypeKind:TypeKind.Enum} enumeration)return "static_cast<"+Type(type,node)+">("+Constant(value,enumeration.EnumUnderlyingType,node)+")";
        if(value is string text) {
            return "pls::cs::String(std::u16string(u\""+String.Concat(text.Select(c=>"\\x"+((int)c).ToString("x4",CultureInfo.InvariantCulture)+"\" u\""))+"\","+text.Length+"))";
        }
        if(value is char ch)return "char16_t("+((int)ch).ToString(CultureInfo.InvariantCulture)+")";
        if(value is bool b)return b?"true":"false";
        if(value is float f)return "cs_f32(0x"+unchecked((uint)BitConverter.SingleToInt32Bits(f)).ToString("x8",CultureInfo.InvariantCulture)+"u)";
        if(value is double d)return "cs_f64(0x"+unchecked((ulong)BitConverter.DoubleToInt64Bits(d)).ToString("x16",CultureInfo.InvariantCulture)+"ull)";
        if(Integral(type)) {
            var bits=value is ulong u?u:unchecked((ulong)Convert.ToInt64(value,CultureInfo.InvariantCulture));
            return "pls::cs::cast_integral<"+Type(type,node)+">(std::uint64_t(0x"+bits.ToString("x",CultureInfo.InvariantCulture)+"ull))";
        }
        throw new Unsupported(node,"constant type not lowered");
    }
    string StaticField(IFieldSymbol field,SyntaxNode site) {
        if(field.HasConstantValue)return Constant(field.ConstantValue,field.Type,site);
        if(field.IsStatic&&externalFields.TryGetValue(Id(field),out var nativeField))return nativeField.StartsWith("readonly:",StringComparison.Ordinal)?nativeField.Substring(9):nativeField;
        if(field.ContainingType.SpecialType==SpecialType.System_String&&field.Name=="Empty")return "pls::cs::String(u\"\")";
        if(field.ContainingType.ToDisplayString()=="System.BitConverter"&&field.Name=="IsLittleEndian")return "cs_is_little_endian()";
        if(!field.IsStatic) {
            if(externalValueTypes.ContainsKey(Id(field.ContainingType))){
                if(!externalFields.TryGetValue(Id(field),out var nativeMember))throw new Unsupported(site,"native value field has no exact binding");
                if(site is not MemberAccessExpressionSyntax access)throw new Unsupported(site,"native value receiver is missing");
                return "("+Expr(access.Expression)+")."+nativeMember;
            }
            if(RecordStruct(field.ContainingType)&&site is MemberAccessExpressionSyntax recordMember&&recordMember.Expression is not ThisExpressionSyntax){RequireClass(field.ContainingType,site);return "("+Expr(recordMember.Expression)+")."+Name(field);}
            var externalField=externalFields.ContainsKey(Id(field));if(!externalField)RequireClass(field.ContainingType,site);
            if(externalTypes.ContainsKey(Id(field.ContainingType))&&!externalField)throw new Unsupported(site,"native reference field requires an exact storage binding");
            var receiver=site is MemberAccessExpressionSyntax member?Expr(member.Expression):"cs_this";
            return "([&]() { auto cs_receiver = "+receiver+"; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->"+(externalField?externalFields[Id(field)]:Name(field))+(sharedFields.Contains(Id(field))?".load()":"")+"; }())";
        }
        var id=Id(field);fieldDependencies[current].Add(id);
        if(externalTypes.TryGetValue(Id(field.ContainingType),out var fieldOwner)&&!fieldOwner.StartsWith("pls::generated::",StringComparison.Ordinal))throw new Unsupported(site,"native static field requires an exact platform storage binding");
        if(field.DeclaringSyntaxReferences.Length==0&&!(field.AssociatedSymbol is IPropertySymbol property&&property.DeclaringSyntaxReferences.Length!=0))throw new Unsupported(site,"external nonconstant static field not lowered");
        EnsureTypeInitializer(field.ContainingType,site);
        if(!fieldSymbols.ContainsKey(id)){fieldSymbols[id]=field;fields[id]=Type(field.Type,site)+" "+Name(field)+"_value{};";}
        return Name(field)+"()";
    }
    (string setup,string target) ValueStorage(ExpressionSyntax expression,bool assignment=false){
        if(expression is ParenthesizedExpressionSyntax parenthesized)return ValueStorage(parenthesized.Expression,assignment);
        if(expression is ThisExpressionSyntax&&RecordStruct(methods[current].ContainingType))return ("","*cs_this");
        var name="cs_value_storage_"+temporary++;var symbol=model.GetSymbolInfo(expression).Symbol;
        if(symbol is ILocalSymbol||symbol is IParameterSymbol)return ("",ReadLocal(symbol));
        if(expression is ElementAccessExpressionSyntax element&&model.GetTypeInfo(element.Expression).Type is IArrayTypeSymbol&&element.ArgumentList.Arguments.Count==1){
            return ("auto "+name+"_array="+Expr(element.Expression)+";auto "+name+"_index="+Expr(element.ArgumentList.Arguments[0].Expression)+";auto& "+name+"="+name+"_array.at("+name+"_index);",name);
        }
        if(symbol is IFieldSymbol field){
            if(externalFields.GetValueOrDefault(Id(field))?.StartsWith("readonly:",StringComparison.Ordinal)??false)throw new Unsupported(expression,"native field has a read binding but no managed-address/write binding");
            if(sharedFields.Contains(Id(field)))throw new Unsupported(expression,"shared fields cannot expose an unsynchronized managed address");
            var inConstructor=methods[current].MethodKind==MethodKind.Constructor&&SymbolEqualityComparer.Default.Equals(methods[current].ContainingType,field.ContainingType);
            if(field.IsReadOnly&&!inConstructor){
                if(assignment)throw new Unsupported(expression,"readonly value storage cannot be assigned outside its constructor");
                return ("auto "+name+"="+Expr(expression)+";",name);
            }
            if(field.IsStatic)return ("auto& "+name+"="+StaticField(field,expression)+";",name);
            var member=externalFields.GetValueOrDefault(Id(field),Name(field));
            var receiver=expression is MemberAccessExpressionSyntax access?access.Expression:null;
            if(field.ContainingType.IsValueType){
                if(receiver==null)throw new Unsupported(expression,"value field receiver is missing");
                var storage=ValueStorage(receiver,assignment);return (storage.setup+"auto& "+name+"="+storage.target+"."+member+";",name);
            }
            if(externalTypes.ContainsKey(Id(field.ContainingType))&&!externalFields.ContainsKey(Id(field)))throw new Unsupported(expression,"native class field requires an exact storage binding");
            RequireClass(field.ContainingType,expression);
            return ("auto "+name+"_owner="+(receiver==null?"cs_this":Expr(receiver))+";auto& "+name+"=cs_require("+name+"_owner)->"+member+";",name);
        }
        if(assignment)throw new Unsupported(expression,"value expression is not addressable storage");
        return ("auto "+name+"="+Expr(expression)+";",name);
    }
    string Converted(ExpressionSyntax node,ITypeSymbol? to) {
        if(node.IsKind(SyntaxKind.NullLiteralExpression)&&to?.IsReferenceType==true)return Type(to,node)+"{}";
        if(node is AnonymousFunctionExpressionSyntax anonymous&&to is INamedTypeSymbol{TypeKind:TypeKind.Delegate} anonymousType)return Anonymous(anonymous,anonymousType);
        if(node is IdentifierNameSyntax or MemberAccessExpressionSyntax&&to is INamedTypeSymbol{TypeKind:TypeKind.Delegate} delegateType&&model.GetSymbolInfo(node).Symbol is IMethodSymbol target&&target.MethodKind!=MethodKind.AnonymousFunction)return MethodGroup(node,target,delegateType);
        if(to!=null&&model.ClassifyConversion(node,to).MethodSymbol is IMethodSymbol conversion) {
            string callee;
            if(externalMethods.TryGetValue(Id(conversion),out var external))callee=external;
            else if(methods.ContainsKey(Id(conversion))){dependencies[current].Add(Id(conversion));callee=Name(conversion);}
            else throw new Unsupported(node,"user-defined conversion has no generated/native binding: "+Id(conversion));
            return "([&]() { auto cs_value = "+Expr(node)+"; return "+callee+"(cs_value); }())";
        }
        return Cast(Expr(node),model.GetTypeInfo(node).Type,to,node);
    }
    string Anonymous(AnonymousFunctionExpressionSyntax node,INamedTypeSymbol delegateType){
        Used(node);var symbol=model.GetSymbolInfo(node).Symbol as IMethodSymbol;
        if(symbol==null||symbol.Parameters.Any(p=>p.RefKind!=RefKind.None))throw new Unsupported(node,"anonymous ref/out signature not lowered");
        if(hoistLocals)throw new Unsupported(node,"closure in method with goto requires scope-lifetime lowering");
        var captures=node.DescendantNodes().OfType<IdentifierNameSyntax>().Select(n=>model.GetSymbolInfo(n).Symbol).Where(s=>s is ILocalSymbol||s is IParameterSymbol).Cast<ISymbol>().Where(s=>!s.DeclaringSyntaxReferences.Any(r=>node.Span.Contains(r.Span))).Distinct(SymbolEqualityComparer.Default).ToArray();
        foreach(var capture in captures)if(!capturedVariables.Contains(capture))throw new Unsupported(node,"captured variable was not allocated a shared cell");
        bool captureThis=node.DescendantNodes().OfType<ThisExpressionSyntax>().Any()||node.DescendantNodes().OfType<BaseExpressionSyntax>().Any()||node.DescendantNodes().OfType<IdentifierNameSyntax>().Any(n=>!(n.Parent is MemberAccessExpressionSyntax m&&m.Name==n)&&model.GetSymbolInfo(n).Symbol is ISymbol s&&!s.IsStatic&&(s is IFieldSymbol||s is IPropertySymbol||s is IMethodSymbol));
        if(captureThis&&methods[current].IsStatic)throw new Unsupported(node,"anonymous implicit receiver analysis is incomplete");
        var name="cs_closure_"+Hash(current+":"+node.SpanStart);var result=Type(symbol.ReturnType,node);var builder=new StringBuilder("([&](){struct "+name+" : pls::cs::Object{");
        foreach(var capture in captures)builder.Append(CellType(capture,node)+" "+Local(capture)+"_cell;");
        if(captureThis)builder.Append(Type(methods[current].ContainingType,node)+" cs_this;");
        builder.Append("void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);");
        foreach(var capture in captures)builder.Append("pls::cs::trace_value("+Local(capture)+"_cell,v);");
        if(captureThis)builder.Append("pls::cs::trace_value(cs_this,v);");
        builder.Append("}void release_edges()override{pls::cs::Object::release_edges();");
        foreach(var capture in captures)builder.Append(Local(capture)+"_cell.reset();");if(captureThis)builder.Append("cs_this.reset();");
        builder.Append("}"+result+" Invoke("+String.Join(",",symbol.Parameters.Select(p=>Type(p.Type,node)+" "+Local(p)))+")");
        var body=node.Body is BlockSyntax block?Statement(block,symbol):"{ "+(symbol.ReturnsVoid?"":"return ")+Converted((ExpressionSyntax)node.Body,symbol.ReturnType)+"; }";
        var parameterCells=String.Concat(symbol.Parameters.Where(p=>capturedVariables.Contains(p)).Select(p=>CellType(p,node)+" "+Local(p)+"_cell="+CellAllocation(p,Local(p),node)+";"));
        builder.Append("{"+parameterCells+body+"}};auto cs_closure=pls::cs::make_ref<"+name+">();");
        foreach(var capture in captures)builder.Append("cs_closure->"+Local(capture)+"_cell="+Local(capture)+"_cell;");if(captureThis)builder.Append("cs_closure->cs_this=cs_this;");
        var key="std::string(\""+current+":"+node.SpanStart+"\")"+String.Concat(captures.Skip(1).Select(c=>"+std::to_string(reinterpret_cast<std::uintptr_t>("+Local(c)+"_cell.get()))"));
        var identity=captures.Length!=0?Local(captures[0])+"_cell.get()":captureThis?"cs_this.get()":"nullptr";
        var parameters=String.Join(",",symbol.Parameters.Select(p=>Type(p.Type,node)+" "+Local(p)));var arguments=String.Join(",",symbol.Parameters.Select(Local));
        builder.Append("return "+Type(delegateType,node)+"::bind_identity(cs_closure,"+identity+","+key+",[weak=std::weak_ptr<"+name+">(cs_closure)]("+parameters+")->"+result+"{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();"+(symbol.ReturnsVoid?"":"return ")+"target->Invoke("+arguments+");});}())");return builder.ToString();
    }
    string MethodGroup(ExpressionSyntax site,IMethodSymbol target,INamedTypeSymbol delegateType){
        if(target.Parameters.Any(p=>p.RefKind!=RefKind.None))throw new Unsupported(site,"ref/out method groups require a by-reference delegate ABI");
        if(target.ContainingType.IsValueType)throw new Unsupported(site,"value-type method groups require boxed target lifetime semantics");
        var invoke=delegateType.DelegateInvokeMethod!;if(target.Parameters.Length!=invoke.Parameters.Length)throw new Unsupported(site,"delegate binding parameter arity differs");
        var native=externalMethods.GetValueOrDefault(Id(target));
        if(IsSourceAdapter(native))native=ResolveSourceAdapter(target,native!,site);
        if(native=="native")native=target.IsStatic?NativeClass(target.ContainingType)+"::"+target.Name:"member:"+target.Name;
        if(native==null){if(!methods.ContainsKey(Id(target)))throw new Unsupported(site,"delegate method has no source/native body");if(target.ContainingType.TypeKind!=TypeKind.Interface&&!target.IsAbstract)dependencies[current].Add(Id(target));}
        var signature=Type(delegateType,site);var result=Type(invoke.ReturnType,site);
        var parameters=String.Join(",",invoke.Parameters.Select((p,i)=>Type(p.Type,site)+" cs_param"+i));
        var arguments=invoke.Parameters.Select((p,i)=>Cast("cs_param"+i,p.Type,target.Parameters[i].Type,site)).ToList();
        string call,setup,capture;
        if(target.IsStatic){
            call=(native??Name(target))+(target.IsGenericMethod?"<"+String.Join(",",target.TypeArguments.Select(t=>Type(t,site)))+">":"")+"("+String.Join(",",arguments)+")";
            setup="";capture="[]";
        }else{
            var receiver=site is MemberAccessExpressionSyntax access?Expr(access.Expression):"cs_this";
            var receiverType=Type(target.ContainingType,site);if(!externalTypes.ContainsKey(Id(target.ContainingType)))RequireClass(target.ContainingType,site);
            setup="auto cs_target=static_cast<"+receiverType+">("+receiver+");if(!cs_target)throw pls::cs::"+(target.IsVirtual||target.IsOverride||target.IsAbstract?"NullReferenceException":"ArgumentException")+"();";
            capture="[cs_weak=std::weak_ptr<"+NativeClass(target.ContainingType)+">(cs_target)]";
            var baseCall=site is MemberAccessExpressionSyntax{Expression:BaseExpressionSyntax};
            if(native?.StartsWith("member:",StringComparison.Ordinal)??false)call="cs_receiver->"+native.Substring(7)+"("+String.Join(",",arguments)+")";
            else if(!baseCall&&(target.IsVirtual||target.IsOverride||target.IsAbstract))call="cs_receiver->"+Slot(target)+"("+String.Join(",",arguments)+")";
            else{arguments.Insert(0,"cs_receiver");call=(native??Name(target))+"("+String.Join(",",arguments)+")";}
        }
        var lambda=capture+"("+parameters+")->"+result+"{"+(target.IsStatic?"":"auto cs_receiver=cs_weak.lock();if(!cs_receiver)throw pls::cs::NullReferenceException();")+(result=="void"?"": "return ")+call+";}";
        var identity=target.IsVirtual||target.IsOverride||target.IsAbstract?"pls::cs::box(cs_target)->managed_delegate_method_id(\""+Slot(target)+"\")":"\""+Id(target)+"\"";
        return "([&](){"+setup+"return "+signature+(target.IsStatic?"::from_static(\""+Id(target)+"\","+lambda+")":"::bind(cs_target,"+identity+","+lambda+")")+";}())";
    }
    string AccessorCall(IMethodSymbol accessor,string? receiver,IEnumerable<string> arguments,SyntaxNode site) {
        var args=arguments.ToList();var property=(IPropertySymbol)accessor.AssociatedSymbol!;
        if(externalMethods.TryGetValue(Id(accessor),out var externalAccessor)){
            if(externalAccessor=="native")externalAccessor=accessor.IsStatic?NativeClass(accessor.ContainingType)+"::"+accessor.Name:"member:"+accessor.Name;
            if(externalAccessor.StartsWith("member:",StringComparison.Ordinal))return "cs_require("+receiver+")->"+externalAccessor.Substring(7)+"("+String.Join(",",args)+")";
            if(receiver!=null)args.Insert(0,receiver);return externalAccessor+"("+String.Join(",",args)+")";
        }
        if(FrameworkClass(accessor.ContainingType)!=null)return "cs_require("+receiver+")->"+(accessor.MethodKind==MethodKind.PropertyGet?"get_":"set_")+property.Name+"("+String.Join(",",args)+")";
        if(!methods.ContainsKey(Id(accessor)))throw new Unsupported(site,"property accessor has no source lowering");
        if(accessor.ContainingType.TypeKind!=TypeKind.Interface&&!accessor.IsAbstract)dependencies[current].Add(Id(accessor));
        if(receiver!=null&&(accessor.IsVirtual||accessor.IsOverride||accessor.IsAbstract))return "cs_require("+receiver+")->"+Slot(accessor)+"("+String.Join(",",args)+")";
        if(receiver!=null)args.Insert(0,"static_cast<"+Type(accessor.ContainingType,site)+">("+receiver+")");
        return Name(accessor)+"("+String.Join(",",args)+")";
    }
    string ReadProperty(IPropertySymbol property,string? receiver,IEnumerable<string> arguments,SyntaxNode site) {
        if(property.GetMethod==null)throw new Unsupported(site,"property has no getter");
        var setup=receiver==null?"":"auto cs_receiver = "+receiver+"; ";
        return "([&]() -> "+Type(property.Type,site)+" { "+setup+"return "+AccessorCall(property.GetMethod,receiver==null?null:"cs_receiver",arguments,site)+"; }())";
    }
    string Expr(ExpressionSyntax n) {
        if(compilation.AssemblyName=="Assembly-CSharp"&&Path.GetRelativePath(request.source_root,n.SyntaxTree.FilePath).Replace('\\','/').StartsWith("src/Assembly-CSharp/",StringComparison.Ordinal)) {
            var initializer=n is ArrayCreationExpressionSyntax creation?creation.Initializer:n is ImplicitArrayCreationExpressionSyntax implicitArray?implicitArray.Initializer:null;
            if(initializer!=null&&initializer.Expressions.Count>0&&initializer.Expressions.All(element=>model.GetConstantValue(element).HasValue)&&model.GetTypeInfo(n).Type is IArrayTypeSymbol arrayType&&BakedScalar(arrayType.ElementType)) {
                var source=Path.GetRelativePath(request.source_root,n.SyntaxTree.FilePath).Replace('\\','/');
                var id=Convert.ToHexString(SHA256.HashData(Encoding.UTF8.GetBytes("Assembly-CSharp\n"+source+"\n"+n.SpanStart))).ToLowerInvariant();
                if(!request.baked_arrays.TryGetValue(id,out var proof)||proof.source!=source||proof.span_start!=n.SpanStart||proof.element_type!=arrayType.ElementType.ToDisplayString()||proof.count!=initializer.Expressions.Count)throw new Unsupported(n,"numeric initializer requires authenticated original-payload baked-array proof");
                bakedUsed.Add(id);return "pls::assets::baked_array<"+Type(arrayType.ElementType,n)+">(\""+id+"\")";
            }
            if(n is InitializerExpressionSyntax content&&content.Expressions.Count>0&&content.Expressions.All(element=>model.GetConstantValue(element).HasValue)&&content.Expressions.Any(e=>BakedScalar(model.GetTypeInfo(e).Type)))throw new Unsupported(n,"numeric initializer has no original-payload baked-array proof");
        }
        Used(n);
        var constant=model.GetConstantValue(n);
        if(constant.HasValue)return Constant(constant.Value,model.GetTypeInfo(n).Type??model.GetTypeInfo(n).ConvertedType,n);
        switch(n) {
            case InterpolatedStringExpressionSyntax interpolation:
                var interpolationBody=new StringBuilder("([&](){");var holes=interpolation.Contents.OfType<InterpolationSyntax>().ToArray();
                for(int index=0;index<holes.Length;index++)interpolationBody.Append("auto cs_hole"+index+"="+Expr(holes[index].Expression)+";");
                interpolationBody.Append("pls::cs::String cs_text(u\"\");");int holeIndex=0;
                foreach(var content in interpolation.Contents){
                    string text;
                    if(content is InterpolatedStringTextSyntax literalText)text=Constant(literalText.TextToken.ValueText,compilation.GetSpecialType(SpecialType.System_String),literalText);
                    else if(content is InterpolationSyntax hole){
                        if(hole.AlignmentClause!=null)throw new Unsupported(hole,"interpolation alignment requires formatting contract");
                        var holeType=model.GetTypeInfo(hole.Expression).Type;var value="cs_hole"+holeIndex++;
                        if(hole.FormatClause!=null){
                            var format=hole.FormatClause.FormatStringToken.ValueText;var width=format.Length==1?0:int.TryParse(format.Substring(1),out var number)?number:-1;
                            if(holeType?.SpecialType!=SpecialType.System_Int32||format.Length==0||format[0] is not ('x' or 'X')||width<0||width>99)throw new Unsupported(hole,"interpolation format/type not lowered");
                            text="pls::cs::format_i32_hex("+value+","+width+","+(format[0]=='X'?"true":"false")+")";
                        }else text=StringValue(value,holeType,hole);
                    }else throw new Unsupported(content,"interpolated content not lowered");
                    interpolationBody.Append("cs_text=pls::cs::String::concat(cs_text,"+text+");");
                }
                return interpolationBody+"return cs_text;}())";
            case ThisExpressionSyntax _:return "cs_this";
            case BaseExpressionSyntax _:
                var bt=methods[current].ContainingType.BaseType!;return "std::static_pointer_cast<"+(bt.SpecialType==SpecialType.System_Object?"pls::cs::Object":NativeClass(bt))+">(cs_this)";
            case ParenthesizedExpressionSyntax p:return "("+Expr(p.Expression)+")";
            case CheckedExpressionSyntax uncheckedValue when uncheckedValue.IsKind(SyntaxKind.UncheckedExpression):return Expr(uncheckedValue.Expression);
            case IdentifierNameSyntax id:
                var symbol=model.GetSymbolInfo(id).Symbol;
                if(symbol is ILocalSymbol||symbol is IParameterSymbol)return ReadLocal(symbol);
                if(symbol is IFieldSymbol field)return StaticField(field,id);
                if(symbol is IPropertySymbol property)return ReadProperty(property,property.IsStatic?null:"cs_this",Array.Empty<string>(),id);
                throw new Unsupported(n,"identifier is not a supported local/parameter/static field");
            case LiteralExpressionSyntax lit when lit.IsKind(SyntaxKind.NullLiteralExpression):return Type(model.GetTypeInfo(lit).ConvertedType,lit)+"{}";
            case CastExpressionSyntax cast:return Converted(cast.Expression,model.GetTypeInfo(cast).Type);
            case MemberAccessExpressionSyntax member:
                if(model.GetSymbolInfo(member).Symbol is IFieldSymbol mf)return StaticField(mf,member);
                if(model.GetTypeInfo(member.Expression).Type?.ToDisplayString()=="System.Type"&&member.Name.Identifier.ValueText is "Name" or "FullName" or "Assembly")return "cs_require("+Expr(member.Expression)+")->get_"+member.Name.Identifier.ValueText+"()";
                if(model.GetSymbolInfo(member).Symbol is IPropertySymbol timeProperty&&(FrameworkValue(timeProperty.ContainingType)!=null||FrameworkClass(timeProperty.ContainingType)!=null)) {
                    if(externalValueTypes.ContainsKey(Id(timeProperty.ContainingType))){
                        if(timeProperty.GetMethod==null||!externalMethods.ContainsKey(Id(timeProperty.GetMethod)))throw new Unsupported(member,"native value property requires an exact binding");
                        return ReadProperty(timeProperty,timeProperty.IsStatic?null:Expr(member.Expression),Array.Empty<string>(),member);
                    }
                    if(timeProperty.IsStatic)return (FrameworkValue(timeProperty.ContainingType)??FrameworkClass(timeProperty.ContainingType))+"::get_"+timeProperty.Name+"()";
                    var receiver=Expr(member.Expression);
                    return FrameworkValue(timeProperty.ContainingType)!=null?"("+receiver+").get_"+timeProperty.Name+"()":"cs_require("+receiver+")->get_"+timeProperty.Name+"()";
                }
                if(model.GetSymbolInfo(member).Symbol is IPropertySymbol sourceProperty&&sourceProperty.GetMethod!=null&&(methods.ContainsKey(Id(sourceProperty.GetMethod))||externalMethods.ContainsKey(Id(sourceProperty.GetMethod))))return ReadProperty(sourceProperty,sourceProperty.IsStatic?null:Expr(member.Expression),Array.Empty<string>(),member);
                if(member.Name.Identifier.ValueText=="Length"&&model.GetTypeInfo(member.Expression).Type?.ToDisplayString()=="System.Array")return "cs_require("+Expr(member.Expression)+")->get_Length()";
                if(member.Name.Identifier.ValueText=="Length"&&(model.GetTypeInfo(member.Expression).Type is IArrayTypeSymbol||model.GetTypeInfo(member.Expression).Type?.SpecialType==SpecialType.System_String))return "("+Expr(member.Expression)+").length()";
                if((SystemList(model.GetTypeInfo(member.Expression).Type)||SystemDictionary(model.GetTypeInfo(member.Expression).Type)||SystemStack(model.GetTypeInfo(member.Expression).Type))&&member.Name.Identifier.ValueText is "Count" or "Capacity")return "("+Expr(member.Expression)+").get_"+member.Name.Identifier.ValueText+"()";
                if(FrameworkClass(model.GetTypeInfo(member.Expression).Type)!=null&&member.Name.Identifier.ValueText is "Length" or "Capacity")return "cs_require("+Expr(member.Expression)+")->get_"+member.Name.Identifier.ValueText+"()";
                throw new Unsupported(member,"member/property requires platform or object implementation");
            case BinaryExpressionSyntax binary:return Binary(binary);
            case PrefixUnaryExpressionSyntax pre:
                var operand=Expr(pre.Operand);var type=model.GetTypeInfo(pre).Type;
                if(pre.IsKind(SyntaxKind.LogicalNotExpression))return "(!("+operand+"))";
                if(pre.IsKind(SyntaxKind.UnaryPlusExpression))return operand;
                if(pre.IsKind(SyntaxKind.UnaryMinusExpression))return NumericSuffix(type)!=""?"pls::cs::neg_"+NumericSuffix(type)+"("+operand+")":"(-("+operand+"))";
                if(pre.IsKind(SyntaxKind.BitwiseNotExpression))return "pls::cs::cast_integral<"+Type(type,pre)+">(~("+operand+"))";
                if(pre.IsKind(SyntaxKind.PreIncrementExpression)||pre.IsKind(SyntaxKind.PreDecrementExpression))return Increment(pre.Operand,pre.IsKind(SyntaxKind.PreIncrementExpression),true);
                throw new Unsupported(pre,"prefix operation not lowered");
            case PostfixUnaryExpressionSyntax post:
                return Increment(post.Operand,post.IsKind(SyntaxKind.PostIncrementExpression),false);
            case ConditionalExpressionSyntax c:
                var ct=model.GetTypeInfo(c).Type;
                return "("+Expr(c.Condition)+" ? "+Converted(c.WhenTrue,ct)+" : "+Converted(c.WhenFalse,ct)+")";
            case AssignmentExpressionSyntax assignment:return Assignment(assignment);
            case InvocationExpressionSyntax invocation:return Invoke(invocation);
            case ConditionalAccessExpressionSyntax conditional:
                var conditionalType=model.GetTypeInfo(conditional).Type;
                if(conditional.WhenNotNull is not InvocationExpressionSyntax memberCall)throw new Unsupported(conditional,"conditional access requires invocation lowering");
                var conditionalMethod=model.GetSymbolInfo(memberCall).Symbol as IMethodSymbol;
                if(conditionalMethod==null||!methods.ContainsKey(Id(conditionalMethod))&&!externalMethods.ContainsKey(Id(conditionalMethod)))throw new Unsupported(conditional,"conditional target requires source/native method");
                if(!conditionalMethod.ReturnsVoid&&(conditionalType==null||!conditionalType.IsReferenceType))throw new Unsupported(conditional,"conditional access nullable value result not lowered");
                if(!externalMethods.ContainsKey(Id(conditionalMethod)))dependencies[current].Add(Id(conditionalMethod));
                var conditionalResult=conditionalMethod.ReturnsVoid?"void":Type(conditionalType,conditional);
                return "([&]() -> "+conditionalResult+" { auto cs_conditional = "+Expr(conditional.Expression)+"; if(!cs_conditional)return"+(conditionalMethod.ReturnsVoid?"":" "+conditionalResult+"{}")+"; "+(conditionalMethod.ReturnsVoid?"":"return ")+OrderedCall(conditionalMethod,memberCall.ArgumentList.Arguments.Select(a=>a.Expression).ToList(),conditional,"cs_conditional",true,externalMethods.GetValueOrDefault(Id(conditionalMethod)))+"; }())";
            case ObjectCreationExpressionSyntax creation:
                if(model.GetTypeInfo(creation).Type is INamedTypeSymbol{TypeKind:TypeKind.Delegate} createdDelegate&&creation.ArgumentList?.Arguments.Count==1&&creation.Initializer==null)return Converted(creation.ArgumentList.Arguments[0].Expression,createdDelegate);
                var ctor=model.GetSymbolInfo(creation).Symbol as IMethodSymbol;
                if(ctor==null||creation.Initializer!=null)throw new Unsupported(creation,"object initializer/unresolved constructor not lowered");
                if(ctor.ContainingType.SpecialType==SpecialType.System_Object&&ctor.Parameters.Length==0)return "pls::cs::make_ref<pls::cs::Object>()";
                if(ctor.ContainingType.TypeKind==TypeKind.Delegate&&creation.ArgumentList?.Arguments.Count==1)return Converted(creation.ArgumentList.Arguments[0].Expression,ctor.ContainingType);
                if(externalMethods.TryGetValue(Id(ctor),out var externalCtor))return OrderedCall(ctor,creation.ArgumentList?.Arguments.Select(a=>a.Expression).ToList()??new(),creation,null,true,externalCtor);
                if(ctor.ContainingType.SpecialType==SpecialType.System_String&&ctor.Parameters.Length==1&&ctor.Parameters[0].Type is IArrayTypeSymbol{ElementType.SpecialType:SpecialType.System_Char})return "cs_string_from_chars("+Expr(creation.ArgumentList!.Arguments[0].Expression)+")";
                if(SystemStack(ctor.ContainingType)){if(ctor.Parameters.Length!=0)throw new Unsupported(creation,"Stack supports only the observed default constructor");return Type(ctor.ContainingType,creation)+"::make()";}
                if(SystemList(ctor.ContainingType)||SystemDictionary(ctor.ContainingType)) {
                    if(SystemList(ctor.ContainingType)&&ctor.Parameters.Length==1&&creation.ArgumentList?.Arguments.Count==1&&model.GetTypeInfo(creation.ArgumentList.Arguments[0].Expression).Type is IArrayTypeSymbol sourceArray&&SymbolEqualityComparer.Default.Equals(sourceArray.ElementType,ctor.ContainingType.TypeArguments[0]))return "([&](){auto cs_values="+Expr(creation.ArgumentList.Arguments[0].Expression)+";if(cs_values.is_null())throw pls::cs::ArgumentNullException();auto cs_list="+Type(ctor.ContainingType,creation)+"::make(cs_values.length());cs_list.AddRange(cs_values);return cs_list;}())";
                    if(ctor.Parameters.Any(p=>p.Type.SpecialType!=SpecialType.System_Int32))throw new Unsupported(creation,"collection constructor overload not lowered");
                    var values=creation.ArgumentList!.Arguments.Select(a=>Expr(a.Expression)).ToArray();return Type(ctor.ContainingType,creation)+"::make("+String.Join(",",values)+")";
                }
                if(ExceptionClass(ctor.ContainingType)&&ctor.ContainingType.DeclaringSyntaxReferences.Length==0){
                    if(ctor.Parameters.Length>2||ctor.Parameters.Where((p,i)=>i==0?p.Type.SpecialType!=SpecialType.System_String:!ExceptionClass(p.Type)).Any())throw new Unsupported(creation,"exception constructor overload not lowered");
                    var b=new StringBuilder("([&](){ ");var args=creation.ArgumentList!.Arguments;
                    for(int i=0;i<args.Count;i++)b.Append("auto cs_arg"+i+" = "+Converted(args[i].Expression,ctor.Parameters[i].Type)+"; ");
                    return b+"return pls::cs::make_exception(\""+ctor.ContainingType.ToDisplayString()+"\""+String.Concat(Enumerable.Range(0,args.Count).Select(i=>",cs_arg"+i))+");}())";
                }
                if(FrameworkClass(ctor.ContainingType) is string nativeClass) {
                    if(nativeClass=="pls::cs::Random"&&(ctor.Parameters.Length!=1||ctor.Parameters[0].Type.SpecialType!=SpecialType.System_Int32))throw new Unsupported(creation,"Random constructor requires explicit Int32 seed");
                    var b=new StringBuilder("([&]() { ");var args=creation.ArgumentList!.Arguments;
                    for(int i=0;i<args.Count;i++)b.Append("auto cs_arg"+i+" = "+Converted(args[i].Expression,ctor.Parameters[i].Type)+"; ");
                    return b+"return pls::cs::make_ref<"+nativeClass+">("+String.Join(",",Enumerable.Range(0,args.Count).Select(i=>"cs_arg"+i))+"); }())";
                }
                if(FrameworkValue(ctor.ContainingType) is string nativeValue) {
                    var b=new StringBuilder("([&]() { ");var args=creation.ArgumentList!.Arguments;
                    for(int i=0;i<args.Count;i++)b.Append("auto cs_arg"+i+" = "+Converted(args[i].Expression,ctor.Parameters[i].Type)+"; ");
                    return b+"return "+nativeValue+"("+String.Join(",",Enumerable.Range(0,args.Count).Select(i=>"cs_arg"+i))+"); }())";
                }
                RequireClass(ctor.ContainingType,creation);dependencies[current].Add(Id(ctor));
                return OrderedCall(ctor,creation.ArgumentList?.Arguments.Select(a=>a.Expression).ToList()??new(),creation,null);
            case ElementAccessExpressionSyntax access:
                if(access.ArgumentList.Arguments.Count!=1)throw new Unsupported(access,"multi-index access not lowered");
                if(model.GetTypeInfo(access.Expression).Type?.ToDisplayString() is "System.Text.RegularExpressions.MatchCollection" or "System.Text.RegularExpressions.GroupCollection")return "([&](){auto cs_receiver="+Expr(access.Expression)+";auto cs_index="+Expr(access.ArgumentList.Arguments[0].Expression)+";return cs_require(cs_receiver)->get_Item(cs_index);}())";
                if(model.GetTypeInfo(access.Expression).Type?.ToDisplayString()=="System.Text.StringBuilder")return "([&]() { auto cs_receiver = "+Expr(access.Expression)+"; auto cs_index = "+Expr(access.ArgumentList.Arguments[0].Expression)+"; return cs_require(cs_receiver)->get_Chars(cs_index); }())";
                return "([&]() { auto cs_array = "+Expr(access.Expression)+"; auto cs_index = "+Expr(access.ArgumentList.Arguments[0].Expression)+"; return cs_array."+(SystemList(model.GetTypeInfo(access.Expression).Type)||SystemDictionary(model.GetTypeInfo(access.Expression).Type)||model.GetTypeInfo(access.Expression).Type is IArrayTypeSymbol?"get_Item":"at")+"(cs_index); }())";
            case TypeOfExpressionSyntax typeOf:return "pls::cs::runtime_type_of<"+Type(model.GetTypeInfo(typeOf.Type).Type,typeOf)+">()";
            case DefaultExpressionSyntax defaultValue:return Type(model.GetTypeInfo(defaultValue).Type,defaultValue)+"{}";
            case ArrayCreationExpressionSyntax array:
                var at=model.GetTypeInfo(array).Type as IArrayTypeSymbol;
                if(at==null||at.Rank!=1)throw new Unsupported(array,"rectangular array creation not lowered");
                if(array.Initializer!=null)return ArrayInitializer(array.Initializer,at,array);
                var sizes=array.Type.RankSpecifiers[0].Sizes;
                if(sizes.Count!=1||sizes[0] is OmittedArraySizeExpressionSyntax)throw new Unsupported(array,"array length missing");
                return Type(at,array)+"::make("+Expr(sizes[0])+")";
            case InitializerExpressionSyntax initializer:
                var it=model.GetTypeInfo(initializer).ConvertedType as IArrayTypeSymbol;
                if(it==null)throw new Unsupported(initializer,"initializer type is not an array");
                return ArrayInitializer(initializer,it,initializer);
            case ImplicitArrayCreationExpressionSyntax implicitArray:
                var implicitType=model.GetTypeInfo(implicitArray).Type as IArrayTypeSymbol;
                if(implicitType==null||implicitType.Rank!=1)throw new Unsupported(implicitArray,"implicit rectangular array is not lowered");
                return ArrayInitializer(implicitArray.Initializer,implicitType,implicitArray);
            default:throw new Unsupported(n,"expression lowering not implemented");
        }
    }
    string ArrayInitializer(InitializerExpressionSyntax initializer,IArrayTypeSymbol type,SyntaxNode site){
        var name="cs_initial_array_"+temporary++;var body=new StringBuilder("([&](){auto "+name+"="+Type(type,site)+"::make("+initializer.Expressions.Count+");");
        for(int index=0;index<initializer.Expressions.Count;index++)body.Append(name+".at("+index+")="+Converted(initializer.Expressions[index],type.ElementType)+";");
        return body+"return "+name+";}())";
    }
    string StringValue(string value,ITypeSymbol? type,SyntaxNode site){
        if(type?.SpecialType==SpecialType.System_String)return value;
        if(type?.SpecialType==SpecialType.System_Char)return "cs_char_string("+value+")";
        if(Integral(type)&&type?.TypeKind!=TypeKind.Enum)return "cs_integer_string("+value+")";
        if(type?.SpecialType==SpecialType.System_Boolean)return "pls::cs::String("+value+"?u\"True\":u\"False\")";
        if(type?.IsReferenceType==true||type?.SpecialType==SpecialType.System_Object)return "cs_object_string(pls::cs::box("+value+"))";
        throw new Unsupported(site,"string formatting requires exact ToString contract for this value type");
    }
    string Binary(BinaryExpressionSyntax b) {
        if(b.IsKind(SyntaxKind.IsExpression)||b.IsKind(SyntaxKind.AsExpression)){
            var target=model.GetTypeInfo(b.Right).Type;if(target==null)throw new Unsupported(b,"type test target is not bound");
            var value="pls::cs::box("+Expr(b.Left)+")";var cpp=Type(target,b);
            if(b.IsKind(SyntaxKind.IsExpression))return "cs_is<"+cpp+">("+value+")";
            if(!target.IsReferenceType)throw new Unsupported(b,"as requires nullable/reference target lowering");
            if(target.SpecialType==SpecialType.System_Object)return value;
            if(target is INamedTypeSymbol named&&(PlainClass(named)||named.TypeKind==TypeKind.Interface||FrameworkClass(named)!=null||externalTypes.ContainsKey(Id(named))))return "std::dynamic_pointer_cast<"+NativeClass(named)+">("+value+")";
            throw new Unsupported(b,"as target wrapper requires nonthrowing cast lowering");
        }

        if(b.IsKind(SyntaxKind.IsExpression)) {
            var target=model.GetTypeInfo(b.Right).Type;
            if(target is INamedTypeSymbol named&&PlainClass(named)){RequireClass(named,b);return "bool(std::dynamic_pointer_cast<"+ClassName(named)+">(pls::cs::box("+Expr(b.Left)+")))";}
            if(target!=null&&target.IsValueType)return "bool(std::dynamic_pointer_cast<pls::cs::Box<"+Type(target,b)+">>(pls::cs::box("+Expr(b.Left)+")))";
            throw new Unsupported(b,"is test requires generated class or boxed value type");
        }
        var operation=model.GetOperation(b) as IBinaryOperation;
        if(operation?.OperatorMethod is IMethodSymbol custom&&methods.ContainsKey(Id(custom))) {
            var callee=externalMethods.GetValueOrDefault(Id(custom));
            if(callee==null){dependencies[current].Add(Id(custom));callee=Name(custom);}
            return "([&]() { "+Type(custom.Parameters[0].Type,b)+" cs_left = "+Converted(b.Left,custom.Parameters[0].Type)+"; "+Type(custom.Parameters[1].Type,b)+" cs_right = "+Converted(b.Right,custom.Parameters[1].Type)+"; return "+callee+"(cs_left,cs_right); }())";
        }
        if(b.IsKind(SyntaxKind.LogicalAndExpression)||b.IsKind(SyntaxKind.LogicalOrExpression))return "("+Expr(b.Left)+(b.IsKind(SyntaxKind.LogicalAndExpression)?" && ":" || ")+Expr(b.Right)+")";
        if(b.IsKind(SyntaxKind.AddExpression)&&model.GetTypeInfo(b).Type?.SpecialType==SpecialType.System_String) {
            string StringOperand(ExpressionSyntax e) {
                var type=model.GetTypeInfo(e).Type;
                if(e.IsKind(SyntaxKind.NullLiteralExpression))return "pls::cs::String{}";
                return StringValue(Expr(e),type,e);
            }
            return "([&]() { auto cs_left = "+StringOperand(b.Left)+"; auto cs_right = "+StringOperand(b.Right)+"; return pls::cs::String::concat(cs_left,cs_right); }())";
        }
        if(b.IsKind(SyntaxKind.EqualsExpression)||b.IsKind(SyntaxKind.NotEqualsExpression)) {
            var delegateOperand=model.GetTypeInfo(b.Left).Type as INamedTypeSymbol??model.GetTypeInfo(b.Right).Type as INamedTypeSymbol;
            if(delegateOperand?.TypeKind!=TypeKind.Delegate&&model.GetTypeInfo(b.Right).Type is INamedTypeSymbol{TypeKind:TypeKind.Delegate} rightDelegate)delegateOperand=rightDelegate;
            if(delegateOperand?.TypeKind==TypeKind.Delegate)return "([&](){auto cs_left="+(b.Left.IsKind(SyntaxKind.NullLiteralExpression)?Type(delegateOperand,b)+"{}":Expr(b.Left))+";auto cs_right="+(b.Right.IsKind(SyntaxKind.NullLiteralExpression)?Type(delegateOperand,b)+"{}":Expr(b.Right))+";return cs_left"+b.OperatorToken.Text+"cs_right;}())";
            var leftType=model.GetTypeInfo(b.Left).Type;var rightType=model.GetTypeInfo(b.Right).Type;
            var other=b.Left.IsKind(SyntaxKind.NullLiteralExpression)?b.Right:b.Right.IsKind(SyntaxKind.NullLiteralExpression)?b.Left:null;
            if(other!=null&&model.GetTypeInfo(other).Type is ITypeParameterSymbol)return "(pls::cs::box("+Expr(other)+") "+b.OperatorToken.Text+" pls::cs::Ref<pls::cs::Object>{})";
            var arrayType=leftType as IArrayTypeSymbol??rightType as IArrayTypeSymbol;
            if(arrayType!=null) {
                string leftValue=b.Left.IsKind(SyntaxKind.NullLiteralExpression)?Type(arrayType,b)+"{}":Expr(b.Left);
                string rightValue=b.Right.IsKind(SyntaxKind.NullLiteralExpression)?Type(arrayType,b)+"{}":Expr(b.Right);
                return "([&]() { auto cs_left = pls::cs::box("+leftValue+"); auto cs_right = pls::cs::box("+rightValue+"); return cs_left "+b.OperatorToken.Text+" cs_right; }())";
            }
            if((leftType==null||leftType.IsReferenceType)&&(rightType==null||rightType.IsReferenceType)&&!(leftType?.SpecialType==SpecialType.System_String&&rightType?.SpecialType==SpecialType.System_String)) {
                var leftValue=b.Left.IsKind(SyntaxKind.NullLiteralExpression)?"pls::cs::Ref<pls::cs::Object>{}":"pls::cs::box("+Expr(b.Left)+")";
                var rightValue=b.Right.IsKind(SyntaxKind.NullLiteralExpression)?"pls::cs::Ref<pls::cs::Object>{}":"pls::cs::box("+Expr(b.Right)+")";
                return "([&]() { auto cs_left = "+leftValue+"; auto cs_right = "+rightValue+"; return cs_left "+b.OperatorToken.Text+" cs_right; }())";
            }
        }
        var op=model.GetOperation(b) as IBinaryOperation;
        var left=Converted(b.Left,op?.LeftOperand.Type??model.GetTypeInfo(b.Left).ConvertedType);
        var right=Converted(b.Right,op?.RightOperand.Type??model.GetTypeInfo(b.Right).ConvertedType);
        var type=model.GetTypeInfo(b).Type;string result;
        var numeric=NumericSuffix(type);
        var helper=b.Kind() switch{SyntaxKind.AddExpression=>"add",SyntaxKind.SubtractExpression=>"sub",SyntaxKind.MultiplyExpression=>"mul",SyntaxKind.DivideExpression=>"div",SyntaxKind.ModuloExpression=>"mod",SyntaxKind.LeftShiftExpression=>"shl",SyntaxKind.RightShiftExpression=>"shr",_=>""};
        if(helper!=""&&numeric!="")result="pls::cs::"+helper+"_"+numeric+"(cs_left,cs_right)";
        else {
            if(type?.SpecialType==SpecialType.System_String)throw new Unsupported(b,"string concatenation requires null-aware ordered overload lowering");
            var token=b.OperatorToken.Text;
            if(helper=="mod"&& (type?.SpecialType==SpecialType.System_Single||type?.SpecialType==SpecialType.System_Double))result="std::fmod(cs_left,cs_right)";
            else result="(cs_left "+token+" cs_right)";
        }
        return "([&]() -> "+Type(type,b)+" { auto cs_left = "+left+"; auto cs_right = "+right+"; return "+result+"; }())";
    }
    string Increment(ExpressionSyntax n,bool add,bool prefix) {
        var symbol=model.GetSymbolInfo(n).Symbol;var type=model.GetTypeInfo(n).Type;
        if(symbol is IFieldSymbol writeField&&(externalFields.GetValueOrDefault(Id(writeField))?.StartsWith("readonly:",StringComparison.Ordinal)??false))throw new Unsupported(n,"native field has no write binding");
        string setup="",target;bool shared=false;
        if(n is ElementAccessExpressionSyntax element&&model.GetTypeInfo(element.Expression).Type is IArrayTypeSymbol&&element.ArgumentList.Arguments.Count==1) {
            setup="auto cs_array = "+Expr(element.Expression)+"; auto cs_index = "+Expr(element.ArgumentList.Arguments[0].Expression)+"; ";target="cs_array.at(cs_index)";
        } else if(symbol is IFieldSymbol{IsStatic:false} nativeField&&externalValueTypes.ContainsKey(Id(nativeField.ContainingType))&&n is MemberAccessExpressionSyntax nativeAccess){
            if(!externalFields.TryGetValue(Id(nativeField),out var member))throw new Unsupported(n,"native value field requires an exact binding");var storage=ValueStorage(nativeAccess.Expression,true);setup=storage.setup;target=storage.target+"."+member;
        } else if(symbol is IFieldSymbol{IsStatic:false} field) {
            RequireClass(field.ContainingType,n);var receiver=n is MemberAccessExpressionSyntax member?Expr(member.Expression):"cs_this";
            setup="auto cs_target = "+receiver+"; ";target="cs_require(cs_target)->"+Name(field);
            shared=sharedFields.Contains(Id(field));
        } else {if(!(symbol is ILocalSymbol||symbol is IParameterSymbol||symbol is IFieldSymbol{IsStatic:true}))throw new Unsupported(n,"increment of storage requires reference-preserving evaluation");target=Expr(n);}
        var suffix=NumericSuffix(type);
        if(suffix==""&&!Integral(type))throw new Unsupported(n,"increment type not lowered");
        var narrow=suffix=="";if(narrow)suffix="i32";
        var calculation="pls::cs::"+(add?"add_":"sub_")+suffix+"(cs_old,1)";
        if(narrow)calculation="pls::cs::cast_integral<"+Type(type,n)+">("+calculation+")";
        return "([&]() { "+setup+"auto cs_old = "+target+(shared?".load()":"")+"; auto cs_new = "+calculation+"; "+(shared?target+".store(cs_new);":target+" = cs_new;")+" return "+(prefix?"cs_new":"cs_old")+"; }())";
    }
    string Assignment(AssignmentExpressionSyntax a) {
        var type=model.GetTypeInfo(a.Left).Type;var simple=a.IsKind(SyntaxKind.SimpleAssignmentExpression);
        if(model.GetSymbolInfo(a.Left).Symbol is IFieldSymbol writeField&&(externalFields.GetValueOrDefault(Id(writeField))?.StartsWith("readonly:",StringComparison.Ordinal)??false))throw new Unsupported(a,"native field has no write binding");
        if(model.GetSymbolInfo(a.Left).Symbol is IPropertySymbol property&&property.SetMethod!=null&&!SystemList(property.ContainingType)&&!SystemDictionary(property.ContainingType)) {
            var receiver=property.IsStatic?null:a.Left is MemberAccessExpressionSyntax member?Expr(member.Expression):"cs_this";
            var setup=receiver==null?"":"auto cs_receiver = "+receiver+"; ";var args=new List<string>();
            if(a.Left is ElementAccessExpressionSyntax indexer) {
                receiver=Expr(indexer.Expression);setup="auto cs_receiver = "+receiver+"; ";
                for(int i=0;i<indexer.ArgumentList.Arguments.Count;i++){setup+="auto cs_index"+i+" = "+Expr(indexer.ArgumentList.Arguments[i].Expression)+"; ";args.Add("cs_index"+i);}
            }
            var propertyTarget=receiver==null?null:"cs_receiver";
            if(!simple) {
                if(property.GetMethod==null)throw new Unsupported(a,"compound property assignment has no getter");
                setup+="auto cs_old = "+AccessorCall(property.GetMethod,propertyTarget,args,a)+"; ";
            }
            setup+="auto cs_rhs = "+Converted(a.Right,type)+"; ";string propertyValue="cs_rhs";
            if(!simple) {
                var helper=a.Kind() switch{SyntaxKind.AddAssignmentExpression=>"add",SyntaxKind.SubtractAssignmentExpression=>"sub",SyntaxKind.MultiplyAssignmentExpression=>"mul",SyntaxKind.DivideAssignmentExpression=>"div",_=>throw new Unsupported(a,"compound property operator not lowered")};
                if(NumericSuffix(type)=="")throw new Unsupported(a,"compound property numeric promotion not lowered");
                propertyValue="pls::cs::"+helper+"_"+NumericSuffix(type)+"(cs_old,cs_rhs)";
            }
            setup+="auto cs_value = "+propertyValue+"; ";args.Add("cs_value");
            return "([&]() { "+setup+AccessorCall(property.SetMethod,propertyTarget,args,a)+"; return cs_value; }())";
        }
        string prefix,target;bool shared=false;
        if(a.Left is ElementAccessExpressionSyntax e) {
            if(e.ArgumentList.Arguments.Count!=1)throw new Unsupported(e,"multi-index assignment");
            prefix="auto cs_target = "+Expr(e.Expression)+"; auto cs_index = "+Expr(e.ArgumentList.Arguments[0].Expression)+"; ";
            if(SystemList(model.GetTypeInfo(e.Expression).Type)||SystemDictionary(model.GetTypeInfo(e.Expression).Type)) {
                if(!simple)throw new Unsupported(a,"compound List index assignment requires operator promotion lowering");
                return "([&]() { "+prefix+"auto cs_value = "+Converted(a.Right,type)+"; cs_target.set_Item(cs_index,cs_value); return cs_value; }())";
            }
            if(simple&&model.GetTypeInfo(e.Expression).Type is IArrayTypeSymbol)return "([&]() { "+prefix+"auto cs_value = "+Converted(a.Right,type)+";cs_target.set_Item(cs_index,cs_value);return cs_value;}())";
            target="cs_target.at(cs_index)";
        } else {
            var symbol=model.GetSymbolInfo(a.Left).Symbol;
            if(symbol is IFieldSymbol{IsStatic:false} nativeField&&externalValueTypes.ContainsKey(Id(nativeField.ContainingType))&&a.Left is MemberAccessExpressionSyntax nativeAccess){
                if(!externalFields.TryGetValue(Id(nativeField),out var member))throw new Unsupported(a,"native value field requires an exact binding");var storage=ValueStorage(nativeAccess.Expression,true);prefix=storage.setup;target=storage.target+"."+member;
            } else if(symbol is IFieldSymbol{IsStatic:false} valueField&&RecordStruct(valueField.ContainingType)&&a.Left is MemberAccessExpressionSyntax valueAccess){
                RequireClass(valueField.ContainingType,a.Left);var storage=ValueStorage(valueAccess.Expression,true);prefix=storage.setup;target="("+storage.target+")."+Name(valueField);
            } else if(symbol is IFieldSymbol{IsStatic:false} instanceField) {
                if(externalTypes.ContainsKey(Id(instanceField.ContainingType))&&!externalFields.ContainsKey(Id(instanceField)))throw new Unsupported(a,"native reference field requires an exact storage binding");
                if(RecordStruct(instanceField.ContainingType)&&methods[current].MethodKind!=MethodKind.Constructor)throw new Unsupported(a,"struct field assignment requires managed-address lowering");
                RequireClass(instanceField.ContainingType,a.Left);
                var receiver=a.Left is MemberAccessExpressionSyntax member?Expr(member.Expression):"cs_this";
                prefix="auto cs_target = "+receiver+"; ";target="cs_require(cs_target)->"+externalFields.GetValueOrDefault(Id(instanceField),Name(instanceField));
                shared=sharedFields.Contains(Id(instanceField));
            } else {
                if(!(symbol is ILocalSymbol||symbol is IParameterSymbol||symbol is IFieldSymbol{IsStatic:true}))throw new Unsupported(a.Left,"assignment target is not lowered");
                prefix="";target=Expr(a.Left);
            }
        }
        string value;
        if(simple)value="auto cs_value = "+Converted(a.Right,type)+"; "+(shared?target+".store(cs_value);":target+" = cs_value;")+" return cs_value;";
        else {
            string helper=a.Kind() switch{SyntaxKind.AddAssignmentExpression=>"add",SyntaxKind.SubtractAssignmentExpression=>"sub",SyntaxKind.MultiplyAssignmentExpression=>"mul",SyntaxKind.DivideAssignmentExpression=>"div",SyntaxKind.ModuloAssignmentExpression=>"mod",_=>""};
            var suffix=NumericSuffix(type);
            var operation=helper!=""&&suffix!=""?"pls::cs::"+helper+"_"+suffix+"(cs_old,cs_rhs)":"(cs_old "+a.OperatorToken.Text.TrimEnd('=')+" cs_rhs)";
            if(type?.SpecialType==SpecialType.System_String&&helper=="add") {
                var rightType=model.GetTypeInfo(a.Right).Type;
                if(rightType?.SpecialType==SpecialType.System_String)operation="pls::cs::String::concat(cs_old,cs_rhs)";
                else if(rightType?.SpecialType==SpecialType.System_Char)operation="pls::cs::String::concat(cs_old,cs_char_string(cs_rhs))";
                else throw new Unsupported(a,"compound string concatenation requires exact operand ToString contract");
            }
            value="auto cs_old = "+target+(shared?".load()":"")+"; auto cs_rhs = "+Expr(a.Right)+"; auto cs_value = "+Cast(operation,type,type,a)+"; "+(shared?target+".store(cs_value);":target+" = cs_value;")+" return cs_value;";
        }
        return "([&]() { "+prefix+value+" }())";
    }
    string Invoke(InvocationExpressionSyntax n) {
        var symbol=model.GetSymbolInfo(n).Symbol as IMethodSymbol;
        if(symbol==null)throw new Unsupported(n,"invocation symbol unresolved");
        var args=n.ArgumentList.Arguments.Select(a=>a.Expression).ToList();
        if(symbol.ContainingType.SpecialType==SpecialType.System_String&&symbol.Name is "Split" or "Trim"&&symbol.Parameters.Length==1&&symbol.Parameters[0].IsParams&&symbol.Parameters[0].Type is IArrayTypeSymbol{ElementType.SpecialType:SpecialType.System_Char}&&n.Expression is MemberAccessExpressionSyntax splitAccess&&(args.Count!=1||model.GetTypeInfo(args[0]).Type is not IArrayTypeSymbol)){
            if(args.Any(a=>model.GetTypeInfo(a).Type?.SpecialType!=SpecialType.System_Char))throw new Unsupported(n,"String.Split expanded argument is not Char");
            var split=new StringBuilder("([&](){auto cs_text="+Expr(splitAccess.Expression)+";auto cs_separators=pls::cs::Array<char16_t>::make("+args.Count+");");for(int index=0;index<args.Count;index++)split.Append("cs_separators.at("+index+")="+Expr(args[index])+";");return split+"return pls::cs::"+(symbol.Name=="Split"?"string_split":"string_trim")+"(cs_text,cs_separators);}())";
        }
        if(symbol.ReducedFrom?.ContainingType.ToDisplayString()=="System.Linq.Enumerable"&&symbol.Name=="Contains"&&n.Expression is MemberAccessExpressionSyntax containsAccess&&model.GetTypeInfo(containsAccess.Expression).Type?.SpecialType==SpecialType.System_String&&args.Count==1&&model.GetTypeInfo(args[0]).Type?.SpecialType==SpecialType.System_Char)return "([&](){auto cs_text="+Expr(containsAccess.Expression)+";auto cs_char="+Expr(args[0])+";return cs_index_char1(cs_text,cs_char)!=-1;}())";
        if(symbol.ReducedFrom?.ContainingType.ToDisplayString()=="System.Linq.Enumerable"&&symbol.Name=="ToArray"&&args.Count==0&&n.Expression is MemberAccessExpressionSyntax{Expression:MemberAccessExpressionSyntax keys}&&model.GetSymbolInfo(keys).Symbol is IPropertySymbol{Name:"Keys"} keysProperty&&SystemDictionary(keysProperty.ContainingType))return "([&](){auto cs_dictionary="+Expr(keys.Expression)+";return cs_dictionary.KeysToArray();}())";
        if(SystemDictionary(symbol.ContainingType)&&symbol.Name=="TryGetValue"&&args.Count==2&&n.ArgumentList.Arguments[1].RefKindKeyword.IsKind(SyntaxKind.OutKeyword)&&args[1] is IdentifierNameSyntax&&model.GetSymbolInfo(args[1]).Symbol is ILocalSymbol or IParameterSymbol&&n.Expression is MemberAccessExpressionSyntax dictionaryAccess){return "([&](){auto cs_dictionary="+Expr(dictionaryAccess.Expression)+";auto cs_key="+Converted(args[0],symbol.Parameters[0].Type)+";return cs_dictionary.TryGetValue(cs_key,"+Expr(args[1])+");}())";}
        if(symbol.ContainingType.SpecialType==SpecialType.System_Int32&&symbol.Name=="TryParse"&&args.Count==2&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_String&&args[1] is IdentifierNameSyntax&&model.GetSymbolInfo(args[1]).Symbol is ILocalSymbol or IParameterSymbol){var storage=ValueStorage(args[1],true);return "([&](){auto cs_text="+Converted(args[0],symbol.Parameters[0].Type)+";"+storage.setup+"return pls::cs::int32_try_parse(cs_text,"+storage.target+");}())";}
        if(n.ArgumentList.Arguments.Any(a=>a.NameColon!=null))throw new Unsupported(n,"named argument lowering not implemented");
        if(n.ArgumentList.Arguments.Any(a=>a.RefKindKeyword!=default)){
            var refNative=externalMethods.GetValueOrDefault(Id(symbol));
            if(refNative==null&&!methods.ContainsKey(Id(symbol))||args.Count!=symbol.Parameters.Length||symbol.Parameters.Any(p=>p.RefKind is not (RefKind.None or RefKind.Ref or RefKind.Out)))throw new Unsupported(n,"ref/out call requires a source method or exact native binding with a supported signature");
            if(refNative==null&&!symbol.IsAbstract)dependencies[current].Add(Id(symbol));if(!symbol.IsStatic&&!externalTypes.ContainsKey(Id(symbol.ContainingType)))RequireClass(symbol.ContainingType,n);
            var refReceiver=symbol.IsStatic?null:n.Expression is MemberAccessExpressionSyntax refAccess?Expr(refAccess.Expression):"cs_this";
            return OrderedCall(symbol,args,n,refReceiver,!(n.Expression is MemberAccessExpressionSyntax{Expression:BaseExpressionSyntax}),refNative);
        }
        if(symbol.ReducedFrom!=null) {
            if(!(n.Expression is MemberAccessExpressionSyntax access))throw new Unsupported(n,"extension method receiver missing");
            args.Insert(0,access.Expression);symbol=symbol.ReducedFrom;
        }
        var id=Id(symbol);var owner=symbol.ContainingType.ToDisplayString();
        if(SystemStack(symbol.ContainingType)&&n.Expression is MemberAccessExpressionSyntax stackAccess){
            if(!new[]{"Push","Pop","Peek"}.Contains(symbol.Name)||args.Count!=symbol.Parameters.Length)throw new Unsupported(n,"Stack member is outside the measured API subset");
            var stackCall=new StringBuilder("([&](){auto cs_stack="+Expr(stackAccess.Expression)+";");for(int index=0;index<args.Count;index++)stackCall.Append("auto cs_arg"+index+"="+Converted(args[index],symbol.Parameters[index].Type)+";");
            return stackCall+(symbol.ReturnsVoid?"":"return ")+"cs_stack."+symbol.Name+"("+String.Join(",",Enumerable.Range(0,args.Count).Select(index=>"cs_arg"+index))+");}())";
        }
        if(request.service_overrides.ContainsKey(id)){
            if(!methods.ContainsKey(id))throw new Unsupported(n,"service override lacks its bound source declaration");
            dependencies[current].Add(id);if(!symbol.IsStatic)RequireClass(symbol.ContainingType,n);
            return OrderedCall(symbol,args,n,symbol.IsStatic?null:n.Expression is MemberAccessExpressionSyntax policyAccess?Expr(policyAccess.Expression):"cs_this");
        }
        if(!symbol.IsStatic&&RecordStruct(symbol.ContainingType)){
            if(!methods.ContainsKey(id)||args.Count!=symbol.Parameters.Length||symbol.Parameters.Any(p=>p.RefKind!=RefKind.None))throw new Unsupported(n,"source value method requires an exact source signature");
            dependencies[current].Add(id);RequireClass(symbol.ContainingType,n);
            var storage=n.Expression is MemberAccessExpressionSyntax sourceValueAccess?ValueStorage(sourceValueAccess.Expression):RecordStruct(methods[current].ContainingType)?(setup:"",target:"*cs_this"):throw new Unsupported(n,"source value method receiver is missing");
            var call=new StringBuilder("([&](){"+storage.setup);for(int index=0;index<args.Count;index++)call.Append("auto cs_arg"+index+"="+Converted(args[index],symbol.Parameters[index].Type)+";");
            return call+(symbol.ReturnsVoid?"":"return ")+Name(symbol)+"(&("+storage.target+")"+(args.Count==0?"":","+String.Join(",",Enumerable.Range(0,args.Count).Select(index=>"cs_arg"+index)))+");}())";
        }
        if(!symbol.IsStatic&&externalValueTypes.ContainsKey(Id(symbol.ContainingType))&&externalMethods.TryGetValue(id,out var valueMethod)&&valueMethod.StartsWith("value-member:",StringComparison.Ordinal)&&n.Expression is MemberAccessExpressionSyntax valueAccess){
            if(args.Count!=symbol.Parameters.Length)throw new Unsupported(n,"native value method requires exact argument arity");var storage=ValueStorage(valueAccess.Expression);var call=new StringBuilder("([&](){"+storage.setup);for(int index=0;index<args.Count;index++)call.Append("auto cs_arg"+index+"="+Converted(args[index],symbol.Parameters[index].Type)+";");return call+(symbol.ReturnsVoid?"":"return ")+storage.target+"."+valueMethod.Substring(13)+"("+String.Join(",",Enumerable.Range(0,args.Count).Select(index=>"cs_arg"+index))+");}())";
        }
        if(symbol.MethodKind==MethodKind.DelegateInvoke){
            if(args.Count!=symbol.Parameters.Length)throw new Unsupported(n,"delegate invocation arity differs");
            var delegateBody=new StringBuilder("([&](){auto cs_delegate="+Expr(n.Expression)+";");
            for(int index=0;index<args.Count;index++)delegateBody.Append("auto cs_arg"+index+"="+Converted(args[index],symbol.Parameters[index].Type)+";");
            return delegateBody+(symbol.ReturnsVoid?"":"return ")+"cs_delegate("+String.Join(",",Enumerable.Range(0,args.Count).Select(index=>"cs_arg"+index))+");}())";
        }
        if(!symbol.IsStatic&&symbol.Name=="GetType"&&args.Count==0&&n.Expression is MemberAccessExpressionSyntax typeMember)return "([&](){auto cs_receiver=pls::cs::box("+Expr(typeMember.Expression)+");return pls::cs::RuntimeType::for_name(cs_require(cs_receiver)->managed_type_name());}())";
        if(!symbol.IsStatic&&FrameworkValue(symbol.ContainingType)!=null&&n.Expression is MemberAccessExpressionSyntax valueMember) {
            var allowed=symbol.ContainingType.ToDisplayString()=="System.Guid"?new[]{"ToString"}:new[]{"ToUniversalTime","AddMilliseconds","AddDays","AddHours","AddMinutes","AddSeconds","AddMonths","AddYears","AddTicks"};
            if(!allowed.Contains(symbol.Name)||args.Count!=symbol.Parameters.Length)throw new Unsupported(n,"framework value method/overload not lowered");
            var call=new StringBuilder("([&]() -> "+Type(symbol.ReturnType,n)+" { auto cs_receiver = "+Expr(valueMember.Expression)+"; ");
            for(int i=0;i<args.Count;i++)call.Append("auto cs_arg"+i+" = "+Converted(args[i],symbol.Parameters[i].Type)+"; ");
            return call+"return cs_receiver."+symbol.Name+"("+String.Join(",",Enumerable.Range(0,args.Count).Select(i=>"cs_arg"+i))+"); }())";
        }
        if(externalMethods.TryGetValue(id,out var externalMethod)&&externalMethod is "canvas-source:get" or "canvas-source:set")return CanvasSourceBridge(symbol,args,n,externalMethod);
        if(externalMethods.TryGetValue(id,out externalMethod)) {
            var receiver=symbol.IsStatic?null:n.Expression is MemberAccessExpressionSyntax em?Expr(em.Expression):"cs_this";
            return OrderedCall(symbol,args,n,receiver,true,externalMethod);
        }
        if(owner=="UnityEngine.Resources"&&methods[current].ContainingType.ToDisplayString()=="kairo.unity.io.AssetReader"&&symbol.Name is "Load" or "UnloadAsset"&&args.Count==1)return OrderedCall(symbol,args,n,null,true,symbol.Name=="Load"?"pls::kairo::load_text_asset":"pls::kairo::unload_text_asset");
        if(!symbol.IsStatic&&FrameworkClass(symbol.ContainingType)!=null&&n.Expression is MemberAccessExpressionSyntax frameworkMember) {
            var allowed=owner=="System.IO.StreamReader"?new[]{"ReadLine","ReadToEnd","Close","Dispose"}:owner=="System.Text.Encoding"?new[]{"GetString","GetBytes"}:ExceptionClass(symbol.ContainingType)?new[]{"ToString","GetBaseException"}:owner=="System.Threading.Thread"?new[]{"Start","Interrupt","Join"}:owner=="System.Reflection.Assembly"?new[]{"GetType"}:owner=="System.Random"?new[]{"Next","NextDouble","NextBytes"}:owner=="System.IO.BinaryReader"?new[]{"Read","ReadBoolean","ReadByte","ReadSByte","ReadInt16","ReadInt32","ReadInt64","ReadUInt16","ReadUInt32","ReadUInt64","ReadSingle","ReadDouble","Close","Dispose"}:owner is "System.IO.Stream" or "System.IO.MemoryStream"?new[]{"Read","ReadByte","Write","WriteByte","Close","Flush","Dispose","Seek","SetLength","ToArray","GetBuffer"}:new[]{"Append","ToString","EnsureCapacity"};
            var stringInsert=owner=="System.Text.StringBuilder"&&symbol.Name=="Insert"&&symbol.Parameters.Length==2&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_Int32&&symbol.Parameters[1].Type.SpecialType==SpecialType.System_String;
            if((!allowed.Contains(symbol.Name)&&!stringInsert)||args.Count!=symbol.Parameters.Length)throw new Unsupported(n,"framework class method/overload not lowered");
            var call=new StringBuilder("([&]() -> "+Type(symbol.ReturnType,n)+" { auto cs_receiver = "+Expr(frameworkMember.Expression)+"; ");
            for(int i=0;i<args.Count;i++)call.Append("auto cs_arg"+i+" = "+Converted(args[i],symbol.Parameters[i].Type)+"; ");
            call.Append(symbol.ReturnsVoid?"":"return ");return call+"cs_require(cs_receiver)->"+symbol.Name+"("+String.Join(",",Enumerable.Range(0,args.Count).Select(i=>"cs_arg"+i))+"); }())";
        }
        if(!symbol.IsStatic&&symbol.ContainingType.SpecialType==SpecialType.System_String&&symbol.Name=="Equals"&&args.Count==2&&symbol.Parameters[1].Type.ToDisplayString()=="System.StringComparison"&&model.GetConstantValue(args[1]).Value is int comparison&&comparison==1&&n.Expression is MemberAccessExpressionSyntax cultureEquals)return "([&](){auto cs_receiver="+Expr(cultureEquals.Expression)+";auto cs_argument="+Converted(args[0],compilation.GetSpecialType(SpecialType.System_String))+";cs_receiver.length();return pls::cs::culture_equals_ignore_case(cs_receiver,cs_argument);}())";
        if(!symbol.IsStatic&&symbol.ContainingType.SpecialType==SpecialType.System_Object&&symbol.Name=="GetHashCode"&&args.Count==0&&n.Expression is MemberAccessExpressionSyntax hashMember)return "([&](){auto cs_receiver=pls::cs::box("+Expr(hashMember.Expression)+");return cs_require(cs_receiver)->"+(hashMember.Expression is BaseExpressionSyntax?"pls::cs::Object::":"")+"GetHashCode();}())";
        if(!symbol.IsStatic&&symbol.Name=="ToString"&&args.Count==0&&n.Expression is MemberAccessExpressionSyntax objectStringMember&&model.GetTypeInfo(objectStringMember.Expression).Type?.SpecialType==SpecialType.System_Object)return "([&](){auto cs_receiver = "+Expr(objectStringMember.Expression)+";return cs_require(cs_receiver)->"+(objectStringMember.Expression is BaseExpressionSyntax?"pls::cs::Object::":"")+"ToString();}())";
        if(!symbol.IsStatic&&symbol.Name=="Equals"&&args.Count==1&&n.Expression is MemberAccessExpressionSyntax equalsMember&&(model.GetTypeInfo(equalsMember.Expression).Type is ITypeParameterSymbol||model.GetTypeInfo(equalsMember.Expression).Type?.SpecialType==SpecialType.System_Object)) {
            return "([&]() { auto cs_receiver = pls::cs::box("+Expr(equalsMember.Expression)+"); auto cs_argument = "+Converted(args[0],compilation.GetSpecialType(SpecialType.System_Object))+"; return cs_require(cs_receiver)->"+(equalsMember.Expression is BaseExpressionSyntax?"pls::cs::Object::":"")+"Equals(cs_argument); }())";
        }
        if(!symbol.IsStatic&&symbol.Name=="ToString"&&args.Count==0&&n.Expression is MemberAccessExpressionSyntax collectionString&&(SystemList(model.GetTypeInfo(collectionString.Expression).Type)||SystemDictionary(model.GetTypeInfo(collectionString.Expression).Type)))return "([&](){auto cs_value=pls::cs::box("+Expr(collectionString.Expression)+");return cs_require(cs_value)->ToString();}())";
        if(!symbol.IsStatic&&(SystemList(symbol.ContainingType)||SystemDictionary(symbol.ContainingType))&&n.Expression is MemberAccessExpressionSyntax listMember) {
            if(SystemList(symbol.ContainingType)&&symbol.Name is "InsertRange" or "AddRange"&&args.Count==(symbol.Name=="InsertRange"?2:1)&&(model.GetTypeInfo(args.Last()).Type is IArrayTypeSymbol||SystemList(model.GetTypeInfo(args.Last()).Type))){
                var range=new StringBuilder("([&](){auto cs_list="+Expr(listMember.Expression)+";");for(int index=0;index<args.Count;index++)range.Append("auto cs_arg"+index+"="+Expr(args[index])+";");return range+"cs_list."+symbol.Name+"("+String.Join(",",Enumerable.Range(0,args.Count).Select(index=>"cs_arg"+index))+");}())";
            }
            var allowed=new[]{"ContainsKey","ContainsValue","Add","Clear","Contains","IndexOf","LastIndexOf","Insert","RemoveAt","Remove","RemoveRange","ToArray","TrimExcess"};
            if(!allowed.Contains(symbol.Name)||symbol.Parameters.Any(p=>p.RefKind!=RefKind.None)||args.Count!=symbol.Parameters.Length)throw new Unsupported(n,"List overload not lowered");
            var listCall=new StringBuilder("([&]() -> "+Type(symbol.ReturnType,n)+" { auto cs_receiver = "+Expr(listMember.Expression)+"; ");
            for(int i=0;i<args.Count;i++)listCall.Append("auto cs_arg"+i+" = "+Converted(args[i],symbol.Parameters[i].Type)+"; ");
            listCall.Append(symbol.ReturnsVoid?"":"return ");listCall.Append("cs_receiver."+symbol.Name+"("+String.Join(",",Enumerable.Range(0,args.Count).Select(i=>"cs_arg"+i))+"); }())");return listCall.ToString();
        }
        if(!symbol.IsStatic&&methods.ContainsKey(id)) {
            RequireClass(symbol.ContainingType,n);if(symbol.ContainingType.TypeKind!=TypeKind.Interface&&!symbol.IsAbstract)dependencies[current].Add(id);
            var receiver=n.Expression is MemberAccessExpressionSyntax member?Expr(member.Expression):"cs_this";
            return OrderedCall(symbol,args,n,receiver,!(n.Expression is MemberAccessExpressionSyntax baseCall&&baseCall.Expression is BaseExpressionSyntax));
        }
        string? intrinsic=null;ITypeSymbol returnType=symbol.ReturnType;
        var utf8Receiver=!symbol.IsStatic&&symbol.ContainingType.ToDisplayString()=="System.Text.Encoding"&&n.Expression is MemberAccessExpressionSyntax encodingMember&&model.GetSymbolInfo(encodingMember.Expression).Symbol is IPropertySymbol encodingProperty&&encodingProperty.Name=="UTF8"&&encodingProperty.ContainingType.ToDisplayString()=="System.Text.Encoding";
        if(!symbol.IsStatic&&!utf8Receiver) {
            if(!(n.Expression is MemberAccessExpressionSyntax member))throw new Unsupported(n,"instance receiver missing");
            var receiverType=model.GetTypeInfo(member.Expression).Type;
            if(receiverType?.SpecialType==SpecialType.System_String) {
                intrinsic=symbol.Name switch {
                    "IndexOf" when symbol.Parameters[0].Type.SpecialType==SpecialType.System_String&&args.Count>=1&&args.Count<=3=>"pls::cs::culture_index_of",
                    "LastIndexOf" when symbol.Parameters[0].Type.SpecialType==SpecialType.System_String&&args.Count>=1&&args.Count<=3=>"pls::cs::culture_last_index_of",
                    "Trim" when args.Count==0||args.Count==1&&symbol.Parameters[0].Type is IArrayTypeSymbol{ElementType.SpecialType:SpecialType.System_Char}=>"pls::cs::string_trim",
                    "Split" when args.Count==1&&symbol.Parameters.Length==1&&symbol.Parameters[0].Type is IArrayTypeSymbol{ElementType.SpecialType:SpecialType.System_Char}=>"pls::cs::string_split",
                    "Replace" when args.Count==2&&symbol.Parameters.All(p=>p.Type.SpecialType==SpecialType.System_String)||symbol.Name=="Replace"&&args.Count==2&&symbol.Parameters.All(p=>p.Type.SpecialType==SpecialType.System_Char)=>"pls::cs::string_replace",
                    "Contains" when args.Count==1&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_String=>"cs_contains_string",
                    "StartsWith" when args.Count==1=>"pls::cs::culture_starts_with", "EndsWith" when args.Count==1=>"pls::cs::culture_ends_with",
                    "ToLower" when args.Count==0=>"pls::cs::culture_to_lower", "ToUpper" when args.Count==0=>"pls::cs::culture_to_upper",
                    "LastIndexOf" when args.Count==1&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_Char=>"cs_last_index_char1",
                    "ToString" when args.Count==0=>"cs_string_identity", "GetHashCode" when args.Count==0=>"cs_value_hash",
                    "Equals" when args.Count==1&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_String=>"cs_string_equals",
                    "CompareTo" when args.Count==1&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_String=>"pls::cs::culture_compare_to",
                    "Substring" when args.Count==1=>"cs_substring1", "Substring" when args.Count==2=>"cs_substring2",
                    "Insert" when args.Count==2=>"pls::cs::string_insert",
                    "Remove" when args.Count is 1 or 2&&symbol.Parameters.All(p=>p.Type.SpecialType==SpecialType.System_Int32)=>"pls::cs::string_remove",
                    "ToCharArray" when args.Count==0=>"cs_to_chars", "IndexOf" when symbol.Parameters[0].Type.SpecialType==SpecialType.System_Char&&args.Count==1=>"cs_index_char1",
                    "IndexOf" when symbol.Parameters[0].Type.SpecialType==SpecialType.System_Char&&args.Count==2=>"cs_index_char2",_=>null};
            } else if(receiverType?.ToDisplayString()=="System.Array"&&symbol.Name=="SetValue"&&args.Count==2&&symbol.Parameters[1].Type.SpecialType==SpecialType.System_Int32){intrinsic="pls::cs::runtime_array_set_value";
            } else if(Integral(receiverType)&&symbol.Name=="GetHashCode"&&args.Count==0){intrinsic="cs_value_hash";
            } else if(receiverType?.SpecialType is SpecialType.System_Byte or SpecialType.System_Int32&&symbol.Name=="ToString"&&args.Count==1&&model.GetConstantValue(args[0]) is {HasValue:true,Value:string hexFormat}&&System.Text.RegularExpressions.Regex.IsMatch(hexFormat,"^[xX][0-9]{0,2}$")){
                var width=hexFormat.Length==1?0:int.Parse(hexFormat.Substring(1),CultureInfo.InvariantCulture);
                return "([&](){auto cs_value="+Expr(member.Expression)+";return pls::cs::format_i32_hex(static_cast<std::int32_t>(cs_value),"+width+","+(hexFormat[0]=='X'?"true":"false")+");}())";
            } else if(Integral(receiverType)&&symbol.Name=="ToString"&&args.Count==0) {
                intrinsic=receiverType!.SpecialType==SpecialType.System_Char?"cs_char_string":"cs_integer_string";
            } else if(receiverType is IArrayTypeSymbol&&symbol.Name=="Clone"&&args.Count==0) {
                intrinsic="cs_clone_array";
            }
            if(intrinsic==null)throw new Unsupported(n,"instance invocation requires object layout dispatch or exact framework intrinsic");
            args.Insert(0,member.Expression);
        }
        string callee;
        if(utf8Receiver&&((args.Count==1&&(symbol.Name=="GetBytes"||symbol.Name=="GetString"))||(args.Count==3&&symbol.Name=="GetString")))callee=symbol.Name=="GetBytes"?"pls::cs::encoding_utf8_get_bytes":"pls::cs::encoding_utf8_get_string";
        else if(utf8Receiver)throw new Unsupported(n,"UTF8 encoding overload not lowered");
        else if(intrinsic!=null)callee=intrinsic;
        else if(owner=="System.IO.Path"&&symbol.IsStatic&&symbol.Name is "GetExtension" or "ChangeExtension" or "GetFileName" or "GetFileNameWithoutExtension"&&symbol.Parameters.All(p=>p.Type.SpecialType==SpecialType.System_String))callee="pls::cs::RuntimePath::"+symbol.Name;
        else if(owner=="System.Text.RegularExpressions.Regex"&&symbol.IsStatic&&new[]{"Matches","Match","IsMatch","Replace"}.Contains(symbol.Name)&&symbol.Parameters.All(p=>p.Type.SpecialType==SpecialType.System_String))callee="pls::cs::RuntimeRegex::"+symbol.Name;
        else if(owner=="System.Text.Encoding"&&symbol.Name=="GetEncoding"&&args.Count==1&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_String)callee="pls::cs::RuntimeEncoding::GetEncoding";
        else if(owner=="System.Convert"&&symbol.Name=="ToBase64String"&&args.Count==1)callee="pls::cs::convert_to_base64_string";
        else if(owner=="System.Convert"&&symbol.Name=="FromBase64String"&&args.Count==1)callee="pls::cs::convert_from_base64_string";
        else if(owner=="System.Threading.Thread"&&symbol.Name=="Sleep"&&args.Count==1&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_Int32)callee="pls::cs::Thread::Sleep";
        else if(symbol.ContainingType.SpecialType==SpecialType.System_Object&&symbol.Name=="ReferenceEquals"&&symbol.Parameters.Length==2)callee="pls::cs::reference_equals";
        else if(owner=="System.GC"&&symbol.Name=="Collect"&&args.Count==1&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_Int32)callee="pls::cs::gc_collect";
        else if(owner=="System.TimeZoneInfo"&&symbol.IsStatic&&new[]{"CreateCustomTimeZone","FindSystemTimeZoneById","ConvertTimeToUtc"}.Contains(symbol.Name))callee="pls::cs::TimeZoneInfo::"+symbol.Name;
        else if(owner=="string"&&symbol.Name=="Concat"&&args.Count==2&&symbol.Parameters.All(p=>p.Type.SpecialType==SpecialType.System_String))callee="pls::cs::String::concat";
        else if(owner=="string"&&symbol.Name=="Concat"&&args.Count==1&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_Object)callee="cs_object_string";
        else if(owner=="string"&&symbol.Name=="Concat"&&args.Count==3&&symbol.Parameters.All(p=>p.Type.SpecialType==SpecialType.System_Object))callee="cs_concat_objects3";
        else if(owner=="string"&&symbol.Name=="Concat"&&args.Count==4&&symbol.Parameters.All(p=>p.Type.SpecialType==SpecialType.System_String))callee="cs_concat_strings4";
        else if(owner=="string"&&symbol.Name=="Concat"&&args.Count==1&&symbol.Parameters[0].Type is IArrayTypeSymbol concatArray&&concatArray.Rank==1&&concatArray.ElementType.SpecialType==SpecialType.System_Object)callee="cs_concat_object_array";
        else if((owner=="int"||owner=="long"||owner=="System.Int32"||owner=="System.Int64")&&symbol.Name=="Parse"&&args.Count==1&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_String)callee=(symbol.ReturnType.SpecialType==SpecialType.System_Int32)?"pls::cs::int32_parse":"pls::cs::int64_parse";
        else if(symbol.ReturnType.SpecialType==SpecialType.System_Int32&&symbol.Name=="Parse"&&symbol.ContainingType.SpecialType==SpecialType.System_Int32&&args.Count==2&&model.GetConstantValue(args[1]) is {HasValue:true,Value:int style}&&style is 512 or 515)return "([&](){auto cs_value="+Expr(args[0])+";return pls::cs::int32_parse_hex_number(cs_value,"+(style==515?"true":"false")+");}())";
        else if(owner=="System.Array"&&symbol.Name=="CreateInstance"&&args.Count==2&&symbol.Parameters[1].Type.SpecialType==SpecialType.System_Int32)callee="pls::cs::runtime_create_array";
        else if(owner=="System.Array"&&symbol.Name=="Copy"&&args.Count==3) {
            if(!(model.GetTypeInfo(args[0]).Type is IArrayTypeSymbol src)||!(model.GetTypeInfo(args[1]).Type is IArrayTypeSymbol dst)||!SymbolEqualityComparer.Default.Equals(src,dst))throw new Unsupported(n,"Array.Copy requires equal concrete one-dimensional array types");
            return "([&]() { auto cs_source = "+Expr(args[0])+"; auto cs_dest = "+Expr(args[1])+"; auto cs_count = "+Expr(args[2])+"; "+Type(src,n)+"::copy(cs_source,0,cs_dest,0,cs_count); }())";
        }
        else if(owner=="System.Array"&&symbol.Name=="Copy"&&args.Count==5)callee="pls::cs::array_copy";
        else if(owner=="System.Net.IPAddress"&&symbol.Name=="NetworkToHostOrder"&&args.Count==1&&new[]{SpecialType.System_Int16,SpecialType.System_Int32,SpecialType.System_Int64}.Contains(symbol.Parameters[0].Type.SpecialType))callee="cs_network_to_host<"+Type(symbol.ReturnType,n)+">";
        else if(owner=="System.BitConverter") {
            if(symbol.Name=="GetBytes")callee="cs_bit_bytes";
            else if(new[]{"ToInt64","ToInt32","ToInt16","ToUInt64","ToUInt32","ToUInt16","ToSingle","ToDouble"}.Contains(symbol.Name))callee="cs_bits_from<"+Type(symbol.ReturnType,n)+">";
            else throw new Unsupported(n,"BitConverter intrinsic not lowered");
        }
        else if(symbol.ContainingType.SpecialType==SpecialType.System_String&&symbol.Name=="IsNullOrEmpty"&&args.Count==1)callee="pls::cs::string_is_null_or_empty";
        else if(symbol.IsStatic&&symbol.ContainingType.SpecialType==SpecialType.System_Single&&symbol.Name=="Parse"&&args.Count==1&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_String)callee="pls::cs::culture_parse_single";
        else if(owner=="System.Guid"&&symbol.Name=="NewGuid"&&args.Count==0)callee="pls::cs::Guid::NewGuid";
        else if(owner=="System.Uri"&&symbol.Name=="EscapeDataString"&&args.Count==1)callee="pls::cs::uri_escape_data_string";
        else if(symbol.IsStatic&&symbol.Name=="IsNaN"&&args.Count==1&&symbol.ContainingType.SpecialType is SpecialType.System_Single or SpecialType.System_Double)callee="std::isnan";
        else if(owner=="System.Math") {
            if(symbol.Name=="Abs"&&symbol.Parameters.Length==1&&symbol.Parameters[0].Type.SpecialType is SpecialType.System_Int32 or SpecialType.System_Int64 or SpecialType.System_Single or SpecialType.System_Double)callee="pls::cs::math_abs<"+Type(symbol.Parameters[0].Type,n)+">";
            else if(symbol.Name=="Log10"&&symbol.Parameters.Length==1&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_Double)callee="std::log10";
            else
            callee=symbol.Name switch{"Sin"=>"std::sin","Cos"=>"std::cos","Tan"=>"std::tan","Sqrt"=>"std::sqrt","Ceiling"=>"std::ceil","Floor"=>"std::floor","Atan"=>"std::atan","Atan2"=>"std::atan2","Pow"=>"std::pow",_=>throw new Unsupported(n,"System.Math overload not implemented")};
        } else if(methods.ContainsKey(id)) {
            dependencies[current].Add(id);callee=Name(symbol);
            return OrderedCall(symbol,args,n,null,true,callee);
        } else throw new Unsupported(n,"external invocation not implemented: "+id);
        var body=new StringBuilder("([&]() -> "+Type(returnType,n)+" { ");
        for(int i=0;i<args.Count;i++) {
            ITypeSymbol? parameter=intrinsic!=null?(i==0?model.GetTypeInfo(args[i]).Type:symbol.Parameters[i-1].Type):symbol.Parameters[Math.Min(i,symbol.Parameters.Length-1)].Type;
            body.Append("auto cs_arg"+i+" = "+Converted(args[i],parameter)+"; ");
        }
        var expectedArguments=symbol.Parameters.Length+(intrinsic!=null?1:0);
        if(args.Count>expectedArguments)throw new Unsupported(n,"expanded params argument lowering requires an array construction");
        for(int i=args.Count;i<expectedArguments;i++){
            var parameter=symbol.Parameters[i-(intrinsic!=null?1:0)];if(!parameter.HasExplicitDefaultValue)throw new Unsupported(n,"missing required argument");
            body.Append("auto cs_arg"+i+" = "+Constant(parameter.ExplicitDefaultValue,parameter.Type,n)+"; ");
        }
        body.Append(symbol.ReturnsVoid?"":"return ");body.Append(callee+"("+String.Join(",",Enumerable.Range(0,expectedArguments).Select(i=>"cs_arg"+i))+"); }())");
        return body.ToString();
    }
    string BridgeCall(IMethodSymbol method,string receiver,SyntaxNode site,params string[] arguments) {
        var id=Id(method);var native=externalMethods.GetValueOrDefault(id);
        if(IsSourceAdapter(native))native=ResolveSourceAdapter(method,native!,site);
        if(native=="native")native=method.IsStatic?NativeClass(method.ContainingType)+"::"+method.Name:"member:"+method.Name;
        if(native==null){RequireClass(method.ContainingType,site);if(!methods.ContainsKey(id))throw new Unsupported(site,"surface callback target has no source body: "+id);if(!method.IsAbstract)dependencies[current].Add(id);}
        if(native?.StartsWith("member:",StringComparison.Ordinal)??false)return "cs_require("+receiver+")->"+native.Substring(7)+"("+String.Join(",",arguments)+")";
        if(!method.IsStatic&&(method.IsVirtual||method.IsOverride||method.IsAbstract))return "cs_require("+receiver+")->"+Slot(method)+"("+String.Join(",",arguments)+")";
        return (native??Name(method))+"("+String.Join(",",method.IsStatic?arguments:new[]{receiver}.Concat(arguments))+")";
    }
    string CanvasSourceBridge(IMethodSymbol method,List<ExpressionSyntax> args,InvocationExpressionSyntax site,string operation) {
        var manager=compilation.GetTypeByMetadataName("kairo.unity.surface.SurfaceManagerBase")??throw new Unsupported(site,"source surface manager declaration is absent");
        RequireClass(manager,site);var managerType=Type(manager,site);
        var receiver=site.Expression is MemberAccessExpressionSyntax access?Expr(access.Expression):"cs_this";
        if(operation=="canvas-source:get")return "([&]() -> "+managerType+" {auto cs_canvas="+receiver+";return pls::cs::unbox<"+managerType+">(cs_require(cs_canvas)->GetSourceSurfaceManager());}())";
        if(args.Count!=1)throw new Unsupported(site,"source surface setter needs exactly one argument");
        IMethodSymbol Member(INamedTypeSymbol type,string name,int count)=>type.GetMembers(name).OfType<IMethodSymbol>().Single(m=>m.Parameters.Length==count);
        string Source(string name,params string[] values)=>BridgeCall(Member(manager,name,values.Length),"cs_source",site,values);
        var getList=Member(manager,"GetSurfaceList",0);var list=(INamedTypeSymbol)getList.ReturnType;
        var surface=(INamedTypeSymbol)list.TypeArguments[0];
        var size=Member(list,"Size",0);var element=Member(list,"ElementAt",1);
        var touch=surface.GetMembers("OnReceiveTouchEvent").OfType<IMethodSymbol>().Single(m=>m.Parameters.Length==1&&m.Parameters[0].Type.ToDisplayString()=="kairo.unity.surface.MotionEvent");var isGame=Member(surface,"IsGameSurface",0);var clear=Member(surface,"ClearTouchComponent",0);
        string List(string name,params string[] values)=>BridgeCall(name=="Size"?size:element,"cs_list",site,values);
        string Surface(IMethodSymbol target,params string[] values)=>BridgeCall(target,"cs_surface",site,values);
        var body=new StringBuilder("([&](){auto cs_canvas="+receiver+";auto cs_source="+Converted(args[0],manager)+";if(!cs_canvas)throw pls::cs::NullReferenceException();if(!cs_source){cs_canvas->host_source_surface({},{});return;}pls::kairo::SurfaceCallbacks cs_bindings;");
        string Binding(string signature,string route,string parameters,string commands)=>"pls::cs::Delegate<"+signature+">::bind(cs_source,\"source-surface:"+route+"\",[cs_weak=std::weak_ptr<"+NativeClass(manager)+">(cs_source)]("+parameters+"){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();"+commands+"})";
        void Set(string field,string signature,string parameters,string commands)=>body.Append("cs_bindings."+field+"="+Binding(signature,field,parameters,commands)+";");
        Set("raw_key_down","void(std::int32_t,pls::cs::Ref<pls::kairo::KeyEvent>)","std::int32_t cs_key,pls::cs::Ref<pls::kairo::KeyEvent> cs_event",Source("OnKeyDown","cs_key","cs_event")+";");
        foreach(var entry in new[]{("key_down","OnKeyDown"),("key_up","OnKeyUp")})Set(entry.Item1,"void(std::int32_t)","std::int32_t cs_key",Source(entry.Item2,"cs_key")+";");
        foreach(var entry in new[]{("clear_touch","ClearTouchComponent"),("do_events","DoEvents"),("adjust_layout","AdjustSurfaceLayout")})Set(entry.Item1,"void()","",Source(entry.Item2)+";");
        foreach(var entry in new[]{("begin_touch","BeginTouchRegist"),("draw","Draw"),("end_touch","EndTouchRegist"),("draw_components","DrawComponents")})Set(entry.Item1,"void(pls::cs::Ref<pls::kairo::Graphics>)","pls::cs::Ref<pls::kairo::Graphics> cs_graphics",Source(entry.Item2,"cs_graphics")+";");
        // Canvas.OnTouchEvent dispatches backwards over the current original
        // Vector. FormManagerBase.ExecuteInitAndFinish clears game surfaces
        // forwards. Neither route snapshots the list installed during Setup.
        Set("touch","void(pls::cs::Ref<pls::kairo::MotionEvent>)","pls::cs::Ref<pls::kairo::MotionEvent> cs_event","auto cs_list="+Source("GetSurfaceList")+";for(std::int32_t cs_index=pls::cs::sub_i32("+List("Size")+",1);cs_index>=0;--cs_index){auto cs_surface="+List("ElementAt","cs_index")+";"+Surface(touch,"cs_event")+";}");
        Set("clear_game_touch","void()","","auto cs_list="+Source("GetSurfaceList")+";for(std::int32_t cs_index=0;cs_index<"+List("Size")+";cs_index=pls::cs::add_i32(cs_index,1)){auto cs_surface="+List("ElementAt","cs_index")+";if("+Surface(isGame)+")"+Surface(clear)+";}");
        return body+"cs_canvas->host_source_surface(pls::cs::box(cs_source),pls::cs::make_ref<pls::kairo::CallbackFormSurface>(std::move(cs_bindings)));}())";
    }
    static bool IsSourceAdapter(string? binding)=>binding!=null&&(binding.StartsWith("source-adapter:",StringComparison.Ordinal)||binding.StartsWith("source-static:",StringComparison.Ordinal));
    string ResolveSourceAdapter(IMethodSymbol method,string binding,SyntaxNode site){
        var isStatic=binding.StartsWith("source-static:",StringComparison.Ordinal);var offset=isStatic?0:1;
        var adapterId=binding.Substring(binding.IndexOf(':')+1);
        if(!methods.TryGetValue(adapterId,out var adapter)||!adapter.IsStatic||method.IsStatic!=isStatic||method.IsVirtual||method.IsOverride||method.IsAbstract||adapter.Parameters.Length!=method.Parameters.Length+offset||offset==1&&!SymbolEqualityComparer.Default.Equals(adapter.Parameters[0].Type,method.ContainingType)||!SymbolEqualityComparer.Default.Equals(adapter.ReturnType,method.ReturnType)||!adapter.Parameters.Skip(offset).Zip(method.Parameters).All(pair=>SymbolEqualityComparer.Default.Equals(pair.First.Type,pair.Second.Type)&&pair.First.RefKind==pair.Second.RefKind))throw new Unsupported(site,"source adapter requires identical static/receiver shape, parameters and result");
        dependencies[current].Add(adapterId);return Name(adapter);
    }
    string OrderedCall(IMethodSymbol method,List<ExpressionSyntax> args,SyntaxNode site,string? receiver,bool dispatch=true,string? nativeCallee=null) {
        if(IsSourceAdapter(nativeCallee))nativeCallee=ResolveSourceAdapter(method,nativeCallee!,site);
        var paramsIndex=method.Parameters.Length-1;
        var paramsArray=paramsIndex>=0&&method.Parameters[paramsIndex].IsParams?method.Parameters[paramsIndex].Type as IArrayTypeSymbol:null;
        var expanded=paramsArray!=null&&(args.Count!=method.Parameters.Length||!model.ClassifyConversion(args[paramsIndex],paramsArray).IsImplicit);
        var fixedCount=expanded?Math.Min(args.Count,paramsIndex):args.Count;
        if(!expanded&&args.Count>method.Parameters.Length||method.Parameters.Skip(fixedCount).Take((expanded?paramsIndex:method.Parameters.Length)-fixedCount).Any(p=>!p.HasExplicitDefaultValue))throw new Unsupported(site,"missing required or unsupported expanded call argument");
        if(nativeCallee=="native")nativeCallee=method.MethodKind==MethodKind.Constructor?"pls::cs::make_ref<"+NativeClass(method.ContainingType)+">":method.IsStatic?NativeClass(method.ContainingType)+"::"+method.Name:"member:"+method.Name;
        var result=method.MethodKind==MethodKind.Constructor?Type(method.ContainingType,site):Type(method.ReturnType,site);
        var b=new StringBuilder("([&]() -> "+result+" { ");
        if(receiver!=null)b.Append("auto cs_receiver = static_cast<"+Type(method.ContainingType,site)+">("+receiver+"); ");
        for(int i=0;i<fixedCount;i++){
            if(method.Parameters[i].RefKind is RefKind.Ref or RefKind.Out){var storage=ValueStorage(args[i],true);b.Append(storage.setup+"auto& cs_arg"+i+" = "+storage.target+"; ");}
            else b.Append(Type(method.Parameters[i].Type,site)+" cs_arg"+i+" = "+Converted(args[i],method.Parameters[i].Type)+"; ");
        }
        for(int i=fixedCount;i<(expanded?paramsIndex:method.Parameters.Length);i++)b.Append("auto cs_arg"+i+" = "+Constant(method.Parameters[i].ExplicitDefaultValue,method.Parameters[i].Type,site)+"; ");
        if(expanded){
            b.Append("auto cs_arg"+paramsIndex+" = "+Type(paramsArray,site)+"::make("+Math.Max(0,args.Count-paramsIndex)+"); ");
            for(int i=paramsIndex;i<args.Count;i++)b.Append("cs_arg"+paramsIndex+".at("+(i-paramsIndex)+") = "+Converted(args[i],paramsArray!.ElementType)+"; ");
        }
        if(receiver!=null)b.Append("if(!cs_receiver)throw pls::cs::NullReferenceException(); ");
        var nativeMember=nativeCallee?.StartsWith("member:",StringComparison.Ordinal)??false;
        var virtualCall=dispatch&&!nativeMember&&receiver!=null&&(method.IsVirtual||method.IsOverride||method.IsAbstract);
        var values=Enumerable.Range(0,method.Parameters.Length).Select(i=>"cs_arg"+i).ToList();if(receiver!=null&&!virtualCall&&!nativeMember)values.Insert(0,"cs_receiver");
        var callee=nativeCallee??Name(method);if(method.IsGenericMethod&&nativeCallee!=null&&!nativeMember)callee+="<"+String.Join(",",method.TypeArguments.Select(t=>Type(t,site)))+">";if(method.MethodKind==MethodKind.Constructor&&method.ContainingType.TypeArguments.Length!=0)callee+="<"+String.Join(",",method.ContainingType.TypeArguments.Select(t=>Type(t,site)))+">";
        if(nativeMember)callee="cs_receiver->"+nativeCallee!.Substring("member:".Length);
        if(virtualCall)callee="cs_receiver->"+Slot(method);
        b.Append(result=="void"?"":"return ");b.Append(callee+"("+String.Join(",",values)+"); }())");return b.ToString();
    }
    static SyntaxNode? BranchTarget(StatementSyntax branch)=>branch.Ancestors().FirstOrDefault(node=>node is WhileStatementSyntax or DoStatementSyntax or ForStatementSyntax or ForEachStatementSyntax||branch is BreakStatementSyntax&&node is SwitchStatementSyntax);
    static bool ProtectedBranch(StatementSyntax branch){
        var target=BranchTarget(branch);return target!=null&&branch.Ancestors().TakeWhile(node=>node!=target).Any(node=>node is UsingStatementSyntax or TryStatementSyntax{Finally:not null});
    }
    static bool HasProtectedBranch(SyntaxNode target)=>target.DescendantNodes().OfType<StatementSyntax>().Any(branch=>branch is BreakStatementSyntax or ContinueStatementSyntax&&BranchTarget(branch)==target&&ProtectedBranch(branch));
    static string BranchBody(SyntaxNode target,string body){
        if(!HasProtectedBranch(target))return body;
        return "{try "+(body.StartsWith("{",StringComparison.Ordinal)?body:"{"+body+"}")+"catch(const pls::cs::BranchFlow&cs_branch){if(cs_branch.target!="+target.SpanStart+")throw;if(cs_branch.kind==pls::cs::BranchFlow::Kind::continue_)continue;break;}}";
    }
    string Statement(StatementSyntax n,IMethodSymbol method) {
        Used(n);
        switch(n) {
            case BlockSyntax b:return "{\n"+String.Join("\n",b.Statements.Select(s=>Statement(s,method)))+"\n}";
            case ReturnStatementSyntax r:
                if(returnFlowMethods.Contains(Id(method)))return "throw pls::cs::ReturnFlow<"+Type(method.ReturnType,r)+">{"+(r.Expression==null?"":Converted(r.Expression,method.ReturnType))+"};";
                return r.Expression==null?"return;":"return "+Converted(r.Expression,method.ReturnType)+";";
            case ExpressionStatementSyntax e:return Expr(e.Expression)+";";
            case LocalDeclarationStatementSyntax l:return Declare(l.Declaration)+";";
            case UsingStatementSyntax resource:
                var resourceFlow=model.AnalyzeControlFlow(resource.Statement);
                if(resourceFlow==null||!resourceFlow.Succeeded||resourceFlow.ExitPoints.Any(exit=>exit is ReturnStatementSyntax?!returnFlowMethods.Contains(Id(method)):exit is not BreakStatementSyntax&&exit is not ContinueStatementSyntax))throw new Unsupported(resource,"using with an escaping goto requires control-token lowering");
                string ResourceBody(int index){
                    if(resource.Declaration!=null&&index==resource.Declaration.Variables.Count)return Statement(resource.Statement,method);
                    ITypeSymbol? resourceType;string variable,initialization;
                    if(resource.Declaration!=null){
                        var declaration=resource.Declaration.Variables[index];var local=model.GetDeclaredSymbol(declaration) as ILocalSymbol??throw new Unsupported(declaration,"using variable unresolved");
                        if(capturedVariables.Contains(local))throw new Unsupported(declaration,"captured using variable requires a cleanup cell binding");
                        resourceType=local.Type;variable=Local(local);initialization=Type(resourceType,resource)+" "+variable+"="+Converted(declaration.Initializer!.Value,resourceType)+";";
                    }else{
                        resourceType=model.GetTypeInfo(resource.Expression!).Type;variable="cs_resource_"+(temporary++);initialization="auto "+variable+"="+Expr(resource.Expression!)+";";
                    }
                    if(resourceType is not INamedTypeSymbol resourceNamed||!resourceNamed.IsReferenceType)throw new Unsupported(resource,"using requires a measured disposable reference type");
                    string dispose;
                    if(FrameworkClass(resourceType)!=null)dispose="cs_require("+variable+")->Dispose()";
                    else{
                        var contract=compilation.GetTypeByMetadataName("System.IDisposable")!.GetMembers("Dispose").OfType<IMethodSymbol>().Single();
                        var implementation=resourceNamed.FindImplementationForInterfaceMember(contract) as IMethodSymbol??throw new Unsupported(resource,"using Dispose implementation unresolved");
                        dispose=BridgeCall(implementation,variable,resource);
                    }
                    return "{"+initialization+"pls::cs::run_finally([&](){"+(resource.Declaration==null?Statement(resource.Statement,method):ResourceBody(index+1))+"},[&](){if("+variable+"){"+dispose+";}});}";
                }
                return ResourceBody(0);
            case LockStatementSyntax locked:
                var lockType=model.GetTypeInfo(locked.Expression).ConvertedType??model.GetTypeInfo(locked.Expression).Type;
                if(lockType?.SpecialType!=SpecialType.System_Object)throw new Unsupported(locked,"lock supports the observed System.Object monitor expressions only");
                return "{pls::cs::MonitorScope cs_monitor_"+(temporary++)+"("+Expr(locked.Expression)+");"+Statement(locked.Statement,method)+"}";
            case IfStatementSyntax i:return "if ("+Expr(i.Condition)+") "+Statement(i.Statement,method)+(i.Else==null?"":" else "+Statement(i.Else.Statement,method));
            case WhileStatementSyntax w:return "while ("+Expr(w.Condition)+") "+BranchBody(w,Statement(w.Statement,method));
            case DoStatementSyntax d:return "do "+BranchBody(d,Statement(d.Statement,method))+" while ("+Expr(d.Condition)+");";
            case ForStatementSyntax f:
                var declaration=f.Declaration==null?String.Join(",",f.Initializers.Select(Expr)):Declare(f.Declaration);
                return "for ("+declaration+"; "+(f.Condition==null?"true":Expr(f.Condition))+"; "+String.Join(",",f.Incrementors.Select(Expr))+") "+BranchBody(f,Statement(f.Statement,method));
            case ForEachStatementSyntax f:
                if(SystemList(model.GetTypeInfo(f.Expression).Type)||SystemDictionary(model.GetTypeInfo(f.Expression).Type)){
                    var listUnique=temporary++;var listLocal=model.GetDeclaredSymbol(f)!;var listCaptured=capturedVariables.Contains(listLocal);var name="cs_list_enum"+listUnique;
                    var listDeclaration=(listCaptured?CellType(listLocal,f):Type(listLocal.Type,f))+" "+Local(listLocal)+(listCaptured?"_cell":"")+"="+(listCaptured?CellAllocation(listLocal,name+".get_Current()",f):name+".get_Current()")+";";
                    return "{auto "+name+"=("+Expr(f.Expression)+").GetEnumerator();struct cs_list_scope"+listUnique+"{decltype("+name+")&e;~cs_list_scope"+listUnique+"(){e.Dispose();}} cs_scope"+listUnique+"{"+name+"};while("+name+".MoveNext()){ "+listDeclaration+BranchBody(f,Statement(f.Statement,method))+"}}";
                }
                if(!(model.GetTypeInfo(f.Expression).Type is IArrayTypeSymbol))throw new Unsupported(f,"foreach non-array/list requires enumerator/disposal protocol");
                var unique=temporary++;var local=model.GetDeclaredSymbol(f)!;
                var capturedEach=capturedVariables.Contains(local);
                return "{ auto cs_each"+unique+" = "+Expr(f.Expression)+"; for (std::int32_t cs_i"+unique+"=0; cs_i"+unique+"<cs_each"+unique+".length(); ++cs_i"+unique+") { "+(capturedEach?CellType(local,f):Type(local.Type,f))+" "+Local(local)+(capturedEach?"_cell":"")+" = "+(capturedEach?CellAllocation(local,"cs_each"+unique+".get_Item(cs_i"+unique+")",f):"cs_each"+unique+".get_Item(cs_i"+unique+")")+"; "+BranchBody(f,Statement(f.Statement,method))+" } }";
            case BreakStatementSyntax jump:return ProtectedBranch(jump)?"throw pls::cs::BranchFlow{"+BranchTarget(jump)!.SpanStart+",pls::cs::BranchFlow::Kind::break_};":"break;";
            case ContinueStatementSyntax jump:return ProtectedBranch(jump)?"throw pls::cs::BranchFlow{"+BranchTarget(jump)!.SpanStart+",pls::cs::BranchFlow::Kind::continue_};":"continue;";
            case EmptyStatementSyntax _:return ";";
            case LabeledStatementSyntax label:return "cs_label_"+label.Identifier.ValueText+": ;\n"+Statement(label.Statement,method);
            case GotoStatementSyntax jump when jump.IsKind(SyntaxKind.GotoStatement)&&jump.Expression is IdentifierNameSyntax name:return "goto cs_label_"+name.Identifier.ValueText+";";
            case GotoStatementSyntax jump when jump.IsKind(SyntaxKind.GotoCaseStatement)||jump.IsKind(SyntaxKind.GotoDefaultStatement):
                var switchOwner=jump.Ancestors().OfType<SwitchStatementSyntax>().FirstOrDefault()??throw new Unsupported(jump,"goto case/default has no switch owner");
                var targetConstant=jump.Expression==null?default(Optional<object?>):model.GetConstantValue(jump.Expression);
                var targetSection=switchOwner.Sections.FirstOrDefault(section=>section.Labels.Any(label=>jump.IsKind(SyntaxKind.GotoDefaultStatement)?label is DefaultSwitchLabelSyntax:label is CaseSwitchLabelSyntax constant&&targetConstant.HasValue&&targetConstant.Value!=null&&model.GetConstantValue(constant.Value) is{HasValue:true,Value:not null} value&&SwitchConstantKey(value.Value)==SwitchConstantKey(targetConstant.Value)));
                if(targetSection==null)throw new Unsupported(jump,"goto case/default target was not resolved to an integral section");
                return "goto "+SwitchSectionLabel(switchOwner,targetSection)+";";
            case ThrowStatementSyntax thrown:
                if(thrown.Expression==null)return "throw;";
                if(thrown.Expression.IsKind(SyntaxKind.NullLiteralExpression))return "throw pls::cs::NullReferenceException();";
                if(model.GetTypeInfo(thrown.Expression).Type is INamedTypeSymbol managedException&&ExceptionClass(managedException)&&(thrown.Expression is not ObjectCreationExpressionSyntax||managedException.DeclaringSyntaxReferences.Length!=0))return "pls::cs::throw_exception("+Expr(thrown.Expression)+");";
                if(thrown.Expression is ObjectCreationExpressionSyntax exception&&model.GetTypeInfo(exception).Type is INamedTypeSymbol et) {
                    var runtime=ExceptionType(et,exception);
                    if(exception.ArgumentList?.Arguments.Count==0)return "throw "+runtime+"();";
                    if(exception.ArgumentList?.Arguments.Count==1&&model.GetTypeInfo(exception.ArgumentList.Arguments[0].Expression).Type?.SpecialType==SpecialType.System_String)return "throw "+runtime+"("+Expr(exception.ArgumentList.Arguments[0].Expression)+".utf8());";
                }
                throw new Unsupported(thrown,"throw object/reference/inner-exception construction not lowered");
            case TryStatementSyntax tr:
                string Protected() {
                    var text=Statement(tr.Block,method);
                    if(tr.Catches.Count==0)return text;
                    var catchIndex=temporary++;var caught="cs_caught_"+catchIndex;var managed="cs_exception_"+catchIndex;
                    var b=new StringBuilder("try "+text+" catch(const pls::cs::Exception& "+caught+") {auto "+managed+"=pls::cs::capture_exception("+caught+");\n");
                    for(int index=0;index<tr.Catches.Count;index++){
                        var clause=tr.Catches[index];Used(clause);if(clause.Filter!=null)throw new Unsupported(clause,"catch filters require first-pass CLR filter dispatch");
                        var type=clause.Declaration==null?compilation.GetTypeByMetadataName("System.Exception"):model.GetTypeInfo(clause.Declaration.Type).Type;
                        if(!ExceptionClass(type))throw new Unsupported(clause,"catch type is not a known exception hierarchy");
                        var catchSymbol=clause.Declaration==null?null:model.GetDeclaredSymbol(clause.Declaration) as ILocalSymbol;
                        var variable=catchSymbol==null?null:Local(catchSymbol);
                        var source=type!.DeclaringSyntaxReferences.Length!=0;
                        if(source)RequireClass((INamedTypeSymbol)type,clause);
                        var condition=source?"std::dynamic_pointer_cast<"+NativeClass((INamedTypeSymbol)type)+">("+managed+")":"pls::cs::exception_is("+managed+",\""+type.ToDisplayString()+"\")";
                        b.Append((index==0?"if":"else if")+"("+condition+") {");
                        if(variable!=null)b.Append("auto "+variable+"="+(source?"std::dynamic_pointer_cast<"+NativeClass((INamedTypeSymbol)type)+">("+managed+")":managed)+";");
                        b.Append(Statement(clause.Block,method)+"}\n");
                    }
                    b.Append("else {throw;} }");
                    return b.ToString();
                }
                if(tr.Finally==null)return Protected();
                bool protectedBranch=false;
                foreach(var protectedBlock in new[]{tr.Block}.Concat(tr.Catches.Select(clause=>clause.Block)).Append(tr.Finally.Block)){
                    var protectedFlow=model.AnalyzeControlFlow(protectedBlock);
                    if(protectedFlow==null||!protectedFlow.Succeeded||protectedFlow.ExitPoints.Any(exit=>exit is not ReturnStatementSyntax&&exit is not ThrowStatementSyntax&&exit is not BreakStatementSyntax&&exit is not ContinueStatementSyntax))throw new Unsupported(tr,"finally with escaping branch requires structured control token lowering");
                    protectedBranch|=protectedFlow.ExitPoints.Any(exit=>exit is BreakStatementSyntax or ContinueStatementSyntax);
                }
                var reachable=protectedBranch||(model.AnalyzeControlFlow(tr)?.EndPointIsReachable??true);
                if(returnFlowMethods.Contains(Id(method)))return "pls::cs::run_finally([&]() {"+Protected()+"}, [&]() "+Statement(tr.Finally.Block,method)+");";
                if(reachable&&tr.Block.DescendantNodes().OfType<ReturnStatementSyntax>().Any())throw new Unsupported(tr,"finally with mixed fallthrough/return requires structured control token lowering");
                return (reachable?"":"return ")+"pls::cs::run_finally([&]() -> "+(reachable?"void":Type(method.ReturnType,tr))+" "+"{ "+Protected()+" }, [&]() "+Statement(tr.Finally.Block,method)+");";
            case SwitchStatementSyntax sw:
                var stringSwitch=model.GetTypeInfo(sw.Expression).Type?.SpecialType==SpecialType.System_String;
                var builder=new StringBuilder();
                if(stringSwitch){
                    builder.Append("{auto cs_switch_value_"+sw.SpanStart+"="+Expr(sw.Expression)+";std::int32_t cs_switch_index_"+sw.SpanStart+"=-1;");
                    foreach(var section in sw.Sections)foreach(var label in section.Labels.OfType<CaseSwitchLabelSyntax>()){
                        var constant=model.GetConstantValue(label.Value);if(!constant.HasValue)throw new Unsupported(label,"string switch requires constant labels");
                        builder.Append("if(cs_switch_value_"+sw.SpanStart+"=="+Constant(constant.Value,model.GetTypeInfo(sw.Expression).Type,label)+")cs_switch_index_"+sw.SpanStart+"="+sw.Sections.IndexOf(section)+";");
                    }
                    builder.Append("switch(cs_switch_index_"+sw.SpanStart+"){\n");
                }else builder.Append("switch ("+Expr(sw.Expression)+") {\n");
                var hasCaseJump=sw.DescendantNodes().OfType<GotoStatementSyntax>().Any(jump=>(jump.IsKind(SyntaxKind.GotoCaseStatement)||jump.IsKind(SyntaxKind.GotoDefaultStatement))&&jump.Ancestors().OfType<SwitchStatementSyntax>().First()==sw);
                foreach(var section in sw.Sections) {
                    foreach(var label in section.Labels) {
                        if(label is CaseSwitchLabelSyntax c) {
                            if(stringSwitch){if(section.Labels.OfType<CaseSwitchLabelSyntax>().First()==c)builder.Append("case "+sw.Sections.IndexOf(section)+":\n");continue;}
                            var constant=model.GetConstantValue(c.Value);
                            if(!constant.HasValue||constant.Value==null||!Integral(model.GetTypeInfo(c.Value).Type))throw new Unsupported(c,"switch label requires integral compile-time constant");
                            string value=constant.Value is char ch?((int)ch).ToString(CultureInfo.InvariantCulture):Convert.ToString(constant.Value,CultureInfo.InvariantCulture)!;
                            if(value==long.MinValue.ToString(CultureInfo.InvariantCulture))value="(-9223372036854775807ll-1ll)";
                            else if(constant.Value is ulong)value+="ull";else if(constant.Value is long)value+="ll";else if(constant.Value is uint)value+="u";
                            builder.Append("case "+value+":\n");
                        }
                        else if(label is DefaultSwitchLabelSyntax)builder.Append("default:\n");
                        else throw new Unsupported(label,"pattern switch label not lowered");
                    }
                    builder.Append((hasCaseJump?SwitchSectionLabel(sw,section)+": ;\n":"")+"{\n"+String.Join("\n",section.Statements.Select(s=>Statement(s,method)))+"\n}\n");
                }
                builder.Append(stringSwitch?"}}":"}");return HasProtectedBranch(sw)?"try{"+builder+"}catch(const pls::cs::BranchFlow&cs_branch){if(cs_branch.target!="+sw.SpanStart+"||cs_branch.kind!=pls::cs::BranchFlow::Kind::break_)throw;}":builder.ToString();
            default:throw new Unsupported(n,"statement lowering not implemented");
        }
    }
    string ExceptionType(ITypeSymbol? type,SyntaxNode site) {
        var name=type?.ToDisplayString();
        var known=new[]{"Exception","SystemException","ArithmeticException","DivideByZeroException","OverflowException","NullReferenceException","IndexOutOfRangeException","InvalidCastException","ArrayTypeMismatchException","InvalidOperationException","ObjectDisposedException","NotSupportedException","NotImplementedException","OutOfMemoryException","ArgumentException","ArgumentNullException","ArgumentOutOfRangeException","FormatException","UriFormatException","IOException","EndOfStreamException"};
        if(type is INamedTypeSymbol n&&known.Contains(n.Name)&&(name=="System."+n.Name||name=="System.IO."+n.Name))return "pls::cs::"+n.Name;
        if(type is INamedTypeSymbol source&&source.DeclaringSyntaxReferences.Length!=0&&source.BaseType!=null) {
            if(source.GetMembers().OfType<IFieldSymbol>().Any(f=>!f.IsStatic)||source.GetMembers().OfType<IMethodSymbol>().Any(m=>m.MethodKind!=MethodKind.Constructor&&!m.IsImplicitlyDeclared))throw new Unsupported(site,"custom exception with state/methods requires managed exception-reference lowering");
            foreach(var ctor in source.InstanceConstructors.Where(c=>!c.IsImplicitlyDeclared)) {
                var d=ctor.DeclaringSyntaxReferences[0].GetSyntax() as ConstructorDeclarationSyntax;
                if(d==null||d.Body?.Statements.Count!=0||ctor.Parameters.Length!=1||ctor.Parameters[0].Type.SpecialType!=SpecialType.System_String||d.Initializer?.ArgumentList.Arguments.Count!=1||d.Initializer.ArgumentList.Arguments[0].Expression is not IdentifierNameSyntax argument||argument.Identifier.ValueText!=ctor.Parameters[0].Name)throw new Unsupported(site,"custom exception constructor is not a proven pass-through base constructor");
            }
            ExceptionType(source.BaseType,site);exceptionTypes[Id(source)]=source;return Name(source);
        }
        throw new Unsupported(site,"exception hierarchy type not lowered: "+name);
    }
    string Declare(VariableDeclarationSyntax n) {
        Used(n);var builder=new StringBuilder();string? type=null;
        foreach(var d in n.Variables) {
            var symbol=model.GetDeclaredSymbol(d) as ILocalSymbol;
            if(symbol==null)throw new Unsupported(d,"local declaration symbol not found");
            var captured=capturedVariables.Contains(symbol);var t=captured?CellType(symbol,d):Type(symbol.Type,d);if(type!=null&&type!=t)throw new Unsupported(n,"mixed declaration types");
            builder.Append(type==null?(hoistLocals?"":t+" "):", ");type=t;
            var value=d.Initializer==null?Type(symbol.Type,d)+"{}":Converted(d.Initializer.Value,symbol.Type);
            builder.Append(Local(symbol)+(captured?"_cell":"")+" = "+(captured?CellAllocation(symbol,value,d):value));
        }
        return builder.ToString();
    }
    string ServicePolicyBody(IMethodSymbol method,JsonElement policy,SyntaxNode site) {
        var body=new StringBuilder("{\n");
        foreach(var assignment in policy.GetProperty("field_assignments").EnumerateArray()){
            var fieldId=assignment.GetProperty("field").GetString()!;
            var field=DocumentationCommentId.GetSymbolsForDeclarationId(fieldId,compilation).OfType<IFieldSymbol>().SingleOrDefault()??throw new Unsupported(site,"service field is not bound: "+fieldId);
            var kind=assignment.GetProperty("kind").GetString();object value=kind=="bool"?assignment.GetProperty("value").GetBoolean():assignment.GetProperty("value").GetInt32();
            if(kind=="enum"){
                var enumId=assignment.GetProperty("enum_member").GetString()!;var member=DocumentationCommentId.GetSymbolsForDeclarationId(enumId,compilation).OfType<IFieldSymbol>().SingleOrDefault();
                if(member==null||!member.HasConstantValue||Convert.ToInt32(member.ConstantValue,CultureInfo.InvariantCulture)!=(int)value||!SymbolEqualityComparer.Default.Equals(member.ContainingType,field.Type))throw new Unsupported(site,"service enum assignment no longer matches its bound member: "+enumId);
            }
            if(field.IsStatic)body.Append(StaticField(field,site)+"="+Constant(value,field.Type,site)+";\n");
            else {
                var declaring=method.ContainingType;while(declaring!=null&&!SymbolEqualityComparer.Default.Equals(declaring,field.ContainingType))declaring=declaring.BaseType;
                if(declaring==null)throw new Unsupported(site,"service instance assignment does not belong to this receiver: "+fieldId);
                RequireClass(field.ContainingType,site);body.Append("cs_this->"+Name(field)+(sharedFields.Contains(fieldId)?".store(":"=")+Constant(value,field.Type,site)+(sharedFields.Contains(fieldId)?");\n":";\n"));
            }
        }
        var policyKind=policy.GetProperty("kind").GetString();
        if(policyKind=="canvas_ads_absent")policyKind=policy.GetProperty("return_kind").GetString();
        string result=policyKind switch{
            "void" when method.ReturnsVoid=>"return;",
            "bool_false" when method.ReturnType.SpecialType==SpecialType.System_Boolean=>"return false;",
            "bool_true" when method.ReturnType.SpecialType==SpecialType.System_Boolean=>"return true;",
            "null" when method.ReturnType.IsReferenceType=>"return "+Type(method.ReturnType,site)+"{};",
            "empty_string_array" when method.ReturnType is IArrayTypeSymbol{ElementType.SpecialType:SpecialType.System_String}=>"return pls::cs::Array<pls::cs::String>::make(0);",
            "int_exact" when method.ReturnType.SpecialType==SpecialType.System_Int32||method.ReturnType.TypeKind==TypeKind.Enum=>"return "+Constant(policy.GetProperty("value").GetInt32(),method.ReturnType,site)+";",
            "register_local" when method.ReturnType is IArrayTypeSymbol{ElementType.SpecialType:SpecialType.System_Byte}=>"return pls::services::managed::register_local();",
            _=>throw new Unsupported(site,"service lowering kind/signature is not supported: "+policyKind)
        };
        return body+result+"\n}";
    }
    public bool Emit(string id) {
        if(emitted.ContainsKey(id))return true;if(rejected.ContainsKey(id))return false;
        if(active.Contains(id))return true;
        if(!methods.TryGetValue(id,out var method)) {
            method=DocumentationCommentId.GetSymbolsForDeclarationId(id,compilation).OfType<IMethodSymbol>().FirstOrDefault(m=>m.MethodKind==MethodKind.Constructor&&m.IsImplicitlyDeclared&&m.ContainingType.DeclaringSyntaxReferences.Length!=0);
            if(method==null){rejected[id]=new{kind="Declaration",reason="member is not a source method declaration"};return false;}
            methods[id]=method;syntax[id]=method.ContainingType.DeclaringSyntaxReferences[0].GetSyntax();
        }
        var declaration=syntax[id];var oldModel=model;var oldCurrent=current;var oldHoist=hoistLocals;var oldCaptured=capturedVariables;current=id;model=compilation.GetSemanticModel(declaration.SyntaxTree);hoistLocals=false;capturedVariables=new(SymbolEqualityComparer.Default);
        var flowBody=ExecutableBody(declaration).block as SyntaxNode??ExecutableBody(declaration).arrow;
        if(flowBody!=null&&OwnScopeNodes(flowBody).Any(node=>node is TryStatementSyntax{Finally:not null} or UsingStatementSyntax)&&OwnScopeNodes(flowBody).OfType<ReturnStatementSyntax>().Any())returnFlowMethods.Add(id);
        dependencies[id]=new();fieldDependencies[id]=new();classDependencies[id]=new();methodKinds[id]=new();active.Add(id);
        try {
            var hasServicePolicy=request.service_overrides.TryGetValue(id,out var servicePolicy);
            var externalGeneratedHelper=externalTypes.TryGetValue(Id(method.ContainingType),out var externalOwner)&&externalOwner.StartsWith("pls::generated::",StringComparison.Ordinal)&&!MethodSlots(method).Any();
            var sourceNativeHelper=request.source_native_helpers.Contains(id);
            if((externalTypes.ContainsKey(Id(method.ContainingType))||externalValueTypes.ContainsKey(Id(method.ContainingType)))&&!hasServicePolicy&&!externalGeneratedHelper&&!sourceNativeHelper)throw new Unsupported(declaration,"native class/value member requires an exact external API binding");
            if(method.IsAbstract)throw new Unsupported(declaration,"abstract method has no emitted body");
            if(method.MethodKind==MethodKind.UserDefinedOperator&&method.Name is "op_Equality" or "op_Inequality"){
                var partner=method.Name=="op_Equality"?"op_Inequality":"op_Equality";
                foreach(var other in method.ContainingType.GetMembers(partner).OfType<IMethodSymbol>().Where(other=>other.Parameters.Length==method.Parameters.Length&&other.Parameters.Zip(method.Parameters).All(pair=>SymbolEqualityComparer.Default.Equals(pair.First.Type,pair.Second.Type))))dependencies[id].Add(Id(other));
            }
            if(!method.IsStatic)RequireClass(method.ContainingType,declaration);
            if(method.MethodKind==MethodKind.StaticConstructor)throw new Unsupported(declaration,"type initializer emitted through once-per-type initialization, not a callable source method");
            if(!externalTypes.ContainsKey(Id(method.ContainingType))||externalGeneratedHelper)EnsureTypeInitializer(method.ContainingType,declaration);
            if(method.Parameters.Any(p=>p.RefKind is not (RefKind.None or RefKind.Ref or RefKind.Out)))throw new Unsupported(declaration,"in/ref-readonly parameter signature not lowered");
            var (sourceBlock,sourceArrow)=ExecutableBody(declaration);
            var autoBacking=method.AssociatedSymbol is IPropertySymbol autoProperty?method.ContainingType.GetMembers().OfType<IFieldSymbol>().FirstOrDefault(field=>SymbolEqualityComparer.Default.Equals(field.AssociatedSymbol,autoProperty)):null;
            if(autoBacking!=null&&((autoBacking.IsStatic&&method.ContainingType.TypeParameters.Length!=0)||(method.AssociatedSymbol!.DeclaringSyntaxReferences[0].GetSyntax() as PropertyDeclarationSyntax)?.Initializer!=null))throw new Unsupported(declaration,"initialized/generic static auto-property requires ordered per-instantiation backing-field initialization");
            SyntaxNode? executable=hasServicePolicy?null:sourceBlock??(SyntaxNode?)sourceArrow?.Expression;
            hoistLocals=executable!=null&&OwnScopeNodes(executable).OfType<GotoStatementSyntax>().Any(jump=>jump.IsKind(SyntaxKind.GotoStatement));
            if(sourceBlock==null&&sourceArrow==null&&method.MethodKind!=MethodKind.Constructor&&autoBacking==null)throw new Unsupported(declaration,"declaration has no body or requires auto-property synthesis");
            var captureFlow=hasServicePolicy?null:sourceBlock!=null?model.AnalyzeDataFlow(sourceBlock):sourceArrow!=null?model.AnalyzeDataFlow(sourceArrow.Expression):null;
            if(captureFlow?.Succeeded??false)capturedVariables.UnionWith(captureFlow.Captured.Where(s=>s is ILocalSymbol||s is IParameterSymbol));
            if(hoistLocals&&capturedVariables.Count!=0)throw new Unsupported(declaration,"captured variables with goto require scope-lifetime lowering");
            var constructor=method.MethodKind==MethodKind.Constructor;
            var result=constructor?Type(method.ContainingType,declaration):Type(method.ReturnType,declaration);
            foreach(var p in method.Parameters)Type(p.Type,declaration);
            var parameterList=method.Parameters.Select(p=>ParameterType(p)+" "+Local(p)).ToList();
            if(!method.IsStatic&&!constructor)parameterList.Insert(0,Type(method.ContainingType,declaration)+(RecordStruct(method.ContainingType)?"*":"")+" cs_this");
            var parameters=String.Join(",",parameterList);
            string template=Template(TypeParameters(method));
            var autoStorage=autoBacking==null?null:autoBacking.IsStatic?StaticField(autoBacking,declaration):"cs_this->"+Name(autoBacking);
            var body=hasServicePolicy?ServicePolicyBody(method,servicePolicy,declaration):sourceBlock!=null?Statement(sourceBlock,method):sourceArrow!=null?(method.ReturnsVoid?"{ "+Expr(sourceArrow.Expression)+"; }":"{ return "+Converted(sourceArrow.Expression,method.ReturnType)+"; }"):autoBacking!=null?(method.MethodKind==MethodKind.PropertyGet?"{return "+autoStorage+";}":"{"+autoStorage+"="+Local(method.Parameters.Last())+";}"):"{}";
            var parameterCells=String.Concat(method.Parameters.Where(p=>capturedVariables.Contains(p)).Select(p=>CellType(p,declaration)+" "+Local(p)+"_cell="+CellAllocation(p,Local(p),declaration)+";\n"));
            if(parameterCells.Length!=0)body="{\n"+parameterCells+body+"\n}";
            if(hoistLocals) {
                var locals=OwnScopeNodes(executable!).OfType<VariableDeclaratorSyntax>().Select(v=>model.GetDeclaredSymbol(v)).OfType<ILocalSymbol>().ToArray();
                body="{\n"+String.Join("\n",locals.Select(l=>Type(l.Type,declaration)+" "+Local(l)+"{};"))+"\n"+body+"\n}";
            }
            if(returnFlowMethods.Contains(id))body="{try"+body+"catch(const pls::cs::ReturnFlow<"+Type(method.ReturnType,declaration)+">& cs_return){"+(method.ReturnsVoid?"return;":"return cs_return.value;")+"}"+(method.ReturnsVoid?"":"return pls::cs::invalid_return_flow<"+Type(method.ReturnType,declaration)+">();")+"}";
            if(constructor) {
                var ctor=declaration as ConstructorDeclarationSyntax;var chainedThis=ctor?.Initializer?.IsKind(SyntaxKind.ThisConstructorInitializer)??false;
                var init=new StringBuilder("{\n");
                foreach(var field in method.ContainingType.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst&&!chainedThis)) {
                    if(field.AssociatedSymbol is IPropertySymbol initializedAuto&&(initializedAuto.DeclaringSyntaxReferences[0].GetSyntax() as PropertyDeclarationSyntax)?.Initializer!=null)throw new Unsupported(declaration,"auto-property constructor initializer requires ordered field emission");
                    if(field.DeclaringSyntaxReferences.FirstOrDefault()?.GetSyntax() is VariableDeclaratorSyntax f&&f.Initializer!=null) {
                        var saved=model;model=compilation.GetSemanticModel(f.SyntaxTree);
                        try {init.Append("cs_this->"+Name(field)+(sharedFields.Contains(Id(field))?".store(":" = ")+Converted(f.Initializer.Value,field.Type)+(sharedFields.Contains(Id(field))?");\n":";\n"));}finally{model=saved;}
                    }
                }
                IMethodSymbol? target=null;var initArgs=new List<ExpressionSyntax>();
                if(ctor?.Initializer!=null){target=model.GetSymbolInfo(ctor.Initializer).Symbol as IMethodSymbol;initArgs=ctor.Initializer.ArgumentList.Arguments.Select(a=>a.Expression).ToList();}
                else target=method.ContainingType.BaseType?.InstanceConstructors.FirstOrDefault(c=>c.Parameters.Length==0);
                void AppendInitializerArguments(IMethodSymbol callee){
                    if(initArgs.Count>callee.Parameters.Length||callee.Parameters.Skip(initArgs.Count).Any(p=>!p.HasExplicitDefaultValue))throw new Unsupported(declaration,"constructor initializer requires exact or explicit optional arguments");
                    for(int i=0;i<initArgs.Count;i++)init.Append(Type(callee.Parameters[i].Type,declaration)+" cs_arg"+i+" = "+Converted(initArgs[i],callee.Parameters[i].Type)+"; ");
                    for(int i=initArgs.Count;i<callee.Parameters.Length;i++)init.Append(Type(callee.Parameters[i].Type,declaration)+" cs_arg"+i+" = "+Constant(callee.Parameters[i].ExplicitDefaultValue,callee.Parameters[i].Type,declaration)+"; ");
                }
                if(target!=null&&ExceptionClass(target.ContainingType)&&target.ContainingType.DeclaringSyntaxReferences.Length==0){
                    init.Append("([&](){ ");AppendInitializerArguments(target);
                    init.Append("cs_this->source_ctor(\""+target.ContainingType.ToDisplayString()+"\""+String.Concat(Enumerable.Range(0,target.Parameters.Length).Select(i=>",cs_arg"+i))+");}());\n");
                }
                if(target!=null&&externalMethods.TryGetValue(Id(target),out var nativeBaseCtor)&&nativeBaseCtor.StartsWith("base:",StringComparison.Ordinal)){
                    init.Append("([&]() { ");AppendInitializerArguments(target);
                    init.Append("std::static_pointer_cast<"+NativeClass(target.ContainingType)+">(cs_this)->"+nativeBaseCtor.Substring(5)+"("+String.Join(",",Enumerable.Range(0,target.Parameters.Length).Select(i=>"cs_arg"+i))+"); }());\n");
                }
                if(!RecordStruct(method.ContainingType)&&target!=null&&target.ContainingType.SpecialType!=SpecialType.System_Object&&FrameworkClass(target.ContainingType)==null&&!externalCompleteBases.Contains(Id(target.ContainingType))) {
                    RequireClass(target.ContainingType,declaration);dependencies[id].Add(Id(target));
                    init.Append("([&]() { ");AppendInitializerArguments(target);
                    var callArgs=new[]{"std::static_pointer_cast<"+ClassName(target.ContainingType)+">(cs_this)"}.Concat(Enumerable.Range(0,target.Parameters.Length).Select(i=>"cs_arg"+i));
                    init.Append(Name(target)+"_init("+String.Join(",",callArgs)+"); }());\n");
                }
                var initBody=init+body+"\n}";
                var initParameters=Type(method.ContainingType,declaration)+(RecordStruct(method.ContainingType)?"* cs_this":" cs_this")+(parameters.Length==0?"":","+parameters);
                var factory="{ auto cs_this = pls::cs::make_ref<"+NativeClass(method.ContainingType)+">(); "+Name(method)+"_init(cs_this"+(method.Parameters.Length==0?"":","+String.Join(",",method.Parameters.Select(Local)))+"); return cs_this; }";
                if(RecordStruct(method.ContainingType))factory="{ "+NativeClass(method.ContainingType)+" cs_this{}; "+Name(method)+"_init(&cs_this"+(method.Parameters.Length==0?"":","+String.Join(",",method.Parameters.Select(Local)))+");return cs_this;}";

                body=method.ContainingType.TypeParameters.Length==0?"{ "+TypeInitFunction(method.ContainingType)+"();\n"+factory+"\n}":factory;
                body+="\n"+template+"void "+Name(method)+"_init("+initParameters+") "+initBody;
                if(method.ContainingType.IsAbstract)body=template+"void "+Name(method)+"_init("+initParameters+") "+initBody;
            } else if(!method.IsStatic) body="{ if(!cs_this)throw pls::cs::NullReferenceException();\n"+body+"\n}";
            if(!constructor&&method.ContainingType.TypeParameters.Length==0&&method.ContainingType.DeclaringSyntaxReferences.Length!=0&&(!externalTypes.ContainsKey(Id(method.ContainingType))||externalGeneratedHelper))body="{ "+TypeInitFunction(method.ContainingType)+"();\n"+body+"\n}";
            var source=QualifyHelpers(constructor&&method.ContainingType.IsAbstract?body:template+result+" "+Name(method)+"("+parameters+") "+body,compilation.AssemblyName=="Assembly-CSharp");
            foreach(var dependency in dependencies[id].ToArray())if(!Emit(dependency))throw new Unsupported(declaration,"dependency not lowered: "+dependency);
            emitted[id]=source;return true;
        } catch(Unsupported e) {
            var span=declaration.GetLocation().GetLineSpan();
            rejected[id]=new{kind=e.Kind,reason=e.Message,site=e.Site,source=span.Path,line=span.StartLinePosition.Line+1};return false;
        } finally{active.Remove(id);model=oldModel;current=oldCurrent;hoistLocals=oldHoist;capturedVariables=oldCaptured;}
    }
    public object Generate(Request input) {
        if(input.select_all_source_methods)input.selected=input.selected.Concat(methods.Keys.Where(id=>input.select_source_prefix.Length==0||Path.GetRelativePath(input.source_root,syntax[id].SyntaxTree.FilePath).Replace('\\','/').StartsWith(input.select_source_prefix,StringComparison.Ordinal))).Distinct().OrderBy(x=>x).ToArray();
        foreach(var id in input.selected.Where(id=>id.StartsWith("M:",StringComparison.Ordinal)))Emit(id);
        // Allocating a generated C++ class materializes its vtable. A source
        // override/interface implementation must be attempted even when no
        // direct C# call edge names it. Missing bodies remain undefined and
        // reported, never replaced by an inherited body or a default return.
        var virtualAttempts=new HashSet<string>();bool moreVirtuals=true;
        while(moreVirtuals){moreVirtuals=false;var reachableClasses=emitted.Keys.SelectMany(id=>classDependencies[id]).Distinct().ToArray();
            foreach(var typeId in reachableClasses){if(!classes.TryGetValue(typeId,out var type)||type.TypeKind==TypeKind.Interface)continue;
                foreach(var member in type.GetMembers().OfType<IMethodSymbol>().Concat(type.GetMembers().OfType<IPropertySymbol>().SelectMany(property=>new[]{property.GetMethod,property.SetMethod}.OfType<IMethodSymbol>())).Where(member=>!member.IsStatic&&!member.IsAbstract&&MethodSlots(member).Any()).ToArray()){
                    var memberId=Id(member);if(!methods.ContainsKey(memberId)||!virtualAttempts.Add(memberId))continue;var before=emitted.Count;Emit(memberId);if(emitted.Count!=before)moreVirtuals=true;
                }
            }
        }
        // Keep only dependency-closed emitted methods; recursion is legal but a
        // strongly-connected component with any rejected dependency is not.
        bool LayoutValid(ITypeSymbol? symbol,HashSet<string> visiting){
            if(symbol is IArrayTypeSymbol array)return LayoutValid(array.ElementType,visiting);
            if(symbol is not INamedTypeSymbol type)return true;if(externalTypes.ContainsKey(Id(type)))return type.TypeArguments.All(argument=>LayoutValid(argument,visiting));
            if(SystemList(type)||SystemDictionary(type)||SystemStack(type))return type.TypeArguments.All(argument=>LayoutValid(argument,visiting));
            if(!PlainClass(type)&&!RecordStruct(type))return true;
            var key=Id(type);if(!visiting.Add(key))return true;if(!classes.ContainsKey(key))return false;
            return LayoutValid(type.BaseType,visiting)&&type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst).All(field=>LayoutValid(field.Type,visiting));
        }
        foreach(var id in emitted.Keys.ToArray())if(classDependencies[id].Any(key=>!classes.ContainsKey(key)||!LayoutValid(classes[key],new()))){emitted.Remove(id);rejected[id]=new{kind="ClassLayoutDependency",reason="class layout closure contains an unsupported member"};}
        bool changed=true;
        while(changed){changed=false;foreach(var id in emitted.Keys.ToArray())if(dependencies[id].Any(d=>!emitted.ContainsKey(d))) {emitted.Remove(id);rejected[id]=new{kind="Dependency",reason="dependency closure contains an unsupported member"};changed=true;}}
        var usedFields=new HashSet<string>(emitted.Keys.SelectMany(id=>fieldDependencies[id]));
        var usedClasses=new HashSet<string>(emitted.Keys.SelectMany(id=>classDependencies[id]));
        var usedTypes=emitted.Keys.Select(id=>Id(methods[id].ContainingType)).Where(typeInitializers.ContainsKey).ToHashSet();
        bool expanded=true;while(expanded){expanded=false;foreach(var field in usedFields.ToArray()){var owner=Id(fieldSymbols[field].ContainingType);if(typeInitializers.ContainsKey(owner)&&usedTypes.Add(owner))expanded=true;}foreach(var type in usedTypes.ToArray()){foreach(var field in initializerFields[type])if(usedFields.Add(field))expanded=true;usedClasses.UnionWith(initializerClasses[type]);}}

        void AddLayout(ITypeSymbol? symbol){
            if(symbol is IArrayTypeSymbol array){AddLayout(array.ElementType);return;}
            if(symbol is not INamedTypeSymbol type)return;
            if(externalTypes.ContainsKey(Id(type))){foreach(var argument in type.TypeArguments)AddLayout(argument);return;}
            if(SystemList(type)||SystemDictionary(type)||SystemStack(type)){foreach(var argument in type.TypeArguments)AddLayout(argument);return;}
            if(!PlainClass(type)&&!RecordStruct(type)&&!(type.TypeKind==TypeKind.Interface&&type.DeclaringSyntaxReferences.Length!=0))return;
            type=type.OriginalDefinition;if(!usedClasses.Add(Id(type)))return;
            foreach(var iface in type.Interfaces)AddLayout(iface);AddLayout(type.BaseType);foreach(var field in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))AddLayout(field.Type);
        }
        foreach(var field in usedFields)AddLayout(fieldSymbols[field].Type);
        foreach(var method in emitted.Keys.Select(id=>methods[id])){if(!method.IsStatic)AddLayout(method.ContainingType);AddLayout(method.ReturnType);foreach(var parameter in method.Parameters)AddLayout(parameter.Type);}
        foreach(var id in usedClasses.ToArray()){var type=classes[id];foreach(var iface in type.Interfaces)AddLayout(iface);AddLayout(type.BaseType);foreach(var field in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))AddLayout(field.Type);}
        foreach(var id in usedClasses.ToArray())if(!classes.ContainsKey(id))throw new InvalidOperationException("incomplete generated class dependency: "+id);
        Directory.CreateDirectory(input.output);
        var game=input.assembly=="Assembly-CSharp";var ns=game?"pls::game":"pls::generated";var basename=game?"game_generated":"portable_generated";
        var header=new StringBuilder("// GENERATED by translator/Translator.cs. Do not edit.\n#pragma once\n#include \"semantic_runtime.hpp\"\n#include \"managed_text.hpp\"\n#include \"managed_random.hpp\"\n#include \"managed_time.hpp\"\n#include \"managed_streams.hpp\"\n#include \"managed_dictionary.hpp\"\n#include \"managed_type_init.hpp\"\n#include \"managed_reflection.hpp\"\n#include \"managed_exceptions.hpp\"\n#include \"managed_thread.hpp\"\n#include \"managed_collation.hpp\"\n#include \"managed_encoding.hpp\"\n#include \"managed_regex.hpp\"\n#include \"managed_stream_reader.hpp\"\n#include \"managed_path.hpp\"\n#include \"managed_string_ops.hpp\"\n#include \"managed_guid_uri.hpp\"\n"+(game?"#include \"generated/portable_generated.hpp\"\n":"")+String.Join("",input.native_includes.Select(n=>"#include \""+n+"\"\n"))+"#include <cmath>\n#include <cstring>\nnamespace "+ns+" {\n");
        header.Append("[[maybe_unused]] static float cs_f32(std::uint32_t bits) { float value; std::memcpy(&value,&bits,sizeof(value)); return value; }\n[[maybe_unused]] static double cs_f64(std::uint64_t bits) { double value; std::memcpy(&value,&bits,sizeof(value)); return value; }\n");
        if(sharedFields.Count!=0)header.Replace("#include \"semantic_runtime.hpp\"\n","#include \"semantic_runtime.hpp\"\n#include \"managed_shared_field.hpp\"\n");
        header.Append(FrameworkHelpers.Replace("\nstatic ","\n[[maybe_unused]] static "));
        foreach(var id in usedClasses.OrderBy(x=>x))header.Append(Template(classes[id].TypeParameters)+"struct "+Name(classes[id])+";\n");
        var usedExceptions=exceptionTypes.Values.Where(t=>emitted.Values.Any(body=>body.Contains(Name(t)+"(",StringComparison.Ordinal))).ToArray();
        foreach(var type in usedExceptions) {
            var baseType=ExceptionType(type.BaseType,type.DeclaringSyntaxReferences[0].GetSyntax());
            header.Append("struct "+Name(type)+" : "+baseType+" { explicit "+Name(type)+"(std::string message) : "+baseType+"(std::move(message)) {} const char* type_name()const noexcept override {return \""+type.ToDisplayString()+"\";} };\n");
        }
        foreach(var id in usedClasses.OrderBy(id=>classes[id].TypeKind==TypeKind.Interface?0:1).ThenBy(id=>ClassDepth(classes[id])).ThenBy(x=>x)) {
            if(classes[id].TypeKind==TypeKind.Interface){
                header.Append("struct "+Name(classes[id])+" {virtual ~"+Name(classes[id])+"()=default;\nstatic bool source_reference_assignable(const std::type_info&target){return target==typeid("+Name(classes[id])+")||target==typeid(pls::cs::Object)"+String.Concat(classes[id].AllInterfaces.Select(type=>"||target==typeid("+NativeClass(type)+")"))+";}\n");
                foreach(var m in InterfaceMethods(classes[id]))header.Append("virtual "+TypeName(m.ReturnType)+" "+Slot(m)+"("+String.Join(",",m.Parameters.Select(p=>ParameterType(p)+" "+Local(p)))+")=0;\n");
                header.Append("};\n");continue;
            }
            if(RecordStruct(classes[id])){
                header.Append("struct "+Name(classes[id])+" {void trace_edges(const pls::cs::EdgeVisitor&)const;void release_edges();\n");
                foreach(var field in classes[id].GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))header.Append(FieldStorage(field)+" "+Name(field)+"{};\n");
                header.Append("};\n");continue;
            }
            var baseType=classes[id].BaseType;var baseName=baseType!=null&&(FrameworkClass(baseType)!=null||PlainClass(baseType)||externalTypes.ContainsKey(Id(baseType)))?NativeClass(baseType):"pls::cs::Object";
            header.Append(Template(classes[id].TypeParameters)+"struct "+Name(classes[id])+" : "+baseName+String.Concat(classes[id].Interfaces.Where(t=>t.DeclaringSyntaxReferences.Length!=0).Select(t=>", "+NativeClass(t)))+" {\n");
            header.Append("static bool source_reference_assignable(const std::type_info&target){return target==typeid("+Name(classes[id])+")||target==typeid("+baseName+")||"+baseName+"::source_reference_assignable(target)"+String.Concat(classes[id].AllInterfaces.Where(type=>type.DeclaringSyntaxReferences.Length!=0).Select(type=>"||target==typeid("+NativeClass(type)+")"))+";}\n");
            header.Append("void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;\nvoid release_edges()override;\n");
            header.Append("std::string managed_delegate_method_id(const std::string&slot)const override{");
            foreach(var member in methods.Values.Where(m=>SymbolEqualityComparer.Default.Equals(m.ContainingType,classes[id])))foreach(var slot in MethodSlots(member))header.Append("if(slot==\""+slot+"\")return \""+Id(member)+"\";");
            header.Append("return "+baseName+"::managed_delegate_method_id(slot);}\n");

            var names=new Stack<string>();for(var currentType=classes[id];currentType!=null;currentType=currentType.ContainingType)names.Push(currentType.MetadataName);var managedName=classes[id].ContainingNamespace.ToDisplayString()+"."+String.Join("+",names);var genericName=classes[id].ContainingNamespace.ToDisplayString()+"."+classes[id].Name+(char)96+classes[id].TypeParameters.Length;
            header.Append("static std::string source_managed_type_name(){return "+(classes[id].TypeParameters.Length==0?"\""+managedName+"\"":"std::string(\""+genericName+"[\")+"+String.Join("+std::string(\",\")+",classes[id].TypeParameters.Select(p=>"pls::cs::managed_type_name_traits<T_"+p.Name+">::name()"))+"+\"]\"")+";}\nstd::string managed_type_name()const override{return source_managed_type_name();}\n");

            foreach(var field in classes[id].GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))header.Append(FieldStorage(field)+" "+Name(field)+"{};\n");
            foreach(var m in methods.Values.Where(m=>MethodSlots(m).Any()&&SymbolEqualityComparer.Default.Equals(m.ContainingType,classes[id]))) {
                var ps=m.Parameters.Select(p=>ParameterType(p)+(SlotRoot(m).ContainingType.SpecialType==SpecialType.System_Object&&m.Name=="Equals"?" const& ":" ")+Local(p));
                foreach(var slot in MethodSlots(m))header.Append("virtual "+TypeName(m.ReturnType)+" "+slot+"("+String.Join(",",ps)+")"+(m.IsAbstract?"=0;":";")+"\n");
            }
            header.Append("};\n");
        }
        foreach(var type in usedTypes.Select(id=>initializedTypes[id]).OrderBy(t=>Id(t)))header.Append("void "+TypeInitName(type)+"();\n");
        foreach(var id in usedFields.OrderBy(x=>x))header.Append(TypeName(fieldSymbols[id].Type)+"& "+Name(fieldSymbols[id])+"();\n");
        foreach(var pair in emitted.OrderBy(p=>p.Key)) {
            var method=methods[pair.Key];
            var ctor=method.MethodKind==MethodKind.Constructor;var parameters=method.Parameters.Select(p=>ParameterType(p)+" "+Local(p)).ToList();
            if(!method.IsStatic&&!ctor)parameters.Insert(0,TypeName(method.ContainingType)+(RecordStruct(method.ContainingType)?"*":"")+" cs_this");
            header.Append(Template(TypeParameters(method))+TypeName(ctor?method.ContainingType:method.ReturnType)+" "+Name(method)+"("+String.Join(",",parameters)+");\n");
            if(ctor)header.Append(Template(TypeParameters(method))+"void "+Name(method)+"_init("+TypeName(method.ContainingType)+(RecordStruct(method.ContainingType)?"* cs_this":" cs_this")+(parameters.Count==0?"":","+String.Join(",",parameters))+");\n");
        }
        foreach(var pair in emitted.OrderBy(p=>p.Key))if(TypeParameters(methods[pair.Key]).Length!=0)header.Append("// "+pair.Key+"\n"+pair.Value+"\n");
        foreach(var id in usedClasses.OrderBy(x=>x)) {
            var type=classes[id];if(type.TypeKind==TypeKind.Interface)continue;var baseType=type.BaseType;var baseName=baseType!=null&&(FrameworkClass(baseType)!=null||PlainClass(baseType)||externalTypes.ContainsKey(Id(baseType)))?NativeClass(baseType):"pls::cs::Object";
            header.Append(Template(type.TypeParameters)+"inline void "+ClassName(type)+"::trace_edges(const pls::cs::EdgeVisitor&visitor)const {"+(RecordStruct(type)?"":baseName+"::trace_edges(visitor);"));
            foreach(var field in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))header.Append("pls::cs::trace_value("+Name(field)+",visitor);");
            header.Append("}\n"+Template(type.TypeParameters)+"inline void "+ClassName(type)+"::release_edges(){"+(RecordStruct(type)?"":baseName+"::release_edges();"));
            foreach(var field in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))header.Append("pls::cs::release_value("+Name(field)+");");
            header.Append("}\n");
        }
        foreach(var m in emitted.Keys.Select(k=>methods[k]).Where(m=>MethodSlots(m).Any()))foreach(var slot in MethodSlots(m)) {
            var ps=m.Parameters.Select(p=>ParameterType(p)+(SlotRoot(m).ContainingType.SpecialType==SpecialType.System_Object&&m.Name=="Equals"?" const& ":" ")+Local(p));
            header.Append(Template(m.ContainingType.TypeParameters)+"inline "+TypeName(m.ReturnType)+" "+ClassName(m.ContainingType)+"::"+slot+"("+String.Join(",",ps)+") {");
            header.Append(m.ReturnsVoid?"":"return ");header.Append(Name(m)+"(std::static_pointer_cast<"+ClassName(m.ContainingType)+">(shared_from_this())"+(m.Parameters.Length==0?"":","+String.Join(",",m.Parameters.Select(Local)))+");}\n");
        }
        IMethodSymbol? bootstrap=input.bootstrap_method.Length==0?null:DocumentationCommentId.GetSymbolsForDeclarationId(input.bootstrap_method,compilation).OfType<IMethodSymbol>().FirstOrDefault();
        if(bootstrap!=null&&!emitted.ContainsKey(input.bootstrap_method)) {
            if(bootstrap!=null)header.Append("// Declaration only: unsupported body has no stub.\nstruct "+Name(bootstrap.ContainingType)+";\npls::cs::Ref<"+Name(bootstrap.ContainingType)+"> "+Name(bootstrap)+"();\n");
        }
        header.Append("}\n");
        var cpp=new StringBuilder("// GENERATED by translator/Translator.cs. Do not edit.\n#include \""+basename+".hpp\"\n#include <cmath>\n#include <cstring>\n#include <cstdint>\nnamespace "+ns+" {\n");
        foreach(var id in usedFields.OrderBy(x=>x))if(fields.TryGetValue(id,out var field))cpp.Append("static "+field+"\n");
        foreach(var type in usedTypes.Select(id=>initializedTypes[id]).OrderBy(t=>Id(t)))cpp.Append("void "+TypeInitName(type)+"(){static pls::cs::TypeInitState state;state.run(\""+type.ToDisplayString()+"\",[](){\n"+QualifyHelpers(typeInitializers[Id(type)],game)+"\n});}\n");
        foreach(var id in usedFields.OrderBy(x=>x)){var field=fieldSymbols[id];cpp.Append(TypeName(field.Type)+"& "+Name(field)+"(){"+TypeInitFunction(field.ContainingType)+"();return "+Name(field)+"_value;}\n");}

        foreach(var pair in emitted.OrderBy(p=>p.Key)) {
            var m=methods[pair.Key];var tp=TypeParameters(m);
            if(tp.Length==0)cpp.Append("// "+pair.Key+"\n"+pair.Value+"\n");
            else {
                var ctor=m.MethodKind==MethodKind.Constructor;
                var parameters=m.Parameters.Select(p=>Concrete(ParameterType(p),tp,true)).ToList();
                if(!m.IsStatic&&!ctor)parameters.Insert(0,Concrete(TypeName(m.ContainingType),tp,true)+(RecordStruct(m.ContainingType)?"*":""));
                cpp.Append("// Concrete compile receipt: "+pair.Key+" [int]\n");
                cpp.Append("template "+Concrete(TypeName(ctor?m.ContainingType:m.ReturnType),tp,true)+" "+Name(m)+"<"+String.Join(",",tp.Select(ConcreteCpp))+">("+String.Join(",",parameters)+");\n");
            }
        }
        if(bootstrap!=null&&emitted.ContainsKey(input.bootstrap_method))cpp.Append("pls::cs::Ref<pls::kairo::IApplication> create_application(){return "+Name(bootstrap)+"();}\n");
        cpp.Append("}\n");
        var generatedChunks=WriteGenerated(input.output,basename+".hpp",header.ToString(),input.chunk_bytes).Concat(WriteGenerated(input.output,basename+".cpp",cpp.ToString(),input.chunk_bytes)).ToArray();
        var oracleMethods=new HashSet<string>();
        if(!game){
        var oracle=new StringBuilder("// GENERATED source-only oracle; no original game/Unity binary loaded.\nusing System;\npublic static class SourceOracle {\n");
        foreach(var id in usedFields.OrderBy(x=>x)) {
            var field=fieldSymbols[id];var type=field.Type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat);
            oracle.Append("public static "+type+" "+Name(field)+" {get=>"+OracleStatics(field.ContainingType)+"."+Name(field)+";set=>"+OracleStatics(field.ContainingType)+"."+Name(field)+"=value;}\n");
        }
        IFieldSymbol? OracleAutoField(IMethodSymbol member)=>member.AssociatedSymbol is IPropertySymbol property?member.ContainingType.GetMembers().OfType<IFieldSymbol>().FirstOrDefault(field=>field.IsStatic&&SymbolEqualityComparer.Default.Equals(field.AssociatedSymbol,property)):null;
        oracleMethods=new HashSet<string>(emitted.Keys.Where(id=>methods[id].IsStatic&&(syntax[id] is MethodDeclarationSyntax||OracleAutoField(methods[id])!=null)));
        foreach(var id in oracleMethods.OrderBy(x=>x)) {
            if(syntax[id] is not MethodDeclarationSyntax){
                var member=methods[id];var backing=OracleAutoField(member)!;var target="SourceOracle."+Name(backing);
                oracle.Append("public static "+member.ReturnType.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)+" "+Name(member)+"("+String.Join(",",member.Parameters.Select(p=>p.Type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)+" "+Local(p)))+") {"+(member.MethodKind==MethodKind.PropertyGet?"return "+target+";":target+"="+Local(member.Parameters.Last())+";")+"}\n");continue;
            }
            var method=syntax[id];var rewriter=new OracleRewriter(compilation.GetSemanticModel(method.SyntaxTree),usedFields);
            var rewritten=(MethodDeclarationSyntax)rewriter.Visit(method)!;
            rewritten=rewritten.WithIdentifier(SyntaxFactory.Identifier(Name(methods[id]))).WithModifiers(SyntaxFactory.TokenList(SyntaxFactory.Token(SyntaxKind.PublicKeyword),SyntaxFactory.Token(SyntaxKind.StaticKeyword))).WithAttributeLists(default);
            oracle.Append(rewritten.NormalizeWhitespace().ToFullString()+"\n");
        }
        oracle.Append("}\n");
        foreach(var enumType in sourceEnums.Values.OrderBy(type=>Id(type))){
            var declaration=(EnumDeclarationSyntax)enumType.DeclaringSyntaxReferences[0].GetSyntax();declaration=declaration.WithAttributeLists(default).WithMembers(SyntaxFactory.SeparatedList(declaration.Members.Select(member=>member.WithAttributeLists(default))));
            oracle.Append("namespace "+enumType.ContainingNamespace.ToDisplayString()+" {");
            var parents=new Stack<INamedTypeSymbol>();for(var parent=enumType.ContainingType;parent!=null;parent=parent.ContainingType)parents.Push(parent);
            foreach(var parent in parents)oracle.Append("public "+(parent.IsStatic?"static ":"")+"partial "+(parent.TypeKind==TypeKind.Struct?"struct ":"class ")+parent.Name+(parent.TypeParameters.Length==0?"":"<"+String.Join(",",parent.TypeParameters.Select(parameter=>parameter.Name))+">")+" {");
            oracle.Append(declaration.WithModifiers(SyntaxFactory.TokenList(SyntaxFactory.Token(SyntaxKind.PublicKeyword))).NormalizeWhitespace().ToFullString()+String.Concat(parents.Select(_=>"}"))+"}\n");
        }
        foreach(var type in usedTypes.Select(id=>initializedTypes[id]).OrderBy(t=>Id(t))){
            oracle.Append("public static class "+OracleStatics(type)+" {\n");
            foreach(var field in OrderedStaticFields(type)){
                var d=(VariableDeclaratorSyntax)field.DeclaringSyntaxReferences[0].GetSyntax();var rw=new OracleRewriter(compilation.GetSemanticModel(d.SyntaxTree),usedFields);
                if(d.Initializer==null&&!usedFields.Contains(Id(field)))continue;
                oracle.Append("public static "+field.Type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)+" "+Name(field)+(d.Initializer==null?"":" = "+rw.Visit(d.Initializer.Value))+";\n");
            }
            foreach(var field in usedFields.Select(id=>fieldSymbols[id]).Where(field=>field.IsStatic&&field.AssociatedSymbol is IPropertySymbol&&SymbolEqualityComparer.Default.Equals(field.ContainingType,type)))oracle.Append("public static "+field.Type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)+" "+Name(field)+" {get;set;}\n");
            var cctor=type.GetMembers().OfType<IMethodSymbol>().FirstOrDefault(m=>m.MethodKind==MethodKind.StaticConstructor&&!m.IsImplicitlyDeclared);
            if(cctor!=null){var d=(ConstructorDeclarationSyntax)cctor.DeclaringSyntaxReferences[0].GetSyntax();var rw=new OracleRewriter(compilation.GetSemanticModel(d.SyntaxTree),usedFields);oracle.Append("static "+OracleStatics(type)+"() "+rw.Visit(d.Body!)+"\n");}
            else oracle.Append("static "+OracleStatics(type)+"() {}\n");
            oracle.Append("}\n");
        }
        foreach(var type in usedExceptions) {
            var declaration=(ClassDeclarationSyntax)type.DeclaringSyntaxReferences[0].GetSyntax();var rw=new OracleRewriter(compilation.GetSemanticModel(declaration.SyntaxTree),usedFields);
            oracle.Append("namespace "+type.ContainingNamespace.ToDisplayString()+" {\n"+rw.Visit(declaration)!.NormalizeWhitespace().ToFullString()+"\n}\n");
        }
        foreach(var id in usedClasses.OrderBy(x=>x)) {
            if(classes[id].TypeKind==TypeKind.Interface){var original=classes[id].DeclaringSyntaxReferences[0].GetSyntax();var rw=new OracleRewriter(compilation.GetSemanticModel(original.SyntaxTree),usedFields);oracle.Append("namespace "+classes[id].ContainingNamespace.ToDisplayString()+" { "+rw.Visit(original)!.NormalizeWhitespace().ToFullString()+" }\n");continue;}
            var type=classes[id];var oracleBases=new List<string>();if(type.BaseType!=null&&(PlainClass(type.BaseType)||FrameworkClass(type.BaseType)!=null))oracleBases.Add(type.BaseType.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat));oracleBases.AddRange(type.Interfaces.Where(t=>t.DeclaringSyntaxReferences.Length!=0||t.ToDisplayString()=="System.IDisposable"&&t.GetMembers().OfType<IMethodSymbol>().All(member=>type.FindImplementationForInterfaceMember(member) is IMethodSymbol implementation&&emitted.ContainsKey(Id(implementation)))).Select(t=>t.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)));oracle.Append("namespace "+type.ContainingNamespace.ToDisplayString()+" { ");var outers=new Stack<INamedTypeSymbol>();for(var outer=type.ContainingType;outer!=null;outer=outer.ContainingType)outers.Push(outer);foreach(var outer in outers)oracle.Append("public partial class "+outer.Name+" { ");oracle.Append("public "+(type.IsAbstract?"abstract ":"")+"partial "+(RecordStruct(type)?"struct ":"class ")+type.Name+(type.TypeParameters.Length==0?"":"<"+String.Join(",",type.TypeParameters.Select(p=>p.Name))+">")+(oracleBases.Count==0?"":" : "+String.Join(",",oracleBases))+" {\n");
            foreach(var field in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst)) {
                if(field.AssociatedSymbol is IPropertySymbol)continue;
                var d=(VariableDeclaratorSyntax)field.DeclaringSyntaxReferences[0].GetSyntax();var rw=new OracleRewriter(compilation.GetSemanticModel(d.SyntaxTree),usedFields);
                oracle.Append("public "+(field.IsReadOnly?"readonly ":"")+field.Type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)+" "+field.Name+(d.Initializer==null?"":" = "+rw.Visit(d.Initializer.Value))+";\n");
            }
            foreach(var abstractMethod in type.GetMembers().OfType<IMethodSymbol>().Where(member=>member.IsAbstract&&member.AssociatedSymbol==null)){
                if(abstractMethod.DeclaringSyntaxReferences.FirstOrDefault()?.GetSyntax() is not MethodDeclarationSyntax declaration)continue;
                var rw=new OracleRewriter(compilation.GetSemanticModel(declaration.SyntaxTree),usedFields);var rewritten=(MethodDeclarationSyntax)rw.Visit(declaration)!;
                oracle.Append(rewritten.WithModifiers(SyntaxFactory.TokenList(SyntaxFactory.Token(SyntaxKind.PublicKeyword),SyntaxFactory.Token(SyntaxKind.AbstractKeyword))).WithAttributeLists(default).NormalizeWhitespace().ToFullString()+"\n");
            }
            foreach(var property in type.GetMembers().OfType<IPropertySymbol>().Where(p=>(p.GetMethod!=null&&emitted.ContainsKey(Id(p.GetMethod)))||(p.SetMethod!=null&&emitted.ContainsKey(Id(p.SetMethod))))) {
                var d=(BasePropertyDeclarationSyntax)property.DeclaringSyntaxReferences[0].GetSyntax();var rw=new OracleRewriter(compilation.GetSemanticModel(d.SyntaxTree),usedFields);
                var rewritten=(BasePropertyDeclarationSyntax)rw.Visit(d)!;
                rewritten=rewritten.WithModifiers(SyntaxFactory.TokenList(new[]{SyntaxFactory.Token(SyntaxKind.PublicKeyword)}.Concat(rewritten.Modifiers.Where(t=>t.IsKind(SyntaxKind.StaticKeyword)||t.IsKind(SyntaxKind.VirtualKeyword)||t.IsKind(SyntaxKind.OverrideKeyword)||t.IsKind(SyntaxKind.SealedKeyword)||t.IsKind(SyntaxKind.NewKeyword))))).WithAttributeLists(default);
                oracle.Append(rewritten.NormalizeWhitespace().ToFullString()+"\n");
            }
            foreach(var method in emitted.Keys.Select(k=>methods[k]).Where(m=>(!m.IsStatic||m.MethodKind==MethodKind.Conversion||m.MethodKind==MethodKind.UserDefinedOperator)&&SymbolEqualityComparer.Default.Equals(m.ContainingType,type)).OrderBy(m=>Id(m))) {
                if(method.MethodKind is MethodKind.PropertyGet or MethodKind.PropertySet)continue;
                var d=syntax[Id(method)];
                if(method.IsImplicitlyDeclared){oracle.Append("public "+type.Name+"() {}\n");continue;}
                var rw=new OracleRewriter(compilation.GetSemanticModel(d.SyntaxTree),usedFields);
                var rewritten=(BaseMethodDeclarationSyntax)rw.Visit(d)!;
                rewritten=rewritten.WithModifiers(SyntaxFactory.TokenList(new[]{SyntaxFactory.Token(SyntaxKind.PublicKeyword)}.Concat(rewritten.Modifiers.Where(t=>t.IsKind(SyntaxKind.StaticKeyword)||t.IsKind(SyntaxKind.VirtualKeyword)||t.IsKind(SyntaxKind.OverrideKeyword)||t.IsKind(SyntaxKind.SealedKeyword)||t.IsKind(SyntaxKind.NewKeyword))))).WithAttributeLists(default);
                oracle.Append(rewritten.NormalizeWhitespace().ToFullString()+"\n");
            }
            oracle.Append("} "+String.Concat(outers.Select(_=>"} "))+"}\n");
        }
        if(!game)oracle.Append(input.oracle_support+"\n");
        if(!game)oracle.Append("namespace UnityEngine { public static class Debug { public static void Log(object value){global::System.Console.Error.WriteLine(value==null?\"Null\":value.ToString());} } }\n");
        if(!game)File.WriteAllText(Path.Combine(input.output,"source_oracle.cs"),oracle.ToString().Replace("\r\n","\n"),new UTF8Encoding(false));
        }
        var selectedMethods=input.selected.Where(id=>id.StartsWith("M:",StringComparison.Ordinal)).ToArray();
        var byrefSites=new List<object>();var byrefCategories=new Dictionary<string,int>();
        foreach(var tree in compilation.SyntaxTrees){var semantic=compilation.GetSemanticModel(tree);foreach(var argument in tree.GetRoot().DescendantNodes().OfType<ArgumentSyntax>().Where(a=>a.RefKindKeyword.IsKind(SyntaxKind.RefKeyword)||a.RefKindKeyword.IsKind(SyntaxKind.OutKeyword))){
            var symbol=semantic.GetSymbolInfo(argument.Expression).Symbol;
            var category=argument.Expression is ElementAccessExpressionSyntax?"array_element":symbol switch{IFieldSymbol f when f.IsStatic=>"static_field",IFieldSymbol f when f.ContainingType.IsReferenceType=>"reference_instance_field",IFieldSymbol=>"value_instance_field",ILocalSymbol=>"local",IParameterSymbol=>"parameter",_=>"other"};
            var location=argument.GetLocation().GetLineSpan();var source=input.source_root.Length==0?Path.GetFileName(location.Path):Path.GetRelativePath(input.source_root,location.Path).Replace('\\','/');
            var key=source.StartsWith("src/Assembly-CSharp/",StringComparison.Ordinal)?"Assembly-CSharp:"+category:"KairoLibrary:"+category;byrefCategories[key]=byrefCategories.GetValueOrDefault(key)+1;
            byrefSites.Add(new{source,line=location.StartLinePosition.Line+1,kind=argument.RefKindKeyword.ValueText,storage=category,field=symbol is IFieldSymbol field?Id(field):null,null_reference_field_order_android=category=="reference_instance_field"?"UNKNOWN":null});
        }}
        var usedKinds=new Dictionary<string,int>();
        foreach(var id in emitted.Keys)foreach(var pair in methodKinds[id])usedKinds[pair.Key]=usedKinds.GetValueOrDefault(pair.Key)+pair.Value;
        var emittedMetadata=emitted.Keys.OrderBy(x=>x).Select(id=>new{id,cpp_name=Name(methods[id]),name=methods[id].Name,is_abstract_type=methods[id].ContainingType.IsAbstract,constructor_factory_defined=methods[id].MethodKind!=MethodKind.Constructor||!methods[id].ContainingType.IsAbstract,body_origin=input.service_overrides.ContainsKey(id)?"authorized_service_policy":"source",identity_hash_result=IdentityHash(methods[id]),kind=methods[id].MethodKind.ToString(),root=selectedMethods.Contains(id),source=syntax[id].SyntaxTree.FilePath,line=syntax[id].GetLocation().GetLineSpan().StartLinePosition.Line+1,return_type=Concrete((methods[id].MethodKind==MethodKind.Constructor?methods[id].ContainingType:methods[id].ReturnType).ToDisplayString(),TypeParameters(methods[id])),is_static=methods[id].IsStatic,is_constructor=methods[id].MethodKind==MethodKind.Constructor,is_indexer=(methods[id].AssociatedSymbol as IPropertySymbol)?.IsIndexer??false,containing_type=Concrete(methods[id].ContainingType.ToDisplayString(),TypeParameters(methods[id])),concrete_cpp_type_arguments=TypeParameters(methods[id]).Select(ConcreteCpp).ToArray(),concrete_cs_type_arguments=TypeParameters(methods[id]).Select(ConcreteCs).ToArray(),parameters=methods[id].Parameters.Select(p=>new{name=p.Name,ref_kind=p.RefKind.ToString(),type=Concrete(p.Type.ToDisplayString(),TypeParameters(methods[id]))}).ToArray()}).ToArray();
        var reportedMethods=game?emittedMetadata.Where(m=>Path.GetRelativePath(input.source_root,m.source).Replace(Path.DirectorySeparatorChar,'/').StartsWith("src/Assembly-CSharp/",StringComparison.Ordinal)).ToArray():emittedMetadata;
        var gameForeachCaptures=new List<object>();
        foreach(var method in methods.Values.Where(m=>m.DeclaringSyntaxReferences.Length!=0)){
            var site=syntax[Id(method)];if(input.source_root.Length==0||!Path.GetRelativePath(input.source_root,site.SyntaxTree.FilePath).Replace('\\','/').StartsWith("src/Assembly-CSharp/",StringComparison.Ordinal))continue;
            var semantic=compilation.GetSemanticModel(site.SyntaxTree);
            var (block,arrow)=ExecutableBody(site);SyntaxNode? executable=block??(SyntaxNode?)arrow?.Expression;if(executable==null)continue;
            foreach(var each in executable.DescendantNodes().OfType<ForEachStatementSyntax>()){
                var variable=semantic.GetDeclaredSymbol(each);var flow=semantic.AnalyzeDataFlow(each.Statement);
                if(variable!=null&&(flow?.Succeeded??false)&&flow.Captured.Any(s=>SymbolEqualityComparer.Default.Equals(s,variable)))gameForeachCaptures.Add(new{method=Id(method),variable=variable.Name,line=each.GetLocation().GetLineSpan().StartLinePosition.Line+1});
            }
        }
        return new { operation="roslyn-source-to-cpp17-translation", assembly=input.assembly,
            requested_symbols=input.selected.Length,requested_methods=selectedMethods.Length,
            emitted_methods=reportedMethods,
            emitted_kairo_dependencies=emittedMetadata.Except(reportedMethods).ToArray(),
            cpp_body_count=emitted.Count,
            shared_instance_fields=sharedFields.OrderBy(id=>id).ToArray(),
            type_initializers=usedTypes.OrderBy(id=>id).Select(id=>new{id,cpp_name=TypeInitName(initializedTypes[id])}).ToArray(),
            source_byref_arguments=new{categories=byrefCategories,sites=byrefSites},
            service_policy_emission=input.service_overrides.Keys.OrderBy(id=>id).Select(id=>new{id,emitted=emitted.ContainsKey(id),status=emitted.ContainsKey(id)?"emitted":rejected.ContainsKey(id)?"rejected":"not_reached",diagnostic=rejected.GetValueOrDefault(id)}).ToArray(),
            game_foreach_capture_sites=gameForeachCaptures,
            generated_classes=usedClasses.OrderBy(x=>x).Select(id=>new{id,is_abstract=classes[id].IsAbstract,is_value_type=RecordStruct(classes[id]),is_interface=classes[id].TypeKind==TypeKind.Interface,type=Concrete(classes[id].ToDisplayString(),classes[id].TypeParameters),cpp_name=Name(classes[id])+(classes[id].TypeParameters.Length==0?"":"<"+String.Join(",",classes[id].TypeParameters.Select(p=>"std::int32_t"))+">"),fields=InstanceFields(classes[id]).Select(f=>new{id=Id(f),name=f.Name,cpp_name=Name(f),shared=sharedFields.Contains(Id(f)),type=Concrete(f.Type.ToDisplayString(),classes[id].TypeParameters),declaring_type=Concrete(f.ContainingType.ToDisplayString(),classes[id].TypeParameters)}).ToArray()}).ToArray(),
            oracle_static_methods=oracleMethods.OrderBy(x=>x).ToArray(),
            bootstrap=input.bootstrap_method.Length==0?null:new{id=input.bootstrap_method,cpp_name=bootstrap==null?null:Name(bootstrap),defined=emitted.ContainsKey(input.bootstrap_method),required_base=bootstrap?.ContainingType.BaseType?.ToDisplayString(),diagnostic=rejected.GetValueOrDefault(input.bootstrap_method)},
            missing_virtual_definitions=methods.Values.Where(m=>!m.IsStatic&&!m.IsAbstract&&!emitted.ContainsKey(Id(m))&&usedClasses.Contains(Id(m.ContainingType))&&MethodSlots(m).Any()).SelectMany(m=>MethodSlots(m).Select(slot=>new{id=Id(m),cpp_class=ClassName(m.ContainingType),slot,cpp_signature=Template(m.ContainingType.TypeParameters)+TypeName(m.ReturnType)+" "+ClassName(m.ContainingType)+"::"+slot+"("+String.Join(",",m.Parameters.Select(parameter=>ParameterType(parameter)+(SlotRoot(m).ContainingType.SpecialType==SpecialType.System_Object&&m.Name=="Equals"?" const& ":" ")+Local(parameter)))+")",generic_class=m.ContainingType.TypeParameters.Length!=0,diagnostic=rejected.GetValueOrDefault(Id(m))})).ToArray(),
            baked_array_ids=bakedUsed.Where(id=>cpp.ToString().Contains("\""+id+"\"",StringComparison.Ordinal)||header.ToString().Contains("\""+id+"\"",StringComparison.Ordinal)).OrderBy(x=>x).ToArray(),
            generated_exception_types=usedExceptions.Select(t=>new{id=Id(t),native_type=Name(t),pattern="source-validated empty string-constructor forwarding to known base"}).ToArray(),
            generated_chunks=generatedChunks.Select(f=>new{file=f,bytes=new FileInfo(Path.Combine(input.output,f)).Length}).ToArray(),
            oracle_native_setup=input.oracle_native_setup,
            chunking="textual include chunks retain a single translation unit; globals and explicit template instantiations are defined exactly once",
            rejected_methods=rejected.OrderBy(p=>p.Key).ToDictionary(p=>p.Key,p=>p.Value),
            emitted_method_count=reportedMethods.Length,root_methods_emitted=reportedMethods.Count(m=>m.root),
            static_fields=usedFields.OrderBy(x=>x).Select(id=>new{id,cpp_name=Name(fieldSymbols[id]),cpp_accessor=Name(fieldSymbols[id])+"()",type=fieldSymbols[id].Type.ToDisplayString()}).ToArray(),
            emitted_kind_occurrences=usedKinds, compiled=false, executed_methods=0,
            game_binary_emitted=false,original_IL_read=false,
            limitations=new[]{"Generic source classes have concrete compile/execution instances recorded per method; unexercised type arguments have no behavior receipt. Custom inheritance, source/interface slots, properties, per-type lazy initialization, method groups and closures use typed generated classes. Missing virtual bodies remain link errors rather than stubs.","Anonymous functions capture shared cells with GC tracing; captured foreach variables use C#6 fresh-per-iteration semantics. Game foreach-capture sites are inventoried separately because historical smcs C#3 differs. Goto with captured locals and unsupported protected-branch propagation remain rejected. Reflection is closed-world only; native compile and source differential receipts are separate evidence."}};
    }
    public object Diagnose(Request input) {
        foreach(var id in methods.Keys.ToArray())Emit(id);
        bool changed=true;while(changed){changed=false;foreach(var id in emitted.Keys.ToArray())if(dependencies[id].Any(d=>!emitted.ContainsKey(d))){emitted.Remove(id);rejected[id]=new{kind="Dependency",reason="dependency closure contains an unsupported member"};changed=true;}}
        return new {operation="roslyn-whole-source-diagnostics",assembly=input.assembly,source_method_declarations=methods.Count,
            binding_errors=0,source_bodies_lowered_in_memory=emitted.Count,generated_cpp_methods=0,compiled_methods=0,executed_methods=0,
            candidate_ids=emitted.Keys.OrderBy(x=>x).ToArray(),
            rejected_methods=rejected.OrderBy(x=>x.Key).ToDictionary(x=>x.Key,x=>x.Value),
            policy_symbol_bindings=input.check_symbols.Select(id=>new{id,found=DocumentationCommentId.GetSymbolsForDeclarationId(id,compilation).Length!=0}).ToArray(),
            original_IL_read=false,game_binary_emitted=false,
            note="Diagnostic pass only. No C++ output or ledger promotion; constants/tables require content classification before emission."};
    }
    const string FrameworkHelpers=@"
template<class T>bool cs_is(const pls::cs::Ref<pls::cs::Object>&value){if(!value)return false;if constexpr(pls::cs::is_shared_ref<T>::value)return bool(std::dynamic_pointer_cast<typename pls::cs::is_shared_ref<T>::element_type>(value));else{try{(void)pls::cs::unbox<T>(value);return true;}catch(const pls::cs::InvalidCastException&){return false;}}}
template<class T>std::int32_t cs_value_hash(T value){auto object=pls::cs::box(value);if(!object)throw pls::cs::NullReferenceException();return object->GetHashCode();}
static pls::cs::String cs_string_identity(const pls::cs::String&value){value.length();return value;}
static pls::cs::String cs_object_string(const pls::cs::Ref<pls::cs::Object>&value){return value?value->ToString():pls::cs::String(u"""");}
static pls::cs::String cs_concat_objects3(const pls::cs::Ref<pls::cs::Object>&first,const pls::cs::Ref<pls::cs::Object>&second,const pls::cs::Ref<pls::cs::Object>&third){
 auto a=cs_object_string(first);auto b=cs_object_string(second);auto c=cs_object_string(third);return pls::cs::String::concat(pls::cs::String::concat(a,b),c);
}
static pls::cs::String cs_concat_strings4(const pls::cs::String&a,const pls::cs::String&b,const pls::cs::String&c,const pls::cs::String&d){return pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(a,b),c),d);}
static pls::cs::String cs_concat_object_array(const pls::cs::Array<pls::cs::Ref<pls::cs::Object>>&values){
 if(values.is_null())throw pls::cs::ArgumentNullException();auto result=pls::cs::String(u"""");for(std::int32_t i=0;i<values.length();++i){auto part=cs_object_string(values.at(i));if(part.is_null()&&pls::cs::runtime_profile==pls::cs::RuntimeProfile::UnityMono265)throw pls::cs::NullReferenceException();result=pls::cs::String::concat(result,part);}return result;
}

static bool cs_contains_string(const pls::cs::String&source,const pls::cs::String&value){return pls::cs::culture_index_of(source,value)>=0;}
static bool cs_string_equals(const pls::cs::String&left,const pls::cs::String&right){left.length();return left==right;}
template<class T> pls::cs::Ref<T> cs_require(pls::cs::Ref<T> value){if(!value)throw pls::cs::NullReferenceException();return value;}
template<class T> T* cs_require(T* value){if(!value)throw pls::cs::NullReferenceException();return value;}
static pls::cs::String cs_string_from_chars(pls::cs::Array<char16_t> chars){if(chars.is_null())throw pls::cs::ArgumentNullException();std::u16string out;for(std::int32_t i=0;i<chars.length();++i)out.push_back(chars.at(i));return pls::cs::String(std::move(out));}
static bool cs_is_little_endian(){const std::uint16_t value=1;std::uint8_t first;std::memcpy(&first,&value,1);return first==1;}
template<class T> static T cs_network_to_host(T value){
 if(!cs_is_little_endian())return value;using U=std::make_unsigned_t<T>;U bits{};std::memcpy(&bits,&value,sizeof(T));U result=0;for(std::size_t i=0;i<sizeof(T);++i){result=static_cast<U>((result<<8)|(bits&255));bits>>=8;}T out{};std::memcpy(&out,&result,sizeof(T));return out;
}
static pls::cs::String cs_substring2(const pls::cs::String& source,std::int32_t start,std::int32_t count) {
 const auto n=source.length(); if(start<0||count<0||static_cast<std::int64_t>(start)+count>n)throw pls::cs::ArgumentOutOfRangeException();
 std::u16string value;for(std::int32_t i=0;i<count;++i)value.push_back(source.at(start+i));return pls::cs::String(std::move(value));
}
static pls::cs::String cs_substring1(const pls::cs::String& source,std::int32_t start) {return cs_substring2(source,start,pls::cs::sub_i32(source.length(),start));}
static pls::cs::Array<char16_t> cs_to_chars(const pls::cs::String& source) {
 auto result=pls::cs::Array<char16_t>::make(source.length());for(std::int32_t i=0;i<result.length();++i)result.at(i)=source.at(i);return result;
}
static std::int32_t cs_index_char2(const pls::cs::String& source,char16_t value,std::int32_t start) {
 auto n=source.length();if(start<0||start>n)throw pls::cs::ArgumentOutOfRangeException();for(auto i=start;i<n;++i)if(source.at(i)==value)return i;return -1;
}
static std::int32_t cs_last_index_char1(const pls::cs::String& source,char16_t value){for(auto i=source.length();i>0;--i)if(source.at(i-1)==value)return i-1;return -1;}
static std::int32_t cs_index_char1(const pls::cs::String& source,char16_t value){return cs_index_char2(source,value,0);}
static pls::cs::String cs_char_string(char16_t value){return pls::cs::String(std::u16string(1,value));}
template<class T> pls::cs::String cs_integer_string(T value) {
 auto text=std::to_string(value);if(!text.empty()&&text[0]=='-')return pls::cs::String::concat(pls::cs::integer_number_format.negative_sign,pls::cs::String::from_utf8(text.substr(1)));return pls::cs::String::from_utf8(text);
}
template<class T> pls::cs::Ref<pls::cs::Object> cs_clone_array(pls::cs::Array<T> value){return value.clone().as_object();}
template<class T> pls::cs::Array<std::uint8_t> cs_bit_bytes(T value) {
 using U=std::conditional_t<sizeof(T)==8,std::uint64_t,std::conditional_t<sizeof(T)==4,std::uint32_t,std::uint16_t>>;
 U bits{};std::memcpy(&bits,&value,sizeof(T));auto result=pls::cs::Array<std::uint8_t>::make(sizeof(T));
 for(std::int32_t i=0;i<result.length();++i)result.at(i)=static_cast<std::uint8_t>(bits>>(i*8));return result;
}
template<class T> T cs_bits_from(pls::cs::Array<std::uint8_t> source,std::int32_t start) {
 if(source.is_null())throw pls::cs::ArgumentNullException();if(start<0||start>=source.length())throw pls::cs::ArgumentOutOfRangeException();
 if(static_cast<std::int64_t>(start)+sizeof(T)>source.length())throw pls::cs::ArgumentException();
 using U=std::conditional_t<sizeof(T)==8,std::uint64_t,std::conditional_t<sizeof(T)==4,std::uint32_t,std::uint16_t>>;
 U bits=0;for(std::int32_t i=0;i<sizeof(T);++i)bits|=static_cast<U>(source.at(start+i))<<(i*8);T result;std::memcpy(&result,&bits,sizeof(T));return result;
}
";
    sealed class OracleRewriter : CSharpSyntaxRewriter {
        readonly SemanticModel m;
        readonly ISet<string> emittedFields;
        public OracleRewriter(SemanticModel model,ISet<string> fields){m=model;emittedFields=fields;}
        IFieldSymbol? AutoStaticField(IPropertySymbol property){
            if(!property.IsStatic||property.DeclaringSyntaxReferences.Length==0)return null;
            var field=property.ContainingType.GetMembers().OfType<IFieldSymbol>().FirstOrDefault(field=>SymbolEqualityComparer.Default.Equals(field.AssociatedSymbol,property));
            return field!=null&&emittedFields.Contains(Id(field))?field:null;
        }
        static ExpressionSyntax ConstantSyntax(IFieldSymbol field) {
            var value=field.ConstantValue;
            string text;
            if(value is float f)text=float.IsNaN(f)?"global::System.Single.NaN":float.IsPositiveInfinity(f)?"global::System.Single.PositiveInfinity":float.IsNegativeInfinity(f)?"global::System.Single.NegativeInfinity":f.ToString("R",CultureInfo.InvariantCulture)+"f";
            else if(value is double d)text=double.IsNaN(d)?"global::System.Double.NaN":double.IsPositiveInfinity(d)?"global::System.Double.PositiveInfinity":double.IsNegativeInfinity(d)?"global::System.Double.NegativeInfinity":d.ToString("R",CultureInfo.InvariantCulture)+"d";
            else text=Microsoft.CodeAnalysis.CSharp.SymbolDisplay.FormatPrimitive(value!,true,false);
            return SyntaxFactory.ParseExpression("("+field.Type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)+")("+text+")");
        }
        public override SyntaxNode? VisitInvocationExpression(InvocationExpressionSyntax node) {
            var method=m.GetSymbolInfo(node).Symbol as IMethodSymbol;
            if(method?.ReducedFrom!=null&&node.Expression is MemberAccessExpressionSyntax member) {
                var args=node.ArgumentList.Arguments.Select(a=>(ArgumentSyntax)Visit(a)!).ToList();
                args.Insert(0,SyntaxFactory.Argument((ExpressionSyntax)Visit(member.Expression)!));
                var callee=method.ReducedFrom.DeclaringSyntaxReferences.Length!=0?"SourceOracle."+Name(method.ReducedFrom):method.ReducedFrom.ContainingType.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)+"."+method.Name+(method.IsGenericMethod?"<"+String.Join(",",method.TypeArguments.Select(t=>t.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)))+">":"");
                return SyntaxFactory.InvocationExpression(SyntaxFactory.ParseExpression(callee),SyntaxFactory.ArgumentList(SyntaxFactory.SeparatedList(args)));
            }
            if(method!=null&&method.IsStatic&&oracleExternalMethods.TryGetValue(Id(method),out var oracleCallee))return node.WithExpression(SyntaxFactory.ParseExpression(oracleCallee)).WithArgumentList((ArgumentListSyntax)Visit(node.ArgumentList)!);
            if(method!=null&&method.IsStatic&&method.DeclaringSyntaxReferences.Length!=0) {
                return node.WithExpression(SyntaxFactory.ParseExpression("SourceOracle."+Name(method)+(method.IsGenericMethod?"<"+String.Join(",",method.TypeArguments.Select(t=>t.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)))+">":""))).WithArgumentList((ArgumentListSyntax)Visit(node.ArgumentList)!);
            }
            return base.VisitInvocationExpression(node);
        }
        public override SyntaxNode? VisitIdentifierName(IdentifierNameSyntax node) {
            if(m.GetSymbolInfo(node).Symbol is IPropertySymbol property&&AutoStaticField(property) is IFieldSymbol backing)return SyntaxFactory.ParseExpression("SourceOracle."+Name(backing));
            if(m.GetSymbolInfo(node).Symbol is IFieldSymbol field&&!field.HasConstantValue&&field.IsStatic&&field.DeclaringSyntaxReferences.Length!=0)return SyntaxFactory.ParseExpression("SourceOracle."+Name(field));
            if(m.GetSymbolInfo(node).Symbol is IFieldSymbol constant&&constant.HasConstantValue)return ConstantSyntax(constant);
            if(m.GetSymbolInfo(node).Symbol is INamedTypeSymbol type)return SyntaxFactory.ParseTypeName(type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat));
            return base.VisitIdentifierName(node);
        }
        public override SyntaxNode? VisitGenericName(GenericNameSyntax node) {
            if(m.GetSymbolInfo(node).Symbol is INamedTypeSymbol type)return SyntaxFactory.ParseTypeName(type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat));
            return base.VisitGenericName(node);
        }
        public override SyntaxNode? VisitQualifiedName(QualifiedNameSyntax node) {
            if(m.GetSymbolInfo(node).Symbol is INamedTypeSymbol type)return SyntaxFactory.ParseTypeName(type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat));
            return base.VisitQualifiedName(node);
        }
        public override SyntaxNode? VisitMemberAccessExpression(MemberAccessExpressionSyntax node) {
            if(m.GetSymbolInfo(node).Symbol is IPropertySymbol autoProperty&&AutoStaticField(autoProperty) is IFieldSymbol backing)return SyntaxFactory.ParseExpression("SourceOracle."+Name(backing));
            if(m.GetSymbolInfo(node).Symbol is INamedTypeSymbol named)return SyntaxFactory.ParseExpression(named.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat));
            if(m.GetSymbolInfo(node).Symbol is IMethodSymbol {IsStatic:true} method&&method.DeclaringSyntaxReferences.Length!=0)return SyntaxFactory.ParseExpression(oracleExternalMethods.GetValueOrDefault(Id(method))??("SourceOracle."+Name(method)+(method.IsGenericMethod?"<"+String.Join(",",method.TypeArguments.Select(t=>t.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)))+">":"")));
            if(m.GetSymbolInfo(node).Symbol is IPropertySymbol property&&property.IsStatic&&property.ContainingType.ToDisplayString()=="System.DateTime"&&property.Name=="UtcNow")return SyntaxFactory.ParseExpression("global::Harness.FixedUtcNow()");
            if(m.GetSymbolInfo(node).Symbol is IFieldSymbol field) {
                if(!field.HasConstantValue&&field.IsStatic&&field.DeclaringSyntaxReferences.Length!=0)return SyntaxFactory.ParseExpression("SourceOracle."+Name(field));
                if(field.HasConstantValue)return ConstantSyntax(field);
            }
            return base.VisitMemberAccessExpression(node);
        }
    }
}
static class Program {
    static int Main(string[] args) {
        if(args.Length!=2)throw new ArgumentException("input.json output.json required");
        var input=JsonSerializer.Deserialize<Request>(File.ReadAllText(args[0]))!;
        var trees=input.sources.Select(path=>CSharpSyntaxTree.ParseText(File.ReadAllText(path),path:path)).ToArray();
        var references=input.references.Select(path=>MetadataReference.CreateFromFile(path)).ToArray();
        var compilation=CSharpCompilation.Create(input.assembly,trees,references,new CSharpCompilationOptions(OutputKind.DynamicallyLinkedLibrary,optimizationLevel:OptimizationLevel.Release,assemblyIdentityComparer:DesktopAssemblyIdentityComparer.Default).WithMetadataImportOptions(MetadataImportOptions.All));
        var errors=compilation.GetDiagnostics().Where(d=>d.Severity==DiagnosticSeverity.Error).ToArray();
        if(errors.Length!=0){File.WriteAllText(args[1],JsonSerializer.Serialize(new{semantic_errors=errors.Select(d=>new{id=d.Id,message=d.GetMessage()}).ToArray()},new JsonSerializerOptions{WriteIndented=true}));return 1;}
        var lowerer=new Lowerer(compilation,input);var output=input.diagnostics_only?lowerer.Diagnose(input):lowerer.Generate(input);
        File.WriteAllText(args[1],JsonSerializer.Serialize(output,new JsonSerializerOptions{WriteIndented=true})+"\n",new UTF8Encoding(false));return 0;
    }
}
