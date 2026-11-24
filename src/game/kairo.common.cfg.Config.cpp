// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/kairo.common.cfg.Config.hpp"
#include "kairo.common.cfg.Config.hpp"

namespace kl_cfg = pls::generated::kairo::common::cfg;

namespace pls::game {
namespace kairo::common::cfg::Config {

static pls::cs::Int32 checkCount__storage{};

static pls::cs::Int32 createImageArea__storage{};

static pls::cs::Int32 drawImageArea__storage{};

static pls::cs::Int32 drawImageCount__storage{};

static pls::cs::Int32 drawShapeCount__storage{};

static pls::cs::Int32 drawSourceImageArea__storage{};

static pls::cs::Int32 drawStringCount__storage{};
} // namespace kairo::common::cfg::Config

namespace kairo::common::cfg {

static pls::cs::GcRootProvider cs_init_e7d772862db62924_unit_roots =
    pls::cs::GcRootProvider([](const pls::cs::EdgeVisitor& visitor) -> void {
        pls::cs::trace_value(Config::checkCount__storage, visitor);
        pls::cs::trace_value(Config::createImageArea__storage, visitor);
        pls::cs::trace_value(Config::drawImageArea__storage, visitor);
        pls::cs::trace_value(Config::drawImageCount__storage, visitor);
        pls::cs::trace_value(Config::drawShapeCount__storage, visitor);
        pls::cs::trace_value(Config::drawSourceImageArea__storage, visitor);
        pls::cs::trace_value(Config::drawStringCount__storage, visitor);
    });
} // namespace kairo::common::cfg

namespace kairo::common::cfg::Config {

pls::cs::Int32& checkCount_() {
    kl_cfg::Config::ensure_initialized();
    return checkCount__storage;
}

pls::cs::Int32& createImageArea_() {
    kl_cfg::Config::ensure_initialized();
    return createImageArea__storage;
}

pls::cs::Int32& drawImageArea_() {
    kl_cfg::Config::ensure_initialized();
    return drawImageArea__storage;
}

pls::cs::Int32& drawImageCount_() {
    kl_cfg::Config::ensure_initialized();
    return drawImageCount__storage;
}

pls::cs::Int32& drawShapeCount_() {
    kl_cfg::Config::ensure_initialized();
    return drawShapeCount__storage;
}

pls::cs::Int32& drawSourceImageArea_() {
    kl_cfg::Config::ensure_initialized();
    return drawSourceImageArea__storage;
}

pls::cs::Int32& drawStringCount_() {
    kl_cfg::Config::ensure_initialized();
    return drawStringCount__storage;
}
} // namespace kairo::common::cfg::Config
}
