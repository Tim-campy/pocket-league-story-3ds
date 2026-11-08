#pragma once
#include "semantic_runtime.hpp"
#include "asset_catalog.hpp"
namespace pls::kairo {
// CPU replacement for the TextAsset leaves reached only from AssetReader.
// Payloads are the original, still encoded resource bytes in private kind8;
// the generated AssetReader.GetData retains its own conditional decoder.
class NativeTextAsset : public cs::Object {
    cs::Array<std::uint8_t> bytes_;
public:
    explicit NativeTextAsset(cs::Array<std::uint8_t> bytes):bytes_(std::move(bytes)){}
    cs::Array<std::uint8_t> get_bytes()const{return bytes_.clone();}
    cs::String get_text()const;
    std::string managed_type_name()const override{return "UnityEngine.TextAsset";}
    void trace_edges(const cs::EdgeVisitor& v)const override{cs::trace_value(bytes_,v);}
    void release_edges()override{cs::release_value(bytes_);}
};
cs::Ref<NativeTextAsset> load_text_asset(const cs::String& unity_resource_name);
// The source has already copied bytes/text before this leaf. Native ownership
// is reference-counted; there is no Unity engine object or global resource cache.
void unload_text_asset(const cs::Ref<cs::Object>& asset);
}
