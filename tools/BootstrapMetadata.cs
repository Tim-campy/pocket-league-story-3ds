// Read-only PE/CLI proof from the user's APK; no target assembly is loaded.
using System;
using System.Collections.Generic;
using System.IO;
using System.IO.Compression;
using System.Linq;
using System.Reflection;
using System.Reflection.Emit;
using System.Reflection.Metadata;
using System.Reflection.Metadata.Ecma335;
using System.Reflection.PortableExecutable;
using System.Security.Cryptography;
using System.Text.Json;
class BootstrapMetadata {
 static readonly Dictionary<ushort,OpCode> Ops=typeof(OpCodes).GetFields(BindingFlags.Static|BindingFlags.Public).Where(f=>f.FieldType==typeof(OpCode)).Select(f=>(OpCode)f.GetValue(null)!).ToDictionary(o=>unchecked((ushort)o.Value));
 static string TypeName(MetadataReader r,EntityHandle h){
  if(h.IsNil)return "";
  if(h.Kind==HandleKind.TypeDefinition){var t=r.GetTypeDefinition((TypeDefinitionHandle)h);var n=r.GetString(t.Name);if(!t.GetDeclaringType().IsNil)return TypeName(r,t.GetDeclaringType())+"/"+n;var ns=r.GetString(t.Namespace);return ns.Length==0?n:ns+"."+n;}
  if(h.Kind==HandleKind.TypeReference){var t=r.GetTypeReference((TypeReferenceHandle)h);var n=r.GetString(t.Name);var ns=r.GetString(t.Namespace);return ns.Length==0?n:ns+"."+n;}
  return h.IsNil?"":h.Kind.ToString();
 }
 static (string Owner,string Name) Member(MetadataReader r,EntityHandle h){
  if(h.Kind==HandleKind.MethodDefinition){var m=r.GetMethodDefinition((MethodDefinitionHandle)h);return(TypeName(r,m.GetDeclaringType()),r.GetString(m.Name));}
  if(h.Kind==HandleKind.FieldDefinition){var f=r.GetFieldDefinition((FieldDefinitionHandle)h);return(TypeName(r,f.GetDeclaringType()),r.GetString(f.Name));}
  if(h.Kind==HandleKind.MemberReference){var m=r.GetMemberReference((MemberReferenceHandle)h);return(TypeName(r,m.Parent),r.GetString(m.Name));}
  return("","");
 }
 static int OperandSize(OperandType kind,byte[] il,int p){return kind switch {
  OperandType.InlineNone=>0,OperandType.ShortInlineBrTarget or OperandType.ShortInlineI or OperandType.ShortInlineVar=>1,
  OperandType.InlineVar=>2,OperandType.InlineI8 or OperandType.InlineR=>8,
  OperandType.InlineSwitch=>checked(4+BitConverter.ToInt32(il,p)*4),_=>4};}
 static void Main(string[] args){
  using var archive=ZipFile.OpenRead(args[0]);var documents=new List<object>();var derived=new List<object>();var constructors=new List<object>();var singletonWrites=new List<object>();var fepWrites=new List<object>();var copy=new List<object>();var skipped=new List<object>();
  MetadataReader? library=null;PEReader? libraryPe=null;MemoryStream? libraryStream=null;
  foreach(var file in new[]{"KairoLibrary.dll","Assembly-CSharp.dll"}){
   var entries=archive.Entries.Where(e=>e.FullName.EndsWith("/"+file,StringComparison.Ordinal)).ToArray();if(entries.Length!=1)throw new Exception("Managed APK entry is not unique");
   using var input=entries[0].Open();using var bytes=new MemoryStream();input.CopyTo(bytes);var data=bytes.ToArray();var memory=new MemoryStream(data);var pe=new PEReader(memory);var r=pe.GetMetadataReader();
   documents.Add(new {assembly=file,sha256=Convert.ToHexString(SHA256.HashData(data)).ToLowerInvariant(),type_definitions=r.TypeDefinitions.Count});
   if(file=="KairoLibrary.dll"){library=r;libraryPe=pe;libraryStream=memory;}
   foreach(var handle in r.TypeDefinitions){var type=r.GetTypeDefinition(handle);var name=TypeName(r,handle);var parent=TypeName(r,type.BaseType);
    if(parent=="kairo.unity.ui.SaveRecorder"||parent=="kairo.unity.panel.FepPanel")derived.Add(new {assembly=file,type=name,parent});
    if(name=="cfg.MyConfig"){
     var lr=library??throw new Exception("Library metadata must be read first");var config=lr.TypeDefinitions.Single(h=>TypeName(lr,h)=="kairo.common.cfg.Config");
     var targets=lr.GetTypeDefinition(config).GetFields().Select(h=>(Handle:h,Value:lr.GetFieldDefinition(h))).Where(v=>(v.Value.Attributes&FieldAttributes.FieldAccessMask)==FieldAttributes.Public).ToDictionary(v=>lr.GetString(v.Value.Name));
     foreach(var fieldHandle in type.GetFields()){
      var field=r.GetFieldDefinition(fieldHandle);if((field.Attributes&FieldAttributes.Static)==0)continue;var fieldName=r.GetString(field.Name);
      if(fieldName=="APPLI_TYPE"){skipped.Add(new {source="F:cfg.MyConfig."+fieldName,reason="explicit source exclusion"});continue;}
      if(!targets.TryGetValue(fieldName,out var target)){skipped.Add(new {source="F:cfg.MyConfig."+fieldName,reason="Config.GetField returned null"});continue;}
      var from=r.GetBlobBytes(field.Signature);var to=lr.GetBlobBytes(target.Value.Signature);
      if(!from.SequenceEqual(to))throw new Exception("Config primitive field signature differs");
      copy.Add(new {source="F:cfg.MyConfig."+fieldName,target="F:kairo.common.cfg.Config."+fieldName,source_token=MetadataTokens.GetToken(fieldHandle),target_token=MetadataTokens.GetToken(target.Handle),primitive_signature=Convert.ToHexString(from).ToLowerInvariant()});
     }
    }
    foreach(var methodHandle in type.GetMethods()){
     var method=r.GetMethodDefinition(methodHandle);if(method.RelativeVirtualAddress==0)continue;var il=pe.GetMethodBody(method.RelativeVirtualAddress).GetILBytes()!;
     for(int p=0;p<il.Length;){int offset=p;ushort op=il[p++];if(op==0xfe)op=(ushort)(0xfe00|il[p++]);if(!Ops.TryGetValue(op,out var operation))throw new Exception("Unknown CIL opcode");int size=OperandSize(operation.OperandType,il,p);if(size<0||p>il.Length-size)throw new Exception("Invalid CIL extent");
      if((op==0x28||op==0x73||op==0x80)&&size==4){var target=Member(r,MetadataTokens.EntityHandle(BitConverter.ToInt32(il,p)));var caller=name+"::"+r.GetString(method.Name);
       if((op==0x28||op==0x73)&&target.Owner=="kairo.unity.ui.SaveRecorder"&&target.Name==".ctor")constructors.Add(new {assembly=file,caller,offset});
       if(op==0x80&&target.Owner=="kairo.unity.ui.SaveRecorder"&&target.Name=="objectInstance_")singletonWrites.Add(new {assembly=file,caller,offset});
       if(op==0x80&&target.Owner=="kairo.unity.panel.FepPanel"&&target.Name=="current_")fepWrites.Add(new {assembly=file,caller,offset});
      }p+=size;
     }
    }
   }
   if(file!="KairoLibrary.dll"){pe.Dispose();memory.Dispose();}
  }
  libraryPe?.Dispose();libraryStream?.Dispose();
  Console.WriteLine(JsonSerializer.Serialize(new {assemblies=documents,direct_derived_types=derived,save_recorder_constructor_calls=constructors,save_recorder_singleton_writes=singletonWrites,fep_current_writes=fepWrites,config_copy_plan=copy,config_skipped_fields=skipped}));
 }
}
