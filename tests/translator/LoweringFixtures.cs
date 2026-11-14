// Synthetic translator inputs. These methods contain no game data.
using System;
using System.Linq;
using System.Text;
public static class LoweringFixtures {
    private static int trace_;
    private static string LiteralOther(){return "ab\0\uD800";}
    public static int LiteralIdentity(int seed){string a="ab\0\uD800";string b=LiteralOther();string dynamicValue=new string(new char[]{'a','b','\0','\uD800'});return (object.ReferenceEquals(a,b)?1:0)+(object.ReferenceEquals(a,dynamicValue)?2:0)+(a==dynamicValue?4:0)+seed;}
    public static int EmptyLiteralIdentity(int seed){string a="";string b=seed==0?"":"";return object.ReferenceEquals(a,b)?seed+1:seed-1;}
    public static int FloatingConcatOrder(int seed){trace_=0;string value=""+(float)Stamp(1)+":"+(double)Stamp(2)+":"+1.5f+":"+(-2.25d);return value=="1:2:1.5:-2.25"&&trace_==12?seed+1:seed-1;}
    public static int Stamp(int value) { trace_ = trace_ * 10 + value; return value; }
    private static int Pair(int a, int b) { return a * 100 + b; }
    public static int SourceAdapterCall(int seed){var target=new Synthetic.SourceAdapterTarget();target.value=seed;return target.Read(7)+target.Read();}
    public static int SourceAdapterNull(int seed){trace_=0;Synthetic.SourceAdapterTarget target=null;try{return target.Read(Stamp(3));}catch(NullReferenceException){return trace_+seed;}}
    public static int SourceAdapterDelegate(int seed){var target=new Synthetic.SourceAdapterTarget();target.value=seed;Func<int,int> call=target.Read;return call(3);}
    public static int SourceStaticAdapter(int seed){Func<int,int> call=Synthetic.SourceStaticTarget.Read;return Synthetic.SourceStaticTarget.Read(seed)+call(3);}
    public static int SourceAdapterRef(int seed){var target=new Synthetic.SourceAdapterTarget();target.value=37;int value=seed;int prior=target.Next(ref value);return prior+value;}
    public static int SingleNaN(int seed){float[] values={float.NaN,float.PositiveInfinity,float.NegativeInfinity,0f,-0f,float.Epsilon,float.MaxValue};int result=0;foreach(float value in values)result=(result<<1)+(float.IsNaN(value)?1:0);return result;}
    public static int DoubleNaN(int seed){double[] values={double.NaN,double.PositiveInfinity,double.NegativeInfinity,0d,-0d,double.Epsilon,double.MaxValue};int result=0;foreach(double value in values)result=(result<<1)+(double.IsNaN(value)?1:0);return result;}
    public static int StringCompareTo(string value){return value.CompareTo("a");}
    public static int StringCompareNull(string value){return value.CompareTo((string)null);}
    public static int StrictHexParse(string value){return int.Parse(value,System.Globalization.NumberStyles.AllowHexSpecifier);}
    public static float ParseSingle(string value){return float.Parse(value);}
    public static int OptionalCtorInitializers(int seed){return new Synthetic.OptionalCtor().value+new Synthetic.OptionalDerived().value+seed;}
    public static bool GuidShape(int seed) {string a=Guid.NewGuid().ToString(),b=Guid.NewGuid().ToString();return a.Length==36&&a[8]=='-'&&a[13]=='-'&&a[14]=='4'&&(a[19]=='8'||a[19]=='9'||a[19]=='a'||a[19]=='b')&&a[18]=='-'&&a[23]=='-'&&a!=b;}
    public static string UriEscape(string value){return Uri.EscapeDataString(value);}
    public static string HexByteValues(int seed){string result="";for(int i=0;i<256;++i)result+=((byte)i).ToString("X2");return result;}
    public static string HexIntValues(int seed){return seed.ToString("x")+":"+seed.ToString("X2")+":"+seed.ToString("X10");}
    public static bool NullOrEmpty(string value){return string.IsNullOrEmpty(value);}
    public static string InsertText(string source,int index,string value){return source.Insert(index,value);}
    public static string RemoveTail(string source,int index){return source.Remove(index);}
    public static string RemovePart(string source,int index,int count){return source.Remove(index,count);}
    public static int GenericDerivedArgument(int seed){var bucket=new Synthetic.GenericBucket<Synthetic.VirtualBase>();Synthetic.VirtualDerived value;bucket.Put(value=new Synthetic.VirtualDerived());return bucket.Read().Read()+value.Read()+seed;}
    public static string GenericReferenceTypeName(int seed){object value=new Synthetic.GenericBucket<Synthetic.VirtualBase>();return value.ToString();}
    public static int CovariantArray(int seed){var original=new Synthetic.VirtualDerived[2];Synthetic.VirtualBase[] view=original;view[0]=new Synthetic.VirtualDerived();object identity=view;var restored=(Synthetic.VirtualDerived[])identity;return original==view&&restored==original?view[0].Read()+seed:-1;}
    public static bool CovariantStoreRejected(int seed){Synthetic.VirtualBase[] view=new Synthetic.VirtualDerived[1];try{view[0]=new Synthetic.VirtualBase();return false;}catch(ArrayTypeMismatchException){return true;}}
    public static bool CovariantAddressRejected(int seed){Synthetic.VirtualBase[] view=new Synthetic.VirtualDerived[1];try{AliasBase(ref view[0]);return false;}catch(ArrayTypeMismatchException){return true;}}
    private static void AliasBase(ref Synthetic.VirtualBase value){value=null;}
    public static int CovariantForeach(int seed){Synthetic.VirtualBase[] view=new Synthetic.VirtualDerived[]{new Synthetic.VirtualDerived(),new Synthetic.VirtualDerived()};int total=seed;foreach(var item in view)total+=item.Read();return total;}
    public static bool CovariantClone(int seed){Synthetic.VirtualBase[] view=new Synthetic.VirtualDerived[1];var clone=(Synthetic.VirtualBase[])view.Clone();clone[0]=new Synthetic.VirtualDerived();return view[0]==null&&((Synthetic.VirtualDerived[])clone)[0]!=null;}
    public static int CovariantCopy(int seed){var source=new Synthetic.VirtualDerived[]{new Synthetic.VirtualDerived()};var target=new Synthetic.VirtualBase[1];Array.Copy(source,0,target,0,1);return target[0].Read()+seed;}
    public static bool CovariantWrongCast(int seed){object value=new Synthetic.VirtualBase[0];try{var wrong=(Synthetic.VirtualDerived[])value;return wrong==null;}catch(InvalidCastException){return true;}}
    public static int ArrayCopyFive(int seed){var values=new int[]{seed,2,3,4};Array.Copy(values,0,values,1,3);return values[1]+values[2]+values[3];}
    public static int ArrayBaseAlias(int seed){Array a=new int[]{seed};Array b=a;Array.Copy(a,0,b,0,1);return ((int[])b)[0];}
    public static int TryParseText(string value){int result=37;bool success=int.TryParse(value,out result);return success?result:result-100;}
    // KairoBase.ConnectLogin shape: out into an array element, decimal then hexadecimal with the invariant culture.
    public static int TryParseElement(int seed){string[] text={"12"," 7 ","x","2147483648","1f","0x1F",null,"-3"};int[] values=new int[text.Length];int code=0;for(int i=0;i<text.Length;i++){values[i]=seed;bool ok=int.TryParse(text[i],out values[i]);if(!ok&&text[i]!=null&&text[i].StartsWith("0x"))ok=int.TryParse(text[i].Substring(2),System.Globalization.NumberStyles.HexNumber,System.Globalization.CultureInfo.InvariantCulture,out values[i]);code=code*3+(ok?1:0)+values[i];}return code;}
    public static int TryParseHexText(int seed){string[] text={"ff"," ff ","FFFFFFFF","100000000","-1","+f","g",""," \t1A\n",null,"7fffffff","FF\0"};int[] values=new int[1];int code=seed;for(int i=0;i<text.Length;i++){values[0]=seed;bool ok=int.TryParse(text[i],System.Globalization.NumberStyles.HexNumber,System.Globalization.CultureInfo.InvariantCulture,out values[0]);code=code*31+(ok?7:3)+values[0];}return code;}
    public static int TryParseElementBounds(int seed){int[] values=new int[1];try{int.TryParse("5",out values[seed<0?2:1]);return -1;}catch(IndexOutOfRangeException){return values[0];}}
    // kairo.unity.util.MD5.GetValue shape: digest of empty, RFC "abc", 56/64/1000-byte buffers; null throws.
    public static int Md5Digests(int seed){byte[][] inputs={new byte[0],new byte[]{97,98,99},new byte[55],new byte[56],new byte[64],new byte[1000]};for(int i=0;i<1000;i++)inputs[5][i]=(byte)(i*7+seed);int code=17;for(int i=0;i<inputs.Length;i++){byte[] hash=System.Security.Cryptography.MD5.Create().ComputeHash(inputs[i]);code=code*31+hash.Length;for(int j=0;j<hash.Length;j++)code=code*31+hash[j];}try{System.Security.Cryptography.MD5.Create().ComputeHash((byte[])null);return code;}catch(ArgumentNullException){return code+1;}}
    public static int Md5Abc(int seed){byte[] hash=System.Security.Cryptography.MD5.Create().ComputeHash(new byte[]{97,98,99});return hash[seed<0?0:(seed%16)];}
    public static string ConvertBases(int seed){int[] values={0,1,-1,seed,int.MinValue,int.MaxValue,255,-256,8,7};string text="";for(int i=0;i<values.Length;i++)text=text+Convert.ToString(values[i],2)+"|"+Convert.ToString(values[i],8)+"|"+Convert.ToString(values[i],16)+";";return text;}
    public static int ListElementAt(int seed){var list=new System.Collections.Generic.List<int>();list.Add(seed);list.Add(seed*2);int code=list.ElementAt(1)+list.ElementAt(0);try{list.ElementAt(seed<0?-1:2);code+=1000;}catch(ArgumentOutOfRangeException){code+=7;}System.Collections.Generic.List<int> missing=null;try{missing.ElementAt(0);}catch(ArgumentNullException){code+=11;}return code;}
    public static int ByteParseHex(int seed){string[] text={"00","7f","ff","FF"," 1a ","100","-1","g",null,"0x1"};int code=seed;for(int i=0;i<text.Length;i++){try{code=code*31+byte.Parse(text[i],System.Globalization.NumberStyles.HexNumber);}catch(OverflowException){code=code*31+1000;}catch(FormatException){code=code*31+2000;}catch(ArgumentNullException){code=code*31+3000;}try{code=code*31+byte.Parse(text[i],System.Globalization.NumberStyles.AllowHexSpecifier);}catch(OverflowException){code=code*31+4000;}catch(FormatException){code=code*31+5000;}catch(ArgumentNullException){code=code*31+6000;}}return code;}
    public static string SplitOptionsFixture(int seed){string[] text={"","a","\n","a\n\nb\n","\n\na","x\ny",seed<0?"q":"q\n"};string result="";for(int i=0;i<text.Length;i++){string[] keep=text[i].Split(new char[1]{'\n'},StringSplitOptions.RemoveEmptyEntries);string[] all=text[i].Split(new char[1]{'\n'},StringSplitOptions.None);result=result+keep.Length+":"+all.Length+":";for(int j=0;j<keep.Length;j++)result=result+keep[j]+"|";result=result+";";}return result;}
    public static string ObjectConcatPair(int seed){object a=seed;object b=null;object c=new Synthetic.ConcatValue(3,false,seed==0);string s="x";return string.Concat(s,a)+"|"+string.Concat(b,a)+"|"+string.Concat(a,b)+"|"+string.Concat(b,b)+"|"+string.Concat(c,s);}
    public static string StringConcatThree(int seed){string a=seed<0?null:"a";string b="";string c=null;return string.Concat(a,b,"z")+"|"+string.Concat(c,c,c)+"|"+string.Concat("x",a,c)+"|"+string.Concat(c,"y",a).Length;}
    public static int ObjectInitializerOrder(int seed){trace_=0;var a=new Synthetic.InitTarget(Stamp(1)){b=Stamp(2),c=Stamp(3)};return a.a*100+a.b*10+a.c+trace_*1000+seed;}
    public static int ObjectInitializerSelfField(int seed){var src=new Synthetic.InitTarget(seed){flag=true};var copy=src.Clone();return (copy.flag?1:0)+copy.a*2+copy.b*4+(object.ReferenceEquals(copy,src)?100:0);}
    public static int ObjectInitializerBaseField(int seed){var d=new Synthetic.InitDerived(seed){a=7,d=seed+1};return d.a*1000+d.b*100+d.d;}
    public static int TryParseLimit(int seed){int result=seed;bool success=int.TryParse(seed<0?"-2147483648":"2147483648",out result);return success?result:result-100;}
    public static string ObjectConcatSingle(int seed){trace_=seed;return string.Concat(seed<0?null:new Synthetic.ConcatValue(4,false,seed==0));}
    public static string UriEscapeMarks(){return Uri.EscapeDataString("azAZ09_~!'()*-. /?:@&=+$,%#[]\\\"\u0000\u00e9\ud800");}
    private static int SumParams(int first, params int[] rest) { if (rest == null) return -100; for (int i=0;i<rest.Length;i++) first=first*10+rest[i]; return first; }
    private static string StringParams(params string[] values) { return values == null ? "null-array" : values.Length == 0 ? "empty" : values[0] == null ? "null-item" : values[0]; }
    public static int ParamsOrder(int seed) { trace_=seed; int result=SumParams(Stamp(1),Stamp(2),Stamp(3)); return result+trace_; }
    public static int ParamsEmpty(int seed) { return SumParams(seed); }
    public static int ParamsExplicitArray(int seed) { return SumParams(seed,new int[]{3,4}); }
    public static string ParamsNull(int seed) { return StringParams(null); }
    public static string ParamsNullElement(int seed) { return StringParams((string)null); }
    public static string ParamsOne(int seed) { return StringParams("own fixture"); }
    public static string DictionaryKeysSnapshot(int seed) {
        var map=new System.Collections.Generic.Dictionary<string,int>();
        map.Add("a",seed);map.Add("b",2);map.Add("c",3);map.Remove("b");map.Add("d",4);
        string[] keys=map.Keys.ToArray();map.Clear();return keys[0]+keys[1]+keys[2]+map.Keys.ToArray().Length;
    }
    public static int DictionaryKeysNull(int seed) {
        System.Collections.Generic.Dictionary<string,int> map=null;
        try { return map.Keys.ToArray().Length; } catch(NullReferenceException) { return seed; }
    }
    public static string DictionaryIteration(int seed) {
        var map=new System.Collections.Generic.Dictionary<string,int>();map.Add("a",1);map.Add("b",2);map.Remove("a");map.Add("c",3);
        string result="";foreach(var pair in map){result+=pair.Key+pair.Value;}return result;
    }
    public static int DictionaryIterationVersion(int seed) {
        var map=new System.Collections.Generic.Dictionary<int,int>();map.Add(1,seed);int count=0;
        try{foreach(var pair in map){count++;map.Add(2,pair.Value);}}catch(InvalidOperationException){return count;}
        return -1;
    }
    public static int KeyValuePairValue(int seed){var pair=new System.Collections.Generic.KeyValuePair<int,int>(seed,37);return pair.Key+pair.Value;}
    public static int StructFieldStores(int seed) { Synthetic.QueryValue item=default(Synthetic.QueryValue);item.value=seed;var copy=item;copy.value=37;return item.value+copy.value; }
    public static int StructArrayFieldStores(int seed) { var array=new Synthetic.QueryValue[1];array[0].value=seed;return array[0].value; }
    public static int UsingDisposeOrder(int seed) {
        trace_=seed;
        using(Synthetic.OwnDisposable a=new Synthetic.OwnDisposable(1),b=new Synthetic.OwnDisposable(2)){Stamp(3);}
        return trace_;
    }
    public static int UsingExceptionReplacement(int seed) {
        trace_=seed;
        try{using(var a=new Synthetic.OwnDisposable(1,true)){throw new ArgumentException();}}
        catch(InvalidOperationException){return trace_;}catch(ArgumentException){return -1;}
        return -2;
    }
    public static int UsingNull(int seed) { using(Synthetic.OwnDisposable a=null){seed++;}return seed; }
    public static int UsingReturn(int seed) { trace_=0;using(var a=new Synthetic.OwnDisposable(1)){if(seed<0)return seed;Stamp(2);}return trace_; }
    public static int FinallyMixedReturn(int seed) {trace_=0;try{if(seed<0)return seed;Stamp(2);}finally{Stamp(3);}return trace_;}
    public static int FinallyNestedReturn(int seed) {trace_=0;try{try{if(seed<0)return seed;Stamp(1);}finally{Stamp(2);}}finally{Stamp(3);}return trace_;}
    public static int FinallyReplaceReturn(int seed) {try{try{return seed;}finally{throw new InvalidOperationException();}}catch(InvalidOperationException){return 37;}}
    public static int FinallyInternalBreak(int seed){trace_=seed;try{for(int i=0;i<3;i++){if(i==1)break;Stamp(1);}}finally{Stamp(2);}return trace_;}
    public static int FinallyOuterBreak(int seed){trace_=0;for(int i=0;i<3;i++){try{Stamp(1);if(i==1)break;}finally{Stamp(2);}}return trace_+seed;}
    public static int FinallyOuterContinue(int seed){trace_=0;for(int i=0;i<3;i++){try{if(i<2)continue;Stamp(1);}finally{Stamp(2);}}return trace_+seed;}
    public static int FinallyNestedBreak(int seed){trace_=0;while(true){try{try{break;}finally{Stamp(1);}}finally{Stamp(2);}}return trace_+seed;}
    public static int FinallyCatchBreak(int seed){trace_=0;while(true){try{throw new ArgumentException();}catch(ArgumentException){break;}finally{Stamp(3);}}return trace_+seed;}
    public static int FinallySwitchBreak(int seed){trace_=0;switch(seed){case 0:try{Stamp(1);break;}finally{Stamp(2);}default:Stamp(3);break;}return trace_;}
    public static int FinallySwitchContinue(int seed){trace_=0;foreach(int i in new int[]{0,1,2}){try{switch(i){case 1:continue;default:break;}Stamp(1);}finally{Stamp(2);}}return trace_+seed;}
    public static int FinallyDoContinue(int seed){trace_=0;int i=0;do{try{++i;if(i<3)continue;Stamp(1);}finally{Stamp(2);}}while(i<3);return trace_+seed;}
    public static int UsingOuterBreak(int seed){trace_=0;while(true){using(var a=new Synthetic.OwnDisposable(1)){Stamp(2);break;}}return trace_+seed;}
    public static int UsingOuterContinue(int seed){trace_=0;for(int i=0;i<2;i++){using(var a=new Synthetic.OwnDisposable(1)){continue;}}return trace_+seed;}
    public static int FinallyReplacesBreak(int seed){trace_=0;try{while(true){try{break;}finally{throw new InvalidOperationException();}}}catch(InvalidOperationException){Stamp(3);}return trace_+seed;}
    public static int CatchOnlyLayout(int seed){try{throw new InvalidOperationException();}catch(Synthetic.CatchOnlyException){return 1;}catch(Exception){return seed;}}
    public static int ExplicitDelegateConstructor(int seed){var target=new Synthetic.DelegateTarget(seed);Action first=new Action(target.Run);first();return target.value;}
    public static int AutoProperty(int seed){var target=new Synthetic.AutoProperties();int previous=target.Value;target.Value=seed;return previous+target.Value;}
    public static string AutoPropertyReference(int seed){var target=new Synthetic.AutoProperties();string previous=target.Text;target.Text="own fixture";return previous==null?target.Text:"unexpected";}
    public static int StringSwitch(int seed) { string value=seed<0?null:seed==0?"a":seed==1?"b":"other";int result=0;switch(value){case null:result=1;break;case "a":case "b":result=2;break;default:result=3;break;}return result; }
    public static bool ObjectLockIdentity(int seed) {
        trace_ = seed;
        object gate = new object();
        object alias = gate;
        bool result;
        lock (alias) {
            lock (gate) { trace_++; }
            result = object.ReferenceEquals(gate, alias) && !object.ReferenceEquals(gate, new object());
        }
        return result;
    }
    public static bool NullMonitor(int seed) {
        object gate = null;
        try { lock (gate) { trace_ = seed; } }
        catch (ArgumentNullException) { return true; }
        return false;
    }
    public static int ThreadedMonitor(int seed) {
        object gate = new object();
        ReturnUnderMonitor(gate);
        try { lock (gate) { throw new ArgumentException(); } }
        catch (ArgumentException) { }
        int value = 0;
        System.Threading.ThreadStart work = delegate {
            for (int i = 0; i < 100; i++) {
                lock (gate) {
                    value++;
                    if (i == 50) GC.Collect(0);
                }
            }
        };
        var first = new System.Threading.Thread(work);
        var second = new System.Threading.Thread(work);
        first.Start(); second.Start(); first.Join(); second.Join();
        return value + seed;
    }
    private static bool ReturnUnderMonitor(object gate) {
        lock (gate) { return true; }
    }
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
    public static int ImplicitConstructorScope() { return new Synthetic.ImplicitScope().value; }
    public static int UnusedStaticLayout(){return Synthetic.UnusedStatic.value;}
    public static int ChainedDefaultStatic(){return Synthetic.StaticWriteA.value+Synthetic.StaticWriteB.noInitializer;}
    public static bool StructQuery(int value){var data=new Synthetic.QueryValue(value);return data.Positive();}
    public static bool StructQueryCopy(int value){var data=new Synthetic.QueryValue(value);var copy=data;return copy.Positive()==data.Positive();}
    public static bool StructQueryAlias(int value){var data=new Synthetic.QueryValue(value);return data.Alias();}
    public static int StackLifo(int value){var stack=new System.Collections.Generic.Stack<int>();stack.Push(value);stack.Push(37);int top=stack.Peek();return unchecked(stack.Pop()+stack.Pop()+stack.Count+top);}
    public static bool StackIdentity(){var stack=new System.Collections.Generic.Stack<object>();var alias=stack;object value=new Synthetic.ConcatValue(4);stack.Push(value);return (object)alias==(object)stack&&alias.Pop()==value;}
    public static int StackEmpty(){var stack=new System.Collections.Generic.Stack<int>();try{return stack.Pop();}catch(InvalidOperationException){return 37;}}
    public static int AbstractCtorDispatch(){return new Synthetic.AbstractDerived().seen;}
    public static object ConcatArgument(int step,object value) {Stamp(step);return value;}
    public static string ObjectConcatOrder(int seed) {trace_=seed;return string.Concat(ConcatArgument(1,new Synthetic.ConcatValue(4)),ConcatArgument(2,new Synthetic.ConcatValue(5)),ConcatArgument(3,new Synthetic.ConcatValue(6)));}
    public static string ObjectConcatNull(int seed) {trace_=seed;return string.Concat(ConcatArgument(1,null),ConcatArgument(2,new Synthetic.ConcatValue(5,false,true)),ConcatArgument(3,"end"));}
    public static int ObjectConcatThrow(int seed) {trace_=seed;try{string.Concat(ConcatArgument(1,new Synthetic.ConcatValue(4,true)),ConcatArgument(2,new Synthetic.ConcatValue(5)),ConcatArgument(3,new Synthetic.ConcatValue(6)));}catch(InvalidOperationException){return trace_;}return -1;}
    // Negative control: captured-variable lifetime across goto is not lowered.
    public static int UnsupportedClosureGoto(int value) { Func<int> f=()=>value;if(value<0)goto done;value++;done:return f(); }
    public static int StaticAutoProperty(int value){Synthetic.StaticAuto.Value=value;Synthetic.StaticAuto.Enabled=value<0;Synthetic.StaticAuto.Text=value==0?null:"x";return Synthetic.StaticAuto.Value+(Synthetic.StaticAuto.Enabled?3:0)+(Synthetic.StaticAuto.Text==null?7:11);}
    public static int StaticAutoInitialization(){return Synthetic.StaticAutoOrder.Value+(Synthetic.StaticAutoOrder.Enabled?100:0);}
    public static string BuilderInsert(int value){StringBuilder b=value==0?null:new StringBuilder("202");return b.Insert(Stamp(1),".").ToString();}
    public static string StringConcatFour(int value){return string.Concat(value==0?null:"a","",value<0?"b":null,"c");}
    public static string ObjectArrayConcat(int value){trace_=value;object[] a=value==0?null:new object[]{new Synthetic.ConcatValue(4),null,new Synthetic.ConcatValue(5,false,true),"z"};return string.Concat(a);}
    public static int ObjectArrayConcatThrow(int value){trace_=value;try{string.Concat(new object[]{new Synthetic.ConcatValue(4,true),new Synthetic.ConcatValue(5)});}catch(InvalidOperationException){return trace_;}return -1;}
    public static int MathDigits(int value){long v=value==0?long.MinValue:value==1?long.MaxValue:value==2?0:value<0?-10:999;try{return unchecked((int)Math.Log10(Math.Abs(v))+1);}catch(OverflowException){return -7;}}
    public static float FloatPropertyCompound(int value){var p=new Synthetic.FloatProperty();p.Value=(float)value;p.Value*=0.25f;p.Value+=1.5f;p.Value-=0.5f;p.Value/=2f;return p.Value;}
    public static int FloatPropertyOrder(int value){trace_=0;var p=new Synthetic.FloatProperty();p.Value=1;trace_=0;float answer=p.Value*=Synthetic.FloatProperty.Factor();return trace_;}
    public static float FloatMin(int value){float[] a={0f,-0f,float.NaN,1f,float.NegativeInfinity,float.PositiveInfinity,-1f};int index=value&3;return Math.Min(a[index],a[index+1]);}
}
namespace Synthetic {
    public class FloatProperty {private float value;public float Value{get{LoweringFixtures.Stamp(2);return value;}set{LoweringFixtures.Stamp(4);this.value=value;}}public static float Factor(){LoweringFixtures.Stamp(3);return 2f;}}
    public class StaticAuto {public static int Value{get;set;}public static bool Enabled{get;set;}public static string Text{get;set;}}
    public class StaticAutoOrder {public static int Value{get;set;}public static bool Enabled{get;set;}public static int first=Capture();private static int Capture(){int prior=Value;Value=3;return prior+7;}static StaticAutoOrder(){Value=Value+first;Enabled=true;}}
    public class OptionalCtor {public int value;public OptionalCtor():this(4){}public OptionalCtor(int value,int scale=3){this.value=value*scale;}}
    public class OptionalDerived:OptionalCtor {public OptionalDerived():base(5){}}
    public class SourceAdapterTarget {public int value;public int Read(int delta=2){return value+delta;}public int Next(ref int delta){int prior=delta;delta=value;return prior;}}
    public static class SourceAdapters {public static int Read(SourceAdapterTarget target,int delta){return target.value+delta;}public static int Next(SourceAdapterTarget target,ref int delta){int prior=delta;delta=target.value;return prior;}}
    public static class SourceStaticTarget {public static int Read(int value){return value*3;}}
    public static class SourceStaticAdapters {public static int Read(int value){return value*3;}}
    public class AutoProperties {public int Value{get;set;}public string Text{get;set;}}
    public class OwnDisposable:IDisposable {public int value;public bool fail;public OwnDisposable(int value,bool fail=false){this.value=value;this.fail=fail;}public void Dispose(){LoweringFixtures.Stamp(value);if(fail)throw new InvalidOperationException();}}
    public abstract class AbstractBase {public int seen;public AbstractBase(){seen=Read();}public abstract int Read();}
    public class AbstractDerived:AbstractBase {public int value=9;public override int Read(){return value;}}
    public struct QueryValue {public int value;public QueryValue(int input){value=input;}public bool Positive(){return value>0;}public bool Alias(){return Positive();}}
    public static class UnusedStatic {private static System.WeakReference neverUsed;public static int value=37;}
    public static class StaticWriteA {public static int value=Init();public static int Init(){StaticWriteB.noInitializer=StaticWriteB.first+1;return StaticWriteB.noInitializer;}}
    public static class StaticWriteB {public static int noInitializer;public static int first=37;}
    public class InitTarget{public int a,b,c;public bool flag;public InitTarget(int a){this.a=a;b=-1;}public InitTarget Clone(){return new InitTarget(a){flag=flag};}}
    public class InitDerived:InitTarget{public int d;public InitDerived(int x):base(x){b=x*2;}}
    public sealed class ConcatValue {
        public int step;public bool fail;public bool nullResult;
        public ConcatValue(int step,bool fail=false,bool nullResult=false){this.step=step;this.fail=fail;this.nullResult=nullResult;}
        public override string ToString(){LoweringFixtures.Stamp(step);if(fail)throw new InvalidOperationException("own fixture");return nullResult?null:step==4?"A":step==5?"B":"C";}
    }
    public sealed class ImplicitScope {
        public int value=37;public static bool UnusedAutoFlag{get;set;}
        private static void NeverCalled(int n) {System.WeakReference unreachable=null;again:if(n-->0)goto again;GC.KeepAlive(UnusedAutoFlag?unreachable:null);}
    }
    public interface IRun {void Run();}
    public class DelegateTarget:IRun {public int value;public DelegateTarget(int seed){value=seed;}public int Add(int amount){value+=amount;return value;}public void Run(){value++;}public Func<int,int> Make(){return amount=>Add(amount);}}
    public class BaseCtor { public int baseValue; public BaseCtor(int value) { baseValue = LoweringFixtures.Stamp(value); } }
    public class DerivedCtor : BaseCtor {
        public int first = LoweringFixtures.Stamp(1);
        public DerivedCtor() : this(2) { LoweringFixtures.Stamp(4); }
        public DerivedCtor(int value) : base(value) { LoweringFixtures.Stamp(3); }
    }
    public class CatchOnlyException:Exception {}
    public class GenericBucket<T>{private T value;public void Put(T item){value=item;}public T Read(){return value;}}
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
