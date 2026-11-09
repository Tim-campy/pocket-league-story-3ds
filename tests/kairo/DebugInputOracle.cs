using System;
using UnityEngine;
public class DebugInputOracle {
    public class Frame {public bool l,r,h0,h1,d0,d1;public int x,y;public Frame(bool left,bool right,bool held0,bool held1,bool down0,bool down1,int px,int py){l=left;r=right;h0=held0;h1=held1;d0=down0;d1=down1;x=px;y=py;}}
    public static string Bits(float value){return BitConverter.ToInt32(BitConverter.GetBytes(value),0).ToString("x8");}
    static int B(bool v){return v?1:0;}
    static void Main(){
        Frame[] frames={new Frame(false,false,false,false,false,false,0,0),new Frame(true,false,true,false,true,false,10,20),new Frame(true,false,true,false,false,false,10,20),new Frame(true,false,true,false,false,false,-5,300),new Frame(false,true,true,true,false,true,30,40),new Frame(false,false,false,false,false,false,32,42),new Frame(false,false,false,false,true,false,2,3),new Frame(false,false,false,false,false,false,int.MinValue,int.MaxValue),new Frame(false,false,false,false,true,true,6,7),new Frame(false,false,false,false,false,false,6,7),new Frame(false,true,false,false,false,false,9,9),new Frame(false,false,false,false,false,false,9,9)};
        for(int i=0;i<frames.Length;i++){Input.frame=frames[i];var p=Input.mousePosition;string row=""+B(Input.GetKey(KeyCode.LeftShift))+B(Input.GetKey(KeyCode.RightShift))+";"+B(Input.GetMouseButton(0))+B(Input.GetMouseButton(1))+";"+B(Input.GetMouseButtonDown(0))+B(Input.GetMouseButtonDown(1))+";"+B(Input.GetMouseButtonDown(0))+B(Input.GetMouseButtonDown(1))+";"+Bits(p.x)+","+Bits(p.y)+","+Bits(p.z)+";"+Screen.height+";"+OriginalDebugProjection.Project(new Surface());Console.WriteLine("frame-"+i+"\t"+row);}
    }
}
public class Surface {public int GetX(){return 4;}public int GetY(){return 6;}public float GetScaleRatio(){return 75.5f;}}
namespace UnityEngine {
    public struct Vector3 {public float x,y,z;}
    public enum KeyCode {RightShift=303,LeftShift=304}
    public static class Screen {public static int height=280;}
    public static class Input {
        public static DebugInputOracle.Frame frame;
        public static bool GetKey(KeyCode key){return key==KeyCode.LeftShift?frame.l:frame.r;}
        public static bool GetMouseButton(int button){return button==0?frame.h0:frame.h1;}
        public static bool GetMouseButtonDown(int button){return button==0?frame.d0:frame.d1;}
        public static Vector3 mousePosition {get{return new Vector3{x=(float)frame.x,y=(float)Screen.height-(float)frame.y,z=0f};}}
    }
}
