// The runner provides original Canvas method fragments and ORIGINAL
// MotionEvent/KeyEvent sources. This harness only supplies synthetic inputs.
using System;
using kairo.unity.surface;
using kairo.unity.ui;
public static class InputOracle {
 delegate string Probe();
 static void P(string name,Probe f){try{Console.WriteLine(name+"="+f());}catch(Exception e){Console.WriteLine(name+"=!"+e.GetType().FullName);}}
 static string State(CanvasKeyOracle keys){return keys.GetKeyState()+":"+keys.GetKeypadState();}
 public static void Main(){
  System.Threading.Thread.CurrentThread.CurrentCulture=System.Globalization.CultureInfo.InvariantCulture;
  CanvasKeyOracle keys=new CanvasKeyOracle();
  P("initial",delegate{return State(keys)+":"+keys.GetKeyRepeatInterval()+":"+keys.GetKeyDoubleInterval();});
  P("down-pulse",delegate{keys.KeyDown(131072,true);keys.DecideKeyState();return State(keys)+":"+keys.CheckKeyPulse(131072)+":"+keys.CheckKeyPulse(131072)+":"+keys.CheckKeyRepeat(131072);});
  P("hold-repeat-history",delegate{string trace="";for(int i=0;i<12;i++){keys.DecideKeyState();trace+=keys.CheckKeyRepeat(131072)?"1":"0";}return trace;});
  P("other-key-blocks-repeat",delegate{keys.KeyDown(65536,true);keys.DecideKeyState();return keys.CheckKeyRepeat(131072).ToString();});
  P("release",delegate{keys.KeyUp(131072);keys.KeyUp(65536);keys.DecideKeyState();return State(keys);});
  P("clear",delegate{keys.ClearKeyBuffer();return State(keys);});
  P("double-first",delegate{keys.KeyDown(1,true);keys.DecideKeyState();return keys.CheckKeyDouble(1).ToString();});
  P("double-second",delegate{keys.KeyUp(1);keys.DecideKeyState();keys.KeyDown(1,true);keys.DecideKeyState();return keys.CheckKeyDouble(1).ToString();});
  P("click-latched",delegate{keys.ClearKeyBuffer();keys.KeyClick(2);keys.DecideKeyState();return State(keys)+":"+keys.CheckKeyPulse(2);});
  P("click-release-frame",delegate{keys.DecideKeyState();return State(keys);});
  P("down-then-up-latched",delegate{keys.KeyDown(4,true);keys.KeyUp(4);keys.DecideKeyState();return State(keys)+":"+keys.CheckKeyPulse(4);});
  P("pulse-invalid",delegate{keys.ClearKeyBuffer();keys.KeyDown(8,false);keys.DecideKeyState();return State(keys)+":"+keys.CheckKeyPulse(8);});
  P("soft-one-frame",delegate{keys.ClearKeyBuffer();keys.KeyDown(2097152,true);keys.DecideKeyState();return State(keys);});
  P("soft-next-frame",delegate{keys.DecideKeyState();return State(keys);});
  P("ignored-minus-one",delegate{keys.KeyDown(-1,true);keys.KeyClick(-1);keys.KeyUp(-1);keys.DecideKeyState();return State(keys);});
  P("configured-intervals",delegate{keys.SetKeyRepeatInterval(3);keys.SetKeyDoubleInterval(2);return keys.GetKeyRepeatInterval()+":"+keys.GetKeyDoubleInterval();});
  P("history-wrap",delegate{keys.ClearKeyBuffer();keys.KeyDown(16,true);for(int i=0;i<100;i++)keys.DecideKeyState();return keys.CheckKeyRepeat(16)+":"+keys.CheckKeyDouble(16);});
  P("oversized-repeat",delegate{return keys.CheckKeyRepeat(16,100).ToString();});
  P("negative-repeat",delegate{return keys.CheckKeyRepeat(16,-1).ToString();});
  P("key-id-default",delegate{return keys.KeyId(304,false)+":"+keys.KeyId(303,false)+":"+keys.KeyId(306,false)+":"+keys.KeyId(273,false)+":"+keys.KeyId(271,false);});
  P("key-id-debug",delegate{return keys.KeyId(304,true)+":"+keys.KeyId(303,true)+":"+keys.KeyId(306,true);});
  float[] positions={1.5f,2.5f,7.5f,8.5f};int[] ids={4,9};float[] deltas={1,2,0.25f,3,4,0.5f};
  MotionEvent motion=new MotionEvent(517,ids,positions,deltas,false);
  P("motion-fields",delegate{return motion.GetAction()+":"+motion.GetPointerCount()+":"+motion.GetPointerId(1)+":"+motion.GetX(1)+":"+motion.GetY(1)+":"+motion.IsMousePointer();});
  P("motion-alias",delegate{positions[0]=11.5f;ids[0]=12;deltas[2]=0.75f;return motion.GetX()+":"+motion.GetPointerId(0)+":"+motion.GetDeltaTime();});
  P("motion-deltas",delegate{return motion.GetDeltaX(1)+":"+motion.GetDeltaY(1)+":"+motion.GetDeltaTime(1);});
  P("motion-bounds",delegate{return motion.GetX(2).ToString();});
  P("motion-index-wrap",delegate{return motion.GetX(Int32.MinValue).ToString();});
  P("motion-null-delta",delegate{MotionEvent value=new MotionEvent(0,ids,positions,null,true);return value.GetDeltaX(Int32.MinValue)+":"+value.GetDeltaY(100)+":"+value.GetDeltaTime()+":"+value.IsMousePointer();});
  P("key-event",delegate{KeyEvent key=new KeyEvent(1,UnityEngine.KeyCode.Escape);return key.GetAction()+":"+(int)key.GetKeyCode()+":"+key.GetRepeatCount();});
 }
}
