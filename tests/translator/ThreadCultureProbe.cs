using System;
using System.Globalization;
using System.Threading;
public static class ThreadCultureProbe {
    static string Describe(){CultureInfo c=Thread.CurrentThread.CurrentCulture;string value=c.LCID.ToString(CultureInfo.InvariantCulture);while(c.LCID!=127 && c.Parent!=null && c.Parent.LCID!=127 && c.Parent!=c){c=c.Parent;value+="/"+c.LCID.ToString(CultureInfo.InvariantCulture);}return value;}
    public static void Main(){CultureInfo initial=Thread.CurrentThread.CurrentCulture;Console.WriteLine("initial\t"+Describe());Thread.CurrentThread.CurrentCulture=new CultureInfo("tr-TR");Console.WriteLine("parent-tr\t"+Describe());string child="",overridden="",grandchild="";Thread t=new Thread(delegate(){child=Describe();Thread.CurrentThread.CurrentCulture=new CultureInfo("de-DE");overridden=Describe();Thread nested=new Thread(delegate(){grandchild=Describe();});nested.Start();nested.Join();});Thread.CurrentThread.CurrentCulture=new CultureInfo("fr-FR");t.Start();t.Join();Console.WriteLine("child\t"+child);Console.WriteLine("child-override\t"+overridden);Console.WriteLine("grandchild\t"+grandchild);Console.WriteLine("parent-fr\t"+Describe());Thread.CurrentThread.CurrentCulture=initial;Console.WriteLine("restored\t"+Describe());}
}
