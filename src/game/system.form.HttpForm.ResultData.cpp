// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "system.form.HttpForm.ResultData.hpp"

namespace pls::game {
namespace system::form {

void HttpForm_ResultData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(data_, visitor);
    pls::cs::trace_value(m_Exception_k__BackingField, visitor);
    pls::cs::trace_value(m_Error_k__BackingField, visitor);
}

static PLS_NOINLINE void cs_init_408ac5c74e5f3515_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("system.form.HttpForm.ResultData", flag, []() {

    });
}

void HttpForm_ResultData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_408ac5c74e5f3515_slow(flag);
}

void HttpForm_ResultData::create_init(pls::cs::Ref<HttpForm_ResultData> self) {
    HttpForm_ResultData::ensure_initialized();
    self->data_ = pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<pls::cs::Object>>::make();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.HttpForm.ResultData.#ctor", game);
    {
    }
}

// M:system.form.HttpForm.ResultData.#ctor
pls::cs::Ref<HttpForm_ResultData> HttpForm_ResultData::create() {
    HttpForm_ResultData::ensure_initialized();
    auto self = pls::cs::make_ref<HttpForm_ResultData>();
    HttpForm_ResultData::create_init(self);
    return self;
}

// M:system.form.HttpForm.ResultData.System#Collections#IEnumerable#GetEnumerator
pls::cs::Ref<pls::cs::EnumeratorObject>
HttpForm_ResultData::System_Collections_IEnumerable_GetEnumerator(pls::cs::Ref<HttpForm_ResultData> self) {
    require(self);
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.form.HttpForm.ResultData.System#Collections#IEnumerable#GetEnumerator", game);
    {
        return PLS_API(([&]() {
            auto cs_dictionary = self->data_;
            return pls::cs::box_enumerator<pls::cs::String, pls::cs::Ref<pls::cs::Object>>(
                cs_dictionary.GetEnumerator());
        }()));
    }
}

// M:system.form.HttpForm.ResultData.get_Exception
pls::cs::Ref<pls::cs::ExceptionObject>
HttpForm_ResultData::get_Exception(pls::cs::Ref<HttpForm_ResultData> self) {
    require(self);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.HttpForm.ResultData.get_Exception", game);
    {
        return self->m_Exception_k__BackingField;
    }
}

// M:system.form.HttpForm.ResultData.set_Exception(System.Exception)
void HttpForm_ResultData::set_Exception(pls::cs::Ref<HttpForm_ResultData> self,
                                        pls::cs::Ref<pls::cs::ExceptionObject> value) {
    require(self);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.HttpForm.ResultData.set_Exception(System.Exception)",
                     game);
    {
        self->m_Exception_k__BackingField = value;
    }
}

// M:system.form.HttpForm.ResultData.get_Error
pls::cs::String HttpForm_ResultData::get_Error(pls::cs::Ref<HttpForm_ResultData> self) {
    require(self);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.HttpForm.ResultData.get_Error", game);
    {
        return self->m_Error_k__BackingField;
    }
}

// M:system.form.HttpForm.ResultData.set_Error(System.String)
void HttpForm_ResultData::set_Error(pls::cs::Ref<HttpForm_ResultData> self, pls::cs::String value) {
    require(self);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.HttpForm.ResultData.set_Error(System.String)", game);
    {
        self->m_Error_k__BackingField = value;
    }
}

// M:system.form.HttpForm.ResultData.get_Succeed
bool HttpForm_ResultData::get_Succeed(pls::cs::Ref<HttpForm_ResultData> self) {
    require(self);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.HttpForm.ResultData.get_Succeed", game);
    {
        return self->m_Succeed_k__BackingField;
    }
}

// M:system.form.HttpForm.ResultData.set_Succeed(System.Boolean)
void HttpForm_ResultData::set_Succeed(pls::cs::Ref<HttpForm_ResultData> self, bool value) {
    require(self);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.HttpForm.ResultData.set_Succeed(System.Boolean)",
                     game);
    {
        self->m_Succeed_k__BackingField = value;
    }
}

// M:system.form.HttpForm.ResultData.Add(System.String,System.Object)
void HttpForm_ResultData::Add(pls::cs::String key, pls::cs::Ref<pls::cs::Object> data) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.HttpForm.ResultData.Add(System.String,System.Object)",
                     game);
    {
        {
            auto cs_target = data_;
            auto cs_index = key;
            auto cs_value = data;
            cs_target.set_Item(cs_index, cs_value);
        }
    }
}

// M:system.form.HttpForm.ResultData.Get(System.String)
pls::cs::Ref<pls::cs::Object> HttpForm_ResultData::Get(pls::cs::String key) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.HttpForm.ResultData.Get(System.String)", game);
    {
        pls::cs::Ref<pls::cs::Object> value = pls::cs::Ref<pls::cs::Object>{};
        if (PLS_API(([&]() {
                auto cs_dictionary = data_;
                auto cs_key = key;
                return cs_dictionary.TryGetValue(cs_key, value);
            }()))) {
            return value;
        }
        return pls::cs::Ref<pls::cs::Object>{};
    }
}

// M:system.form.HttpForm.ResultData.HasKey(System.String)
bool HttpForm_ResultData::HasKey(pls::cs::String key) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.HttpForm.ResultData.HasKey(System.String)", game);
    {
        return PLS_API(data_.ContainsKey(key));
    }
}
} // namespace system::form
}
