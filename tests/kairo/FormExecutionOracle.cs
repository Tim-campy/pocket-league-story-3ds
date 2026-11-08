// Synthetic collaborators for the unchanged FormManager source bodies.
using System;using System.Collections.Generic;using kairo.unity.form;using kairo.unity.ui;
public static class Hooks {public static string trace="";public static bool dialog;public static FormManagerBase manager;public static void Log(string s){trace+=s+";";}}
namespace java.lang {public interface JRunnable{void Run();}public class JThread {static readonly JThread current=new JThread();public static JThread CurrentThread(){return current;}public static bool IsCurrentThread(JThread t){return t==current;}public static void Sleep(long n){Hooks.Log("sleep"+n);}public static void Yield(){Hooks.Log("yield");}}
 public static class JSystem {public static long CurrentTimeMillis(){return 100;}public static void Gc(){Hooks.Log("gc");}}
}
namespace java.util {
 public class Vector {List<object> l=new List<object>();public int Size(){return l.Count;}public object ElementAt(int i){return l[i];}public int IndexOf(object o){return l.IndexOf(o);}public void AddElement(object o){l.Add(o);}public void InsertElementAt(object o,int i){l.Insert(i,o);}public void RemoveElementAt(int i){l.RemoveAt(i);}public void RemoveElement(object o){l.Remove(o);}public object FirstElement(){return l[0];}public object LastElement(){return l[l.Count-1];}public void RemoveAllElements(){l.Clear();}}
 public class Vector<T> {List<T> l=new List<T>();public int Size(){return l.Count;}public T ElementAt(int i){return l[i];}public void AddElement(T o){l.Add(o);}}
}
namespace kairo.common.cfg {public static class Config {public static bool PRINT=false,COUNT_ENABLE=false;public static int drawImageCount_,drawStringCount_,drawShapeCount_,drawImageArea_,drawSourceImageArea_,checkCount_;}}
namespace kairo.unity.util {public static class Log {public static void Info(object o){}}}
namespace kairo.unity.native {public static class KairoPlugin {public static void ShowToast(string s,int n=0){Hooks.Log(s.Contains("Resume()")?"warnResume":s.Contains("Init()")?"warnInit":"warnFinish");}}}
namespace kairo.unity.system {public class KairoBase {public static KairoBase Value;public bool reserveSaveEnable=true;public int reserveSave,failures;public bool throwUpdate;public Action onUpdate;public static KairoBase GetInstance(){Hooks.Log("K");return Value;}public bool IsGamePlaying(){return false;}public void SetGameState(bool b){}public void Update(){Hooks.Log("ku");if(onUpdate!=null)onUpdate();if(throwUpdate)throw new Exception();}public void Save(){SaveCore("save");}public void SaveAll(){SaveCore("saveAll");}void SaveCore(string name){Hooks.Log(name);if(failures-->0)throw new Exception();}}}
namespace kairo.unity.panel {public class FepPanel {public static FepPanel Current;public bool Update(){Hooks.Log("fep");return true;}}}
namespace kairo.unity.system.notification.ui {public class NotifyManager {public static NotifyManager GetInstance(){return null;}public void UpdateValues(){throw new Exception("removed policy");}}}
namespace kairo.unity.ad {public static class InterstitialAd {public static void DrawLoading(Graphics g){}}}
namespace kairo.unity.surface {
 public class SurfaceBase {public bool IsGameSurface(){return true;}public void ClearTouchComponent(){Hooks.Log("clearGame");}}
 public class SurfaceManagerBase {
  public java.util.Vector<SurfaceBase> GetSurfaceList(){var v=new java.util.Vector<SurfaceBase>();v.AddElement(new SurfaceBase());return v;}
  public static bool IsAutoGLRender(){return false;}public void ClearTouchComponent(){Hooks.Log("clear");}public void DoEvents(){Hooks.Log("events");}
  public void AdjustSurfaceLayout(){Hooks.Log("layout");}public void BeginTouchRegist(Graphics g){Hooks.Log("begin");}public void Draw(Graphics g){Hooks.Log("surfaceDraw");Hooks.manager.Draw(g);}public void EndTouchRegist(Graphics g){Hooks.Log("end");}public void DrawComponents(Graphics g){Hooks.Log("components");}
 }
}
namespace kairo.unity.ui {
 public class Graphics {public void BeginGLRender(){}public void EndGLRender(){}public void SetOrigin(int x,int y){}public void ClearClip(){}}
 public class Image {public static void UnuseExpirationImages(){Hooks.Log("expired");}}
 public class ResourceManager {public static void CloseJarCache(){Hooks.Log("cache");}}
 public class Dialog {public Dialog(int n,string s){}public void SetText(string s){}public int Show(){Hooks.Log("dialog");return Hooks.dialog?4:0;}}
 public class SoundPlayer {static readonly SoundPlayer p=new SoundPlayer();public static SoundPlayer GetInstance(){return p;}public void Suspend(){}public void Resume(){}}
 public class SaveRecorder {public static SaveRecorder Value;public static SaveRecorder GetInstance(){Hooks.Log("R");return Value;}public void Lock(){Hooks.Log("lock");}public void Unlock(bool force){Hooks.Log("unlock"+(force?1:0));}}
 public class IApplication {static readonly IApplication app=new IApplication();public bool terminated,visible=true;public static IApplication GetCurrentApp(){return app;}public bool IsTermination(){return terminated;}public bool Visibe(){return visible;}public FormManagerBase GetFormManager(){return Hooks.manager;}public static void Sleep(int n){Hooks.Log("sleep"+n);}}
 public class Canvas {static readonly Canvas c=new Canvas();public kairo.unity.surface.SurfaceManagerBase surface;public static Canvas GetInstance(){return c;}public kairo.unity.surface.SurfaceManagerBase GetSurfaceManager(){return surface;}public void SetSoftLabel(string a,string b,string c=null,string d=null){}public void UpdateSoftLabel(){}public void DecideKeyState(){}public void ClearKeyBuffer(){}public static void BackLight(bool b){}public Graphics BeginPaint(){return new Graphics();}public void EndPaint(){}}
}
public class ExecManager:FormManagerBase {
 public ExecManager():base(){}
 protected override void PreUpdate(){Hooks.Log("pre");base.PreUpdate();}protected override void Updated(){Hooks.Log("updated");base.Updated();}protected override void PreDraw(){Hooks.Log("preDraw");base.PreDraw();}protected override void Drawn(){Hooks.Log("drawn");base.Drawn();}
}
public class ExecForm:FormBase {
 public bool throwInit,throwUpdate,throwDraw;public bool initOk=true,finishOk=true,resumeOk=true;public int pending=0,updates=0;public ExecForm(int n):base(n){}
 public override bool Init(){Hooks.Log("init"+GetId());if(throwInit)throw new Exception();return initOk;}
 public override bool Finish(){Hooks.Log("finish"+GetId());return finishOk;}
 public override bool Update(){Hooks.Log("update"+GetId());if(throwUpdate)throw new Exception();return updates++>=pending;}
 public override bool Resume(){Hooks.Log("resume"+GetId());return resumeOk;}
 public override void Draw(Graphics g){Hooks.Log("draw"+GetId());if(throwDraw)throw new Exception();}
 public override bool ProcessEvent(AppEvent e){Hooks.Log("event"+(int)e.Type+":"+GetId());return false;}
}
class FormExecutionOracle {
 delegate void Scenario(ExecManager m,ExecForm f);
 static void Run(string name,Scenario operation){Hooks.trace="";Hooks.dialog=false;kairo.unity.system.KairoBase.Value=new kairo.unity.system.KairoBase();SaveRecorder.Value=new SaveRecorder();kairo.unity.panel.FepPanel.Current=null;Canvas.GetInstance().surface=new kairo.unity.surface.SurfaceManagerBase();IApplication.GetCurrentApp().terminated=false;IApplication.GetCurrentApp().visible=true;kairo.common.cfg.Config.checkCount_=0;
  var m=new ExecManager();Hooks.manager=m;var f=new ExecForm(1);m.Push(f);string error="";try{operation(m,f);}catch(Exception e){error=e.GetType().FullName;}
  Console.Write(name+"="+Hooks.trace+"/"+error+"/");for(int i=0;i<m.GetFormsNum();i++)Console.Write(m.GetForm(i).GetId()+":"+m.GetForm(i).GetProcessMode()+",");Console.WriteLine("/"+kairo.common.cfg.Config.checkCount_+"/"+(kairo.unity.system.KairoBase.Value.reserveSaveEnable?1:0)+":"+kairo.unity.system.KairoBase.Value.reserveSave);
 }
 public static int Main(){
 Run("execute-complete",delegate(ExecManager m,ExecForm f){m.Execute();});
 Run("execute-pending-twice",delegate(ExecManager m,ExecForm f){f.pending=2;m.Execute();});
 Run("hidden",delegate(ExecManager m,ExecForm f){IApplication.GetCurrentApp().visible=false;m.Execute();});
 Run("terminated",delegate(ExecManager m,ExecForm f){IApplication.GetCurrentApp().terminated=true;m.Execute();});
 Run("paused",delegate(ExecManager m,ExecForm f){m.SetPause(true);m.Execute();});
 Run("fep-present",delegate(ExecManager m,ExecForm f){kairo.unity.panel.FepPanel.Current=new kairo.unity.panel.FepPanel();m.Execute();});
 Run("resume",delegate(ExecManager m,ExecForm f){m.Resume();m.Execute();});
 Run("reserve-retry",delegate(ExecManager m,ExecForm f){var k=kairo.unity.system.KairoBase.Value;k.reserveSave=1;k.failures=2;m.Execute();});
 Run("reserve-three-failures",delegate(ExecManager m,ExecForm f){var k=kairo.unity.system.KairoBase.Value;k.reserveSave=2;k.failures=4;m.Execute();});
 Run("update-exception-finally",delegate(ExecManager m,ExecForm f){var k=kairo.unity.system.KairoBase.Value;k.reserveSaveEnable=false;k.reserveSave=2;f.throwUpdate=true;m.Execute();});
 Run("kairo-exception-finally",delegate(ExecManager m,ExecForm f){var k=kairo.unity.system.KairoBase.Value;k.reserveSaveEnable=false;k.reserveSave=1;k.throwUpdate=true;m.Execute();});
 Run("init-exception-finally",delegate(ExecManager m,ExecForm f){kairo.unity.system.KairoBase.Value.reserveSave=1;f.throwInit=true;m.Execute();});
 Run("kairo-changes-top",delegate(ExecManager m,ExecForm f){kairo.unity.system.KairoBase.Value.onUpdate=delegate{m.Push(new ExecForm(2));};m.Execute();});
 Run("termination-dialog-no",delegate(ExecManager m,ExecForm f){m.ShowTerminationDialog();m.Execute();});
 Run("termination-dialog-yes",delegate(ExecManager m,ExecForm f){Hooks.dialog=true;m.ShowTerminationDialog();m.Execute();});
 Run("recorder-null",delegate(ExecManager m,ExecForm f){SaveRecorder.Value=null;m.Execute();});
 Run("init-false",delegate(ExecManager m,ExecForm f){f.initOk=false;m.Execute();});
 Run("finish-false",delegate(ExecManager m,ExecForm f){f.finishOk=false;m.Pop();m.Execute();});
 Run("resume-false",delegate(ExecManager m,ExecForm f){f.resumeOk=false;m.Resume();m.Execute();});
 Run("execute-draw",delegate(ExecManager m,ExecForm f){m.Execute();m.OnDraw();});
 Run("draw-skip",delegate(ExecManager m,ExecForm f){m.Execute();m.DrawSkip();m.OnDraw();});
 Run("print-form",delegate(ExecManager m,ExecForm f){m.Execute();m.SetPrintForm(new ExecForm(9));m.OnDraw();});
 Run("surface-null",delegate(ExecManager m,ExecForm f){Canvas.GetInstance().surface=null;m.Execute();m.OnDraw();});
 Run("draw-exception",delegate(ExecManager m,ExecForm f){m.Execute();f.throwDraw=true;m.OnDraw();m.OnDraw();});
 return 0;
 }
}
