// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui {

struct ResourceManager_JarCache {
    void trace_edges(const pls::cs::EdgeVisitor&) const;
    pls::cs::Int32 RsId{};
    pls::cs::Int32 RcId{};
    pls::cs::Ref<generated::kairo::unity::util::JarInflater> Jar{};

    static void ensure_initialized();

    static void create_init(ResourceManager_JarCache* self, pls::cs::Int32 rsId, pls::cs::Int32 rcId,
                            pls::cs::Ref<generated::kairo::unity::util::JarInflater> jar);

    static ResourceManager_JarCache create(pls::cs::Int32 rsId, pls::cs::Int32 rcId,
                                           pls::cs::Ref<generated::kairo::unity::util::JarInflater> jar);
};
} // namespace kairo::unity::ui
}
