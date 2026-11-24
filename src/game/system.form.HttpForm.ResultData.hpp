// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::form {

struct HttpForm_ResultData : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("system.form.HttpForm+ResultData", HttpForm_ResultData, pls::cs::Object)
    pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<pls::cs::Object>> data_{};
    pls::cs::Ref<pls::cs::ExceptionObject> m_Exception_k__BackingField{};
    pls::cs::String m_Error_k__BackingField{};
    bool m_Succeed_k__BackingField{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<HttpForm_ResultData> self);

    static pls::cs::Ref<HttpForm_ResultData> create();

    static pls::cs::Ref<pls::cs::EnumeratorObject>
    System_Collections_IEnumerable_GetEnumerator(pls::cs::Ref<HttpForm_ResultData> self);

    static pls::cs::Ref<pls::cs::ExceptionObject> get_Exception(pls::cs::Ref<HttpForm_ResultData> self);

    static void set_Exception(pls::cs::Ref<HttpForm_ResultData> self,
                              pls::cs::Ref<pls::cs::ExceptionObject> value);

    static pls::cs::String get_Error(pls::cs::Ref<HttpForm_ResultData> self);

    static void set_Error(pls::cs::Ref<HttpForm_ResultData> self, pls::cs::String value);

    static bool get_Succeed(pls::cs::Ref<HttpForm_ResultData> self);

    static void set_Succeed(pls::cs::Ref<HttpForm_ResultData> self, bool value);

    void Add(pls::cs::String key, pls::cs::Ref<pls::cs::Object> data);

    pls::cs::Ref<pls::cs::Object> Get(pls::cs::String key);

    bool HasKey(pls::cs::String key);
};
} // namespace system::form
}
