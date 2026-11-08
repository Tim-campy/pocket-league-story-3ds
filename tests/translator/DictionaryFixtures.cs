using System;
using System.Collections.Generic;
public static class DictionaryFixtures {
    delegate string Work();static string Run(Work work){try{return work();}catch(Exception e){return e.GetType().FullName;}}
    static string Contents(Dictionary<string,int>d){string s="";foreach(KeyValuePair<string,int>pair in d){if(s.Length>0)s+=",";s+=pair.Key+":"+pair.Value;}return s;}
    static string Mutation(string mode){Dictionary<string,int>d=new Dictionary<string,int>();d.Add("a",1);d.Add("b",2);Dictionary<string,int>.Enumerator e=d.GetEnumerator();if(mode=="set")d["a"]=9;if(mode=="add")d.Add("c",3);if(mode=="remove")d.Remove("a");if(mode=="remove-missing")d.Remove("x");if(mode=="clear")d.Clear();return Run(delegate{return e.MoveNext().ToString();});}
    public static void Main(){
        Dictionary<string,int>d=new Dictionary<string,int>();Console.WriteLine("empty="+d.Count);d.Add("a",1);d.Add("b",2);d.Add("c",3);Console.WriteLine("insert="+Contents(d));d["b"]=4;Console.WriteLine("set="+Contents(d));d.Remove("b");d.Add("d",5);Console.WriteLine("reuse="+Contents(d));
        int value=9;bool found=d.TryGetValue("x",out value);Console.WriteLine("missing-out="+found+","+value);found=d.TryGetValue("d",out value);Console.WriteLine("found-out="+found+","+value);
        Console.WriteLine("duplicate="+Run(delegate{d.Add("a",99);return "none";}));Console.WriteLine("missing="+Run(delegate{return d["x"].ToString();}));Console.WriteLine("null-key="+Run(delegate{return d.ContainsKey(null).ToString();}));
        Console.WriteLine("null-add="+Run(delegate{d.Add(null,1);return "none";}));Console.WriteLine("null-set="+Run(delegate{d[null]=1;return "none";}));Console.WriteLine("null-remove="+Run(delegate{return d.Remove(null).ToString();}));
        Console.WriteLine("contains="+d.ContainsKey("a")+","+d.ContainsValue(5)+","+d.ContainsValue(99));
        string[] modes={"set","add","remove","remove-missing","clear"};for(int i=0;i<modes.Length;i++)Console.WriteLine("mutation-"+modes[i]+"="+Mutation(modes[i]));
        Dictionary<string,int>empty=new Dictionary<string,int>();Dictionary<string,int>.Enumerator ee=empty.GetEnumerator();empty.Clear();Console.WriteLine("clear-empty="+Run(delegate{return ee.MoveNext().ToString();}));
        Dictionary<string,int>.Enumerator before=d.GetEnumerator();KeyValuePair<string,int>bp=before.Current;Console.WriteLine("before="+(bp.Key==null)+","+bp.Value);while(before.MoveNext()){}bp=before.Current;Console.WriteLine("after="+(bp.Key==null)+","+bp.Value);
        Dictionary<string,int>.Enumerator disposed=d.GetEnumerator();disposed.Dispose();Console.WriteLine("disposed="+Run(delegate{return disposed.MoveNext().ToString();}));
        Dictionary<string,int>alias=d;alias["a"]=8;Console.WriteLine("alias="+d["a"]);d.Clear();d.Add("z",9);Console.WriteLine("clear-reuse="+Contents(d));
        Dictionary<double,string>nan=new Dictionary<double,string>();nan[Double.NaN]="n";nan[-0.0]="z";Console.WriteLine("float-equal="+nan.ContainsKey(Double.NaN)+","+nan[0.0]);
        Dictionary<int,string>nullable=new Dictionary<int,string>();nullable.Add(1,null);Console.WriteLine("null-value="+nullable.ContainsValue(null)+","+(nullable[1]==null));
        Console.WriteLine("negative-cap="+Run(delegate{return new Dictionary<int,int>(-1).Count.ToString();}));
    }
}
