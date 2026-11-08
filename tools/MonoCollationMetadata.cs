// Read-only metadata inspection. Never loads or executes the inspected assembly.
using System;
using System.Collections.Generic;
using System.IO;
using System.IO.Compression;
using System.Reflection.Metadata;
using System.Reflection.Metadata.Ecma335;
using System.Reflection.Emit;
using System.Reflection.PortableExecutable;
using System.Security.Cryptography;
using System.Text.Json;

static class MonoCollationMetadata
{
    static object Inspect(string label, Stream stream)
    {
        using var pe = new PEReader(stream, PEStreamOptions.LeaveOpen);
        var md = pe.GetMetadataReader();
        var resources = new List<object>();
        var methods = new List<object>();
        var stringMethods = new List<object>();
        var stringFields = new List<object>();
        var stringData = new List<object>();
        foreach (var handle in md.ManifestResources)
        {
            var resource = md.GetManifestResource(handle);
            var name = md.GetString(resource.Name);
            if (!name.StartsWith("collation.", StringComparison.Ordinal)) continue;
            if (!resource.Implementation.IsNil) throw new InvalidDataException("External collation resource");
            var directory = pe.PEHeaders.CorHeader!.ResourcesDirectory;
            var block = pe.GetSectionData(checked(directory.RelativeVirtualAddress + (int)resource.Offset));
            var reader = block.GetReader();
            int size = reader.ReadInt32();
            byte[] bytes = reader.ReadBytes(size); // Scoped in memory; only hash/size leave this helper.
            resources.Add(new { name, bytes = size, sha256 = Convert.ToHexString(SHA256.HashData(bytes)).ToLowerInvariant() });
        }
        foreach (var handle in md.TypeDefinitions)
        {
            var type = md.GetTypeDefinition(handle);
            string name = md.GetString(type.Namespace) + "." + md.GetString(type.Name);
            bool isString = name == "System.String";
            if (!isString && name != "Mono.Globalization.Unicode.SimpleCollator" && name != "Mono.Globalization.Unicode.MSCompatUnicodeTable") continue;
            if (isString) foreach (var fieldHandle in type.GetFields()) {
                var field=md.GetFieldDefinition(fieldHandle);
                if(md.GetString(field.Name).IndexOf("White",StringComparison.OrdinalIgnoreCase)<0)continue;
                stringFields.Add(new {name=md.GetString(field.Name),signature=Convert.ToHexString(md.GetBlobBytes(field.Signature)).ToLowerInvariant(),attributes=field.Attributes.ToString()});
            }
            foreach (var methodHandle in type.GetMethods())
            {
                var method = md.GetMethodDefinition(methodHandle);
                string methodName=md.GetString(method.Name);
                if(isString && !(methodName.StartsWith("Trim",StringComparison.Ordinal)||methodName=="FindNotWhiteSpace"||methodName=="FindNotInTable"||methodName==".cctor"))continue;
                if (method.RelativeVirtualAddress == 0) continue;
                byte[] il = pe.GetMethodBody(method.RelativeVirtualAddress).GetILBytes()!;
                object record=new { type = name, name = methodName,
                    signature = Convert.ToHexString(md.GetBlobBytes(method.Signature)).ToLowerInvariant(),
                    il_bytes = il.Length, il_sha256 = Convert.ToHexString(SHA256.HashData(il)).ToLowerInvariant() };
                if(isString)stringMethods.Add(record);else methods.Add(record);
                if(isString&&methodName==".cctor") {
                    var opcodes=new Dictionary<ushort,OpCode>();
                    foreach(var field in typeof(OpCodes).GetFields())if(field.GetValue(null) is OpCode op)opcodes[unchecked((ushort)op.Value)]=op;
                    for(int pos=0;pos<il.Length;){
                        ushort code=il[pos++];if(code==0xfe)code=(ushort)(0xfe00|il[pos++]);var op=opcodes[code];
                        int size=op.OperandType switch { OperandType.InlineNone=>0,OperandType.ShortInlineBrTarget or OperandType.ShortInlineI or OperandType.ShortInlineVar=>1,OperandType.InlineVar=>2,OperandType.InlineI8 or OperandType.InlineR=>8,OperandType.InlineSwitch=>checked(4+4*BitConverter.ToInt32(il,pos)),_=>4};
                        if(op==OpCodes.Ldtoken){int token=BitConverter.ToInt32(il,pos);if((token>>24)==4){
                            var dataField=md.GetFieldDefinition(MetadataTokens.FieldDefinitionHandle(token&0xffffff));int rva=dataField.GetRelativeVirtualAddress();
                            if(rva!=0){var blob=md.GetBlobReader(dataField.Signature);blob.ReadSignatureHeader();if(blob.ReadByte()!=0x11)throw new InvalidDataException("Unexpected constant field type");
                                var dataType=(TypeDefinitionHandle)blob.ReadTypeHandle();int length=md.GetTypeDefinition(dataType).GetLayout().Size;
                                byte[] bytes=pe.GetSectionData(rva).GetReader(0,length).ReadBytes(length);
                                stringData.Add(new{name=md.GetString(dataField.Name),bytes=length,sha256=Convert.ToHexString(SHA256.HashData(bytes)).ToLowerInvariant()});
                            }
                        }}pos+=size;
                    }
                }
            }
        }
        var image=pe.GetEntireImage();
        string assemblyHash=Convert.ToHexString(SHA256.HashData(image.GetReader().ReadBytes(image.Length))).ToLowerInvariant();
        return new { label, assembly_version = md.GetAssemblyDefinition().Version.ToString(),assembly_sha256=assemblyHash, resources, methods,string_trim_methods=stringMethods,string_whitespace_fields=stringFields,string_cctor_constant_data=stringData };
    }
    static void Main(string[] args)
    {
        var records = new List<object>();
        foreach (string path in args)
        {
            if (path.EndsWith(".apk", StringComparison.OrdinalIgnoreCase))
            {
                using var archive = ZipFile.OpenRead(path);
                var entry = archive.GetEntry("assets/bin/Data/Managed/mscorlib.dll") ?? throw new InvalidDataException("APK mscorlib absent");
                using var memory = new MemoryStream();
                using (var input = entry.Open()) input.CopyTo(memory);
                memory.Position = 0;
                records.Add(Inspect("APK/mscorlib.dll", memory));
            }
            else
            {
                using var stream = File.OpenRead(path);
                records.Add(Inspect(path, stream));
            }
        }
        Console.WriteLine(JsonSerializer.Serialize(records));
    }
}
