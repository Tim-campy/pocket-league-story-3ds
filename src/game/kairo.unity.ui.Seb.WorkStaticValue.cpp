// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.ui.Seb.WorkStaticValue.hpp"
using ShortArray = pls::cs::Array<std::int16_t>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;
using IntArray3 = pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>;

namespace pls::game {
namespace kairo::unity::ui {

void Seb_WorkStaticValue::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(works_, visitor);
    pls::cs::trace_value(result_, visitor);
    pls::cs::trace_value(getBoundingRectI_result, visitor);
    pls::cs::trace_value(getBoundingRect_result, visitor);
    pls::cs::trace_value(getSprite_sp1, visitor);
    pls::cs::trace_value(getSprite_sp2, visitor);
}

static PLS_NOINLINE void cs_init_672083a5397f2913_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.ui.Seb.WorkStaticValue", flag, []() {

    });
}

void Seb_WorkStaticValue::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_672083a5397f2913_slow(flag);
}

void Seb_WorkStaticValue::create_init(pls::cs::Ref<Seb_WorkStaticValue> self) {
    Seb_WorkStaticValue::ensure_initialized();
    self->works_ = IntArray3::from({IntArray2::make(0)});
    self->result_ = IntArray3::make(0);
    self->getBoundingRectI_result = IntArray::make(4);
    self->getBoundingRect_result = ShortArray::make(4);
    self->getSprite_sp1 = IntArray::make(12);
    self->getSprite_sp2 = IntArray::make(12);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Seb.WorkStaticValue.#ctor", kairo);
    {
    }
}

// M:kairo.unity.ui.Seb.WorkStaticValue.#ctor
pls::cs::Ref<Seb_WorkStaticValue> Seb_WorkStaticValue::create() {
    Seb_WorkStaticValue::ensure_initialized();
    auto self = pls::cs::make_ref<Seb_WorkStaticValue>();
    Seb_WorkStaticValue::create_init(self);
    return self;
}
} // namespace kairo::unity::ui
}
