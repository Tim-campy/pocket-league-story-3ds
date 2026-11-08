using System;
using System.Globalization;
using System.IO;
using System.Text;

public static class StreamReaderFixtures {
    sealed class Input:MemoryStream {
        public int Reads,Closes;readonly int chunk;
        public Input(byte[] data,int count):base(data){chunk=count;}
        public override int Read(byte[] data,int offset,int count){Reads++;return base.Read(data,offset,chunk==0?count:Math.Min(count,chunk));}
        public override void Close(){Closes++;base.Close();}
    }
    static string Hex(string value){if(value==null)return "NULL";var b=new StringBuilder();foreach(char c in value)b.Append(((int)c).ToString("x4",CultureInfo.InvariantCulture));return b.ToString();}
    static Encoding Codec(string name){if(name=="le")return Encoding.Unicode;if(name=="be")return Encoding.BigEndianUnicode;if(name=="ascii")return Encoding.ASCII;return Encoding.UTF8;}
    public static void Main(){string line;while((line=Console.ReadLine())!=null){var parts=line.Split('|');var bytes=new byte[parts[1].Length/2];for(int i=0;i<bytes.Length;i++)bytes[i]=Convert.ToByte(parts[1].Substring(i*2,2),16);var stream=new Input(bytes,Int32.Parse(parts[3],CultureInfo.InvariantCulture));string result;
        try{var encoding=Codec(parts[2]);if(parts[4]=="closed")stream.Close();using(var reader=new StreamReader(parts[4]=="nullstream"?null:stream,parts[4]=="nullencoding"?null:encoding)){
            if(parts[4]=="dispose"){reader.Dispose();try{reader.ReadLine();result="unexpected";}catch(Exception e){result=e.GetType().FullName;}try{reader.ReadToEnd();result+=",unexpected";}catch(Exception e){result+=","+e.GetType().FullName;}}
            else if(parts[4]=="lines"){var b=new StringBuilder();for(;;){var text=reader.ReadLine();if(text==null)break;b.Append('[').Append(Hex(text)).Append(']');}result=b.ToString();}
            else result=Hex(reader.ReadToEnd());
            if(parts[4]!="dispose")result+=";r="+stream.Reads+";p="+stream.Position;
        }}catch(Exception e){result=e.GetType().FullName;}Console.WriteLine(parts[0]+"\t"+result+";c="+stream.Closes);
    }}
}
