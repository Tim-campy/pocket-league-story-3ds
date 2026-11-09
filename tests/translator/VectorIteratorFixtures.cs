// Own synthetic collection with the exact admitted List/cast/yield shape.
using System;
using System.Collections;
using System.Collections.Generic;
namespace java.util {
 public partial class Vector<T> {
  protected List<object> list_=new List<object>();
  public List<object> List {get{return list_;}}
  public void Add(object value){list_.Add(value);}
  public void Replace(){list_=new List<object>();}
  public IEnumerator GetEnumerator(){foreach(T item in list_){yield return item;}}
 }
}
public static class VectorIteratorFixtures {
 public static int Sum(int seed){var v=new java.util.Vector<int>();v.Add(seed);v.Add(3);int sum=0;foreach(int value in v)sum=unchecked(sum+value);return sum;}
 public static int EarlyExit(int seed){var v=new java.util.Vector<int>();v.Add(seed);v.Add("invalid");foreach(int value in v)return value;return -1;}
 public static int Mutate(int seed){var v=new java.util.Vector<int>();v.Add(seed);try{foreach(int value in v)v.Add(value);}catch(InvalidOperationException){return 17;}return -1;}
 public static int Replace(int seed){var v=new java.util.Vector<int>();v.Add(seed);v.Add(3);int sum=0;foreach(int value in v){v.Replace();sum=unchecked(sum+value);}return sum;}
 public static int WidenedCast(int seed){var v=new java.util.Vector<int>();v.Add("invalid");try{foreach(object value in v)return 1;}catch(InvalidCastException){return 19;}return -1;}
 public static int Null(int seed){java.util.Vector<int> v=null;try{foreach(int value in v)return value;}catch(NullReferenceException){return 23;}return -1;}
}
