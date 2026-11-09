// Public API metadata only; no assembly load or original method execution.
using System;using System.IO;using System.Reflection.Metadata;using System.Reflection.PortableExecutable;
class UnityDebugInputMetadata {static void Main(string[]args){using(var file=File.OpenRead(args[0]))using(var pe=new PEReader(file)){
var md=pe.GetMetadataReader();foreach(var th in md.TypeDefinitions){var type=md.GetTypeDefinition(th);if(md.GetString(type.Namespace)!="UnityEngine")continue;var name=md.GetString(type.Name);
if(name=="KeyCode")foreach(var fh in type.GetFields()){var f=md.GetFieldDefinition(fh);var fn=md.GetString(f.Name);if(fn!="LeftShift"&&fn!="RightShift")continue;var value=md.GetConstant(f.GetDefaultValue());var b=md.GetBlobReader(value.Value);Console.WriteLine("key:"+fn+"="+b.ReadInt32());}
if(name=="Vector3")foreach(var fh in type.GetFields()){var f=md.GetFieldDefinition(fh);var fn=md.GetString(f.Name);if(fn=="x"||fn=="y"||fn=="z")Console.WriteLine("field:Vector3."+fn+"="+BitConverter.ToString(md.GetBlobBytes(f.Signature)).Replace("-","").ToLowerInvariant());}
if(name=="Input"||name=="Screen")foreach(var mh in type.GetMethods()){var m=md.GetMethodDefinition(mh);var mn=md.GetString(m.Name);if(name=="Input"&&(mn=="GetKey"||mn=="GetMouseButton"||mn=="GetMouseButtonDown"||mn=="get_mousePosition")||name=="Screen"&&mn=="get_height")Console.WriteLine("method:"+name+"."+mn+"="+m.ImplAttributes+";rva="+m.RelativeVirtualAddress);}
}}}}
