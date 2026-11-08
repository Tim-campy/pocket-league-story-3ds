using System;
using System.Text.RegularExpressions;
class RegexFixtures {
    static string S(string text){string s="";foreach(char c in text)s+=((int)c).ToString("x4");return s;}
    static void Main(){
        string[] patterns={"<co=[0-9A-Z]+>","<co=([0-9A-F]+)>","<co=([0-9\\s]+),([0-9\\s]+),([0-9\\s]+)>","<(po=[a-zA-Z0-9]+|/po)>","<(co=[a-zA-Z0-9,]+|/co)>","^[a-zA-Z0-9_\\-]+\\.csv$","[^a-zA-Z\\-]","([0-9]+)","^<po=[^>]+>","</po>$","^\\s*\"(.*)\"\\s*$","([0-9.]+)","^<po=[^>]+>|</po>$","[^a-zA-Z_]","^ja","^en(-us)?$","^zh(-cn|-sg)","^zh(-tw|-hk|-mo)?","^ko","@ja\\s+([^\\s@]+)"};
        string[] inputs={"","own<co=AF>tail<co=07>","x<co= 1,2, 3>z", "<po=x>own</po>","own-file.csv\n", "\u3000\"A\rB\"\u00a0", "\ud800<co=0F>\udc00", "zh-cn", "@ja\u180eown @en other"};
        for(int p=0;p<patterns.Length;p++)for(int t=0;t<inputs.Length;t++){
            MatchCollection matches=Regex.Matches(inputs[t],patterns[p]);string r=matches.Count.ToString();
            foreach(Match m in matches){r+="|"+m.Index+","+m.Length+","+S(m.Value);for(int g=1;g<m.Groups.Count;g++)r+=";"+m.Groups[g].Success+","+m.Groups[g].Index+","+S(m.Groups[g].Value);}
            Console.WriteLine("matches"+p+"_"+t+"="+r);
            Console.WriteLine("replace"+p+"_"+t+"="+S(Regex.Replace(inputs[t],patterns[p],"")));
        }
        string[] small={"a*","(a)?b","^|$",".","a$","(a)(b)?"};
        for(int i=0;i<small.Length;i++){
            var m=Regex.Match("ab\r\n\ud800",small[i]);Console.WriteLine("small"+i+"="+m.Success+","+m.Index+","+m.Length+","+S(m.Value)+","+S(m.Groups[99].Value));
            Console.WriteLine("sub"+i+"="+S(Regex.Replace("ab\r\n",small[i],"[$$:$&:$1:$2:$0]")));
        }
        Console.WriteLine("nomatch="+Regex.Match("x","z").Groups.Count+","+Regex.Match("x","z").Groups[0].Success);
        char[] bmp=new char[65536];for(int i=0;i<bmp.Length;i++)bmp[i]=(char)i;
        string spaces="";foreach(Match m in Regex.Matches(new string(bmp),"\\s"))spaces+=S(m.Value);Console.WriteLine("bmpWhitespace="+spaces);
        try{Regex.Matches("x","z")[0].ToString();}catch(Exception e){Console.WriteLine("out="+e.GetType().FullName);}
        try{Regex.Match(null,"a");}catch(Exception e){Console.WriteLine("null="+e.GetType().FullName);}
    }
}
