using System;
using System.Runtime.CompilerServices;
public static class FloatingCastFixtures {
    [MethodImpl(MethodImplOptions.NoInlining)]static int Int32(double n){return unchecked((int)n);}
    [MethodImpl(MethodImplOptions.NoInlining)]static long Int64(double n){return unchecked((long)n);}
    [MethodImpl(MethodImplOptions.NoInlining)]static int Int32F(float n){return unchecked((int)n);}
    [MethodImpl(MethodImplOptions.NoInlining)]static long Int64F(float n){return unchecked((long)n);}
    public static void Main(){
        double[] numbers={0.0,-0.0,1.9,-1.9,Double.NaN,Double.PositiveInfinity,Double.NegativeInfinity,2147483647.0,2147483648.0,-2147483648.0,-2147483649.0,4294967295.0,1e100,-1e100,9223372036854775808.0,-9223372036854775808.0,BitConverter.Int64BitsToDouble(0x43DFFFFFFFFFFFFFL),BitConverter.Int64BitsToDouble(unchecked((long)0xC3E0000000000001UL)),Double.Epsilon,-Double.Epsilon,2147483647.999,-2147483648.999};
        for(int i=0;i<numbers.Length;i++){Console.WriteLine("double-i32-"+i+"="+Int32(numbers[i]));Console.WriteLine("double-i64-"+i+"="+Int64(numbers[i]));}
        float[] singles={0.0f,-0.0f,1.9f,-1.9f,Single.NaN,Single.PositiveInfinity,Single.NegativeInfinity,2147483520.0f,2147483648.0f,-2147483648.0f,-2147483904.0f,4294967296.0f,1e30f,-1e30f,9223372036854775808.0f,-9223372036854775808.0f,Single.Epsilon,-Single.Epsilon};
        for(int i=0;i<singles.Length;i++){Console.WriteLine("float-i32-"+i+"="+Int32F(singles[i]));Console.WriteLine("float-i64-"+i+"="+Int64F(singles[i]));}
    }
}
