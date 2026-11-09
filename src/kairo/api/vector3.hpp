#pragma once
namespace pls::kairo {
// Scalar value storage; no normalization or vector operators are admitted.
struct Vector3 {float x{},y{},z{};Vector3()=default;Vector3(float a,float b):x(a),y(b){}Vector3(float a,float b,float c):x(a),y(b),z(c){}};
static_assert(sizeof(float)==4&&sizeof(Vector3)==12,"Vector3 mouse coordinates require three Single fields");
}
