#pragma once
#include "source_allocation_probe.hpp"
#include "memory_ranges.hpp"
#include "../../runtime/managed_reference.hpp"
#include "../../runtime/tracing_gc.hpp"
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
#include <stdexcept>
#include <type_traits>
#include <typeinfo>
#include <utility>
#include <vector>
#include <tuple>

namespace pls::cs {
static_assert(sizeof(std::int32_t)==4 && sizeof(std::int64_t)==8);
static_assert(sizeof(float)==4 && sizeof(double)==8);
static_assert(std::numeric_limits<float>::is_iec559 && std::numeric_limits<double>::is_iec559);

struct Object;
struct ExceptionIdentity {mutable std::mutex mutex;mutable Weak<Object> managed_view;};
class Exception : public std::exception {
    std::string message_;
    bool default_message_{true};
    std::shared_ptr<ExceptionIdentity> identity_=std::make_shared<ExceptionIdentity>();
public:
    Exception()=default;
    explicit Exception(std::string message) : message_(std::move(message)),default_message_(false) {}
    const char* what() const noexcept override { return message_.c_str(); }
    virtual const char* type_name() const noexcept { return "System.Exception"; }
    bool uses_default_message()const noexcept{return default_message_;}
    const std::shared_ptr<ExceptionIdentity>& identity_token()const noexcept{return identity_;}
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
PLS_CS_EXCEPTION(UriFormatException,FormatException,"System.UriFormatException")
PLS_CS_EXCEPTION(OutOfMemoryException,SystemException,"System.OutOfMemoryException")
PLS_CS_EXCEPTION(UnauthorizedAccessException,SystemException,"System.UnauthorizedAccessException")
PLS_CS_EXCEPTION(ArgumentException,SystemException,"System.ArgumentException")
PLS_CS_EXCEPTION(ArgumentNullException,ArgumentException,"System.ArgumentNullException")
PLS_CS_EXCEPTION(ArgumentOutOfRangeException,ArgumentException,"System.ArgumentOutOfRangeException")
PLS_CS_EXCEPTION(IOException,SystemException,"System.IO.IOException")
PLS_CS_EXCEPTION(EndOfStreamException,IOException,"System.IO.EndOfStreamException")
#undef PLS_CS_EXCEPTION

[[noreturn]] void throw_null_reference();
[[noreturn]] void throw_array_bounds();
[[noreturn]] void throw_array_type_mismatch();

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
    // Signed minima are exact powers of two in every supported FP format.
    // Keep the exclusive upper bound without a runtime libm call per cast.
    constexpr long double lower=static_cast<long double>(std::numeric_limits<To>::min()),upper=-lower;
    if(number>=upper)return runtime_profile==RuntimeProfile::UnityMono265?std::numeric_limits<To>::min():std::numeric_limits<To>::max();
    if(number<lower)return std::numeric_limits<To>::min();
    return static_cast<To>(value); // Only finite, representable values reach the native cast.
}
inline std::int32_t conv_i32(float value)noexcept{return conv_signed<std::int32_t>(value);}
inline std::int32_t conv_i32(double value)noexcept{return conv_signed<std::int32_t>(value);}
inline std::int64_t conv_i64(float value)noexcept{return conv_signed<std::int64_t>(value);}
inline std::int64_t conv_i64(double value)noexcept{return conv_signed<std::int64_t>(value);}
template<class T>T math_abs(T value){
    if constexpr(std::is_integral_v<T>){static_assert(std::is_signed_v<T>);if(value==std::numeric_limits<T>::min())throw OverflowException();return value<0?neg_integer(value):value;}
    else return std::fabs(value);
}

class String;
struct Object;
inline bool reference_equals(const Ref<Object>& left,const Ref<Object>& right){return raw(left)==raw(right);}
using EdgeVisitor=std::function<void(const Ref<Object>&)>;
// Exact roots owned by generated static fields or native callback queues.
// Registration is per owner/lifetime, never per managed reference copy.
class GcRootProvider {
    std::size_t token_;
public:
    explicit GcRootProvider(std::function<void(const EdgeVisitor&)> provider);
    ~GcRootProvider();
    GcRootProvider(const GcRootProvider&)=delete;
    GcRootProvider&operator=(const GcRootProvider&)=delete;
};
void visit_gc_roots(const EdgeVisitor& visitor);
template<class T>struct is_shared_ref : std::false_type {};
template<class T>struct is_shared_ref<std::shared_ptr<T>> : std::true_type {using element_type=T;};
template<class T>struct is_shared_ref<T*> : std::true_type {using element_type=T;};
template<class T,class=void>struct has_managed_object : std::false_type {};
template<class T>struct has_managed_object<T,std::void_t<decltype(std::declval<T>().as_object())>> : std::true_type {};
template<class T>void trace_value(const T&value,const EdgeVisitor&visitor);
template<class T>void release_value(T&value);
struct Object
#if !PLS_TRACING_GC
 : std::enable_shared_from_this<Object>
#endif
 {
#if PLS_TRACING_GC
    Object* shared_from_this()noexcept{return this;}
#endif
    static bool source_reference_assignable(const std::type_info& target){return target==typeid(Object);}
    virtual ~Object()=default;
    std::recursive_mutex monitor;
    virtual bool equals(const Ref<Object>&other)const{return raw(other)==this;}
    virtual std::int32_t get_hash_code()const {
        auto bits=reinterpret_cast<std::uintptr_t>(this);
        return cast_integral<std::int32_t>(static_cast<std::uint32_t>(bits^(bits>>16)));
    }
    virtual bool Equals(const Ref<Object>&other){return equals(other);}
    virtual std::int32_t GetHashCode(){return get_hash_code();}
    virtual std::string managed_type_name()const{return "System.Object";}
    virtual std::string managed_delegate_method_id(const std::string& slot)const{return slot;}
    virtual String ToString();
    virtual void trace_edges(const EdgeVisitor&)const{}
    virtual void release_edges(){}
    virtual void memory_ranges(const memory::RangeVisitor&)const{}
};
void register_managed_object(const Ref<Object>&object,std::size_t body_bytes=0,const void*body_begin=nullptr);
// Cooperative read-only snapshot: never collects, advances generations or
// changes game references. Callback must not allocate managed objects.
void visit_managed_memory(const memory::RangeVisitor&,const std::function<void()>&finish={});
void gc_safepoint();
void gc_collect(std::int32_t generation=2);
#if PLS_TRACING_GC
void gc_request_collection();
void gc_frame_end();
// Loading safe point: collects only when the volume threshold is due. Called
// by the platform after a synchronous UI-thread call returns (the slice loop
// of ResourceManager.LoadStart runs inline on the UI thread for many slices).
void gc_loading_safepoint();
#else
inline void gc_request_collection(){}
inline void gc_frame_end(){}
inline void gc_loading_safepoint(){}
#endif
std::int32_t gc_max_generation()noexcept;
std::int32_t gc_generation(const Ref<Object>&object);
struct GcCollectionStats {std::size_t tracked=0,roots=0,unreachable=0,collected=0;};
GcCollectionStats gc_last_collection();
struct GcRegistryStats {std::size_t entries=0,expired=0;};
GcRegistryStats gc_registry_stats(); // Read-only bookkeeping measurement, outside timed frames.
// Every worker mutating managed objects must register and reach safepoints.
// The collector does not suspend operating-system threads or inspect stacks.
class GcMutatorScope {
public:
    GcMutatorScope();~GcMutatorScope();
    GcMutatorScope(const GcMutatorScope&)=delete;
    GcMutatorScope&operator=(const GcMutatorScope&)=delete;
};
// A registered mutator may block in native code after converting every managed
// input to native values. No managed object access/allocation/callback is allowed
// until the outermost scope exits. Reentry waits for an ongoing collection.
class GcNativeBlockingScope {
public:
    GcNativeBlockingScope();~GcNativeBlockingScope();
    GcNativeBlockingScope(const GcNativeBlockingScope&)=delete;
    GcNativeBlockingScope&operator=(const GcNativeBlockingScope&)=delete;
};
// Source lock(object): evaluate once, retain the identity, allow recursion,
// release on every C++ scope exit. Waiting cooperates with the managed GC.
class MonitorScope {
    Ref<Object> target_{};
public:
    explicit MonitorScope(Ref<Object> target);
    ~MonitorScope();
    MonitorScope(const MonitorScope&)=delete;
    MonitorScope&operator=(const MonitorScope&)=delete;
};
#if PLS_TRACING_GC
gc::Heap& tracing_heap();
void ensure_gc_thread();
#endif
template<class T,class=void>struct stable_gc_buffers:std::false_type{};
template<class T>struct stable_gc_buffers<T,std::void_t<decltype(T::pls_stable_gc_buffers)>>:std::bool_constant<T::pls_stable_gc_buffers>{};
template<class T,class...Args>Ref<T> make_ref(Args&&...args) {
#if PLS_TRACING_GC
    static_assert(std::is_base_of_v<Object,T>,"Managed allocation requires an exact Object descriptor");
    try{
        ensure_gc_thread();
        gc::Descriptor descriptor;
        descriptor.managed_base=[](void* pointer)->void*{return static_cast<Object*>(static_cast<T*>(pointer));};
        if constexpr(!std::is_same_v<decltype(&T::trace_edges),decltype(&Object::trace_edges)>)descriptor.trace=[](const void* pointer,gc::Edges edges){
            static_cast<const T*>(pointer)->trace_edges([edges](const Ref<Object>& child){edges(child);});
        };
        if constexpr(!std::is_same_v<decltype(&T::memory_ranges),decltype(&Object::memory_ranges)>){
        descriptor.ranges=[](const void* pointer,gc::Ranges ranges){
            static_cast<const T*>(pointer)->memory_ranges([ranges](const void* begin,std::size_t bytes,memory::Category category){
                if(category==memory::Category::managed_heap)ranges(begin,bytes);
            });
        };
        descriptor.retained_ranges=[](const void* pointer,gc::Ranges ranges){
            static_cast<const T*>(pointer)->memory_ranges([ranges](const void* begin,std::size_t bytes,memory::Category){ranges(begin,bytes);});
        };
        }
        descriptor.stable_ranges=stable_gc_buffers<T>::value;
        return gc::make_described<T>(tracing_heap(),descriptor,std::forward<Args>(args)...);
    }catch(const std::bad_alloc&){throw OutOfMemoryException();}
    catch(const std::logic_error&error){throw InvalidOperationException(error.what());}
#else
    try{
        if constexpr(gc::Allocation<T>::custom){auto allocation=gc::Allocation<T>::create(std::forward<Args>(args)...);auto bytes=gc::Allocation<T>::bytes(*allocation);auto result=std::shared_ptr<T>(std::move(allocation));if constexpr(std::is_base_of_v<Object,T>)register_managed_object(result,bytes,result.get());return result;}
        else{auto result=std::make_shared<T>(std::forward<Args>(args)...);if constexpr(std::is_base_of_v<Object,T>)register_managed_object(result,sizeof(T),result.get());return result;}
    }
    catch(const std::bad_alloc&){throw OutOfMemoryException();}
#endif
}

class String {
    struct Storage : Object {
        static constexpr bool pls_stable_gc_buffers=true;
        const std::u16string value;
        void memory_ranges(const memory::RangeVisitor&visit)const override{visit(value.data(),(value.capacity()+1)*sizeof(char16_t),memory::Category::managed_heap);}
        explicit Storage(std::u16string v):value(std::move(v)){}
        String ToString()override;
        std::string managed_type_name()const override{return "System.String";}
        bool equals(const Ref<Object>&other)const override {
            auto typed=pls::cs::dynamic_pointer_cast<Storage>(other);return typed&&value==typed->value;
        }
        std::int32_t get_hash_code()const noexcept override {
            std::int32_t hash=0;for(char16_t unit:value)hash=add_i32(mul_i32(hash,31),static_cast<std::int32_t>(unit));return hash;
        }
    };
    Ref<Storage> data_{};
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
    static String literal(const char16_t* text,std::size_t length);
    static String from_utf8(const std::string& text);
    std::string utf8()const;
    bool is_null()const noexcept{return !data_;}
    Ref<Object> as_object()const{return data_;}
    static String from_object(const Ref<Object>&object){String result;if(object){result.data_=pls::cs::dynamic_pointer_cast<Storage>(object);if(!result.data_)throw InvalidCastException();}return result;}
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
    virtual bool reference_element_is_a(const std::type_info&)const{return false;}
    virtual Ref<Object> reference_item(std::int32_t)const{throw ArrayTypeMismatchException();}
    virtual void reference_item(std::int32_t,const Ref<Object>&){throw ArrayTypeMismatchException();}
    virtual Ref<ArrayBase> clone_storage()const=0;
};
inline Ref<ArrayBase>array_cast(const Ref<Object>&value){auto result=pls::cs::dynamic_pointer_cast<ArrayBase>(value);if(value&&!result)throw InvalidCastException();return result;}
void array_copy(const Ref<ArrayBase>&source,std::int32_t source_index,const Ref<ArrayBase>&dest,std::int32_t dest_index,std::int32_t count);

template<class T>class Array;
template<class Signature>class Delegate;
// These wrappers are value-sized in C++, but each element is a managed
// reference in the 32-bit source ABI (including jagged arrays).
template<class T>struct is_managed_reference_element:is_shared_ref<T>{};
template<>struct is_managed_reference_element<String>:std::true_type{};
template<class T>struct is_managed_reference_element<Array<T>>:std::true_type{};
template<class Signature>struct is_managed_reference_element<Delegate<Signature>>:std::true_type{};
template<class T>struct managed_type_name_traits {
    static std::string name(){throw NotSupportedException(std::string("Managed type name requires generated metadata for this value type: ")+typeid(T).name());}
};
#define PLS_CS_TYPE_NAME(cpp,managed) template<>struct managed_type_name_traits<cpp>{static std::string name(){return managed;}};
PLS_CS_TYPE_NAME(bool,"System.Boolean")
PLS_CS_TYPE_NAME(char16_t,"System.Char")
PLS_CS_TYPE_NAME(std::uint8_t,"System.Byte")
PLS_CS_TYPE_NAME(std::int8_t,"System.SByte")
PLS_CS_TYPE_NAME(std::int16_t,"System.Int16")
PLS_CS_TYPE_NAME(std::uint16_t,"System.UInt16")
PLS_CS_TYPE_NAME(std::int32_t,"System.Int32")
PLS_CS_TYPE_NAME(std::uint32_t,"System.UInt32")
PLS_CS_TYPE_NAME(std::int64_t,"System.Int64")
PLS_CS_TYPE_NAME(std::uint64_t,"System.UInt64")
PLS_CS_TYPE_NAME(float,"System.Single")
PLS_CS_TYPE_NAME(double,"System.Double")
PLS_CS_TYPE_NAME(String,"System.String")
PLS_CS_TYPE_NAME(Ref<Object>,"System.Object")
#undef PLS_CS_TYPE_NAME
template<class T,class=void>struct generated_reference_type_name {
    static std::string name(){throw NotSupportedException(std::string("Managed reference type lacks a generated name: ")+typeid(T).name());}
};
template<class T>struct generated_reference_type_name<T,std::void_t<decltype(T::source_managed_type_name())>>{
    static std::string name(){return T::source_managed_type_name();}
};
template<class T>struct managed_type_name_traits<Ref<T>>{
    static std::string name(){return generated_reference_type_name<T>::name();}
};
template<class T>struct managed_type_name_traits<Array<T>>{static std::string name(){return managed_type_name_traits<T>::name()+"[]";}};
template<class T,class=void>struct reference_assignability {
    // A CLR interface is an object reference even when its native ABI uses a
    // separate polymorphic base. Other ancestry needs explicit source metadata.
    static bool is_a(const std::type_info& target){return target==typeid(T)||target==typeid(Object);}
};
template<class T>struct reference_assignability<T,std::void_t<decltype(T::source_reference_assignable(std::declval<const std::type_info&>()))>>{
    static bool is_a(const std::type_info& target){return target==typeid(T)||T::source_reference_assignable(target);}
};

template<bool Enabled>struct ArrayViewStorage {
    Ref<ArrayBase> array_view_{};
    const Ref<ArrayBase>& covariance_view()const noexcept{return array_view_;}
    void set_covariance_view(Ref<ArrayBase> value){array_view_=std::move(value);}
};
template<>struct ArrayViewStorage<false> {
    Ref<ArrayBase> covariance_view()const noexcept{return {};}
};
template<class T> class Array : private ArrayViewStorage<is_shared_ref<T>::value> {
    using ArrayViewStorage<is_shared_ref<T>::value>::covariance_view;
    struct Storage : ArrayBase {
        static constexpr bool pls_stable_gc_buffers=true;
        std::int32_t size;
        // A real placement-constructed T[n] follows the header. No flexible
        // member or pointer arithmetic outside an array object is used.
        static constexpr std::size_t alignment(){return alignof(T)>64?alignof(T):64;}
        static constexpr std::size_t payload_offset(){return (sizeof(Storage)+alignof(T)-1)/alignof(T)*alignof(T);}
        static std::size_t allocation_bytes(std::int32_t n){
            // The source target is 32-bit Mono. A reference-array payload plus
            // its 16-byte MonoArray header must fit its 32-bit byte count.
            // Do not let a 64-bit development host attempt a 17 GB allocation
            // which the source runtime rejects before calling its allocator.
            if constexpr(is_managed_reference_element<T>::value){
                constexpr std::uint64_t max_reference_count=(UINT64_C(0xffffffff)-16)/4;
                if(static_cast<std::uint64_t>(n)>max_reference_count)throw OutOfMemoryException();
            }
            if(n<0)throw OverflowException();
            if(static_cast<std::size_t>(n)>(std::numeric_limits<std::size_t>::max()-payload_offset())/sizeof(T))throw OutOfMemoryException();
            return payload_offset()+static_cast<std::size_t>(n)*sizeof(T);
        }
        static void* operator new(std::size_t,std::int32_t n){return ::operator new(allocation_bytes(n),std::align_val_t(alignment()));}
        static void operator delete(void* p)noexcept{::operator delete(p,std::align_val_t(alignment()));}
        static void operator delete(void* p,std::int32_t)noexcept{Storage::operator delete(p);}
        T* values()const noexcept{return size?std::launder(reinterpret_cast<T*>(reinterpret_cast<std::uintptr_t>(this)+payload_offset())):nullptr;}
        explicit Storage(std::int32_t n):size(n){if(n)::new(reinterpret_cast<void*>(reinterpret_cast<std::uintptr_t>(this)+payload_offset())) T[static_cast<std::size_t>(n)]{};}
        ~Storage()override{if(size)std::destroy_n(values(),size);}
        static std::unique_ptr<Storage> pls_allocate(std::int32_t n){return std::unique_ptr<Storage>(new(n) Storage(n));}
        std::size_t pls_allocation_bytes()const{return allocation_bytes(size);}
        std::int32_t get_Length()const override{return size;}
        std::string managed_type_name()const override{return managed_type_name_traits<T>::name()+"[]";}
        const std::type_info&element_type()const noexcept override{return typeid(T);}
        void trace_edges(const EdgeVisitor&visitor)const override{for(std::int32_t i=0;i<size;++i)trace_value(values()[static_cast<std::size_t>(i)],visitor);}
        void release_edges()override{for(std::int32_t i=0;i<size;++i)release_value(values()[static_cast<std::size_t>(i)]);}
        bool reference_element_is_a(const std::type_info& target)const override{
            if constexpr(is_shared_ref<T>::value){using E=typename is_shared_ref<T>::element_type;return reference_assignability<E>::is_a(target);}
            else return false;
        }
        Ref<Object> reference_item(std::int32_t index)const override{
            if(index<0||index>=size)throw_array_bounds();
            if constexpr(is_shared_ref<T>::value)return pls::cs::dynamic_pointer_cast<Object>(values()[static_cast<std::size_t>(index)]);
            else throw_array_type_mismatch();
        }
        void reference_item(std::int32_t index,const Ref<Object>& value)override{
            if(index<0||index>=size)throw_array_bounds();
            if constexpr(is_shared_ref<T>::value){using E=typename is_shared_ref<T>::element_type;auto typed=pls::cs::dynamic_pointer_cast<E>(value);if(value&&!typed)throw_array_type_mismatch();values()[static_cast<std::size_t>(index)]=std::move(typed);}
            else throw_array_type_mismatch();
        }
        Ref<ArrayBase> clone_storage()const override{auto result=make_ref<Storage>(size);for(std::int32_t i=0;i<size;++i)result->values()[static_cast<std::size_t>(i)]=values()[static_cast<std::size_t>(i)];return result;}
        bool copy_same_to(ArrayBase&dest,std::int32_t source_index,std::int32_t dest_index,std::int32_t count)const override{
            auto target=dynamic_cast<Storage*>(&dest);if(!target)return false;
            if(target==this&&dest_index>source_index){for(std::int32_t i=count;i>0;--i)target->values()[static_cast<std::size_t>(dest_index+i-1)]=values()[static_cast<std::size_t>(source_index+i-1)];}
            else for(std::int32_t i=0;i<count;++i)target->values()[static_cast<std::size_t>(dest_index+i)]=values()[static_cast<std::size_t>(source_index+i)];
            return true;
        }
    };
    Ref<Storage> data_{};
    const Storage& require()const{if(covariance_view())throw_array_type_mismatch();if(!data_)throw_null_reference();return *data_;}
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
        std::copy(values.begin(),values.end(),result.data_->values());return result;
    }
    bool is_null()const noexcept{return !data_&&!covariance_view();}
    Ref<Object> as_object()const{return covariance_view()?covariance_view():data_;}
    static Array from_object(const Ref<Object>&object){
        Array result;if(!object)return result;result.data_=pls::cs::dynamic_pointer_cast<Storage>(object);if(result.data_)return result;
        if constexpr(is_shared_ref<T>::value){auto array=pls::cs::dynamic_pointer_cast<ArrayBase>(object);if(array&&array->reference_element_is_a(typeid(typename is_shared_ref<T>::element_type))){result.set_covariance_view(std::move(array));return result;}}
        throw InvalidCastException();
    }
    template<class U>static Array covariant_from(const Array<U>& source){static_assert(is_shared_ref<T>::value&&is_shared_ref<U>::value);return from_object(source.as_object());}
    std::int32_t length()const{if(covariance_view())return covariance_view()->get_Length();return require().size;}
    T& at(std::int32_t index)const {
        if(covariance_view()){if(index<0||index>=covariance_view()->get_Length())throw_array_bounds();throw_array_type_mismatch();}
        const auto& s=require();if(static_cast<std::uint32_t>(index)>=static_cast<std::uint32_t>(s.size))throw_array_bounds();
        return s.values()[static_cast<std::size_t>(index)];
    }
    T& operator[](std::int32_t index)const{return at(index);}
    T get_Item(std::int32_t index)const{
        if(!covariance_view())return at(index);
        if constexpr(is_shared_ref<T>::value){auto value=covariance_view()->reference_item(index);auto result=pls::cs::dynamic_pointer_cast<typename is_shared_ref<T>::element_type>(value);if(value&&!result)throw InvalidCastException();return result;}
        else throw_array_type_mismatch();
    }
    void set_Item(std::int32_t index,T value)const{
        if(!covariance_view()){at(index)=std::move(value);return;}
        if constexpr(is_shared_ref<T>::value)covariance_view()->reference_item(index,pls::cs::dynamic_pointer_cast<Object>(value));
        else throw_array_type_mismatch();
    }
    Array clone()const {
        if(covariance_view())return from_object(covariance_view()->clone_storage());
        Array result=make(length());for(std::int32_t i=0;i<length();++i)result.at(i)=at(i);return result;
    }
    static void copy(const Array& source,std::int32_t source_index,const Array& dest,std::int32_t dest_index,std::int32_t count) {
        if(source.covariance_view()||dest.covariance_view()){array_copy(array_cast(source.as_object()),source_index,array_cast(dest.as_object()),dest_index,count);return;}
        if(source.is_null())throw ArgumentNullException();if(dest.is_null())throw ArgumentNullException();
        if(source_index<0 || dest_index<0 || count<0)throw ArgumentOutOfRangeException();
        if(static_cast<std::int64_t>(source_index)+count>source.length() || static_cast<std::int64_t>(dest_index)+count>dest.length())throw ArgumentException();
        if(source.data_==dest.data_ && dest_index>source_index) {
            for(std::int32_t i=count;i>0;--i)dest.at(dest_index+i-1)=source.at(source_index+i-1);
        } else for(std::int32_t i=0;i<count;++i)dest.at(dest_index+i)=source.at(source_index+i);
    }
    friend bool operator==(const Array&a,const Array&b)noexcept{return a.as_object()==b.as_object();}
    friend bool operator!=(const Array&a,const Array&b)noexcept{return !(a==b);}
};

template<class T>Ref<T> nonnull(Ref<T> value){if(!value)throw_null_reference();return value;}
Array<std::uint8_t>encoding_utf8_get_bytes(const String&value);
String encoding_utf8_get_string(const Array<std::uint8_t>&value);
String encoding_utf8_get_string(const Array<std::uint8_t>&value,std::int32_t offset,std::int32_t count);
template<class T,class U>Ref<T> as(const Ref<U>&value){return pls::cs::dynamic_pointer_cast<T>(value);}
template<class T,class U>Ref<T> cast(const Ref<U>&value){auto result=as<T>(value);if(value&&!result)throw InvalidCastException();return result;}
template<class T>struct Cell : Object {T value{};Cell()=default;explicit Cell(T v):value(std::move(v)){};
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(value,visitor);}
    void release_edges()override{release_value(value);}
};
template<class F>bool exception_filter(F&&body)noexcept{try{return body();}catch(...){return false;}}

// Execute cleanup outside C++ exception unwinding: a cleanup exception replaces
// an outstanding exception, matching C#finally. Throwing RAII destructors do not.
// Private translator control token, deliberately outside the managed exception
// hierarchy. C# catch handlers cannot intercept a pending return.
template<class T>struct ReturnFlow {
    T value;
#if PLS_TRACING_GC
    GcRootProvider roots;
    explicit ReturnFlow(T result):value(std::move(result)),roots([this](const EdgeVisitor&visitor){trace_value(value,visitor);}){}
    ReturnFlow(const ReturnFlow&other):ReturnFlow(other.value){}
    ReturnFlow(ReturnFlow&&other):ReturnFlow(std::move(other.value)){}
#else
    explicit ReturnFlow(T result):value(std::move(result)){}
#endif
};
template<>struct ReturnFlow<void> {};
struct BranchFlow {enum class Kind{break_,continue_};std::int32_t target;Kind kind;};
template<class T>[[noreturn]] T invalid_return_flow(){throw std::logic_error("Generated protected return reached an invalid fallthrough");}
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

// Explicit capture maps for platform callbacks. Arbitrary std::function storage
// is never guessed/scanned by the precise heap tracer.
template<class F,class...Captured>struct NativeDelegateClosure:Object {
    F function;
    std::tuple<Captured...> captures;
    NativeDelegateClosure(F callable,Captured...values):function(std::move(callable)),captures(std::move(values)...){ }
    void trace_edges(const EdgeVisitor&visitor)const override{
        std::apply([&](const auto&...value){(trace_value(value,visitor),...);},captures);
    }
};
template<class Signature>class Delegate;
template<class R,class...Args>class Delegate<R(Args...)> {
    struct Binding{Ref<void>target{};DelegateCapture<Object>managed_target;std::string method;std::function<R(Args...)>function;const void* identity=nullptr;};
    // A C# delegate is immutable. Invocation retains its list rather than
    // allocating a copy of every binding. The list is a managed node so the
    // cycle collector sees shared ownership once, not duplicate target edges
    // from each value-wrapper copy.
    struct InvocationList final:Object {
        static constexpr bool pls_stable_gc_buffers=true;
        std::vector<Binding> bindings;
        explicit InvocationList(Binding value){bindings.push_back(std::move(value));}
        InvocationList(const InvocationList* first,const InvocationList* second){
            bindings.reserve(first->bindings.size()+second->bindings.size());
            bindings.insert(bindings.end(),first->bindings.begin(),first->bindings.end());
            bindings.insert(bindings.end(),second->bindings.begin(),second->bindings.end());
        }
        InvocationList(const InvocationList* original,std::size_t first,std::size_t last){
            bindings.reserve(original->bindings.size()-(last-first));
            bindings.insert(bindings.end(),original->bindings.begin(),original->bindings.begin()+static_cast<std::ptrdiff_t>(first));
            bindings.insert(bindings.end(),original->bindings.begin()+static_cast<std::ptrdiff_t>(last),original->bindings.end());
        }
        void trace_edges(const EdgeVisitor&visitor)const override{
            Object::trace_edges(visitor);
            for(const auto&binding:bindings)if(auto target=binding.managed_target.lock())visitor(target);
        }
        void release_edges()override{
            Object::release_edges();
#if !PLS_TRACING_GC
            bindings.clear(); // Legacy cycle breaking; traced lists are immutable.
#endif
        }
        void memory_ranges(const memory::RangeVisitor&visitor)const override{
            Object::memory_ranges(visitor);
            if(bindings.capacity())visitor(bindings.data(),bindings.capacity()*sizeof(Binding),memory::Category::managed_heap);
            for(const auto& binding:bindings){
                const auto address=reinterpret_cast<std::uintptr_t>(binding.method.data());
                const auto begin=reinterpret_cast<std::uintptr_t>(&binding);
                // SSO bytes are already inside the registered binding array.
                if(address<begin||address-begin>=sizeof(Binding))
                    visitor(binding.method.data(),binding.method.capacity()+1,memory::Category::managed_heap);
            }
        }
    };
    Ref<InvocationList> list_{};
    std::size_t count()const noexcept{return list_?list_->bindings.size():0;}
    static bool equal_binding(const Binding&a,const Binding&b){return a.identity==b.identity&&a.method==b.method;}
public:
    Delegate()=default;
    template<class T,class F>static Delegate bind(Ref<T>target,std::string method,F&&function) {
        DelegateCapture<Object>managed;
        if constexpr(std::is_base_of_v<Object,T>)managed=target;
        else if constexpr(std::is_polymorphic_v<T>)managed=pls::cs::dynamic_pointer_cast<Object>(target);
        Ref<void>identity=target;if(auto object=managed.lock())identity=object;
        Delegate result;const void*key=raw(identity);
        result.list_=make_ref<InvocationList>(Binding{identity,managed,std::move(method),std::forward<F>(function),key});return result;
    }
    template<class T,class F>static Delegate bind_identity(Ref<T>target,const void*identity,std::string method,F&&function){auto result=bind(std::move(target),std::move(method),std::forward<F>(function));result.list_->bindings[0].identity=identity;return result;}
    template<class F>static Delegate from_static(std::string method,F&&function) {
        return bind(Ref<void>{},std::move(method),std::forward<F>(function));
    }
    template<class F,class...Captured>static Delegate from_native(std::string method,F&&function,Captured...values){
        using Closure=NativeDelegateClosure<std::decay_t<F>,Captured...>;
        auto target=make_ref<Closure>(std::forward<F>(function),std::move(values)...);
        return bind(target,std::move(method),[capture=DelegateCapture<Closure>(target)](Args...args)->R{
            auto closure=capture.lock();if(!closure)throw NullReferenceException();
            return closure->function(std::forward<Args>(args)...);
        });
    }
    bool is_null()const noexcept{return count()==0;}
    explicit operator bool()const noexcept{return !is_null();}
    void trace_edges(const EdgeVisitor&visitor)const{if(list_)visitor(list_);}
    void release_edges(){clear_ref(list_);}
    R operator()(Args...args)const {
        if(is_null())throw NullReferenceException();
        const auto snapshot=list_; // Removing handlers during invocation affects the next call.
        if constexpr(std::is_void_v<R>) {for(const auto&b:snapshot->bindings)b.function(args...);}
        else {std::optional<R>result;for(const auto&b:snapshot->bindings)result.emplace(b.function(args...));return std::move(*result);}
    }
    Delegate& operator+=(const Delegate&other){
        if(other.is_null())return *this;
        if(is_null()){list_=other.list_;return *this;}
        // The old managed lists, rather than an opaque native temporary vector,
        // stay live across make_ref's cooperative allocation safepoint.
        list_=make_ref<InvocationList>(raw(list_),raw(other.list_));return *this;
    }
    Delegate& operator-=(const Delegate&other) {
        if(other.is_null() || other.count()>count())return *this;
        for(std::size_t end=count();end>=other.count();--end) {
            const std::size_t start=end-other.count();bool equal=true;
            for(std::size_t i=0;i<other.count();++i)if(!equal_binding(list_->bindings[start+i],other.list_->bindings[i])){equal=false;break;}
            if(equal){
                if(other.count()==count()){clear_ref(list_);break;}
                list_=make_ref<InvocationList>(raw(list_),start,end);break;
            }
        }
        return *this;
    }
    friend Delegate operator+(Delegate a,const Delegate&b){a+=b;return a;}
    friend Delegate operator-(Delegate a,const Delegate&b){a-=b;return a;}
    friend bool operator==(const Delegate&a,const Delegate&b){if(a.count()!=b.count())return false;for(std::size_t i=0;i<a.count();++i)if(!equal_binding(a.list_->bindings[i],b.list_->bindings[i]))return false;return true;}
    friend bool operator!=(const Delegate&a,const Delegate&b){return !(a==b);}
};
String convert_to_base64_string(const Array<std::uint8_t>& value);
Array<std::uint8_t> convert_from_base64_string(const String& value);
struct IntegerNumberFormat {
    String positive_sign=String(u"+");
    String negative_sign=String(u"-");
};
// Configure from the selected managed culture before workers start.
inline IntegerNumberFormat integer_number_format;
inline GcRootProvider integer_number_format_roots([](const EdgeVisitor&visitor){
    trace_value(integer_number_format.positive_sign,visitor);trace_value(integer_number_format.negative_sign,visitor);
});
std::int32_t int32_parse(const String&value,bool hexadecimal=false);
bool int32_try_parse(const String&value,std::int32_t& result);
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
        if constexpr(std::is_base_of_v<Object,Element>){if(value)visitor(pls::cs::static_pointer_cast<Object>(value));}
        else if constexpr(std::is_polymorphic_v<Element>){if(auto object=pls::cs::dynamic_pointer_cast<Object>(value))visitor(object);}
    }else if constexpr(has_managed_object<T>::value){if(auto object=value.as_object())visitor(object);}
    else if constexpr(has_trace_edges<T>::value)value.trace_edges(visitor);
}
template<class T>void release_value(T&value){
    if constexpr(is_shared_ref<T>::value)clear_ref(value);
    else if constexpr(has_managed_object<T>::value)value=T{};
    else if constexpr(has_release_edges<T>::value)value.release_edges();
}
} // namespace pls::cs
