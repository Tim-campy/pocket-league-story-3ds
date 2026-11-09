using System;using System.Collections.Generic;using UnityEngine;
public static class FrameProbe {public static string trace="";public static void Log(string value){trace+=value+";";}}
namespace UnityEngine {
 public enum RuntimePlatform {WindowsPlayer,Android,IPhonePlayer}
 public static class Application {public static RuntimePlatform platform=RuntimePlatform.WindowsPlayer;}
 public struct Vector3 {public float x,y,z;public Vector3(float x,float y){this.x=x;this.y=y;z=0;}}
 public static class Screen {public static int height=280;}
 public static class Input {
  static readonly bool[] held=new bool[2],down=new bool[2],up=new bool[2];static readonly HashSet<KeyCode> keys=new HashSet<KeyCode>();static int x,y;
  public static int EdgeQueries,BothEdgeFrames;public static int touchCount {get{return 0;}}
  public static Vector3 mousePosition {get{return new Vector3(x,Screen.height-y);}}
  public static bool GetMouseButton(int button){return held[button];}
  public static bool GetMouseButtonDown(int button){EdgeQueries++;return down[button];}public static bool GetMouseButtonUp(int button){EdgeQueries++;return up[button];}
  public static bool GetKey(KeyCode key){return keys.Contains(key);}public static float GetAxis(string name){return 0;}
  public static void Mouse(int button,bool value,int px,int py){held[button]=value;if(value)down[button]=true;else up[button]=true;x=px;y=py;}
  public static void Key(KeyCode key,bool value){if(value)keys.Add(key);else keys.Remove(key);}
  public static void Next(){for(int i=0;i<2;i++){if(down[i]&&up[i])BothEdgeFrames++;down[i]=up[i]=false;}}
 }
}
namespace kairo.common.cfg {public static class Config {public static bool DEBUG;}}
namespace java.lang {public static class JSystem {public static long CurrentTimeMillis(){return 0;}}}
namespace kairo.unity.ui {
 public class KeyEvent {readonly int action;public KeyEvent(int action,KeyCode key){this.action=action;}public int GetAction(){return action;}}
 public class MotionEvent {public int action;public float[] xy;public MotionEvent(int a,int[] ids,float[] xy,float[] delta,bool mouse){action=a;this.xy=xy;}}
}
class InputFrameOracle {
 static void Frame(FrameCanvas canvas,string name){canvas.DecideKeyState();Console.WriteLine(name+"="+FrameProbe.trace+"/"+canvas.State());FrameProbe.trace="";Input.Next();}
 static void Main(string[]args){kairo.common.cfg.Config.DEBUG=args.Length>0;var c=new FrameCanvas();
  if(args.Length>0){
   Input.Key(KeyCode.LeftControl,true);Frame(c,"initial-debug-left-control-down");Input.Key(KeyCode.RightControl,true);Frame(c,"initial-debug-control-alias-held");Input.Key(KeyCode.LeftControl,false);Frame(c,"initial-debug-one-control-released");Input.Key(KeyCode.RightControl,false);Frame(c,"initial-debug-all-control-released");
   Input.Key(KeyCode.LeftShift,true);Input.Mouse(0,true,40,50);Frame(c,"initial-debug-shift-suppresses-touch");Input.Key(KeyCode.RightShift,true);Frame(c,"initial-debug-shift-alias-held");Input.Key(KeyCode.LeftShift,false);Frame(c,"initial-debug-one-shift-released");
   kairo.common.cfg.Config.DEBUG=false;Frame(c,"initial-debug-matrix-retained-live-debug-false");kairo.common.cfg.Config.DEBUG=true;Frame(c,"initial-debug-restored-suppression");Input.Mouse(0,false,40,50);Frame(c,"initial-debug-release-mouse-suppressed");Input.Key(KeyCode.RightShift,false);Frame(c,"initial-debug-release-shift-delivers-up");
   kairo.common.cfg.Config.DEBUG=false;Input.Key(KeyCode.LeftControl,true);Frame(c,"initial-debug-control-still-in-matrix");Input.Key(KeyCode.LeftControl,false);Frame(c,"initial-debug-control-final-release");
   kairo.common.cfg.Config.DEBUG=true;Input.Key(KeyCode.RightShift,true);Input.Mouse(1,true,70,80);Frame(c,"initial-debug-right-mouse-down-suppressed");Input.Key(KeyCode.RightShift,false);Frame(c,"initial-debug-right-mouse-down-delayed");Input.Key(KeyCode.RightShift,true);Input.Mouse(1,false,70,80);Frame(c,"initial-debug-right-mouse-up-suppressed");Input.Key(KeyCode.RightShift,false);Frame(c,"initial-debug-right-mouse-up-delayed");
   Console.WriteLine("META="+Input.EdgeQueries+":"+Input.BothEdgeFrames);return;
  }
  Input.Mouse(0,true,10,20);Input.Mouse(0,false,10,20);Frame(c,"quick-left-released");
  Input.Mouse(0,true,10,20);Frame(c,"hold-left");
  Input.Mouse(0,false,12,22);Input.Mouse(0,true,12,22);Frame(c,"release-repress-left");
  Input.Mouse(0,false,13,23);Input.Mouse(0,true,13,23);Input.Mouse(0,false,13,23);Frame(c,"quick-click-while-held");
  Frame(c,"idle");Input.Mouse(1,true,13,23);Input.Mouse(1,false,13,23);Frame(c,"quick-right-released");
  Input.Mouse(1,true,13,23);Frame(c,"hold-right");Input.Mouse(1,false,13,23);Input.Mouse(1,true,13,23);Frame(c,"release-repress-right");
  Input.Mouse(1,false,13,23);Frame(c,"release-right");Input.Key(KeyCode.UpArrow,true);Input.Key(KeyCode.UpArrow,false);Frame(c,"quick-arrow-released");
  Input.Key(KeyCode.UpArrow,true);Frame(c,"hold-arrow");Input.Key(KeyCode.UpArrow,false);Input.Key(KeyCode.UpArrow,true);Frame(c,"release-repress-arrow");Input.Key(KeyCode.UpArrow,false);Frame(c,"release-arrow");
  kairo.common.cfg.Config.DEBUG=true;Input.Key(KeyCode.LeftShift,true);Input.Mouse(0,true,30,40);Frame(c,"debug-shift-suppresses-mouse");
  Input.Key(KeyCode.LeftShift,false);Frame(c,"release-shift-starts-touch");Input.Mouse(0,false,30,40);Frame(c,"release-after-shift");
  Console.WriteLine("META="+Input.EdgeQueries+":"+Input.BothEdgeFrames);
 }
}
