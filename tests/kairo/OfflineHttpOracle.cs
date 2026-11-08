// The unchanged reconstructed HttpObject is the state machine. These own
// facades supply a completed failed WWW without sockets, HTTP or any assets.
using System;using System.Collections.Generic;using System.IO;using System.Text;
using kairo.unity.io;
public static class HttpHooks{public static int created,disposed,dialogs;public static string lastUrl;public static int lastPost;}
namespace UnityEngine{public class WWW:IDisposable{
 public bool isDone{get{return true;}}public string error{get{return "Network transport is unavailable in this port";}}public byte[] bytes{get{return new byte[0];}}
 public WWW(string url){HttpHooks.created++;HttpHooks.lastUrl=url;HttpHooks.lastPost=-1;}public WWW(string url,byte[] post):this(url){HttpHooks.lastPost=post.Length;}public void Dispose(){HttpHooks.disposed++;}
}}
namespace java.lang{
 public static class JThread{public static void Sleep(long n){throw new NotSupportedException();}}
 public static class JSystem{public static long CurrentTimeMillis(){return 1000;}}
 public static class JInteger{public static int ParseInt(string s){return Int32.Parse(s);}}
 public static class JTool{public static T MakeArray<T>(int[] sizes){throw new NotSupportedException();}}
 public static class JString{public static byte[] GetBytes(this string s){return Encoding.UTF8.GetBytes(s);}}
}
namespace java.util{
 public class Vector{List<object> list=new List<object>();public int Size(){return list.Count;}public object ElementAt(int i){return list[i];}public void AddElement(object v){list.Add(v);}}
 public class JCalendar{public static JCalendar GetInstance(){return new JCalendar();}public void SetTimeInMillis(long n){}public int Get(int field){switch(field){case 1:return 2020;case 2:return 0;case 5:return 2;case 11:return 3;case 12:return 4;case 13:return 5;default:throw new NotSupportedException();}}}
}
namespace java.io{
 public class ByteArrayInputStream{public ByteArrayInputStream(byte[] b){throw new NotSupportedException();}public void Close(){}}
 public class ByteArrayOutputStream{public MemoryStream stream=new MemoryStream();public byte[] ToByteArray(){return stream.ToArray();}}
}
namespace kairo.common.cfg{public static class Config{public static bool REGIST_ENABLE=true,TRACE_URL=false,PRINT=false,POST_MARK=false;}}
namespace kairo.unity.native{public static class KairoPlugin{public static int LicenseCheck(){throw new NotSupportedException();}}}
namespace kairo.unity.ui{
 public class IApplication{public delegate object UIMethod();static IApplication app=new IApplication();public static IApplication GetCurrentApp(){return app;}public object RunOnUiThread(UIMethod callback,bool wait){return callback();}public void RunOnUiThread(Action callback,bool wait){callback();}}
 public class Dialog{public Dialog(int type,string title){}public void SetText(string text){}public void SetButtons(params string[] buttons){}public int Show(){HttpHooks.dialogs++;return 2;}}
}
namespace kairo.unity.util{
 public static class Language{public static bool Japanese(){return false;}public static string TranslateText(string text){return text;}}
 public static class ClockTime{public static long GetTime(){return 1000;}}
 public static class Log{public static void Info(object o){}}
 public static class StringUtil{public static string[] Split(string s,string sep){return s.Split(new[]{sep},StringSplitOptions.None);}public static string Replace(string s,string a,string b){return s.Replace(a,b);}}
 public static class StreamUtil{
  public static void Write(java.io.ByteArrayOutputStream s,byte[] b){s.stream.Write(b,0,b.Length);}public static void WriteInt(java.io.ByteArrayOutputStream s,int v){for(int i=3;i>=0;i--)s.stream.WriteByte((byte)(v>>(i*8)));}
  public static sbyte ReadByte(java.io.ByteArrayInputStream s){throw new NotSupportedException();}public static int ReadInt(java.io.ByteArrayInputStream s){throw new NotSupportedException();}public static byte[] Read(java.io.ByteArrayInputStream s,int n){throw new NotSupportedException();}
 }
}
namespace kairo.unity.io{public class HttpProbe:HttpObject{public HttpProbe(bool retry):base(retry){}public bool AskRetry{get{return askRetry_;}}public bool ErrorWasIO{get{return error_ is IOException;}}}}
class OfflineHttpOracle{
 static void Run(string name,bool retry,bool post,bool mark,bool query){
  kairo.common.cfg.Config.POST_MARK=mark;HttpHooks.created=HttpHooks.disposed=HttpHooks.dialogs=0;
  var h=new HttpProbe(retry);string exception="none";try{h.Connect("https://synthetic.invalid/fixture"+(query?"?own=1":""),post?new byte[]{0,1,255}:null,true);}catch(Exception e){exception=e.GetType().FullName;}
  bool urlSuffix=h.GetErrorUrl().EndsWith((query?"&":"?")+"_ts=20200102030405",StringComparison.Ordinal);
  Console.WriteLine(name+"="+exception+":"+h.GetErrorCode()+":"+h.AskRetry+":"+h.ErrorWasIO+":"+(h.GetErrorText2()==null)+":"+urlSuffix+":"+h.IsConnect()+":"+HttpHooks.created+":"+HttpHooks.disposed+":"+HttpHooks.dialogs+":"+HttpHooks.lastPost);
  Console.WriteLine(name+"-pop="+h.PopErrorCode()+":"+h.GetErrorCode()+":"+(h.PopErrorUrl()!=null)+":"+(h.GetErrorUrl()==null));
  h.Interrupt();Console.WriteLine(name+"-interrupt="+h.GetErrorCode()+":"+h.IsConnect()+":"+(h.GetErrorUrl()==null));
 }
 static void Main(){Run("get-no-retry",false,false,false,false);Run("get-retry-cancel",true,false,false,true);Run("post-no-mark",false,true,false,false);Run("post-with-mark",false,true,true,true);}
}
