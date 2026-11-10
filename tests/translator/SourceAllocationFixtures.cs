using System;
public sealed class SourceAllocationFixture {
    public int Value;
    public static int Run(int size,string text){
        var instance=new SourceAllocationFixture();
        var values=new int[size];
        object boxed=size;
        string combined="x"+text;
        Func<int> captured=delegate{return size;};
        return instance.Value+values.Length+(boxed!=null?1:0)+combined.Length+captured();
    }
}
