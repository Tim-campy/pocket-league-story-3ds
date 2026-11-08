using System;
public static class RandomFixtures {
    delegate string Work();static string Run(Work action){try{return action();}catch(Exception e){return e.GetType().FullName;}}
    static string Sequence(int seed){Random r=new Random(seed);string s="";for(int i=0;i<24;i++){if(i>0)s+=",";s+=r.Next();}return s;}
    public static void Main(){
        int[] seeds={0,1,-1,42,-42,161803398,Int32.MaxValue,Int32.MinValue,Int32.MinValue+1,1234567890};
        for(int i=0;i<seeds.Length;i++){int seed=seeds[i];Console.WriteLine("sequence-"+i+"="+Run(delegate{return Sequence(seed);}));}
        for(int i=0;i<seeds.Length;i++){int seed=seeds[i];Console.WriteLine("double-"+i+"="+Run(delegate{Random r=new Random(seed);string s="";for(int j=0;j<8;j++){if(j>0)s+=",";s+=BitConverter.DoubleToInt64Bits(r.NextDouble());}return s;}));}
        int[][] bounds={new int[]{0,0},new int[]{0,1},new int[]{-1,0},new int[]{-10,10},new int[]{Int32.MinValue,Int32.MaxValue},new int[]{Int32.MinValue,0},new int[]{0,Int32.MaxValue},new int[]{2,1}};
        for(int i=0;i<bounds.Length;i++){int[] row=bounds[i];Console.WriteLine("range-"+i+"="+Run(delegate{Random r=new Random(42);string s="";for(int j=0;j<8;j++){if(j>0)s+=",";s+=r.Next(row[0],row[1]);}return s+";"+r.Next();}));}
        Console.WriteLine("next-zero="+Run(delegate{Random r=new Random(42);return r.Next(0)+","+r.Next();}));
        Console.WriteLine("next-negative="+Run(delegate{return new Random(42).Next(-1).ToString();}));
        Console.WriteLine("bytes="+Run(delegate{Random r=new Random(42);byte[] b=new byte[32];r.NextBytes(b);return Convert.ToBase64String(b)+";"+r.Next();}));
        Console.WriteLine("bytes-empty="+Run(delegate{Random r=new Random(42);r.NextBytes(new byte[0]);return r.Next().ToString();}));
        Console.WriteLine("bytes-null="+Run(delegate{new Random(42).NextBytes(null);return "none";}));
        Console.WriteLine("mixed="+Run(delegate{Random r=new Random(42);return r.Next()+","+r.Next(10)+","+r.Next(-8,17)+","+BitConverter.DoubleToInt64Bits(r.NextDouble())+","+r.Next();}));
    }
}
