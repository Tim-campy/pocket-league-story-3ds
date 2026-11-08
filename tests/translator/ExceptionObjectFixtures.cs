using System;
using System.IO;
class SourceWithCode:IOException {public int Code;public SourceWithCode(string message,Exception inner,int code):base(message,inner){Code=code;}}
class ExceptionObjectFixtures {
    static string S(string value){if(value==null)return "null";var result="";foreach(char c in value.Replace("\r\n","\n"))result+=((int)c).ToString("x4");return result;}
    static void Main(){
        Exception[] samples={new Exception(),new Exception((string)null),new Exception(""),new Exception("own"),new SystemException(),new IOException(),new EndOfStreamException(),new InvalidOperationException(),new NullReferenceException(),new ArgumentException(),new ArgumentNullException(),new ArgumentOutOfRangeException(),new FormatException(),new ArrayTypeMismatchException(),new ArithmeticException(),new DivideByZeroException(),new OverflowException(),new IndexOutOfRangeException(),new InvalidCastException(),new NotSupportedException(),new NotImplementedException(),new OutOfMemoryException(),new UnauthorizedAccessException(),new System.Collections.Generic.KeyNotFoundException(),new ObjectDisposedException((string)null),new System.Threading.ThreadStateException(),new System.Threading.ThreadInterruptedException()};
        for(int i=0;i<samples.Length;i++){var e=samples[i];Console.WriteLine("sample"+i+"="+e.GetType().FullName+","+S(e.Message)+","+(e.InnerException==null));}
        Console.WriteLine("plainString="+S(new Exception("own").ToString()));
        var inner=new InvalidOperationException("inner");var outer=new Exception("outer",inner);
        Console.WriteLine("innerIdentity="+Object.ReferenceEquals(outer.InnerException,inner));
        Console.WriteLine("baseIdentity="+Object.ReferenceEquals(outer.GetBaseException(),inner));
        Console.WriteLine("innerString="+S(outer.ToString()));
        var custom=new SourceWithCode("custom",inner,37);Exception saved=null;
        try{throw custom;}catch(IOException e){saved=e;Console.WriteLine("custom="+Object.ReferenceEquals(e,custom)+","+((SourceWithCode)e).Code+","+e.GetType().Name);}
        try{throw saved;}catch(Exception e){Console.WriteLine("rethrowRef="+Object.ReferenceEquals(e,saved)+","+(e is IOException)+","+(e is SystemException)+","+(e is ArgumentException));}
        try{throw (Exception)null;}catch(Exception e){Console.WriteLine("throwNull="+e.GetType().FullName);}
        Exception native1=null,native2=null;
        try{int[] a=new int[0];Console.WriteLine(a[1]);}catch(Exception e){native1=e;try{throw;}catch(Exception e2){native2=e2;}}
        Console.WriteLine("nativeRethrow="+Object.ReferenceEquals(native1,native2)+","+native1.GetType().FullName);
        var unicode=new Exception("\ud800\0x");try{throw unicode;}catch(Exception e){Console.WriteLine("unicode="+S(e.Message)+","+Object.ReferenceEquals(e,unicode));}
        var threadError=new System.Threading.ThreadStateException();try{throw threadError;}catch(SystemException e){Console.WriteLine("threadType="+(e is System.Threading.ThreadStateException)+","+Object.ReferenceEquals(threadError,e));}
    }
}
