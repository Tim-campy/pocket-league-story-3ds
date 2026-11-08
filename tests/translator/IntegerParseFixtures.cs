using System;
using System.Globalization;
using System.Threading;
public static class IntegerParseFixtures {
    public static void Main(){
        Thread.CurrentThread.CurrentCulture=CultureInfo.InvariantCulture;
        string[] text={null,""," ","0","-0","+42","-42"," \t\r\n42\v\f ","2147483647","-2147483648","2147483648","-2147483649","9223372036854775807","-9223372036854775808","9223372036854775808","-9223372036854775809","9999999999999999999999999999x","00000000000000000000000000000000000000000001","1,234","1.0","1e2","1 2","+ 1","--1","42\0","42\0\0","42\0 ","42\u00A0","\u00A042","\u008542","\u200342","\u0661","\uFF11","42-","0x10","42\0x","42 \0","2147483640x","9223372036854775800x","\0","+\0","42 4"};
        for(int i=0;i<text.Length;i++){
            try{Console.WriteLine("parse32-"+i+"="+int.Parse(text[i]));}catch(Exception e){Console.WriteLine("parse32-"+i+"="+e.GetType().FullName);}
            try{Console.WriteLine("parse64-"+i+"="+long.Parse(text[i]));}catch(Exception e){Console.WriteLine("parse64-"+i+"="+e.GetType().FullName);}
        }
        string[] hex={null,"","0","7fffffff","80000000","ffffffff","100000000","7fffffffffffffff","8000000000000000","ffffffffffffffff","10000000000000000"," ff","ff ","+ff","-ff","0xff","FF\0","FF\0\0","00000000000000000000000000000000FF","9999999999999999999999999999x"};
        for(int i=0;i<hex.Length;i++){
            try{Console.WriteLine("hex32-"+i+"="+int.Parse(hex[i],NumberStyles.AllowHexSpecifier));}catch(Exception e){Console.WriteLine("hex32-"+i+"="+e.GetType().FullName);}
            try{Console.WriteLine("hex64-"+i+"="+long.Parse(hex[i],NumberStyles.AllowHexSpecifier));}catch(Exception e){Console.WriteLine("hex64-"+i+"="+e.GetType().FullName);}
        }
        int[] whites={0x09,0x0A,0x0B,0x0C,0x0D,0x1C,0x20,0x85,0xA0,0x1680,0x180E,0x2000,0x2001,0x2002,0x2003,0x2004,0x2005,0x2006,0x2007,0x2008,0x2009,0x200A,0x200B,0x2028,0x2029,0x202F,0x205F,0x2060,0x3000,0xFEFF};
        for(int i=0;i<whites.Length;i++){try{Console.WriteLine("space-"+i+"="+int.Parse(((char)whites[i])+"42"));}catch(Exception e){Console.WriteLine("space-"+i+"="+e.GetType().FullName);}}
        CultureInfo custom=(CultureInfo)CultureInfo.InvariantCulture.Clone();custom.NumberFormat.PositiveSign="up";custom.NumberFormat.NegativeSign="dn";Thread.CurrentThread.CurrentCulture=custom;
        try{Console.WriteLine("custom-positive="+int.Parse("up42").ToString(CultureInfo.InvariantCulture));}catch(Exception e){Console.WriteLine("custom-positive="+e.GetType().FullName);}
        try{Console.WriteLine("custom-negative="+int.Parse("dn42").ToString(CultureInfo.InvariantCulture));}catch(Exception e){Console.WriteLine("custom-negative="+e.GetType().FullName);}
        try{Console.WriteLine("custom-old-sign="+int.Parse("-42").ToString(CultureInfo.InvariantCulture));}catch(Exception e){Console.WriteLine("custom-old-sign="+e.GetType().FullName);}
    }
}
