using System;
using System.IO;
class PathFixtures {
    static string S(string s){if(s==null)return "null";string r="";foreach(char c in s)r+=((int)c).ToString("x4");return r;}
    static void Main(){
        string[] values={null,"","own","own.ext","dir.x/own","dir/own.x",".x","own.",".","..","own.tar.gz","dir\\own.x","dir.x\\own","f.x:y","f:x.y","f.x/","own.x\0","own<.x","own.x\n","own.x ","\ud800.x"};
        for(int i=0;i<values.Length;i++){try{Console.WriteLine("extension"+i+"="+S(Path.GetExtension(values[i])));}catch(Exception e){Console.WriteLine("extension"+i+"="+e.GetType().FullName);}}
        for(int i=0;i<values.Length;i++){try{Console.WriteLine("filename"+i+"="+S(Path.GetFileName(values[i])));}catch(Exception e){Console.WriteLine("filename"+i+"="+e.GetType().FullName);}}
        for(int i=0;i<values.Length;i++){try{Console.WriteLine("withoutExtension"+i+"="+S(Path.GetFileNameWithoutExtension(values[i])));}catch(Exception e){Console.WriteLine("withoutExtension"+i+"="+e.GetType().FullName);}}
        string[] extensions={null,"","txt",".txt",".","x/y"};
        for(int i=0;i<values.Length;i++)for(int j=0;j<extensions.Length;j++){try{Console.WriteLine("change"+i+"_"+j+"="+S(Path.ChangeExtension(values[i],extensions[j])));}catch(Exception e){Console.WriteLine("change"+i+"_"+j+"="+e.GetType().FullName);}}
    }
}
