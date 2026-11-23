// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.util.IVector.hpp"
#include "java.util.Vector.hpp"
#include "java.util.Vector_1.hpp"
#include "java.util.Vector_1_templates.hpp"
namespace pls::generated {
namespace java::util {

void Vector::trace_edges(const pls::cs::EdgeVisitor&visitor)const {Vector_2<pls::cs::Ref<pls::cs::Object>>::trace_edges(visitor);}

bool Vector::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {return Vector::Equals(pls::cs::static_pointer_cast<Vector>(shared_from_this()),obj);}

static PLS_NOINLINE void cs_init_f8b20a4d1d9d695f_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("java.util.Vector",flag,[](){

});}

void Vector::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_f8b20a4d1d9d695f_slow(flag);}

void Vector::create_init(pls::cs::Ref<Vector> self) {
Vector::ensure_initialized();
util::Vector_2_create_init(pls::cs::static_pointer_cast<Vector_2<pls::cs::Ref<pls::cs::Object>>>(self));
PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector.#ctor",kairo);
{

}

}

// M:java.util.Vector.#ctor
pls::cs::Ref<Vector> Vector::create() {
Vector::ensure_initialized();
 auto self = pls::cs::make_ref<Vector>(); Vector::create_init(self); return self; 
}

// M:java.util.Vector.Equals(System.Object)
bool Vector::Equals(pls::cs::Ref<Vector> self,pls::cs::Ref<pls::cs::Object> obj) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector.Equals(System.Object)",kairo);
{
if (is_instance<pls::cs::Ref<IVector>>(pls::cs::box(obj))) {
{auto cs_left_5 = pls::cs::box(self->list_); auto cs_right_5 = pls::cs::box(require((pls::cs::unbox<pls::cs::Ref<IVector>>(obj)))->get_List());
return cs_left_5 == cs_right_5;}
}
return util::Vector_2_Equals(pls::cs::static_pointer_cast<Vector_2<pls::cs::Ref<pls::cs::Object>>>(self), obj);
}

}
} // namespace java::util
}
