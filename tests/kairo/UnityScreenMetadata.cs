// Read-only public enum/property metadata. Never loads the inspected assembly.
using System;using System.IO;using System.Reflection.Metadata;using System.Reflection.PortableExecutable;
class UnityScreenMetadata {static void Main(string[]args){using(var file=File.OpenRead(args[0]))using(var pe=new PEReader(file)){
 var md=pe.GetMetadataReader();foreach(var th in md.TypeDefinitions){var t=md.GetTypeDefinition(th);if(md.GetString(t.Namespace)!="UnityEngine")continue;
 if(md.GetString(t.Name)=="ScreenOrientation")foreach(var fh in t.GetFields()){var f=md.GetFieldDefinition(fh);if(f.GetDefaultValue().IsNil)continue;var c=md.GetConstant(f.GetDefaultValue());var b=md.GetBlobReader(c.Value);Console.WriteLine("enum:"+md.GetString(f.Name)+"="+b.ReadInt32());}
 if(md.GetString(t.Name)=="Screen")foreach(var ph in t.GetProperties()){var p=md.GetPropertyDefinition(ph);string name=md.GetString(p.Name);if(name!="orientation"&&name!="autorotateToPortrait")continue;var a=p.GetAccessors();foreach(var mh in new[]{a.Getter,a.Setter}){if(mh.IsNil)continue;var m=md.GetMethodDefinition(mh);Console.WriteLine("property:"+md.GetString(m.Name)+"="+m.ImplAttributes+";rva="+m.RelativeVirtualAddress);}}
 }}}}
