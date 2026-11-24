// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/kairo.unity.util.Language.LangPackRecord.hpp"
#include "generated/kairo.unity.util.Language.RecordPosition.hpp"
#include "kairo.unity.util.Language.RecordPosition.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::util::Language_RecordPosition {

static PLS_NOINLINE void cs_init_acb158b492b43017_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.Language.RecordPosition", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_acb158b492b43017_slow(flag);
}

void create_init(kl_util::Language_RecordPosition* self, pls::cs::Int32 line, pls::cs::Int32 segment,
                 pls::cs::Ref<kl_util::Language_LangPackRecord> record) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.Language.RecordPosition.#ctor(System.Int32,System.Int32,kairo.unity.util.Language.LangPackRecord)",
        kairo);
    {
        {
            auto cs_target = self;
            pls::cs::Int32 cs_value = line;
            require(cs_target)->Line = cs_value;
        }
        {
            auto cs_target = self;
            pls::cs::Int32 cs_value = segment;
            require(cs_target)->Segment = cs_value;
        }
        {
            auto cs_target = self;
            auto cs_value = record;
            require(cs_target)->Record = cs_value;
        }
    }
}

// M:kairo.unity.util.Language.RecordPosition.#ctor(System.Int32,System.Int32,kairo.unity.util.Language.LangPackRecord)
kl_util::Language_RecordPosition create(pls::cs::Int32 line, pls::cs::Int32 segment,
                                        pls::cs::Ref<kl_util::Language_LangPackRecord> record) {
    Language_RecordPosition::ensure_initialized();
    kl_util::Language_RecordPosition self{};
    Language_RecordPosition::create_init(&self, line, segment, record);
    return self;
}
} // namespace kairo::unity::util::Language_RecordPosition
}
