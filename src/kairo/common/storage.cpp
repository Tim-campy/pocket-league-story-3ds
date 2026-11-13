#include "storage.hpp"
#include "managed_collation.hpp"
#include <algorithm>
#include <array>
#include <atomic>
#include <fstream>
#include <limits>
#include <map>
#include <mutex>
#include <random>

namespace pls::kairo {
namespace {
using Bytes=cs::Array<std::uint8_t>;
struct Value {std::uint8_t type{};std::vector<std::uint8_t> bytes;};
struct Bag {std::map<std::u16string,Value> values;bool loaded{};};
struct State {
    std::filesystem::path root;
    const assets::Catalog* catalog{};
    bool heap_enabled=true,preference_mode=false;
    int application_type=2;
    std::vector<std::pair<std::u16string,Bytes>> heap;
    Bag typed,bytes;
    cs::Array<cs::String> resources;
    Bytes key=Bytes::make(1);
    cs::Ref<Storage> record_storage{};
};
State state;
cs::GcRootProvider storage_roots([](const cs::EdgeVisitor&visitor){
    for(const auto&entry:state.heap)cs::trace_value(entry.second,visitor);
    cs::trace_value(state.resources,visitor);cs::trace_value(state.key,visitor);cs::trace_value(state.record_storage,visitor);
});
std::recursive_mutex gate;
std::atomic<std::uint64_t> serial{0};
void configured(){if(state.root.empty())throw cs::InvalidOperationException("Storage host was not configured");}
std::u16string key(cs::String text){if(text.is_null())throw cs::ArgumentNullException();return text.code_units();}
Bytes from(const std::vector<std::uint8_t>& bytes) {
    if(bytes.size()>static_cast<std::size_t>(std::numeric_limits<std::int32_t>::max()))throw cs::OutOfMemoryException();
    auto result=Bytes::make(static_cast<std::int32_t>(bytes.size()));
    for(std::int32_t i=0;i<result.length();++i)result.at(i)=bytes[static_cast<std::size_t>(i)];return result;
}
std::vector<std::uint8_t> vector(Bytes bytes) {
    std::vector<std::uint8_t> result(static_cast<std::size_t>(bytes.length()));
    for(std::int32_t i=0;i<bytes.length();++i)result[static_cast<std::size_t>(i)]=bytes.at(i);return result;
}
// The 3DS SD archive (libctru sdmc devoptab) refuses to rename onto an
// existing file; Windows and the emulator replace it. A replacement then goes
// through "<name>.port-old". If the process stops between the two renames,
// the previous complete file is recovered before any read or existence test.
std::filesystem::path replaced_backup(const std::filesystem::path& path){auto backup=path;backup+=".port-old";return backup;}
const std::filesystem::path& recover_replaced(const std::filesystem::path& path){
    std::error_code error;
    if(!std::filesystem::exists(path,error)&&std::filesystem::exists(replaced_backup(path),error))std::filesystem::rename(replaced_backup(path),path);
    return path;
}
std::vector<std::uint8_t> read_file(const std::filesystem::path& path) {
    recover_replaced(path);
    std::ifstream input(path,std::ios::binary);if(!input)throw cs::IOException("Cannot read storage file");
    return {std::istreambuf_iterator<char>(input),std::istreambuf_iterator<char>()};
}
void atomic_write(const std::filesystem::path& path,const std::vector<std::uint8_t>& data) {
    const auto folder=path.parent_path();
    if(!folder.empty())std::filesystem::create_directories(folder);
    std::random_device random;
    const auto temporary=std::string(".port-tmp-")+std::to_string(random())+"-"+std::to_string(random())+"-"+std::to_string(++serial);
    const auto temp=folder/temporary;
    try {
        {std::ofstream output(temp,std::ios::binary|std::ios::trunc);if(!output)throw cs::IOException("Cannot create storage temporary file");
         if(!data.empty())output.write(reinterpret_cast<const char*>(data.data()),static_cast<std::streamsize>(data.size()));
         output.flush();if(!output)throw cs::IOException("Cannot flush storage temporary file");}
        recover_replaced(path);
        std::error_code direct;
        std::filesystem::rename(temp,path,direct);
        if(direct){
            // Only a regular file is replaced; a directory or other target keeps the original refusal.
            if(!std::filesystem::is_regular_file(path))throw std::filesystem::filesystem_error("cannot rename",temp,path,direct);
            const auto backup=replaced_backup(path);std::error_code ignored;
            std::filesystem::remove(backup,ignored);
            std::filesystem::rename(path,backup);
            try{std::filesystem::rename(temp,path);}catch(...){std::filesystem::rename(backup,path,ignored);throw;}
            std::filesystem::remove(backup,ignored);
        }
    }catch(...){std::error_code ignored;std::filesystem::remove(temp,ignored);throw;}
}
template<class F> auto filesystem_call(F&& call)->decltype(call()) {
    try{return call();}catch(const std::filesystem::filesystem_error& error){throw cs::IOException(error.what());}
}
void put32(std::vector<std::uint8_t>& data,std::uint32_t value){for(int i=0;i<4;++i)data.push_back(static_cast<std::uint8_t>(value>>(i*8)));}
std::uint32_t get32(const std::vector<std::uint8_t>& data,std::size_t& p) {
    if(p>data.size()||data.size()-p<4)throw IllegalFileException("Truncated portable preference container");
    std::uint32_t value=0;for(int i=0;i<4;++i)value|=static_cast<std::uint32_t>(data[p++])<<(i*8);return value;
}
std::filesystem::path bag_path(bool bytes){return state.root/(bytes?"byte-preferences.port":"player-preferences.port");}
Bag& bag(bool bytes) {
    configured();auto& result=bytes?state.bytes:state.typed;
    if(result.loaded)return result;
    const auto path=bag_path(bytes);
    std::map<std::u16string,Value> parsed;
    if(std::filesystem::exists(recover_replaced(path))) {
        const auto data=read_file(path);constexpr char magic[]="PLSPREF1";
        if(data.size()<12||!std::equal(data.begin(),data.begin()+8,magic))throw IllegalFileException("Unknown portable preference container");
        std::size_t p=8;const auto count=get32(data,p);
        for(std::uint32_t i=0;i<count;++i) {
            const auto units=get32(data,p);
            if(units>(data.size()-p)/2)throw IllegalFileException("Truncated preference key");
            std::u16string name;name.reserve(units);
            for(std::uint32_t j=0;j<units;++j){name.push_back(static_cast<char16_t>(data[p]|(static_cast<std::uint32_t>(data[p+1])<<8)));p+=2;}
            if(p>=data.size())throw IllegalFileException("Missing preference type");
            const auto type=data[p++];const auto size=get32(data,p);
            if(size>data.size()-p||parsed.count(name))throw IllegalFileException("Invalid preference entry");
            parsed.emplace(std::move(name),Value{type,{data.begin()+static_cast<std::ptrdiff_t>(p),data.begin()+static_cast<std::ptrdiff_t>(p+size)}});p+=size;
        }
        if(p!=data.size())throw IllegalFileException("Unrecognized preference tail");
    }
    result.values=std::move(parsed);result.loaded=true;return result;
}
void save_bag(bool bytes) {
    auto& source=bag(bytes);std::vector<std::uint8_t> output{'P','L','S','P','R','E','F','1'};
    put32(output,static_cast<std::uint32_t>(source.values.size()));
    for(const auto& entry:source.values) {
        put32(output,static_cast<std::uint32_t>(entry.first.size()));
        for(char16_t unit:entry.first){output.push_back(static_cast<std::uint8_t>(unit));output.push_back(static_cast<std::uint8_t>(unit>>8));}
        output.push_back(entry.second.type);put32(output,static_cast<std::uint32_t>(entry.second.bytes.size()));
        output.insert(output.end(),entry.second.bytes.begin(),entry.second.bytes.end());
    }
    filesystem_call([&]{atomic_write(bag_path(bytes),output);});
}
cs::String converted(cs::String filename) {
    if(filename.is_null())throw cs::NullReferenceException();
    auto name=key(filename);
    const auto replace=[&](const std::u16string& old,const std::u16string& replacement){std::size_t p=0;while((p=name.find(old,p))!=std::u16string::npos){name.replace(p,old.size(),replacement);p+=replacement.size();}};
    if(state.application_type==1||state.application_type==2||state.application_type==3)replace(u".gif",u".png");
    if(state.application_type==1)replace(u".mld",u".spf");
    else if(state.application_type==2||state.application_type==3)replace(u".mld",u".ogg");
    return cs::String(std::move(name));
}
// AssetReader._getTextAsset: Data/ prefix, converted/trimmed filename, then
// the same path without its last extension. Resource IDs are ASCII in this APK;
// Unity Resources resolves their case independently of exact JAR member names.
const assets::Entry* resource_file(cs::String filename) {
    if(!state.catalog)throw cs::InvalidOperationException("Asset catalog not installed");
    auto name=converted(filename).code_units();
    const auto whitespace=[](char16_t c){return (c>=9&&c<=13)||c==32||c==0x85||c==0xa0||c==0x1680||(c>=0x2000&&c<=0x200a)||c==0x2028||c==0x2029||c==0x202f||c==0x205f||c==0x3000;};
    const auto begin=std::find_if_not(name.begin(),name.end(),whitespace);
    const auto end=std::find_if_not(name.rbegin(),name.rend(),whitespace).base();
    name=begin<end?std::u16string(begin,end):std::u16string{};
    auto candidate=std::string("data/")+cs::String(name).utf8();
    for(char& c:candidate)if(c>='A'&&c<='Z')c=static_cast<char>(c-'A'+'a');
    const auto locate=[&](const std::string& value)->const assets::Entry*{
        // Catalog keys originate in Resources.m_Container, rather than paths
        // inferred from filenames. Do not normalize members of Kind::member.
        for(const auto* entry:state.catalog->entries(assets::Kind::resource)) {
            if(entry->key.size()!=value.size())continue;
            bool same=true;for(std::size_t i=0;i<value.size();++i){char c=entry->key[i];if(c>='A'&&c<='Z')c=static_cast<char>(c-'A'+'a');if(c!=value[i]){same=false;break;}}
            if(same)return entry;
        }return nullptr;
    };
    if(const auto* entry=locate(candidate))return entry;
    const auto dot=candidate.rfind('.');
    return dot==std::string::npos?nullptr:locate(candidate.substr(0,dot));
}
// Storage.HeapFile uses String.CompareTo, unlike PlayerPrefs' ordinal keys.
// Keep the historical CurrentCulture comparison and the first inserted name.
auto heap_file(cs::String name){(void)key(name);return std::find_if(state.heap.begin(),state.heap.end(),[&](const auto& item){return cs::culture_compare(name,cs::String(item.first))==0;});}
std::filesystem::path file_path(cs::String folder,cs::String filename) {
    const auto name=key(filename);
    if(name.find(u':')!=std::u16string::npos)return std::filesystem::path(name);
    std::u16string path=folder.is_null()?u"":folder.code_units();path+=u'/';path+=name;return std::filesystem::path(path);
}
cs::String record_name(std::int32_t rs,std::int32_t rc) {
    auto record=std::to_string(rc);while(record.size()<3)record="0"+record;
    return cs::String::from_utf8(std::to_string(rs)+record);
}
bool resources(std::int32_t rs){return rs==1&&!state.resources.is_null();}
void store_ready(){if(!state.record_storage)throw cs::NullReferenceException();}
Bytes raw_read(cs::String name){return state.preference_mode?BytePreferences::GetPreference(name):state.record_storage->Read(name);}
void raw_write(cs::String name,Bytes value){if(state.preference_mode)BytePreferences::PutPreference(name,value);else state.record_storage->Write(name,value);}
void raw_delete(cs::String name){if(state.preference_mode)BytePreferences::RemovePreference(name);else state.record_storage->Delete(name);}
cs::Array<cs::String> raw_names(){return state.preference_mode?BytePreferences::GetPreferenceKeys():state.record_storage->GetFiles();}
std::uint64_t crc(Bytes bytes) {
    std::array<std::uint64_t,256> table{};
    for(std::size_t i=0;i<table.size();++i){auto value=static_cast<std::uint64_t>(i);for(int j=0;j<8;++j)value=(value&1)?(value>>1):(0xedb88320u^(value>>1));table[i]=value;}
    std::uint64_t value=0xffffffffu;
    for(std::int32_t i=0;i<bytes.length();++i)value=table[(value^bytes.at(i))&255]^(value>>8);
    return value^0xffffffffu;
}
void crypt(Bytes bytes) {
    for(std::int32_t i=0;i<bytes.length();++i)bytes.at(i)^=state.key.at(cs::mod_i32(i,state.key.length()));
}
}
void configure_storage(std::filesystem::path root,const assets::Catalog* catalog,bool heap,int type) {
    std::lock_guard<std::recursive_mutex> lock(gate);state=State{};state.root=std::move(root);state.catalog=catalog;state.heap_enabled=heap;state.application_type=type;
}
bool PlayerPrefs::HasKey(cs::String name){std::lock_guard<std::recursive_mutex> lock(gate);return bag(false).values.count(key(name))!=0;}
std::int32_t PlayerPrefs::GetInt(cs::String name,std::int32_t def) {
    std::lock_guard<std::recursive_mutex> lock(gate);const auto& values=bag(false).values;const auto found=values.find(key(name));
    if(found==values.end()||found->second.type!=1)return def;
    std::size_t p=0;return cs::cast_integral<std::int32_t>(get32(found->second.bytes,p));
}
float PlayerPrefs::GetFloat(cs::String name,float def) {
    std::lock_guard<std::recursive_mutex> lock(gate);const auto& values=bag(false).values;const auto found=values.find(key(name));
    if(found==values.end()||found->second.type!=2)return def;
    std::size_t p=0;return cs::bit_copy<float>(get32(found->second.bytes,p));
}
cs::String PlayerPrefs::GetString(cs::String name,cs::String def) {
    std::lock_guard<std::recursive_mutex> lock(gate);const auto& values=bag(false).values;const auto found=values.find(key(name));
    if(found==values.end()||found->second.type!=3)return def;
    if(found->second.bytes.size()%2)throw IllegalFileException("Invalid UTF16 preference");
    std::u16string text;const auto& bytes=found->second.bytes;
    for(std::size_t i=0;i<bytes.size();i+=2)text.push_back(static_cast<char16_t>(bytes[i]|(static_cast<std::uint32_t>(bytes[i+1])<<8)));
    return cs::String(std::move(text));
}
void PlayerPrefs::SetInt(cs::String name,std::int32_t value){std::lock_guard<std::recursive_mutex> lock(gate);Value entry{1,{}};put32(entry.bytes,static_cast<std::uint32_t>(value));bag(false).values[key(name)]=std::move(entry);}
void PlayerPrefs::SetFloat(cs::String name,float value){std::lock_guard<std::recursive_mutex> lock(gate);Value entry{2,{}};put32(entry.bytes,cs::bit_copy<std::uint32_t>(value));bag(false).values[key(name)]=std::move(entry);}
void PlayerPrefs::SetString(cs::String name,cs::String value){std::lock_guard<std::recursive_mutex> lock(gate);Value entry{3,{}};for(char16_t unit:key(value)){entry.bytes.push_back(static_cast<std::uint8_t>(unit));entry.bytes.push_back(static_cast<std::uint8_t>(unit>>8));}bag(false).values[key(name)]=std::move(entry);}
void PlayerPrefs::DeleteKey(cs::String name){std::lock_guard<std::recursive_mutex> lock(gate);bag(false).values.erase(key(name));}
void PlayerPrefs::DeleteAll(){std::lock_guard<std::recursive_mutex> lock(gate);bag(false).values.clear();}
void PlayerPrefs::Save(){std::lock_guard<std::recursive_mutex> lock(gate);save_bag(false);}
Bytes BytePreferences::GetPreference(cs::String name){std::lock_guard<std::recursive_mutex> lock(gate);const auto& values=bag(true).values;const auto found=values.find(key(name));return found==values.end()?Bytes{}:from(found->second.bytes);}
void BytePreferences::PutPreference(cs::String name,Bytes bytes){std::lock_guard<std::recursive_mutex> lock(gate);bag(true).values[key(name)]=Value{4,bytes.is_null()?std::vector<std::uint8_t>{}:vector(bytes)};save_bag(true);}
void BytePreferences::RemovePreference(cs::String name){std::lock_guard<std::recursive_mutex> lock(gate);bag(true).values.erase(key(name));save_bag(true);}
cs::Array<cs::String> BytePreferences::GetPreferenceKeys(){std::lock_guard<std::recursive_mutex> lock(gate);const auto& values=bag(true).values;auto result=cs::Array<cs::String>::make(static_cast<std::int32_t>(values.size()));std::int32_t i=0;for(const auto& item:values)result.at(i++)=cs::String(item.first);return result;}
void Storage::Setup(std::int32_t,std::int32_t,cs::String root){if(root.is_null())throw cs::NullReferenceException(); /* Original root_ is never used by I/O. */}
cs::Ref<Storage> Storage::Open(std::int32_t media,bool) {
    std::lock_guard<std::recursive_mutex> lock(gate);configured();
    if(media==2&&!state.heap_enabled)throw cs::IOException("media not found");
    if(media==2||media==3)return cs::make_ref<Storage>(cs::String{},media);
    if(media==1||media==4)return cs::make_ref<Storage>(GetFolder(media),media);
    return {};
}
cs::String Storage::GetFolder(std::int32_t media){configured();if(media!=1&&media!=4)return {};return cs::String((state.root/(media==1?"files":"rs")).u16string());}
void Storage::Close(){folder_=nullptr;}
Bytes Storage::Read(cs::String filename) {
    std::lock_guard<std::recursive_mutex> lock(gate);filename=converted(filename);
    if(media_==2&&state.heap_enabled){const auto found=heap_file(filename);return found==state.heap.end()?Bytes{}:found->second;}
    if(media_==3){const auto* entry=resource_file(filename);return entry?from(state.catalog->read(*entry)):Bytes{};}
    if(media_==1||media_==4)return filesystem_call([&]{const auto path=file_path(folder_,filename);return std::filesystem::is_regular_file(recover_replaced(path))?from(read_file(path)):Bytes{};});
    return {};
}
void Storage::Write(cs::String filename,Bytes data) {
    std::lock_guard<std::recursive_mutex> lock(gate);filename=converted(filename);
    if(media_==2&&state.heap_enabled){const auto found=heap_file(filename);if(found==state.heap.end())state.heap.emplace_back(key(filename),data);else found->second=data;return;}
    if(media_==1||media_==4)filesystem_call([&]{atomic_write(file_path(folder_,filename),data.is_null()?std::vector<std::uint8_t>{}:vector(data));});
}
void Storage::Delete(cs::String filename) {
    std::lock_guard<std::recursive_mutex> lock(gate);filename=converted(filename);
    if(media_==2&&state.heap_enabled){const auto found=heap_file(filename);if(found!=state.heap.end())state.heap.erase(found);return;}
    if(media_==1||media_==4)filesystem_call([&]{std::filesystem::remove(file_path(folder_,filename));});
}
bool Storage::Exists(cs::String filename) {
    std::lock_guard<std::recursive_mutex> lock(gate);filename=converted(filename);
    if(media_==2&&state.heap_enabled)return heap_file(filename)!=state.heap.end();
    if(media_==3)return resource_file(filename)!=nullptr;
    return (media_==1||media_==4)&&filesystem_call([&]{return std::filesystem::is_regular_file(recover_replaced(file_path(folder_,filename)));});
}
std::int32_t Storage::GetSize(cs::String filename){
    std::lock_guard<std::recursive_mutex> lock(gate);
    filename=converted(filename);
    if(media_==2&&state.heap_enabled){const auto found=heap_file(filename);return found==state.heap.end()?-1:found->second.length();}
    if(media_==1||media_==4)return filesystem_call([&]{const auto path=file_path(folder_,filename);return std::filesystem::is_regular_file(recover_replaced(path))?cs::cast_integral<std::int32_t>(std::filesystem::file_size(path)):-1;});
    auto bytes=Read(filename);return bytes.is_null()?-1:bytes.length();
}
cs::Array<cs::String> Storage::GetFiles() {
    std::lock_guard<std::recursive_mutex> lock(gate);std::vector<cs::String> names;
    cs::GcRootProvider roots([&](const cs::EdgeVisitor&v){for(const auto&name:names)cs::trace_value(name,v);});
    if(media_==2&&state.heap_enabled){for(const auto& item:state.heap)names.emplace_back(item.first);}
    else if(media_==1||media_==4)filesystem_call([&]{const auto folder=std::filesystem::path(folder_.is_null()?u"":folder_.code_units());if(std::filesystem::exists(folder))for(const auto& entry:std::filesystem::recursive_directory_iterator(folder))if(entry.is_regular_file()&&entry.path().filename().u16string().find(u".port-tmp-")!=0)names.emplace_back(entry.path().lexically_relative(folder).u16string());});
    else return {};
    auto result=cs::Array<cs::String>::make(static_cast<std::int32_t>(names.size()));for(std::int32_t i=0;i<result.length();++i)result.at(i)=names[static_cast<std::size_t>(i)];return result;
}
Bytes Storage::Read(std::int32_t media,bool security,cs::String filename){auto storage=cs::nonnull(Open(media,security));return cs::run_finally([&]{return storage->Read(filename);},[&]{storage->Close();});}
void Storage::Write(std::int32_t media,bool security,cs::String filename,Bytes data){auto storage=cs::nonnull(Open(media,security));cs::run_finally([&]{storage->Write(filename,data);},[&]{storage->Close();});}
bool Storage::Exists(std::int32_t media,cs::String filename){auto storage=cs::nonnull(Open(media,false));return cs::run_finally([&]{return storage->Exists(filename);},[&]{storage->Close();});}
void RecordStore::SetPreferenceMode(bool use){state.preference_mode=state.application_type==2&&use;}
bool RecordStore::Setup(){state.record_storage=Storage::Open(4,true);return true;}
void RecordStore::CreateRecordStore(){Setup();}
void RecordStore::SetResourceFiles(cs::Array<cs::String> files){state.resources=files;}
void RecordStore::SetEncryptionKey(Bytes bytes){state.key=bytes;}
void RecordStore::SetEncryptionKey(cs::Array<std::int8_t> bytes){auto result=Bytes::make(bytes.length());for(std::int32_t i=0;i<bytes.length();++i)result.at(i)=static_cast<std::uint8_t>(bytes.at(i));state.key=result;}
std::int32_t RecordStore::AddRecord(std::int32_t){std::lock_guard<std::recursive_mutex> lock(gate);if(resources(rs_id_))return -1;store_ready();const auto record=GetNumRecords();raw_write(record_name(rs_id_,record),Bytes::make(0));return record;}
std::int32_t RecordStore::AddRecord(Bytes data){if(resources(rs_id_))return -1;const auto record=AddRecord(data.length());WriteRecord(record,data);return record;}
void RecordStore::WriteRecord(std::int32_t record,Bytes bytes){WriteRecord(record,cs::Array<Bytes>::from({bytes}));}
void RecordStore::WriteRecord(std::int32_t record,cs::Array<Bytes> data) {
    std::lock_guard<std::recursive_mutex> lock(gate);if(resources(rs_id_))return;store_ready();const auto bytes=data.at(0);data.at(0)=nullptr;
    const auto size=bytes.length();auto payload=Bytes::make(cs::add_i32(size,8));const auto checksum=crc(bytes);
    for(int i=0;i<8;++i)payload.at(i)=static_cast<std::uint8_t>(checksum>>((7-i)*8));
    Bytes::copy(bytes,0,payload,8,size);crypt(payload);raw_write(record_name(rs_id_,record),payload);
}
Bytes RecordStore::ReadRecord(std::int32_t record) {
    std::lock_guard<std::recursive_mutex> lock(gate);
    if(resources(rs_id_)){auto name=state.resources.at(record);auto value=name.code_units();if(value.size()<4||value.substr(value.size()-4)!=u".dat")value+=u".dat";return Storage::Read(3,false,cs::String(std::move(value)));}
    store_ready();auto bytes=raw_read(record_name(rs_id_,record));if(bytes.is_null())bytes=Bytes::make(0);if(bytes.length()==0)return bytes;
    crypt(bytes);if(bytes.length()<8)throw cs::ArgumentException();std::uint64_t checksum=0;
    for(int i=0;i<8;++i)checksum=(checksum<<8)|bytes.at(i);auto result=Bytes::make(bytes.length()-8);Bytes::copy(bytes,8,result,0,result.length());
    if(crc(result)!=checksum)throw IllegalFileException();return result;
}
bool RecordStore::ExistRecord(std::int32_t record){if(resources(rs_id_))return true;store_ready();const auto name=record_name(rs_id_,record);if(!state.preference_mode)return state.record_storage->Exists(name);const auto names=BytePreferences::GetPreferenceKeys();for(std::int32_t i=0;i<names.length();++i)if(names.at(i)==name)return true;return false;}
std::int32_t RecordStore::GetRecordSize(std::int32_t record){if(resources(rs_id_))return 0;store_ready();if(!state.preference_mode)return state.record_storage->GetSize(record_name(rs_id_,record));const auto bytes=BytePreferences::GetPreference(record_name(rs_id_,record));return bytes.is_null()?-1:bytes.length();}
std::int32_t RecordStore::GetNumRecords() {
    std::lock_guard<std::recursive_mutex> lock(gate);if(resources(rs_id_))return 0;store_ready();std::int32_t count=0;const auto names=raw_names();
    for(std::int32_t i=0;i<names.length();++i){const auto name=names.at(i);if(name.is_null()||name.at(0)!=cs::add_i32(48,rs_id_))continue;
        const auto text=std::filesystem::path(name.code_units()).stem().u16string();const auto parsed=cs::int32_parse(cs::String(text));const auto record=cs::mod_i32(parsed,1000);if(count<=record)count=cs::add_i32(record,1);}
    return count;
}
void RecordStore::RemoveLastRecord(){if(resources(rs_id_))return;store_ready();const auto count=GetNumRecords();if(count)raw_delete(record_name(rs_id_,count-1));}
void RecordStore::RemoveAllRecord(){if(resources(rs_id_))return;store_ready();const auto names=raw_names();for(std::int32_t i=0;i<names.length();++i)raw_delete(names.at(i));}
cs::Ref<RecordStore> RecordStore::OpenRecordStore(std::int32_t id){return cs::make_ref<RecordStore>(id);}
void RecordStore::WriteRecord(std::int32_t rs,std::int32_t rc,Bytes data){OpenRecordStore(rs)->WriteRecord(rc,data);}
Bytes RecordStore::ReadRecord(std::int32_t rs,std::int32_t rc){return OpenRecordStore(rs)->ReadRecord(rc);}
void RecordStore::PreferencesToFile() {
    if(state.preference_mode)return;store_ready();const auto names=BytePreferences::GetPreferenceKeys();
    for(std::int32_t i=0;i<names.length();++i)try{if(names.length()<4)continue;const auto id=cs::int32_parse(names.at(i));const auto data=BytePreferences::GetPreference(names.at(i));RecordStore record(cs::div_i32(id,1000));if(!record.ExistRecord(cs::mod_i32(id,1000))&&data.length()!=0)state.record_storage->Write(names.at(i),data);BytePreferences::RemovePreference(names.at(i));}catch(const cs::Exception&){}
}
void RecordStore::FileToPreferences() {
    if(!state.preference_mode)return;store_ready();const auto names=state.record_storage->GetFiles();
    for(std::int32_t i=0;i<names.length();++i)try{if(names.length()<4)continue;const auto id=cs::int32_parse(names.at(i));const auto data=state.record_storage->Read(names.at(i));RecordStore record(cs::div_i32(id,1000));if(!record.ExistRecord(cs::mod_i32(id,1000))&&data.length()!=0)BytePreferences::PutPreference(names.at(i),data);state.record_storage->Delete(names.at(i));}catch(const cs::Exception&){}
}
}
