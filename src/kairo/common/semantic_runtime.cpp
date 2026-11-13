#include "semantic_runtime.hpp"
#include "allocation_probe.hpp"
#include "platform_condition.hpp"
#include "../../runtime/gc_memory_resource.hpp"
#include <condition_variable>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <string_view>
#include <atomic>
#include <cerrno>
#include <cstdlib>
#include <array>
#if defined(PLS_GC_TRACE)
#include <cstdio>
#if defined(__3DS__)
#include <malloc.h>
#endif
#endif

// All standalone API/emitter fixture recipes already link this runtime unit.
// Keep the engine in that unit too, so no consumer can accidentally select raw
// references without linking their collector. The standalone engine test uses
// tracing_gc.cpp directly and does not link semantic_runtime.cpp.
#if PLS_TRACING_GC
#include "../../runtime/tracing_gc.cpp"
#endif

namespace pls::cs {
#if defined(_MSC_VER)
#define PLS_COLD_THROW __declspec(noinline)
#else
#define PLS_COLD_THROW __attribute__((noinline,cold))
#endif
PLS_COLD_THROW void throw_null_reference(){throw NullReferenceException();}
PLS_COLD_THROW void throw_array_bounds(){throw IndexOutOfRangeException();}
PLS_COLD_THROW void throw_array_type_mismatch(){throw ArrayTypeMismatchException();}
#undef PLS_COLD_THROW
namespace {
struct RootRegistry {
    std::mutex mutex;
    std::size_t next=1;
    gc::detail::NativeMemoryResource upstream;
    std::pmr::unsynchronized_pool_resource pool{&upstream};
    std::pmr::unordered_map<std::size_t,std::function<void(const EdgeVisitor&)>> providers{&pool};
};
RootRegistry& root_registry(){
    // Native bookkeeping outlives global root-provider destructors.
    static auto* registry=new RootRegistry;
    return *registry;
}
}
GcRootProvider::GcRootProvider(std::function<void(const EdgeVisitor&)> provider){
    auto&registry=root_registry();std::lock_guard<std::mutex>lock(registry.mutex);
    token_=registry.next++;registry.providers.emplace(token_,std::move(provider));
}
GcRootProvider::~GcRootProvider(){
    auto&registry=root_registry();std::lock_guard<std::mutex>lock(registry.mutex);registry.providers.erase(token_);
}
void visit_gc_roots(const EdgeVisitor&visitor){
    auto&registry=root_registry();std::lock_guard<std::mutex>lock(registry.mutex);
    for(const auto&entry:registry.providers)entry.second(visitor);
}
MonitorScope::MonitorScope(Ref<Object> target):target_(std::move(target)){
    if(!target_)throw ArgumentNullException();
    GcNativeBlockingScope parked;target_->monitor.lock();
}
MonitorScope::~MonitorScope(){target_->monitor.unlock();}
#if PLS_TRACING_GC
#include "../../runtime/managed_gc_bridge.inc"
#else
namespace {
struct CollectorState {
    std::mutex mutex;std::condition_variable condition;
    struct Entry{std::weak_ptr<Object>object;std::int32_t generation=0;std::size_t body_bytes=0;const void*body_begin=nullptr;};
    std::unordered_map<Object*,Entry>objects;
    std::size_t registrations_since_sweep=0;
    std::unordered_map<std::thread::id,std::size_t>mutators;
    std::unordered_map<std::thread::id,std::size_t>native_blocked;
    std::unordered_set<std::thread::id>parked;
    bool requested=false;std::thread::id collector;GcCollectionStats last;
};
CollectorState&collector_state(){static CollectorState state;return state;}
void wait_for_collection(CollectorState&state,std::unique_lock<std::mutex>&lock){
    const auto thread=std::this_thread::get_id();if(!state.requested||state.collector==thread)return;
    state.parked.insert(thread);state.condition.notify_all();platform_condition_wait(state.condition,lock,[&]{return !state.requested;});state.parked.erase(thread);
}
struct CollectionPause {
    CollectorState&state;
    ~CollectionPause(){std::lock_guard<std::mutex>lock(state.mutex);state.requested=false;state.collector={};state.condition.notify_all();}
};
}
void register_managed_object(const Ref<Object>&object,std::size_t body_bytes,const void*body_begin){
    auto&state=collector_state();std::unique_lock<std::mutex>lock(state.mutex);
    if(state.native_blocked.count(std::this_thread::get_id()))throw InvalidOperationException("Managed allocation inside a native blocking scope");
    wait_for_collection(state,lock);
    // Expired weak entries describe objects already destroyed by reference
    // counting. Retaining their control blocks until an explicit GC grows
    // bookkeeping indefinitely; pruning them does not collect any live object.
    if(++state.registrations_since_sweep>=std::max<std::size_t>(1024,state.objects.size()/4)){
        for(auto entry=state.objects.begin();entry!=state.objects.end();){
            if(entry->second.object.expired())entry=state.objects.erase(entry);else ++entry;
        }
        state.registrations_since_sweep=0;
    }
    auto it=state.objects.find(object.get());
    if(it==state.objects.end()||it->second.object.expired())state.objects[object.get()]={object,0,body_bytes,body_begin};
}
void visit_managed_memory(const memory::RangeVisitor&visitor,const std::function<void()>&finish){
    auto&state=collector_state();
    {std::unique_lock<std::mutex>lock(state.mutex);
        if(state.native_blocked.count(std::this_thread::get_id()))throw InvalidOperationException("Memory snapshot inside a native blocking scope");
        if(state.requested&&state.collector==std::this_thread::get_id())throw InvalidOperationException("Recursive memory snapshot");
        wait_for_collection(state,lock);state.requested=true;state.collector=std::this_thread::get_id();
    }
    CollectionPause pause{state};
    struct SnapshotObject{Ref<Object>object{};std::size_t bytes;const void*begin;};std::vector<SnapshotObject>objects;
    {std::unique_lock<std::mutex>lock(state.mutex);
        if(!state.condition.wait_for(lock,std::chrono::seconds(1),[&]{for(const auto&entry:state.mutators)if(entry.first!=state.collector&&!state.parked.count(entry.first)&&!state.native_blocked.count(entry.first))return false;return true;}))throw NotSupportedException("Managed worker did not reach a memory snapshot safepoint");
        for(const auto&entry:state.objects)if(auto object=entry.second.object.lock())objects.push_back({std::move(object),entry.second.body_bytes,entry.second.body_begin});
    }
    for(const auto&entry:objects){visitor(entry.begin,entry.bytes,memory::Category::managed_heap);entry.object->memory_ranges(visitor);}
    if(finish)finish();
}
std::int32_t gc_max_generation()noexcept{return runtime_profile==RuntimeProfile::UnityMono265?0:2;}
std::int32_t gc_generation(const Ref<Object>&object){if(!object)throw ArgumentNullException();auto&state=collector_state();std::lock_guard<std::mutex>lock(state.mutex);auto it=state.objects.find(object.get());if(it==state.objects.end())throw NotSupportedException("Object was not registered with the managed collector");return it->second.generation;}
GcMutatorScope::GcMutatorScope(){
    auto&state=collector_state();std::unique_lock<std::mutex>lock(state.mutex);
    if(state.native_blocked.count(std::this_thread::get_id()))throw InvalidOperationException("Managed entry inside a native blocking scope");
    wait_for_collection(state,lock);
    ++state.mutators[std::this_thread::get_id()];
}
GcMutatorScope::~GcMutatorScope(){
    auto&state=collector_state();std::lock_guard<std::mutex>lock(state.mutex);auto it=state.mutators.find(std::this_thread::get_id());
    if(it!=state.mutators.end()&&--it->second==0)state.mutators.erase(it);state.condition.notify_all();
}
void gc_safepoint(){
    auto&state=collector_state();std::unique_lock<std::mutex>lock(state.mutex);const auto thread=std::this_thread::get_id();
    if(state.native_blocked.count(thread))throw InvalidOperationException("Managed safepoint inside a native blocking scope");
    if(!state.requested||state.collector==thread)return;
    state.parked.insert(thread);state.condition.notify_all();
    platform_condition_wait(state.condition,lock,[&]{return !state.requested;});state.parked.erase(thread);
}
GcNativeBlockingScope::GcNativeBlockingScope(){
    auto&state=collector_state();std::lock_guard<std::mutex>lock(state.mutex);
    const auto thread=std::this_thread::get_id();
    if(state.requested && state.collector==thread)throw InvalidOperationException("Collector cannot enter a native blocking scope");
    ++state.native_blocked[thread];state.condition.notify_all();
}
GcNativeBlockingScope::~GcNativeBlockingScope(){
    auto&state=collector_state();std::unique_lock<std::mutex>lock(state.mutex);const auto thread=std::this_thread::get_id();
    auto it=state.native_blocked.find(thread);
    if(it==state.native_blocked.end() || it->second==0)std::terminate();
    if(it->second>1){--it->second;return;}
    // Keep the last depth visible while awaiting reentry. Do not erase another
    // wait's parked marker, nor let the collector wait for this native thread.
    platform_condition_wait(state.condition,lock,[&]{return !state.requested;});
    state.native_blocked.erase(thread);state.condition.notify_all();
}
GcCollectionStats gc_last_collection(){auto&state=collector_state();std::lock_guard<std::mutex>lock(state.mutex);return state.last;}
GcRegistryStats gc_registry_stats(){auto&state=collector_state();std::lock_guard<std::mutex>lock(state.mutex);GcRegistryStats result{state.objects.size(),0};for(const auto&entry:state.objects)if(entry.second.object.expired())++result.expired;return result;}
void gc_collect(std::int32_t generation){
    if(generation<0)throw ArgumentOutOfRangeException();auto&state=collector_state();
    {
        std::unique_lock<std::mutex>lock(state.mutex);
        if(state.native_blocked.count(std::this_thread::get_id()))throw InvalidOperationException("Collection inside a native blocking scope");
        if(state.requested){
            const auto thread=std::this_thread::get_id();if(state.collector==thread)throw InvalidOperationException("A recursive collection is already active");
            state.parked.insert(thread);state.condition.notify_all();platform_condition_wait(state.condition,lock,[&]{return !state.requested;});state.parked.erase(thread);
        }
        state.requested=true;state.collector=std::this_thread::get_id();
    }
    [[maybe_unused]] allocation_probe::Collection allocation_measurement;
    CollectionPause pause{state};
    try{
        std::vector<Ref<Object>>objects{};std::vector<std::int32_t>ages;
        {
            std::unique_lock<std::mutex>lock(state.mutex);
            const bool quiet=state.condition.wait_for(lock,std::chrono::seconds(1),[&]{for(const auto&entry:state.mutators)if(entry.first!=state.collector&&!state.parked.count(entry.first)&&!state.native_blocked.count(entry.first))return false;return true;});
            if(!quiet)throw NotSupportedException("Managed worker did not reach a cooperative GC safepoint");
            for(auto it=state.objects.begin();it!=state.objects.end();){if(auto object=it->second.object.lock()){objects.push_back(std::move(object));ages.push_back(it->second.generation);++it;}else it=state.objects.erase(it);}
        }
        std::unordered_map<Object*,std::size_t>indices;for(std::size_t i=0;i<objects.size();++i)indices.emplace(objects[i].get(),i);
        std::vector<std::vector<std::size_t>>edges(objects.size());std::vector<std::size_t>incoming(objects.size(),0);
        for(std::size_t i=0;i<objects.size();++i)objects[i]->trace_edges([&](const Ref<Object>&target){auto it=indices.find(target.get());if(it!=indices.end()){edges[i].push_back(it->second);++incoming[it->second];}});
        std::vector<bool>marked(objects.size(),false);std::vector<std::size_t>work;GcCollectionStats result;result.tracked=objects.size();
        for(std::size_t i=0;i<objects.size();++i){
            // Exactly one strong reference belongs to this collector snapshot.
            // Unreported std::function captures/native references remain roots.
            const auto owners=objects[i].use_count();
            if(ages[i]>std::min(generation,gc_max_generation())||owners>static_cast<long>(incoming[i]+1)){marked[i]=true;work.push_back(i);++result.roots;}
            else if(owners<static_cast<long>(incoming[i]+1))throw InvalidOperationException("GC trace reports more strong edges than exist");
        }
        while(!work.empty()){auto i=work.back();work.pop_back();for(auto target:edges[i])if(!marked[target]){marked[target]=true;work.push_back(target);}}
        std::vector<std::weak_ptr<Object>>unreachable;
        for(std::size_t i=0;i<objects.size();++i)if(!marked[i]){unreachable.push_back(objects[i]);++result.unreachable;objects[i]->release_edges();}
        {
            std::lock_guard<std::mutex>lock(state.mutex);
            for(std::size_t i=0;i<objects.size();++i)if(marked[i]&&ages[i]<=std::min(generation,gc_max_generation()))state.objects.at(objects[i].get()).generation=std::min(ages[i]+1,gc_max_generation());
        }
        objects.clear();for(const auto&object:unreachable)if(object.expired())++result.collected;
        {
            std::lock_guard<std::mutex>lock(state.mutex);state.last=result;
            for(auto it=state.objects.begin();it!=state.objects.end();)if(it->second.object.expired())it=state.objects.erase(it);else ++it;
        }
    }catch(const std::bad_alloc&){throw OutOfMemoryException();}
}
#endif
namespace {std::mutex last_capture_mutex;std::string last_capture;}
std::string last_captured_exception(){std::lock_guard<std::mutex> lock(last_capture_mutex);return last_capture;}
void record_captured_exception(std::string value){std::lock_guard<std::mutex> lock(last_capture_mutex);last_capture=std::move(value);}

void array_copy(const Ref<ArrayBase>&source,std::int32_t source_index,const Ref<ArrayBase>&dest,std::int32_t dest_index,std::int32_t count){
    if(!source||!dest)throw ArgumentNullException();
    if(source_index<0||dest_index<0||count<0)throw ArgumentOutOfRangeException();
    if(static_cast<std::int64_t>(source_index)+count>source->get_Length()||static_cast<std::int64_t>(dest_index)+count>dest->get_Length())throw ArgumentException();
    if(source->copy_same_to(*dest,source_index,dest_index,count))return;
    if(source->reference_element_is_a(typeid(Object))&&dest->reference_element_is_a(typeid(Object))){
        try{for(std::int32_t i=0;i<count;++i)dest->reference_item(dest_index+i,source->reference_item(source_index+i));}
        catch(const ArrayTypeMismatchException&){throw InvalidCastException();}return;
    }
    if(source->element_type()==typeid(float)&&dest->element_type()==typeid(std::int32_t)){
        if(count==0&&runtime_profile==RuntimeProfile::UnityMono265)return;
        throw ArrayTypeMismatchException();
    }
    throw NotSupportedException("Cross-element System.Array.Copy requires measured conversion lowering");
}
String String::literal(const char16_t*text,std::size_t length){
    if(!text)throw ArgumentNullException();
    // Only compiler-emitted C# constants use this pool. Asset text and runtime
    // strings keep their normal ownership. Views refer to immutable storage
    // retained by the pool, so the key does not duplicate the UTF-16 payload.
    static std::mutex mutex;
    static std::unordered_map<std::u16string_view,Ref<Storage>> literals{};
    static GcRootProvider roots([](const EdgeVisitor&visitor){for(const auto&entry:literals)trace_value(entry.second,visitor);});
    std::lock_guard<std::mutex> lock(mutex);
    const std::u16string_view key(text,length);auto found=literals.find(key);
    String result;
    if(found!=literals.end()){result.data_=found->second;return result;}
    result.data_=make_ref<Storage>(std::u16string(text,length));
    literals.emplace(std::u16string_view(result.data_->value),result.data_);return result;
}
String String::from_utf8(const std::string& text) {
    std::u16string units;
    for(std::size_t i=0;i<text.size();) {
        auto first=static_cast<unsigned char>(text[i]);std::uint32_t value=0;std::size_t count=0;
        if(first<0x80){value=first;count=1;}
        else if(first>=0xC2&&first<=0xDF){value=first&0x1Fu;count=2;}
        else if(first>=0xE0&&first<=0xEF){value=first&0x0Fu;count=3;}
        else if(first>=0xF0&&first<=0xF4){value=first&7u;count=4;}
        bool valid=count!=0&&i+count<=text.size();
        if(valid)for(std::size_t j=1;j<count;++j){auto b=static_cast<unsigned char>(text[i+j]);if((b&0xC0)!=0x80){valid=false;break;}value=(value<<6)|(b&0x3Fu);}
        if(valid&&((count==2&&value<0x80)||(count==3&&value<0x800)||(count==4&&value<0x10000)||value>0x10FFFF||(value>=0xD800&&value<=0xDFFF)))valid=false;
        if(!valid){
            units.push_back(u'\uFFFD');std::size_t consumed=1;
            if(runtime_profile==RuntimeProfile::DotNet && count>=2 && i+1<text.size()) {
                const auto second=static_cast<unsigned char>(text[i+1]);
                bool prefix=(second&0xC0)==0x80;
                if(first==0xE0&&second<0xA0)prefix=false;
                if(first==0xED&&second>0x9F)prefix=false;
                if(first==0xF0&&second<0x90)prefix=false;
                if(first==0xF4&&second>0x8F)prefix=false;
                if(prefix){consumed=2;while(consumed<count&&i+consumed<text.size()&&(static_cast<unsigned char>(text[i+consumed])&0xC0)==0x80)++consumed;}
            }
            i+=consumed;continue;
        }
        if(value<0x10000)units.push_back(static_cast<char16_t>(value));
        else {value-=0x10000;units.push_back(static_cast<char16_t>(0xD800+(value>>10)));units.push_back(static_cast<char16_t>(0xDC00+(value&1023)));}
        i+=count;
    }
    return String(std::move(units));
}

std::string String::utf8()const {
    const auto& units=require();std::string bytes;
    for(std::size_t i=0;i<units.size();++i) {
        std::uint32_t value=units[i];
        if(value>=0xD800&&value<=0xDBFF&&i+1<units.size()&&units[i+1]>=0xDC00&&units[i+1]<=0xDFFF){value=0x10000+((value-0xD800)<<10)+(units[++i]-0xDC00);}
        else if(value>=0xD800&&value<=0xDFFF&&runtime_profile==RuntimeProfile::DotNet)value=0xFFFD;
        if(value<0x80)bytes.push_back(static_cast<char>(value));
        else if(value<0x800){bytes.push_back(static_cast<char>(0xC0|(value>>6)));bytes.push_back(static_cast<char>(0x80|(value&63)));}
        else if(value<0x10000){bytes.push_back(static_cast<char>(0xE0|(value>>12)));bytes.push_back(static_cast<char>(0x80|((value>>6)&63)));bytes.push_back(static_cast<char>(0x80|(value&63)));}
        else {bytes.push_back(static_cast<char>(0xF0|(value>>18)));bytes.push_back(static_cast<char>(0x80|((value>>12)&63)));bytes.push_back(static_cast<char>(0x80|((value>>6)&63)));bytes.push_back(static_cast<char>(0x80|(value&63)));}
    }
    return bytes;
}

Array<std::uint8_t>encoding_utf8_get_bytes(const String&value) {
    if(value.is_null())throw ArgumentNullException();
    try{
        auto bytes=value.utf8();
        if(bytes.size()>static_cast<std::size_t>(std::numeric_limits<std::int32_t>::max()))throw OutOfMemoryException();
        auto result=Array<std::uint8_t>::make(static_cast<std::int32_t>(bytes.size()));
        for(std::int32_t i=0;i<result.length();++i)result.at(i)=static_cast<std::uint8_t>(static_cast<unsigned char>(bytes[static_cast<std::size_t>(i)]));
        return result;
    }catch(const std::bad_alloc&){throw OutOfMemoryException();}
}

String encoding_utf8_get_string(const Array<std::uint8_t>&value) {
    if(value.is_null())throw ArgumentNullException();
    return encoding_utf8_get_string(value,0,value.length());
}

String encoding_utf8_get_string(const Array<std::uint8_t>&value,std::int32_t offset,std::int32_t count) {
    if(value.is_null())throw ArgumentNullException();
    if(offset<0||count<0||static_cast<std::int64_t>(offset)+count>value.length())throw ArgumentOutOfRangeException();
    try{
        std::string bytes;bytes.resize(static_cast<std::size_t>(count));
        for(std::int32_t i=0;i<count;++i)bytes[static_cast<std::size_t>(i)]=static_cast<char>(value.at(offset+i));
        return String::from_utf8(bytes);
    }catch(const std::bad_alloc&){throw OutOfMemoryException();}
}

String convert_to_base64_string(const Array<std::uint8_t>&value) {
    if(value.is_null())throw ArgumentNullException();
    static constexpr char16_t digits[]=u"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    const std::int64_t size=((static_cast<std::int64_t>(value.length())+2)/3)*4;
    if(size>std::numeric_limits<std::int32_t>::max())throw OutOfMemoryException();
    try{
        std::u16string text;text.reserve(static_cast<std::size_t>(size));
        for(std::int32_t i=0;i<value.length();) {
            const auto a=value.at(i++);const bool second=i<value.length();
            const auto b=second?value.at(i++):std::uint8_t(0);const bool third=i<value.length();
            const auto c=third?value.at(i++):std::uint8_t(0);
            text.push_back(digits[a>>2]);text.push_back(digits[((a&3)<<4)|(b>>4)]);
            text.push_back(second?digits[((b&15)<<2)|(c>>6)]:u'=');text.push_back(third?digits[c&63]:u'=');
        }
        return String(std::move(text));
    }catch(const std::bad_alloc&){throw OutOfMemoryException();}
}

Array<std::uint8_t>convert_from_base64_string(const String&value) {
    if(value.is_null())throw ArgumentNullException();
    try{
        std::u16string text;
        for(std::int32_t i=0;i<value.length();++i){const auto c=value.at(i);
            const bool whitespace=c==u' '||c==u'\t'||c==u'\r'||c==u'\n'||(runtime_profile==RuntimeProfile::UnityMono265&&(c==u'\v'||c==u'\f'));
            if(!whitespace)text.push_back(c);
        }
        if(text.size()%4!=0)throw FormatException();
        auto digit=[](char16_t c)->std::int32_t {
            if(c>=u'A'&&c<=u'Z')return c-u'A';if(c>=u'a'&&c<=u'z')return c-u'a'+26;
            if(c>=u'0'&&c<=u'9')return c-u'0'+52;if(c==u'+')return 62;if(c==u'/')return 63;
            if(c==u'='&&runtime_profile==RuntimeProfile::UnityMono265)return 0;throw FormatException();
        };
        if(runtime_profile==RuntimeProfile::UnityMono265&&text.size()>=3&&text[text.size()-3]==u'=')throw FormatException();
        std::int64_t size=static_cast<std::int64_t>(text.size()/4)*3;
        if(!text.empty()){if(text.back()==u'=')--size;if(text[text.size()-2]==u'=')--size;}
        auto result=Array<std::uint8_t>::make(static_cast<std::int32_t>(size));std::int32_t output=0;
        for(std::size_t i=0;i<text.size();i+=4){
            const auto a=digit(text[i]),b=digit(text[i+1]);const bool last=i+4==text.size();
            const bool pad2=text[i+2]==u'=',pad3=text[i+3]==u'=';
            if(runtime_profile==RuntimeProfile::DotNet&&((pad2&&!pad3)||((pad2||pad3)&&!last)))throw FormatException();
            const auto c=pad2?0:digit(text[i+2]),d=pad3?0:digit(text[i+3]);
            // Mono accepts internal padding and may write beyond its allocation.
            // Preserve its returned in-bounds bytes, never its native memory corruption.
            auto put=[&](std::int32_t byte){if(output<result.length())result.at(output)=static_cast<std::uint8_t>(byte);++output;};
            put((a<<2)|(b>>4));if(!pad2)put((b<<4)|(c>>2));if(!pad3)put((c<<6)|d);
        }
        return result;
    }catch(const std::bad_alloc&){throw OutOfMemoryException();}
}

namespace {
template<class T>T parse_integer(const String&value,bool hexadecimal){
    if(value.is_null())throw ArgumentNullException();
    std::int32_t first=0,last=value.length();
    const bool historical=runtime_profile==RuntimeProfile::UnityMono265;
    auto whitespace=[&](char16_t c){
        if(c==u' '||(c>=u'\t'&&c<=u'\r'))return true;
        return historical&&(c==0x85||c==0xA0||c==0x1680||(c>=0x2000&&c<=0x200B)||c==0x2028||c==0x2029||c==0x202F||c==0x205F||c==0x3000);
    };
    if(!hexadecimal){while(first<last&&whitespace(value.at(first)))++first;}
    bool negative=false;
    auto consume_sign=[&](const String&sign){
        if(sign.is_null()||sign.length()==0||sign.length()>last-first)return false;
        for(std::int32_t i=0;i<sign.length();++i)if(value.at(first+i)!=sign.at(i))return false;
        first+=sign.length();return true;
    };
    if(!hexadecimal){
        if(historical){if(first<last&&(value.at(first)==u'+'||value.at(first)==u'-'))negative=value.at(first++)==u'-';}
        else if(!consume_sign(integer_number_format.positive_sign))negative=consume_sign(integer_number_format.negative_sign);
    }
    using U=std::make_unsigned_t<T>;const U limit=hexadecimal?std::numeric_limits<U>::max():static_cast<U>(std::numeric_limits<T>::max())+(negative?U(1):U(0));
    const U radix=hexadecimal?U(16):U(10);U number=0;bool overflow=false,has_digit=false;
    auto trailing=[&](std::int32_t position){
        if(historical&&position<last&&value.at(position)==0&&(hexadecimal||sizeof(T)==4))return true;
        bool seen_zero=false;
        for(std::int32_t i=position;i<last;++i){const auto c=value.at(i);if(c==0){seen_zero=true;continue;}if(!hexadecimal&&whitespace(c)&&(historical||!seen_zero))continue;return false;}
        return true;
    };
    for(std::int32_t i=first;i<last;++i){
        const auto c=value.at(i);std::int32_t digit=-1;
        if(c>=u'0'&&c<=u'9')digit=c-u'0';else if(hexadecimal&&c>=u'a'&&c<=u'f')digit=c-u'a'+10;else if(hexadecimal&&c>=u'A'&&c<=u'F')digit=c-u'A'+10;
        if(digit<0){if(!trailing(i))throw FormatException();break;}has_digit=true;
        const U before=number;
        if(number>(limit-static_cast<U>(digit))/radix)overflow=true;
        if(overflow&&historical)throw OverflowException();
        if(!overflow)number=number*radix+static_cast<U>(digit);
        if(historical&&!hexadecimal&&before>=static_cast<U>(std::numeric_limits<T>::max())/U(10)){
            if(!trailing(i+1))throw OverflowException();break;
        }
    }
    if(!has_digit)throw FormatException();if(overflow)throw OverflowException();
    if(negative)number=U(0)-number;return cast_integral<T>(number);
}
}
std::int32_t int32_parse(const String&value,bool hexadecimal){return parse_integer<std::int32_t>(value,hexadecimal);}
bool int32_try_parse(const String& value,std::int32_t& result){
    result=0;if(value.is_null())return false;
    try{result=int32_parse(value);return true;}catch(const FormatException&){return false;}catch(const OverflowException&){return false;}
}
std::int64_t int64_parse(const String&value,bool hexadecimal){return parse_integer<std::int64_t>(value,hexadecimal);}
} // namespace pls::cs
