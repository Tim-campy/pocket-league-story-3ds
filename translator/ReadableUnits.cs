// Readable emission, part 2: C# names for every generated symbol and the
// rewrite of the generated text. Applied only when the request sets
// "readable"; the lowering and the per-type packaging run first, unchanged,
// on the hashed spelling (EmissionUnits.cs keys ownership on cs_<hash>).
//
// Naming rules (documented in docs/readable-sample/README.md):
//  * Types keep their C# name inside C++ namespaces that mirror the C# ones,
//    below the assembly namespace (pls::generated for KairoLibrary, pls::game
//    for Assembly-CSharp). Nested types are flattened as Outer_Inner.
//  * A type with a generated struct holds its methods, static-field
//    accessors and type initializer as static member functions; the
//    receiver of an instance method is the explicit first parameter `self`.
//    A type without a struct becomes a C++ namespace of the same name.
//    Members of a generic struct stay free functions named Type_Member.
//  * Constructors: Type::create (allocate + initialize) and Type::create_init
//    (initialize only, used by derived constructors). Type initializer:
//    Type::ensure_initialized. Static field storage: Type_field_storage.
//  * Collisions are resolved deterministically: overloads keep the name when
//    their C++ parameter counts differ; same-count overloads, and members
//    that would collide with a field, a virtual slot or a runtime member,
//    are numbered in declaration order (Name, Name_2, ...). A virtual slot
//    keeps the root method name unless two roots with the same name and
//    parameters (or a field) meet in one class; then it is RootType_Name.
//    C++ keywords and reserved names get a trailing underscore.
//  * References are qualified with the shortest suffix of the namespace path
//    that C++ name lookup resolves to the same entity from the use site;
//    references into the other assembly are fully qualified.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Text.Json.Nodes;
using System.Text.RegularExpressions;
using Microsoft.CodeAnalysis;

sealed partial class Lowerer {
    enum RKind {Type,Member,NsMember,Free,Storage,Field,Slot,Closure}
    sealed class RName {
        public RKind Kind;public string Root="";public string[] Path=Array.Empty<string>();
        public string? ClassKey;public string[] Wrap=Array.Empty<string>();
        public string Leaf=>Path[^1];
    }
    sealed class RSite {public string[] Ns=Array.Empty<string>();public string? ClassKey;}
    sealed class Registry {
        public string Root="";
        public readonly Dictionary<string,RName> Tokens=new(StringComparer.Ordinal);
        public readonly Dictionary<string,Dictionary<string,bool>> Scopes=new(StringComparer.Ordinal);
        public readonly Dictionary<string,HashSet<string>> ClassMembers=new(StringComparer.Ordinal);
        public readonly Dictionary<string,Dictionary<string,string>> ClassInjected=new(StringComparer.Ordinal);
        public readonly Dictionary<string,string> SlotDocIds=new(StringComparer.Ordinal);
        public readonly Dictionary<string,string> TypeStems=new(StringComparer.Ordinal);
        public readonly HashSet<string> Unresolved=new(StringComparer.Ordinal);
    }
    Registry? registry;
    static string Key(IEnumerable<string> path)=>String.Join("::",path);
    static string[] NsOf(INamedTypeSymbol type)=>type.ContainingNamespace==null||type.ContainingNamespace.IsGlobalNamespace?Array.Empty<string>():type.ContainingNamespace.ToDisplayString().Split('.').Select(CppIdentifier).ToArray();
    static string FlatName(INamedTypeSymbol type){var names=new Stack<string>();for(var t=type.OriginalDefinition;t!=null;t=t.ContainingType)names.Push(t.Name);return CppIdentifier(String.Join("_",names));}
    static string ReadableStem(string typeId)=>Regex.Replace(typeId.Substring(2),"[^A-Za-z0-9_.]","_");

    void BuildRegistry(Request input,HashSet<string> usedClasses,HashSet<string> usedTypes,HashSet<string> usedFields,INamedTypeSymbol[] usedExceptions){
        var game=input.assembly=="Assembly-CSharp";
        var r=new Registry{Root=game?"pls::game":"pls::generated"};registry=r;
        void AddScope(string[] path,string name,bool isScope){
            var key=Key(path);if(!r.Scopes.TryGetValue(key,out var scope))r.Scopes[key]=scope=new(StringComparer.Ordinal);
            scope.TryAdd(name,isScope);
        }
        bool Taken(string[] path,string name)=>r.Scopes.TryGetValue(Key(path),out var scope)&&scope.ContainsKey(name);
        foreach(var helper in ReadableHelperNames.Values.Concat(new[]{"literal","is_null","post_increment","post_decrement","pre_increment","pre_decrement","create_application"}))AddScope(Array.Empty<string>(),helper,false);
        var structTypes=new HashSet<string>(usedClasses.Concat(usedExceptions.Select(t=>Id(t))),StringComparer.Ordinal);
        // Every type that owns emitted code or a struct.
        var types=new Dictionary<string,INamedTypeSymbol>(StringComparer.Ordinal);
        void AddType(INamedTypeSymbol t){t=t.OriginalDefinition;types.TryAdd(Id(t),t);}
        foreach(var id in usedClasses)AddType(classes[id]);
        foreach(var t in usedExceptions)AddType(t);
        foreach(var id in emitted.Keys)AddType(methods[id].ContainingType);
        foreach(var id in usedFields)AddType(fieldSymbols[id].ContainingType);
        foreach(var id in usedTypes)AddType(initializedTypes[id]);
        bool IsStruct(INamedTypeSymbol t)=>structTypes.Contains(Id(t));
        bool IsClassMode(INamedTypeSymbol t)=>IsStruct(t)&&t.TypeParameters.Length==0;
        var typeNames=new Dictionary<string,string>(StringComparer.Ordinal);
        // Namespace segments first, so that a type never takes a namespace's name.
        foreach(var t in types.Values){var ns=NsOf(t);for(int i=0;i<ns.Length;i++)AddScope(ns[..i],ns[i],true);}
        foreach(var t in types.Values.OrderBy(t=>Id(t),StringComparer.Ordinal)){
            var ns=NsOf(t);var stem=FlatName(t);var name=stem;for(int k=2;Taken(ns,name);k++)name=stem+"_"+k;
            AddScope(ns,name,true);typeNames[Id(t)]=name;
            var path=ns.Append(name).ToArray();typesByKey[Key(path)]=t;
            // A type bound to another assembly (external_types) keeps that assembly's
            // name; only its locally emitted helpers live in this namespace.
            if(!externalTypes.ContainsKey(Id(t)))r.Tokens[Name(t)]=new RName{Kind=RKind.Type,Root=r.Root,Path=path,ClassKey=IsStruct(t)?Key(path):null,Wrap=ns};
        }
        var stems=new HashSet<string>(StringComparer.OrdinalIgnoreCase);
        foreach(var id in types.Keys.OrderBy(x=>x,StringComparer.Ordinal)){var stem=ReadableStem(id);var unique=stem;for(int k=2;!stems.Add(unique);k++)unique=stem+"_"+k;r.TypeStems[id]=unique;}
        string[] TypePath(INamedTypeSymbol t)=>NsOf(t).Append(typeNames[Id(t.OriginalDefinition)]).ToArray();
        // Instance fields: the C# name; a field hiding a base field is suffixed.
        var fieldNames=new Dictionary<string,HashSet<string>>(StringComparer.Ordinal);
        IEnumerable<INamedTypeSymbol> Chain(INamedTypeSymbol t){for(var x=t.OriginalDefinition;x!=null&&IsStruct(x);x=x.BaseType?.OriginalDefinition)yield return x;}
        HashSet<string> FieldNamesOf(INamedTypeSymbol t){
            if(fieldNames.TryGetValue(Id(t),out var known))return known;
            var set=new HashSet<string>(StringComparer.Ordinal);
            if(t.BaseType!=null&&IsStruct(t.BaseType.OriginalDefinition))set.UnionWith(FieldNamesOf(t.BaseType.OriginalDefinition));
            foreach(var f in t.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst)){
                var stem=CppIdentifier(f.Name);var name=set.Contains(stem)?stem+"_"+FlatName(t):stem;for(int k=2;set.Contains(name);k++)name=stem+"_"+k;
                set.Add(name);r.Tokens[Name(f)]=new RName{Kind=RKind.Field,Root=r.Root,Path=new[]{name}};
            }
            return fieldNames[Id(t)]=set;
        }
        foreach(var t in types.Values.Where(IsStruct))FieldNamesOf(t);
        // Virtual slots of source roots.
        string Signature(IMethodSymbol m)=>String.Join(",",m.Parameters.Select(p=>{try{return ParameterType(p);}catch(InvalidOperationException){return p.Type.ToDisplayString();}}));
        var roots=new Dictionary<string,IMethodSymbol>(StringComparer.Ordinal);
        void Root(IMethodSymbol m){var key=Slot(m);if(key.StartsWith("cs_virtual_",StringComparison.Ordinal))roots.TryAdd(key,SlotRoot(m));}
        foreach(var m in methods.Values)if((m.IsVirtual||m.IsOverride||m.IsAbstract)&&!m.IsGenericMethod&&m.ContainingType.TypeKind!=TypeKind.Interface)Root(m);
        foreach(var t in types.Values.Where(t=>t.TypeKind==TypeKind.Interface))foreach(var m in InterfaceMethods(t))Root(m);
        foreach(var t in types.Values)foreach(var i in t.AllInterfaces.Where(i=>i.DeclaringSyntaxReferences.Length!=0))foreach(var m in InterfaceMethods(i))Root(m);
        var candidate=roots.ToDictionary(p=>p.Key,p=>CppIdentifier(p.Value.Name),StringComparer.Ordinal);
        var conflicted=new HashSet<string>(StringComparer.Ordinal);
        var visibleSlots=new Dictionary<string,List<(string key,string sig,int arity)>>(StringComparer.Ordinal);
        foreach(var t in types.Values.Where(IsStruct)){
            var entries=new List<(string key,string sig,int arity)>{("Equals","pls::cs::Ref<pls::cs::Object>",1),("GetHashCode","",0),("ToString","",0)};
            foreach(var b in Chain(t))foreach(var m in methods.Values.Where(m=>SymbolEqualityComparer.Default.Equals(m.ContainingType.OriginalDefinition,b)))foreach(var slot in MethodSlots(m))entries.Add((slot,Signature(m),m.Parameters.Length));
            foreach(var i in t.AllInterfaces.Append(t).Where(i=>i.TypeKind==TypeKind.Interface&&i.DeclaringSyntaxReferences.Length!=0))foreach(var m in InterfaceMethods(i))entries.Add((Slot(m),Signature(m),m.Parameters.Length));
            visibleSlots[Id(t)]=entries;
            var fields=FieldNamesOf(t);
            foreach(var group in entries.GroupBy(e=>(e.key.StartsWith("cs_virtual_",StringComparison.Ordinal)?candidate.GetValueOrDefault(e.key,e.key):e.key)+"|"+e.sig))
                if(group.Select(e=>e.key).Distinct().Count()>1)foreach(var e in group)if(e.key.StartsWith("cs_virtual_",StringComparison.Ordinal))conflicted.Add(e.key);
            foreach(var e in entries)if(e.key.StartsWith("cs_virtual_",StringComparison.Ordinal)&&fields.Contains(candidate.GetValueOrDefault(e.key,"")))conflicted.Add(e.key);
        }
        var slotNames=new Dictionary<string,string>(StringComparer.Ordinal);
        foreach(var (key,root) in roots){
            var name=conflicted.Contains(key)?CppIdentifier(FlatName(root.ContainingType)+"_"+root.Name):candidate[key];
            slotNames[key]=name;r.Tokens[key]=new RName{Kind=RKind.Slot,Root=r.Root,Path=new[]{name}};r.SlotDocIds[key]=Id(root);
        }
        string SlotName(string key)=>slotNames.GetValueOrDefault(key,key);
        // Static members, per declaring type.
        int Position(ISymbol s){var location=s.Locations.FirstOrDefault(l=>l.IsInSource);return location==null?-1:location.SourceSpan.Start;}
        string TreeOf(ISymbol s)=>s.Locations.FirstOrDefault(l=>l.IsInSource)?.SourceTree?.FilePath??"";
        foreach(var t in types.Values.OrderBy(t=>Id(t),StringComparer.Ordinal)){
            var classMode=IsClassMode(t);var free=IsStruct(t)&&!classMode;var path=TypePath(t);var ns=NsOf(t);var flat=typeNames[Id(t)];
            var taken=new HashSet<(string,int)>();var forbidden=new HashSet<string>(StringComparer.Ordinal);
            if(classMode){
                forbidden.UnionWith(FieldNamesOf(t));forbidden.UnionWith(ObjectMemberNames);
                foreach(var m in methods.Values.Where(m=>SymbolEqualityComparer.Default.Equals(m.ContainingType.OriginalDefinition,t)))foreach(var slot in MethodSlots(m))taken.Add((SlotName(slot),m.Parameters.Length));
                if(t.TypeKind==TypeKind.Interface)foreach(var m in InterfaceMethods(t))taken.Add((SlotName(Slot(m)),m.Parameters.Length));
            }
            RName Make(string leaf){
                if(classMode)return new RName{Kind=RKind.Member,Root=r.Root,Path=path.Append(leaf).ToArray(),ClassKey=Key(path),Wrap=ns};
                if(free){var name=flat+"_"+leaf;var unique=name;for(int k=2;Taken(ns,unique);k++)unique=name+"_"+k;AddScope(ns,unique,false);return new RName{Kind=RKind.Free,Root=r.Root,Path=ns.Append(unique).ToArray(),Wrap=ns};}
                AddScope(path,leaf,false);return new RName{Kind=RKind.NsMember,Root=r.Root,Path=path.Append(leaf).ToArray(),Wrap=path};
            }
            string Assign(string stem,int arity,bool constructor){
                var name=stem;
                for(int k=2;forbidden.Contains(name)||taken.Contains((name,arity))||constructor&&taken.Contains((name+"_init",arity+1));k++)name=stem+"_"+k;
                taken.Add((name,arity));if(constructor)taken.Add((name+"_init",arity+1));return name;
            }
            if(usedTypes.Contains(Id(t)))r.Tokens[TypeInitName(t)]=Make(Assign("ensure_initialized",0,false));
            if(!free&&t.TypeParameters.Length==0&&SymbolEqualityComparer.Default.Equals(t.ContainingAssembly,compilation.Assembly))
                foreach(var f in t.GetMembers().OfType<IFieldSymbol>().Where(ReadableConstantField).OrderBy(Position)){
                    var name=Assign(CppIdentifier(f.Name),0,false);r.Tokens[ConstName(f)]=Make(name);readableConstDecls.Add((t,f,name));
                }
            foreach(var f in usedFields.Select(id=>fieldSymbols[id]).Where(f=>SymbolEqualityComparer.Default.Equals(f.ContainingType.OriginalDefinition,t)).OrderBy(TreeOf,StringComparer.Ordinal).ThenBy(Position).ThenBy(f=>Id(f),StringComparer.Ordinal)){
                var accessor=Assign(CppIdentifier(f.Name),0,false);r.Tokens[Name(f)]=Make(accessor);
                var storage=classMode||free?flat+"_"+accessor+"_storage":accessor+"_storage";var storagePath=classMode||free?ns:path;
                var unique=storage;for(int k=2;Taken(storagePath,unique);k++)unique=storage+"_"+k;AddScope(storagePath,unique,false);
                r.Tokens[Name(f)+"_value"]=new RName{Kind=RKind.Storage,Root=r.Root,Path=storagePath.Append(unique).ToArray(),Wrap=storagePath};
            }
            foreach(var m in emitted.Keys.Select(id=>methods[id]).Where(m=>SymbolEqualityComparer.Default.Equals(m.ContainingType.OriginalDefinition,t)).OrderBy(m=>m.MethodKind==MethodKind.Constructor?0:1).ThenBy(TreeOf,StringComparer.Ordinal).ThenBy(Position).ThenBy(m=>Id(m),StringComparer.Ordinal)){
                var constructor=m.MethodKind==MethodKind.Constructor;
                var arity=m.Parameters.Length+(!m.IsStatic&&!constructor&&!MemberMethod(m)?1:0);if(MemberMethod(m))memberTokens.Add(Name(m));
                // A4: an overload that collides with an earlier one of the same name and C++
                // arity takes a suffix from its parameter types where the group differs
                // (RateConvertFloat), never an ordinal; Assign numbers only a leftover clash.
                var stem=constructor?"create":CppIdentifier(m.Name);
                if(!constructor){
                    var group=emitted.Keys.Select(id=>methods[id]).Where(o=>SymbolEqualityComparer.Default.Equals(o.ContainingType.OriginalDefinition,t)&&o.Name==m.Name&&o.MethodKind==m.MethodKind&&CppArity(o)==arity)
                        .OrderBy(TreeOf,StringComparer.Ordinal).ThenBy(Position).ThenBy(o=>Id(o),StringComparer.Ordinal).ToList();
                    if(group.Count>1&&!SymbolEqualityComparer.Default.Equals(group[0],m))stem+=TypeSuffix(m,group);
                    // C# `new static M(...)` hiding an inherited instance M: C++ forbids a static
                    // member with the signature of a base virtual (and hides by name anyway), so
                    // the static one is named MStatic (LanguageForm.OnTouchEvent).
                    if(m.IsStatic){for(var b=t.BaseType;b!=null;b=b.BaseType)if(b.GetMembers(m.Name).OfType<IMethodSymbol>().Any(o=>!o.IsStatic)){stem+="Static";break;}}
                }
                var name=Assign(stem,arity,constructor);
                r.Tokens[Name(m)]=Make(name);
                if(constructor)r.Tokens[Name(m)+"_init"]=Make(name+"_init");
            }
        }
        foreach(var (token,name) in readableClosures)r.Tokens[token]=new RName{Kind=RKind.Closure,Root=r.Root,Path=new[]{name}};
        // Symbols of the other assembly (KairoLibrary, seen from the game).
        if(input.external_unit_manifest.Length!=0){
            var manifest=Path.Combine(Path.GetDirectoryName(input.external_unit_manifest)!,"readable_names.json");
            if(File.Exists(manifest)){
                using var document=JsonDocument.Parse(File.ReadAllText(manifest));
                var root=document.RootElement.GetProperty("root").GetString()!;
                foreach(var row in document.RootElement.GetProperty("tokens").EnumerateObject()){
                    if(r.Tokens.ContainsKey(row.Name))continue;
                    r.Tokens[row.Name]=new RName{Kind=Enum.Parse<RKind>(row.Value.GetProperty("kind").GetString()!),Root=root,Path=row.Value.GetProperty("path").EnumerateArray().Select(x=>x.GetString()!).ToArray()};
                }
                foreach(var row in document.RootElement.GetProperty("slot_doc_ids").EnumerateObject())r.SlotDocIds.TryAdd(row.Name,row.Value.GetString()!);
            }
        }
        // Class scopes: members visible inside a generated struct (and its bases)
        // and the injected class names that unqualified lookup finds first.
        foreach(var t in types.Values.Where(IsStruct)){
            var key=Key(TypePath(t));var members=new HashSet<string>(ObjectMemberNames,StringComparer.Ordinal);var injected=new Dictionary<string,string>(StringComparer.Ordinal){["Object"]="external:pls::cs::Object"};
            members.UnionWith(FieldNamesOf(t));
            foreach(var e in visibleSlots.GetValueOrDefault(Id(t))??new())members.Add(SlotName(e.key));
            foreach(var b in Chain(t)){
                // The class's own injected name hides a base's of the same name (C++).
                injected.TryAdd(typeNames[Id(b)],Key(TypePath(b)));
                foreach(var token in r.Tokens.Values.Where(n=>n.Kind==RKind.Member&&n.ClassKey==Key(TypePath(b))))members.Add(token.Leaf);
                var baseType=b.BaseType;if(baseType!=null&&!IsStruct(baseType.OriginalDefinition)){var native=NativeClass(baseType);var leaf=native.Split("::").Last().Split('<')[0];if(r.Tokens.TryGetValue(leaf,out var baseName))leaf=baseName.Leaf;injected.TryAdd(leaf,"external:"+native);}
            }
            // Only the direct source interfaces of each generated class are C++ bases.
            foreach(var b in Chain(t))foreach(var i in b.Interfaces.Where(i=>i.DeclaringSyntaxReferences.Length!=0&&types.ContainsKey(Id(i.OriginalDefinition))&&r.Tokens.TryGetValue(Name(i.OriginalDefinition),out var own)&&own.Root==r.Root))injected.TryAdd(typeNames[Id(i.OriginalDefinition)],Key(TypePath(i.OriginalDefinition)));
            r.ClassMembers[key]=members;r.ClassInjected[key]=injected;
        }
    }
    void WriteRegistry(string output){
        var r=registry!;
        var tokens=new SortedDictionary<string,object>(StringComparer.Ordinal);
        foreach(var (token,name) in r.Tokens)if(name.Root==r.Root)tokens[token]=new{kind=name.Kind.ToString(),path=name.Path};
        WriteStable(Path.Combine(output,"readable_names.json"),JsonSerializer.Serialize(new{format="readable-names-v1",root=r.Root,tokens,slot_doc_ids=new SortedDictionary<string,string>(r.SlotDocIds,StringComparer.Ordinal),unresolved_tokens=r.Unresolved.OrderBy(x=>x,StringComparer.Ordinal).ToArray()},new JsonSerializerOptions{WriteIndented=true})+"\n");
    }
    // Full name below the assembly root, as the differential harness spells it.
    string ReportName(string token){
        if(registry==null)return token;
        var m=Regex.Match(token,@"^(cs_[0-9a-f]{16})(_init)?(.*)$");
        if(m.Success&&registry.Tokens.TryGetValue(m.Groups[1].Value+m.Groups[2].Value,out var name)){
            var path=name.Kind is RKind.Field or RKind.Slot or RKind.Closure?name.Leaf:Key(name.Path);
            return (name.Root==registry.Root?"":name.Root+"::")+path+m.Groups[3].Value;
        }
        if(registry.Tokens.TryGetValue(token,out var direct))return Key(direct.Path);
        return token;
    }
    object ReadableReport(object report){
        var node=JsonSerializer.SerializeToNode(report)!.AsObject();
        void Rename(JsonNode? row,string field){
            if(row is not JsonObject obj||obj[field] is not JsonValue value||value.GetValueKind()!=JsonValueKind.String)return;
            var text=value.GetValue<string>();obj["oracle_name"]??=text;
            var accessor=text.EndsWith("()",StringComparison.Ordinal);var token=accessor?text[..^2]:text;
            obj[field]=ReportName(token)+(accessor?"()":"");
        }
        foreach(var listName in new[]{"emitted_methods","emitted_kairo_dependencies"})if(node[listName] is JsonArray list)foreach(var row in list){
            Rename(row,"cpp_name");
            if(row is JsonObject method&&method["concrete_cpp_type_arguments"] is JsonArray arguments)
                for(int i=0;i<arguments.Count;i++)arguments[i]=Regex.Replace(arguments[i]!.GetValue<string>(),@"\bcs_[0-9a-f]{16}\b",m=>ReportName(m.Value));
        }
        if(node["generated_classes"] is JsonArray generated)foreach(var row in generated){
            if(row is not JsonObject cls)continue;
            var full=cls["cpp_name"]!.GetValue<string>();var bracket=full.IndexOf('<');
            cls["oracle_name"]=full;cls["cpp_name"]=ReportName(bracket<0?full:full[..bracket])+(bracket<0?"":full[bracket..]);
            if(cls["fields"] is JsonArray fieldRows)foreach(var field in fieldRows)Rename(field,"cpp_name");
        }
        if(node["static_fields"] is JsonArray statics)foreach(var row in statics){
            if(row is not JsonObject field)continue;
            var token=field["cpp_name"]!.GetValue<string>();field["oracle_name"]=token;
            field["cpp_name"]=ReportName(token);field["cpp_accessor"]=ReportName(token)+"()";
        }
        if(node["type_initializers"] is JsonArray inits)foreach(var row in inits)Rename(row,"cpp_name");
        if(node["bootstrap"] is JsonObject boot)Rename(boot,"cpp_name");
        node["readable"]=true;node["readable_unresolved_tokens"]=new JsonArray(registry!.Unresolved.OrderBy(x=>x,StringComparer.Ordinal).Select(x=>(JsonNode)JsonValue.Create(x)!).ToArray());
        return node;
    }

    // ---------------------------------------------------------------- rewriting
    static readonly Regex HashToken=new(@"^cs_(?:(?:init|virtual|closure|const)_)?[0-9a-f]{16}(?:_init|_value)?$",RegexOptions.Compiled);
    // Lookup of `first` from the site must find exactly the intended entity
    // (scope `scope` holding a member `first`, or that class's injected name).
    bool Resolves(string first,bool scopeOnly,RSite site,string[] scope,string entityKey){
        var r=registry!;
        if(site.ClassKey!=null){
            if(r.ClassInjected.TryGetValue(site.ClassKey,out var injected)&&injected.TryGetValue(first,out var typeKey))return typeKey==entityKey;
            if(!scopeOnly&&r.ClassMembers.TryGetValue(site.ClassKey,out var members)&&members.Contains(first))return false;
        }
        for(int i=site.Ns.Length;i>=0;i--){
            var key=Key(site.Ns[..i]);
            if(r.Scopes.TryGetValue(key,out var members)&&members.TryGetValue(first,out var isScope)&&(!scopeOnly||isScope))return key==Key(scope);
        }
        return false;
    }
    string Qualified(RName name,RSite site,bool scopeFollows){
        var r=registry!;
        if(name.Root!=r.Root){
            // pls::generated::x from inside pls::game: `generated` is found in pls
            // unless some scope between the site and pls declares that name.
            var rootSegments=name.Root.Split("::");
            var shadowed=site.ClassKey!=null&&r.ClassInjected.GetValueOrDefault(site.ClassKey)?.ContainsKey(rootSegments[1])==true;
            for(int i=site.Ns.Length;i>=0&&!shadowed;i--)shadowed=r.Scopes.TryGetValue(Key(site.Ns[..i]),out var scope)&&scope.ContainsKey(rootSegments[1]);
            if(rootSegments.Length==2&&rootSegments[0]=="pls"&&!shadowed)
                return rootSegments[1]+"::"+Key(name.Path);
            return name.Root+"::"+Key(name.Path);
        }
        var path=name.Path;var minimum=name.Kind is RKind.Type or RKind.Storage?1:Math.Min(2,path.Length);
        for(int j=minimum;j<=path.Length;j++){
            var first=path[path.Length-j];var scope=path[..(path.Length-j)];var entity=Key(path[..(path.Length-j+1)]);
            if(Resolves(first,j>1||scopeFollows,site,scope,entity))return Key(path[(path.Length-j)..]);
        }
        return r.Root+"::"+Key(path);
    }
    sealed class BlockPlan {public RSite Site=new();public int ClassFrom;public int DeclIndex=-1;public string? DeclToken;public string? OwnStruct;public bool InClass;public string[] Wrap=Array.Empty<string>();}
    // Declarator of a generated top-level block: struct name, or the identifier
    // before the first ( { = ; outside template arguments.
    static (int index,string token,bool isStruct,int bodyOpen,int classQualifier) FindDeclarator(string block){
        int i=0;
        while(i<block.Length){
            if(char.IsWhiteSpace(block[i])){i++;continue;}
            if(block.AsSpan(i).StartsWith("//")){var end=block.IndexOf('\n',i);i=end<0?block.Length:end+1;continue;}
            if(block.AsSpan(i).StartsWith("/*")){var end=block.IndexOf("*/",i,StringComparison.Ordinal);i=end<0?block.Length:end+2;continue;}
            break;
        }
        var structMatch=Regex.Match(block[i..],@"^(?:template\s*<[^>]*>\s*)?struct\s+(\w+)");
        if(structMatch.Success)return (i+structMatch.Groups[1].Index,structMatch.Groups[1].Value,true,block.IndexOf('{',i),-1);
        int angle=0,paren=0,stop=-1;
        for(int k=i;k<block.Length;k++){
            var c=block[k];
            if(c=='<'){angle++;continue;}
            if(c=='>'&&k>0&&block[k-1]!='-'){angle--;continue;}
            if(angle>0)continue;
            if(c=='('&&paren==0||c=='{'||c=='='||c==';'){stop=k;break;}
        }
        if(stop<0)return (-1,"",false,-1,-1);
        int p=stop-1;while(p>=i&&char.IsWhiteSpace(block[p]))p--;
        if(p>=i&&block[p]=='>'){int depth=0;for(;p>=i;p--){if(block[p]=='>')depth++;else if(block[p]=='<'&&--depth==0){p--;break;}}while(p>=i&&char.IsWhiteSpace(block[p]))p--;}
        int e=p;while(p>=i&&(char.IsLetterOrDigit(block[p])||block[p]=='_'))p--;
        var token=block[(p+1)..(e+1)];var index=p+1;
        // R cs_Type<...>::member(  -> class-qualified out-of-line member.
        int q=p;
        if(q>=i+1&&block[q]==':'&&block[q-1]==':'){
            q-=2;while(q>=i&&char.IsWhiteSpace(block[q]))q--;
            if(q>=i&&block[q]=='>'){int depth=0;for(;q>=i;q--){if(block[q]=='>')depth++;else if(block[q]=='<'&&--depth==0){q--;break;}}}
            int qe=q;while(q>=i&&(char.IsLetterOrDigit(block[q])||block[q]=='_'))q--;
            return (q+1,block[(q+1)..(qe+1)],false,-1,q+1);
        }
        return (index,token,false,-1,-1);
    }
    BlockPlan Plan(string block,INamedTypeSymbol? owner,bool inClass){
        var r=registry!;var plan=new BlockPlan{InClass=inClass};
        var ownerWrap=owner==null?Array.Empty<string>():NsOf(owner);
        plan.Wrap=ownerWrap;plan.Site=new RSite{Ns=ownerWrap};plan.ClassFrom=block.Length;
        var (index,token,isStruct,bodyOpen,classQualifier)=FindDeclarator(block);
        if(token=="create_application"){plan.Wrap=Array.Empty<string>();plan.Site=new RSite();return plan;}
        if(index<0||!r.Tokens.TryGetValue(token,out var name))return plan;
        plan.DeclIndex=index;plan.DeclToken=token;
        if(isStruct||classQualifier>=0){
            if(name.Kind!=RKind.Type)return plan;
            plan.Wrap=name.Wrap;plan.OwnStruct=token;plan.Site=new RSite{Ns=name.Wrap,ClassKey=name.ClassKey};
            plan.ClassFrom=isStruct?(bodyOpen<0?block.Length:bodyOpen):index;
            return plan;
        }
        plan.Wrap=name.Wrap;
        if(name.Kind==RKind.Member){plan.Site=new RSite{Ns=name.Wrap,ClassKey=name.ClassKey};plan.ClassFrom=inClass?0:index;}
        else plan.Site=new RSite{Ns=name.Wrap};
        return plan;
    }
    string RenderDeclarator(RName name,BlockPlan plan){
        if(name.Kind==RKind.Member&&!plan.InClass)return name.Path[^2]+"::"+name.Leaf;
        return name.Leaf;
    }
    string Rewrite(string block,BlockPlan plan){
        var r=registry!;var output=new StringBuilder(block.Length);
        int i=0;
        while(i<block.Length){
            var c=block[i];var next=i+1<block.Length?block[i+1]:'\0';
            if(c=='/'&&next=='/'){var end=block.IndexOf('\n',i);end=end<0?block.Length:end;output.Append(block,i,end-i);i=end;continue;}
            if(c=='/'&&next=='*'){var end=block.IndexOf("*/",i+2,StringComparison.Ordinal);end=end<0?block.Length:end+2;output.Append(block,i,end-i);i=end;continue;}
            if(c=='"'||c=='\''){
                int k=i+1;bool escape=false;for(;k<block.Length;k++){if(escape){escape=false;continue;}if(block[k]=='\\'){escape=true;continue;}if(block[k]==c)break;}
                var literal=block[i..Math.Min(block.Length,k+1)];
                if(c=='"'&&literal.Length>2&&r.SlotDocIds.TryGetValue(literal[1..^1],out var docId))literal="\""+docId+"\"";
                output.Append(literal);i=k+1;continue;
            }
            if(char.IsLetter(c)||c=='_'){
                if(i>0&&(char.IsLetterOrDigit(block[i-1])||block[i-1]=='_')){output.Append(c);i++;continue;}
                int k=i;while(k<block.Length&&(char.IsLetterOrDigit(block[k])||block[k]=='_'))k++;
                var word=block[i..k];
                string? qualifier=null;int start=i;
                if(word=="pls"){
                    var m=Regex.Match(block[k..Math.Min(block.Length,k+64)],@"^::(game|generated)::(\w+)");
                    if(m.Success&&(HashToken.IsMatch(m.Groups[2].Value)||ReadableHelperNames.ContainsKey(m.Groups[2].Value))){
                        qualifier="pls::"+m.Groups[1].Value;i=k+m.Groups[0].Length-m.Groups[2].Length;k=i+m.Groups[2].Length;word=m.Groups[2].Value;
                    }
                }
                if(word=="cs_outer"){output.Append("self");i=k;continue;}
                if(word=="cs_this"){output.Append(plan.DeclToken!=null&&memberTokens.Contains(plan.DeclToken)?"this":"self");i=k;continue;}
                if(ReadableHelperNames.TryGetValue(word,out var helper)){output.Append(helper);i=k;continue;}
                if(HashToken.IsMatch(word)){
                    output.Append(RenderToken(word,qualifier,start,k,block,plan,output));i=k;continue;
                }
                if(qualifier!=null)output.Append(qualifier+"::");
                output.Append(word);i=k;continue;
            }
            output.Append(c);i++;
        }
        return output.ToString();
    }
    string RenderToken(string token,string? qualifier,int start,int end,string block,BlockPlan plan,StringBuilder output){
        var r=registry!;
        if(!r.Tokens.TryGetValue(token,out var name)){
            if(readableConstFallback.TryGetValue(token,out var fallback))return fallback.text;
            r.Unresolved.Add(token);return (qualifier==null?"":qualifier+"::")+token;
        }
        if(start==plan.DeclIndex&&token==plan.DeclToken&&plan.OwnStruct==null)return RenderDeclarator(name,plan);
        if(token==plan.OwnStruct)return name.Leaf;
        int b=output.Length-1;while(b>=0&&char.IsWhiteSpace(output[b]))b--;
        var member=qualifier==null&&b>=0&&(output[b]=='.'||output[b]=='~'||b>=1&&(output[b]=='>'&&output[b-1]=='-'||output[b]==':'&&output[b-1]==':'));
        if(member||name.Kind is RKind.Field or RKind.Slot or RKind.Closure)return name.Leaf;
        int a=end;while(a<block.Length&&char.IsWhiteSpace(block[a]))a++;
        var site=start>=plan.ClassFrom?plan.Site:new RSite{Ns=plan.Site.Ns};
        return Qualified(name,site,a+1<block.Length&&block[a]==':'&&block[a+1]==':');
    }
    // One generated declaration in its namespace: (wrap path, text).
    (string wrap,string text) ReadableBlock(string block,INamedTypeSymbol? owner,bool inClass=false){
        var plan=Plan(block,owner,inClass);
        return (Key(plan.Wrap),Rewrite(block,plan));
    }
    INamedTypeSymbol? StructOf(string block){
        var (index,token,isStruct,_,_)=FindDeclarator(block);
        return index>=0&&isStruct&&registry!.Tokens.TryGetValue(token,out var name)&&name.Kind==RKind.Type?TypeOfKey(name):null;
    }
    // Declaration of a static member of `structKey`, moved inside that struct.
    bool IsMemberOf(string block,string structKey){
        var (index,token,isStruct,_,classQualifier)=FindDeclarator(block);
        return index>=0&&!isStruct&&classQualifier<0&&registry!.Tokens.TryGetValue(token,out var name)&&name.Kind==RKind.Member&&name.ClassKey==structKey;
    }
    readonly Dictionary<string,INamedTypeSymbol> typesByKey=new(StringComparer.Ordinal);
    INamedTypeSymbol? TypeOfKey(RName name)=>typesByKey.GetValueOrDefault(Key(name.Path));
    int CppArity(IMethodSymbol m)=>m.Parameters.Length+(!m.IsStatic&&m.MethodKind!=MethodKind.Constructor&&!MemberMethod(m)?1:0);
    static string TypeWord(ITypeSymbol type)=>type switch{
        IArrayTypeSymbol array=>TypeWord(array.ElementType)+"Array",
        _ when type.SpecialType==SpecialType.System_Int32=>"Int",_ when type.SpecialType==SpecialType.System_Single=>"Float",
        _ when type.SpecialType==SpecialType.System_Double=>"Double",_ when type.SpecialType==SpecialType.System_Int64=>"Long",
        _ when type.SpecialType==SpecialType.System_Boolean=>"Bool",_ when type.SpecialType==SpecialType.System_String=>"String",
        _ when type.SpecialType==SpecialType.System_Byte=>"Byte",_ when type.SpecialType==SpecialType.System_Int16=>"Short",
        _ when type.SpecialType==SpecialType.System_Char=>"Char",_ when type.SpecialType==SpecialType.System_Object=>"Object",
        _=>CppIdentifier(type.Name)};
    // Parameter types of m at the positions where its overload group differs.
    static string TypeSuffix(IMethodSymbol m,List<IMethodSymbol> group){
        var words=new List<string>();
        for(int i=0;i<m.Parameters.Length;i++){
            var differs=group.Any(o=>i>=o.Parameters.Length||!SymbolEqualityComparer.Default.Equals(o.Parameters[i].Type,m.Parameters[i].Type)||o.Parameters[i].RefKind!=m.Parameters[i].RefKind);
            if(differs)words.Add((m.Parameters[i].RefKind==RefKind.None?"":"Ref")+TypeWord(m.Parameters[i].Type));
        }
        // Every differing position of the same type: that type once (RateConvertFloat).
        if(words.Count>1&&words.Distinct().Count()==1)return words[0];
        return words.Count==0?"Overload":String.Concat(words);
    }
    // Tokens of instance methods emitted as member functions (C2): no `static`.
    readonly HashSet<string> memberTokens=new(StringComparer.Ordinal);
    string MemberDeclaration(string block,string rewritten){var (_,token,_,_,_)=FindDeclarator(block);return memberTokens.Contains(token)?rewritten:StaticDeclaration(rewritten);}
    static string StaticDeclaration(string text){
        int i=0;
        while(i<text.Length){
            if(char.IsWhiteSpace(text[i])){i++;continue;}
            if(text.AsSpan(i).StartsWith("//")){var end=text.IndexOf('\n',i);i=end<0?text.Length:end+1;continue;}
            break;
        }
        if(text.AsSpan(i).StartsWith("template")){
            int open=text.IndexOf('<',i),depth=0,k=open;
            for(;k<text.Length;k++){if(text[k]=='<')depth++;else if(text[k]=='>'&&--depth==0)break;}
            return text[..(k+1)]+" static"+text[(k+1)..];
        }
        return text[..i]+"static "+text[i..];
    }
    static string InsertMembers(string structText,IEnumerable<string> members){
        var close=structText.LastIndexOf("};",StringComparison.Ordinal);
        var body=String.Concat(members);
        return close<0?structText+body:structText[..close]+body+structText[close..];
    }
    static string Namespaced(IEnumerable<(string wrap,string text)> blocks){
        var b=new StringBuilder();string? open=null;
        foreach(var (wrap,text) in blocks){
            if(wrap!=open){if(!String.IsNullOrEmpty(open))b.Append("} // namespace "+open+"\n");if(wrap.Length!=0)b.Append("namespace "+wrap+" {\n");open=wrap;}
            b.Append(text);if(!text.EndsWith('\n'))b.Append('\n');
        }
        if(!String.IsNullOrEmpty(open))b.Append("} // namespace "+open+"\n");
        return b.ToString();
    }
}
