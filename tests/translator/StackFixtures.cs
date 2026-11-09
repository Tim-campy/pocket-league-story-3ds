// Own synthetic fixture. No game assembly, value, asset or save is loaded.
using System;using System.Collections.Generic;using System.Reflection;
public static class StackFixtures {
    delegate void Step();
    static string Error(Step body){try{body();return "none";}catch(Exception e){return e.GetType().FullName;}}
    class Item {public int value;public Item(int n){value=n;}}
    static int Capacity(Stack<int> stack){foreach(var field in typeof(Stack<int>).GetFields(BindingFlags.Instance|BindingFlags.NonPublic))if(field.FieldType==typeof(int[])){var items=(int[])field.GetValue(stack);return items==null?0:items.Length;}throw new Exception("Own capacity probe cannot locate backing array");}
    public static void Main(string[]args){
        if(args.Length>0){var capacity=new Stack<int>();Console.WriteLine("capacity-0="+Capacity(capacity));for(int i=1;i<=33;i++){capacity.Push(i);if(i==1||i==4||i==5||i==16||i==17||i==32||i==33)Console.WriteLine("capacity-"+i+"="+Capacity(capacity));}Console.WriteLine("framework="+typeof(Stack<int>).Assembly.Location);return;}
        var s=new Stack<int>();Console.WriteLine("initial="+s.Count+","+Error(delegate{s.Pop();})+","+Error(delegate{s.Peek();}));
        s.Push(10);Console.WriteLine("push="+s.Count+","+s.Peek()+","+s.Peek());var alias=s;alias.Push(20);Console.WriteLine("alias="+s.Count+","+s.Peek());
        Console.WriteLine("pop-lifo="+s.Pop()+","+s.Pop()+","+s.Count);Console.WriteLine("underflow="+Error(delegate{s.Pop();})+","+Error(delegate{s.Peek();})+","+s.Count);
        Stack<int> missing=null;Console.WriteLine("null="+Error(delegate{int n=missing.Count;})+","+Error(delegate{missing.Push(1);})+","+Error(delegate{missing.Pop();})+","+Error(delegate{missing.Peek();}));
        var refs=new Stack<Item>();refs.Push(null);Console.WriteLine("null-element="+(refs.Peek()==null)+","+(refs.Pop()==null)+","+refs.Count);
        var item=new Item(7);refs.Push(item);refs.Push(item);Console.WriteLine("ref-identity="+Object.ReferenceEquals(item,refs.Peek())+","+Object.ReferenceEquals(item,refs.Pop())+","+Object.ReferenceEquals(item,refs.Pop()));
        refs.Push(item);var popped=refs.Pop();popped.value=9;Console.WriteLine("pop-copy="+item.value+","+refs.Count);
        object boxed=s;Console.WriteLine("object-identity="+Object.ReferenceEquals(boxed,s)+","+Object.ReferenceEquals((Stack<int>)boxed,s));
        Console.WriteLine("wrong-object="+Error(delegate{var bad=(Stack<int>)new object();})+","+Error(delegate{var bad=(Stack<int>)(object)new Stack<long>();}));
        var growth=new Stack<int>();for(int i=0;i<100;i++)growth.Push(i);int total=0;for(int i=99;i>=0;i--)if(growth.Pop()==i)total++;Console.WriteLine("growth-lifo="+total+","+growth.Count);
        growth.Push(int.MinValue);growth.Push(int.MaxValue);Console.WriteLine("int-extremes="+growth.Pop()+","+growth.Pop());
        var strings=new Stack<string>();strings.Push("a");strings.Push(null);strings.Push("b");Console.WriteLine("strings="+strings.Pop()+","+(strings.Pop()==null)+","+strings.Peek()+","+strings.Count);
        var reuse=new Stack<int>();for(int i=0;i<10;i++){reuse.Push(i);if(reuse.Peek()!=reuse.Pop())throw new Exception("Own roundtrip mismatch");}Console.WriteLine("reuse="+reuse.Count);
        var throughAlias=alias;throughAlias.Push(33);Console.WriteLine("alias-return="+alias.Pop()+","+s.Count);
    }
}
