using System;
using System.Globalization;
using System.IO;
using System.Text;
using System.Threading;
class FloatFormatOracle {
 static string Hex(string value){var result=new StringBuilder();foreach(char c in value)result.Append(((int)c).ToString("x4",CultureInfo.InvariantCulture));return result.ToString();}
 static void Main(string[] args){
  string[] cases=File.ReadAllLines(args[0]);
  for(int mode=0;mode<2;mode++){
   var culture=(CultureInfo)CultureInfo.InvariantCulture.Clone();
   if(mode==1){culture.NumberFormat.NumberDecimalSeparator="\u066b\0";culture.NumberFormat.PositiveSign="up";culture.NumberFormat.NegativeSign="dn";culture.NumberFormat.NaNSymbol="own\ud800\0";culture.NumberFormat.PositiveInfinitySymbol="own\u2603+";culture.NumberFormat.NegativeInfinitySymbol="own\u2603-";}
   Thread.CurrentThread.CurrentCulture=culture;
   foreach(string line in cases){string[] fields=line.Split('\t');string text;
    if(fields[0]=="S"){uint bits=uint.Parse(fields[1],NumberStyles.AllowHexSpecifier,CultureInfo.InvariantCulture);text=BitConverter.ToSingle(BitConverter.GetBytes(bits),0).ToString();}
    else{ulong bits=ulong.Parse(fields[1],NumberStyles.AllowHexSpecifier,CultureInfo.InvariantCulture);text=BitConverter.Int64BitsToDouble(unchecked((long)bits)).ToString();}
    Console.WriteLine(mode+"|"+fields[0]+"|"+fields[1]+"|"+Hex(text));
   }
  }
 }
}
