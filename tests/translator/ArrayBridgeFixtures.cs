using System;
public static class ArrayBridgeFixtures {
    delegate void Step();
    static string Error(Step action){try{action();return "none";}catch(Exception e){return e.GetType().FullName;}}
    static void Copy(object a,int ai,object b,int bi,int n){Array.Copy((Array)a,ai,(Array)b,bi,n);}
    static string Join(int[] a){return String.Join(",",Array.ConvertAll(a,delegate(int n){return n.ToString();}));}
    public static void Main(){
        int[] a={1,2,3,4,5};Copy(a,0,a,1,4);Console.WriteLine("overlap-right="+Join(a));Copy(a,1,a,0,4);Console.WriteLine("overlap-left="+Join(a));
        object[] refs={new object(),null,"x"};object[] target=new object[3];Copy(refs,0,target,0,3);Console.WriteLine("reference-identity="+Object.ReferenceEquals(refs[0],target[0])+","+(target[1]==null)+","+target[2]);
        Console.WriteLine("null-source="+Error(delegate{Copy(null,0,a,0,0);}));Console.WriteLine("null-dest="+Error(delegate{Copy(a,0,null,0,0);}));
        Console.WriteLine("wrong-source="+Error(delegate{Copy(new object(),0,null,0,0);}));Console.WriteLine("wrong-dest="+Error(delegate{Copy(null,0,new object(),0,0);}));
        int[][] arguments={new int[]{-1,0,0},new int[]{0,-1,0},new int[]{0,0,-1},new int[]{5,5,0},new int[]{6,0,0},new int[]{0,6,0},new int[]{0,0,6},new int[]{Int32.MaxValue,0,Int32.MaxValue}};
        for(int i=0;i<arguments.Length;i++){int[] row=arguments[i];Console.WriteLine("bounds-"+i+"="+Error(delegate{Copy(a,row[0],a,row[1],row[2]);}));}
        string[] strings={"a",null,"b"};string[] strings2=new string[3];Copy(strings,0,strings2,0,3);Console.WriteLine("strings="+strings2[0]+","+(strings2[1]==null)+","+strings2[2]);
        double[] doubles={Double.NaN,Double.NegativeInfinity,BitConverter.Int64BitsToDouble(Int64.MinValue)};double[] doubles2=new double[3];Copy(doubles,0,doubles2,0,3);Console.WriteLine("double-bits="+Double.IsNaN(doubles2[0])+","+Double.IsNegativeInfinity(doubles2[1])+","+BitConverter.DoubleToInt64Bits(doubles2[2]));
        int[] inner={9};int[][] jagged={inner};int[][] jagged2=new int[1][];Copy(jagged,0,jagged2,0,1);jagged2[0][0]=7;Console.WriteLine("jagged-alias="+inner[0]);
        Console.WriteLine("float-int="+Error(delegate{Copy(new float[]{1.25f},0,new int[1],0,1);}));
        Console.WriteLine("float-int-empty="+Error(delegate{Copy(new float[0],0,new int[0],0,0);}));
        Console.WriteLine("float-int-bounds="+Error(delegate{Copy(new float[0],0,new int[0],0,1);}));
    }
}
