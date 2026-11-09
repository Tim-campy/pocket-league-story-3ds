#pragma once
#include "semantic_runtime.hpp"
namespace synthetic_image_metadata {
struct Image:pls::cs::Object {
    pls::cs::String display_name;
    inline static pls::cs::Array<std::int32_t> area=pls::cs::Array<std::int32_t>::make(2),palette=pls::cs::Array<std::int32_t>::make(2);
    void trace_edges(const pls::cs::EdgeVisitor& visitor)const override{pls::cs::trace_value(display_name,visitor);}
    void release_edges()override{pls::cs::release_value(display_name);}
};
}
