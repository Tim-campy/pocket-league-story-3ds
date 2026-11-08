using System;
public static class ConversionFixtures {
    static string Bytes(byte[] value){string text="";foreach(byte item in value){if(text.Length>0)text+=",";text+=item.ToString("X2");}return text;}
    public static void Main(){
        byte[][] arrays={new byte[]{},new byte[]{0},new byte[]{0,1},new byte[]{0,1,2},new byte[]{0,1,2,3},new byte[]{255,254,253,252,251}};
        for(int i=0;i<arrays.Length;i++)Console.WriteLine("base64-encode-"+i+"="+Convert.ToBase64String(arrays[i]));
        string[] strings={"","AA==","AAE=","AAEC","AAECAw==","//79/Ps="," A A E C \t\r\n","AA== ","AA= =","AB==","AAF=","A","AA","AAA","====","A===","=AAA","AA=A","AA==AA==","AAEC=","AAEC!!!!","AAEC\0","AAEC\v","AAEC\f","AAEC\u0085","AAEC\u00A0","AAEC\u2003","AAEC\uFEFF","\t\n\r ","AAEC\u2028"};
        for(int i=0;i<strings.Length;i++){try{Console.WriteLine("base64-decode-"+i+"="+Bytes(Convert.FromBase64String(strings[i])));}catch(Exception e){Console.WriteLine("base64-decode-"+i+"="+e.GetType().FullName);}}
        try{Convert.ToBase64String((byte[])null);}catch(Exception e){Console.WriteLine("base64-encode-null="+e.GetType().FullName);}
        try{Convert.FromBase64String(null);}catch(Exception e){Console.WriteLine("base64-decode-null="+e.GetType().FullName);}
    }
}
