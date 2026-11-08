using System;
using System.Globalization;
using System.Threading;
using System.Collections.Generic;
class MutableDispatch {
    public int Calls;
    public override bool Equals(object value){Calls++;return value is MutableDispatch;}
    public override int GetHashCode(){Calls++;return 17;}
    public override string ToString(){Calls++;return "calls:"+Calls;}
}
class NamedDispatch {}
public static class ObjectDispatchFixtures {
    public static void Main(){
        Thread.CurrentThread.CurrentCulture=CultureInfo.InvariantCulture;
        MutableDispatch instance=new MutableDispatch();object obj=instance;Console.WriteLine("equals="+obj.Equals(new MutableDispatch())+","+instance.Calls);Console.WriteLine("hash="+obj.GetHashCode()+","+instance.Calls);Console.WriteLine("text="+obj.ToString()+","+instance.Calls);
        List<object>list=new List<object>();list.Add(obj);Console.WriteLine("list-dispatch="+list.Contains(new MutableDispatch())+","+instance.Calls);
        Dictionary<object,int>dict=new Dictionary<object,int>();dict.Add(obj,1);bool found=dict.ContainsKey(obj);Console.WriteLine("dictionary-dispatch="+found+","+instance.Calls);
        Console.WriteLine("base-name="+new object().ToString());Console.WriteLine("derived-name="+new NamedDispatch().ToString());
        string text=new string(new char[]{'a','b'});object str=text;Console.WriteLine("string-text="+str.ToString()+","+Object.ReferenceEquals(text,str.ToString()));
        object[] values={true,false,'Z',(byte)255,(sbyte)-128,Int16.MinValue,UInt16.MaxValue,Int32.MinValue,UInt32.MaxValue,Int64.MinValue,UInt64.MaxValue};
        for(int i=0;i<values.Length;i++)Console.WriteLine("boxed-"+i+"="+values[i].ToString());
        CultureInfo custom=(CultureInfo)CultureInfo.InvariantCulture.Clone();custom.NumberFormat.NegativeSign="minus";Thread.CurrentThread.CurrentCulture=custom;Console.WriteLine("boxed-culture="+((object)(-42)).ToString());
    }
}
