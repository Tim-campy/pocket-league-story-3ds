// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.ui.Matrix.hpp"
#include "kairo.unity.ui.Pictograph.hpp"
#include "kairo.unity.ui.Seb.hpp"

namespace pls::game {
namespace kairo::unity::ui {

void Pictograph::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(key_, visitor);
    pls::cs::trace_value(m_Seb_k__BackingField, visitor);
    pls::cs::trace_value(m_Transform_k__BackingField, visitor);
}

static PLS_NOINLINE void cs_init_ec6b992b38927bb3_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.ui.Pictograph", flag, []() {

    });
}

void Pictograph::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_ec6b992b38927bb3_slow(flag);
}

// M:kairo.unity.ui.Pictograph.get_Seb
pls::cs::Ref<Seb> Pictograph::get_Seb(pls::cs::Ref<Pictograph> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Pictograph.get_Seb", kairo);
    {
        return self->m_Seb_k__BackingField;
    }
}

// M:kairo.unity.ui.Pictograph.get_Frame
pls::cs::Int32 Pictograph::get_Frame(pls::cs::Ref<Pictograph> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Pictograph.get_Frame", kairo);
    {
        return self->m_Frame_k__BackingField;
    }
}

// M:kairo.unity.ui.Pictograph.get_Wait
pls::cs::Int32 Pictograph::get_Wait(pls::cs::Ref<Pictograph> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Pictograph.get_Wait", kairo);
    {
        return self->m_Wait_k__BackingField;
    }
}

// M:kairo.unity.ui.Pictograph.get_X
pls::cs::Int32 Pictograph::get_X(pls::cs::Ref<Pictograph> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Pictograph.get_X", kairo);
    {
        return self->m_X_k__BackingField;
    }
}

// M:kairo.unity.ui.Pictograph.get_Y
pls::cs::Int32 Pictograph::get_Y(pls::cs::Ref<Pictograph> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Pictograph.get_Y", kairo);
    {
        return self->m_Y_k__BackingField;
    }
}

// M:kairo.unity.ui.Pictograph.get_Margin
pls::cs::Int32 Pictograph::get_Margin(pls::cs::Ref<Pictograph> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Pictograph.get_Margin", kairo);
    {
        return self->m_Margin_k__BackingField;
    }
}

// M:kairo.unity.ui.Pictograph.get_Transform
pls::cs::Ref<Matrix> Pictograph::get_Transform(pls::cs::Ref<Pictograph> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Pictograph.get_Transform", kairo);
    {
        return self->m_Transform_k__BackingField;
    }
}
} // namespace kairo::unity::ui
}
