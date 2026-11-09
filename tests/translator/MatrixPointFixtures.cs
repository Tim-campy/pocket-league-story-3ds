using UnityEngine;
public static class MatrixPointFixtures {
    public static float Identity(int seed){var p=Matrix4x4.identity.MultiplyPoint(new Vector3(seed,seed+1));return p.x+p.y+p.z;}
    public static float Projection(int seed){var m=Matrix4x4.identity;m.m00=2;m.m01=3;m.m02=4;m.m03=5;m.m10=7;m.m11=11;m.m12=13;m.m13=17;m.m20=19;m.m21=23;m.m22=29;m.m23=31;m.m30=0.5f;m.m31=0.25f;m.m32=0.125f;m.m33=seed;var p=m.MultiplyPoint(new Vector3(seed,2,3));return p.x+p.y+p.z;}
    public static float ZeroW(int seed){var m=new Matrix4x4();m.m00=seed;var p=m.MultiplyPoint(new Vector3(0,0,0));return p.x;}
}
