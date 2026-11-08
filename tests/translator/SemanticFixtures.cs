// Own-source language fixtures only. No original game data.
using System;
public delegate void FixtureAction();
public delegate TResult FixtureFunc<TResult>();

public static class SemanticFixtures {
    static int Max32=Int32.MaxValue,Min32=Int32.MinValue,MinusOne=-1;
    static long Max64=Int64.MaxValue,Min64=Int64.MinValue;
    static string trace="";
    static int Mark(string label,int value){trace+=label;return value;}
    static int Join(int a,int b,int c){return a*100+b*10+c;}
    static string TypeOf(FixtureAction body){try{body();return "none";}catch(Exception ex){return ex.GetType().FullName;}}
    static FixtureFunc<int> MakeCounter(){int value=4;return delegate{value+=3;return value;};}
    static event FixtureAction Changed;
    static void A(){trace+="A";}
    static void B(){trace+="B";}
    static int property;
    static int Property {get{trace+="G";return property;}set{trace+="S";property=value;}}
    static int Choose(int value){switch(value){case 1:return 11;case 3:case 4:return 22;default:return 33;}}
    static string JoinInts(int[] values){string result="";for(int i=0;i<values.Length;i++){if(i!=0)result+=",";result+=values[i];}return result;}
    public static void Main(){
        Console.WriteLine("i32="+unchecked(Max32+1)+","+unchecked(Min32-1)+","+unchecked(Max32*3)+","+unchecked(-Min32));
        Console.WriteLine("i64="+unchecked(Max64+1)+","+unchecked(Min64-1)+","+unchecked(Max64*3)+","+unchecked(-Min64));
        Console.WriteLine("unsigned="+unchecked((uint)MinusOne)+","+unchecked((ulong)(long)MinusOne));
        Console.WriteLine("casts="+unchecked((sbyte)255)+","+unchecked((short)65535)+","+unchecked((int)4294967295u));
        Console.WriteLine("division="+(-7/3)+","+(-7%3)+","+(7/-3)+","+(7%-3));
        Console.WriteLine("min-div="+TypeOf(delegate{Console.Write(Min32/MinusOne);}));
        Console.WriteLine("min-rem="+TypeOf(delegate{int x=Min32%MinusOne;if(x!=0)throw new Exception();}));
        Console.WriteLine("divide-zero="+TypeOf(delegate{int zero=0;Console.Write(3/zero);}));
        Console.WriteLine("shifts="+(MinusOne>>1)+","+unchecked((int)((uint)MinusOne>>1))+","+(1<<32)+","+(1<<-1));
        trace="";int joined=Join(Mark("A",1),Mark("B",2),Mark("C",3));Console.WriteLine("arguments="+trace+","+joined);
        trace="";int[] missing=null;string assignment=TypeOf(delegate{missing[Mark("I",0)]=Mark("R",1);});Console.WriteLine("array-store="+trace+","+assignment);
        trace="";int[] one=new int[1];string bounds=TypeOf(delegate{one[Mark("I",9)]=Mark("R",1);});Console.WriteLine("array-bounds-store="+trace+","+bounds);
        trace="";string compound=TypeOf(delegate{one[Mark("I",9)]+=Mark("R",1);});Console.WriteLine("array-compound="+trace+","+compound);
        string text="A\uD83D\uDE00\0Z";
        Console.WriteLine("utf16="+text.Length+","+(int)text[1]+","+(int)text[2]+","+(int)text[3]);
        Console.WriteLine("ordinal="+Math.Sign(String.CompareOrdinal("a","c"))+","+Math.Sign(String.CompareOrdinal("a","aaa"))+","+Math.Sign(String.CompareOrdinal(null,""))+","+(null==""));
        Console.WriteLine("concat="+String.Concat(null,"x")+","+String.Concat(null,null).Length);
        Console.WriteLine("string-null="+TypeOf(delegate{string s=null;Console.Write(s.Length);}));
        Console.WriteLine("string-bounds="+TypeOf(delegate{Console.Write(text[99]);}));
        int[] original={1,2,3,4};int[] alias=original;alias[0]=8;Array.Copy(original,0,original,1,3);
        Console.WriteLine("array-alias="+JoinInts(original));
        Console.WriteLine("array-null="+TypeOf(delegate{int[] n=null;Console.Write(n.Length);}));
        Console.WriteLine("array-negative="+TypeOf(delegate{int n=-1;int[] x=new int[n];Console.Write(x.Length);}));
        trace="";try{try{throw new DivideByZeroException();}catch(ArithmeticException){trace+="C";throw;}finally{trace+="F";}}catch(SystemException){trace+="O";}Console.WriteLine("exception="+trace);
        Console.WriteLine("finally-replace="+TypeOf(delegate{try{throw new DivideByZeroException();}finally{throw new InvalidOperationException();}}));
        int output=2;FixtureFunc<int> get=delegate{try{return output;}finally{output=7;}};Console.WriteLine("finally-return="+get()+","+output);
        FixtureFunc<int> counter=MakeCounter();Console.WriteLine("closure="+counter()+","+counter());
        trace="";Changed+=A;Changed+=B;Changed+=A;Changed-=A;Changed();Console.WriteLine("event="+trace);Changed=null;
        trace="";Property=5;Property+=2;Console.WriteLine("property="+trace+","+property);
        Console.WriteLine("switch="+Choose(1)+","+Choose(4)+","+Choose(9));
        int total=0;goto add;again:total+=10;goto done;add:total+=3;goto again;done:Console.WriteLine("goto="+total);
        float f=16777216f;float g=f+1f;g-=f;double d=9007199254740992d;double e=d+1d;e-=d;
        Console.WriteLine("float-width="+g+","+e+","+BitConverter.ToInt32(BitConverter.GetBytes(0.1f),0)+","+BitConverter.ToInt64(BitConverter.GetBytes(0.1d),0));
    }
}
