// Own fixtures for framework semantics used by generated Vector classes.
using System;
using System.Collections;
using System.Collections.Generic;
public static class CollectionFixtures {
    interface IMarker {}
    class Item : IMarker {}
    delegate void Step();
    static string Error(Step step){try{step();return "none";}catch(Exception e){return e.GetType().FullName;}}
    static string Join(List<int> items){string result="";for(int i=0;i<items.Count;i++){if(i>0)result+=",";result+=items[i];}return result;}
    public static void Main(){
        List<int> list=new List<int>();Console.WriteLine("capacity0="+list.Capacity);list.Add(9);Console.WriteLine("capacity1="+list.Capacity);
        List<int>.Enumerator before=list.GetEnumerator();int beforeValue=0;string b=Error(delegate{beforeValue=before.Current;});Console.WriteLine("before="+beforeValue+","+b);
        List<int>.Enumerator done=list.GetEnumerator();done.MoveNext();done.MoveNext();int afterValue=0;string d=Error(delegate{afterValue=done.Current;});Console.WriteLine("after="+afterValue+","+d);
        IEnumerator boxed=((IEnumerable)list).GetEnumerator();Console.WriteLine("boxed-before="+Error(delegate{object o=boxed.Current;}));
        List<int>.Enumerator set=list.GetEnumerator();list[0]=9;Console.WriteLine("set="+Error(delegate{set.MoveNext();}));
        List<int>.Enumerator cap=list.GetEnumerator();list.Capacity=8;Console.WriteLine("capacity-set="+Error(delegate{cap.MoveNext();}));
        List<int>.Enumerator remove=list.GetEnumerator();list.Remove(123);Console.WriteLine("remove-missing="+Error(delegate{remove.MoveNext();}));
        List<int>.Enumerator add=list.GetEnumerator();list.AddRange(new int[0]);Console.WriteLine("add-empty="+Error(delegate{add.MoveNext();}));
        List<int>.Enumerator range=list.GetEnumerator();list.RemoveRange(0,0);Console.WriteLine("remove-empty="+Error(delegate{range.MoveNext();}));
        List<int> empty=new List<int>();List<int>.Enumerator clear=empty.GetEnumerator();empty.Clear();Console.WriteLine("clear-empty="+Error(delegate{clear.MoveNext();}));
        List<int>.Enumerator disposed=list.GetEnumerator();disposed.Dispose();Console.WriteLine("disposed="+Error(delegate{disposed.MoveNext();}));
        List<double> doubles=new List<double>();doubles.Add(Double.NaN);Console.WriteLine("nan="+doubles.Contains(Double.NaN));
        List<object> objects=new List<object>();objects.Add(3);objects.Add(Double.NaN);objects.Add("same");objects.Add(null);
        Console.WriteLine("boxed-equality="+objects.Contains(3)+","+objects.Contains(3L)+","+objects.Contains(Double.NaN)+","+objects.Contains(new string(new char[]{'s','a','m','e'}))+","+objects.Contains(null));
        object integer=3;Console.WriteLine("unbox="+(int)integer+","+Error(delegate{long bad=(long)integer;})+","+Error(delegate{int bad=(int)(object)null;}));
        string name=new string(new char[]{'a','b','c'});object str=name;Console.WriteLine("string-identity="+Object.ReferenceEquals(str,(object)name)+","+name.Equals("abc"));
        int[] array={1,2};object arr=array;Console.WriteLine("array-identity="+Object.ReferenceEquals(arr,(object)array)+","+(((int[])arr)[1]));
        List<int> alias=list;alias.Add(4);Console.WriteLine("list-alias="+Join(list));
        list.Insert(1,7);list.Add(7);Console.WriteLine("list-search="+Join(list)+","+list.IndexOf(7)+","+list.LastIndexOf(7));
        list.RemoveAt(0);list.RemoveRange(1,1);Console.WriteLine("list-remove="+Join(list));
        list.InsertRange(1,new int[]{1,2});Console.WriteLine("list-range="+Join(list));
        List<int> self=new List<int>();self.Add(1);self.Add(2);self.InsertRange(1,self);Console.WriteLine("self-range="+Join(self));
        int[] copy=list.ToArray();copy[0]=99;Console.WriteLine("to-array-copy="+list[0]+","+copy[0]);
        Console.WriteLine("bounds="+Error(delegate{int x=list[-1];})+","+Error(delegate{list.Insert(99,1);})+","+Error(delegate{list.Capacity=0;}));
        int prior=list.Capacity;list.Clear();Console.WriteLine("clear-capacity="+list.Count+","+(list.Capacity==prior));
        object stored=alias;Console.WriteLine("list-object="+Object.ReferenceEquals(stored,(object)alias));
        List<string> names=new List<string>();names.Add(null);names.Add("a");names.Add("a");Console.WriteLine("string-list="+names.IndexOf(null)+","+names.LastIndexOf("a"));
        List<int>.Enumerator reset=alias.GetEnumerator();reset.MoveNext();((IEnumerator)reset).Reset();Console.WriteLine("reset-copy="+reset.Current);
        object instance=new Item();IMarker marker=(IMarker)instance;
        Console.WriteLine("interface-object="+Object.ReferenceEquals(instance,(object)marker));
        List<IMarker> interfaces=new List<IMarker>();interfaces.Add(marker);Console.WriteLine("interface-equality="+interfaces.Contains((IMarker)instance));
        IMarker[] source=interfaces.ToArray();object[] view=source;Console.WriteLine("interface-array-identity="+Object.ReferenceEquals(source,view));Console.WriteLine("interface-array-element="+Object.ReferenceEquals(view[0],instance));Console.WriteLine("interface-array-store="+Error(delegate{view[0]=37;}));
    }
}
