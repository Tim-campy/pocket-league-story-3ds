using System;
using System.Threading;
class InitLog {public static string Text="";public static int Failures,Threads;public static int Mark(string name,int n){Text+=name;return n;}}
class OrderedInit {public static int A=InitLog.Mark("A",7);public static int B=InitLog.Mark("B",A+1);static OrderedInit(){InitLog.Text+="C";}}
class RecursiveInit {public static int A=GetB()+1;public static int B=9;static RecursiveInit(){}static int GetB(){return B;}}
class InitA {public static int A=InitB.B+1;static InitA(){}}
class InitB {public static int B=InitA.A+1;static InitB(){}}
class FailedInit {public static int Value=0;static FailedInit(){++InitLog.Failures;throw new InvalidOperationException("fixture-inner");}}
class NestedFailedInit {public static int Value=FailedInit.Value;static NestedFailedInit(){}}
class ThreadInit {public static int Value;static ThreadInit(){++InitLog.Threads;Thread.Sleep(20);Value=13;}}
class TypeInitFixtures {
    static void Main(){
        Console.WriteLine("order="+OrderedInit.A+","+OrderedInit.B+","+InitLog.Text);
        int unused=OrderedInit.A;Console.WriteLine("once="+InitLog.Text);
        Console.WriteLine("recursive="+RecursiveInit.A+","+RecursiveInit.B);
        Console.WriteLine("cross="+InitA.A+","+InitB.B);
        TypeInitializationException first=null,second=null;
        try{unused=FailedInit.Value;}catch(TypeInitializationException e){first=e;}
        try{unused=FailedInit.Value;}catch(TypeInitializationException e){second=e;}
        Console.WriteLine("failedType="+first.GetType().FullName);
        Console.WriteLine("failedName="+first.TypeName);
        Console.WriteLine("failedInner="+first.InnerException.GetType().FullName+":"+first.InnerException.Message);
        Console.WriteLine("failedCount="+InitLog.Failures);
        Console.WriteLine("failedIdentity="+Object.ReferenceEquals(first,second));
        try{unused=NestedFailedInit.Value;}catch(TypeInitializationException e){Console.WriteLine("nested="+e.TypeName+","+e.InnerException.GetType().FullName);}
        var direct=new TypeInitializationException("SyntheticType",new InvalidOperationException("inner"));
        Console.WriteLine("directMessage="+direct.Message);
        var results=new int[4];var threads=new Thread[4];
        for(int i=0;i<4;++i){int slot=i;threads[i]=new Thread(delegate(){results[slot]=ThreadInit.Value;});threads[i].Start();}
        for(int i=0;i<4;++i)threads[i].Join();
        Console.WriteLine("threads="+InitLog.Threads+","+results[0]+","+results[1]+","+results[2]+","+results[3]);
    }
}
