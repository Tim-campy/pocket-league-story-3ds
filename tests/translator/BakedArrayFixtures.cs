// Own synthetic input. No game asset or original numeric payload.
using System;
public static class BakedArrayFixtures {
    private static int trace;
    private static int Stamp(int value) { trace = trace * 10 + value; return value; }
    public static int[] Dynamic(int seed) {
        trace = 0;
        return new int[] { Stamp(seed), Stamp(seed + 1), trace };
    }
    public static int[] ConstantControl() { return new int[] { 17, 31 }; }
    public static void Main() {
        foreach (int seed in new int[] { 0, 1, -1, 9, int.MaxValue, int.MinValue }) {
            int[] result = Dynamic(seed);
            Console.WriteLine(result[0] + "," + result[1] + "," + result[2] + "|" + trace);
        }
    }
}
