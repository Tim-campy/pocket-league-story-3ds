// Original DisplayMetrics.cs is compiled unchanged with these own OS facades.
using System;using kairo.unity.util;
namespace UnityEngine {
 public enum RuntimePlatform{Android,WindowsPlayer}
 public static class Application{public static RuntimePlatform platform=RuntimePlatform.WindowsPlayer;}
 public static class Screen{public static int width=240,height=280;}
 public class AndroidJavaObject:IDisposable{
  public AndroidJavaObject(string s){throw new NotSupportedException();}
  public T Get<T>(string key){throw new NotSupportedException();}
  public T GetStatic<T>(string key){throw new NotSupportedException();}
  public T Call<T>(string key,params object[] args){throw new NotSupportedException();}
  public void Call(string key,params object[] args){throw new NotSupportedException();}
  public void Dispose(){}
 }
 public class AndroidJavaClass:AndroidJavaObject{public AndroidJavaClass(string s):base(s){}}
}
namespace kairo.unity.native{public static class KairoPlugin{public static string GetReleaseNumber(){throw new NotSupportedException();}}}
namespace kairo.unity.ui{
 public class IApplication{public static IApplication GetCurrentApp(){throw new NotSupportedException();}public float GetResolutionScaleRatio(){throw new NotSupportedException();}}
 public class Canvas{public static Canvas GetInstance(){throw new NotSupportedException();}public bool IsFullscreen(){throw new NotSupportedException();}}
}
class DisplayMetricsOracle{
 static string Bits(float f){return BitConverter.ToInt32(BitConverter.GetBytes(f),0).ToString();}
 static void Dump(string name){Console.WriteLine(name+"="+Bits(DisplayMetrics.Density)+":"+DisplayMetrics.DensityDPI+":"+DisplayMetrics.WidthPixels+":"+DisplayMetrics.HeightPixels+":"+Bits(DisplayMetrics.ScaledDensity)+":"+Bits(DisplayMetrics.XDPI)+":"+Bits(DisplayMetrics.YDPI));}
 static void Main(){Dump("first-static-access");UnityEngine.Screen.width=400;UnityEngine.Screen.height=240;new DisplayMetrics();Dump("constructor-does-not-refresh");DisplayMetrics.Update();Dump("explicit-update");}
}
