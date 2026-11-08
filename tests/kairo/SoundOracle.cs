// Own test facades only. SoundBase/OGG/Player bodies are compiled separately
// from immutable reference sources. The synthetic Unity facade models public
// AudioSource controls, not real decoding, timing or Android audio hardware.
using System;
using System.Collections.Generic;
using System.Reflection;
using kairo.unity.ui;
namespace java.io {public class InputStream{}}
namespace java.util {
 public class Vector {List<object> values=new List<object>();public void AddElement(object o){values.Add(o);}public void RemoveElement(object o){values.Remove(o);}public bool Contains(object o){return values.Contains(o);}public int Size(){return values.Count;}public object ElementAt(int i){return values[i];}public bool IsEmpty(){return values.Count==0;}public object FirstElement(){return values[0];}public void RemoveAllElements(){values.Clear();}}
}
namespace kairo.common.cfg {public static class Config {public static bool PRINT=false,UNITY_EDITOR=false;}}
namespace kairo.unity.util {public static class Log {public static void Info(object o){}}}
namespace kairo.unity.ui {public class IApplication {public delegate object UIMethod();static IApplication app=new IApplication();public static IApplication GetCurrentApp(){return app;}public void RunOnUiThread(Action a,bool wait){a();}public object RunOnUiThread(UIMethod a,bool wait){return a();}}}
namespace UnityEngine {
 public class Object {public static void Destroy(object o){}}
 public class AudioClip:Object{}
 public class AudioSource {
  AudioClip data;float level=1;public bool playOnAwake,loop,isPlaying;public int plays,rewinds;public float time {set{rewinds++;}}
  public AudioClip clip {get{return data;}set{data=value;if(data==null)isPlaying=false;}}
  public float volume {get{return level;}set{level=Math.Max(0f,Math.Min(1f,value));}}
  public void Play(){plays++;isPlaying=clip!=null;}public void Stop(){isPlaying=false;}
 }
 public class GameObject {public GameObject(string name){}public T AddComponent<T>()where T:new(){return new T();}public static GameObject Find(string name){return new GameObject(name);}}
 public static class Resources {public static T Load<T>(string id)where T:class {if(id=="fixture/a"||id=="fixture/b"||id=="fixture/c"||id=="fixture/d"||id=="fixture/e")return new AudioClip() as T;return null;}public static void UnloadAsset(object o){}}
}
class SoundOracle {
 delegate string Probe();
 static SoundPlayer p=SoundPlayer.GetInstance();static List<SoundOGG> sounds=new List<SoundOGG>();
 static string T(bool x){return x?"1":"0";}
 static string Bits(float f){return BitConverter.ToInt32(BitConverter.GetBytes(f),0).ToString("x8");}
 static SoundOGG Load(string id){var s=SoundOGG.Load("fixture/"+id+".ogg");s.SetName(id);sounds.Add(s);return s;}
 static int PlayingCount(){var field=typeof(SoundPlayer).GetField("playingList_",BindingFlags.Instance|BindingFlags.NonPublic);return ((java.util.Vector)field.GetValue(p)).Size();}
 static string S(){string result="";foreach(var s in sounds)result+=s.GetName()+":"+s.GetState()+":"+s.GetLoop()+":"+s.GetSoundType()+",";result+="/"+PlayingCount()+"/";for(int i=0;i<p.port_.Length;i++){var t=p.port_[i];result+=(t.sound==null?"-":t.sound.GetName())+":"+T(t.component.isPlaying)+":"+T(t.component.loop)+":"+Bits(t.component.volume)+":"+t.component.rewinds+",";}return result;}
 static void P(string name,Probe f){Console.Write(name+"=");try{Console.Write(f());}catch(Exception e){Console.Write("!"+e.GetType().FullName);}Console.WriteLine();}
 public static int Main(){
 var a=Load("a");var b=Load("b");var c=Load("c");var d=Load("d");var e=Load("e");
 P("defaults",delegate{return S();});
 P("play-one",delegate{p.Play(a);return S();});
 P("change-global-oneshot",delegate{p.SetVolume(1,33);p.SetMute(1,true);return S();});
 P("restart-muted-oneshot",delegate{p.Play(a);return S();});
 P("stop-one",delegate{a.Stop();return S();});
 P("muted-new-oneshot",delegate{p.Play(a);return S();});
 P("unmute-and-play",delegate{p.SetMute(1,false);p.Play(a);return S();});
 P("loop-one-on-play",delegate{b.SetLoop(1);p.Play(b);return S();});
 P("setloop-one-while-playing",delegate{b.SetLoop(1);return S();});
 P("restart-retains-loop-flag",delegate{p.Play(b);return S();});
 P("setloop-infinity",delegate{b.SetLoop(-1);return S();});
 P("global-loop-volume",delegate{p.SetVolume(1,255);return S();});
 P("global-loop-mute",delegate{p.SetMute(1,true);return S();});
 P("reflect-muted",delegate{p.ReflectVolumeAndMute();return S();});
 P("suspend-resume-no-pause",delegate{p.Suspend();p.Suspend();p.Resume();p.Resume();return S();});
 P("bgm-muted-gets-port",delegate{c.SetSoundType(0);p.SetMute(0,true);p.Play(c);return S();});
 P("fourth-port",delegate{d.SetSoundType(0);p.Play(d);return S();});
 P("full-no-preemption",delegate{e.SetLoop(-1);p.Play(e);return S()+":"+p.GetPort(2);});
 P("ended-port-reused",delegate{p.port_[0].component.isPlaying=false;p.SetMute(1,false);p.Play(e);return S();});
 P("stopall-loop-only",delegate{p.StopAll();return S();});
 P("gain-upper-clamp",delegate{c.SetVolume(Int32.MaxValue,false);return S();});
 P("gain-lower-clamp",delegate{c.SetVolume(-1,false);return S();});
 P("invalid-volume-type",delegate{p.SetVolume(2,1);return "unexpected";});
 P("invalid-mute-type",delegate{p.SetMute(-1,true);return "unexpected";});
 P("null-sound",delegate{p.Play(null);return "unexpected";});
 P("missing-data",delegate{var s=Load("missing");p.Play(s);return S();});
 P("null-file",delegate{SoundOGG.Load((string)null);return "unexpected";});
 P("binary-load-unsupported",delegate{SoundOGG.Load(new byte[]{1});return "unexpected";});
 P("dispose",delegate{a.Dispose();return S();});
 P("dispose-repeat",delegate{a.Dispose();return S();});
 P("silent-other-audio",delegate{return T(p.IsSilentMode())+":"+T(p.IsOtherAudioPlay())+":"+p.GetPortMax();});
 // Changing loop to zero removes neither the existing playing-list entry nor
 // the source StopAll loop hazard. Observe the stale entry without hanging.
 P("stale-list-after-loop-zero",delegate{p.Play(b);b.SetLoop(0);b.Stop();return S();});
 return 0;
 }
}
