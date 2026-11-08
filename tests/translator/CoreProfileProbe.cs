using System;
using System.Security.Cryptography;
using System.Reflection;
class CoreProfileProbe {
    static string Hash(MethodBase method){using(var sha=SHA256.Create())return BitConverter.ToString(sha.ComputeHash(method.GetMethodBody().GetILAsByteArray())).Replace("-","").ToLowerInvariant();}
    static void Main(){
        Console.WriteLine("assembly\t"+typeof(object).Assembly.Location);
        Console.WriteLine("trim_il\t"+Hash(typeof(string).GetMethod("Trim",Type.EmptyTypes)));
        Console.WriteLine("find_not_white_space_il\t"+Hash(typeof(string).GetMethod("FindNotWhiteSpace",BindingFlags.NonPublic|BindingFlags.Instance)));
        foreach(int c in new int[]{0x202f,0x205f,0x200b,0xfeff})Console.WriteLine("trim-"+c+"\t"+new string(new char[]{(char)c,'X',(char)c}).Trim().Length);
    }
}
