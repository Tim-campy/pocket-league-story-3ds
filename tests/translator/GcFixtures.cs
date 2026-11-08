using System;
using System.Collections.Generic;
public static class GcFixtures {
    class Node {public int Value;public Node Next;}
    delegate int Getter();delegate void Work();
    static string Error(Work work){try{work();return "none";}catch(Exception e){return e.GetType().FullName;}}
    public static void Main(){
        Console.WriteLine("max-generation="+GC.MaxGeneration);
        Node young=new Node();Console.WriteLine("generation-new="+GC.GetGeneration(young));GC.Collect(0);Console.WriteLine("generation-zero="+GC.GetGeneration(young));GC.Collect(1);Console.WriteLine("generation-one="+GC.GetGeneration(young));GC.KeepAlive(young);
        Node self=new Node();self.Value=7;self.Next=self;GC.Collect(2);Console.WriteLine("rooted-self="+self.Next.Value);
        Node pair=new Node();pair.Value=11;self.Next=pair;pair.Next=self;GC.Collect(2);Console.WriteLine("rooted-pair="+self.Next.Value+","+self.Next.Next.Value);
        Node[] array={self,pair};self=null;pair=null;GC.Collect(2);Console.WriteLine("rooted-array="+array[0].Value+","+array[1].Next.Value);
        List<object>list=new List<object>();list.Add(list);GC.Collect(2);Console.WriteLine("rooted-list="+Object.ReferenceEquals(list,list[0]));
        Dictionary<string,object>dict=new Dictionary<string,object>();dict.Add("self",dict);GC.Collect(2);Console.WriteLine("rooted-dictionary="+Object.ReferenceEquals(dict,dict["self"]));
        int value=19;Getter callback=delegate{return value;};GC.Collect(2);Console.WriteLine("rooted-delegate="+callback());
        WeakReference weak=new WeakReference(array);GC.Collect(2);Console.WriteLine("rooted-weak="+weak.IsAlive+","+array[1].Value);
        Console.WriteLine("negative-generation="+Error(delegate{GC.Collect(-1);}));
        Console.WriteLine("large-generation="+Error(delegate{GC.Collect(999);}));
    }
}
