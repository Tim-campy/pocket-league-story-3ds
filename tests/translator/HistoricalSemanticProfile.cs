// Own-source probe for behavior that differs across managed implementations.
using System;
public static class HistoricalSemanticProfile {
    static int Min=Int32.MinValue,MinusOne=-1;
    static long Min64=Int64.MinValue,MinusOne64=-1;
    public static void Main(){
        Console.WriteLine("ordinal-prefix="+String.CompareOrdinal("a","aaa"));
        Console.WriteLine("ordinal-char="+String.CompareOrdinal("a","c"));
        try{Console.WriteLine("rem32="+(Min%MinusOne));}catch(Exception ex){Console.WriteLine("rem32="+ex.GetType().FullName);}
        try{Console.WriteLine("rem64="+(Min64%MinusOne64));}catch(Exception ex){Console.WriteLine("rem64="+ex.GetType().FullName);}
        try{Console.WriteLine("div32="+(Min/MinusOne));}catch(Exception ex){Console.WriteLine("div32="+ex.GetType().FullName);}
        Console.WriteLine("ordinal-non-bmp="+String.CompareOrdinal("\uD83D\uDE00","\uE000"));
    }
}
