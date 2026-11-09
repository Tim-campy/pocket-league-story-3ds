// Own numeric edge cases; no game data.
using System;
using System.Globalization;
using System.Threading;
public static class FloatParseFixtures {
 public static string[] Values={null,""," ","0","-0","+0","0.0","-0.0","1","-1",".5","1.","1e2","1E-2","+1e+2","1,234.5","1,,2","1,","1,2,3","1,.5",",1","1.2,3"," 1 ","\t1\r\n","1\0","1\0x","1 \0","1\0 ","NaN","nan","NAN","Infinity","-Infinity","+Infinity","infinity"," NaN ","-NaN","+NaN","0x1","1e","1e+","1e99999","-1e99999","1e-99999","-1e-99999","3.4028234663852886e38","3.40282347e38","3.4028235e38","-3.4028235e38","3.4028236e38","-3.4028236e38","1.7976931348623157e308","1.7976931348623159e308","1.401298464324817e-45","7.006492321624085e-46","-7.006492321624085e-46","1.000000059604644775390625","1.000000059604644775390626","0.100000001490116119384765625","42x","+ 1","--1","(1)","1-","1_000","\u0661","\uff11"};
 static string Parse(string value){try{return unchecked((uint)BitConverter.ToInt32(BitConverter.GetBytes(float.Parse(value)),0)).ToString("X8",CultureInfo.InvariantCulture);}catch(Exception e){return e.GetType().FullName;}}
 public static void Main(){foreach(var culture in new string[]{"","en-US"}){Thread.CurrentThread.CurrentCulture=CultureInfo.GetCultureInfo(culture);for(int i=0;i<Values.Length;i++)Console.WriteLine(culture+"edge-"+i+"\t"+Parse(Values[i]));for(int i=0;i<65536;i++)Console.WriteLine(culture+"white-"+i+"\t"+Parse(new string(new char[]{(char)i,'1',(char)i})));}}
}
