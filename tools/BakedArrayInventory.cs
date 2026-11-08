// Analysis-only: the original managed image remains in memory from the own APK.
using System;
using System.IO;
using System.IO.Compression;
using System.Linq;
using System.Collections.Generic;
using System.Reflection.Metadata;
using System.Reflection.Metadata.Ecma335;
using System.Reflection.PortableExecutable;
using System.Reflection;
using System.Reflection.Emit;
using System.Security.Cryptography;
using System.Text;
using System.Text.Json;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Syntax;
sealed class Input {public string apk{get;set;}="";public string reference{get;set;}="";public string[] sources{get;set;}=Array.Empty<string>();public string[] references{get;set;}=Array.Empty<string>();public string output{get;set;}="";}
static class Program {
    static string Hash(byte[] b)=>Convert.ToHexString(SHA256.HashData(b)).ToLowerInvariant();
    sealed record Payload(byte[] Bytes,string? ElementType,int? Count,string Origin,string FieldToken,string MethodToken,int? IlOffset);
    sealed record Element(string Name,int Size);
    sealed record Instruction(int Offset,int End,OpCode Code,object? Operand,int[] Targets);
    readonly record struct Constant(ulong Bits,int Kind) {
        public static Constant I4(int value)=>new(unchecked((uint)value),4);
        public static Constant I8(long value)=>new(unchecked((ulong)value),8);
        public static Constant R4(float value)=>new(unchecked((uint)BitConverter.SingleToInt32Bits(value)),12);
        public static Constant R8(double value)=>new(unchecked((ulong)BitConverter.DoubleToInt64Bits(value)),13);
        public bool Integral=>Kind==4||Kind==8;
        public long Signed=>Kind==4?unchecked((int)Bits):unchecked((long)Bits);
        public double Floating=>Kind==12?BitConverter.Int32BitsToSingle(unchecked((int)Bits)):BitConverter.Int64BitsToDouble(unchecked((long)Bits));
    }
    static readonly Dictionary<ushort,OpCode> OpCodesByValue=typeof(OpCodes).GetFields(BindingFlags.Public|BindingFlags.Static)
        .Where(f=>f.FieldType==typeof(OpCode)).Select(f=>(OpCode)f.GetValue(null)!).ToDictionary(o=>unchecked((ushort)o.Value));
    static Element? GetElement(MetadataReader md,int token){
        var handle=MetadataTokens.EntityHandle(token);string name;
        if(handle.Kind==HandleKind.TypeReference){var t=md.GetTypeReference((TypeReferenceHandle)handle);name=md.GetString(t.Namespace)+"."+md.GetString(t.Name);}
        else if(handle.Kind==HandleKind.TypeDefinition){var t=md.GetTypeDefinition((TypeDefinitionHandle)handle);name=md.GetString(t.Namespace)+"."+md.GetString(t.Name);}
        else return null;
        int size=name switch{"System.Boolean" or "System.Byte" or "System.SByte"=>1,"System.Char" or "System.Int16" or "System.UInt16"=>2,"System.Int32" or "System.UInt32" or "System.Single"=>4,"System.Int64" or "System.UInt64" or "System.Double"=>8,_=>0};
        return size==0?null:new(name,size);
    }
    static List<Instruction> Decode(byte[] il){
        var list=new List<Instruction>();int p=0;
        while(p<il.Length){
            int start=p;ushort code=il[p++];if(code==0xFE){if(p==il.Length)throw new BadImageFormatException("Truncated IL opcode");code=(ushort)(0xFE00|il[p++]);}
            if(!OpCodesByValue.TryGetValue(code,out var op))throw new BadImageFormatException("Unknown IL opcode");
            object? operand=null;int size=op.OperandType switch{OperandType.InlineNone=>0,OperandType.ShortInlineI or OperandType.ShortInlineVar or OperandType.ShortInlineBrTarget=>1,OperandType.InlineVar=>2,OperandType.InlineI or OperandType.ShortInlineR or OperandType.InlineBrTarget or OperandType.InlineField or OperandType.InlineMethod or OperandType.InlineSig or OperandType.InlineString or OperandType.InlineTok or OperandType.InlineType=>4,OperandType.InlineI8 or OperandType.InlineR=>8,OperandType.InlineSwitch=>-1,_=>throw new BadImageFormatException("Unsupported IL operand shape")};
            if(size==-1){if(p+4>il.Length)throw new BadImageFormatException("Truncated switch");int n=BitConverter.ToInt32(il,p);if(n<0||n>(il.Length-p-4)/4)throw new BadImageFormatException("Invalid switch extent");size=4+n*4;}
            if(size>il.Length-p)throw new BadImageFormatException("Truncated IL operand");
            if(size==1)operand=unchecked((sbyte)il[p]);else if(size==2)operand=BitConverter.ToUInt16(il,p);
            else if(size==4)operand=op.OperandType==OperandType.ShortInlineR?(object)BitConverter.ToSingle(il,p):BitConverter.ToInt32(il,p);
            else if(size==8)operand=op.OperandType==OperandType.InlineR?(object)BitConverter.ToDouble(il,p):BitConverter.ToInt64(il,p);
            int end=p+size;int[]targets=Array.Empty<int>();
            if(op.OperandType==OperandType.ShortInlineBrTarget)targets=new[]{end+unchecked((sbyte)il[p])};
            else if(op.OperandType==OperandType.InlineBrTarget)targets=new[]{end+BitConverter.ToInt32(il,p)};
            else if(op.OperandType==OperandType.InlineSwitch){int n=BitConverter.ToInt32(il,p);targets=Enumerable.Range(0,n).Select(i=>end+BitConverter.ToInt32(il,p+4+i*4)).ToArray();}
            list.Add(new(start,end,op,operand,targets));p=end;
        }
        return list;
    }
    static bool ConvertConstant(Constant value,string name,out Constant result){
        result=value;bool integral=value.Integral;
        if(name=="neg"){
            result=value.Kind switch{4=>Constant.I4(unchecked(-unchecked((int)value.Bits))),8=>Constant.I8(unchecked(-unchecked((long)value.Bits))),12=>Constant.R4(-BitConverter.Int32BitsToSingle(unchecked((int)value.Bits))),13=>Constant.R8(-value.Floating),_=>value};return true;
        }
        if(!name.StartsWith("conv.",StringComparison.Ordinal)||name.Contains("ovf"))return false;
        ulong bits=value.Bits;
        if(!integral&&name is not "conv.r4" and not "conv.r8"){double n=value.Floating;if(!Double.IsFinite(n)||n< -9223372036854775808.0||n>=9223372036854775808.0)return false;bits=unchecked((ulong)(long)n);}
        result=name switch{
            "conv.i1"=>Constant.I4(unchecked((sbyte)bits)),"conv.u1"=>Constant.I4(unchecked((byte)bits)),
            "conv.i2"=>Constant.I4(unchecked((short)bits)),"conv.u2"=>Constant.I4(unchecked((ushort)bits)),
            "conv.i4" or "conv.u4"=>Constant.I4(unchecked((int)bits)),
            "conv.i8"=>Constant.I8(integral?value.Signed:unchecked((long)bits)),
            "conv.u8"=>new Constant(integral&&value.Kind==4?(uint)value.Bits:bits,8),
            "conv.r4"=>Constant.R4((float)(integral?value.Signed:value.Floating)),
            "conv.r8"=>Constant.R8(integral?value.Signed:value.Floating),
            "conv.r.un"=>Constant.R8(value.Kind==4?(uint)value.Bits:value.Bits),_=>value};
        return name is "conv.i1" or "conv.u1" or "conv.i2" or "conv.u2" or "conv.i4" or "conv.u4" or "conv.i8" or "conv.u8" or "conv.r4" or "conv.r8" or "conv.r.un";
    }
    static bool ReadConstant(List<Instruction>code,int start,out Constant value,out int end){
        value=default;end=start;if(start<0||start>=code.Count)return false;var op=code[start];string name=op.Code.Name!;
        if(name=="ldc.i4.m1")value=Constant.I4(-1);
        else if(name.StartsWith("ldc.i4.")&&name.Length==8&&name[7]>='0'&&name[7]<='8')value=Constant.I4(name[7]-'0');
        else if(name=="ldc.i4")value=Constant.I4((int)op.Operand!);else if(name=="ldc.i4.s")value=Constant.I4((sbyte)op.Operand!);
        else if(name=="ldc.i8")value=Constant.I8((long)op.Operand!);else if(name=="ldc.r4")value=Constant.R4((float)op.Operand!);else if(name=="ldc.r8")value=Constant.R8((double)op.Operand!);else return false;
        end=start+1;
        while(end<code.Count&&ConvertConstant(value,code[end].Code.Name!,out var converted)){value=converted;++end;}
        return true;
    }
    static bool ConstantBefore(List<Instruction>code,int end,out Constant value){
        int start=end-1;while(start>=0&&(code[start].Code.Name=="neg"||code[start].Code.Name!.StartsWith("conv.",StringComparison.Ordinal)))--start;
        return ReadConstant(code,start,out value,out int found)&&found==end;
    }
    static bool StoreConstant(byte[]data,int index,Element element,Constant value,string store){
        bool floating=element.Name is "System.Single" or "System.Double";
        string expected=element.Name switch{"System.Single"=>"stelem.r4","System.Double"=>"stelem.r8",_=>"stelem.i"+element.Size};
        if(store!=expected)return false;
        byte[]bytes;
        if(floating){if(value.Integral)return false;bytes=element.Size==4?BitConverter.GetBytes((float)value.Floating):BitConverter.GetBytes(value.Floating);}
        else {if(!value.Integral)return false;bytes=BitConverter.GetBytes(value.Bits);if(!BitConverter.IsLittleEndian)Array.Reverse(bytes);}
        if(floating&&!BitConverter.IsLittleEndian)Array.Reverse(bytes);
        Buffer.BlockCopy(bytes,0,data,index*element.Size,element.Size);return true;
    }
    static bool IsInitializeArray(MetadataReader md,int token){
        var handle=MetadataTokens.EntityHandle(token);if(handle.Kind!=HandleKind.MemberReference)return false;
        var member=md.GetMemberReference((MemberReferenceHandle)handle);if(md.GetString(member.Name)!="InitializeArray"||member.Parent.Kind!=HandleKind.TypeReference)return false;
        var parent=md.GetTypeReference((TypeReferenceHandle)member.Parent);return md.GetString(parent.Namespace)=="System.Runtime.CompilerServices"&&md.GetString(parent.Name)=="RuntimeHelpers";
    }
    static IEnumerable<Payload> ScanLiteralArrays(PEReader pe,MetadataReader md,List<Payload>rva,Dictionary<string,int>diagnostics){
        void Note(string reason){diagnostics[reason]=diagnostics.GetValueOrDefault(reason)+1;}
        var fields=rva.ToDictionary(p=>p.FieldToken);
        foreach(var handle in md.MethodDefinitions){var method=md.GetMethodDefinition(handle);if(method.RelativeVirtualAddress==0)continue;
            var body=pe.GetMethodBody(method.RelativeVirtualAddress);var code=Decode(body.GetILBytes()??Array.Empty<byte>());
            var boundaries=code.SelectMany(i=>i.Targets).Concat(body.ExceptionRegions.SelectMany(r=>new[]{r.HandlerOffset,r.TryOffset,r.Kind==ExceptionRegionKind.Filter?r.FilterOffset:-1})).ToHashSet();
            for(int i=0;i<code.Count;++i){if(code[i].Code.Name!="newarr")continue;var element=GetElement(md,(int)code[i].Operand!);if(element==null)continue;
                if(boundaries.Contains(code[i].Offset)){Note("control-entry-at-newarr");continue;}
                if(!ConstantBefore(code,i,out var length)||!length.Integral||length.Signed<0||length.Signed>1000000){Note("nonconstant-or-bounded-length");continue;}
                int count=(int)length.Signed;var bytes=new byte[checked(count*element.Size)];int next=i+1;bool valid=true;string fieldToken="";
                while(next<code.Count&&code[next].Code.Name=="dup"){
                    int cursor=next+1;
                    if(cursor+1<code.Count&&code[cursor].Code.Name=="ldtoken"&&code[cursor+1].Code.Name=="call"&&IsInitializeArray(md,(int)code[cursor+1].Operand!)){
                        string token="0x"+((int)code[cursor].Operand!).ToString("x8");if(!fields.TryGetValue(token,out var raw)||raw.Bytes.Length<bytes.Length){valid=false;Note("InitializeArray-extent-unproven");break;}
                        Buffer.BlockCopy(raw.Bytes,0,bytes,0,bytes.Length);fieldToken=token;next=cursor+2;continue;
                    }
                    if(!ReadConstant(code,cursor,out var index,out cursor)||!index.Integral||index.Signed<0||index.Signed>=count||!ReadConstant(code,cursor,out var value,out cursor)||cursor>=code.Count||!StoreConstant(bytes,(int)index.Signed,element,value,code[cursor].Code.Name!)){
                        valid=false;Note("nonliteral-dup-initializer");break;
                    }
                    next=cursor+1;
                }
                if(!valid)continue;
                if(code.Skip(i+1).Take(next-i-1).Any(instruction=>boundaries.Contains(instruction.Offset))){Note("control-entry-inside-initializer");continue;}
                yield return new(bytes,element.Name,count,fieldToken.Length==0?"original IL literal newarr/stelem":"original IL InitializeArray/FieldRVA",fieldToken,"0x"+MetadataTokens.GetToken(handle).ToString("x8"),code[i].Offset);
            }
        }
    }
    static List<Payload>ReadRvaPayloads(PEReader pe,MetadataReader md){
        var result=new List<Payload>();
        foreach(var handle in md.FieldDefinitions){
            var field=md.GetFieldDefinition(handle);var rva=field.GetRelativeVirtualAddress();if(rva==0)continue;
            var signature=md.GetBlobReader(field.Signature);if(signature.ReadByte()!=0x06)throw new Exception("Unsupported RVA field signature");
            var code=signature.ReadByte();int size=0;
            if(code==0x11){var token=signature.ReadCompressedInteger();if((token&3)!=0)throw new Exception("External RVA field type");size=md.GetTypeDefinition(MetadataTokens.TypeDefinitionHandle(token>>2)).GetLayout().Size;}
            else size=code switch{0x02 or 0x04 or 0x05=>1,0x03 or 0x06 or 0x07=>2,0x08 or 0x09 or 0x0c=>4,0x0a or 0x0b or 0x0d=>8,_=>throw new Exception("Unsupported RVA primitive")};
            if(size<=0)throw new Exception("Missing explicit RVA field extent");result.Add(new(pe.GetSectionData(rva).GetContent(0,size).ToArray(),null,null,"original FieldRVA payload","0x"+MetadataTokens.GetToken(handle).ToString("x8"),"",null));
        }
        return result;
    }
    // Own synthetic source. These arrays are never called; the self-test reads
    // this helper's PE metadata/IL to prove extraction and negative patterns.
    static void FixtureArrays(int unknown){
        GC.KeepAlive(new int[]{0,0});GC.KeepAlive(new int[]{17,-23});
        GC.KeepAlive(new uint[]{UInt32.MaxValue,7});GC.KeepAlive(new byte[]{2,255});
        GC.KeepAlive(new short[]{Int16.MinValue,Int16.MaxValue});GC.KeepAlive(new char[]{'A','\0'});
        GC.KeepAlive(new bool[]{true,false});GC.KeepAlive(new float[]{1.25f,-0.5f});
        GC.KeepAlive(new double[]{1.25,-0.5});GC.KeepAlive(new long[]{Int64.MinValue,17});
        GC.KeepAlive(new byte[]{1,2,3,4,5,6});
        GC.KeepAlive(new int[]{17,unknown});GC.KeepAlive(new int[unknown]);
        GC.KeepAlive(new int[unknown==0?2:3]);
    }
    static void SelfTest(){
        using var stream=File.OpenRead(typeof(Program).Assembly.Location);using var pe=new PEReader(stream);var md=pe.GetMetadataReader();
        var method=md.MethodDefinitions.Single(h=>md.GetString(md.GetMethodDefinition(h).Name)==nameof(FixtureArrays));
        var token="0x"+MetadataTokens.GetToken(method).ToString("x8");var diagnostics=new Dictionary<string,int>();
        var arrays=ScanLiteralArrays(pe,md,ReadRvaPayloads(pe,md),diagnostics).Where(p=>p.MethodToken==token).ToArray();
        static byte[] Pack(Action<BinaryWriter>fill){using var b=new MemoryStream();using(var writer=new BinaryWriter(b,Encoding.UTF8,true))fill(writer);return b.ToArray();}
        var expected=new[]{
            ("System.Int32",Pack(w=>{w.Write(0);w.Write(0);})),("System.Int32",Pack(w=>{w.Write(17);w.Write(-23);})),
            ("System.UInt32",Pack(w=>{w.Write(UInt32.MaxValue);w.Write(7u);})),("System.Byte",new byte[]{2,255}),
            ("System.Int16",Pack(w=>{w.Write(Int16.MinValue);w.Write(Int16.MaxValue);})),("System.Char",Pack(w=>{w.Write((ushort)'A');w.Write((ushort)0);})),
            ("System.Boolean",new byte[]{1,0}),("System.Single",Pack(w=>{w.Write(1.25f);w.Write(-0.5f);})),
            ("System.Double",Pack(w=>{w.Write(1.25);w.Write(-0.5);})),("System.Int64",Pack(w=>{w.Write(Int64.MinValue);w.Write(17L);})),
            ("System.Byte",new byte[]{1,2,3,4,5,6})};
        int passed=expected.Count(e=>arrays.Any(a=>a.ElementType==e.Item1&&a.Bytes.AsSpan().SequenceEqual(e.Item2)));
        bool negative=arrays.Length==expected.Length;
        var convCases=new[]{(Constant.I4(-1),"conv.u1",Constant.I4(255)),(Constant.I4(255),"conv.i1",Constant.I4(-1)),(Constant.I4(-1),"conv.i8",Constant.I8(-1)),(Constant.I4(-1),"conv.u8",new Constant(UInt32.MaxValue,8)),(Constant.I4(7),"neg",Constant.I4(-7)),(Constant.R4(1.25f),"conv.r8",Constant.R8(1.25))};
        int convPassed=convCases.Count(c=>ConvertConstant(c.Item1,c.Item2,out var result)&&result==c.Item3);
        if(passed!=expected.Length||!negative||convPassed!=convCases.Length)throw new Exception("Own literal scanner self-test failed without publishing payloads");
        Console.WriteLine(JsonSerializer.Serialize(new{operation="own-PE-literal-scanner-self-test",status="PASS",cases=expected.Length+1+convCases.Length,passed=passed+1+convPassed,negative_initializer_patterns_refused=true,original_binary_used=false}));
    }
    static void Main(string[] args){
        if(args.Length==1&&args[0]=="--self-test"){SelfTest();return;}
        var input=JsonSerializer.Deserialize<Input>(File.ReadAllText(args[0]))!;
        if(Hash(File.ReadAllBytes(input.apk))!="d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8")throw new Exception("APK identity differs");
        using var archive=ZipFile.OpenRead(input.apk);using var memory=new MemoryStream();
        using(var stream=archive.GetEntry("assets/bin/Data/Managed/Assembly-CSharp.dll")!.Open())stream.CopyTo(memory);
        memory.Position=0;using var pe=new PEReader(memory);var md=pe.GetMetadataReader();
        var payloads=ReadRvaPayloads(pe,md);
        var scanDiagnostics=new Dictionary<string,int>();var literals=ScanLiteralArrays(pe,md,payloads,scanDiagnostics).ToList();
        var literalIndex=literals.GroupBy(p=>p.ElementType+"\n"+p.Count+"\n"+Hash(p.Bytes)).ToDictionary(g=>g.Key,g=>g.First());
        var trees=input.sources.Select(p=>CSharpSyntaxTree.ParseText(File.ReadAllText(p),path:p)).ToArray();
        var compilation=CSharpCompilation.Create("Assembly-CSharp",trees,input.references.Select(p=>MetadataReference.CreateFromFile(p)),new CSharpCompilationOptions(OutputKind.DynamicallyLinkedLibrary,assemblyIdentityComparer:DesktopAssemblyIdentityComparer.Default,metadataImportOptions:MetadataImportOptions.All));
        var errors=compilation.GetDiagnostics().Where(d=>d.Severity==DiagnosticSeverity.Error).ToArray();if(errors.Length!=0)throw new Exception("Source binding errors: "+errors.Length+"; "+String.Join("; ",errors.Take(3).Select(e=>e.Id+":"+e.GetMessage())));
        var matched=new List<object>();var unmatched=new List<object>();var manifest=new SortedDictionary<string,string>(StringComparer.Ordinal);Directory.CreateDirectory(input.output);
        foreach(var tree in trees){var model=compilation.GetSemanticModel(tree);
            foreach(var node in tree.GetRoot().DescendantNodes().Where(n=>n is ArrayCreationExpressionSyntax or ImplicitArrayCreationExpressionSyntax)){
                var initializer=node is ArrayCreationExpressionSyntax explicitArray?explicitArray.Initializer:((ImplicitArrayCreationExpressionSyntax)node).Initializer;
                if(initializer==null||initializer.Expressions.Count==0||model.GetTypeInfo(node).Type is not IArrayTypeSymbol type||type.Rank!=1)continue;
                var values=initializer.Expressions.Select(e=>model.GetConstantValue(e)).ToArray();if(values.Any(v=>!v.HasValue))continue;
                using var bytes=new MemoryStream();using(var writer=new BinaryWriter(bytes,Encoding.UTF8,true)){
                    bool supported=true;foreach(var value in values){var v=value.Value;try{switch(type.ElementType.SpecialType){
                        case SpecialType.System_Boolean:writer.Write(Convert.ToBoolean(v));break;
                        case SpecialType.System_Byte:writer.Write(Convert.ToByte(v));break;
                        case SpecialType.System_SByte:writer.Write(Convert.ToSByte(v));break;
                        case SpecialType.System_Char:writer.Write((ushort)Convert.ToChar(v));break;
                        case SpecialType.System_Int16:writer.Write(Convert.ToInt16(v));break;
                        case SpecialType.System_UInt16:writer.Write(Convert.ToUInt16(v));break;
                        case SpecialType.System_Int32:writer.Write(Convert.ToInt32(v));break;
                        case SpecialType.System_UInt32:writer.Write(Convert.ToUInt32(v));break;
                        case SpecialType.System_Int64:writer.Write(Convert.ToInt64(v));break;
                        case SpecialType.System_UInt64:writer.Write(Convert.ToUInt64(v));break;
                        case SpecialType.System_Single:writer.Write(Convert.ToSingle(v));break;
                        case SpecialType.System_Double:writer.Write(Convert.ToDouble(v));break;
                        default:supported=false;break;
                    }}catch(OverflowException){supported=false;}}
                    if(!supported)continue;
                }
                var candidate=bytes.ToArray();var source=Path.GetRelativePath(input.reference,tree.FilePath).Replace('\\','/');
                var id=Hash(Encoding.UTF8.GetBytes("Assembly-CSharp\n"+source+"\n"+node.SpanStart));
                var equal=payloads.FirstOrDefault(p=>p.Bytes.AsSpan().SequenceEqual(candidate));
                if(equal==null){var elementName=type.ElementType.SpecialType.ToString().Replace("System_","System.");literalIndex.TryGetValue(elementName+"\n"+values.Length+"\n"+Hash(candidate),out equal);}
                var record=new{id,source,span_start=node.SpanStart,element_type=type.ElementType.ToDisplayString(),count=values.Length,bytes=candidate.Length,origin=equal?.Origin??"UNKNOWN",
                    provenance=new{original_field_token=equal?.FieldToken,original_method_token=equal?.MethodToken,original_il_offset=equal?.IlOffset,comparison="exact typed IL literal or exact FieldRVA payload; source occurrence not uniquely bound"}};
                if(equal!=null){File.WriteAllBytes(Path.Combine(input.output,id+".bytes"),equal.Bytes);manifest.Add(id,Hash(equal.Bytes));matched.Add(record);}else unmatched.Add(record);
            }
        }
        string manifestText=JsonSerializer.Serialize(manifest,new JsonSerializerOptions{WriteIndented=true})+"\n";
        File.WriteAllText(Path.Combine(input.output,"manifest.json"),manifestText,new UTF8Encoding(false));
        File.WriteAllText(args[1],JsonSerializer.Serialize(new{operation="original-FieldRVA-and-IL-literal-backed-array-inventory",rva_fields=payloads.Count,il_literal_arrays=literals.Count,il_scan_diagnostics=scanDiagnostics,matched,unmatched,private_manifest_sha256=Hash(Encoding.UTF8.GetBytes(manifestText)),original_assembly_executed=false,original_assembly_written=false},new JsonSerializerOptions{WriteIndented=true})+"\n",new UTF8Encoding(false));
    }
}
