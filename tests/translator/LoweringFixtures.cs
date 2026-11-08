// Synthetic translator inputs. These methods contain no game data.
using System;
public static class LoweringFixtures {
    private static int trace_;
    public static int Stamp(int value) { trace_ = trace_ * 10 + value; return value; }
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
    public static int ConstructorOrder(int seed) { trace_ = seed; var value = new Synthetic.DerivedCtor(); return trace_ + value.baseValue; }
    public static int ConstructorVirtualDispatch() { var value = new Synthetic.VirtualDerived(); Synthetic.VirtualBase b = value; return value.seen * 10 + b.Read(); }
    public static int StaticInitializationOrder() { return Synthetic.StaticOrder.first * 100 + Synthetic.StaticOrder.second * 10 + Synthetic.StaticOrder.third; }
    public static int StaticInitializationCycle() { return Synthetic.StaticCycleA.value * 10 + Synthetic.StaticCycleB.value; }
    public static int ArrayIncrement(int index) { var values = new int[] { 7, 11, 13 }; return values[index]++ + ++values[index]; }
    public static string BoxedToString(object value) { return value == null ? "null" : value.ToString(); }
    public static int MethodGroups(int seed) { var target=new Synthetic.DelegateTarget(seed);Func<int,int> call=target.Add;Action run=target.Run;run();Func<int,int> same=target.Add;return call(3)+(call==same?100:0); }
    public static int InterfaceMethodGroup(int seed) { var target=new Synthetic.DelegateTarget(seed);Synthetic.IRun view=target;Action first=view.Run;Action second=target.Run;first();return target.value+(first==second?100:0); }
    public static int NullMethodGroup(int seed) { Synthetic.DelegateTarget target=null;try{Func<int,int> call=target.Add;return 0;}catch(NullReferenceException){return 1;}catch(ArgumentException){return 2;} }
    public static string HexInterpolation(int seed) { return $"[{seed:x2}:{(seed+1):X2}]"; }
    public static int CaptureParameter(int value) { Func<int> f = () => value; value++;return f(); }
    public static int SharedClosure(int value) { int local=value;Func<int> read=()=>local;Action write=delegate{local++;};write();local++;return read(); }
    public static int NestedClosure(int value) { Func<int,Func<int>> outer=x=>()=>x+value;var call=outer(3);value++;return call(); }
    public static int ClosureLoop(int value) { var calls=new Func<int>[3];for(int i=0;i<3;i++){int copy=i;calls[i]=()=>copy+value;}value++;return calls[0]()*100+calls[1]()*10+calls[2](); }
    public static int ClosureForeach(int value) { var calls=new Func<int>[3];int i=0;foreach(int copy in new int[]{1,2,3}){calls[i++]=()=>copy+value;}return calls[0]()*100+calls[1]()*10+calls[2](); }
    public static int InstanceClosure(int value) { var target=new Synthetic.DelegateTarget(value);var first=target.Make();var second=target.Make();return first(3)+(first==second?100:0); }
    public static int DictionaryOut(int value) { var map=new System.Collections.Generic.Dictionary<string,int>();map.Add("key",value);int found=77;bool exists=map.TryGetValue("key",out found);int missing=88;bool absent=map.TryGetValue("absent",out missing);return found+missing+(exists?100:0)+(absent?1000:0); }
    public static int ListRange(int value) { var values=new System.Collections.Generic.List<int>(new int[]{1,2,3});values.InsertRange(1,new int[]{value,4});values.AddRange(new int[]{5,6});int result=0;foreach(int item in values){if(item==5)break;result=result*10+item;}return result+values.Capacity; }
    public static string SplitTrim(string value) { if(value==null)return null;var parts=value.Split('a','b');return parts[0].Trim(' ','-')+parts.Length; }
    public static int HexParse(string value) { return int.Parse(value,System.Globalization.NumberStyles.HexNumber); }
    public static string Replacement(string value) { return value.Replace("ab","Z").Replace('a','c'); }
    // Negative control: captured-variable lifetime across goto is not lowered.
    public static int UnsupportedClosureGoto(int value) { Func<int> f=()=>value;if(value<0)goto done;value++;done:return f(); }
}
namespace Synthetic {
    public interface IRun {void Run();}
    public class DelegateTarget:IRun {public int value;public DelegateTarget(int seed){value=seed;}public int Add(int amount){value+=amount;return value;}public void Run(){value++;}public Func<int,int> Make(){return amount=>Add(amount);}}
    public class BaseCtor { public int baseValue; public BaseCtor(int value) { baseValue = LoweringFixtures.Stamp(value); } }
    public class DerivedCtor : BaseCtor {
        public int first = LoweringFixtures.Stamp(1);
        public DerivedCtor() : this(2) { LoweringFixtures.Stamp(4); }
        public DerivedCtor(int value) : base(value) { LoweringFixtures.Stamp(3); }
    }
    public class VirtualBase { public int seen; public VirtualBase() { seen = Read(); } public virtual int Read() { return 1; } }
    public class VirtualDerived : VirtualBase { public int field = 9; public VirtualDerived() { } public override int Read() { return field; } }
    public class StaticOrder {
        public static int first = 2;
        public static int second = ReadFirst();
        public static int third;
        static StaticOrder() { third = first + second; }
        public static int ReadFirst() { return first + 1; }
    }
    public class StaticCycleA { public static int value = StaticCycleB.value + 1; }
    public class StaticCycleB { public static int value = StaticCycleA.value + 2; }
}
