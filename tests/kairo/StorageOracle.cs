// Test facades surround ORIGINAL Storage/RecordStore/codec source files. No
// original assembly, key, asset or user save is used by this source oracle.
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Text;
using kairo.unity.io;
using kairo.unity.util;
namespace UnityEngine {public enum RuntimePlatform{WindowsPlayer,Android} public static class Application {public static RuntimePlatform platform=RuntimePlatform.WindowsPlayer;}}
namespace java.lang {
 public static class JString {
  public static string ValueOf(char c){return c.ToString();} public static string ValueOf(int n){return n.ToString(CultureInfo.InvariantCulture);}
  public static int Length(this string s){return s.Length;} public static char CharAt(this string s,int n){return s[n];}
  public static byte[] GetBytes(this string s){return Encoding.UTF8.GetBytes(s);}
 }
 public static class JInteger {public static int ParseInt(string s){return Int32.Parse(s,CultureInfo.InvariantCulture);}}
 public static class JSystem {public static void Arraycopy(Array a,int x,Array b,int y,int n){Array.Copy(a,x,b,y,n);}}
}
namespace java.util {public class Vector {readonly List<object> list=new List<object>();public int Size(){return list.Count;}public object ElementAt(int i){return list[i];}public void AddElement(object v){list.Add(v);}public void SetElementAt(object v,int i){list[i]=v;}public void RemoveElementAt(int i){list.RemoveAt(i);}}}
namespace java.io {public class DataOutputStream{}}
namespace kairo.common.cfg {public static class Config {public static bool USE_HEAP_STORAGE=true,UNITY_EDITOR=false;public static int APPLI_TYPE=2;
 public static string ConvertExtension(string s){if(APPLI_TYPE==1||APPLI_TYPE==2||APPLI_TYPE==3)s=s.Replace(".gif",".png");if(APPLI_TYPE==1)s=s.Replace(".mld",".spf");else if(APPLI_TYPE==2||APPLI_TYPE==3)s=s.Replace(".mld",".ogg");return s;}}}
namespace kairo.unity.ui {public class IApplication {public static string Root;static readonly IApplication app=new IApplication();public static IApplication GetCurrentApp(){return app;}public string GetDataPath(){return Root;}}}
namespace kairo.unity.native {public static class KairoPlugin {
 static readonly Dictionary<string,byte[]> values=new Dictionary<string,byte[]>();
 public static void PutPreference(string k,byte[] v){values[k]=(byte[])v.Clone();}public static byte[] GetPreference(string k){return values.ContainsKey(k)?(byte[])values[k].Clone():null;}
 public static void RemovePreference(string k){values.Remove(k);}public static string[] GetPreferenceKeys(){var r=new string[values.Count];values.Keys.CopyTo(r,0);return r;}
}}
namespace kairo.unity.util {
 public static class Log {public static void Info(object o){}}
 public class NotPermitException:Exception {public enum PermissionType{Storage}public NotPermitException(PermissionType t,string m,Exception e):base(m,e){}}
 public static class StringUtil {public static string FormatString(string value,int len,char padding,bool left){string text="";int n=Encoding.UTF8.GetBytes(padding.ToString()).Length;int count=len-Encoding.UTF8.GetBytes(value).Length;for(int i=0;i<count;i+=n)text+=padding;return left?value+text:text+value;}}
}
namespace kairo.unity.io {public static class AssetReader {public static byte[] GetData(string name){return name=="fixture.dat"?new byte[]{9,8,7}:null;}public static bool Exist(string name){return name=="fixture.dat";}}}
public static class StorageOracle {
 delegate string Probe();
 static void P(string name,Probe body){try{Console.WriteLine(name+"="+body());}catch(Exception e){Console.WriteLine(name+"=!"+e.GetType().FullName);}}
 static string B(byte[] v){if(v==null)return "null";string s="";foreach(byte b in v)s+=b.ToString("x2");return s;}
 static string A(string[] values){if(values==null)return "null";return String.Join("|",values);}
 static string N(ActionCompat a){a();return "ok";}delegate void ActionCompat();
 public static void Main(string[] args){
  System.Threading.Thread.CurrentThread.CurrentCulture=CultureInfo.InvariantCulture;
  kairo.unity.ui.IApplication.Root=args[0];Storage.Setup(2,8,"synthetic-root");
  P("invalid-media",delegate{return Storage.Open(0,false)==null?"null":"unexpected";});
  Storage heap=Storage.Open(2,false);byte[] alias={1,2,3};
  P("heap-alias",delegate{heap.Write("b.gif",alias);alias[0]=4;return B(heap.Read("b.png"));});
  P("heap-order",delegate{heap.Write("a",new byte[]{7});return A(heap.GetFiles());});
  P("heap-size",delegate{return heap.GetSize("b.gif").ToString();});
  P("heap-missing",delegate{return B(heap.Read("missing"))+":"+heap.Exists("missing")+":"+heap.GetSize("missing");});
  P("heap-null-value",delegate{heap.Write("nil",null);return heap.Exists("nil")+":"+B(heap.Read("nil"));});
  P("heap-null-size",delegate{return heap.GetSize("nil").ToString();});
  P("heap-delete",delegate{heap.Delete("b.gif");return A(heap.GetFiles());});
  P("null-filename",delegate{return B(heap.Read(null));});
  P("resource",delegate{return B(Storage.Read(3,false,"fixture.dat"))+":"+Storage.Exists(3,"fixture.dat");});
  P("resource-missing",delegate{return B(Storage.Read(3,false,"missing"))+":"+Storage.Exists(3,"missing");});
  P("resource-readonly",delegate{Storage.Write(3,false,"fixture.dat",new byte[]{1});return B(Storage.Read(3,false,"fixture.dat"));});
  Storage file=Storage.Open(1,false);
  P("file-roundtrip",delegate{file.Write("nested/save",new byte[]{0,255,1,0,7});return B(file.Read("nested/save"))+":"+file.GetSize("nested/save");});
  P("file-null",delegate{file.Write("nil",null);return file.Exists("nil")+":"+B(file.Read("nil"));});
  P("file-missing",delegate{return B(file.Read("missing"))+":"+file.GetSize("missing");});
  P("file-delete",delegate{file.Delete("nested/save");return file.Exists("nested/save").ToString();});
  P("setup",delegate{return RecordStore.Setup().ToString();});
  Encrypter.SetEncryptionKey(new byte[]{1,7,255});RecordStore rs=RecordStore.OpenRecordStore(2);
  P("add-ignore-size",delegate{return rs.AddRecord(-10)+":"+rs.GetRecordSize(0)+":"+B(rs.ReadRecord(0));});
  P("write-envelope",delegate{rs.WriteRecord(0,new byte[]{0,1,127,255});return B(Storage.Read(4,false,"2000"));});
  P("read-record",delegate{return B(rs.ReadRecord(0))+":"+rs.GetRecordSize(0)+":"+rs.GetNumRecords();});
  P("write-jagged",delegate{byte[][] data={new byte[]{4,3,2}};rs.WriteRecord(1,data);return (data[0]==null)+":"+B(rs.ReadRecord(1));});
  P("missing-record",delegate{return B(rs.ReadRecord(9));});
  P("short-record",delegate{Storage.Write(4,false,"2009",new byte[]{1,2,3});return B(rs.ReadRecord(9));});
  P("corrupt-record",delegate{byte[] data=Storage.Read(4,false,"2000");data[8]^=1;Storage.Write(4,false,"2000",data);return B(rs.ReadRecord(0));});
  P("holes-count",delegate{Storage.Open(4,false).Delete("2009");rs.WriteRecord(5,new byte[]{5});return rs.GetNumRecords().ToString();});
  P("remove-last",delegate{rs.RemoveLastRecord();return rs.GetNumRecords().ToString();});
  P("rs10-prefix",delegate{RecordStore ten=new RecordStore(10);ten.WriteRecord(0,new byte[]{1});return ten.GetNumRecords().ToString();});
  P("resource-record-store",delegate{RecordStore.SetResourceFiles(new string[]{"fixture"});RecordStore resource=new RecordStore(1);return resource.AddRecord(1)+":"+resource.ExistRecord(99)+":"+resource.GetNumRecords()+":"+resource.GetRecordSize(99)+":"+B(resource.ReadRecord(0));});
  P("resource-record-write",delegate{RecordStore resource=new RecordStore(1);resource.WriteRecord(0,new byte[]{1});resource.RemoveAllRecord();return B(resource.ReadRecord(0));});
  RecordStore.SetResourceFiles(null);
  P("remove-all-source-scope",delegate{new RecordStore(3).WriteRecord(0,new byte[]{8});rs.RemoveAllRecord();return rs.GetNumRecords()+":"+new RecordStore(3).ExistRecord(0);});
  P("capacity",delegate{return rs.GetCapacity()+":"+rs.GetSize()+":"+rs.GetSizeAvailable()+":"+RecordStore.GetRecordInfoSize();});
  P("pref-record",delegate{RecordStore.SetPreferenceMode(true);rs.WriteRecord(0,new byte[]{11,12});return B(rs.ReadRecord(0))+":"+rs.GetNumRecords()+":"+rs.GetRecordSize(0);});
  P("pref-raw-envelope",delegate{return B(kairo.unity.native.KairoPlugin.GetPreference("2000"));});
  P("pref-remove-last",delegate{rs.RemoveLastRecord();return rs.GetNumRecords().ToString();});
  P("file-to-prefs-under-four",delegate{RecordStore.SetPreferenceMode(false);rs.WriteRecord(0,new byte[]{1});rs.WriteRecord(1,new byte[]{2});rs.WriteRecord(2,new byte[]{3});RecordStore.SetPreferenceMode(true);RecordStore.FileToPreferences();return kairo.unity.native.KairoPlugin.GetPreferenceKeys().Length+":"+Storage.Exists(4,"2000");});
  P("file-to-prefs-four",delegate{RecordStore.SetPreferenceMode(false);rs.WriteRecord(3,new byte[]{4});RecordStore.SetPreferenceMode(true);RecordStore.FileToPreferences();return kairo.unity.native.KairoPlugin.GetPreferenceKeys().Length+":"+Storage.Exists(4,"2000")+":"+B(rs.ReadRecord(3));});
  P("prefs-to-file-four",delegate{RecordStore.SetPreferenceMode(false);RecordStore.PreferencesToFile();return kairo.unity.native.KairoPlugin.GetPreferenceKeys().Length+":"+B(rs.ReadRecord(2));});
  P("closed-record",delegate{rs.CloseRecordStore();return B(rs.ReadRecord(2));});
  P("static-read-write",delegate{RecordStore.CreateRecordStore();RecordStore.WriteRecord(4,7,new byte[]{7,0,255});return B(RecordStore.ReadRecord(4,7));});
  P("add-byte-record",delegate{RecordStore q=RecordStore.OpenRecordStore(4);int id=q.AddRecord(new byte[]{6,5});return id+":"+B(q.ReadRecord(id));});
 }
}
