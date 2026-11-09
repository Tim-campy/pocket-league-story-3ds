using System;
using System.Globalization;
class StringOpsFixtures {
    static string Hex(string s){if(s==null)return "NULL";string r="";foreach(char c in s)r+=((int)c).ToString("x4");return r;}
    static string Parse(string s,bool allowSpaces=true){try{return int.Parse(s,allowSpaces?NumberStyles.HexNumber:NumberStyles.AllowHexSpecifier,CultureInfo.InvariantCulture).ToString(CultureInfo.InvariantCulture);}catch(Exception e){return e.GetType().FullName;}}
    static string Replace(string s,string old,string to){try{string result=s.Replace(old,to);return Hex(result)+";same="+Object.ReferenceEquals(s,result);}catch(Exception e){return e.GetType().FullName;}}
    static string ReplaceChar(string s,char old,char to){try{string result=s.Replace(old,to);return Hex(result)+";same="+Object.ReferenceEquals(s,result);}catch(Exception e){return e.GetType().FullName;}}
    static string Split(string s,char[] separators){try{string[] parts=s.Split(separators);string result=parts.Length+";";foreach(string part in parts)result+="["+Hex(part)+"]"+(Object.ReferenceEquals(part,s)?"^":"");return result;}catch(Exception e){return e.GetType().FullName;}}
    static void Main(){
        for(int c=0;c<65536;c++){
            string s=new string(new char[]{(char)c,'X',(char)c});
            Console.WriteLine("bmp-"+c+"\t"+(s.Trim().Length==1?"1":"0")+(s.Trim((char[])null).Length==1?"1":"0")+(s.Trim(new char[0]).Length==1?"1":"0"));
        }
        string[] values={"","XX"," X ","\u0000X\u0000","\ud800X\udc00"," \t\r\n","\u200bX\ufeff","\u202fX\u205f","\ud83d\ude00X\ud83d\ude00"};
        char[][] sets={null,new char[0],new char[]{'X'},new char[]{' ','\u0000'},new char[]{'\ud800','\udc00'},new char[]{'\ud83d','\ude00'},new char[]{'X','X'}};
        for(int i=0;i<values.Length;i++)for(int j=0;j<sets.Length;j++){string result=values[i].Trim(sets[j]);Console.WriteLine("set-"+i+"-"+j+"\t"+Hex(result)+";same="+Object.ReferenceEquals(values[i],result));}
        try{string s=null;s.Trim();}catch(Exception e){Console.WriteLine("null\t"+e.GetType().FullName);}
        int[] numbers={0,1,15,16,255,256,int.MaxValue,int.MinValue,-1,-2,-256};int[] widths={0,1,2,7,8,9,16,99};
        foreach(int n in numbers)foreach(int w in widths)foreach(bool upper in new bool[]{false,true})Console.WriteLine("hex-"+n+"-"+w+"-"+upper+"\t"+n.ToString((upper?"X":"x")+w,CultureInfo.InvariantCulture));
        for(int c=0;c<65536;c++)Console.WriteLine("parse-bmp-"+c+"\t"+Parse(new string(new char[]{(char)c,'f',(char)c})));
        for(int c=0;c<65536;c++)Console.WriteLine("strict-bmp-"+c+"\t"+Parse(new string(new char[]{(char)c,'f',(char)c}),false));
        string[] parses={null,""," ","0","f","FFFFFFFF","80000000","100000000","100000000X","FFFFFFFFF ","+1","-1","0x1","1\0","1\0X","1\0 ","1 \0","1\0\0","\0","\0f"," f "," f\t","00000000000000000f","FFFFFFFFX","1 2","\ufefff\ufeff"};
        for(int i=0;i<parses.Length;i++)Console.WriteLine("parse-"+i+"\t"+Parse(parses[i]));
        for(int i=0;i<parses.Length;i++)Console.WriteLine("strict-"+i+"\t"+Parse(parses[i],false));
        string[] replaceValues={null,"","aaa","ababa",new string('a',205),"\0a\0","\uff21a","a\ud800a"};
        string[] oldValues={null,"","a","aa","aba","\0","\ud800","\uff21","longerthaninput"};string[] newValues={null,"","a","aa","Z","\0"};
        for(int i=0;i<replaceValues.Length;i++)for(int j=0;j<oldValues.Length;j++)for(int k=0;k<newValues.Length;k++)Console.WriteLine("replace-"+i+"-"+j+"-"+k+"\t"+Replace(replaceValues[i],oldValues[j],newValues[k]));
        char[] charValues={'\0','a','b','\ud800','\uff21'};for(int i=0;i<replaceValues.Length;i++)for(int j=0;j<charValues.Length;j++)for(int k=0;k<charValues.Length;k++)Console.WriteLine("replace-char-"+i+"-"+j+"-"+k+"\t"+ReplaceChar(replaceValues[i],charValues[j],charValues[k]));
        for(int c=0;c<65536;c++){string s=new string(new char[]{'a',(char)c,'b'});Console.WriteLine("split-bmp-"+c+"\t"+s.Split((char[])null).Length+","+s.Split(new char[0]).Length);}
        string[] splitValues={null,"","a"," a ","a,,b,","aaa","\r\nA\r\nB\n","\0a\0","a\ud800b","a\tb c","\u200bA\ufeff"};
        char[][] splitSets={null,new char[0],new char[]{','},new char[]{'\r','\n'},new char[]{' ','\t'},new char[]{'\0'},new char[]{'\ud800'}};
        for(int i=0;i<splitValues.Length;i++)for(int j=0;j<splitSets.Length;j++)Console.WriteLine("split-"+i+"-"+j+"\t"+Split(splitValues[i],splitSets[j]));
    }
}
