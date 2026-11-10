#include "asset_catalog.hpp"
#include "sha256.hpp"
#include "semantic_runtime.hpp"
#include <fstream>
#include <limits>
#if defined(__3DS__)
#include <sys/iosupport.h>
#include <cstring>
#endif
#if defined(__3DS__) && defined(PLS_NULL_BACKEND)
#include <cstdio>
#endif
namespace pls::assets {
namespace {
constexpr char expected[]="d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8";
std::uint64_t number(std::istream& f,int bytes){std::uint64_t n{};for(int i=0;i<bytes;++i){int c=f.get();if(c<0)throw cs::EndOfStreamException("Truncated private asset index");n|=std::uint64_t(c)<<(i*8);}return n;}
std::string text(std::istream& f,std::size_t n){if(n>1048576)throw cs::IOException("Asset index field too long");std::string s(n,'\0');if(n&&!f.read(s.data(),std::streamsize(n)))throw cs::EndOfStreamException();return s;}
std::string field(std::istream& f){return text(f,std::size_t(number(f,4)));}
std::filesystem::path canonical_asset_path(const std::filesystem::path& root,const std::filesystem::path& relative){
#if defined(__3DS__)
    // libctru's SD archive has no symlinks: stat and lstat use archive_stat.
    // For normal paths one final status query checks existence without opening
    // every ancestor. Preserve canonical's behavior for all other cases/devices.
    bool normal=!relative.empty()&&!relative.filename().empty()&&relative==relative.lexically_normal();
    for(const auto& part:relative)
        if(part=="."||part==".."||part.native().find(':')!=std::string::npos||part.native().find('\\')!=std::string::npos)normal=false;
    auto candidate=root/relative;
    const auto* device=GetDeviceOpTab(candidate.c_str());
    if(normal&&device&&device->name&&std::strcmp(device->name,"sdmc")==0){
        std::error_code error;
        if(std::filesystem::exists(candidate,error)&&!error)return candidate;
    }
#endif
    return std::filesystem::canonical(root/relative);
}
}
Catalog::Catalog(std::filesystem::path root):root_(std::filesystem::canonical(root)){
    std::ifstream file(root_/"converted/catalog.idx",std::ios::binary);
    if(!file)throw cs::IOException("Run the authenticated local asset catalog pipeline first");
    if(text(file,8)!=std::string("PLSASV1\0",8)||text(file,64)!=expected)throw cs::IOException("Asset index source/version differs");
    auto count=number(file,4);if(count>100000)throw cs::IOException("Asset index count outside supported extent");
    for(std::uint64_t i=0;i<count;++i){
#if defined(__3DS__) && defined(PLS_NULL_BACKEND)
        if(i%500==0){std::fprintf(stderr,"PLS_NULL_CATALOG=%llu/%llu\n",static_cast<unsigned long long>(i),static_cast<unsigned long long>(count));std::fflush(stderr);}
#endif
        auto kind=number(file,1);if(kind<1||kind>8)throw cs::IOException("Unknown asset kind");
        Entry e;e.kind=Kind(kind);e.key=field(file);e.path=field(file);e.size=number(file,8);e.width=std::uint32_t(number(file,4));e.height=std::uint32_t(number(file,4));
        auto raw=text(file,32);constexpr char hex[]="0123456789abcdef";for(unsigned char c:raw){e.sha256+=hex[c>>4];e.sha256+=hex[c&15];}
        if(!entries_.emplace(std::make_pair(e.kind,e.key),e).second)throw cs::IOException("Duplicate asset identity");
        path(e);
    }
    if(file.peek()!=std::char_traits<char>::eof())throw cs::IOException("Unexpected asset index suffix");
}
const Entry* Catalog::find(Kind kind,const std::string& key)const {auto i=entries_.find({kind,key});return i==entries_.end()?nullptr:&i->second;}
std::vector<const Entry*> Catalog::entries(Kind kind)const{std::vector<const Entry*> r;for(const auto& i:entries_)if(i.first.first==kind)r.push_back(&i.second);return r;}
std::filesystem::path Catalog::path(const Entry& entry)const{
    auto relative=std::filesystem::u8path(entry.path);
    if(relative.is_absolute()||relative.has_root_path())throw cs::IOException("Absolute asset path refused");
    auto result=canonical_asset_path(root_,relative);auto under=result.lexically_relative(root_);
    if(under.empty()||*under.begin()=="..")throw cs::IOException("Asset path escapes local root");return result;
}
void Catalog::verify(const Entry& entry)const{
    auto target=path(entry);if(std::filesystem::file_size(target)!=entry.size)throw cs::IOException("Asset extent differs");
    std::ifstream file(target,std::ios::binary);if(!file)throw cs::IOException("Asset cannot be opened");
    // The ARM main/worker stacks default to 32 KiB. Keep the streaming
    // chunk and all integrity checks unchanged without a 64 KiB stack frame.
    Sha256 hash;std::vector<std::uint8_t> block(65536);
    while(file){file.read(reinterpret_cast<char*>(block.data()),std::streamsize(block.size()));hash.update(block.data(),std::size_t(file.gcount()));}
    if(!file.eof()||hash.finish()!=entry.sha256)throw cs::IOException("Asset payload digest differs");
}
std::vector<std::uint8_t> Catalog::read(const Entry& entry)const{
    if(entry.size>std::numeric_limits<std::size_t>::max()||entry.size>std::uint64_t(std::numeric_limits<std::streamsize>::max()))throw cs::IOException("Asset too large for this host");
    std::ifstream file(path(entry),std::ios::binary);if(!file)throw cs::IOException("Asset cannot be opened");
    std::vector<std::uint8_t> data(std::size_t(entry.size));if(entry.size&&!file.read(reinterpret_cast<char*>(data.data()),std::streamsize(data.size())))throw cs::EndOfStreamException();
    if(file.peek()!=std::char_traits<char>::eof()||sha256(data)!=entry.sha256)throw cs::IOException("Asset digest differs");return data;
}
std::uint64_t Catalog::total_bytes(Kind kind)const{std::uint64_t n{};for(const auto& i:entries_)if(i.second.kind==kind)n+=i.second.size;return n;}
}
