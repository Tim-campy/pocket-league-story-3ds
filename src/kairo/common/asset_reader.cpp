#include "asset_reader.hpp"
#include "managed_encoding.hpp"
namespace pls::kairo {
namespace {
std::string ascii_resource_key(const cs::String& name){
    if(name.is_null())throw cs::ArgumentNullException();
    auto result=name.utf8();
    for(auto& c:result)if(c>='A'&&c<='Z')c=static_cast<char>(c-'A'+'a');
    return result;
}
}
cs::String NativeTextAsset::get_text()const{
    // The filelist consumed by AssetReader.Exist is measured as ASCII/UTF-8.
    // General Unity TextAsset BOM/encoding conversion outside that corpus is
    // not inferred here: the generated binary decoder consumes get_bytes().
    return cs::RuntimeEncoding::get_UTF8()->GetString(bytes_);
}
cs::Ref<NativeTextAsset> load_text_asset(const cs::String& name){
    if(!assets::installed_catalog)throw cs::InvalidOperationException("Authenticated asset catalog is not installed");
    const auto key=ascii_resource_key(name);
    const assets::Entry* found=nullptr;
    for(const auto* entry:assets::installed_catalog->entries(assets::Kind::raw_resource)){
        if(ascii_resource_key(cs::String::from_utf8(entry->key))!=key)continue;
        if(found)throw cs::IOException("Ambiguous case-folded TextAsset resource identity");found=entry;
    }
    if(!found)return {};
    const auto raw=assets::installed_catalog->read(*found);
    if(raw.size()>static_cast<std::size_t>(std::numeric_limits<std::int32_t>::max()))throw cs::OutOfMemoryException();
    auto bytes=cs::Array<std::uint8_t>::make(static_cast<std::int32_t>(raw.size()));
    for(std::int32_t i=0;i<bytes.length();++i)bytes.at(i)=raw[static_cast<std::size_t>(i)];
    return cs::make_ref<NativeTextAsset>(std::move(bytes));
}
void unload_text_asset(const cs::Ref<cs::Object>& asset){
    if(!asset)throw cs::ArgumentNullException();
    if(!std::dynamic_pointer_cast<NativeTextAsset>(asset))throw cs::NotSupportedException("Only the AssetReader TextAsset resource leaf is supported");
}
}
