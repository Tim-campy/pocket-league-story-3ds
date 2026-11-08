using System;
using System.Text;
class RuntimeEncodingFixtures {
    static string S(string value){var result="";foreach(char c in value)result+=((int)c).ToString("x4");return result;}
    static void Main(){
        Encoding[] codecs={Encoding.UTF8,Encoding.Unicode,Encoding.BigEndianUnicode,Encoding.ASCII};
        string[] texts={"","a\0z","\u00e9\u3042","\ud83d\ude00","\ud800x\udc00","\ud800\ud800\udc00"};
        for(int i=0;i<codecs.Length;i++)for(int j=0;j<texts.Length;j++){var bytes=codecs[i].GetBytes(texts[j]);Console.WriteLine("round"+i+"_"+j+"="+BitConverter.ToString(bytes)+","+S(codecs[i].GetString(bytes)));}
        byte[][] arrays={new byte[]{255,254,65,0},new byte[]{0,216},new byte[]{0,220},new byte[]{0,216,65,0},new byte[]{0,216,0,220},new byte[]{0,216,255},new byte[]{128,255,127},new byte[]{1}};
        for(int i=1;i<codecs.Length;i++)for(int j=0;j<arrays.Length;j++)Console.WriteLine("decode"+i+"_"+j+"="+S(codecs[i].GetString(arrays[j])));
        Console.WriteLine("slice="+S(Encoding.Unicode.GetString(new byte[]{99,65,0,66,0,99},1,4)));
        string[] names={"utf-8","UTF8","utf-16","unicode","utf-16BE","unicodeFFFE","ascii","us-ascii","","own"," UTF-8","\0","-own-unknown"};
        for(int i=0;i<names.Length;i++){try{Console.WriteLine("name"+i+"="+BitConverter.ToString(Encoding.GetEncoding(names[i]).GetBytes("A")));}catch(Exception e){Console.WriteLine("name"+i+"="+e.GetType().FullName);}}
        Action[] bad=new Action[]{delegate{Encoding.UTF8.GetBytes((string)null);},delegate{Encoding.Unicode.GetString((byte[])null);},delegate{Encoding.Unicode.GetString(new byte[2],-1,1);},delegate{Encoding.Unicode.GetString(new byte[2],1,2);},delegate{Encoding.GetEncoding((string)null);}};
        for(int i=0;i<bad.Length;i++){try{bad[i]();Console.WriteLine("bad"+i+"=none");}catch(Exception e){Console.WriteLine("bad"+i+"="+e.GetType().FullName);}}
    }
}
