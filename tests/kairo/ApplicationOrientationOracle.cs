using System;
using UnityEngine;
class ApplicationOrientationOracle {
    static void Print(string key,string result){Console.WriteLine(key+"\t"+result+";gets="+Screen.reads+";auto_gets="+Screen.autoReads+";sets="+Screen.writes+";stored="+(int)Screen.Stored);}
    static void Main(){
        int[] states={0,1,2,3,4,5,99};
        foreach(int state in states){Screen.Prepare((ScreenOrientation)state,false);var app=new OriginalOrientation();Print("side-"+state,app.IsSide().ToString());}
        foreach(int state in states){Screen.Prepare((ScreenOrientation)state,false);var app=new OriginalOrientation();Print("get-"+state,app.GetOrientation().ToString());}
        foreach(int state in states)foreach(bool allowed in new[]{false,true}){Screen.Prepare((ScreenOrientation)state,allowed);var app=new OriginalOrientation();Print("auto-"+state+"-"+allowed,app.IsAutoOrientation().ToString());}
        foreach(int requested in new[]{int.MinValue,-2,-1,0,1,2,3,4,90,180,270,360,int.MaxValue}){Screen.Prepare(ScreenOrientation.Portrait,false);var app=new OriginalOrientation();app.SetOrientation(requested);Print("set-"+requested,app.GetOrientation()+"/"+app.IsSide()+"/"+app.IsAutoOrientation());}
        foreach(int state in states){Screen.Prepare((ScreenOrientation)state,false);var app=new OriginalOrientation();app.CaptureDefault();app.SetOrientation(90);app.ResetOrientation();Print("reset-"+state,app.GetOrientation()+"/"+app.IsSide());}
        Screen.Prepare(ScreenOrientation.Portrait,false);var beforeAwake=new OriginalOrientation();beforeAwake.ResetOrientation();Print("reset-before-awake",beforeAwake.GetOrientation().ToString());
        foreach(bool allowed in new[]{false,true})foreach(int requested in new[]{0,4,90}){Screen.Prepare(ScreenOrientation.Portrait,allowed);var app=new OriginalOrientation();app.SetOrientation(requested);Print("set-does-not-change-autorotate-"+allowed+"-"+requested,app.IsAutoOrientation().ToString());}
        int[][] sequences={new[]{1,3},new[]{1,1,4},new[]{4,1,1},new[]{0,3},new[]{3},new[]{1,1,3}};
        for(int i=0;i<sequences.Length;i++){Screen.Prepare(ScreenOrientation.Unknown,false);Screen.Sequence(sequences[i]);var app=new OriginalOrientation();Print("side-reread-"+i,app.IsSide().ToString());}
    }
}
