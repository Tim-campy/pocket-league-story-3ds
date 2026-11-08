using System;
using System.Text;
public static class EncodingFixtures {
    static string Bytes(byte[] value){string text="";foreach(byte item in value){if(text.Length>0)text+=",";text+=item.ToString("X2");}return text;}
    static string Units(string value){string text="";foreach(char item in value){if(text.Length>0)text+=",";text+=((int)item).ToString("X4");}return text;}
    public static void Main(){
        string[] strings={"","A\0Z","\uD83D\uDE00","\uD800","\uDC00","\uD800\uD800","\uD800A","\uDC00\uD800","\uD83D\uDE00\uD800","\uFFFF"};
        for(int i=0;i<strings.Length;i++)Console.WriteLine("encode-"+i+"="+Bytes(Encoding.UTF8.GetBytes(strings[i])));
        byte[][] arrays={new byte[]{},new byte[]{65,0,90},new byte[]{0xC2,0xA9},new byte[]{0xE2,0x82,0xAC},new byte[]{0xF0,0x9F,0x98,0x80},
            new byte[]{0xC0,0x80},new byte[]{0xE0,0x80,0x80},new byte[]{0xF0,0x80,0x80,0x80},new byte[]{0x80,0xBF},new byte[]{0xF5},
            new byte[]{0xC2},new byte[]{0xE2,0x82},new byte[]{0xF0,0x9F,0x98},new byte[]{0xE2,0x28,0xA1},new byte[]{0xED,0xA0,0x80},
            new byte[]{0xF4,0x90,0x80,0x80},new byte[]{0xEF,0xBB,0xBF},new byte[]{0xE2,0x82,0x41},new byte[]{0xF0,0x90,0x80,0x41}};
        for(int i=0;i<arrays.Length;i++)Console.WriteLine("decode-"+i+"="+Units(Encoding.UTF8.GetString(arrays[i])));
        try{Encoding.UTF8.GetBytes((string)null);}catch(Exception e){Console.WriteLine("encode-null="+e.GetType().FullName);}
        try{Encoding.UTF8.GetString((byte[])null);}catch(Exception e){Console.WriteLine("decode-null="+e.GetType().FullName);}
        byte[] slice={65,0xE2,0x82,0xAC,90};Console.WriteLine("slice-valid="+Units(Encoding.UTF8.GetString(slice,1,3)));
        Console.WriteLine("slice-middle="+Units(Encoding.UTF8.GetString(slice,2,2)));
        try{Encoding.UTF8.GetString(slice,-1,0);}catch(Exception e){Console.WriteLine("slice-negative="+e.GetType().FullName);}
        try{Encoding.UTF8.GetString(slice,99,0);}catch(Exception e){Console.WriteLine("slice-outside="+e.GetType().FullName);}
        try{Encoding.UTF8.GetString(slice,1,Int32.MaxValue);}catch(Exception e){Console.WriteLine("slice-overflow="+e.GetType().FullName);}
    }
}
