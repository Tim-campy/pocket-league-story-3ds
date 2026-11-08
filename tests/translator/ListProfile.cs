using System;
using System.Collections;
using System.Collections.Generic;
public static class ListProfile {
    delegate void Step();
    static string Error(Step step){try{step();return "none";}catch(Exception e){return e.GetType().FullName;}}
    public static void Main(){
        List<int> list=new List<int>();Console.WriteLine("capacity0="+list.Capacity);list.Add(9);Console.WriteLine("capacity1="+list.Capacity);
        List<int>.Enumerator before=list.GetEnumerator();Console.WriteLine("before="+Error(delegate{Console.Write(before.Current+",");}));
        List<int>.Enumerator done=list.GetEnumerator();done.MoveNext();done.MoveNext();Console.WriteLine("after="+Error(delegate{Console.Write(done.Current+",");}));
        IEnumerator boxed=((IEnumerable)list).GetEnumerator();Console.WriteLine("boxed-before="+Error(delegate{Console.Write(boxed.Current+",");}));
        List<int>.Enumerator set=list.GetEnumerator();list[0]=9;Console.WriteLine("set="+Error(delegate{set.MoveNext();}));
        List<int>.Enumerator cap=list.GetEnumerator();list.Capacity=8;Console.WriteLine("capacity-set="+Error(delegate{cap.MoveNext();}));
        List<int>.Enumerator remove=list.GetEnumerator();list.Remove(123);Console.WriteLine("remove-missing="+Error(delegate{remove.MoveNext();}));
        List<int>.Enumerator add=list.GetEnumerator();list.AddRange(new int[0]);Console.WriteLine("add-empty="+Error(delegate{add.MoveNext();}));
        List<int>.Enumerator range=list.GetEnumerator();list.RemoveRange(0,0);Console.WriteLine("remove-empty="+Error(delegate{range.MoveNext();}));
        List<int> empty=new List<int>();List<int>.Enumerator clear=empty.GetEnumerator();empty.Clear();Console.WriteLine("clear-empty="+Error(delegate{clear.MoveNext();}));
        List<double> doubles=new List<double>();doubles.Add(Double.NaN);Console.WriteLine("nan="+doubles.Contains(Double.NaN));
        Console.WriteLine("hash="+"abc".GetHashCode());
    }
}
