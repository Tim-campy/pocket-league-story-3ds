#pragma once
// New implementation of the measured C# language contract; no original assets.
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <exception>
#include <functional>
#include <initializer_list>
#include <limits>
#include <memory>
#include <mutex>
#include <optional>
#include <string>
#include <type_traits>
#include <typeinfo>
#include <utility>
#include <vector>

namespace pls::cs {
static_assert(sizeof(std::int32_t)==4 && sizeof(std::int64_t)==8);
static_assert(sizeof(float)==4 && sizeof(double)==8);
static_assert(std::numeric_limits<float>::is_iec559 && std::numeric_limits<double>::is_iec559);

class Exception : public std::exception {
    std::string message_;
public:
    explicit Exception(std::string message="") : message_(std::move(message)) {}
    const char* what() const noexcept override { return message_.c_str(); }
    virtual const char* type_name() const noexcept { return "System.Exception"; }
};
#define PLS_CS_EXCEPTION(name, base, managed_name) \
 class name : public base { public: using base::base; \
 const char* type_name() const noexcept override {return managed_name;} };
PLS_CS_EXCEPTION(SystemException,Exception,"System.SystemException")
PLS_CS_EXCEPTION(ArithmeticException,SystemException,"System.ArithmeticException")
PLS_CS_EXCEPTION(DivideByZeroException,ArithmeticException,"System.DivideByZeroException")
PLS_CS_EXCEPTION(OverflowException,ArithmeticException,"System.OverflowException")
PLS_CS_EXCEPTION(NullReferenceException,SystemException,"System.NullReferenceException")
PLS_CS_EXCEPTION(IndexOutOfRangeException,SystemException,"System.IndexOutOfRangeException")
PLS_CS_EXCEPTION(InvalidCastException,SystemException,"System.InvalidCastException")
PLS_CS_EXCEPTION(ArrayTypeMismatchException,SystemException,"System.ArrayTypeMismatchException")
PLS_CS_EXCEPTION(InvalidOperationException,SystemException,"System.InvalidOperationException")
PLS_CS_EXCEPTION(KeyNotFoundException,SystemException,"System.Collections.Generic.KeyNotFoundException")
PLS_CS_EXCEPTION(TimeZoneNotFoundException,Exception,"System.TimeZoneNotFoundException")
PLS_CS_EXCEPTION(InvalidTimeZoneException,Exception,"System.InvalidTimeZoneException")
PLS_CS_EXCEPTION(ObjectDisposedException,InvalidOperationException,"System.ObjectDisposedException")
PLS_CS_EXCEPTION(NotSupportedException,SystemException,"System.NotSupportedException")
PLS_CS_EXCEPTION(NotImplementedException,SystemException,"System.NotImplementedException")
PLS_CS_EXCEPTION(FormatException,SystemException,"System.FormatException")
PLS_CS_EXCEPTION(OutOfMemoryException,SystemException,"System.OutOfMemoryException")
PLS_CS_EXCEPTION(UnauthorizedAccessException,SystemException,"System.UnauthorizedAccessException")
PLS_CS_EXCEPTION(ArgumentException,SystemException,"System.ArgumentException")
PLS_CS_EXCEPTION(ArgumentNullException,ArgumentException,"System.ArgumentNullException")
PLS_CS_EXCEPTION(ArgumentOutOfRangeException,ArgumentException,"System.ArgumentOutOfRangeException")
PLS_CS_EXCEPTION(IOException,SystemException,"System.IO.IOException")
PLS_CS_EXCEPTION(EndOfStreamException,IOException,"System.IO.EndOfStreamException")
#undef PLS_CS_EXCEPTION

enum class RuntimeProfile { DotNet, UnityMono265 };
// Set once by the host before starting workers. It is not a per-method option.
inline RuntimeProfile runtime_profile=RuntimeProfile::UnityMono265;
[[noreturn]] inline void throw_division_overflow() {
    if(runtime_profile==RuntimeProfile::UnityMono265)throw ArithmeticException();
    throw OverflowException();
}

template<class To,class From> To bit_copy(From from) noexcept {
    static_assert(sizeof(To)==sizeof(From));
    static_assert(std::is_trivially_copyable_v<To> && std::is_trivially_copyable_v<From>);
    To value;std::memcpy(&value,&from,sizeof(value));return value;
}

template<class To,class From> constexpr bool valid_integral_cast =
    std::is_integral_v<To> && std::is_integral_v<From> && !std::is_same_v<To,bool> && !std::is_same_v<From,bool>;

template<class To,class From> To cast_integral(From value) noexcept {
    static_assert(valid_integral_cast<To,From>);
    using U=std::make_unsigned_t<To>;
    U bits=static_cast<U>(value); // Conversion to unsigned is specified modulo2^width.
    if constexpr (std::is_signed_v<To>) return bit_copy<To>(bits);
    else return bits;
}

template<class T> T add_integer(T a,T b) noexcept {
    using U=std::make_unsigned_t<T>;
    return cast_integral<T>(static_cast<U>(static_cast<U>(a)+static_cast<U>(b)));
}
template<class T> T sub_integer(T a,T b) noexcept {
    using U=std::make_unsigned_t<T>;
    return cast_integral<T>(static_cast<U>(static_cast<U>(a)-static_cast<U>(b)));
}
template<class T> T mul_integer(T a,T b) noexcept {
    using U=std::make_unsigned_t<T>;
    // Generated binary arithmetic applies C# numeric promotion before this call.
    static_assert(sizeof(T)>=4);
    return cast_integral<T>(static_cast<U>(static_cast<U>(a)*static_cast<U>(b)));
}
template<class T> T neg_integer(T a) noexcept {return sub_integer<T>(T(0),a);}
template<class T> T div_integer(T a,T b) {
    if (b==0)throw DivideByZeroException();
    if constexpr (std::is_signed_v<T>) {
        if (a==std::numeric_limits<T>::min() && b==T(-1))throw_division_overflow();
    }
    return static_cast<T>(a/b);
}
template<class T> T mod_integer(T a,T b) {
    if (b==0)throw DivideByZeroException();
    if constexpr (std::is_signed_v<T>) {
        if (a==std::numeric_limits<T>::min() && b==T(-1))throw_division_overflow();
    }
    return static_cast<T>(a%b);
}
template<class T> T shl_integer(T a,std::int32_t amount) noexcept {
    using U=std::make_unsigned_t<T>;
    const unsigned shift=static_cast<unsigned>(amount)&(sizeof(T)*8u-1u);
    return cast_integral<T>(static_cast<U>(static_cast<U>(a)<<shift));
}
template<class T> T ushr_integer(T a,std::int32_t amount) noexcept {
    using U=std::make_unsigned_t<T>;
    const unsigned shift=static_cast<unsigned>(amount)&(sizeof(T)*8u-1u);
    return cast_integral<T>(static_cast<U>(static_cast<U>(a)>>shift));
}
template<class T> T shr_integer(T a,std::int32_t amount) noexcept {
    using U=std::make_unsigned_t<T>;
    const unsigned bits=sizeof(T)*8u;
    const unsigned shift=static_cast<unsigned>(amount)&(bits-1u);
    U result=static_cast<U>(a)>>shift;
    if constexpr (std::is_signed_v<T>) {
        if (a<0 && shift!=0)result|=static_cast<U>(~U(0))<<(bits-shift);
    }
    return cast_integral<T>(result);
}
#define PLS_CS_INTEGER_WRAPPERS(suffix,type) \
 inline type add_##suffix(type a,type b)noexcept{return add_integer(a,b);} \
 inline type sub_##suffix(type a,type b)noexcept{return sub_integer(a,b);} \
 inline type mul_##suffix(type a,type b)noexcept{return mul_integer(a,b);} \
 inline type neg_##suffix(type a)noexcept{return neg_integer(a);} \
 inline type div_##suffix(type a,type b){return div_integer(a,b);} \
 inline type mod_##suffix(type a,type b){return mod_integer(a,b);} \
 inline type shl_##suffix(type a,std::int32_t b)noexcept{return shl_integer(a,b);} \
 inline type shr_##suffix(type a,std::int32_t b)noexcept{return shr_integer(a,b);} \
 inline type ushr_##suffix(type a,std::int32_t b)noexcept{return ushr_integer(a,b);}
PLS_CS_INTEGER_WRAPPERS(i32,std::int32_t)
PLS_CS_INTEGER_WRAPPERS(i64,std::int64_t)
PLS_CS_INTEGER_WRAPPERS(u32,std::uint32_t)
PLS_CS_INTEGER_WRAPPERS(u64,std::uint64_t)
#undef PLS_CS_INTEGER_WRAPPERS

template<class To,class From>To conv_signed(From value)noexcept{
    static_assert(std::is_floating_point_v<From>&&std::is_integral_v<To>&&std::is_signed_v<To>);
    if(std::isnan(value))return runtime_profile==RuntimeProfile::UnityMono265?std::numeric_limits<To>::min():To(0);
    const long double number=static_cast<long double>(value);
    const long double lower=-std::ldexp(static_cast<long double>(1),sizeof(To)*8-1),upper=-lower;
    if(number>=upper)return runtime_profile==RuntimeProfile::UnityMono265?std::numeric_limits<To>::min():std::numeric_limits<To>::max();
    if(number<lower)return std::numeric_limits<To>::min();
    return static_cast<To>(value); // Only finite, representable values reach the native cast.
}
inline std::int32_t conv_i32(float value)noexcept{return conv_signed<std::int32_t>(value);}
inline std::int32_t conv_i32(double value)noexcept{return conv_signed<std::int32_t>(value);}
inline std::int64_t conv_i64(float value)noexcept{return conv_signed<std::int64_t>(value);}
inline std::int64_t conv_i64(double value)noexcept{return conv_signed<std::int64_t>(value);}

class String;
struct Object;
template<class T>using Ref=std::shared_ptr<T>;
using EdgeVisitor=std::function<void(const Ref<Object>&)>;
template<class T>struct is_shared_ref : std::false_type {};
template<class T>struct is_shared_ref<std::shared_ptr<T>> : std::true_type {using element_type=T;};
template<class T,class=void>struct has_managed_object : std::false_type {};
template<class T>struct has_managed_object<T,std::void_t<decltype(std::declval<T>().as_object())>> : std::true_type {};
template<class T>void trace_value(const T&value,const EdgeVisitor&visitor);
template<class T>void release_value(T&value);
struct Object : std::enable_shared_from_this<Object> {
    virtual ~Object()=default;
    std::recursive_mutex monitor;
    virtual bool equals(const std::shared_ptr<Object>&other)const{return other.get()==this;}
    virtual std::int32_t get_hash_code()const {
        auto bits=reinterpret_cast<std::uintptr_t>(this);
        return cast_integral<std::int32_t>(static_cast<std::uint32_t>(bits^(bits>>16)));
    }
    virtual bool Equals(const std::shared_ptr<Object>&other){return equals(other);}
    virtual std::int32_t GetHashCode(){return get_hash_code();}
    virtual std::string managed_type_name()const{return "System.Object";}
    virtual String ToString();
    virtual void trace_edges(const EdgeVisitor&)const{}
    virtual void release_edges(){}
};
void register_managed_object(const Ref<Object>&object);
void gc_safepoint();
void gc_collect(std::int32_t generation=2);
std::int32_t gc_max_generation()noexcept;
std::int32_t gc_generation(const Ref<Object>&object);
struct GcCollectionStats {std::size_t tracked=0,roots=0,unreachable=0,collected=0;};
GcCollectionStats gc_last_collection();
// Every worker mutating managed objects must register and reach safepoints.
// The collector does not suspend operating-system threads or inspect stacks.
class GcMutatorScope {
public:
    GcMutatorScope();~GcMutatorScope();
    GcMutatorScope(const GcMutatorScope&)=delete;
    GcMutatorScope&operator=(const GcMutatorScope&)=delete;
};
template<class T,class...Args>Ref<T> make_ref(Args&&...args) {
    try{auto result=std::make_shared<T>(std::forward<Args>(args)...);if constexpr(std::is_base_of_v<Object,T>)register_managed_object(result);return result;}
    catch(const std::bad_alloc&){throw OutOfMemoryException();}
}

class String {
    struct Storage : Object {
        const std::u16string value;
        explicit Storage(std::u16string v):value(std::move(v)){}
        String ToString()override;
        std::string managed_type_name()const override{return "System.String";}
        bool equals(const Ref<Object>&other)const override {
            auto typed=std::dynamic_pointer_cast<Storage>(other);return typed&&value==typed->value;
        }
        std::int32_t get_hash_code()const noexcept override {
            std::int32_t hash=0;for(char16_t unit:value)hash=add_i32(mul_i32(hash,31),static_cast<std::int32_t>(unit));return hash;
        }
    };
    std::shared_ptr<Storage> data_;
    const std::u16string& require()const {
        if (!data_)throw NullReferenceException();return data_->value;
    }
public:
    String()noexcept=default;
    String(std::nullptr_t)noexcept {}
    String(const char16_t* text) {if(text)data_=make_ref<Storage>(std::u16string(text));}
    String(const char16_t* text,std::size_t length) {
        if(!text && length)throw ArgumentNullException();
        if(text)data_=make_ref<Storage>(std::u16string(text,length));
    }
    explicit String(std::u16string text):data_(make_ref<Storage>(std::move(text))){}
    static String from_utf8(const std::string& text);
    std::string utf8()const;
    bool is_null()const noexcept{return !data_;}
    Ref<Object> as_object()const{return data_;}
    static String from_object(const Ref<Object>&object){String result;if(object){result.data_=std::dynamic_pointer_cast<Storage>(object);if(!result.data_)throw InvalidCastException();}return result;}
    std::int32_t get_hash_code()const{require();return data_->get_hash_code();}
    std::int32_t length()const{return static_cast<std::int32_t>(require().size());}
    char16_t at(std::int32_t index)const {
        const auto& s=require();
        if(index<0 || static_cast<std::size_t>(index)>=s.size())throw IndexOutOfRangeException();
        return s[static_cast<std::size_t>(index)];
    }
    const std::u16string& code_units()const{return require();}
    String substring(std::int32_t start,std::int32_t count)const {
        const auto& s=require();
        if(start<0 || count<0 || static_cast<std::uint64_t>(start)+static_cast<std::uint64_t>(count)>s.size())
            throw ArgumentOutOfRangeException();
        return String(s.substr(static_cast<std::size_t>(start),static_cast<std::size_t>(count)));
    }
    static std::int32_t compare_ordinal(const String& a,const String& b)noexcept {
        if(a.is_null())return b.is_null()?0:-1;
        if(b.is_null())return 1;
        const auto& x=a.data_->value;const auto& y=b.data_->value;
        for(std::size_t i=0;i<std::min(x.size(),y.size());++i)
            if(x[i]!=y[i])return static_cast<std::int32_t>(x[i])-static_cast<std::int32_t>(y[i]);
        return static_cast<std::int32_t>(x.size())-static_cast<std::int32_t>(y.size());
    }
    static String concat(const String& a,const String& b) {
        std::u16string result;if(a.data_)result=a.data_->value;if(b.data_)result+=b.data_->value;return String(std::move(result));
    }
    friend bool operator==(const String&a,const String&b)noexcept{return compare_ordinal(a,b)==0;}
    friend bool operator!=(const String&a,const String&b)noexcept{return !(a==b);}
};

inline String Object::ToString(){return String::from_utf8(managed_type_name());}
inline String String::Storage::ToString(){return String::from_object(shared_from_this());}

struct ArrayBase : Object {
    virtual std::int32_t get_Length()const=0;
    virtual const std::type_info& element_type()const noexcept=0;
    virtual bool copy_same_to(ArrayBase&dest,std::int32_t source_index,std::int32_t dest_index,std::int32_t count)const=0;
};
inline Ref<ArrayBase>array_cast(const Ref<Object>&value){auto result=std::dynamic_pointer_cast<ArrayBase>(value);if(value&&!result)throw InvalidCastException();return result;}
void array_copy(const Ref<ArrayBase>&source,std::int32_t source_index,const Ref<ArrayBase>&dest,std::int32_t dest_index,std::int32_t count);

template<class T> class Array {
    struct Storage : ArrayBase {
        std::int32_t size;
        std::unique_ptr<T[]> values;
        explicit Storage(std::int32_t n):size(n),values(n?std::make_unique<T[]>(static_cast<std::size_t>(n)):nullptr){}
        std::int32_t get_Length()const override{return size;}
        const std::type_info&element_type()const noexcept override{return typeid(T);}
        void trace_edges(const EdgeVisitor&visitor)const override{for(std::int32_t i=0;i<size;++i)trace_value(values[static_cast<std::size_t>(i)],visitor);}
        void release_edges()override{for(std::int32_t i=0;i<size;++i)release_value(values[static_cast<std::size_t>(i)]);}
        bool copy_same_to(ArrayBase&dest,std::int32_t source_index,std::int32_t dest_index,std::int32_t count)const override{
            auto target=dynamic_cast<Storage*>(&dest);if(!target)return false;
            if(target==this&&dest_index>source_index){for(std::int32_t i=count;i>0;--i)target->values[static_cast<std::size_t>(dest_index+i-1)]=values[static_cast<std::size_t>(source_index+i-1)];}
            else for(std::int32_t i=0;i<count;++i)target->values[static_cast<std::size_t>(dest_index+i)]=values[static_cast<std::size_t>(source_index+i)];
            return true;
        }
    };
    std::shared_ptr<Storage> data_;
    const Storage& require()const{if(!data_)throw NullReferenceException();return *data_;}
public:
    Array()noexcept=default;
    Array(std::nullptr_t)noexcept{}
    Array(std::initializer_list<T> values):Array(from(values)){}
    static Array make(std::int32_t size) {
        if(size<0)throw OverflowException();
        Array result;
        try{result.data_=make_ref<Storage>(size);}catch(const std::bad_alloc&){throw OutOfMemoryException();}
        return result;
    }
    static Array from(std::initializer_list<T> values) {
        if(values.size()>static_cast<std::size_t>(std::numeric_limits<std::int32_t>::max()))throw OutOfMemoryException();
        Array result=make(static_cast<std::int32_t>(values.size()));
        std::copy(values.begin(),values.end(),result.data_->values.get());return result;
    }
    bool is_null()const noexcept{return !data_;}
    Ref<Object> as_object()const{return data_;}
    static Array from_object(const Ref<Object>&object){Array result;if(object){result.data_=std::dynamic_pointer_cast<Storage>(object);if(!result.data_)throw InvalidCastException();}return result;}
    std::int32_t length()const{return require().size;}
    T& at(std::int32_t index)const {
        const auto& s=require();if(index<0 || index>=s.size)throw IndexOutOfRangeException();
        return s.values[static_cast<std::size_t>(index)];
    }
    T& operator[](std::int32_t index)const{return at(index);}
    Array clone()const {
        Array result=make(length());for(std::int32_t i=0;i<length();++i)result.at(i)=at(i);return result;
    }
    static void copy(const Array& source,std::int32_t source_index,const Array& dest,std::int32_t dest_index,std::int32_t count) {
        if(source.is_null())throw ArgumentNullException();if(dest.is_null())throw ArgumentNullException();
        if(source_index<0 || dest_index<0 || count<0)throw ArgumentOutOfRangeException();
        if(static_cast<std::int64_t>(source_index)+count>source.length() || static_cast<std::int64_t>(dest_index)+count>dest.length())throw ArgumentException();
        if(source.data_==dest.data_ && dest_index>source_index) {
            for(std::int32_t i=count;i>0;--i)dest.at(dest_index+i-1)=source.at(source_index+i-1);
        } else for(std::int32_t i=0;i<count;++i)dest.at(dest_index+i)=source.at(source_index+i);
    }
    friend bool operator==(const Array&a,const Array&b)noexcept{return a.data_==b.data_;}
    friend bool operator!=(const Array&a,const Array&b)noexcept{return !(a==b);}
};

template<class T>Ref<T> nonnull(Ref<T> value){if(!value)throw NullReferenceException();return value;}
Array<std::uint8_t>encoding_utf8_get_bytes(const String&value);
String encoding_utf8_get_string(const Array<std::uint8_t>&value);
String encoding_utf8_get_string(const Array<std::uint8_t>&value,std::int32_t offset,std::int32_t count);
template<class T,class U>Ref<T> as(const Ref<U>&value){return std::dynamic_pointer_cast<T>(value);}
template<class T,class U>Ref<T> cast(const Ref<U>&value){auto result=as<T>(value);if(value&&!result)throw InvalidCastException();return result;}
template<class T>struct Cell : Object {T value{};Cell()=default;explicit Cell(T v):value(std::move(v)){};
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(value,visitor);}
    void release_edges()override{release_value(value);}
};
template<class F>bool exception_filter(F&&body)noexcept{try{return body();}catch(...){return false;}}

// Execute cleanup outside C++ exception unwinding: a cleanup exception replaces
// an outstanding exception, matching C#finally. Throwing RAII destructors do not.
template<class F,class G>auto run_finally(F&&body,G&&cleanup)->std::invoke_result_t<F> {
    using R=std::invoke_result_t<F>;
    std::exception_ptr pending;
    if constexpr(std::is_void_v<R>) {
        try{body();}catch(...){pending=std::current_exception();}
        cleanup();if(pending)std::rethrow_exception(pending);
    } else {
        std::optional<R> result;
        try{result.emplace(body());}catch(...){pending=std::current_exception();}
        cleanup();if(pending)std::rethrow_exception(pending);return std::move(*result);
    }
}

template<class Signature>class Delegate;
template<class R,class...Args>class Delegate<R(Args...)> {
    struct Binding{std::shared_ptr<void>target;std::weak_ptr<Object>managed_target;std::string method;std::function<R(Args...)>function;};
    std::vector<Binding> bindings_;
    static bool equal_binding(const Binding&a,const Binding&b){return a.target==b.target&&a.method==b.method;}
public:
    Delegate()=default;
    template<class T,class F>static Delegate bind(std::shared_ptr<T>target,std::string method,F&&function) {
        std::weak_ptr<Object>managed;
        if constexpr(std::is_base_of_v<Object,T>)managed=target;
        Delegate result;result.bindings_.push_back({target,managed,std::move(method),std::forward<F>(function)});return result;
    }
    template<class F>static Delegate from_static(std::string method,F&&function) {
        return bind(std::shared_ptr<void>(),std::move(method),std::forward<F>(function));
    }
    bool is_null()const noexcept{return bindings_.empty();}
    explicit operator bool()const noexcept{return !is_null();}
    void trace_edges(const EdgeVisitor&visitor)const{for(const auto&binding:bindings_)if(auto target=binding.managed_target.lock())visitor(target);}
    void release_edges(){bindings_.clear();}
    R operator()(Args...args)const {
        if(is_null())throw NullReferenceException();
        const auto snapshot=bindings_; // Removing handlers during invocation affects the next call.
        if constexpr(std::is_void_v<R>) {for(const auto&b:snapshot)b.function(args...);}
        else {std::optional<R>result;for(const auto&b:snapshot)result.emplace(b.function(args...));return std::move(*result);}
    }
    Delegate& operator+=(const Delegate&other){bindings_.insert(bindings_.end(),other.bindings_.begin(),other.bindings_.end());return *this;}
    Delegate& operator-=(const Delegate&other) {
        if(other.bindings_.empty() || other.bindings_.size()>bindings_.size())return *this;
        for(std::size_t end=bindings_.size();end>=other.bindings_.size();--end) {
            const std::size_t start=end-other.bindings_.size();bool equal=true;
            for(std::size_t i=0;i<other.bindings_.size();++i)if(!equal_binding(bindings_[start+i],other.bindings_[i])){equal=false;break;}
            if(equal){bindings_.erase(bindings_.begin()+static_cast<std::ptrdiff_t>(start),bindings_.begin()+static_cast<std::ptrdiff_t>(end));break;}
        }
        return *this;
    }
    friend Delegate operator+(Delegate a,const Delegate&b){a+=b;return a;}
    friend Delegate operator-(Delegate a,const Delegate&b){a-=b;return a;}
};
String convert_to_base64_string(const Array<std::uint8_t>& value);
Array<std::uint8_t> convert_from_base64_string(const String& value);
struct IntegerNumberFormat {
    String positive_sign=String(u"+");
    String negative_sign=String(u"-");
};
// Configure from the selected managed culture before workers start.
inline IntegerNumberFormat integer_number_format;
std::int32_t int32_parse(const String&value,bool hexadecimal=false);
std::int64_t int64_parse(const String&value,bool hexadecimal=false);

} // namespace pls::cs

#include "managed_collections.hpp"

namespace pls::cs {
template<class T,class=void>struct has_trace_edges : std::false_type{};
template<class T>struct has_trace_edges<T,std::void_t<decltype(std::declval<const T&>().trace_edges(std::declval<const EdgeVisitor&>()))>>:std::true_type{};
template<class T,class=void>struct has_release_edges : std::false_type{};
template<class T>struct has_release_edges<T,std::void_t<decltype(std::declval<T&>().release_edges())>>:std::true_type{};
template<class T>void trace_value(const T&value,const EdgeVisitor&visitor){
    if constexpr(is_shared_ref<T>::value){
        using Element=typename is_shared_ref<T>::element_type;
        if constexpr(std::is_base_of_v<Object,Element>){if(value)visitor(std::static_pointer_cast<Object>(value));}
        else if constexpr(std::is_polymorphic_v<Element>){if(auto object=std::dynamic_pointer_cast<Object>(value))visitor(object);}
    }else if constexpr(has_managed_object<T>::value){if(auto object=value.as_object())visitor(object);}
    else if constexpr(has_trace_edges<T>::value)value.trace_edges(visitor);
}
template<class T>void release_value(T&value){
    if constexpr(is_shared_ref<T>::value)value.reset();
    else if constexpr(has_managed_object<T>::value)value=T{};
    else if constexpr(has_release_edges<T>::value)value.release_edges();
}
} // namespace pls::cs
