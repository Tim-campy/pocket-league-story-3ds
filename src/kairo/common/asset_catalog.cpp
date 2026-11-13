#include "asset_catalog.hpp"
#include "sha256.hpp"
#include "semantic_runtime.hpp"
#include "resource_load_trace.hpp"
#include <fstream>
#include <thread>
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
std::filesystem::path canonical_asset_path(const std::filesystem::path& root,const std::filesystem::path& relative,[[maybe_unused]]bool prepared){
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
        // SD preparation validated every payload and libctru has no symlinks.
        // Opening still checks existence and read() still checks the extent.
        if(prepared)return candidate;
        std::error_code error;
        if(std::filesystem::exists(candidate,error)&&!error)return candidate;
    }
#endif
    return std::filesystem::canonical(root/relative);
}
}
Catalog::Catalog(std::filesystem::path root,ReadValidation validation):root_(std::filesystem::canonical(root)){
    if(validation==ReadValidation::PreparedCatalog){
        // Windows preparation may produce CRLF. Read bytes on every host so
        // tests exercise the same line-ending handling as libctru/newlib.
        std::ifstream marker(root_/"converted/prevalidated.sha256",std::ios::binary);
        std::string version,source,digest,suffix;
        const auto line=[&](std::string& value){
            if(!std::getline(marker,value))return false;
            if(!value.empty()&&value.back()=='\r')value.pop_back();
            return true;
        };
        if(!line(version)||!line(source)||!line(digest)||std::getline(marker,suffix)||version!="PLS-PREVALIDATED-1"||source!=expected)
            throw cs::IOException("Prepared catalog proof missing or malformed");
        std::ifstream index(root_/"converted/catalog.idx",std::ios::binary);
        if(!index)throw cs::IOException("Prepared catalog missing");
        Sha256 hash;std::vector<std::uint8_t> chunk(65536);
        while(index){index.read(reinterpret_cast<char*>(chunk.data()),std::streamsize(chunk.size()));hash.update(chunk.data(),std::size_t(index.gcount()));}
        if(!index.eof()||hash.finish()!=digest)throw cs::IOException("Prepared catalog proof differs");
        prepared_=true;
    }
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
    if(prepared_)open_pack();
}
void Catalog::open_pack(){
    const auto index_path=root_/"converted/catalog.pak.idx";
    std::error_code error;if(!std::filesystem::exists(index_path,error)||error)return;
    std::ifstream index(index_path,std::ios::binary);if(!index)throw cs::IOException("Asset pack index cannot be opened");
    if(text(index,8)!=std::string("PLSPAK1\0",8)||text(index,64)!=expected)throw cs::IOException("Asset pack source/version differs");
    const auto count=number(index,4);if(count>100000)throw cs::IOException("Asset pack count outside supported extent");
    std::map<std::string,std::pair<Packed,std::string>> records;
    std::uint64_t end=0;
    for(std::uint64_t i=0;i<count;++i){
        auto path=field(index);Packed packed{number(index,8),number(index,8)};
        auto raw=text(index,32);constexpr char hex[]="0123456789abcdef";std::string digest;for(unsigned char c:raw){digest+=hex[c>>4];digest+=hex[c&15];}
        if(packed.offset!=end)throw cs::IOException("Asset pack records are not contiguous");
        end+=packed.size;
        if(!records.emplace(path,std::make_pair(packed,digest)).second)throw cs::IOException("Duplicate asset pack path");
    }
    if(index.peek()!=std::char_traits<char>::eof())throw cs::IOException("Unexpected asset pack index suffix");
    for(const auto& item:entries_){
        const auto found=records.find(item.second.path);if(found==records.end())continue;
        if(found->second.first.size!=item.second.size||found->second.second!=item.second.sha256)throw cs::IOException("Asset pack record differs from catalog");
        packed_[item.second.path]=found->second.first;
    }
    const auto pack_path=root_/"converted/catalog.pak";
    if(std::filesystem::file_size(pack_path)!=end)throw cs::IOException("Asset pack extent differs");
    std::FILE* stream=nullptr;
#if defined(_MSC_VER)
    if(_wfopen_s(&stream,pack_path.c_str(),L"rb")!=0)stream=nullptr;
#else
    stream=std::fopen(pack_path.string().c_str(),"rb");
#endif
    if(!stream)throw cs::IOException("Asset pack cannot be opened");
    pack_.reset(stream,[](std::FILE* f){std::fclose(f);});
}
const Entry* Catalog::find(Kind kind,const std::string& key)const {auto i=entries_.find({kind,key});return i==entries_.end()?nullptr:&i->second;}
const Entry* Catalog::unique(Kind kind)const {
    auto first=entries_.lower_bound({kind,{}});
    if(first==entries_.end()||first->first.first!=kind)return nullptr;
    auto second=std::next(first);
    return second==entries_.end()||second->first.first!=kind?&first->second:nullptr;
}
std::vector<const Entry*> Catalog::entries(Kind kind)const{std::vector<const Entry*> r;for(const auto& i:entries_)if(i.first.first==kind)r.push_back(&i.second);return r;}
std::filesystem::path Catalog::path(const Entry& entry)const{
    auto relative=std::filesystem::u8path(entry.path);
    if(relative.is_absolute()||relative.has_root_path())throw cs::IOException("Absolute asset path refused");
    auto result=canonical_asset_path(root_,relative,prepared_);auto under=result.lexically_relative(root_);
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
std::filesystem::path Catalog::prepare_stream(const Entry& entry)const{
    {
        std::lock_guard<std::mutex> lock(*retain_mutex_);
        if(retained_stream_entry_==&entry){++retention_hits_;retained_stream_age_=0;return retained_stream_;}
    }
    auto result=prepare_stream_uncached(entry);
    std::lock_guard<std::mutex> lock(*retain_mutex_);
    retained_stream_entry_=&entry;retained_stream_=result;retained_stream_age_=0;
    return result;
}
std::filesystem::path Catalog::prepare_stream_uncached(const Entry& entry)const{
    if(read_delay_.count())std::this_thread::sleep_for(read_delay_);
    diagnostic::ResourceTimer timing("stream-prepare-total",std::size_t(entry.size));
    if(!prepared_)verify(entry);
    timing.step(prepared_?"stream-hash-prevalidated":"stream-hash");
    auto target=path(entry);timing.step("stream-path");
    if(std::filesystem::file_size(target)!=entry.size)throw cs::IOException("Asset extent differs");
    timing.step("stream-extent");timing.finish();return target;
}
#if defined(PLS_GC_TRACE)
// Diagnostic build only: last catalog key read, reported with each collection.
extern "C" char pls_gc_trace_note[160];
extern "C" unsigned long pls_gc_trace_reads;
extern "C" char pls_gc_trace_ring[128][24];
#endif
void Catalog::release_retained()const{
    std::lock_guard<std::mutex> lock(*retain_mutex_);
    retained_entry_=nullptr;std::vector<std::uint8_t>().swap(retained_);
    retained_stream_entry_=nullptr;retained_stream_.clear();
}
void Catalog::age_retained()const{
    std::lock_guard<std::mutex> lock(*retain_mutex_);
    if(retained_entry_&&++retained_age_>=2){retained_entry_=nullptr;std::vector<std::uint8_t>().swap(retained_);}
    if(retained_stream_entry_&&++retained_stream_age_>=2){retained_stream_entry_=nullptr;retained_stream_.clear();}
}
std::uint64_t Catalog::retention_hits()const{std::lock_guard<std::mutex> lock(*retain_mutex_);return retention_hits_;}
std::vector<std::uint8_t> Catalog::read(const Entry& entry)const{
    {
        std::lock_guard<std::mutex> lock(*retain_mutex_);
        if(retained_entry_==&entry){++retention_hits_;retained_age_=0;return retained_;}
        // Another resource: drop the previous payload before reading, so
        // the peak never exceeds one retained payload.
        retained_entry_=nullptr;std::vector<std::uint8_t>().swap(retained_);
    }
    auto data=read_uncached(entry);
    std::lock_guard<std::mutex> lock(*retain_mutex_);
    retained_entry_=&entry;retained_=data;retained_age_=0;
    return data;
}
std::vector<std::uint8_t> Catalog::read_uncached(const Entry& entry)const{
    if(read_delay_.count())std::this_thread::sleep_for(read_delay_);
#if defined(PLS_GC_TRACE)
    {const auto n=entry.key.size()<sizeof(pls_gc_trace_note)-1?entry.key.size():sizeof(pls_gc_trace_note)-1;std::memcpy(pls_gc_trace_note,entry.key.data(),n);pls_gc_trace_note[n]=0;
     auto& slot=pls_gc_trace_ring[pls_gc_trace_reads%128];slot[0]=char('0'+int(entry.kind));slot[1]=':';
     const auto k=entry.key.size()<20?entry.key.size():std::size_t(20);std::memcpy(slot+2,entry.key.data(),k);slot[2+k]=0;++pls_gc_trace_reads;}
#endif
    diagnostic::ResourceTimer timing("catalog-total",std::size_t(entry.size));
    if(entry.size>std::numeric_limits<std::size_t>::max()||entry.size>std::uint64_t(std::numeric_limits<std::streamsize>::max()))throw cs::IOException("Asset too large for this host");
    if(pack_){
        const auto found=packed_.find(entry.path);
        if(found!=packed_.end()){
            timing.step("catalog-path");
            std::vector<std::uint8_t> data(std::size_t(entry.size));
            {
                std::lock_guard<std::mutex> lock(*pack_mutex_);
                if(found->second.offset>std::uint64_t(std::numeric_limits<long>::max())||std::fseek(pack_.get(),long(found->second.offset),SEEK_SET)!=0)throw cs::IOException("Asset pack seek failed");
                timing.step("catalog-open");
                if(entry.size&&std::fread(data.data(),1,data.size(),pack_.get())!=data.size())throw cs::EndOfStreamException();
            }
            timing.step("catalog-read");timing.step("catalog-end");timing.step("catalog-hash-prevalidated");timing.finish();
            return data;
        }
    }
    const auto target=path(entry);timing.step("catalog-path");
    std::ifstream file(target,std::ios::binary);if(!file)throw cs::IOException("Asset cannot be opened");timing.step("catalog-open");
    std::vector<std::uint8_t> data(std::size_t(entry.size));if(entry.size&&!file.read(reinterpret_cast<char*>(data.data()),std::streamsize(data.size())))throw cs::EndOfStreamException();
    timing.step("catalog-read");
    if(file.peek()!=std::char_traits<char>::eof())throw cs::IOException("Asset extent differs");timing.step("catalog-end");
    if(!prepared_&&sha256(data)!=entry.sha256)throw cs::IOException("Asset digest differs");timing.step(prepared_?"catalog-hash-prevalidated":"catalog-hash");timing.finish();return data;
}
std::uint64_t Catalog::total_bytes(Kind kind)const{std::uint64_t n{};for(const auto& i:entries_)if(i.second.kind==kind)n+=i.second.size;return n;}
}
