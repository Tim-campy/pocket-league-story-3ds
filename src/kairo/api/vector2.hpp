#pragma once
namespace pls::kairo {
// Value storage for the two scalar field stores proved in the authenticated
// Android UnityEngine.Vector2 constructor and Set. No Unity runtime is linked.
struct Vector2 {
    float x{},y{};
    Vector2()=default;
    Vector2(float first,float second):x(first),y(second){}
    void Set(float first,float second){x=first;y=second;}
};
static_assert(sizeof(float)==4,"C# Single requires IEEE-width storage");
}
