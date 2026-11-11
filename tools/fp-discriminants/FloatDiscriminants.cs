// Test oracle only: no game data and no change to the production emitter.
using System;
using System.IO;
using System.Globalization;
using System.Runtime.CompilerServices;

public static class FloatDiscriminants {
    static float stored;
    [MethodImpl(MethodImplOptions.NoInlining)]
    static float ReadField() { return stored; }
    [MethodImpl(MethodImplOptions.NoInlining)]
    static float ReadArray(float[] values) { return values[0]; }
    [MethodImpl(MethodImplOptions.NoInlining)]
    static double Argument(float value, float origin) { return (double)value - origin; }
    [MethodImpl(MethodImplOptions.NoInlining)]
    static float ReturnValue(float a, float b) { return a + b; }
    static float InlineCandidate(float a, float b) { return a + b; }

    [MethodImpl(MethodImplOptions.NoInlining)]
    public static double Expression(float a, float b) { return (a + b) - a; }
    [MethodImpl(MethodImplOptions.NoInlining)]
    public static double Local(float a, float b) { float value = a + b; return (double)value - a; }
    [MethodImpl(MethodImplOptions.NoInlining)]
    public static double Field(float a, float b) { stored = a + b; return (double)ReadField() - a; }
    [MethodImpl(MethodImplOptions.NoInlining)]
    public static double Array(float a, float b) { float[] values = new float[1]; values[0] = a + b; return (double)ReadArray(values) - a; }
    [MethodImpl(MethodImplOptions.NoInlining)]
    public static double PassArgument(float a, float b) { return Argument(a + b, a); }
    [MethodImpl(MethodImplOptions.NoInlining)]
    public static double Return(float a, float b) { return (double)ReturnValue(a, b) - a; }
    [MethodImpl(MethodImplOptions.NoInlining)]
    public static double Inlining(float a, float b) { return (double)InlineCandidate(a, b) - a; }
    [MethodImpl(MethodImplOptions.NoInlining)]
    public static double Loop(float a, float b) { float value = a; for (int i = 0; i < 3; i++) value += b; return (double)value - a; }
    [MethodImpl(MethodImplOptions.NoInlining)]
    public static double ExplicitConversion(float a, float b) { return (double)(float)(a + b) - a; }
    static void Row(TextWriter writer, string name, float a, float b, double value) {
        writer.WriteLine(name + "\t" + a.ToString("R", CultureInfo.InvariantCulture) + "\t" + b.ToString("R", CultureInfo.InvariantCulture) + "\t" + value.ToString("R", CultureInfo.InvariantCulture) + "\t" + BitConverter.DoubleToInt64Bits(value).ToString("X16"));
    }
    public static void Run(TextWriter writer) {
        writer.WriteLine("case\ta\tb\tresult\tbinary64_bits");
        foreach (float a in new float[] { 16777216f, -16777216f, 9007199254740992f, -9007199254740992f }) {
            float b = a > 0 ? 1f : -1f;
            Row(writer,"expression",a,b,Expression(a,b));
            Row(writer,"local",a,b,Local(a,b));
            Row(writer,"field",a,b,Field(a,b));
            Row(writer,"array",a,b,Array(a,b));
            Row(writer,"argument",a,b,PassArgument(a,b));
            Row(writer,"return",a,b,Return(a,b));
            Row(writer,"inlining",a,b,Inlining(a,b));
            Row(writer,"loop",a,b,Loop(a,b));
            Row(writer,"explicit_conversion",a,b,ExplicitConversion(a,b));
        }
    }
    public static void Main(string[] args) {
        using (TextWriter writer = new StreamWriter(args[0])) Run(writer);
        if (args.Length > 1) using (TextWriter writer = new StreamWriter(args[1])) {
            foreach (System.Reflection.MethodInfo method in typeof(FloatDiscriminants).GetMethods(System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Static)) {
                System.Reflection.MethodBody body = method.GetMethodBody();
                if (body == null) continue;
                writer.Write(method.Name + "\t" + method.GetMethodImplementationFlags() + "\t" + BitConverter.ToString(body.GetILAsByteArray()) + "\t");
                foreach (System.Reflection.LocalVariableInfo local in body.LocalVariables) writer.Write(local.LocalIndex + ":" + local.LocalType + ";");
                writer.WriteLine();
            }
        }
    }
}
