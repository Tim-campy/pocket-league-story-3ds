// Readable emission mode (request flag "readable", default off).
//
// The lowering is unchanged: the same Roslyn walk produces the same C++
// operations in the same order. Readable mode only
//   * spells identifiers with their C# names (no hashes) and mirrors the C#
//     namespaces as C++ namespaces (post-pass over the generated text);
//   * leaves out the diagnostic wrappers that are pass-through in normal
//     builds (PLS_METHOD_SCOPE, pls::diagnostic::api_call,
//     pls::source_allocations::completed) and the per-field fast path;
//   * writes an operand directly instead of through an ordering lambda when
//     the C# evaluation order of that operand list cannot be observed (the
//     conditions are in OrderFree and are deliberately conservative).
// When the flag is off none of these paths is reached.
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Text.RegularExpressions;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Syntax;
using Microsoft.CodeAnalysis.Operations;

sealed partial class Lowerer {
    static bool readable;
    static CSharpCompilation? readableCompilation;
    static readonly Dictionary<ISymbol,string> readableLocalNames=new(SymbolEqualityComparer.Default);
    static readonly Dictionary<string,string> readableClosures=new(StringComparer.Ordinal);
    // Readable pass 2 (C4): named C# constants re-emitted as constexpr.
    static readonly HashSet<string> readableConstTypes=new(StringComparer.Ordinal);
    static readonly Dictionary<string,(string text,string owner)> readableConstFallback=new(StringComparer.Ordinal);
    readonly List<(INamedTypeSymbol type,IFieldSymbol field,string name)> readableConstDecls=new();
    static string ConstName(IFieldSymbol field)=>"cs_const_"+Hash(Id(field));
    static bool ReadableConstantField(IFieldSymbol field)=>field.HasConstantValue&&field.ConstantValue!=null&&field.Type.TypeKind!=TypeKind.Enum&&
        field.Type.SpecialType is SpecialType.System_Boolean or SpecialType.System_Char or SpecialType.System_SByte or SpecialType.System_Byte or SpecialType.System_Int16 or SpecialType.System_UInt16
            or SpecialType.System_Int32 or SpecialType.System_UInt32 or SpecialType.System_Int64 or SpecialType.System_UInt64 or SpecialType.System_Single or SpecialType.System_Double;
    static string ConstantCppType(ITypeSymbol type)=>type.SpecialType switch{SpecialType.System_Boolean=>"bool",SpecialType.System_Char=>"char16_t",SpecialType.System_SByte=>"std::int8_t",
        SpecialType.System_Byte=>"std::uint8_t",SpecialType.System_Int16=>"std::int16_t",SpecialType.System_UInt16=>"std::uint16_t",SpecialType.System_Int32=>"std::int32_t",
        SpecialType.System_UInt32=>"std::uint32_t",SpecialType.System_Int64=>"std::int64_t",SpecialType.System_UInt64=>"std::uint64_t",SpecialType.System_Single=>"float",_=>"double"};
    // A source reference to a named constant of this assembly: Type::Name (resolved by the renamer).
    string? ReadableConstantReference(ExpressionSyntax n){
        if(n is not (IdentifierNameSyntax or MemberAccessExpressionSyntax))return null;
        if(model.GetSymbolInfo(n).Symbol is not IFieldSymbol field||!ReadableConstantField(field))return null;
        if(!SymbolEqualityComparer.Default.Equals(field.ContainingAssembly,compilation.Assembly)||field.ContainingType.TypeParameters.Length!=0)return null;
        readableConstTypes.Add(Id(field.ContainingType.OriginalDefinition));
        var marker=ConstName(field);
        readableConstFallback[marker]=(Constant(field.ConstantValue,field.Type,n)+ConstantNameComment(n),Id(field.ContainingType.OriginalDefinition));
        return marker;
    }
    string ReadableConstantValue(IFieldSymbol field){
        if(field.ConstantValue is bool b)return b?"true":"false";
        var node=field.DeclaringSyntaxReferences.FirstOrDefault()?.GetSyntax() is Microsoft.CodeAnalysis.CSharp.Syntax.VariableDeclaratorSyntax declarator&&declarator.Initializer!=null?declarator.Initializer.Value:(SyntaxNode?)null;
        return ReadableConstant(field.ConstantValue!,field.Type,node!)??Convert.ToString(field.ConstantValue,System.Globalization.CultureInfo.InvariantCulture)!;
    }

    // ---------------------------------------------------------------- identifiers
    // Helper names emitted unqualified in readable output (assembly namespace).
    static readonly Dictionary<string,string> ReadableHelperNames=new(StringComparer.Ordinal){
        ["cs_require"]="require",["cs_is"]="is_instance",["cs_f32"]="float_from_bits",["cs_f64"]="double_from_bits",
        ["cs_value_hash"]="value_hash",["cs_string_identity"]="string_identity",["cs_object_string"]="object_string",
        ["cs_concat_objects2"]="concat_objects2",["cs_concat_objects3"]="concat_objects3",["cs_concat_strings3"]="concat_strings3",
        ["cs_concat_strings4"]="concat_strings4",["cs_concat_object_array"]="concat_object_array",["cs_contains_string"]="contains_string",
        ["cs_string_equals"]="string_equals",["cs_string_from_chars"]="string_from_chars",["cs_is_little_endian"]="is_little_endian",
        ["cs_network_to_host"]="network_to_host",["cs_substring1"]="substring1",["cs_substring2"]="substring2",["cs_to_chars"]="to_chars",
        ["cs_index_char1"]="index_char1",["cs_index_char2"]="index_char2",["cs_last_index_char1"]="last_index_char1",
        ["cs_char_string"]="char_string",["cs_integer_string"]="integer_string",["cs_clone_array"]="clone_array",
        ["cs_bit_bytes"]="bit_bytes",["cs_bits_from"]="bits_from",["cs_new_instance"]="new_instance"};
    static readonly HashSet<string> CppReserved=new(StringComparer.Ordinal){
        "alignas","alignof","and","and_eq","asm","auto","bitand","bitor","bool","break","case","catch","char","char8_t","char16_t","char32_t",
        "class","compl","concept","const","consteval","constexpr","constinit","const_cast","continue","co_await","co_return","co_yield",
        "decltype","default","delete","do","double","dynamic_cast","else","enum","explicit","export","extern","false","float","for","friend",
        "goto","if","inline","int","long","mutable","namespace","new","noexcept","not","not_eq","nullptr","operator","or","or_eq","private",
        "protected","public","register","reinterpret_cast","requires","return","short","signed","sizeof","static","static_assert","static_cast",
        "struct","switch","template","this","thread_local","throw","true","try","typedef","typeid","typename","union","unsigned","using",
        "virtual","void","volatile","wchar_t","while","xor","xor_eq","final","override","import","module",
        // Macros of the C/C++/Windows headers reachable from the runtime.
        "NULL","EOF","errno","assert","stdin","stdout","stderr","min","max","small","near","far","interface","offsetof","setjmp","va_arg",
        // Names the readable output itself spells unqualified.
        "self","std","pls","literal","is_null","post_increment","post_decrement","pre_increment","pre_decrement","create","create_init","ensure_initialized"};
    // pls::cs::Object and generated-struct members: a C# member with one of these
    // names would hide or be hidden by it inside a generated class. (Equals,
    // GetHashCode and ToString are virtual slots: a static implementation of
    // the same name differs by its self parameter and coexists with them.)
    static readonly HashSet<string> ObjectMemberNames=new(StringComparer.Ordinal){
        "shared_from_this","source_reference_assignable","monitor","equals","get_hash_code","managed_type_name",
        "managed_delegate_method_id","trace_edges","release_edges","memory_ranges","source_managed_type_name","type_name","source_ctor"};
    static string CppIdentifier(string name){
        name=name.TrimStart('@');
        var builder=new StringBuilder();
        foreach(var c in name)builder.Append(c<128&&(char.IsLetterOrDigit(c)||c=='_')?c:'_');
        var result=builder.ToString();
        if(result.Length==0||char.IsDigit(result[0]))result="_"+result;
        if(result.Length>1&&result[0]=='_'&&(char.IsUpper(result[1])||result[1]=='_'))result="m"+result;
        if(CppReserved.Contains(result)||ReadableHelperNames.ContainsValue(result)||result.StartsWith("cs_",StringComparison.Ordinal))result+="_";
        return result;
    }

    // Locals and parameters: the C# name; two symbols of one member that share a
    // name (sibling scopes) are numbered in declaration order (name, name_2, ...).
    static string ReadableLocal(ISymbol symbol){
        symbol=symbol.OriginalDefinition;
        if(readableLocalNames.TryGetValue(symbol,out var known))return known;
        ISymbol owner=symbol.ContainingSymbol;
        while(owner is IMethodSymbol{MethodKind:MethodKind.AnonymousFunction or MethodKind.LocalFunction}&&owner.ContainingSymbol!=null)owner=owner.ContainingSymbol;
        var all=new List<ISymbol>();
        if(owner is IMethodSymbol ownerMethod)all.AddRange(ownerMethod.OriginalDefinition.Parameters);
        if(readableCompilation!=null)foreach(var reference in owner.DeclaringSyntaxReferences){
            var node=reference.GetSyntax();var semantic=readableCompilation.GetSemanticModel(node.SyntaxTree);
            foreach(var child in node.DescendantNodes()){
                if(child is not (VariableDeclaratorSyntax or ParameterSyntax or ForEachStatementSyntax or CatchDeclarationSyntax or SingleVariableDesignationSyntax))continue;
                ISymbol? declared;try{declared=semantic.GetDeclaredSymbol(child);}catch(ArgumentException){continue;}
                if(declared is ILocalSymbol or IParameterSymbol)all.Add(declared.OriginalDefinition);
            }
        }
        if(!all.Contains(symbol,SymbolEqualityComparer.Default))all.Add(symbol);
        var used=new HashSet<string>(StringComparer.Ordinal);
        foreach(var item in all.Distinct(SymbolEqualityComparer.Default)){
            if(readableLocalNames.TryGetValue(item,out var assigned)){used.Add(assigned);continue;}
            var stem=CppIdentifier(item.Name);var name=stem;for(int k=2;used.Contains(name);k++)name=stem+"_"+k;
            used.Add(name);readableLocalNames[item]=name;
        }
        return readableLocalNames[symbol];
    }
    static void RegisterClosure(string name,SyntaxNode node){
        var line=node.GetLocation().GetLineSpan().StartLinePosition;
        readableClosures[name]="Lambda_"+(line.Line+1)+"_"+(line.Character+1);
    }

    // ---------------------------------------------------------------- constants
    string? ReadableConstant(object value,ITypeSymbol? type,SyntaxNode node){
        if(type is INamedTypeSymbol{TypeKind:TypeKind.Enum} enumeration){Type(type,node);return ReadableConstant(value,enumeration.EnumUnderlyingType,node)??Constant(value,enumeration.EnumUnderlyingType,node);}
        if(value is string text)return "literal("+Utf16Literal(text)+")"+TextComment(text);
        if(value is char ch)return ch>=32&&ch<127?"u'"+(ch is '\'' or '\\'?"\\"+ch:ch.ToString())+"'":null;
        if(value is float f){
            if(!float.IsFinite(f))return null;var r=f.ToString("R",CultureInfo.InvariantCulture);
            if(BitConverter.SingleToInt32Bits(float.Parse(r,CultureInfo.InvariantCulture))!=BitConverter.SingleToInt32Bits(f))return null;
            return (r.Contains('.')||r.Contains('E')?r:r+".0")+"f";
        }
        if(value is double d){
            if(!double.IsFinite(d))return null;var r=d.ToString("R",CultureInfo.InvariantCulture);
            if(BitConverter.DoubleToInt64Bits(double.Parse(r,CultureInfo.InvariantCulture))!=BitConverter.DoubleToInt64Bits(d))return null;
            return r.Contains('.')||r.Contains('E')?r:r+".0";
        }
        if(!Integral(type)||value is bool)return null;
        var bits=value is ulong u?u:unchecked((ulong)Convert.ToInt64(value,CultureInfo.InvariantCulture));
        // Readable pass 2 (C4): a hexadecimal literal of the C# source stays hexadecimal.
        if(node is LiteralExpressionSyntax literalNode&&literalNode.Token.Text.StartsWith("0x",StringComparison.OrdinalIgnoreCase)){
            switch(type!.SpecialType){
                case SpecialType.System_Int32:{var v=unchecked((int)bits);if(v>=0)return "0x"+v.ToString("X",CultureInfo.InvariantCulture);break;}
                case SpecialType.System_UInt32:return "0x"+unchecked((uint)bits).ToString("X",CultureInfo.InvariantCulture)+"u";
                case SpecialType.System_Int64:{var v=unchecked((long)bits);if(v>=0)return "0x"+v.ToString("X",CultureInfo.InvariantCulture)+"ll";break;}
                case SpecialType.System_UInt64:return "0x"+bits.ToString("X",CultureInfo.InvariantCulture)+"ull";
            }
        }
        switch(type!.SpecialType){
            case SpecialType.System_Int32:{var v=unchecked((int)bits);return v==int.MinValue?"(-2147483647 - 1)":v.ToString(CultureInfo.InvariantCulture);}
            case SpecialType.System_UInt32:return unchecked((uint)bits).ToString(CultureInfo.InvariantCulture)+"u";
            case SpecialType.System_Int64:{var v=unchecked((long)bits);return v==long.MinValue?"(-9223372036854775807ll - 1)":v.ToString(CultureInfo.InvariantCulture)+"ll";}
            case SpecialType.System_UInt64:return bits.ToString(CultureInfo.InvariantCulture)+"ull";
            case SpecialType.System_Byte:return "std::uint8_t("+unchecked((byte)bits).ToString(CultureInfo.InvariantCulture)+")";
            case SpecialType.System_SByte:return "std::int8_t("+unchecked((sbyte)bits).ToString(CultureInfo.InvariantCulture)+")";
            case SpecialType.System_Int16:return "std::int16_t("+unchecked((short)bits).ToString(CultureInfo.InvariantCulture)+")";
            case SpecialType.System_UInt16:return "std::uint16_t("+unchecked((ushort)bits).ToString(CultureInfo.InvariantCulture)+")";
            case SpecialType.System_Char:return "char16_t("+unchecked((ushort)bits).ToString(CultureInfo.InvariantCulture)+")";
        }
        return null;
    }
    string ConstantNameComment(ExpressionSyntax n){
        if(n is not (IdentifierNameSyntax or MemberAccessExpressionSyntax))return "";
        if(model.GetSymbolInfo(n).Symbol is not IFieldSymbol{HasConstantValue:true} field)return "";
        var owner=SymbolEqualityComparer.Default.Equals(field.ContainingType,methods.GetValueOrDefault(current)?.ContainingType)?"":field.ContainingType.Name+".";
        return " /* "+(owner+field.Name).Replace("*/","* /")+" */";
    }
    // u"..." with printable ASCII kept; other units escaped. Octal escapes stop
    // after three digits; a lone surrogate needs \x, so the literal is split.
    static string Utf16Literal(string text){
        var b=new StringBuilder("u\"");
        for(int i=0;i<text.Length;i++){
            var c=text[i];
            if(c=='\\')b.Append("\\\\");else if(c=='"')b.Append("\\\"");
            else if(c=='\n')b.Append("\\n");else if(c=='\t')b.Append("\\t");else if(c=='\r')b.Append("\\r");
            else if(c=='?'&&i+1<text.Length&&text[i+1]=='?')b.Append("\\?");
            else if(c>=32&&c<127)b.Append(c);
            else if(c<32||(c>=127&&c<160))b.Append("\\"+Convert.ToString(c,8).PadLeft(3,'0'));
            else if(char.IsHighSurrogate(c)&&i+1<text.Length&&char.IsLowSurrogate(text[i+1])){b.Append("\\U"+char.ConvertToUtf32(c,text[i+1]).ToString("X8",CultureInfo.InvariantCulture));i++;}
            else if(char.IsSurrogate(c))b.Append("\\x"+((int)c).ToString("X4",CultureInfo.InvariantCulture)+"\" u\"");
            else b.Append("\\u"+((int)c).ToString("X4",CultureInfo.InvariantCulture));
        }
        return b.Append('"').ToString();
    }
    static string TextComment(string text){
        if(text.All(c=>c<127)||text.Any(c=>c<32||char.IsSurrogate(c)))return "";
        return " /* \""+text.Replace("*/","* /")+"\" */";
    }

    // ---------------------------------------------------------------- ordering
    // Pure: no side effect, cannot throw (constants, this, non-captured locals).
    // Quiet: reads managed state; can only throw NullReferenceException.
    // Thrower: no side effect, but may throw something else.
    // Effectful: anything that may write state or run arbitrary code.
    enum Order {Pure,Quiet,Thrower,Effectful}
    static Order Max(Order a,Order b)=>a>b?a:b;
    static ExpressionSyntax Unparen(ExpressionSyntax e){while(e is ParenthesizedExpressionSyntax p)e=p.Expression;return e;}
    Order Classify(ExpressionSyntax e){
        if(model.GetConstantValue(e).HasValue)return Order.Pure;
        switch(e){
            case ParenthesizedExpressionSyntax p:return Classify(p.Expression);
            case ThisExpressionSyntax or BaseExpressionSyntax:return Order.Pure;
            case LiteralExpressionSyntax or DefaultExpressionSyntax or TypeOfExpressionSyntax:return Order.Pure;
            case CheckedExpressionSyntax c when c.IsKind(SyntaxKind.UncheckedExpression):return Classify(c.Expression);
            case IdentifierNameSyntax id:{
                var symbol=model.GetSymbolInfo(id).Symbol;
                if(symbol is ILocalSymbol or IParameterSymbol)return capturedVariables.Contains(symbol)||symbol is IParameterSymbol{RefKind:not RefKind.None}?Order.Quiet:Order.Pure;
                if(symbol is IFieldSymbol field)return field.IsStatic?StaticRead(field):RecordStruct(field.ContainingType)||NativeFieldBinding(field)?Order.Effectful:Order.Quiet;
                return Order.Effectful;
            }
            case MemberAccessExpressionSyntax member:{
                var symbol=model.GetSymbolInfo(member).Symbol;
                if(symbol is IFieldSymbol field){
                    if(field.IsStatic)return StaticRead(field);
                    if(field.ContainingType.IsValueType||NativeFieldBinding(field)||externalValueTypes.ContainsKey(Id(field.ContainingType)))return Order.Effectful;
                    return Max(Order.Quiet,Classify(member.Expression));
                }
                if(symbol is IPropertySymbol{Name:"Length"}&&model.GetTypeInfo(member.Expression).Type is IArrayTypeSymbol or {SpecialType:SpecialType.System_String})return Max(Order.Quiet,Classify(member.Expression));
                return Order.Effectful;
            }
            case ElementAccessExpressionSyntax element when element.ArgumentList.Arguments.Count==1&&model.GetTypeInfo(element.Expression).Type is IArrayTypeSymbol:
                return Max(Order.Thrower,Max(Classify(element.Expression),Classify(element.ArgumentList.Arguments[0].Expression)));
            case CastExpressionSyntax cast:{
                var to=model.GetTypeInfo(cast).Type;var from=model.GetTypeInfo(cast.Expression).Type;var inner=Classify(cast.Expression);
                if(to==null||from==null)return Order.Effectful;
                var conversion=compilation.ClassifyConversion(from,to);
                if(conversion.IsUserDefined)return Order.Effectful;
                if(conversion.IsIdentity||conversion.IsNumeric||conversion.IsEnumeration||conversion.IsImplicit&&!conversion.IsUnboxing)return inner;
                return Max(Order.Thrower,inner);
            }
            case BinaryExpressionSyntax binary:{
                if(model.GetOperation(binary) is IBinaryOperation{OperatorMethod:not null})return Order.Effectful;
                if(binary.IsKind(SyntaxKind.AsExpression)||binary.IsKind(SyntaxKind.IsExpression))return Classify(binary.Left);
                var operands=Max(Classify(binary.Left),Classify(binary.Right));
                if(binary.IsKind(SyntaxKind.AddExpression)&&model.GetTypeInfo(binary).Type?.SpecialType==SpecialType.System_String){
                    foreach(var operand in new[]{binary.Left,binary.Right}){var t=model.GetTypeInfo(operand).Type;if(t!=null&&t.SpecialType!=SpecialType.System_String&&!t.IsValueType&&!operand.IsKind(SyntaxKind.NullLiteralExpression))return Order.Effectful;}
                    return operands;
                }
                // Integer / and % throw only for a zero divisor or MinValue / -1.
                if(binary.Kind() is SyntaxKind.DivideExpression or SyntaxKind.ModuloExpression&&Integral(model.GetTypeInfo(binary).Type)){
                    var divisor=model.GetConstantValue(binary.Right);
                    if(divisor.HasValue&&divisor.Value!=null&&!(divisor.Value is ulong)&&Convert.ToInt64(divisor.Value,System.Globalization.CultureInfo.InvariantCulture) is not (0 or -1))return operands;
                    if(divisor.HasValue&&divisor.Value is ulong unsignedDivisor&&unsignedDivisor!=0)return operands;
                    return Max(Order.Thrower,operands);
                }
                return operands;
            }
            case PrefixUnaryExpressionSyntax prefix:return prefix.Kind() is SyntaxKind.PreIncrementExpression or SyntaxKind.PreDecrementExpression?Order.Effectful:Classify(prefix.Operand);
            case ConditionalExpressionSyntax conditional:return Max(Classify(conditional.Condition),Max(Classify(conditional.WhenTrue),Classify(conditional.WhenFalse)));
        }
        return Order.Effectful;
    }
    Order StaticRead(IFieldSymbol field){
        if(field.HasConstantValue)return Order.Pure;
        if(externalFields.ContainsKey(Id(field)))return Order.Effectful;
        // Same conditions as the normal-mode storage fast path: the owner's
        // initializer already ran at this method's entry, so the read is inert.
        var caller=methods.GetValueOrDefault(current);
        if(caller==null||initializingTypes.Count!=0||caller.MethodKind==MethodKind.Constructor||TypeParameters(caller).Length!=0||externalTypes.ContainsKey(Id(caller.ContainingType)))return Order.Effectful;
        return SymbolEqualityComparer.Default.Equals(field.ContainingType,caller.ContainingType)?Order.Quiet:Order.Effectful;
    }
    Order ClassifyAs(ExpressionSyntax e,ITypeSymbol? to)=>to!=null&&model.ClassifyConversion(e,to).IsUserDefined?Order.Effectful:Classify(e);
    HashSet<ISymbol> Writes(ExpressionSyntax e){
        var written=new HashSet<ISymbol>(SymbolEqualityComparer.Default);
        foreach(var node in e.DescendantNodesAndSelf()){
            ExpressionSyntax? target=node switch{AssignmentExpressionSyntax a=>a.Left,PostfixUnaryExpressionSyntax p=>p.Operand,PrefixUnaryExpressionSyntax p when p.Kind() is SyntaxKind.PreIncrementExpression or SyntaxKind.PreDecrementExpression=>p.Operand,ArgumentSyntax a when a.RefKindKeyword!=default=>a.Expression,_=>null};
            if(target!=null&&model.GetSymbolInfo(target).Symbol is ISymbol symbol)written.Add(symbol);
        }
        return written;
    }
    // True when the operands (in C# order) may be evaluated in any order: either
    // none can write anything and all can only fail with NullReferenceException,
    // or exactly one is not pure and no pure operand reads a local it writes.
    bool OrderFree(IReadOnlyList<(Order order,ExpressionSyntax? node)> operands){
        if(operands.All(o=>o.order<=Order.Quiet))return true;
        var impure=operands.Where(o=>o.order!=Order.Pure).ToArray();
        if(impure.Length>1)return false;
        if(impure[0].node==null)return true;
        var written=Writes(impure[0].node!);
        foreach(var operand in operands.Where(o=>o.order==Order.Pure&&o.node!=null))
            foreach(var identifier in operand.node!.DescendantNodesAndSelf().OfType<IdentifierNameSyntax>())
                if(model.GetSymbolInfo(identifier).Symbol is ISymbol read&&written.Contains(read))return false;
        return true;
    }
    bool OrderFree(BinaryExpressionSyntax binary){
        var operation=model.GetOperation(binary) as IBinaryOperation;
        return OrderFree(new[]{(ClassifyAs(binary.Left,operation?.LeftOperand.Type),(ExpressionSyntax?)binary.Left),(ClassifyAs(binary.Right,operation?.RightOperand.Type),(ExpressionSyntax?)binary.Right)});
    }
    // a[i] written as a.get_Item(i): the object expression is evaluated first
    // (C++17); the copy of an lvalue array is only needed if i can change it.
    bool IndexOrderFree(ExpressionSyntax array,ExpressionSyntax index){
        if(Classify(index)!=Order.Effectful)return true;
        var a=Unparen(array);
        if(a is InvocationExpressionSyntax or ObjectCreationExpressionSyntax or ArrayCreationExpressionSyntax)return true;
        return a is IdentifierNameSyntax&&model.GetSymbolInfo(a).Symbol is ILocalSymbol or IParameterSymbol{RefKind:RefKind.None}&&!capturedVariables.Contains(model.GetSymbolInfo(a).Symbol!)&&!Writes(index).Contains(model.GetSymbolInfo(a).Symbol!);
    }
    // Receiver (its null check is a NullReferenceException step) and arguments.
    List<(Order,ExpressionSyntax?)> ReceiverOperands(ExpressionSyntax receiver,List<ExpressionSyntax> args,IMethodSymbol method){
        var operands=new List<(Order,ExpressionSyntax?)>{(Max(Order.Quiet,Classify(receiver)),receiver)};
        for(int i=0;i<args.Count;i++)operands.Add((ClassifyAs(args[i],method.Parameters[i].Type),args[i]));
        return operands;
    }
    static ExpressionSyntax? ReceiverNode(InvocationExpressionSyntax n)=>n.Expression is MemberAccessExpressionSyntax member?member.Expression:null;
    // A C++ postfix/primary expression needs no parentheses before . or ->.
    static string Postfix(string text){
        var t=text.Trim();int depth=0;char quote='\0';bool escape=false;
        for(int i=0;i<t.Length;i++){
            var c=t[i];
            if(quote!='\0'){if(escape)escape=false;else if(c=='\\')escape=true;else if(c==quote)quote='\0';continue;}
            if(c=='"'||c=='\''){if(depth==0&&!(i>0&&t[i-1]=='u'))return "("+t+")";quote=c;continue;}
            if(c is '(' or '[' or '{'||c=='<'&&depth>=0&&i>0&&(char.IsLetterOrDigit(t[i-1])||t[i-1]=='_'||t[i-1]=='>')){depth++;continue;}
            if(c is ')' or ']' or '}'||c=='>'&&depth>0&&!(i>0&&t[i-1]=='-')){depth--;continue;}
            if(depth>0)continue;
            if(char.IsLetterOrDigit(c)||c=='_'||c==':'||c=='.')continue;
            if(c=='-'&&i+1<t.Length&&t[i+1]=='>'){i++;continue;}
            return "("+t+")";
        }
        return depth==0?t:"("+t+")";
    }
    static int MatchingBrace(string text,int open){
        int depth=0;char quote='\0';bool escape=false,line=false,block=false;
        for(int i=open;i<text.Length;i++){
            var c=text[i];var next=i+1<text.Length?text[i+1]:'\0';
            if(line){if(c=='\n')line=false;continue;}
            if(block){if(c=='*'&&next=='/'){block=false;i++;}continue;}
            if(quote!='\0'){if(escape)escape=false;else if(c=='\\')escape=true;else if(c==quote)quote='\0';continue;}
            if(c=='/'&&next=='/'){line=true;i++;continue;}
            if(c=='/'&&next=='*'){block=true;i++;continue;}
            if(c=='"'||c=='\''){quote=c;continue;}
            if(c=='{')depth++;else if(c=='}'&&--depth==0)return i;
        }
        return -1;
    }
    // Condition text without one redundant outer pair of parentheses.
    static string Bare(string text){
        var t=text.Trim();if(!t.StartsWith('(')||!t.EndsWith(')'))return text;
        int depth=0;char quote='\0';bool escape=false;
        for(int i=0;i<t.Length;i++){
            var c=t[i];
            if(quote!='\0'){if(escape)escape=false;else if(c=='\\')escape=true;else if(c==quote)quote='\0';continue;}
            if(c=='"'||c=='\''){quote=c;continue;}
            if(c=='(')depth++;else if(c==')'&&--depth==0)return i==t.Length-1?t[1..^1]:text;
        }
        return text;
    }
    static string Unbrace(string body){var t=body.Trim();return t.StartsWith('{')&&MatchingBrace(t,0)==t.Length-1?t[1..^1]:body;}
    static string Splice(string prefix,string body)=>"{\n"+prefix+"\n"+Unbrace(body)+"\n}";

    // Direct call, or null to keep the ordering lambda. Same operations: receiver,
    // converted arguments and default constants, null check, then the call.
    string? ReadableCall(IMethodSymbol method,List<ExpressionSyntax> args,List<string> argTexts,SyntaxNode site,string? receiver,ExpressionSyntax? receiverNode,string? nativeCallee,bool nativeMember,bool virtualCall,string callee){
        if(method.Parameters.Any(p=>p.RefKind!=RefKind.None))return null;
        var operands=new List<(Order,ExpressionSyntax?)>();
        var thisReceiver=false;ITypeSymbol? receiverType=null;
        if(receiver!=null){
            if(receiver=="cs_this"||receiverNode!=null&&Unparen(receiverNode) is ThisExpressionSyntax or BaseExpressionSyntax){thisReceiver=true;receiverType=methods[current].ContainingType;}
            else if(receiverNode==null)return null;
            else{operands.Add((Max(Order.Quiet,Classify(receiverNode)),receiverNode));receiverType=model.GetTypeInfo(receiverNode).Type;}
        }
        for(int i=0;i<args.Count;i++)operands.Add((ClassifyAs(args[i],method.Parameters[i].Type),args[i]));
        if(!OrderFree(operands))return null;
        var external=nativeCallee!=null;
        var values=new List<string>();
        for(int i=0;i<argTexts.Count;i++){
            var text=argTexts[i];
            // Native overload sets: an implicit reference conversion is spelled out,
            // exactly as the typed temporary of the ordering lambda performed it.
            if(external&&i<args.Count&&model.ClassifyConversion(args[i],method.Parameters[i].Type) is {IsReference:true,IsIdentity:false})
                text="static_cast<"+Type(method.Parameters[i].Type,site)+">("+text+")";
            values.Add(text);
        }
        if(receiver==null)return callee+"("+String.Join(", ",values)+")";
        var memberCall=virtualCall||nativeMember;
        var cast=memberCall&&receiverType!=null&&!SymbolEqualityComparer.Default.Equals(receiverType,method.ContainingType)&&HidesMember(receiverType,method);
        var target=cast?"static_cast<"+Type(method.ContainingType,site)+">("+receiver+")":receiver;
        if(!thisReceiver)target="cs_require("+target+")";
        if(virtualCall)return Postfix(target)+"->"+Slot(method)+"("+String.Join(", ",values)+")";
        if(nativeMember)return Postfix(target)+"->"+nativeCallee!.Substring("member:".Length)+"("+String.Join(", ",values)+")";
        values.Insert(0,target);
        return callee+"("+String.Join(", ",values)+")";
    }
    static bool HidesMember(ITypeSymbol receiverType,IMethodSymbol method){
        for(var type=receiverType as INamedTypeSymbol;type!=null&&!SymbolEqualityComparer.Default.Equals(type.OriginalDefinition,method.ContainingType.OriginalDefinition);type=type.BaseType)
            if(type.GetMembers(method.Name).Any())return true;
        return receiverType.TypeKind==TypeKind.Interface||method.ContainingType.TypeKind==TypeKind.Interface;
    }

    // Expression statements whose value is discarded: assignment, ++ and --.
    string? ReadableEffect(ExpressionSyntax e){
        string? result=e switch{
            PostfixUnaryExpressionSyntax post when post.Kind() is SyntaxKind.PostIncrementExpression or SyntaxKind.PostDecrementExpression=>IncrementStatement(post.Operand,post.IsKind(SyntaxKind.PostIncrementExpression)),
            PrefixUnaryExpressionSyntax pre when pre.Kind() is SyntaxKind.PreIncrementExpression or SyntaxKind.PreDecrementExpression=>IncrementStatement(pre.Operand,pre.IsKind(SyntaxKind.PreIncrementExpression)),
            AssignmentExpressionSyntax a=>AssignStatement(a),
            _=>null};
        if(result!=null)Used(e);
        return result;
    }
    // Plain field storage (no shared/native/value-type binding), receiver kept.
    bool PlainField(IFieldSymbol field)=>!field.IsStatic&&!sharedFields.Contains(Id(field))&&!field.ContainingType.IsValueType&&(!externalTypes.ContainsKey(Id(field.ContainingType))||externalFields.ContainsKey(Id(field)))&&!externalValueTypes.ContainsKey(Id(field.ContainingType))&&!NativeFieldBinding(field);
    // A native binding that is not a plain member name (accessor call, list slot, readonly).
    bool NativeFieldBinding(IFieldSymbol field)=>externalFields.TryGetValue(Id(field),out var binding)&&!Regex.IsMatch(binding,"^[A-Za-z_][A-Za-z0-9_]*$");
    bool SourceStatic(IFieldSymbol field)=>field.IsStatic&&!field.HasConstantValue&&!externalFields.ContainsKey(Id(field))&&field.DeclaringSyntaxReferences.Length!=0&&field.ContainingType.TypeParameters.Length==0&&!externalTypes.ContainsKey(Id(field.ContainingType));
    // Receiver text of a field access when it is this or a pure local.
    string? PureReceiver(ExpressionSyntax target){
        if(target is IdentifierNameSyntax)return "cs_this";
        if(target is not MemberAccessExpressionSyntax member)return null;
        var r=Unparen(member.Expression);
        if(r is ThisExpressionSyntax)return "cs_this";
        if(r is IdentifierNameSyntax&&model.GetSymbolInfo(r).Symbol is ILocalSymbol or IParameterSymbol{RefKind:RefKind.None}&&!capturedVariables.Contains(model.GetSymbolInfo(r).Symbol!))return "cs_require("+ReadLocal(model.GetSymbolInfo(r).Symbol!)+")";
        return null;
    }
    string? IncrementStatement(ExpressionSyntax target,bool add){
        var symbol=model.GetSymbolInfo(target).Symbol;var type=model.GetTypeInfo(target).Type;
        var suffix=NumericSuffix(type);var narrow=suffix=="";if(narrow&&!Integral(type))return null;if(narrow)suffix="i32";
        string Calculation(string value){var c="pls::cs::"+(add?"add_":"sub_")+suffix+"("+value+", 1)";return narrow?"pls::cs::cast_integral<"+Type(type,target)+">("+c+")":c;}
        string storage;
        if(symbol is ILocalSymbol or IParameterSymbol)storage=ReadLocal(symbol);
        else if(symbol is IFieldSymbol staticField&&SourceStatic(staticField))storage=StaticField(staticField,target);
        else if(symbol is IFieldSymbol field&&PlainField(field)&&PureReceiver(target) is string receiver){RequireClass(field.ContainingType,target);storage=receiver+"->"+NativeFieldMember(field,target);}
        else return null;
        return storage+" = "+Calculation(storage);
    }
    string? AssignStatement(AssignmentExpressionSyntax a){
        var symbol=model.GetSymbolInfo(a.Left).Symbol;var type=model.GetTypeInfo(a.Left).Type;var simple=a.IsKind(SyntaxKind.SimpleAssignmentExpression);
        if(symbol is IPropertySymbol property){
            // Setter call: receiver, value, then the call (null check at the call).
            if(!simple||property.SetMethod==null||a.Left is ElementAccessExpressionSyntax||SystemList(property.ContainingType)||SystemDictionary(property.ContainingType))return null;
            string? receiver=null;
            if(!property.IsStatic){
                var receiverNode=a.Left is MemberAccessExpressionSyntax member?member.Expression:null;
                if(receiverNode==null||Unparen(receiverNode) is ThisExpressionSyntax)receiver="cs_this";
                else{
                    if(!OrderFree(new[]{(Max(Order.Quiet,Classify(receiverNode)),(ExpressionSyntax?)receiverNode),(ClassifyAs(a.Right,type),(ExpressionSyntax?)a.Right)}))return null;
                    receiver=Expr(receiverNode);
                }
            }
            return AccessorCall(property.SetMethod,receiver,new[]{Converted(a.Right,type)},a);
        }
        if(symbol is IEventSymbol)return null;
        string? storage=null;
        if(symbol is ILocalSymbol or IParameterSymbol){
            if(!simple&&(capturedVariables.Contains(symbol)?Classify(a.Right)==Order.Effectful:Writes(a.Right).Contains(symbol)))return null;
            storage=ReadLocal(symbol);
        }else if(symbol is IFieldSymbol staticField&&SourceStatic(staticField)){
            if(!simple)return null;
            storage=StaticField(staticField,a.Left);
        }else if(symbol is IFieldSymbol field&&PlainField(field)&&!(field.IsReadOnly&&methods[current].MethodKind!=MethodKind.Constructor)){
            if(RecordStruct(field.ContainingType))return null;
            if(simple){
                var receiverNode=a.Left is MemberAccessExpressionSyntax member?member.Expression:null;
                string receiver;
                if(receiverNode==null||Unparen(receiverNode) is ThisExpressionSyntax)receiver="cs_this";
                else{
                    if(!OrderFree(new[]{(Max(Order.Quiet,Classify(receiverNode)),(ExpressionSyntax?)receiverNode),(ClassifyAs(a.Right,type),(ExpressionSyntax?)a.Right)}))return null;
                    receiver="cs_require("+Expr(receiverNode)+")";
                }
                RequireClass(field.ContainingType,a.Left);
                return receiver+"->"+NativeFieldMember(field,a.Left)+" = "+Converted(a.Right,type);
            }
            var pure=PureReceiver(a.Left);if(pure==null)return null;
            if(pure=="cs_this"?Classify(a.Right)==Order.Effectful:Classify(a.Right)>Order.Quiet)return null;
            RequireClass(field.ContainingType,a.Left);storage=pure+"->"+NativeFieldMember(field,a.Left);
        }else if(a.Left is ElementAccessExpressionSyntax element&&element.ArgumentList.Arguments.Count==1&&simple&&(model.GetTypeInfo(element.Expression).Type is IArrayTypeSymbol||SystemList(model.GetTypeInfo(element.Expression).Type)||SystemDictionary(model.GetTypeInfo(element.Expression).Type))){
            var index=element.ArgumentList.Arguments[0].Expression;
            if(!OrderFree(new[]{(Classify(index),(ExpressionSyntax?)index),(ClassifyAs(a.Right,type),(ExpressionSyntax?)a.Right)}))return null;
            var arrayNode=Unparen(element.Expression);
            var stable=Classify(index)!=Order.Effectful&&Classify(a.Right)!=Order.Effectful||arrayNode is InvocationExpressionSyntax or ObjectCreationExpressionSyntax||
                arrayNode is IdentifierNameSyntax&&model.GetSymbolInfo(arrayNode).Symbol is ILocalSymbol or IParameterSymbol{RefKind:RefKind.None}&&!capturedVariables.Contains(model.GetSymbolInfo(arrayNode).Symbol!)&&!Writes(index).Contains(model.GetSymbolInfo(arrayNode).Symbol!)&&!Writes(a.Right).Contains(model.GetSymbolInfo(arrayNode).Symbol!);
            if(!stable)return null;
            return Postfix(Expr(element.Expression))+".set_Item("+Expr(index)+", "+Converted(a.Right,type)+")";
        }else return null;
        if(simple)return storage+" = "+Converted(a.Right,type);
        return storage+" = "+Cast(CompoundOperation(a,type,storage,Expr(a.Right)),type,type,a);
    }
    // Readable-only helpers, emitted next to the FrameworkHelpers of each assembly.
    const string ReadableHelpers=@"
template<std::size_t N> pls::cs::String literal(const char16_t (&text)[N]){return pls::cs::String::literal(text,N-1);}
template<class T> bool is_null(const T& value){return pls::cs::box(value)==pls::cs::Ref<pls::cs::Object>{};}
static std::int32_t post_increment(std::int32_t& value){const auto old=value;value=pls::cs::add_i32(old,1);return old;}
static std::int64_t post_increment(std::int64_t& value){const auto old=value;value=pls::cs::add_i64(old,1);return old;}
static std::uint32_t post_increment(std::uint32_t& value){const auto old=value;value=pls::cs::add_u32(old,1);return old;}
static std::uint64_t post_increment(std::uint64_t& value){const auto old=value;value=pls::cs::add_u64(old,1);return old;}
static std::int32_t post_decrement(std::int32_t& value){const auto old=value;value=pls::cs::sub_i32(old,1);return old;}
static std::int64_t post_decrement(std::int64_t& value){const auto old=value;value=pls::cs::sub_i64(old,1);return old;}
static std::uint32_t post_decrement(std::uint32_t& value){const auto old=value;value=pls::cs::sub_u32(old,1);return old;}
static std::uint64_t post_decrement(std::uint64_t& value){const auto old=value;value=pls::cs::sub_u64(old,1);return old;}
static std::int32_t pre_increment(std::int32_t& value){value=pls::cs::add_i32(value,1);return value;}
static std::int64_t pre_increment(std::int64_t& value){value=pls::cs::add_i64(value,1);return value;}
static std::uint32_t pre_increment(std::uint32_t& value){value=pls::cs::add_u32(value,1);return value;}
static std::uint64_t pre_increment(std::uint64_t& value){value=pls::cs::add_u64(value,1);return value;}
static std::int32_t pre_decrement(std::int32_t& value){value=pls::cs::sub_i32(value,1);return value;}
static std::int64_t pre_decrement(std::int64_t& value){value=pls::cs::sub_i64(value,1);return value;}
static std::uint32_t pre_decrement(std::uint32_t& value){value=pls::cs::sub_u32(value,1);return value;}
static std::uint64_t pre_decrement(std::uint64_t& value){value=pls::cs::sub_u64(value,1);return value;}
";
}
