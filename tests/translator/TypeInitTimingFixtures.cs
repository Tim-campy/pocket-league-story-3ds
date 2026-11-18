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
        return seen + "|" + afterNew + "|" + plain + "|" + beforeRead + "|" + value + "|" + relaxedValue + "|" + staticValue + "|" + relaxedBase + "|" + InitOrderLog.Text;
    }
}
