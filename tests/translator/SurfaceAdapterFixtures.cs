using System;
using System.Collections.Generic;
namespace SyntheticSurfaceCollections {
 public class Vector<T>{List<T> values=new List<T>();public int Size(){return values.Count;}public T ElementAt(int i){return values[i];}public void AddElement(T value){values.Add(value);}}
}
namespace kairo.unity.ui {
 public class Graphics{} public class KeyEvent{}
 public class Canvas {
  kairo.unity.surface.SurfaceManagerBase source;
  public void SetSurfaceManager(kairo.unity.surface.SurfaceManagerBase value){source=value;}
  public kairo.unity.surface.SurfaceManagerBase GetSurfaceManager(){return source;}
  public bool OnTouchEvent(kairo.unity.surface.MotionEvent evt){if(source!=null){var list=source.GetSurfaceList();for(int i=list.Size()-1;i>=0;i--)list.ElementAt(i).OnReceiveTouchEvent(evt);}return true;}
 }
}
namespace kairo.unity.surface {
 public class MotionEvent{}
 public class SurfaceBase {
  public int id;public bool game;
  public SurfaceBase(int value,bool isGame){id=value;game=isGame;}
  public bool IsGameSurface(){return game;}
  public void ClearTouchComponent(){AdapterProbe.trace=AdapterProbe.trace*10+id;}
  public void OnReceiveTouchEvent(MotionEvent evt){AdapterProbe.trace=AdapterProbe.trace*10+id;}
 }
 public class SurfaceManagerBase {
  SyntheticSurfaceCollections.Vector<SurfaceBase> values=new SyntheticSurfaceCollections.Vector<SurfaceBase>();
  public SyntheticSurfaceCollections.Vector<SurfaceBase> GetSurfaceList(){return values;}
  public virtual void AdjustSurfaceLayout(){} public virtual void Draw(kairo.unity.ui.Graphics g){} public virtual void DrawComponents(kairo.unity.ui.Graphics g){}
  public void DoEvents(){} public void BeginTouchRegist(kairo.unity.ui.Graphics g){} public void EndTouchRegist(kairo.unity.ui.Graphics g){}
  public void OnKeyDown(int key){} public void OnKeyUp(int key){} public void OnKeyDown(int key,kairo.unity.ui.KeyEvent evt){}
  public void ClearTouchComponent(){for(int i=values.Size()-1;i>=0;i--)values.ElementAt(i).ClearTouchComponent();}
 }
 public class TaggedManager:SurfaceManagerBase {public int tag=37;}
}
public static class AdapterProbe {
 public static int trace;
 public static int Identity(){var canvas=new kairo.unity.ui.Canvas();var manager=new kairo.unity.surface.TaggedManager();canvas.SetSurfaceManager(manager);return ((kairo.unity.surface.TaggedManager)canvas.GetSurfaceManager()).tag;}
 public static int LateList(){trace=0;var canvas=new kairo.unity.ui.Canvas();var manager=new kairo.unity.surface.TaggedManager();canvas.SetSurfaceManager(manager);canvas.OnTouchEvent(null);manager.GetSurfaceList().AddElement(new kairo.unity.surface.SurfaceBase(1,true));manager.GetSurfaceList().AddElement(new kairo.unity.surface.SurfaceBase(2,false));canvas.OnTouchEvent(null);return trace;}
 public static bool Clear(){var canvas=new kairo.unity.ui.Canvas();canvas.SetSurfaceManager(new kairo.unity.surface.TaggedManager());canvas.SetSurfaceManager(null);canvas.OnTouchEvent(null);return canvas.GetSurfaceManager()==null;}
 public static int TracedReference(){var canvas=new kairo.unity.ui.Canvas();var manager=new kairo.unity.surface.TaggedManager();canvas.SetSurfaceManager(manager);manager=null;GC.Collect(0);return ((kairo.unity.surface.TaggedManager)canvas.GetSurfaceManager()).tag;}
}
