#pragma once
#include "semantic_runtime.hpp"

namespace pls::cs {
template<class T,class=void>struct has_equal_operator : std::false_type {};
template<class T>struct has_equal_operator<T,std::void_t<decltype(std::declval<T>()==std::declval<T>())>> : std::true_type {};

template<class T>bool default_equal(const T&a,const T&b) {
    if constexpr(is_shared_ref<T>::value) {
        if(!a)return !b;
        auto left=std::dynamic_pointer_cast<Object>(a);
        auto right=std::dynamic_pointer_cast<Object>(b);
        if(!left||(b&&!right))throw InvalidCastException();
        return left->Equals(right);
    }
    else if constexpr(std::is_floating_point_v<T>) return a==b || (std::isnan(a)&&std::isnan(b));
    else if constexpr(has_equal_operator<T>::value) return a==b;
    else throw NotSupportedException("Value equality requires generated field comparison");
}

template<class T>struct Box : Object {
    T value;
    explicit Box(T item):value(std::move(item)){}
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(value,visitor);}
    void release_edges()override{release_value(value);}
    String ToString()override {
        if constexpr(std::is_same_v<T,bool>)return String(value?u"True":u"False");
        else if constexpr(std::is_same_v<T,char16_t>)return String(std::u16string{value});
        else if constexpr(std::is_integral_v<T>){
            auto text=std::to_string(value);
            if(!text.empty()&&text[0]=='-')return String::concat(integer_number_format.negative_sign,String::from_utf8(text.substr(1)));
            return String::from_utf8(text);
        }
        else throw NotSupportedException("Boxed value formatting requires measured type-specific implementation");
    }
    bool equals(const Ref<Object>&other)const override {
        auto typed=std::dynamic_pointer_cast<Box<T>>(other);return typed&&default_equal(value,typed->value);
    }
    std::int32_t get_hash_code()const override {
        if constexpr(std::is_integral_v<T>) {
            if constexpr(std::is_same_v<T,bool>)return value?1:0;
            else if constexpr(sizeof(T)<=4)return cast_integral<std::int32_t>(value);
            else {auto bits=static_cast<std::uint64_t>(value);return cast_integral<std::int32_t>(static_cast<std::uint32_t>(bits^(bits>>32)));}
        } else if constexpr(std::is_enum_v<T>)return cast_integral<std::int32_t>(static_cast<std::underlying_type_t<T>>(value));
        else throw NotSupportedException("Hash requires a type-specific measured implementation");
    }
};

template<class T>Ref<Object> box(T value) {
    if constexpr(is_shared_ref<T>::value) {
        auto object=std::dynamic_pointer_cast<Object>(value);
        if(value&&!object)throw InvalidCastException();return object;
    }
    else if constexpr(has_managed_object<T>::value)return value.as_object();
    else return make_ref<Box<T>>(std::move(value));
}
inline Ref<Object>box(std::nullptr_t){return nullptr;}
template<class T>T unbox(const Ref<Object>&value) {
    if constexpr(is_shared_ref<T>::value) {
        auto typed=std::dynamic_pointer_cast<typename is_shared_ref<T>::element_type>(value);
        if(value&&!typed)throw InvalidCastException();return typed;
    } else if constexpr(has_managed_object<T>::value)return T::from_object(value);
    else {
        if(!value)throw NullReferenceException();
        auto typed=std::dynamic_pointer_cast<Box<T>>(value);if(!typed)throw InvalidCastException();return typed->value;
    }
}

struct IEnumerator : Object {
    virtual bool MoveNext()=0;
    virtual Ref<Object>get_Current()const=0;
    virtual void Reset()=0;
    virtual void Dispose(){}
};

template<class T>class List {
    struct Storage : Object {
        std::string managed_type_name()const override{return "System.Collections.Generic.List`1["+managed_type_name_traits<T>::name()+"]";}
        Array<T> items=Array<T>::make(0);
        std::int32_t size=0;
        std::uint32_t version=0;
        void trace_edges(const EdgeVisitor&visitor)const override{trace_value(items,visitor);}
        void release_edges()override{release_value(items);}
    };
    Ref<Storage>data_;
    Storage&require()const{if(!data_)throw NullReferenceException();return *data_;}
    void check_index(std::int32_t index)const{if(index<0||index>=require().size)throw ArgumentOutOfRangeException();}
    void ensure_capacity(std::int32_t wanted) {
        auto&data=require();if(wanted<=data.items.length())return;
        std::int64_t capacity=data.items.length()?static_cast<std::int64_t>(data.items.length())*2:4;
        if(capacity<wanted)capacity=wanted;
        if(capacity>std::numeric_limits<std::int32_t>::max())capacity=std::numeric_limits<std::int32_t>::max();
        set_capacity(static_cast<std::int32_t>(capacity));
    }
public:
    List()=default;
    static List make(std::int32_t capacity=0) {
        if(capacity<0)throw ArgumentOutOfRangeException();
        List result;result.data_=make_ref<Storage>();result.data_->items=Array<T>::make(capacity);return result;
    }
    bool is_null()const noexcept{return !data_;}
    Ref<Object>as_object()const{return data_;}
    static List from_object(const Ref<Object>&value){List result;if(value){result.data_=std::dynamic_pointer_cast<Storage>(value);if(!result.data_)throw InvalidCastException();}return result;}
    std::int32_t count()const{return require().size;}
    std::int32_t capacity()const{return require().items.length();}
    void set_capacity(std::int32_t capacity) {
        auto&data=require();if(capacity<data.size)throw ArgumentOutOfRangeException();
        if(capacity==data.items.length())return;
        auto next=Array<T>::make(capacity);Array<T>::copy(data.items,0,next,0,data.size);data.items=std::move(next);
    }
    T get(std::int32_t index)const{check_index(index);return require().items.at(index);}
    void set(std::int32_t index,T value){check_index(index);auto&data=require();data.items.at(index)=std::move(value);if(runtime_profile==RuntimeProfile::DotNet)++data.version;}
    void add(T value) {
        auto&data=require();if(data.size==std::numeric_limits<std::int32_t>::max())throw OutOfMemoryException();
        ensure_capacity(data.size+1);data.items.at(data.size++)=std::move(value);++data.version;
    }
    void clear(){auto&data=require();for(std::int32_t i=0;i<data.size;++i)data.items.at(i)=T{};data.size=0;++data.version;}
    std::int32_t index_of(const T&value)const{const auto&data=require();for(std::int32_t i=0;i<data.size;++i)if(default_equal(data.items.at(i),value))return i;return -1;}
    std::int32_t last_index_of(const T&value)const{const auto&data=require();for(std::int32_t i=data.size;i>0;--i)if(default_equal(data.items.at(i-1),value))return i-1;return -1;}
    bool contains(const T&value)const{return index_of(value)>=0;}
    void insert(std::int32_t index,T value) {
        auto&data=require();if(index<0||index>data.size)throw ArgumentOutOfRangeException();
        if(data.size==std::numeric_limits<std::int32_t>::max())throw OutOfMemoryException();
        ensure_capacity(data.size+1);Array<T>::copy(data.items,index,data.items,index+1,data.size-index);data.items.at(index)=std::move(value);++data.size;++data.version;
    }
    void remove_at(std::int32_t index){check_index(index);auto&data=require();Array<T>::copy(data.items,index+1,data.items,index,data.size-index-1);data.items.at(--data.size)=T{};++data.version;}
    bool remove(const T&value){auto index=index_of(value);if(index<0)return false;remove_at(index);return true;}
    void remove_range(std::int32_t index,std::int32_t count) {
        auto&data=require();if(index<0||count<0)throw ArgumentOutOfRangeException();
        if(static_cast<std::int64_t>(index)+count>data.size)throw ArgumentException();
        if(count==0)return;
        Array<T>::copy(data.items,index+count,data.items,index,data.size-index-count);
        for(std::int32_t i=data.size-count;i<data.size;++i)data.items.at(i)=T{};
        data.size-=count;++data.version;
    }
    void insert_range(std::int32_t index,const Array<T>&source) {
        auto&data=require();if(source.is_null())throw ArgumentNullException();
        if(index<0||index>data.size)throw ArgumentOutOfRangeException();
        auto count=source.length();if(static_cast<std::int64_t>(data.size)+count>std::numeric_limits<std::int32_t>::max())throw OutOfMemoryException();
        if(count>0){ensure_capacity(data.size+count);Array<T>::copy(data.items,index,data.items,index+count,data.size-index);Array<T>::copy(source,0,data.items,index,count);data.size+=count;}
        if(count>0||runtime_profile==RuntimeProfile::UnityMono265)++data.version;
    }
    void insert_range(std::int32_t index,const List&source){if(source.is_null())throw ArgumentNullException();insert_range(index,source.to_array());}
    void add_range(const Array<T>&source){insert_range(count(),source);}
    void add_range(const List&source){insert_range(count(),source);}
    Array<T>to_array()const{const auto&data=require();auto output=Array<T>::make(data.size);Array<T>::copy(data.items,0,output,0,data.size);return output;}
    void trim_excess(){if(count()<static_cast<std::int32_t>(static_cast<double>(capacity())*0.9))set_capacity(count());}
    struct Enumerator {
        Ref<Storage>data;std::uint32_t version=0;std::int32_t next=0;T value{};
        void verify()const{if(!data)throw ObjectDisposedException();if(version!=data->version)throw InvalidOperationException();}
        bool move_next(){verify();if(next<0)return false;if(next<data->size){value=data->items.at(next++);return true;}next=-1;if(runtime_profile==RuntimeProfile::DotNet)value=T{};return false;}
        T current()const{return value;}
        Ref<Object>current_object()const{verify();if(next<=0)throw InvalidOperationException();return box(value);}
        void reset(){verify();next=0;if(runtime_profile==RuntimeProfile::DotNet)value=T{};}
        void dispose(){if(runtime_profile==RuntimeProfile::UnityMono265)data.reset();}
        bool MoveNext(){return move_next();}T get_Current()const{return current();}void Reset(){reset();}void Dispose(){dispose();}
        void trace_edges(const EdgeVisitor&visitor)const{trace_value(data,visitor);trace_value(value,visitor);}
        void release_edges(){release_value(data);release_value(value);}
    };
    Enumerator get_enumerator()const{auto&data=require();return Enumerator{data_,data.version,0,T{}};}
    class EnumeratorObject : public IEnumerator {
        Enumerator state_;
    public:
        explicit EnumeratorObject(Enumerator state):state_(std::move(state)){}
        void trace_edges(const EdgeVisitor&visitor)const override{state_.trace_edges(visitor);}
        void release_edges()override{state_.release_edges();}
        bool MoveNext()override{return state_.move_next();}
        Ref<Object>get_Current()const override{return state_.current_object();}
        void Reset()override{state_.reset();}void Dispose()override{state_.dispose();}
    };
    Ref<IEnumerator>as_enumerator()const{return make_ref<EnumeratorObject>(get_enumerator());}
    // Names used by Roslyn's framework symbol/accessor mapping.
    std::int32_t get_Count()const{return count();}std::int32_t get_Capacity()const{return capacity();}
    void set_Capacity(std::int32_t value){set_capacity(value);}
    T get_Item(std::int32_t index)const{return get(index);}void set_Item(std::int32_t index,T value){set(index,std::move(value));}
    void Add(T value){add(std::move(value));}void Clear(){clear();}bool Contains(const T&value)const{return contains(value);}
    std::int32_t IndexOf(const T&value)const{return index_of(value);}std::int32_t LastIndexOf(const T&value)const{return last_index_of(value);}
    void Insert(std::int32_t index,T value){insert(index,std::move(value));}void RemoveAt(std::int32_t index){remove_at(index);}bool Remove(const T&value){return remove(value);}
    void RemoveRange(std::int32_t index,std::int32_t amount){remove_range(index,amount);}
    void AddRange(const Array<T>&source){add_range(source);}void AddRange(const List&source){add_range(source);}
    void InsertRange(std::int32_t index,const Array<T>&source){insert_range(index,source);}void InsertRange(std::int32_t index,const List&source){insert_range(index,source);}
    Array<T>ToArray()const{return to_array();}void TrimExcess(){trim_excess();}Enumerator GetEnumerator()const{return get_enumerator();}
    friend bool operator==(const List&a,const List&b)noexcept{return a.data_==b.data_;}
    friend bool operator!=(const List&a,const List&b)noexcept{return !(a==b);}
};

// Corpus-proved Stack<T> subset. Other CLR Stack members deliberately have no
// mapping until they are required and independently verified.
template<class T>class Stack {
    struct Storage:Object {
        Array<T>items;
        std::int32_t size{};
        Storage(){if(runtime_profile==RuntimeProfile::DotNet)items=Array<T>::make(0);}
        std::string managed_type_name()const override{return "System.Collections.Generic.Stack`1["+managed_type_name_traits<T>::name()+"]";}
        void trace_edges(const EdgeVisitor&visitor)const override{trace_value(items,visitor);}
        void release_edges()override{release_value(items);}
    };
    Ref<Storage>data_;
    Storage&require()const{if(!data_)throw NullReferenceException();return *data_;}
public:
    Stack()=default; // Null managed reference, consistent with List/Array wrappers.
    static Stack make(){Stack result;result.data_=make_ref<Storage>();return result;}
    bool is_null()const noexcept{return !data_;}
    Ref<Object>as_object()const{return data_;}
    static Stack from_object(const Ref<Object>&value){Stack result;if(value){result.data_=std::dynamic_pointer_cast<Storage>(value);if(!result.data_)throw InvalidCastException();}return result;}
    std::int32_t count()const{return require().size;}
    std::int32_t get_Count()const{return count();}
    void Push(T value){
        auto&data=require();if(data.size==std::numeric_limits<std::int32_t>::max())throw OutOfMemoryException();
        const auto capacity=data.items.is_null()?0:data.items.length();
        if(data.size==capacity){
            std::int64_t next=capacity?static_cast<std::int64_t>(capacity)*2:(runtime_profile==RuntimeProfile::UnityMono265?16:4);
            next=std::min(next,static_cast<std::int64_t>(std::numeric_limits<std::int32_t>::max()));
            auto items=Array<T>::make(static_cast<std::int32_t>(next));if(data.size)Array<T>::copy(data.items,0,items,0,data.size);data.items=std::move(items);
        }
        data.items.at(data.size)=std::move(value);++data.size;
    }
    T Peek()const{auto&data=require();if(data.size==0)throw InvalidOperationException();return data.items.at(data.size-1);}
    T Pop(){auto&data=require();if(data.size==0)throw InvalidOperationException();T result=std::move(data.items.at(data.size-1));data.items.at(--data.size)=T{};return result;}
    friend bool operator==(const Stack&a,const Stack&b)noexcept{return a.data_==b.data_;}
    friend bool operator!=(const Stack&a,const Stack&b)noexcept{return !(a==b);}
};
} // namespace pls::cs
