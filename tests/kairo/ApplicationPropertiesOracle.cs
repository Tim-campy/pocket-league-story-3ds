using System;
using kairo.unity.ui;
class ApplicationPropertiesOracle {
    static readonly string[] keys={null,"microedition.platform","Platform","platform","PLATFORM","Microedition.platform","microedition.Platform","microedition.platform ","MIDlet-Jar-URL","","user.agent"};
    static string Hex(string text){if(text==null)return "NULL";string result="";foreach(char c in text)result+=((int)c).ToString("x4");return result;}
    static string Get(string key){try{string result=IApplication.GetProperty(key);return Hex(result)+";cached_ref="+(result!=null&&Object.ReferenceEquals(result,IApplication.Cached));}catch(Exception e){return "E:"+e.GetType().FullName;}}
    static void Phase(string phase){for(int i=0;i<keys.Length;i++)Console.WriteLine(phase+"-"+i+"\t"+Get(keys[i]));}
    static void Main(string[] args){
        UnityEngine.SystemInfo.deviceModel="live-model-A";UnityEngine.SystemInfo.deviceName="live-name-A";
        if(args.Length>0){foreach(var platform in new[]{UnityEngine.RuntimePlatform.Android,UnityEngine.RuntimePlatform.IPhonePlayer}){UnityEngine.Application.platform=platform;for(int i=0;i<keys.Length;i++)Console.WriteLine(platform+"-"+i+"\t"+Hex(java.lang.JSystem.GetProperty(keys[i])));}return;}
        Phase("before-awake");IApplication.SetCached("cached-model-A");Phase("cached-A");
        UnityEngine.SystemInfo.deviceModel="live-model-B";Phase("live-changed-cache-unchanged");
        IApplication.SetCached("cached-model-B");Phase("host-refresh-B");IApplication.SetCached(null);Phase("cache-null");
        IApplication.SetCached("\u03b1\0\ud800");Phase("cached-code-units");
    }
}
