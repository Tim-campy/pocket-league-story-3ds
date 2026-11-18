// Type initialization timing of TRANSLATED code against the CLR (Unity Mono).
// tools/test_type_init_translated.py translates TypeInitTiming.Run (normal and
// readable emission) and compares its result with the same source run on Mono.
// Synthetic code written for the port; no original game code.
using System;

public static class InitOrderLog { public static string Text = ""; }

// An instance method called from inside its own type's static initializer:
// initialization is in progress on this thread, so Late is set and After is not.
public class SelfUseInit {
    public static int Late = 5;
    public static int Seen = new SelfUseInit().ReadLate();
    public static int After = 7;
    static SelfUseInit() { }
    int ReadLate() { return Late * 10 + After; }
}

// Explicit static constructors (no BeforeFieldInit): ECMA-335 II.10.5.3.1, the
// initializer runs at the first invocation of any constructor of the type, which
// includes the base constructor called by a derived constructor.
public class InitBasePrecise {
    static InitBasePrecise() { InitOrderLog.Text += "B"; }
    public int Plain() { return 1; }
}
public class InitDerivedPrecise : InitBasePrecise {
    static InitDerivedPrecise() { InitOrderLog.Text += "D"; }
}
public class InitHolderPrecise {
    public static int Value = 41;
    static InitHolderPrecise() { InitOrderLog.Text += "H"; }
    public int ReadAfterMark() { InitOrderLog.Text += "m"; return Value; }
}

// Static field initializer only (BeforeFieldInit): CLR is free to run it at or
// before the first static field access; this records what Mono does.
public class InitHolderRelaxed {
    public static int Value = Mark("V", 3);
    static int Mark(string name, int value) { InitOrderLog.Text += name; return value; }
    public int ReadAfterMark() { InitOrderLog.Text += "r"; return Value; }
}

// BeforeFieldInit base constructed through a derived type.
public class InitRelaxedBase {
    public static int Value = Mark("v", 4);
    static int Mark(string name, int value) { InitOrderLog.Text += name; return value; }
    public int Plain() { return Value; }
}
public class InitRelaxedDerived : InitRelaxedBase { }
// A static method of a type with an explicit static constructor.
public class InitStaticEntry {
    public static int Value = 9;
    static InitStaticEntry() { InitOrderLog.Text += "S"; }
    public static int Read() { InitOrderLog.Text += "s"; return Value; }
}

// BeforeFieldInit types (no explicit static constructor) referenced from other
// methods (decision of 2026-11-18, item 1). Each initializer logs a letter.
public static class BfiLog { public static string Text = ""; public static int Mark(string name, int value) { Text += name; return value; } }
public class BfiBranch { public static int Value = BfiLog.Mark("A", 1); }
public class BfiFirst { public static int Value = BfiLog.Mark("B", 2); }
public class BfiSecond { public static int Value = BfiLog.Mark("C", 3); }
public class BfiThird { public static int Value = BfiLog.Mark("D", 4); }
public class BfiLoop { public static int Value = BfiLog.Mark("E", 5); }
public class BfiShared { public static int Value = BfiLog.Mark("F", 6); }
public class BfiCall { public static int Value = BfiLog.Mark("G", 7); public static int Get() { BfiLog.Text += "g"; return Value; } }
public class BfiSmall { public static int Value = BfiLog.Mark("H", 8); }
public class BfiWrite { public static int Value = BfiLog.Mark("I", 9); }
// A method of a BeforeFieldInit type that touches none of its fields; and an instance method.
public class BfiLambda { public static int Value = BfiLog.Mark("M", 12); }
public class BfiOwn { public static int Value = BfiLog.Mark("J", 10); public static int Ping() { BfiLog.Text += "j"; return 0; } }
public class BfiInst { public static int Value = BfiLog.Mark("K", 11); public static BfiInst Make() { return null; } public int Echo() { BfiLog.Text += "k"; return 0; } }

public static class BfiTiming {
    // Reference only in a branch that does not run.
    static int Branch(bool take) { BfiLog.Text += "1"; int x = 0; if (take) x = BfiBranch.Value; BfiLog.Text += "2"; return x; }
    // Three types in one method, read in the order Second, First, Third.
    static int Several() { BfiLog.Text += "3"; int a = BfiSecond.Value; BfiLog.Text += "4"; int b = BfiFirst.Value; int c = BfiThird.Value; return a + b + c; }
    // Reference inside a loop.
    static int Loop() { int sum = 0; for (int i = 0; i < 3; i++) { BfiLog.Text += "L"; sum += BfiLoop.Value; } return sum; }
    // Two methods referencing the same type; one method in between that does not.
    static int ReadShared1() { BfiLog.Text += "p"; return BfiShared.Value; }
    static int ReadShared2() { BfiLog.Text += "q"; return BfiShared.Value; }
    static int NoReference() { BfiLog.Text += "o"; return 0; }
    // A tiny method the JIT may inline into its caller.
    static int Small() { return BfiSmall.Value; }
    static int CallsSmall(bool take) { BfiLog.Text += "5"; int x = take ? Small() : 0; BfiLog.Text += "6"; return x; }
    // A store (not a read) to a static field.
    static void Write() { BfiLog.Text += "w"; BfiWrite.Value = 90; }
    public static string Run() {
        int r = 0;
        r += Branch(false);
        r += Several();
        r += Loop();
        r += NoReference(); r += ReadShared1(); r += NoReference(); r += ReadShared2();
        BfiLog.Text += "c"; r += BfiCall.Get();
        r += CallsSmall(false); r += CallsSmall(true);
        Write(); r += BfiWrite.Value;
        BfiLog.Text += "+"; r += BfiOwn.Ping();
        System.Func<int> lambda = () => { BfiLog.Text += "z"; return BfiLambda.Value; };
        BfiLog.Text += "y"; r += lambda();
        return r + ":" + BfiLog.Text;
    }
}

public static class TypeInitTiming {
    public static string Run() {
        string seen = SelfUseInit.Seen.ToString();
        var derived = new InitDerivedPrecise();
        string afterNew = InitOrderLog.Text;
        int plain = derived.Plain();
        var holder = new InitHolderPrecise();
        string beforeRead = InitOrderLog.Text;
        int value = holder.ReadAfterMark();
        var relaxed = new InitHolderRelaxed();
        InitOrderLog.Text += "n";
        int relaxedValue = relaxed.ReadAfterMark();
        InitOrderLog.Text += "x";
        var relaxedDerived = new InitRelaxedDerived();
        InitOrderLog.Text += "y";
        int relaxedBase = relaxedDerived.Plain();
        int staticValue = InitStaticEntry.Read();
        string bfi = BfiTiming.Run();
        return seen + "|" + afterNew + "|" + plain + "|" + beforeRead + "|" + value + "|" + relaxedValue + "|" + staticValue + "|" + relaxedBase + "|" + InitOrderLog.Text + "|" + bfi;
    }
}
