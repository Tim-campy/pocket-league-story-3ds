#pragma once
namespace pls::kairo {
// Value storage for the scalar mouse-position snapshot only. No Unity math,
// normalization, operators or additional Vector3 methods are implemented here.
struct Vector3 {float x{},y{},z{};};
static_assert(sizeof(float)==4&&sizeof(Vector3)==12,"Vector3 mouse coordinates require three Single fields");
}
