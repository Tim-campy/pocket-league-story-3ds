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
        // Readable mode only: the same blocks, renamed, with their namespaces.
        public INamedTypeSymbol? Type;public string? StructKey;
        public (string wrap,string text)? RStruct;public List<string> RStructMembers=new();
        public List<(string wrap,string text)> RHeader=new(),RTemplates=new(),RCpp=new();
    }
    static void WriteStableBytes(string path,byte[] data){
        if(!File.Exists(path)||!File.ReadAllBytes(path).SequenceEqual(data))File.WriteAllBytes(path,data);
    }
    // Readable (A5): in a .cpp, each KairoLibrary namespace it uses gets one alias,
    // kl_<last segment> (two segments when the last one repeats), declared after the
    // includes; every reference to that namespace is spelled through it. The kl_ prefix
    // cannot meet a name of the game. Headers keep the full names.
    static (string text,string aliases) AliasLibraryNamespaces(string cpp){
        var pattern=new System.Text.RegularExpressions.Regex(@"(?<![\w:])(?:pls::)?generated::((?:[a-z][A-Za-z0-9_]*::)+)(?=[A-Za-z_])");
        var paths=pattern.Matches(cpp).Select(m=>m.Groups[1].Value.TrimEnd(':')).Distinct().OrderBy(x=>x,StringComparer.Ordinal).ToList();
        if(paths.Count==0)return (cpp,"");
        string Alias(string path,int segments)=>"kl_"+String.Join("_",path.Split("::").TakeLast(segments));
        var names=new Dictionary<string,string>(StringComparer.Ordinal);
        foreach(var path in paths){
            var count=path.Split("::").Length;var segments=1;
            while(segments<count&&paths.Count(o=>o!=path&&Alias(o,Math.Min(segments,o.Split("::").Length))==Alias(path,segments))>0)segments++;
            names[path]=Alias(path,segments);
        }
        if(names.Values.Distinct().Count()!=names.Count)return (cpp,"");
        var text=pattern.Replace(cpp,m=>names[m.Groups[1].Value.TrimEnd(':')]+"::");
        var aliases=new StringBuilder("\n");
        foreach(var path in paths)aliases.Append("namespace "+names[path]+" = pls::generated::"+path+";\n");
        return (text,aliases.Append('\n').ToString());
    }
    // Readable (A.4f): short names, in a .cpp, for the arrays of the basic C# types the tables
    // are made of (int[] -> IntArray, int[][] -> IntArray2, ...). One alias per type, declared
    // after the includes, used for every spelling of that type in the file; headers keep the
    // full names. Longest spelling first, so int[][] is not read as Array<int[]>.
    static readonly (string alias,string type)[] ArrayAliases={
        ("IntArray3","pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>"),
        ("IntArray2","pls::cs::Array<pls::cs::Array<pls::cs::Int32>>"),
        ("IntArray","pls::cs::Array<pls::cs::Int32>"),
        ("LongArray","pls::cs::Array<pls::cs::Int64>"),
        ("StringArray2","pls::cs::Array<pls::cs::Array<pls::cs::String>>"),
        ("StringArray","pls::cs::Array<pls::cs::String>"),
        ("FloatArray2","pls::cs::Array<pls::cs::Array<pls::cs::Single>>"),
        ("FloatArray","pls::cs::Array<pls::cs::Single>"),
        ("ByteArray","pls::cs::Array<std::uint8_t>"),
        ("BoolArray","pls::cs::Array<bool>"),
        ("ShortArray","pls::cs::Array<std::int16_t>")};
    static (string text,string aliases) AliasArrays(string cpp){
        var used=new List<(string alias,string type)>();
        foreach(var (alias,type) in ArrayAliases){
            if(Regex.IsMatch(cpp,@"(?<![\w:])"+Regex.Escape(alias)+@"(?![\w])"))return (cpp,"");
            var replaced=Regex.Replace(cpp,@"(?<![\w:])"+Regex.Escape(type)+@"(?![\w<])",alias);
            if(replaced!=cpp){used.Add((alias,type));cpp=replaced;}
        }
        if(used.Count==0)return (cpp,"");
        var text=new StringBuilder();
        // Declared in dependency order (IntArray before IntArray2, which spells it).
        foreach(var (alias,type) in used.AsEnumerable().Reverse())text.Append("using "+alias+" = "+type+";\n");
        return (cpp,text.Append("\n").ToString());
    }
    // ---- Readable A.4b: redundant parentheses ---------------------------------------------
    // The emitter wraps every operator it writes in parentheses; the parentheses the C#
    // source wrote come marked (CsParen, a private-use character, before the '('). This
    // pass reprints a readable unit without the unmarked pairs that C++ precedence makes
    // redundant, and drops the marks. It reads only text the emitter itself prints: binary
    // operators have one space on each side (a template '<' never has), unary operators
    // none. Whatever it cannot classify keeps its parentheses: casts, calls, statement
    // heads, lambdas, unary operands, comma groups, assignments, preprocessor lines, and
    // operators mixed across & | ^ << >> && || (which C++ compilers ask to keep).
    internal const char CsParen=(char)0xE000;
    static readonly Dictionary<string,int> CppBinary=new(StringComparer.Ordinal){
        ["*"]=13,["/"]=13,["%"]=13,["+"]=12,["-"]=12,["<<"]=11,[">>"]=11,["<"]=9,["<="]=9,[">"]=9,[">="]=9,
        ["=="]=8,["!="]=8,["&"]=7,["^"]=6,["|"]=5,["&&"]=4,["||"]=3,["?"]=2,[":"]=2,
        ["="]=2,["+="]=2,["-="]=2,["*="]=2,["/="]=2,["%="]=2,["<<="]=2,[">>="]=2,["&="]=2,["^="]=2,["|="]=2};
    static readonly HashSet<string> Bitwise=new(StringComparer.Ordinal){"&","|","^","<<",">>","&&","||"};
    const string OperatorChars="+-*/%<>=!&|^?:";
    static string ReadableParens(string text){
        int n=text.Length;var skip=new bool[n];var match=new int[n];Array.Fill(match,-1);
        // Opaque regions: string and character literals, comments, preprocessor lines.
        var opaque=new bool[n];
        for(int i=0;i<n;){
            char c=text[i];
            if(c=='"'||c=='\''){int j=i+1;while(j<n&&text[j]!=c){if(text[j]=='\\')j++;j++;}for(int k=i;k<=Math.Min(j,n-1);k++)opaque[k]=true;i=j+1;continue;}
            if(c=='/'&&i+1<n&&text[i+1]=='/'){int j=text.IndexOf('\n',i);if(j<0)j=n;for(int k=i;k<j;k++)opaque[k]=true;i=j;continue;}
            if(c=='/'&&i+1<n&&text[i+1]=='*'){int j=text.IndexOf("*/",i+2,StringComparison.Ordinal);j=j<0?n:j+2;for(int k=i;k<j;k++)opaque[k]=true;i=j;continue;}
            if(c=='#'&&(i==0||text[i-1]=='\n')){int j=i;while(true){j=text.IndexOf('\n',j);if(j<0){j=n;break;}if(text[j-1]=='\\'){j++;continue;}break;}for(int k=i;k<j;k++)opaque[k]=true;i=j;continue;}
            i++;
        }
        var stack=new Stack<int>();
        for(int i=0;i<n;i++){
            if(opaque[i])continue;
            if(text[i]=='(')stack.Push(i);
            else if(text[i]==')'){if(stack.Count==0)return Strip(text);var o=stack.Pop();match[o]=i;match[i]=o;}
        }
        if(stack.Count!=0)return Strip(text);
        int PrevIndex(int i){i--;while(i>=0&&(text[i]==' '||text[i]==CsParen))i--;return i;}
        int NextIndex(int i){i++;while(i<n&&text[i]==' ')i++;return i;}
        char FirstChar(int open,int close){for(int i=open+1;i<close;i++)if(text[i]!=' '&&text[i]!=CsParen)return text[i];return ' ';}
        static bool Ident(char c)=>char.IsLetterOrDigit(c)||c=='_';
        // A spaced binary operator (" op ") that ends right before `start`, or null.
        string? OpBefore(int start){
            int e=start-1;if(e<0||text[e]!=' ')return null;int s=e-1;while(s>=0&&OperatorChars.IndexOf(text[s])>=0)s--;
            if(s==e-1||s<0||text[s]!=' ')return null;var op=text.Substring(s+1,e-s-1);return CppBinary.ContainsKey(op)?op:null;
        }
        // A spaced binary operator that starts right after `end`, or null.
        string? OpAfter(int end){
            int b=end+1;if(b>=n||text[b]!=' ')return null;int e=b+1;while(e<n&&OperatorChars.IndexOf(text[e])>=0)e++;
            if(e==b+1||e>=n||text[e]!=' ')return null;var op=text.Substring(b+1,e-b-1);return CppBinary.ContainsKey(op)?op:null;
        }
        // What the group holds: its lowest top-level operator (99 = none: an operand), whether
        // it starts with a unary operator or a cast-like '(' (unary), whether it is exactly
        // one inner group (group), and comma/lambda content (prec 0).
        (int prec,string? op,bool unary,bool group) Inside(int open,int close){
            int lo=99;string? lowOp=null;int depth=0;bool first=true,unary=false,group=false;
            for(int i=open+1;i<close;i++){
                if(opaque[i])continue;char c=text[i];
                if(first&&c!=' '&&c!=CsParen){
                    first=false;
                    if("-+!~*&".IndexOf(c)>=0)unary=true;
                    if(c=='[')return (0,",",false,false);
                    if(c=='('){if(NextIndex(match[i])>=close)group=true;else if(OpAfter(match[i])==null)return (0,",",false,false);}   // (T)x is a cast; (a) op b an operand
                }
                if(c=='('||c=='['||c=='{')depth++;
                else if(c==')'||c==']'||c=='}')depth--;
                else if(depth==0&&c==',')return (0,",",unary,false);
                else if(depth==0&&c==' '){
                    int e=i+1;while(e<close&&OperatorChars.IndexOf(text[e])>=0)e++;
                    if(e>i+1&&e<close&&text[e]==' '){var op=text.Substring(i+1,e-i-1);if(!CppBinary.TryGetValue(op,out var p))return (0,",",unary,false);if(p<lo){lo=p;lowOp=op;}i=e-1;}
                }
                else if(depth==0&&OperatorChars.IndexOf(c)>=0){
                    // Unspaced: only -> :: and a unary prefix (after a space or an opening) are
                    // understood; anything else (a template '<', a+b, a pointer '*') keeps the group.
                    if(c==':'&&i+1<close&&text[i+1]==':'){i++;continue;}
                    if(c=='-'&&i+1<close&&text[i+1]=='>'){i++;continue;}
                    var before=text[i-1];
                    if(before is ' ' or '(' or CsParen&&"-+!~*&".IndexOf(c)>=0)continue;
                    if(i==open+1&&"-+!~*&".IndexOf(c)>=0)continue;
                    if("-+!~*&".IndexOf(c)>=0&&OperatorChars.IndexOf(before)>=0&&before!='>')continue;
                    return (0,",",unary,false);
                }
            }
            return (lo,lowOp,unary,group);
        }
        // The group's surroundings: operator precedence on each side (1 = a delimiter such as
        // '(' ',' ';', 15 = a unary operator before it, 16 = a postfix operator after it), and
        // whether it is a grouping parenthesis at all (not a call, cast or statement head).
        (int left,string? leftOp,int right,string? rightOp,bool grouping) Context(int open,int close){
            var start=open>0&&text[open-1]==CsParen?open-1:open;
            int p=PrevIndex(open);string? lop=OpBefore(start);var leftPrec=1;bool grouping=true;
            if(lop!=null)leftPrec=CppBinary[lop];
            else if(p>=0){
                char c=text[p];
                if(Ident(c)){int s=p;while(s>=0&&Ident(text[s]))s--;var word=text.Substring(s+1,p-s);if(word is "return" or "throw" or "case")leftPrec=1;else grouping=false;}
                else if(c is ')' or ']' or '>' or '}' or '"' or '\'')grouping=false;   // also {...}(): the call of a lambda
                else if(c is '(' or ',' or '[' or '{' or ';' or '\n')leftPrec=1;
                else leftPrec=15;
            }
            if(NextIndex(open)>=close)grouping=false;   // () is always a call
            int q=NextIndex(close);string? rop=OpAfter(close);var rightPrec=1;
            if(rop!=null)rightPrec=CppBinary[rop];
            else if(q<n){
                char c=text[q];
                if(c is ')' or ',' or ';' or ']' or '}')rightPrec=1;
                else if(c=='-'&&q+1<n&&text[q+1]=='>'||c is '.' or '[' or '(')rightPrec=16;
                else grouping=false;
            }else rightPrec=1;
            return (leftPrec,lop,rightPrec,rop,grouping);
        }
        void Decide(int open,int leftPrec,string? leftOp,int rightPrec,string? rightOp){
            int close=match[open];var marked=open>0&&text[open-1]==CsParen;
            var inside=Inside(open,close);var remove=false;
            if(!marked){
                if(inside.group)remove=true;
                else if(inside.prec==0)remove=false;
                else if(inside.unary)remove=inside.prec==99&&leftPrec<15&&rightPrec<16
                    &&!("-+".IndexOf(FirstChar(open,close))>=0&&leftOp is "-" or "+");
                else if(inside.prec==99)remove=true;
                else if(inside.prec==2)remove=inside.op=="?"&&leftPrec==1&&rightPrec==1;
                else{
                    var mixed=Warns(inside.op!,leftOp)||Warns(inside.op!,rightOp);
                    remove=!mixed&&inside.prec>leftPrec&&inside.prec>=rightPrec&&rightPrec<16;
                }
            }
            if(remove){skip[open]=true;skip[close]=true;}
            for(int i=open+1;i<close;i++){
                if(opaque[i]||text[i]!='('||match[i]<0)continue;
                // A group that fills this removed one takes this one's surroundings.
                if(remove&&inside.group)Decide(i,leftPrec,leftOp,rightPrec,rightOp);
                else{var child=Context(i,match[i]);if(child.grouping)Decide(i,child.left,child.leftOp,child.right,child.rightOp);else Walk(i+1,match[i]);}
                i=match[i];
            }
        }
        void Walk(int from,int to){
            for(int i=from;i<to;i++){
                if(opaque[i]||text[i]!='('||match[i]<0)continue;
                var context=Context(i,match[i]);
                if(context.grouping)Decide(i,context.left,context.leftOp,context.right,context.rightOp);else Walk(i+1,match[i]);
                i=match[i];
            }
        }
        Walk(0,n);
        var output=new StringBuilder(n);
        for(int i=0;i<n;i++)if(!skip[i]&&!(text[i]==CsParen&&!opaque[i]))output.Append(text[i]);
        return output.ToString();
    }
    static string Strip(string text)=>text.Replace(CsParen.ToString(),"");
    // Pairs C++ compilers warn about without parentheses (-Wparentheses): && inside ||,
    // & | ^ mixed with each other or with any other operator, arithmetic inside a shift,
    // and a comparison inside a comparison. Those parentheses stay.
    static readonly HashSet<string> BitOps=new(StringComparer.Ordinal){"&","|","^"};
    static readonly HashSet<string> Comparisons=new(StringComparer.Ordinal){"<","<=",">",">=","==","!="};
    static bool Warns(string inner,string? context){
        if(context==null||context==inner&&!Comparisons.Contains(inner))return false;
        if(inner=="&&"&&context=="||")return true;
        if(BitOps.Contains(inner)||BitOps.Contains(context))return true;
        if(inner is "+" or "-" or "*" or "/" or "%"&&context is "<<" or ">>")return true;
        return Comparisons.Contains(inner)&&Comparisons.Contains(context);
    }
    // A.4d: the inline member forwarders of a generic KairoLibrary class call their free
    // function unqualified (found by argument-dependent lookup on `this` when the template
    // is instantiated, after the function's declaration). The emitter marks them /*fwd*/.
    static string UnqualifyForwarders(string text)=>Regex.Replace(text,@"/\*fwd\*/ (?:\w+::)*(\w+)\(","$1(");
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
        TypeUnit Unit(INamedTypeSymbol type){var id=Id(type.OriginalDefinition);if(!units.TryGetValue(id,out var unit))units[id]=unit=new TypeUnit{Id=id,Stem=readable?registry!.TypeStems[id]:basename+"_type_"+Hash(id),Type=type.OriginalDefinition};return unit;}
        var owners=new Dictionary<string,TypeUnit>(StringComparer.Ordinal);
        foreach(var id in usedClasses){var type=classes[id];owners[Name(type)]=Unit(type);
            foreach(var field in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))owners[Name(field)]=Unit(type);
        }
        foreach(var id in emitted.Keys){var method=methods[id];owners[Name(method)]=Unit(method.ContainingType);owners[Name(method)+"_init"]=Unit(method.ContainingType);}
        foreach(var id in usedFields){var field=fieldSymbols[id];owners[Name(field)]=Unit(field.ContainingType);owners[Name(field)+"_value"]=Unit(field.ContainingType);}
        foreach(var id in usedTypes){var type=initializedTypes[id];owners[TypeInitName(type)]=Unit(type);owners[TypeInitName(type)+"_slow"]=Unit(type);}
        if(bootstrap!=null&&emitted.ContainsKey(Id(bootstrap)))owners["create_application"]=Unit(bootstrap.ContainingType);
        string WithoutComments(string value)=>Regex.Replace(value,@"//[^\n]*|/\*.*?\*/","",RegexOptions.Singleline).Trim();
        TypeUnit? DeclarationOwner(string block){
            var clean=WithoutComments(block);
            // new T() overloads belong to the closed class they construct.
            var newInstance=Regex.Match(clean,@"\bcs_new_instance\s*\(\s*pls::cs::Ref<(cs_[0-9a-f]{16})>\s*\*");
            if(newInstance.Success)return owners.GetValueOrDefault(newInstance.Groups[1].Value);
            var structure=Regex.Match(clean,@"^(?:template\s*<[^>]*>\s*)?struct\s+(\w+)");
            if(structure.Success)return owners.GetValueOrDefault(structure.Groups[1].Value);
            var member=Regex.Match(clean,@"\b(cs_[0-9a-f]{16})(?:<[^<>;{}()]*>)?::\w+\s*\(");
            if(member.Success)return owners.GetValueOrDefault(member.Groups[1].Value);
            foreach(Match match in Regex.Matches(clean,@"\b(cs_(?:init_)?[0-9a-f]{16}(?:_init|_value|_slow)?|create_application)\b")){
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
        var readableForward=new List<(string wrap,string text)>();var readableCommon=new List<(string wrap,string text)>();
        foreach(var block in TopLevelDeclarations(headerBody)){
            var clean=WithoutComments(block);var owner=DeclarationOwner(block);
            if(Regex.IsMatch(clean,@"^(?:template\s*<[^>]*>\s*)?struct\s+\w+\s*;\s*$")){forward.Append(block);if(readable)readableForward.Add(ReadableBlock(block,null));continue;}
            if(owner==null){common.Append(block);if(readable)readableCommon.Add(ReadableBlock(block,null));continue;}
            var isStructure=Regex.IsMatch(clean,@"^(?:template\s*<[^>]*>\s*)?struct\b");
            if(!isStructure&&clean.Contains('{')){
                if(clean.StartsWith("template",StringComparison.Ordinal)){owner.Templates.Append(block);if(readable)owner.RTemplates.Add(ReadableBlock(block,owner.Type));}
                else{var definition=Regex.Replace(block,@"\binline\s+","");owner.Cpp.Append(definition);if(readable)owner.RCpp.Add(ReadableBlock(definition,owner.Type));}
            }else{
                owner.Header.Append(block);
                if(readable){
                    if(isStructure&&StructOf(block) is INamedTypeSymbol structure&&Id(structure)==owner.Id){owner.RStruct=ReadableBlock(block,structure);owner.StructKey=registry!.Tokens[Name(structure)].ClassKey;}
                    else if(owner.StructKey!=null&&IsMemberOf(block,owner.StructKey))owner.RStructMembers.Add(MemberDeclaration(block,ReadableBlock(block,owner.Type,true).text));
                    else owner.RHeader.Add(ReadableBlock(block,owner.Type));
                }
            }
        }
        foreach(var block in TopLevelDeclarations(cppBody)){
            var owner=DeclarationOwner(block)??throw new InvalidOperationException("Generated definition has no declaring type: "+WithoutComments(block)[..Math.Min(150,WithoutComments(block).Length)]);
            owner.Cpp.Append(block);if(readable)owner.RCpp.Add(ReadableBlock(block,owner.Type));
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
        void Write(string name,string text){if(readable)text=ReadableParens(UnqualifyForwarders(text));generated.AddRange(WriteGenerated(input.output,name,text,input.chunk_bytes));}
        string Includes(IEnumerable<string> names)=>String.Concat(names.Distinct().OrderBy(x=>x,StringComparer.Ordinal).Select(name=>"#include \""+name+"\"\n"));
        string RuntimeIncludes(string value)=>(value.Contains("pls::cs::math_min_single",StringComparison.Ordinal)?"#include \"managed_math.hpp\"\n":"")+(value.Contains("pls::cs::floating_to_string",StringComparison.Ordinal)?"#include \"managed_float_format.hpp\"\n":"");
        string Wrap(string text)=>"namespace "+ns+" {\n"+text+"}\n";
        var banner="// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.\n";
        if(readable)banner="// GENERATED (readable mode) by translator/Translator.cs from the reconstructed C#. Do not edit.\n";
        Write(basename+"_runtime.hpp",runtimePrefix+Wrap(readable?Namespaced(readableCommon):common.ToString()));
        Write(basename+"_forward.hpp",banner+"#pragma once\n"+Includes(new[]{basename+"_runtime.hpp"})+Wrap(readable?Namespaced(readableForward):forward.ToString()));
        // Readable pass 2 (C4): members in C# source order. A block carries its
        // method DocID in a "// M:..." comment; blocks without one (storage,
        // type initializer, trace/release) keep their place before the methods.
        int SourceKey(string text){
            var m=Regex.Match(text,@"//\s*(M:[^\s]+)");
            if(!m.Success||!methods.TryGetValue(m.Groups[1].Value,out var symbol))return -1;
            var location=symbol.Locations.FirstOrDefault(l=>l.IsInSource);return location==null?-1:location.SourceSpan.Start;
        }
        if(readable)foreach(var group in readableConstDecls.GroupBy(d=>Id(d.type),StringComparer.Ordinal)){
            if(!units.TryGetValue(group.Key,out var constUnit))continue;
            var structMembers=new List<string>();var headerBlocks=new List<(string wrap,string text)>();
            foreach(var (_,field,constName) in group){
                var value=ReadableConstantValue(field);var type=ConstantCppType(field.Type);
                if(constUnit.RStruct!=null)structMembers.Add("static constexpr "+type+" "+constName+" = "+value+";");
                else headerBlocks.Add((Key(registry!.Tokens[ConstName(field)].Wrap),"inline constexpr "+type+" "+constName+" = "+value+";\n"));
            }
            constUnit.RStructMembers.InsertRange(0,structMembers);constUnit.RHeader.InsertRange(0,headerBlocks);
        }
        if(readable)foreach(var unit in units.Values){
            var ordered=unit.RCpp.Select((block,index)=>(block,index,key:SourceKey(block.text))).OrderBy(x=>x.key<0?-1:0).ThenBy(x=>x.key<0?x.index:x.key).ThenBy(x=>x.index).Select(x=>x.block).ToList();
            unit.RCpp.Clear();unit.RCpp.AddRange(ordered);
            var rank=new Dictionary<string,int>(StringComparer.Ordinal);int position=0;
            foreach(var block in ordered){var name=Regex.Match(block.text,@"::(\w+)\s*\(");if(name.Success&&!rank.ContainsKey(name.Groups[1].Value))rank[name.Groups[1].Value]=position++;}
            int MemberRank(string declaration){var name=Regex.Match(declaration,@"(\w+)\s*\(");return name.Success&&rank.TryGetValue(name.Groups[1].Value,out var value)?value:-1;}
            var members=unit.RStructMembers.Select((text,index)=>(text,index,key:MemberRank(text))).OrderBy(x=>x.key<0?-1:0).ThenBy(x=>x.key<0?x.index:x.key).ThenBy(x=>x.index).Select(x=>x.text).ToList();
            unit.RStructMembers.Clear();unit.RStructMembers.AddRange(members);
        }
        foreach(var unit in units.Values){
            var readableHeader=new List<(string wrap,string text)>();
            if(unit.RStruct is (string structWrap,string structText))readableHeader.Add((structWrap,InsertMembers(structText,unit.RStructMembers)));
            readableHeader.AddRange(unit.RHeader);
            Write(unit.Stem+".hpp",banner+"#pragma once\n"+Includes(new[]{basename+"_forward.hpp"}.Concat(unit.Layout))+Wrap(readable?Namespaced(readableHeader):unit.Header.ToString()));
            var content=unit.Cpp.ToString();var headers=DependencyHeaders(content+unit.Header,unit).Concat(unit.BodyHeaders).Append(unit.Stem+".hpp").ToArray();
            if(readable)headers=headers.Concat(Regex.Matches(content,@"\bcs_const_[0-9a-f]{16}\b").Select(m=>m.Value).Distinct()
                .Where(marker=>registry!.Tokens.ContainsKey(marker)&&readableConstFallback.TryGetValue(marker,out var info)&&units.ContainsKey(info.owner))
                .Select(marker=>units[readableConstFallback[marker].owner].Stem+".hpp")).ToArray();
            var templates=DependencyTemplates(content+unit.Header,unit).Distinct().ToArray();
            var unitBody=Wrap(readable?Namespaced(unit.RCpp):content);
            var aliases="";if(readable){(unitBody,aliases)=AliasLibraryNamespaces(unitBody);var arrays="";(unitBody,arrays)=AliasArrays(unitBody);aliases+=arrays;}
            Write(unit.Stem+".cpp",banner+Includes(headers)+Includes(templates)+RuntimeIncludes(content)+aliases+unitBody);
            if(unit.Templates.Length!=0){var template=unit.Templates.ToString();
                Write(unit.Stem+"_templates.hpp",banner+"#pragma once\n"+Includes(DependencyHeaders(template,unit).Concat(unit.BodyHeaders).Append(unit.Stem+".hpp"))+Includes(DependencyTemplates(template,unit).Where(name=>name!=unit.Stem+"_templates.hpp"))+RuntimeIncludes(template)+Wrap(readable?Namespaced(unit.RTemplates):template));
            }
        }
        Write(basename+".hpp",banner+"#pragma once\n"+Includes(new[]{basename+"_forward.hpp"}.Concat(units.Values.Select(unit=>unit.Stem+".hpp")))+Includes(units.Values.Where(unit=>unit.Templates.Length!=0).Select(unit=>unit.Stem+"_templates.hpp")));
        Write(basename+".cpp",banner+"// Compatibility anchor; definitions live exclusively in the per-type units.\n");
        var manifest=new{format="declaring-type-units-v1",units=units.Values.Select(unit=>new{id=unit.Id,header=unit.Stem+".hpp",cpp=unit.Stem+".cpp",templates=unit.Templates.Length==0?null:unit.Stem+"_templates.hpp",layout_headers=unit.Layout.OrderBy(x=>x).ToArray()}).ToArray(),symbols=owners.OrderBy(pair=>pair.Key).ToDictionary(pair=>pair.Key,pair=>new{header=pair.Value.Stem+".hpp",templates=pair.Value.Templates.Length==0?null:pair.Value.Stem+"_templates.hpp"})};
        WriteStable(Path.Combine(input.output,"emission_units.json"),JsonSerializer.Serialize(manifest,new JsonSerializerOptions{WriteIndented=true})+"\n");
        // Only remove obsolete files with this producer's exact reserved stem.
        foreach(var file in Directory.GetFiles(input.output,readable?"*":basename+"*"))if((Path.GetExtension(file) is ".cpp" or ".hpp" or ".inc")&&!generated.Contains(Path.GetFileName(file))&&!(readable&&Path.GetFileName(file).StartsWith("bootstrap_",StringComparison.Ordinal)))File.Delete(file);
        return generated.ToArray();
    }
}
