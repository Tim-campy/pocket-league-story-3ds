using System;using System.Reflection;using System.IO;
public static class Hooks {public static string trace="";public static bool failConfig,failPlatform,failResource,failMain,failLanguage;public static void Log(string s){trace+=s+";";}}
namespace java.lang {public class JThread {public static JThread CurrentThread(){return new JThread();}}}
namespace kairo.common.cfg {public class Config {public static bool UNITY_EDITOR=false,ICLOUD=false,FULLSCREEN=false,PRINT=false;public static string BASE64_PUBLIC_KEY="synthetic";public static void Create(Type t){Hooks.Log("config");if(Hooks.failConfig)throw new Exception();}}public class SyntheticConfig:Config{}}
namespace UnityEngine {
 public enum RuntimePlatform {Android,IPhonePlayer,WindowsPlayer}public enum ScreenOrientation {LandscapeLeft,LandscapeRight,Portrait}
 public static class Application {public static string persistentDataPath="fixture",productName="fixture",temporaryCachePath="fixture",dataPath="fixture";public static RuntimePlatform platform=RuntimePlatform.Android;}
 public static class Screen {public static int width=240,height=280;public static ScreenOrientation orientation=ScreenOrientation.Portrait;}
 public static class SystemInfo {public static string deviceModel="synthetic";}
 public struct Vector3 {public float x,y,z;public Vector3(float a,float b,float c){x=a;y=b;z=c;}}
 public class Transform {public Vector3 position;}
 public class Camera {public static Camera main=new Camera();public float orthographicSize;public Transform transform=new Transform();}
}
namespace kairo.unity.native {public static class KairoPlugin {public static void Init(int n,bool log,string key){Hooks.Log("platform");if(Hooks.failPlatform)throw new Exception();}public static void CancelNotifications(bool a,bool b){}public static void SetNotificationBackground(bool b){}public static void Fullscreen(bool b){}}}
namespace kairo.unity.analytics {public static class AnalyticsTracker {public static void Setup(){}}}
namespace kairo.unity.util {public static class Language {public static int Get(){return 1;}public static void Init(){Hooks.Log("language");if(Hooks.failLanguage)throw new Exception();}}public static class Log {public static void Info(object o){}}}
namespace kairo.unity.io {public static class Storage {public static byte[] Read(int media,bool secure,string file){Hooks.Log("storage");return new byte[]{1};}}}
namespace kairo.unity.ui {
 public class DisplayMetrics{}
 public class Canvas {static Canvas c=new Canvas();public static Canvas GetInstance(){return c;}public void SetDisplayCurrent(IApplication app){}}
 public class Image {public void SetExpiration(bool b,int frames){Hooks.Log("expiration"+frames);}}
 public class ResourceManager {public Image[] img=new Image[]{new Image(),null};public void Load(byte[] data){Hooks.Log("resources");if(Hooks.failResource)throw new Exception();}}
}
class BootstrapOracle {
 static void Run(string name,int failure){Hooks.trace="";Hooks.failConfig=failure==1;Hooks.failPlatform=failure==2;Hooks.failResource=failure==3;Hooks.failMain=failure==4;Hooks.failLanguage=failure==5;
 var app=new kairo.unity.ui.IApplication();app.RunAwake();Console.WriteLine(name+"="+Hooks.trace+"/"+(app.HasResources?"1":"0"));}
 static void Main(){Run("success",0);Run("config-error",1);Run("platform-error",2);Run("optional-resource-error",3);Run("main-error",4);Run("language-error",5);}
}
