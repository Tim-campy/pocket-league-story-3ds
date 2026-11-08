using System;using System.Collections.Generic;using kairo.unity.ui;
namespace UnityEngine{
 public enum TextureFormat{RGB24=3,ARGB32=5}public enum FilterMode{Point,Bilinear,Trilinear}
 public class Texture{public int width,height;public Texture(int w,int h){width=w;height=h;}}
 public class Texture2D:Texture{public FilterMode filterMode;public Texture2D(int w,int h,TextureFormat f,bool mipmaps):base(w,h){}}
 public class RenderTexture:Texture{public RenderTexture(int w,int h):base(w,h){}public void Release(){}}
 public static class Object{public static int destroyed;public static void Destroy(Texture t){destroyed++;}}
}
namespace kairo.common.cfg{public static class Config{public static bool PRINT=false,COUNT_ENABLE=true,USE_UNUSE_CHECK=false;public static int checkCount_,createImageArea_;}}
namespace kairo.unity.util{public static class Log{public static void Info(object o){}}}
namespace kairo.unity.graphics{
 public class ImageAtlasManager{public bool enable_;public static ImageAtlasManager GetInstance(){return new ImageAtlasManager();}public void ImageToAtlas(int i,Image image){throw new NotSupportedException();}public void RemoveAtlas(Image image){throw new NotSupportedException();}}
}
namespace kairo.unity.io{
 public static class Storage{public static byte[] Read(int media,bool secure,string file){return file=="synthetic"?new byte[]{3,2,41}:null;}}
 public class JarInflater{public byte[] GetData(string file){throw new NotSupportedException();}}
}
namespace kairo.unity.ui{
 public class IApplication{public delegate object UIMethod();static IApplication app=new IApplication();public static IApplication GetCurrentApp(){return app;}public object RunOnUiThread(UIMethod call,bool wait){return call();}public void RunOnUiThread(Action call,bool wait){call();}}
 public static class ResourceManager{public static kairo.unity.io.JarInflater OpenJarCache(int rs,int rc){throw new NotSupportedException();}}
 public class FastVector{List<object> values=new List<object>();public int elementCount{get{return values.Count;}}public object[] elementData{get{return values.ToArray();}}public int Size(){return values.Count;}public void AddElement(object value){values.Add(value);}public void RemoveElement(object value){values.Remove(value);}}
}
class ImageLifetimeOracle{
 static List<Image> all=new List<Image>();static int baseline;
 static Image S(byte a,byte b){Image v=new Image(new byte[]{a,b,41});all.Add(v);return v;}
 static void Reset(){foreach(Image image in all)image.Dispose();all.Clear();Image.SetSourceImageMaxCount(0);Image.SetSourceImageMaxPixels(0);Image.SetSourceImageValidateFrames(0);kairo.common.cfg.Config.checkCount_=0;kairo.common.cfg.Config.createImageArea_=0;kairo.common.cfg.Config.COUNT_ENABLE=true;baseline=UnityEngine.Object.destroyed;}
 static void P(string name,params Image[] images){Console.Write(name+"="+Image.CacheCount+":"+Image.CachePixels+":"+kairo.common.cfg.Config.createImageArea_+":"+(UnityEngine.Object.destroyed-baseline));foreach(Image image in images)Console.Write("/"+image.Resident+":"+image.IsDisposed+":"+image.GetWidth()+":"+image.GetHeight()+":"+image.IsExpiration());Console.WriteLine();}
 static void Frame(int n){kairo.common.cfg.Config.checkCount_=n;}
 static void Main(){
  Reset();Image a=S(3,2);a.SetExpiration(true,40);P("lazy",a);Frame(10);a.Use();P("used",a);Frame(11);a.Use();Frame(50);Image.UnuseExpirationImages();P("threshold-equal",a);Frame(51);Image.UnuseExpirationImages();P("threshold-past",a);Frame(52);a.Use();P("reloaded",a);a.Dispose();P("disposed",a);
  Reset();a=S(3,2);a.Use();a.SetExpiration(false,1);Frame(100);Image.UnuseExpirationImages();P("locked",a);Image.SetSourceImageValidateFrames(5);a.SetExpiration(true);Image.UnuseExpirationImages();P("global-frames",a);
  Reset();a=S(3,2);a.Use();a.SetExpiration(true,0);Frame(100);Image.UnuseExpirationImages();P("zero-disabled",a);a.SetExpiration(true,-2);Image.UnuseExpirationImages();P("negative-disabled",a);
  Reset();a=Image.CreateImage(3,2);all.Add(a);Frame(100);Image.UnuseExpirationImages();P("created-locked",a);a.SetExpiration(true,1);Image.UnuseExpirationImages();P("created-expired-dispose",a);
  Reset();a=new Image(new UnityEngine.Texture(3,2));all.Add(a);a.SetExpiration(true,1);Frame(100);Image.UnuseExpirationImages();a.Unuse();P("texture-not-reloadable",a);a.Dispose();P("texture-disposed",a);
  Reset();Image.SetSourceImageMaxCount(1);a=S(3,2);a.SetExpiration(false);a.Use();Image b=S(4,1);b.Use();P("count-evicts-locked",a,b);
  Reset();Image.SetSourceImageMaxPixels(4);a=Image.CreateImage(3,2);all.Add(a);b=S(4,1);b.Use();P("pixels-evict-created",a,b);
  Reset();Image.SetSourceImageMaxCount(2);a=S(3,2);a.Use();Frame(1);b=S(4,1);b.Use();Frame(2);Image c=S(1,1);c.Use();P("oldest-weight",a,b,c);
  Reset();Frame(Int32.MaxValue);a=S(3,2);a.Use();a.SetExpiration(true,1);Frame(Int32.MinValue);Image.UnuseExpirationImages();P("wrapped-one",a);Frame(Int32.MinValue+1);Image.UnuseExpirationImages();P("wrapped-two",a);
  Reset();a=new Image("synthetic");all.Add(a);P("file-placeholder",a);a.Use();P("file-loaded",a);a.Unuse();a.Use();P("file-reloaded",a);
  Reset();a=S(3,2);a.Use();a.SetExpiration(true,1);Frame(15);a.Stamp();Frame(16);Image.UnuseExpirationImages();P("draw-stamp-equal",a);Frame(17);Image.UnuseExpirationImages();P("draw-stamp-past",a);
  Reset();byte[] src=new byte[]{3,2,41};a=new Image(src);all.Add(a);src[0]=4;src[1]=1;P("source-alias-before-use",a);a.Use();P("source-alias-after-use",a);a.Unuse();src[0]=1;a.Use();P("source-alias-reload",a);
  Reset();a=S(3,2);a.Use();kairo.common.cfg.Config.COUNT_ENABLE=false;a.Unuse();P("count-disabled-unuse",a);
  Reset();
 }
}
