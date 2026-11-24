// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "kairo.unity.ui.ResourceManager.JarCache.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::ui {

void ResourceManager_JarCache::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::trace_value(Jar, visitor);
}

static PLS_NOINLINE void cs_init_bf56843843fb840d_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.ui.ResourceManager.JarCache", flag, []() {

    });
}

void ResourceManager_JarCache::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_bf56843843fb840d_slow(flag);
}

void ResourceManager_JarCache::create_init(ResourceManager_JarCache* self, pls::cs::Int32 rsId,
                                           pls::cs::Int32 rcId, pls::cs::Ref<kl_util::JarInflater> jar) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.ResourceManager.JarCache.#ctor(System.Int32,System.Int32,kairo.unity.util.JarInflater)",
        kairo);
    {
        {
            auto cs_target = self;
            pls::cs::Int32 cs_value = rsId;
            require(cs_target)->RsId = cs_value;
        }
        {
            auto cs_target = self;
            pls::cs::Int32 cs_value = rcId;
            require(cs_target)->RcId = cs_value;
        }
        {
            auto cs_target = self;
            auto cs_value = jar;
            require(cs_target)->Jar = cs_value;
        }
    }
}

// M:kairo.unity.ui.ResourceManager.JarCache.#ctor(System.Int32,System.Int32,kairo.unity.util.JarInflater)
ResourceManager_JarCache ResourceManager_JarCache::create(pls::cs::Int32 rsId, pls::cs::Int32 rcId,
                                                          pls::cs::Ref<kl_util::JarInflater> jar) {
    ResourceManager_JarCache::ensure_initialized();
    ResourceManager_JarCache self{};
    ResourceManager_JarCache::create_init(&self, rsId, rcId, jar);
    return self;
}
} // namespace kairo::unity::ui
}
