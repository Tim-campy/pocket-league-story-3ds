// Own collaborators. Canvas and the selected manager bodies are supplied
// verbatim from the reconstructed source by test_surface_bridge.py.
using System;
using System.Collections.Generic;
using kairo.unity.ui;
using kairo.unity.surface;
namespace java.util {
 public class Vector<T> {
  readonly List<T> values=new List<T>();public int Size(){return values.Count;}
  public T ElementAt(int index){return values[index];}public void AddElement(T value){values.Add(value);}
  public void RemoveElementAt(int index){values.RemoveAt(index);}
 }
}
public static class Probe {
 public static string trace="";public static MotionEvent touch;public static KeyEvent key;public static Graphics graphics;
 public static void Log(string s){trace+=s+";";}
 public static void Print(string name){Console.WriteLine(name+"="+trace);trace="";}
}
namespace kairo.unity.ui {public class Graphics{}public class MotionEvent{}public class KeyEvent{}}
namespace kairo.unity.surface {
 public class TouchOption {public static java.util.Vector<TouchOption> buffer=new java.util.Vector<TouchOption>();public int hasCount;public bool Lock;}
 public class SurfaceBase {
  public int id;public bool game;public SurfaceBase(int id,bool game){this.id=id;this.game=game;}
  public bool IsGameSurface(){Probe.Log("G"+id);return game;}
  public void ClearTouchComponent(){Probe.Log("C"+id);}
  public void OnReceiveTouchEvent(MotionEvent value){Probe.Log("T"+id+":"+Object.ReferenceEquals(value,Probe.touch));}
  public void OnKeyDown(int value){Probe.Log("D"+id+":"+value);}
  public void OnKeyUp(int value){Probe.Log("U"+id+":"+value);}
  public void OnKeyDown(int value,KeyEvent evt){Probe.Log("R"+id+":"+value+":"+Object.ReferenceEquals(evt,Probe.key));}
  public void BeginTouchRegist(Graphics value){Probe.Log("B"+id+":"+Object.ReferenceEquals(value,Probe.graphics));}
  public void EndTouchRegist(Graphics value){Probe.Log("E"+id+":"+Object.ReferenceEquals(value,Probe.graphics));}
 }
 public class TaggedManager:SurfaceManagerBase {
  public int tag;public TaggedManager(int tag){this.tag=tag;}
  public override void AdjustSurfaceLayout(){Probe.Log("L"+tag);}
  public override void Draw(Graphics value){Probe.Log("W"+tag+":"+Object.ReferenceEquals(value,Probe.graphics));}
  public override void DrawComponents(Graphics value){Probe.Log("P"+tag+":"+Object.ReferenceEquals(value,Probe.graphics));}
  public override void DoEvents(){Probe.Log("V"+tag);}
 }
}
class SurfaceBridgeOracle {
 static void Main(){
  var canvas=new Canvas();var source=new TaggedManager(7);canvas.SetSurfaceManager(source);
  Console.WriteLine("source-identity="+Object.ReferenceEquals(source,canvas.GetSurfaceManager())+":"+(((TaggedManager)canvas.GetSurfaceManager()).tag==7));
  Probe.touch=new MotionEvent();canvas.OnTouchEvent(Probe.touch);Probe.Print("empty-at-install");
  source.Add(new SurfaceBase(1,true));source.Add(new SurfaceBase(2,false));source.Add(new SurfaceBase(3,true));
  canvas.OnTouchEvent(Probe.touch);Probe.Print("touch-late-list");
  canvas.GetSurfaceManager().ClearTouchComponent();Probe.Print("clear-all-reverse");
  OriginalFragments.ClearGames(canvas.GetSurfaceManager());Probe.Print("clear-games-forward-filter");
  source.GetSurfaceList().RemoveElementAt(1);Probe.key=new KeyEvent();source.OnKeyDown(27,Probe.key);Probe.Print("raw-key-after-mutation");
  source.OnKeyDown(17);source.OnKeyUp(17);Probe.Print("logical-keys");
  Probe.graphics=new Graphics();source.DoEvents();source.AdjustSurfaceLayout();source.BeginTouchRegist(Probe.graphics);source.Draw(Probe.graphics);source.EndTouchRegist(Probe.graphics);source.DrawComponents(Probe.graphics);Probe.Print("source-virtual-and-graphics");
  var replacement=new TaggedManager(9);replacement.Add(new SurfaceBase(4,true));canvas.SetSurfaceManager(replacement);canvas.OnTouchEvent(Probe.touch);Probe.Print("replace-list");
  Console.WriteLine("replace-identity="+Object.ReferenceEquals(replacement,canvas.GetSurfaceManager())+":"+!Object.ReferenceEquals(source,canvas.GetSurfaceManager()));
  canvas.SetSurfaceManager(null);Console.WriteLine("clear-source="+(canvas.GetSurfaceManager()==null));canvas.OnTouchEvent(Probe.touch);Probe.Print("clear-no-touch");
 }
}
