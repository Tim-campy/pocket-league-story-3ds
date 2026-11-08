using System;
using kairo.unity.form;
using kairo.unity.ui;
class ProbeForm:FormBase {
 public static string trace="";public ProbeForm(int id):base(id){}
 public override bool Init(){trace+="I"+GetId()+",";return true;}
 public override bool Finish(){trace+="F"+GetId()+",";return true;}
 public override void Draw(Graphics g){trace+="D"+GetId()+",";}
 public override bool ProcessEvent(AppEvent e){trace+="E"+GetId()+",";return GetId()==2;}
 public override bool CheckMainWindow(){return GetId()!=2;}
}
class ConstructorProbe:FormBase {
 public static string trace="";int value=Mark("field");
 public ConstructorProbe():base(Mark("basearg")){Mark("body");}
 public static int Mark(string phase){trace+=phase+",";return phase=="basearg"?23:17;}
 public int Value(){return value;}
}
class TouchProbe:FormBase {
 public int receivedType,receivedValue;public TouchProbe():base(42){}
 public override int GetTouchValue(int type,int index){return unchecked(type*31+index+receivedType+receivedValue);}
 public override void SetTouchValue(int type,int value){receivedType=type;receivedValue=value;}
 public int BaseValue(){return base.GetTouchValue(3,4);}public void BaseSet(){base.SetTouchValue(5,6);}
}
class FormsOracle {
 static FormManagerBase m=new FormManagerBase();
 static string S(){string s="";for(int i=0;i<m.GetFormsNum();i++){var f=m.GetForm(i);s+=f.GetId()+":"+f.GetProcessMode()+",";}return s;}
 static void P(string name,Func<string> f){Console.Write(name+"=");try{Console.Write(f());}catch(Exception e){Console.Write("!"+e.GetType().FullName);}Console.WriteLine();}
 static string T(bool v){return v?"True":"False";}
 public static int Main(){
 var c=Canvas.GetInstance();var a=new ProbeForm(1);var b=new ProbeForm(2);var d=new ProbeForm(3);
 P("empty",delegate{return m.GetFormsNum()+":"+T(m.GetTopForm()==null)+":"+T(a.CheckUsable())+":"+T(a.IsAlive())+":"+T(a.Pop());});
 P("labels-before",delegate{c.SetSoftLabel("L","R");return c.GetSoftLabelL()+":"+c.GetSoftLabelR();});
 P("labels-publish",delegate{c.UpdateSoftLabel();return c.GetSoftLabelL()+":"+c.GetSoftLabelR()+":"+T(c.GetSoftLabel(2)==null);});
 P("labels-index",delegate{c.SetSoftLabel(1,"r2");return c.GetSoftLabelL()+":"+c.GetSoftLabelR();});
 P("push",delegate{m.Push(a);return S()+":"+T(a.CheckUsable())+":"+m.GetCurrentForm().GetId();});
 P("init",delegate{m.ExecuteInitAndFinish();return S()+":"+ProbeForm.trace;});
 P("form-label",delegate{a.SetSoftLabel("a","b");c.UpdateSoftLabel();return a.GetLeftSoftLabel()+":"+c.GetSoftLabelL();});
 P("push-after",delegate{a.Push(b);return S();});
 P("push-before",delegate{m.Push(a,d,true);return S();});
 P("init-more",delegate{m.ExecuteInitAndFinish();return S()+":"+ProbeForm.trace;});
 P("event-stop",delegate{ProbeForm.trace="";m.ProcessEvent(new AppEvent(AppEventType.Resume));return ProbeForm.trace;});
 P("exit-once",delegate{ProbeForm.trace="";m.ProcessEvent(new AppEvent(AppEventType.Exit));m.ProcessEvent(new AppEvent(AppEventType.Exit));return ProbeForm.trace;});
 P("form-bounds",delegate{return m.GetForm(-1).GetId().ToString();});
 P("pop-reactivate",delegate{a.SetProcessMode(3);b.Pop();return S()+":"+T(b.IsAlive());});
 P("finish",delegate{m.ExecuteInitAndFinish();return S()+":"+ProbeForm.trace;});
 P("finished-label",delegate{b.SetSoftLabel("blocked","blocked");return b.GetLeftSoftLabel()+":"+T(b.CheckUsable());});
 P("move-top",delegate{m.MoveToTop(d);return S();});
 P("move-down",delegate{m.MoveToDown(d);return S()+":"+m.GetTopForm().GetId()+":"+m.GetDownForm().GetId();});
 P("reinsert-alive",delegate{m.Push(a,d);return S();});
 P("change-existing",delegate{m.ChangeCurrentForm(a);return S();});
 P("finish-old",delegate{m.ExecuteInitAndFinish();return S()+":"+ProbeForm.trace;});
 P("change-new",delegate{m.ChangeCurrentForm(b);return S();});
 P("init-finish-change",delegate{m.ExecuteInitAndFinish();return S()+":"+ProbeForm.trace;});
 P("draw",delegate{m.Draw(new Graphics());return S()+":"+ProbeForm.trace;});
 P("back-intercept",delegate{b.SetProcessMode(3);m.ProcessBackKey();return T(m.CheckShowTerminationDialog());});
 P("back-show-dialog",delegate{m.Pop();m.ProcessBackKey();return T(m.CheckShowTerminationDialog());});
 P("index",delegate{return m.GetFormIndex(a)+":"+m.GetFormIndex(b);});
 P("app-event-default",delegate{var e=new AppEvent(AppEventType.Exit,null);return ((int)e.Type)+":"+e.Args.Length;});
 P("constructor-order",delegate{ConstructorProbe.trace="";var p=new ConstructorProbe();return ConstructorProbe.trace+"/"+p.GetId()+":"+p.Value()+":"+p.GetLeftSoftLabel();});
 P("touch-base-default",delegate{kairo.unity.surface.TouchValueAccessor touch=new FormBase(9);touch.SetTouchValue(1,2);return touch.GetTouchValue(3,4)+":"+T(touch is FormBase);});
 P("touch-derived-dispatch",delegate{var p=new TouchProbe();kairo.unity.surface.TouchValueAccessor touch=p;touch.SetTouchValue(5,7);p.BaseSet();return touch.GetTouchValue(3,4)+":"+p.BaseValue()+":"+p.receivedType+":"+p.receivedValue;});
 P("touch-object-identity",delegate{var p=new TouchProbe();kairo.unity.surface.TouchValueAccessor touch=p;object boxed=touch;return T(Object.ReferenceEquals(boxed,p))+":"+T(Object.ReferenceEquals((TouchProbe)boxed,touch));});
 return 0;
 }
}
