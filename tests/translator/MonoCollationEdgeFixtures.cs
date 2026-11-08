using System;
using System.Globalization;
using System.Text;
using System.Threading;

// Own synthetic strings only. No game assembly or extracted payload is loaded.
public static class MonoCollationEdgeFixtures
{
    delegate object Work();
    static string Hex(string text) {var b=new StringBuilder();foreach(char c in text)b.Append(((int)c).ToString("x4",CultureInfo.InvariantCulture));return "str:"+b;}
    static void Row(string id,Work work) {try {object result=work();Console.WriteLine(id+"\t"+(result is string?Hex((string)result):result.ToString()));}catch(Exception e){Console.WriteLine(id+"\t"+e.GetType().FullName);}}
    public static void Main()
    {
        string[] cultures={"","en-US","tr-TR","fr-FR","ja-JP","ko-KR","zh-CN","zh-TW"};
        string[] values={"","a","ab","a\0b","a\u00adb","\u00e9","e\u0301","I","\u0130","i","\u0378","a\u0378b","-","a-b","a b","\ud800","a\ud800b"};
        for(int c=0;c<cultures.Length;c++) {
            Thread.CurrentThread.CurrentCulture=new CultureInfo(cultures[c]);
            for(int a=0;a<values.Length;a++) {
                string s=values[a];string id="c"+c+"a"+a;
                Row(id+"lower",delegate{return s.ToLower();});Row(id+"upper",delegate{return s.ToUpper();});
                for(int b=0;b<values.Length;b++) {
                    string t=values[b],key=id+"b"+b;
                    Row(key+"index",delegate{return s.IndexOf(t);});
                    Row(key+"index0",delegate{return s.IndexOf(t,0);});
                    Row(key+"index1",delegate{return s.IndexOf(t,1);});
                    Row(key+"indexEmptyRange",delegate{return s.IndexOf(t,s.Length,0);});
                    Row(key+"last",delegate{return s.LastIndexOf(t);});
                    Row(key+"lastEnd",delegate{return s.LastIndexOf(t,s.Length);});
                    Row(key+"lastMinus1",delegate{return s.LastIndexOf(t,-1,0);});
                    Row(key+"starts",delegate{return s.StartsWith(t);});
                    Row(key+"ends",delegate{return s.EndsWith(t);});
                    Row(key+"compare",delegate{return String.Compare(s,t);});
                    Row(key+"equalsCI",delegate{return String.Equals(s,t,StringComparison.CurrentCultureIgnoreCase);});
                }
            }
        }
    }
}
