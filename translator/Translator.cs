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
    public Unsupported(SyntaxNode node, string reason) : base(reason) {Kind=node.Kind().ToString();}
}
sealed class Request {
    public string assembly {get;set;}="KairoLibrary";
    public string[] sources {get;set;}=Array.Empty<string>();
    public string[] references {get;set;}=Array.Empty<string>();
    public string[] selected {get;set;}=Array.Empty<string>();
    public string[] check_symbols {get;set;}=Array.Empty<string>();
    public bool diagnostics_only {get;set;}
    public bool select_all_source_methods {get;set;}
    public string output {get;set;}="";
}
sealed class Lowerer {
    readonly CSharpCompilation compilation;
    readonly Dictionary<string,IMethodSymbol> methods=new();
    readonly Dictionary<string,BaseMethodDeclarationSyntax> syntax=new();
    readonly Dictionary<string,INamedTypeSymbol> classes=new();
    readonly Dictionary<string,HashSet<string>> classDependencies=new();
    readonly Dictionary<string,string> emitted=new();
    readonly Dictionary<string,object> rejected=new();
    readonly Dictionary<string,string> fields=new();
    readonly Dictionary<string,IFieldSymbol> fieldSymbols=new();
    readonly Dictionary<string,HashSet<string>> dependencies=new();
    readonly Dictionary<string,HashSet<string>> fieldDependencies=new();
    readonly HashSet<string> active=new();
    readonly Dictionary<string,Dictionary<string,int>> methodKinds=new();
    SemanticModel model=null!;
    string current="";
    int temporary;
    bool hoistLocals;
    public Lowerer(CSharpCompilation c) {
        compilation=c;
        foreach(var tree in c.SyntaxTrees) {
            var m=c.GetSemanticModel(tree);
            foreach(var d in tree.GetRoot().DescendantNodes().OfType<BaseMethodDeclarationSyntax>()) {
                var s=m.GetDeclaredSymbol(d) as IMethodSymbol; if(s==null||s.MethodKind==MethodKind.StaticConstructor)continue;
                var id=Id(s); methods[id]=s;syntax[id]=d;
            }
        }
    }
    static string Id(ISymbol symbol)=>symbol.OriginalDefinition.GetDocumentationCommentId()??symbol.ToDisplayString();
    static string Hash(string s)=>Convert.ToHexString(SHA256.HashData(Encoding.UTF8.GetBytes(s))).Substring(0,16).ToLowerInvariant();
    static string Name(ISymbol symbol)=>"cs_"+Hash(Id(symbol));
    static string ClassName(INamedTypeSymbol type)=>Name(type)+(type.TypeArguments.Length==0?"":"<"+String.Join(",",type.TypeArguments.Select(TypeName))+">");
    static string Template(IEnumerable<ITypeParameterSymbol> parameters) {var p=parameters.ToArray();return p.Length==0?"":"template<"+String.Join(",",p.Select(t=>"typename T_"+t.Name))+">\n";}
    static bool SystemList(ITypeSymbol? t)=>t is INamedTypeSymbol n&&n.OriginalDefinition.ToDisplayString()=="System.Collections.Generic.List<T>";
    static string Local(ISymbol symbol)=>"v_"+symbol.Name.TrimStart('@')+(symbol is ILocalSymbol?"_"+symbol.DeclaringSyntaxReferences.FirstOrDefault()?.Span.Start:"");
    static string TypeName(ITypeSymbol? t) {
        if(t is IArrayTypeSymbol a) {
            if(a.Rank!=1)throw new InvalidOperationException("rectangular array rank is not lowered");
            return "pls::cs::Array<"+TypeName(a.ElementType)+">";
        }
        if(t is ITypeParameterSymbol tp)return "T_"+tp.Name;
        if(SystemList(t))return "pls::cs::List<"+TypeName(((INamedTypeSymbol)t!).TypeArguments[0])+">";
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
            case SpecialType.None when t is INamedTypeSymbol named&&PlainClass(named):return "pls::cs::Ref<"+ClassName(named)+">";
            default:throw new InvalidOperationException("type not lowered: "+t?.ToDisplayString());
        }
    }
    static bool PlainClass(INamedTypeSymbol t)=>t.TypeKind==TypeKind.Class&&t.DeclaringSyntaxReferences.Length!=0&&!t.IsGenericType&&!t.IsStatic&&t.ContainingType==null&&t.BaseType?.SpecialType==SpecialType.System_Object;
    void RequireClass(INamedTypeSymbol type,SyntaxNode node) {
        if(!PlainClass(type))throw new Unsupported(node,"class inheritance/generic layout not lowered: "+type.ToDisplayString());
        type=type.OriginalDefinition;
        var id=Id(type);classDependencies[current].Add(id);if(classes.ContainsKey(id))return;
        classes[id]=type;
        try {foreach(var field in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))Type(field.Type,node);}
        catch {classes.Remove(id);throw;}
    }
    string Type(ITypeSymbol? t,SyntaxNode node) {
        try {
            if(t is IArrayTypeSymbol array)Type(array.ElementType,node);
            if(SystemList(t))Type(((INamedTypeSymbol)t!).TypeArguments[0],node);
            if(t is INamedTypeSymbol named&&PlainClass(named))RequireClass(named,node);
            return TypeName(t);
        }catch(InvalidOperationException e){throw new Unsupported(node,e.Message);}
    }
    static bool Integral(ITypeSymbol? t)=>t!=null&&new[]{SpecialType.System_Byte,SpecialType.System_SByte,SpecialType.System_Int16,SpecialType.System_UInt16,SpecialType.System_Char,SpecialType.System_Int32,SpecialType.System_UInt32,SpecialType.System_Int64,SpecialType.System_UInt64}.Contains(t.SpecialType);
    static string NumericSuffix(ITypeSymbol? t)=>t?.SpecialType switch {
        SpecialType.System_Int32=>"i32",SpecialType.System_UInt32=>"u32",SpecialType.System_Int64=>"i64",SpecialType.System_UInt64=>"u64",_=>""};
    void Used(SyntaxNode n){var kind=n.Kind().ToString();var counts=methodKinds[current];counts[kind]=counts.GetValueOrDefault(kind)+1;}
    string Cast(string value,ITypeSymbol? from,ITypeSymbol? to,SyntaxNode node) {
        if(to==null||SymbolEqualityComparer.Default.Equals(from,to))return value;
        if(Integral(from)&&Integral(to))return "pls::cs::cast_integral<"+Type(to,node)+">("+value+")";
        if((to.SpecialType==SpecialType.System_Single||to.SpecialType==SpecialType.System_Double)&& (Integral(from)||from?.SpecialType==SpecialType.System_Single||from?.SpecialType==SpecialType.System_Double))return "static_cast<"+Type(to,node)+">("+value+")";
        if(Integral(to)&&(from?.SpecialType==SpecialType.System_Single||from?.SpecialType==SpecialType.System_Double))throw new Unsupported(node,"floating-to-integral conversion requires target CLR overflow contract");
        if(to.SpecialType==SpecialType.System_Object) {
            Type(from,node);return "pls::cs::box("+value+")";
        }
        if(from?.SpecialType==SpecialType.System_Object) return "pls::cs::unbox<"+Type(to,node)+">("+value+")";
        if(from!=null&&!SymbolEqualityComparer.Default.Equals(from,to)&&from.IsReferenceType&&to.IsReferenceType)throw new Unsupported(node,"reference covariance/interface conversion not lowered");
        Type(to,node);return value;
    }
    string Constant(object? value,ITypeSymbol? type,SyntaxNode node) {
        if(value==null)return Type(type,node)+"{}";
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
        if(field.ContainingType.ToDisplayString()=="System.BitConverter"&&field.Name=="IsLittleEndian")return "cs_is_little_endian()";
        if(!field.IsStatic) {
            RequireClass(field.ContainingType,site);
            var receiver=site is MemberAccessExpressionSyntax member?Expr(member.Expression):"cs_this";
            return "([&]() { auto cs_receiver = "+receiver+"; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->"+Name(field)+"; }())";
        }
        var id=Id(field);fieldDependencies[current].Add(id);
        if(!fields.ContainsKey(id)) {
            var d=field.DeclaringSyntaxReferences.FirstOrDefault()?.GetSyntax() as VariableDeclaratorSyntax;
            if(d==null)throw new Unsupported(site,"external nonconstant static field not lowered");
            var saved=model;model=compilation.GetSemanticModel(d.SyntaxTree);
            fieldSymbols[id]=field;fields[id]="";
            try {fields[id]=Type(field.Type,d)+" "+Name(field)+" = "+(d.Initializer==null?Type(field.Type,d)+"{}":Converted(d.Initializer.Value,field.Type))+";";}
            catch {fields.Remove(id);fieldSymbols.Remove(id);throw;}
            finally{model=saved;}
        }
        return Name(field);
    }
    string Converted(ExpressionSyntax node,ITypeSymbol? to) {
        return Cast(Expr(node),model.GetTypeInfo(node).Type,to,node);
    }
    string Expr(ExpressionSyntax n) {
        if(compilation.AssemblyName=="Assembly-CSharp"&&n is InitializerExpressionSyntax content&&content.Expressions.Any(e=>Integral(model.GetTypeInfo(e).Type)))throw new Unsupported(n,"numeric initializer requires local pipeline/content-policy classification before game emission");
        Used(n);
        var constant=model.GetConstantValue(n);
        if(constant.HasValue)return Constant(constant.Value,model.GetTypeInfo(n).Type??model.GetTypeInfo(n).ConvertedType,n);
        switch(n) {
            case ThisExpressionSyntax _:return "cs_this";
            case ParenthesizedExpressionSyntax p:return "("+Expr(p.Expression)+")";
            case IdentifierNameSyntax id:
                var symbol=model.GetSymbolInfo(id).Symbol;
                if(symbol is ILocalSymbol||symbol is IParameterSymbol)return Local(symbol);
                if(symbol is IFieldSymbol field)return StaticField(field,id);
                throw new Unsupported(n,"identifier is not a supported local/parameter/static field");
            case LiteralExpressionSyntax lit when lit.IsKind(SyntaxKind.NullLiteralExpression):return Type(model.GetTypeInfo(lit).ConvertedType,lit)+"{}";
            case CastExpressionSyntax cast:return Cast(Expr(cast.Expression),model.GetTypeInfo(cast.Expression).Type,model.GetTypeInfo(cast).Type,cast);
            case MemberAccessExpressionSyntax member:
                if(model.GetSymbolInfo(member).Symbol is IFieldSymbol mf)return StaticField(mf,member);
                if(member.Name.Identifier.ValueText=="Length"&&(model.GetTypeInfo(member.Expression).Type is IArrayTypeSymbol||model.GetTypeInfo(member.Expression).Type?.SpecialType==SpecialType.System_String))return "("+Expr(member.Expression)+").length()";
                if(SystemList(model.GetTypeInfo(member.Expression).Type)&&member.Name.Identifier.ValueText is "Count" or "Capacity")return "("+Expr(member.Expression)+").get_"+member.Name.Identifier.ValueText+"()";
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
            case ObjectCreationExpressionSyntax creation:
                var ctor=model.GetSymbolInfo(creation).Symbol as IMethodSymbol;
                if(ctor==null||creation.Initializer!=null)throw new Unsupported(creation,"object initializer/unresolved constructor not lowered");
                if(ctor.ContainingType.SpecialType==SpecialType.System_String&&ctor.Parameters.Length==1&&ctor.Parameters[0].Type is IArrayTypeSymbol{ElementType.SpecialType:SpecialType.System_Char})return "cs_string_from_chars("+Expr(creation.ArgumentList!.Arguments[0].Expression)+")";
                if(SystemList(ctor.ContainingType)) {
                    if(ctor.Parameters.Any(p=>p.Type.SpecialType!=SpecialType.System_Int32))throw new Unsupported(creation,"List constructor overload not lowered");
                    var values=creation.ArgumentList!.Arguments.Select(a=>Expr(a.Expression)).ToArray();return Type(ctor.ContainingType,creation)+"::make("+String.Join(",",values)+")";
                }
                RequireClass(ctor.ContainingType,creation);dependencies[current].Add(Id(ctor));
                return OrderedCall(ctor,creation.ArgumentList?.Arguments.Select(a=>a.Expression).ToList()??new(),creation,null);
            case ElementAccessExpressionSyntax access:
                if(access.ArgumentList.Arguments.Count!=1)throw new Unsupported(access,"multi-index access not lowered");
                return "([&]() { auto cs_array = "+Expr(access.Expression)+"; auto cs_index = "+Expr(access.ArgumentList.Arguments[0].Expression)+"; return cs_array."+(SystemList(model.GetTypeInfo(access.Expression).Type)?"get_Item":"at")+"(cs_index); }())";
            case DefaultExpressionSyntax defaultValue:return Type(model.GetTypeInfo(defaultValue).Type,defaultValue)+"{}";
            case ArrayCreationExpressionSyntax array:
                var at=model.GetTypeInfo(array).Type as IArrayTypeSymbol;
                if(at==null||at.Rank!=1)throw new Unsupported(array,"rectangular array creation not lowered");
                if(array.Initializer!=null)return Type(at,array)+"::from({"+String.Join(",",array.Initializer.Expressions.Select(e=>Converted(e,at.ElementType)))+"})";
                var sizes=array.Type.RankSpecifiers[0].Sizes;
                if(sizes.Count!=1||sizes[0] is OmittedArraySizeExpressionSyntax)throw new Unsupported(array,"array length missing");
                return Type(at,array)+"::make("+Expr(sizes[0])+")";
            case InitializerExpressionSyntax initializer:
                var it=model.GetTypeInfo(initializer).ConvertedType as IArrayTypeSymbol;
                if(it==null)throw new Unsupported(initializer,"initializer type is not an array");
                return Type(it,initializer)+"::from({"+String.Join(",",initializer.Expressions.Select(e=>Converted(e,it.ElementType)))+"})";
            default:throw new Unsupported(n,"expression lowering not implemented");
        }
    }
    string Binary(BinaryExpressionSyntax b) {
        if(b.IsKind(SyntaxKind.LogicalAndExpression)||b.IsKind(SyntaxKind.LogicalOrExpression))return "("+Expr(b.Left)+(b.IsKind(SyntaxKind.LogicalAndExpression)?" && ":" || ")+Expr(b.Right)+")";
        if(b.IsKind(SyntaxKind.AddExpression)&&model.GetTypeInfo(b).Type?.SpecialType==SpecialType.System_String) {
            string StringOperand(ExpressionSyntax e) {
                var type=model.GetTypeInfo(e).Type;
                if(type?.SpecialType==SpecialType.System_String||e.IsKind(SyntaxKind.NullLiteralExpression))return Converted(e,compilation.GetSpecialType(SpecialType.System_String));
                if(type?.SpecialType==SpecialType.System_Char)return "cs_char_string("+Expr(e)+")";
                throw new Unsupported(e,"string concatenation requires exact operand ToString contract");
            }
            return "([&]() { auto cs_left = "+StringOperand(b.Left)+"; auto cs_right = "+StringOperand(b.Right)+"; return pls::cs::String::concat(cs_left,cs_right); }())";
        }
        if(b.IsKind(SyntaxKind.EqualsExpression)||b.IsKind(SyntaxKind.NotEqualsExpression)) {
            var leftType=model.GetTypeInfo(b.Left).Type;var rightType=model.GetTypeInfo(b.Right).Type;
            var arrayType=leftType as IArrayTypeSymbol??rightType as IArrayTypeSymbol;
            if(arrayType!=null) {
                string leftValue=b.Left.IsKind(SyntaxKind.NullLiteralExpression)?Type(arrayType,b)+"{}":Expr(b.Left);
                string rightValue=b.Right.IsKind(SyntaxKind.NullLiteralExpression)?Type(arrayType,b)+"{}":Expr(b.Right);
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
        if(!(symbol is ILocalSymbol||symbol is IParameterSymbol||symbol is IFieldSymbol{IsStatic:true}))throw new Unsupported(n,"increment of nonlocal storage requires reference-preserving evaluation");
        var target=Expr(n);var suffix=NumericSuffix(type);
        if(suffix=="")throw new Unsupported(n,"increment type not lowered");
        return "([&]() { auto cs_old = "+target+"; auto cs_new = pls::cs::"+(add?"add_":"sub_")+suffix+"(cs_old,1); "+target+" = cs_new; return "+(prefix?"cs_new":"cs_old")+"; }())";
    }
    string Assignment(AssignmentExpressionSyntax a) {
        var type=model.GetTypeInfo(a.Left).Type;var simple=a.IsKind(SyntaxKind.SimpleAssignmentExpression);
        string prefix,target;
        if(a.Left is ElementAccessExpressionSyntax e) {
            if(e.ArgumentList.Arguments.Count!=1)throw new Unsupported(e,"multi-index assignment");
            prefix="auto cs_target = "+Expr(e.Expression)+"; auto cs_index = "+Expr(e.ArgumentList.Arguments[0].Expression)+"; ";
            if(SystemList(model.GetTypeInfo(e.Expression).Type)) {
                if(!simple)throw new Unsupported(a,"compound List index assignment requires operator promotion lowering");
                return "([&]() { "+prefix+"auto cs_value = "+Converted(a.Right,type)+"; cs_target.set_Item(cs_index,cs_value); return cs_value; }())";
            }
            target="cs_target.at(cs_index)";
        } else {
            var symbol=model.GetSymbolInfo(a.Left).Symbol;
            if(symbol is IFieldSymbol{IsStatic:false} instanceField) {
                RequireClass(instanceField.ContainingType,a.Left);
                var receiver=a.Left is MemberAccessExpressionSyntax member?Expr(member.Expression):"cs_this";
                prefix="auto cs_target = "+receiver+"; ";target="cs_require(cs_target)->"+Name(instanceField);
            } else {
                if(!(symbol is ILocalSymbol||symbol is IParameterSymbol||symbol is IFieldSymbol{IsStatic:true}))throw new Unsupported(a.Left,"assignment target is not lowered");
                prefix="";target=Expr(a.Left);
            }
        }
        string value;
        if(simple)value="auto cs_value = "+Converted(a.Right,type)+"; "+target+" = cs_value; return cs_value;";
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
            value="auto cs_old = "+target+"; auto cs_rhs = "+Expr(a.Right)+"; auto cs_value = "+Cast(operation,type,type,a)+"; "+target+" = cs_value; return cs_value;";
        }
        return "([&]() { "+prefix+value+" }())";
    }
    string Invoke(InvocationExpressionSyntax n) {
        var symbol=model.GetSymbolInfo(n).Symbol as IMethodSymbol;
        if(symbol==null)throw new Unsupported(n,"invocation symbol unresolved");
        var args=n.ArgumentList.Arguments.Select(a=>a.Expression).ToList();
        if(n.ArgumentList.Arguments.Any(a=>a.RefKindKeyword!=default||a.NameColon!=null))throw new Unsupported(n,"ref/out/named argument lowering not implemented");
        if(symbol.ReducedFrom!=null) {
            if(!(n.Expression is MemberAccessExpressionSyntax access))throw new Unsupported(n,"extension method receiver missing");
            args.Insert(0,access.Expression);symbol=symbol.ReducedFrom;
        }
        var id=Id(symbol);var owner=symbol.ContainingType.ToDisplayString();
        if(!symbol.IsStatic&&SystemList(symbol.ContainingType)&&n.Expression is MemberAccessExpressionSyntax listMember) {
            var allowed=new[]{"Add","Clear","Contains","IndexOf","LastIndexOf","Insert","RemoveAt","Remove","RemoveRange","ToArray","TrimExcess"};
            if(!allowed.Contains(symbol.Name)||symbol.Parameters.Any(p=>p.RefKind!=RefKind.None)||args.Count!=symbol.Parameters.Length)throw new Unsupported(n,"List overload not lowered");
            var listCall=new StringBuilder("([&]() -> "+Type(symbol.ReturnType,n)+" { auto cs_receiver = "+Expr(listMember.Expression)+"; ");
            for(int i=0;i<args.Count;i++)listCall.Append("auto cs_arg"+i+" = "+Converted(args[i],symbol.Parameters[i].Type)+"; ");
            listCall.Append(symbol.ReturnsVoid?"":"return ");listCall.Append("cs_receiver."+symbol.Name+"("+String.Join(",",Enumerable.Range(0,args.Count).Select(i=>"cs_arg"+i))+"); }())");return listCall.ToString();
        }
        if(!symbol.IsStatic&&methods.ContainsKey(id)) {
            if(symbol.IsVirtual||symbol.IsOverride||symbol.IsAbstract)throw new Unsupported(n,"virtual/interface invocation requires generated dispatch slots");
            RequireClass(symbol.ContainingType,n);dependencies[current].Add(id);
            var receiver=n.Expression is MemberAccessExpressionSyntax member?Expr(member.Expression):"cs_this";
            return OrderedCall(symbol,args,n,receiver);
        }
        string? intrinsic=null;ITypeSymbol returnType=symbol.ReturnType;
        var utf8Receiver=!symbol.IsStatic&&symbol.ContainingType.ToDisplayString()=="System.Text.Encoding"&&n.Expression is MemberAccessExpressionSyntax encodingMember&&model.GetSymbolInfo(encodingMember.Expression).Symbol is IPropertySymbol encodingProperty&&encodingProperty.Name=="UTF8"&&encodingProperty.ContainingType.ToDisplayString()=="System.Text.Encoding";
        if(!symbol.IsStatic&&!utf8Receiver) {
            if(!(n.Expression is MemberAccessExpressionSyntax member))throw new Unsupported(n,"instance receiver missing");
            var receiverType=model.GetTypeInfo(member.Expression).Type;
            if(receiverType?.SpecialType==SpecialType.System_String) {
                intrinsic=symbol.Name switch {
                    "Substring" when args.Count==1=>"cs_substring1", "Substring" when args.Count==2=>"cs_substring2",
                    "ToCharArray" when args.Count==0=>"cs_to_chars", "IndexOf" when symbol.Parameters[0].Type.SpecialType==SpecialType.System_Char&&args.Count==1=>"cs_index_char1",
                    "IndexOf" when symbol.Parameters[0].Type.SpecialType==SpecialType.System_Char&&args.Count==2=>"cs_index_char2",_=>null};
            } else if(Integral(receiverType)&&symbol.Name=="ToString"&&args.Count==0) {
                intrinsic=receiverType!.SpecialType==SpecialType.System_Char?"cs_char_string":"cs_integer_string";
            } else if(receiverType is IArrayTypeSymbol&&symbol.Name=="Clone"&&args.Count==0) {
                intrinsic="cs_clone_array";returnType=receiverType;
            }
            if(intrinsic==null)throw new Unsupported(n,"instance invocation requires object layout dispatch or exact framework intrinsic");
            args.Insert(0,member.Expression);
        }
        string callee;
        if(utf8Receiver&&((args.Count==1&&(symbol.Name=="GetBytes"||symbol.Name=="GetString"))||(args.Count==3&&symbol.Name=="GetString")))callee=symbol.Name=="GetBytes"?"pls::cs::encoding_utf8_get_bytes":"pls::cs::encoding_utf8_get_string";
        else if(utf8Receiver)throw new Unsupported(n,"UTF8 encoding overload not lowered");
        else if(intrinsic!=null)callee=intrinsic;
        else if(owner=="System.Convert"&&symbol.Name=="ToBase64String"&&args.Count==1)callee="pls::cs::convert_to_base64_string";
        else if(owner=="System.Convert"&&symbol.Name=="FromBase64String"&&args.Count==1)callee="pls::cs::convert_from_base64_string";
        else if((owner=="int"||owner=="long"||owner=="System.Int32"||owner=="System.Int64")&&symbol.Name=="Parse"&&args.Count==1&&symbol.Parameters[0].Type.SpecialType==SpecialType.System_String)callee=(symbol.ReturnType.SpecialType==SpecialType.System_Int32)?"pls::cs::int32_parse":"pls::cs::int64_parse";
        else if(owner=="System.Array"&&symbol.Name=="Copy"&&args.Count==3) {
            if(!(model.GetTypeInfo(args[0]).Type is IArrayTypeSymbol src)||!(model.GetTypeInfo(args[1]).Type is IArrayTypeSymbol dst)||!SymbolEqualityComparer.Default.Equals(src,dst))throw new Unsupported(n,"Array.Copy requires equal concrete one-dimensional array types");
            return "([&]() { auto cs_source = "+Expr(args[0])+"; auto cs_dest = "+Expr(args[1])+"; auto cs_count = "+Expr(args[2])+"; "+Type(src,n)+"::copy(cs_source,0,cs_dest,0,cs_count); }())";
        }
        else if(owner=="System.BitConverter") {
            if(symbol.Name=="GetBytes")callee="cs_bit_bytes";
            else if(new[]{"ToInt64","ToInt32","ToInt16","ToUInt64","ToUInt32","ToUInt16","ToSingle","ToDouble"}.Contains(symbol.Name))callee="cs_bits_from<"+Type(symbol.ReturnType,n)+">";
            else throw new Unsupported(n,"BitConverter intrinsic not lowered");
        }
        else if(owner=="System.Math") {
            callee=symbol.Name switch{"Sin"=>"std::sin","Cos"=>"std::cos","Tan"=>"std::tan","Sqrt"=>"std::sqrt","Ceiling"=>"std::ceil","Floor"=>"std::floor","Atan"=>"std::atan","Atan2"=>"std::atan2","Pow"=>"std::pow",_=>throw new Unsupported(n,"System.Math overload not implemented")};
        } else if(methods.ContainsKey(id)) {
            dependencies[current].Add(id);callee=Name(symbol);
            if(symbol.IsGenericMethod)callee+="<"+String.Join(",",symbol.TypeArguments.Select(t=>Type(t,n)))+">";
        } else throw new Unsupported(n,"external invocation not implemented: "+id);
        var body=new StringBuilder("([&]() -> "+Type(returnType,n)+" { ");
        for(int i=0;i<args.Count;i++) {
            ITypeSymbol? parameter=intrinsic!=null?(i==0?model.GetTypeInfo(args[i]).Type:symbol.Parameters[i-1].Type):symbol.Parameters[Math.Min(i,symbol.Parameters.Length-1)].Type;
            body.Append("auto cs_arg"+i+" = "+Converted(args[i],parameter)+"; ");
        }
        body.Append(symbol.ReturnsVoid?"":"return ");body.Append(callee+"("+String.Join(",",Enumerable.Range(0,args.Count).Select(i=>"cs_arg"+i))+"); }())");
        return body.ToString();
    }
    string OrderedCall(IMethodSymbol method,List<ExpressionSyntax> args,SyntaxNode site,string? receiver) {
        if(args.Count!=method.Parameters.Length)throw new Unsupported(site,"optional/params/named constructor or instance arguments not lowered");
        var result=method.MethodKind==MethodKind.Constructor?Type(method.ContainingType,site):Type(method.ReturnType,site);
        var b=new StringBuilder("([&]() -> "+result+" { ");
        if(receiver!=null)b.Append("auto cs_receiver = "+receiver+"; ");
        for(int i=0;i<args.Count;i++)b.Append("auto cs_arg"+i+" = "+Converted(args[i],method.Parameters[i].Type)+"; ");
        if(receiver!=null)b.Append("if(!cs_receiver)throw pls::cs::NullReferenceException(); ");
        var values=Enumerable.Range(0,args.Count).Select(i=>"cs_arg"+i).ToList();if(receiver!=null)values.Insert(0,"cs_receiver");
        b.Append(result=="void"?"":"return ");b.Append(Name(method)+"("+String.Join(",",values)+"); }())");return b.ToString();
    }
    string Statement(StatementSyntax n,IMethodSymbol method) {
        Used(n);
        switch(n) {
            case BlockSyntax b:return "{\n"+String.Join("\n",b.Statements.Select(s=>Statement(s,method)))+"\n}";
            case ReturnStatementSyntax r:return r.Expression==null?(method.MethodKind==MethodKind.Constructor?"return cs_this;":"return;"):"return "+Converted(r.Expression,method.ReturnType)+";";
            case ExpressionStatementSyntax e:return Expr(e.Expression)+";";
            case LocalDeclarationStatementSyntax l:return Declare(l.Declaration)+";";
            case IfStatementSyntax i:return "if ("+Expr(i.Condition)+") "+Statement(i.Statement,method)+(i.Else==null?"":" else "+Statement(i.Else.Statement,method));
            case WhileStatementSyntax w:return "while ("+Expr(w.Condition)+") "+Statement(w.Statement,method);
            case DoStatementSyntax d:return "do "+Statement(d.Statement,method)+" while ("+Expr(d.Condition)+");";
            case ForStatementSyntax f:
                var declaration=f.Declaration==null?String.Join(",",f.Initializers.Select(Expr)):Declare(f.Declaration);
                return "for ("+declaration+"; "+(f.Condition==null?"true":Expr(f.Condition))+"; "+String.Join(",",f.Incrementors.Select(Expr))+") "+Statement(f.Statement,method);
            case ForEachStatementSyntax f:
                if(!(model.GetTypeInfo(f.Expression).Type is IArrayTypeSymbol))throw new Unsupported(f,"foreach non-array requires enumerator/disposal protocol");
                var unique=temporary++;var local=model.GetDeclaredSymbol(f)!;
                return "{ auto cs_each"+unique+" = "+Expr(f.Expression)+"; for (std::int32_t cs_i"+unique+"=0; cs_i"+unique+"<cs_each"+unique+".length(); ++cs_i"+unique+") { "+Type(local.Type,f)+" "+Local(local)+" = cs_each"+unique+".at(cs_i"+unique+"); "+Statement(f.Statement,method)+" } }";
            case BreakStatementSyntax _:return "break;";
            case ContinueStatementSyntax _:return "continue;";
            case EmptyStatementSyntax _:return ";";
            case LabeledStatementSyntax label:return "cs_label_"+label.Identifier.ValueText+": ;\n"+Statement(label.Statement,method);
            case GotoStatementSyntax jump when jump.IsKind(SyntaxKind.GotoStatement)&&jump.Expression is IdentifierNameSyntax name:return "goto cs_label_"+name.Identifier.ValueText+";";
            case ThrowStatementSyntax thrown:
                if(thrown.Expression==null)return "throw;";
                if(thrown.Expression.IsKind(SyntaxKind.NullLiteralExpression))return "throw pls::cs::NullReferenceException();";
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
                    var b=new StringBuilder("try "+text);
                    foreach(var clause in tr.Catches) {
                        Used(clause);if(clause.Filter!=null)throw new Unsupported(clause,"catch filters require first-pass CLR filter dispatch");
                        var type=clause.Declaration==null?compilation.GetTypeByMetadataName("System.Exception"):model.GetTypeInfo(clause.Declaration.Type).Type;
                        var catchSymbol=clause.Declaration==null?null:model.GetDeclaredSymbol(clause.Declaration) as ILocalSymbol;
                        var variable=catchSymbol==null?"":Local(catchSymbol);
                        b.Append(" catch (const "+ExceptionType(type,clause)+"& "+variable+") "+Statement(clause.Block,method));
                    }
                    return b.ToString();
                }
                if(tr.Finally==null)return Protected();
                if(tr.DescendantNodes().OfType<StatementSyntax>().Any(s=>s is GotoStatementSyntax||s is BreakStatementSyntax||s is ContinueStatementSyntax))throw new Unsupported(tr,"finally with branch propagation requires structured control token lowering");
                var reachable=model.AnalyzeControlFlow(tr)?.EndPointIsReachable??true;
                if(reachable&&tr.Block.DescendantNodes().OfType<ReturnStatementSyntax>().Any())throw new Unsupported(tr,"finally with mixed fallthrough/return requires structured control token lowering");
                return (reachable?"":"return ")+"pls::cs::run_finally([&]() -> "+(reachable?"void":Type(method.ReturnType,tr))+" "+"{ "+Protected()+" }, [&]() "+Statement(tr.Finally.Block,method)+");";
            case SwitchStatementSyntax sw:
                var builder=new StringBuilder("switch ("+Expr(sw.Expression)+") {\n");
                foreach(var section in sw.Sections) {
                    foreach(var label in section.Labels) {
                        if(label is CaseSwitchLabelSyntax c) {
                            var constant=model.GetConstantValue(c.Value);
                            if(!constant.HasValue||constant.Value==null||!Integral(model.GetTypeInfo(c.Value).Type))throw new Unsupported(c,"switch label requires integral compile-time constant");
                            string value=constant.Value is char ch?((int)ch).ToString(CultureInfo.InvariantCulture):Convert.ToString(constant.Value,CultureInfo.InvariantCulture)!;
                            if(value==long.MinValue.ToString(CultureInfo.InvariantCulture))value="(-9223372036854775807ll-1ll)";
                            builder.Append("case "+value+":\n");
                        }
                        else if(label is DefaultSwitchLabelSyntax)builder.Append("default:\n");
                        else throw new Unsupported(label,"pattern switch label not lowered");
                    }
                    builder.Append("{\n"+String.Join("\n",section.Statements.Select(s=>Statement(s,method)))+"\n}\n");
                }
                builder.Append("}");return builder.ToString();
            default:throw new Unsupported(n,"statement lowering not implemented");
        }
    }
    static string ExceptionType(ITypeSymbol? type,SyntaxNode site) {
        var name=type?.ToDisplayString();
        var known=new[]{"Exception","SystemException","ArithmeticException","DivideByZeroException","OverflowException","NullReferenceException","IndexOutOfRangeException","InvalidCastException","ArrayTypeMismatchException","InvalidOperationException","ObjectDisposedException","NotSupportedException","NotImplementedException","OutOfMemoryException","ArgumentException","ArgumentNullException","ArgumentOutOfRangeException","FormatException","IOException","EndOfStreamException"};
        if(type is INamedTypeSymbol n&&known.Contains(n.Name)&&(name=="System."+n.Name||name=="System.IO."+n.Name))return "pls::cs::"+n.Name;
        throw new Unsupported(site,"exception hierarchy type not lowered: "+name);
    }
    string Declare(VariableDeclarationSyntax n) {
        Used(n);var builder=new StringBuilder();string? type=null;
        foreach(var d in n.Variables) {
            var symbol=model.GetDeclaredSymbol(d) as ILocalSymbol;
            if(symbol==null)throw new Unsupported(d,"local declaration symbol not found");
            var t=Type(symbol.Type,d);if(type!=null&&type!=t)throw new Unsupported(n,"mixed declaration types");
            builder.Append(type==null?(hoistLocals?"":t+" "):", ");type=t;
            builder.Append(Local(symbol)+" = "+(d.Initializer==null?t+"{}":Converted(d.Initializer.Value,symbol.Type)));
        }
        return builder.ToString();
    }
    public bool Emit(string id) {
        if(emitted.ContainsKey(id))return true;if(rejected.ContainsKey(id))return false;
        if(active.Contains(id))return true;
        if(!methods.TryGetValue(id,out var method)){rejected[id]=new{kind="Declaration",reason="member is not a source method declaration"};return false;}
        var declaration=syntax[id];var oldModel=model;var oldCurrent=current;var oldHoist=hoistLocals;current=id;model=compilation.GetSemanticModel(declaration.SyntaxTree);hoistLocals=declaration.DescendantNodes().OfType<GotoStatementSyntax>().Any();
        dependencies[id]=new();fieldDependencies[id]=new();classDependencies[id]=new();methodKinds[id]=new();active.Add(id);
        try {
            if(compilation.AssemblyName=="Assembly-CSharp"&&declaration.DescendantNodes().OfType<InitializerExpressionSyntax>().Any(i=>i.Expressions.Any(e=>Integral(model.GetTypeInfo(e).Type))))throw new Unsupported(declaration,"numeric initializer requires local pipeline/content-policy classification before game emission");
            if(method.IsAbstract||method.IsVirtual||method.IsOverride)throw new Unsupported(declaration,"virtual/interface method requires generated dispatch slots");
            if(!method.IsStatic)RequireClass(method.ContainingType,declaration);
            if(method.ContainingType.GetMembers().OfType<IMethodSymbol>().Any(m=>m.MethodKind==MethodKind.StaticConstructor&&!m.IsImplicitlyDeclared))throw new Unsupported(declaration,"explicit type initializer requires once-per-type initialization lowering");
            if(method.Parameters.Any(p=>p.RefKind!=RefKind.None||p.IsParams))throw new Unsupported(declaration,"ref/out/params signature not lowered");
            if(declaration.Body==null&&declaration.ExpressionBody==null)throw new Unsupported(declaration,"declaration has no body");
            var constructor=method.MethodKind==MethodKind.Constructor;
            var result=constructor?Type(method.ContainingType,declaration):Type(method.ReturnType,declaration);
            var parameterList=method.Parameters.Select(p=>Type(p.Type,declaration)+" "+Local(p)).ToList();
            if(!method.IsStatic&&!constructor)parameterList.Insert(0,Type(method.ContainingType,declaration)+" cs_this");
            var parameters=String.Join(",",parameterList);
            string template=method.TypeParameters.Length==0?"":"template<"+String.Join(",",method.TypeParameters.Select(t=>"typename T_"+t.Name))+">\n";
            var body=declaration.Body!=null?Statement(declaration.Body,method):"{ return "+Converted(declaration.ExpressionBody!.Expression,method.ReturnType)+"; }";
            if(hoistLocals) {
                var locals=declaration.DescendantNodes().OfType<VariableDeclaratorSyntax>().Select(v=>model.GetDeclaredSymbol(v)).OfType<ILocalSymbol>().ToArray();
                body="{\n"+String.Join("\n",locals.Select(l=>Type(l.Type,declaration)+" "+Local(l)+"{};"))+"\n"+body+"\n}";
            }
            if(constructor) {
                var ctor=(ConstructorDeclarationSyntax)declaration;
                if(ctor.Initializer!=null)throw new Unsupported(ctor,"explicit base/this constructor chaining not lowered");
                var init=new StringBuilder("{ auto cs_this = pls::cs::make_ref<"+Name(method.ContainingType)+">();\n");
                foreach(var field in method.ContainingType.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst)) {
                    if(field.DeclaringSyntaxReferences.FirstOrDefault()?.GetSyntax() is VariableDeclaratorSyntax f&&f.Initializer!=null) {
                        var saved=model;model=compilation.GetSemanticModel(f.SyntaxTree);
                        try {init.Append("cs_this->"+Name(field)+" = "+Converted(f.Initializer.Value,field.Type)+";\n");}finally{model=saved;}
                    }
                }
                body=init+body+"\nreturn cs_this; }";
            } else if(!method.IsStatic) body="{ if(!cs_this)throw pls::cs::NullReferenceException();\n"+body+"\n}";
            var source=template+result+" "+Name(method)+"("+parameters+") "+body;
            foreach(var dependency in dependencies[id].ToArray())if(!Emit(dependency))throw new Unsupported(declaration,"dependency not lowered: "+dependency);
            emitted[id]=source;return true;
        } catch(Unsupported e) {
            var span=declaration.GetLocation().GetLineSpan();
            rejected[id]=new{kind=e.Kind,reason=e.Message,source=span.Path,line=span.StartLinePosition.Line+1};return false;
        } finally{active.Remove(id);model=oldModel;current=oldCurrent;hoistLocals=oldHoist;}
    }
    public object Generate(Request input) {
        if(input.select_all_source_methods)input.selected=methods.Keys.OrderBy(x=>x).ToArray();
        foreach(var id in input.selected.Where(id=>id.StartsWith("M:",StringComparison.Ordinal)))Emit(id);
        // Keep only dependency-closed emitted methods; recursion is legal but a
        // strongly-connected component with any rejected dependency is not.
        bool changed=true;
        while(changed){changed=false;foreach(var id in emitted.Keys.ToArray())if(dependencies[id].Any(d=>!emitted.ContainsKey(d))) {emitted.Remove(id);rejected[id]=new{kind="Dependency",reason="dependency closure contains an unsupported member"};changed=true;}}
        var usedFields=new HashSet<string>(emitted.Keys.SelectMany(id=>fieldDependencies[id]));
        var usedClasses=new HashSet<string>(emitted.Keys.SelectMany(id=>classDependencies[id]));
        foreach(var id in usedClasses.ToArray())if(!classes.ContainsKey(id))throw new InvalidOperationException("incomplete generated class dependency: "+id);
        Directory.CreateDirectory(input.output);
        var header=new StringBuilder("// GENERATED by translator/Translator.cs. Do not edit.\n#pragma once\n#include \"semantic_runtime.hpp\"\nnamespace pls::generated {\n");
        foreach(var id in usedClasses.OrderBy(x=>x))header.Append("struct "+Name(classes[id])+";\n");
        foreach(var id in usedClasses.OrderBy(x=>x)) {
            header.Append("struct "+Name(classes[id])+" : pls::cs::Object {\n");
            foreach(var field in classes[id].GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst))header.Append(TypeName(field.Type)+" "+Name(field)+"{};\n");
            header.Append("};\n");
        }
        foreach(var pair in emitted.OrderBy(p=>p.Key)) {
            var method=methods[pair.Key];if(method.IsGenericMethod)continue;
            var ctor=method.MethodKind==MethodKind.Constructor;var parameters=method.Parameters.Select(p=>TypeName(p.Type)+" "+Local(p)).ToList();
            if(!method.IsStatic&&!ctor)parameters.Insert(0,TypeName(method.ContainingType)+" cs_this");
            header.Append(TypeName(ctor?method.ContainingType:method.ReturnType)+" "+Name(method)+"("+String.Join(",",parameters)+");\n");
        }
        header.Append("}\n");
        var cpp=new StringBuilder("// GENERATED by translator/Translator.cs. Do not edit.\n#include \"portable_generated.hpp\"\n#include <cmath>\n#include <cstring>\n#include <cstdint>\nnamespace pls::generated {\n");
        cpp.Append("static float cs_f32(std::uint32_t bits) { float value; std::memcpy(&value,&bits,sizeof(value)); return value; }\nstatic double cs_f64(std::uint64_t bits) { double value; std::memcpy(&value,&bits,sizeof(value)); return value; }\n");
        cpp.Append(FrameworkHelpers);
        foreach(var id in usedFields.OrderBy(x=>x))if(fields.TryGetValue(id,out var field))cpp.Append("static "+field+"\n");
        foreach(var pair in emitted.OrderBy(p=>p.Key))cpp.Append("// "+pair.Key+"\n"+pair.Value+"\n");
        cpp.Append("}\n");
        File.WriteAllText(Path.Combine(input.output,"portable_generated.hpp"),header.ToString().Replace("\r\n","\n"),new UTF8Encoding(false));
        File.WriteAllText(Path.Combine(input.output,"portable_generated.cpp"),cpp.ToString().Replace("\r\n","\n"),new UTF8Encoding(false));
        var oracle=new StringBuilder("// GENERATED source-only oracle; no original game/Unity binary loaded.\nusing System;\npublic static class SourceOracle {\n");
        foreach(var id in usedFields.OrderBy(x=>x)) {
            var field=fieldSymbols[id];var declaration=(VariableDeclaratorSyntax)field.DeclaringSyntaxReferences[0].GetSyntax();
            var rewriter=new OracleRewriter(compilation.GetSemanticModel(declaration.SyntaxTree));
            oracle.Append("public static "+field.Type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)+" "+Name(field)+" = "+(declaration.Initializer==null?"default("+field.Type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)+")":rewriter.Visit(declaration.Initializer.Value)!.ToString())+";\n");
        }
        var oracleMethods=new HashSet<string>(emitted.Keys.Where(id=>methods[id].IsStatic&&syntax[id] is MethodDeclarationSyntax));
        foreach(var id in oracleMethods.OrderBy(x=>x)) {
            var method=syntax[id];var rewriter=new OracleRewriter(compilation.GetSemanticModel(method.SyntaxTree));
            var rewritten=(MethodDeclarationSyntax)rewriter.Visit(method)!;
            rewritten=rewritten.WithIdentifier(SyntaxFactory.Identifier(Name(methods[id]))).WithModifiers(SyntaxFactory.TokenList(SyntaxFactory.Token(SyntaxKind.PublicKeyword),SyntaxFactory.Token(SyntaxKind.StaticKeyword))).WithAttributeLists(default);
            oracle.Append(rewritten.NormalizeWhitespace().ToFullString()+"\n");
        }
        oracle.Append("}\n");
        foreach(var id in usedClasses.OrderBy(x=>x)) {
            var type=classes[id];oracle.Append("namespace "+type.ContainingNamespace.ToDisplayString()+" { public class "+type.Name+" {\n");
            foreach(var field in type.GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst)) {
                var d=(VariableDeclaratorSyntax)field.DeclaringSyntaxReferences[0].GetSyntax();var rw=new OracleRewriter(compilation.GetSemanticModel(d.SyntaxTree));
                oracle.Append("public "+field.Type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat)+" "+field.Name+(d.Initializer==null?"":" = "+rw.Visit(d.Initializer.Value))+";\n");
            }
            foreach(var method in emitted.Keys.Select(k=>methods[k]).Where(m=>(!m.IsStatic||m.MethodKind==MethodKind.Conversion||m.MethodKind==MethodKind.UserDefinedOperator)&&SymbolEqualityComparer.Default.Equals(m.ContainingType,type)).OrderBy(m=>Id(m))) {
                var d=syntax[Id(method)];var rw=new OracleRewriter(compilation.GetSemanticModel(d.SyntaxTree));
                var rewritten=(BaseMethodDeclarationSyntax)rw.Visit(d)!;
                rewritten=rewritten.WithModifiers(method.IsStatic?SyntaxFactory.TokenList(SyntaxFactory.Token(SyntaxKind.PublicKeyword),SyntaxFactory.Token(SyntaxKind.StaticKeyword)):SyntaxFactory.TokenList(SyntaxFactory.Token(SyntaxKind.PublicKeyword))).WithAttributeLists(default);
                oracle.Append(rewritten.NormalizeWhitespace().ToFullString()+"\n");
            }
            oracle.Append("} }\n");
        }
        File.WriteAllText(Path.Combine(input.output,"source_oracle.cs"),oracle.ToString().Replace("\r\n","\n"),new UTF8Encoding(false));
        var selectedMethods=input.selected.Where(id=>id.StartsWith("M:",StringComparison.Ordinal)).ToArray();
        var usedKinds=new Dictionary<string,int>();
        foreach(var id in emitted.Keys)foreach(var pair in methodKinds[id])usedKinds[pair.Key]=usedKinds.GetValueOrDefault(pair.Key)+pair.Value;
        return new { operation="roslyn-source-to-cpp17-translation", assembly=input.assembly,
            requested_symbols=input.selected.Length,requested_methods=selectedMethods.Length,
            emitted_methods=emitted.Keys.OrderBy(x=>x).Select(id=>new{id,cpp_name=Name(methods[id]),name=methods[id].Name,kind=methods[id].MethodKind.ToString(),root=selectedMethods.Contains(id),source=syntax[id].SyntaxTree.FilePath,line=syntax[id].GetLocation().GetLineSpan().StartLinePosition.Line+1,return_type=(methods[id].MethodKind==MethodKind.Constructor?methods[id].ContainingType:methods[id].ReturnType).ToDisplayString(),is_static=methods[id].IsStatic,is_constructor=methods[id].MethodKind==MethodKind.Constructor,containing_type=methods[id].ContainingType.ToDisplayString(),parameters=methods[id].Parameters.Select(p=>new{name=p.Name,type=p.Type.ToDisplayString()}).ToArray()}).ToArray(),
            generated_classes=usedClasses.OrderBy(x=>x).Select(id=>new{id,type=classes[id].ToDisplayString(),cpp_name=Name(classes[id]),fields=classes[id].GetMembers().OfType<IFieldSymbol>().Where(f=>!f.IsStatic&&!f.IsConst).Select(f=>new{name=f.Name,cpp_name=Name(f),type=f.Type.ToDisplayString()}).ToArray()}).ToArray(),
            oracle_static_methods=oracleMethods.OrderBy(x=>x).ToArray(),
            rejected_methods=rejected.OrderBy(p=>p.Key).ToDictionary(p=>p.Key,p=>p.Value),
            emitted_method_count=emitted.Count,root_methods_emitted=selectedMethods.Count(emitted.ContainsKey),
            static_fields=usedFields.OrderBy(x=>x).Select(id=>new{id,cpp_name=Name(fieldSymbols[id]),type=fieldSymbols[id].Type.ToDisplayString()}).ToArray(),
            emitted_kind_occurrences=usedKinds, compiled=false, executed_methods=0,
            game_binary_emitted=false,original_IL_read=false,
            limitations=new[]{"Typed source classes are currently restricted to non-generic direct subclasses of System.Object; virtual/interface dispatch, custom inheritance, exception/finally, delegate and property lowering are explicitly rejected, not stubs.","A native compile receipt and differential runner are required before compiled/verified states."}};
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
template<class T> pls::cs::Ref<T> cs_require(pls::cs::Ref<T> value){if(!value)throw pls::cs::NullReferenceException();return value;}
static pls::cs::String cs_string_from_chars(pls::cs::Array<char16_t> chars){if(chars.is_null())throw pls::cs::ArgumentNullException();std::u16string out;for(std::int32_t i=0;i<chars.length();++i)out.push_back(chars.at(i));return pls::cs::String(std::move(out));}
static bool cs_is_little_endian(){const std::uint16_t value=1;std::uint8_t first;std::memcpy(&first,&value,1);return first==1;}
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
static std::int32_t cs_index_char1(const pls::cs::String& source,char16_t value){return cs_index_char2(source,value,0);}
static pls::cs::String cs_char_string(char16_t value){return pls::cs::String(std::u16string(1,value));}
template<class T> pls::cs::String cs_integer_string(T value) {
 auto text=std::to_string(value);return pls::cs::String(std::u16string(text.begin(),text.end()));
}
template<class T> pls::cs::Array<T> cs_clone_array(pls::cs::Array<T> value){return value.clone();}
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
        public OracleRewriter(SemanticModel model){m=model;}
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
                return SyntaxFactory.InvocationExpression(SyntaxFactory.ParseExpression("SourceOracle."+Name(method.ReducedFrom)),SyntaxFactory.ArgumentList(SyntaxFactory.SeparatedList(args)));
            }
            if(method!=null&&method.IsStatic&&method.DeclaringSyntaxReferences.Length!=0) {
                return node.WithExpression(SyntaxFactory.ParseExpression("SourceOracle."+Name(method))).WithArgumentList((ArgumentListSyntax)Visit(node.ArgumentList)!);
            }
            return base.VisitInvocationExpression(node);
        }
        public override SyntaxNode? VisitIdentifierName(IdentifierNameSyntax node) {
            if(m.GetSymbolInfo(node).Symbol is IFieldSymbol field&&!field.HasConstantValue&&field.IsStatic&&field.DeclaringSyntaxReferences.Length!=0)return SyntaxFactory.ParseExpression("SourceOracle."+Name(field));
            if(m.GetSymbolInfo(node).Symbol is IFieldSymbol constant&&constant.HasConstantValue)return ConstantSyntax(constant);
            if(m.GetSymbolInfo(node).Symbol is INamedTypeSymbol type)return SyntaxFactory.ParseTypeName(type.ToDisplayString(SymbolDisplayFormat.FullyQualifiedFormat));
            return base.VisitIdentifierName(node);
        }
        public override SyntaxNode? VisitMemberAccessExpression(MemberAccessExpressionSyntax node) {
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
        var lowerer=new Lowerer(compilation);var output=input.diagnostics_only?lowerer.Diagnose(input):lowerer.Generate(input);
        File.WriteAllText(args[1],JsonSerializer.Serialize(output,new JsonSerializerOptions{WriteIndented=true})+"\n",new UTF8Encoding(false));return 0;
    }
}
