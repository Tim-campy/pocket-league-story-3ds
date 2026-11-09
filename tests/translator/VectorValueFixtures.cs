// Own value/address fixtures. UnityEngine.Vector2 is metadata-only in the
// front end; the standalone oracle uses the proved scalar-store facade.
using System;
using UnityEngine;
namespace SyntheticVectors {
public static class VectorValueFixtures {
    private static int trace;
    private static Vector2[] current;
    static int Index(){trace=unchecked(trace*10+1);return 0;}
    static float Arg(float value){trace=unchecked(trace*10+2);return value;}
    static float Swap(){current=new Vector2[1];return 9.0f;}
    public static float Default(){Vector2 value=default(Vector2);return value.x;}
    public static float ConstructorX(float x,float y){return new Vector2(x,y).x;}
    public static float ConstructorY(float x,float y){return new Vector2(x,y).y;}
    public static float ArraySetX(float x,float y){var values=new Vector2[1];values[Index()].Set(Arg(x),Arg(y));return values[0].x;}
    public static float ArraySetY(float x,float y){var values=new Vector2[1];values[Index()].Set(Arg(x),Arg(y));return values[0].y;}
    public static float ReadCopy(float x,float y){var values=new Vector2[1];values[0]=new Vector2(3.0f,4.0f);var copy=values[0];copy.Set(x,y);return values[0].x;}
    public static float Alias(float x,float y){var values=new Vector2[1];var alias=values;alias[0].Set(x,y);return values[0].x;}
    public static float ArrayField(float x){var values=new Vector2[1];values[Index()].x=Arg(x);return values[0].x;}
    public static int NullMethodOrder(){trace=0;Vector2[] values=null;try{values[Index()].Set(Arg(7.0f),Arg(9.0f));}catch(NullReferenceException){return trace;}return -1;}
    public static int NullFieldOrder(){trace=0;Vector2[] values=null;try{values[Index()].x=Arg(7.0f);}catch(NullReferenceException){return trace;}return -1;}
    public static float ForeachLocal(float x,float y){var values=new Vector2[1];foreach(Vector2 value in values){value.Set(x,y);return value.x;}return -1.0f;}
    public static float ForeachArray(float x,float y){var values=new Vector2[1];foreach(Vector2 value in values){value.Set(x,y);}return values[0].x;}
    public static float ReadonlyCopy(float x,float y){var holder=new VectorValueHolder(3.0f,4.0f);holder.fixedValue.Set(x,y);return holder.fixedValue.x;}
    public static float ReferenceField(float x,float y){var holder=new VectorValueHolder(3.0f,4.0f);holder.value.Set(x,y);return holder.value.x;}
    public static float PropertyCopy(float x,float y){var holder=new VectorValueHolder(3.0f,4.0f);holder.Value.Set(x,y);return holder.value.x;}
    public static float StableInteriorAddress(){current=new Vector2[1];var original=current;current[0].Set(Swap(),2.0f);return original[0].x+current[0].x;}
}
public sealed class VectorValueHolder {
    public Vector2 value;
    public readonly Vector2 fixedValue;
    public VectorValueHolder(float x,float y){value=new Vector2(x,y);fixedValue=value;}
    public Vector2 Value {get{return value;}}
}
}
