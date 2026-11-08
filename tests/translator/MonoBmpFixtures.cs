using System;
using System.Globalization;
using System.Text;
using System.Threading;

// Exhaustive BMP observations from own scalar inputs; not an extracted table.
public static class MonoBmpFixtures {
    delegate char Map(char value);
    static void Row(string id,Map map){var b=new StringBuilder(65536*4);for(int i=0;i<65536;i++)b.Append(((int)map((char)i)).ToString("x4",CultureInfo.InvariantCulture));Console.WriteLine(id+"\t"+b);}
    public static void Main(){int[] lcids={127,1033,1055};for(int c=0;c<lcids.Length;c++){Thread.CurrentThread.CurrentCulture=new CultureInfo(lcids[c]);Row("c"+c+"lower",delegate(char x){return Char.ToLower(x);});Row("c"+c+"upper",delegate(char x){return Char.ToUpper(x);});}Row("invlower",delegate(char x){return Char.ToLowerInvariant(x);});Row("invupper",delegate(char x){return Char.ToUpperInvariant(x);});var flags=new StringBuilder(65536);for(int i=0;i<65536;i++)flags.Append(Char.GetUnicodeCategory((char)i)==UnicodeCategory.OtherNotAssigned?'1':'0');Console.WriteLine("unassigned\t"+flags);}
}
