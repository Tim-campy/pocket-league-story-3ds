// Synthetic translator inputs. These methods contain no game data.
using System;
public static class LoweringFixtures {
    private static int trace_;
    private static int Stamp(int value) { trace_ = trace_ * 10 + value; return value; }
    private static int Pair(int a, int b) { return a * 100 + b; }
    public static int Overflow(int a, int b) { return a + b; }
    public static int Divide(int a, int b) { return a / b; }
    public static int Modulo(int a, int b) { return a % b; }
    public static int ArgumentOrder(int seed) { trace_ = seed; return Pair(Stamp(1), Stamp(2)) + trace_; }
    public static int ArrayStoreOrder(int seed) {
        trace_ = seed; int[] value = null;
        try { value[Stamp(1)] = Stamp(2); }
        catch (NullReferenceException) { return trace_; }
        return -1;
    }
    public static int ExceptionHierarchy(int code) {
        try { if (code == 0) throw new DivideByZeroException(); throw new ArgumentException(); }
        catch (ArithmeticException) { return 1; }
        catch (Exception) { return 2; }
    }
    public static int FinallyReturn(int value) { try { return value; } finally { trace_ = 7; } }
    public static void FinallyFallthrough(int value) { try { trace_ = value; } finally { trace_ = trace_ + 1; } }
    public static int Switch(int key) { switch (key) { case -1: return 3; case 0: return 4; case 1: return 5; default: return 7; } }
    public static int GotoLoop(int bounded) { int result = 0; again: result++; if (result < bounded) goto again; return result; }
    public static char StringUnit(string value, int index) { return value[index]; }
    public static int ArrayBounds(int index) { var values = new int[] { 3, 5, 7 }; return values[index]; }
    public static int ManagedList(int bounded) {
        var values = new System.Collections.Generic.List<int>();
        values.Add(bounded); values.Add(3); values[0] = 7; values.Insert(1, 9);
        int result = values.Count * 100 + values[0] * 10 + values[1];
        values.RemoveAt(0); return result + values.Count;
    }
    // Negative control: this remains explicitly unsupported until closure lowering exists.
    public static int UnsupportedClosure(int value) { Func<int> f = () => value; return f(); }
}
