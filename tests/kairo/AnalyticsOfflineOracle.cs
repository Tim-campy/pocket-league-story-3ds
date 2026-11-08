// No tracker or queue implementation is copied here. The reconstructed
// AnalyticsTracker and HttpObject classes are compiled as new test source.
using System;using System.Collections;using System.Collections.Generic;using System.Reflection;
using kairo.unity.analytics;
namespace UnityEngine{
 public static class PlayerPrefs{
  public static Dictionary<string,string> values=new Dictionary<string,string>();public static int reads,writes,saves;
  public static string GetString(string k,string fallback){reads++;return values.ContainsKey(k)?values[k]:fallback;}
  public static void SetString(string k,string v){writes++;values[k]=v;}public static void Save(){saves++;}
 }
}
public static class AnalyticsOwnHooks{public static int threads,referrers;}
class AnalyticsOfflineOracle{
 static readonly Type t=typeof(AnalyticsTracker);
 static FieldInfo Field(string name){return t.GetField(name,BindingFlags.Static|BindingFlags.NonPublic);}
 static void Reset(string queue){
  Field("isSetup_").SetValue(null,false);Field("thread_").SetValue(null,null);
  FieldInfo f=Field("analyticsBuffer_");f.SetValue(null,Activator.CreateInstance(f.FieldType));
  UnityEngine.PlayerPrefs.values.Clear();UnityEngine.PlayerPrefs.reads=UnityEngine.PlayerPrefs.writes=UnityEngine.PlayerPrefs.saves=0;
  HttpHooks.created=HttpHooks.disposed=HttpHooks.dialogs=0;AnalyticsOwnHooks.threads=AnalyticsOwnHooks.referrers=0;
  if(queue!=null)UnityEngine.PlayerPrefs.values["_AnalyticsTracker"]=queue;
 }
 static string Snapshot(){
  IList list=(IList)Field("analyticsBuffer_").GetValue(null);string retries="",dates="";
  foreach(object item in list){if(retries.Length>0){retries+=",";dates+=",";}Type i=item.GetType();retries+=i.GetField("Retry").GetValue(item);dates+=i.GetField("Date").GetValue(item);}
  return Field("isSetup_").GetValue(null)+":"+list.Count+":"+retries+":"+dates+":"+(Field("thread_").GetValue(null)==null)+":"+HttpHooks.created+":"+HttpHooks.disposed+":"+AnalyticsOwnHooks.threads+":"+UnityEngine.PlayerPrefs.writes+":"+UnityEngine.PlayerPrefs.saves;
 }
 static void Main(){
  Reset(null);AnalyticsTracker.Setup();Console.WriteLine("fresh="+Snapshot()+":"+(UnityEngine.PlayerPrefs.values["_AnalyticsTracker"]=="1")+":"+AnalyticsOwnHooks.referrers);
  int reads=UnityEngine.PlayerPrefs.reads;AnalyticsTracker.Setup();Console.WriteLine("second-setup="+(UnityEngine.PlayerPrefs.reads==reads)+":"+Snapshot());
  string first="https://synthetic.invalid/a",second="https://synthetic.invalid/b";Reset("1"+first+"\t2\t100\n"+second+"\t0\t200");
  AnalyticsTracker.Setup();string saved=UnityEngine.PlayerPrefs.values["_AnalyticsTracker"];
  Console.WriteLine("retained-offline="+Snapshot()+":"+(saved=="1"+first+"\t3\t100\n"+second+"\t0\t200"));
  AnalyticsTracker.DispatchPageView();saved=UnityEngine.PlayerPrefs.values["_AnalyticsTracker"];
  Console.WriteLine("repeat-failure="+Snapshot()+":"+(saved=="1"+first+"\t4\t100\n"+second+"\t0\t200"));
  Reset("1malformed");AnalyticsTracker.Setup();Console.WriteLine("malformed-retained="+Snapshot()+":"+(UnityEngine.PlayerPrefs.values["_AnalyticsTracker"]=="1malformed"));
 }
}
