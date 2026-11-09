using System;
namespace SyntheticSharedFields {
 public sealed class Counter {
  public int value=3;
  public int state;
  public string text;
  public int[] payload;
  public Counter link;
 }
 public static class Source {
  public static int trace;
  public static Counter current;
  public static Counter Receiver(){trace=unchecked(trace*10+1);return current;}
  public static int Rhs(){trace=unchecked(trace*10+2);if(current!=null)current.value=9;return 1;}
  public static int NullSimple(){current=null;trace=0;try{Receiver().value=Rhs();return -1;}catch(NullReferenceException){return trace;}}
  public static int NullCompound(){current=null;trace=0;try{Receiver().value+=Rhs();return -1;}catch(NullReferenceException){return trace;}}
  public static int CompoundOverwrite(int initial){current=new Counter();current.value=initial;trace=0;current.value+=Rhs();return current.value;}
  public static int PrefixPostfix(int initial){current=new Counter();current.value=initial;trace=0;int old=Receiver().value++;int next=++Receiver().value;return unchecked(old*100+next*10+current.value+trace);}
  public static int Initializer(){return new Counter().value;}
  public static bool CachedReference(){Counter holder=new Counter();Counter node=new Counter();node.value=37;holder.link=node;Counter cached=holder.link;holder.link=null;GC.Collect(0);return cached==node&&cached.value==37;}
  public static bool IdentityAndTrace(){Counter holder=new Counter();Counter node=new Counter();holder.link=node;node.link=holder;GC.Collect(0);return holder.link==node&&node.link==holder;}
  public static string Publish(string value){Counter holder=new Counter();holder.text=value;holder.payload=new int[2];holder.payload[0]=37;holder.state=1;return holder.state==1&&holder.payload[0]==37?holder.text:null;}
  public static int CachedArray(){Counter holder=new Counter();holder.payload=new int[1];int[] cached=holder.payload;holder.payload=null;GC.Collect(0);cached[0]=91;return cached[0];}
 }
}
