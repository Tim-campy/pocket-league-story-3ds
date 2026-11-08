using System;
using System.Text;
public static class StringBuilderFixtures {
    delegate string Work();static string Run(Work work){try{return work();}catch(Exception e){return e.GetType().FullName;}}
    static string Units(string s){string r="";foreach(char c in s){if(r.Length>0)r+=",";r+=((int)c).ToString("X4");}return r;}
    public static void Main(){
        int[] caps={-1,0,1,4,16};for(int i=0;i<caps.Length;i++){int n=caps[i];Console.WriteLine("ctor-cap-"+i+"="+Run(delegate{StringBuilder b=new StringBuilder(n);return b.Length+","+b.Capacity;}));}
        Console.WriteLine("ctor-null="+new StringBuilder((string)null).Capacity);Console.WriteLine("ctor-string="+new StringBuilder("12345678901234567").Capacity);
        StringBuilder a=new StringBuilder(2);Console.WriteLine("chain="+Object.ReferenceEquals(a,a.Append('A').Append((string)null).Append("BC"))+","+a.ToString()+","+a.Capacity);
        a.Append('\uD800');a.Append('\0');Console.WriteLine("units="+Units(a.ToString()));
        string snapshot=a.ToString();a[0]='Z';Console.WriteLine("snapshot="+Units(snapshot)+","+Units(a.ToString()));
        a.Length=2;Console.WriteLine("shrink="+Units(a.ToString())+","+a.Capacity);a.Length=6;Console.WriteLine("grow="+Units(a.ToString())+","+a.Capacity);
        Console.WriteLine("repeat="+new StringBuilder().Append('q',3).ToString());Console.WriteLine("substring="+new StringBuilder().Append("abcdef",2,3).ToString());
        Console.WriteLine("slice="+new StringBuilder("abc").ToString(1,2));
        Console.WriteLine("ensure="+new StringBuilder(2).EnsureCapacity(3));
        Console.WriteLine("negative-repeat="+Run(delegate{return new StringBuilder().Append('a',-1).ToString();}));
        Console.WriteLine("null-empty="+Run(delegate{return new StringBuilder().Append((string)null,0,0).ToString();}));
        Console.WriteLine("null-range="+Run(delegate{return new StringBuilder().Append((string)null,1,0).ToString();}));
        Console.WriteLine("null-negative="+Run(delegate{return new StringBuilder().Append((string)null,-1,0).ToString();}));
        Console.WriteLine("outside-get="+Run(delegate{return new StringBuilder()[0].ToString();}));Console.WriteLine("outside-set="+Run(delegate{StringBuilder b=new StringBuilder();b[0]='a';return "none";}));
        Console.WriteLine("negative-length="+Run(delegate{a.Length=-1;return "none";}));Console.WriteLine("small-capacity="+Run(delegate{a.Capacity=1;return "none";}));
    }
}
