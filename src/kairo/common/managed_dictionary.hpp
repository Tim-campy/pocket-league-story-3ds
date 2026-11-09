#pragma once
#include "semantic_runtime.hpp"

namespace pls::cs {
template<class T>std::uint32_t dictionary_hash(const T&value){
    std::int32_t hash;
    if constexpr(is_shared_ref<T>::value){if(!value)throw ArgumentNullException();hash=box(value)->GetHashCode();}
    else if constexpr(has_managed_object<T>::value){auto object=value.as_object();if(!object)throw ArgumentNullException();hash=object->GetHashCode();}
    else if constexpr(std::is_integral_v<T>||std::is_enum_v<T>)hash=Box<T>(value).GetHashCode();
    else if constexpr(std::is_same_v<T,float>){auto bits=value==0?std::uint32_t(0):std::isnan(value)?std::uint32_t(0x7FC00000):bit_copy<std::uint32_t>(value);hash=cast_integral<std::int32_t>(bits);}
    else if constexpr(std::is_same_v<T,double>){auto bits=value==0?std::uint64_t(0):std::isnan(value)?std::uint64_t(0x7FF8000000000000):bit_copy<std::uint64_t>(value);hash=cast_integral<std::int32_t>(static_cast<std::uint32_t>(bits^(bits>>32)));}
    else throw NotSupportedException("Dictionary key requires generated equality/hash implementation");
    return static_cast<std::uint32_t>(hash)&0x7FFFFFFFu;
}
template<class K,class V>struct KeyValuePair {
    K key{};V value{};
    KeyValuePair()=default;
    KeyValuePair(K first,V second):key(std::move(first)),value(std::move(second)){}
    K get_Key()const{return key;}V get_Value()const{return value;}
    void trace_edges(const EdgeVisitor&visitor)const{trace_value(key,visitor);trace_value(value,visitor);}
    void release_edges(){release_value(key);release_value(value);}
};
template<class K,class V>class Dictionary {
    struct Entry {std::uint32_t hash=0;std::optional<KeyValuePair<K,V>>item;};
    struct Storage : Object {std::vector<Entry>entries;std::vector<std::size_t>free;std::int32_t count=0;std::uint32_t version=0;
        void trace_edges(const EdgeVisitor&visitor)const override{for(const auto&entry:entries)if(entry.item)entry.item->trace_edges(visitor);}
        void release_edges()override{entries.clear();free.clear();}
    };
    Ref<Storage>data_;
    Storage&require()const{if(!data_)throw NullReferenceException();return *data_;}
    std::size_t find(const K&key,std::uint32_t hash)const{auto&d=require();for(std::size_t i=0;i<d.entries.size();++i)if(d.entries[i].item&&d.entries[i].hash==hash&&default_equal(d.entries[i].item->key,key))return i;return d.entries.size();}
    void put(K key,V value,bool overwrite){
        auto&d=require();auto hash=dictionary_hash(key);auto i=find(key,hash);
        if(i<d.entries.size()){if(!overwrite)throw ArgumentException();d.entries[i].item->value=std::move(value);if(runtime_profile==RuntimeProfile::UnityMono265)++d.version;return;}
        try{
            if(d.free.empty()){if(d.count==std::numeric_limits<std::int32_t>::max())throw OutOfMemoryException();d.entries.push_back({hash,KeyValuePair<K,V>{std::move(key),std::move(value)}});}
            else{i=d.free.back();d.free.pop_back();d.entries[i]={hash,KeyValuePair<K,V>{std::move(key),std::move(value)}};}
        }catch(const std::bad_alloc&){throw OutOfMemoryException();}
        ++d.count;++d.version;
    }
public:
    Dictionary()=default;
    static Dictionary make(std::int32_t capacity=0){if(capacity<0)throw ArgumentOutOfRangeException();Dictionary result;result.data_=make_ref<Storage>();try{result.data_->entries.reserve(static_cast<std::size_t>(capacity));}catch(const std::bad_alloc&){throw OutOfMemoryException();}return result;}
    bool is_null()const noexcept{return !data_;}
    Ref<Object>as_object()const{return data_;}
    static Dictionary from_object(const Ref<Object>&object){Dictionary result;if(object){result.data_=std::dynamic_pointer_cast<Storage>(object);if(!result.data_)throw InvalidCastException();}return result;}
    std::int32_t get_Count()const{return require().count;}
    Array<K> KeysToArray()const{auto&data=require();auto result=Array<K>::make(data.count);std::int32_t index=0;for(const auto&entry:data.entries)if(entry.item)result.at(index++)=entry.item->key;return result;}
    V get_Item(const K&key)const{require();auto hash=dictionary_hash(key);auto i=find(key,hash);if(i==require().entries.size())throw KeyNotFoundException();return require().entries[i].item->value;}
    void set_Item(K key,V value){put(std::move(key),std::move(value),true);}
    void Add(K key,V value){put(std::move(key),std::move(value),false);}
    bool ContainsKey(const K&key)const{require();auto hash=dictionary_hash(key);return find(key,hash)<require().entries.size();}
    bool TryGetValue(const K&key,V&value)const{require();auto hash=dictionary_hash(key);auto i=find(key,hash);if(i<require().entries.size()){value=require().entries[i].item->value;return true;}value=V{};return false;}
    bool ContainsValue(const V&value)const{for(const auto&e:require().entries)if(e.item&&default_equal(e.item->value,value))return true;return false;}
    bool Remove(const K&key){auto&d=require();auto hash=dictionary_hash(key);auto i=find(key,hash);if(i==d.entries.size())return false;try{d.free.push_back(i);}catch(const std::bad_alloc&){throw OutOfMemoryException();}d.entries[i].item.reset();--d.count;if(runtime_profile==RuntimeProfile::UnityMono265)++d.version;return true;}
    void Clear(){auto&d=require();d.entries.clear();d.free.clear();d.count=0;if(runtime_profile==RuntimeProfile::UnityMono265)++d.version;}
    class Enumerator {
        Ref<Storage>data_;std::uint32_t version_=0;std::size_t next_=0;KeyValuePair<K,V>current_{};bool disposed_=false;
        void verify()const{if(disposed_)throw ObjectDisposedException();if(!data_)throw NullReferenceException();if(version_!=data_->version)throw InvalidOperationException();}
    public:
        Enumerator()=default;explicit Enumerator(Ref<Storage>data):data_(std::move(data)),version_(data_->version){}
        bool MoveNext(){verify();while(next_<data_->entries.size()){auto&entry=data_->entries[next_++];if(entry.item){current_=*entry.item;return true;}}if(runtime_profile==RuntimeProfile::DotNet)current_={};return false;}
        KeyValuePair<K,V>get_Current()const{return current_;}
        void Reset(){verify();next_=0;current_={};}
        void Dispose(){if(runtime_profile==RuntimeProfile::UnityMono265){data_.reset();disposed_=true;}}
        void trace_edges(const EdgeVisitor&visitor)const{trace_value(data_,visitor);trace_value(current_,visitor);}
        void release_edges(){release_value(data_);release_value(current_);}
    };
    Enumerator GetEnumerator()const{require();return Enumerator(data_);}
};
} // namespace pls::cs
