using System;
namespace SyntheticRefs {
 public class Holder {public int field;public int shared;public int Instance(ref int value,int other){value=unchecked(value+other);return value;}}
 public static class Source {
  public static int trace;public static int[] array;
  public static int Bump(ref int value){value=unchecked(value+1);return value;}
  public static void Set(out int value,int input){value=input;}
  public static int Alias(ref int first,ref int second){first=7;second=first+1;return first;}
  public static int Rhs(){trace=trace*10+2;return 3;}
  public static int ArrayIndex(){trace=trace*10+1;return 0;}
  public static int Field(int input){var holder=new Holder();holder.field=input;return Bump(ref holder.field);}
  public static int OutLocal(int input){int value;Set(out value,input);return value;}
  public static int AliasLocal(){int value=0;return Alias(ref value,ref value);}
  public static int ArrayElement(int input){var data=new int[1];data[0]=input;Bump(ref data[0]);return data[0];}
  public static int NullArrayOrder(){trace=0;int[] data=null;var holder=new Holder();try{return holder.Instance(ref data[ArrayIndex()],Rhs());}catch(NullReferenceException){return trace;}}
  public static int NullReceiverOrder(){trace=0;Holder holder=null;int[] data=new int[0];try{return holder.Instance(ref data[ArrayIndex()],Rhs());}catch(IndexOutOfRangeException){return trace;}}
  public static int NullReceiverAfterArguments(){trace=0;Holder holder=null;int value=0;try{return holder.Instance(ref value,Rhs());}catch(NullReferenceException){return trace;}}
  public static int NullFieldOrder(){trace=0;Holder holder=null;try{return SetWithArgument(ref holder.field,Rhs());}catch(NullReferenceException){return trace;}}
  public static int ThrowAfterWrite(ref int value){value=37;throw new ArgumentException();}
  public static int ExceptionalWrite(){int value=0;try{ThrowAfterWrite(ref value);}catch(ArgumentException){}return value;}
  public static int ReplaceArray(){array=new int[1];array[0]=99;return 1;}
  public static int SetWithArgument(ref int target,int ignored){target=51;return target;}
  public static int StableArrayAddress(){array=new int[1];var original=array;SetWithArgument(ref array[0],ReplaceArray());return original[0]*100+array[0];}
  public static int SharedAddressForbidden(){var holder=new Holder();return Bump(ref holder.shared);}
 }
}
