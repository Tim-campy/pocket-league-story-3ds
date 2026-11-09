#pragma once
#include "vector3.hpp"
namespace pls::kairo {
// Reimplemented scalar value API, not an engine or a retained Unity object.
// Column-major declaration order matches the measured metadata field layout.
struct Matrix4x4 {
    float m00{},m10{},m20{},m30{},m01{},m11{},m21{},m31{};
    float m02{},m12{},m22{},m32{},m03{},m13{},m23{},m33{};
    static Matrix4x4 identity(){Matrix4x4 value;value.m00=value.m11=value.m22=value.m33=1.0f;return value;}
    Vector3 MultiplyPoint(Vector3 p)const{
        Vector3 value;
        value.x=m00*p.x+m01*p.y+m02*p.z+m03;
        value.y=m10*p.x+m11*p.y+m12*p.z+m13;
        value.z=m20*p.x+m21*p.y+m22*p.z+m23;
        float w=m30*p.x+m31*p.y+m32*p.z+m33;w=1.0f/w;
        value.x*=w;value.y*=w;value.z*=w;return value;
    }
};
static_assert(sizeof(Matrix4x4)==64);
}
