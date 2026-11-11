#pragma once
#include <memory>
#include <type_traits>
#include <cstdint>

// Production references are ordinary pointers. The explicit zero override is
// retained only for historical comparison builds during verification.
#ifndef PLS_TRACING_GC
#define PLS_TRACING_GC 1
#endif
namespace pls::cs {
#if PLS_TRACING_GC
template<class T> using Ref = T*;
std::uint64_t managed_identity(const void* pointer);
bool managed_alive(const void* pointer,std::uint64_t identity);
template<class T> class Weak {
    // A cache token on the conservative stack must not itself become a strong
    // pointer. Decoding occurs only when explicitly acquiring the target.
    static constexpr std::uintptr_t mask=static_cast<std::uintptr_t>(UINT64_C(0xa5a5a5a55a5a5a5a));
    std::uintptr_t encoded_{};
    std::uint64_t identity_{};
    void assign(T* pointer){encoded_=pointer?reinterpret_cast<std::uintptr_t>(pointer)^mask:0;identity_=managed_identity(pointer);}
public:
    Weak()=default;
    template<class U> Weak(U* pointer){assign(pointer);}
    template<class U> Weak& operator=(U* pointer){assign(pointer);return *this;}
    T* lock()const{auto pointer=encoded_?reinterpret_cast<T*>(encoded_^mask):nullptr;return managed_alive(pointer,identity_)?pointer:nullptr;}
    bool expired()const{return !lock();}
    void reset(){encoded_=0;identity_=0;}
};
// A delegate's exact map already traces its target. Its invocation capture does
// not own a second edge and needs no weak-table lookup on the hot call path.
template<class T> struct DelegateCapture {
    T* pointer{};
    DelegateCapture()=default;
    explicit DelegateCapture(T* value):pointer(value){}
    DelegateCapture& operator=(T* value)noexcept{pointer=value;return *this;}
    T* lock()const noexcept{return pointer;}
};
#else
template<class T> using Ref = std::shared_ptr<T>;
template<class T> using Weak = std::weak_ptr<T>;
template<class T> using DelegateCapture = std::weak_ptr<T>;
#endif
template<class T> T* raw(T* value) noexcept { return value; }
template<class T> T* raw(const std::shared_ptr<T>& value) noexcept { return value.get(); }
template<class T, class D> T* raw(const std::unique_ptr<T,D>& value) noexcept { return value.get(); }
template<class T> void clear_ref(T*& value) noexcept { value = nullptr; }
template<class T> void clear_ref(std::shared_ptr<T>& value) noexcept { value.reset(); }
template<class T, class D> void clear_ref(std::unique_ptr<T,D>& value) noexcept { value.reset(); }
template<class T> auto clear_ref(T& value) -> decltype(value.reset(),void()) { value.reset(); }
template<class T, class U> T* static_pointer_cast(U* value) noexcept { return static_cast<T*>(value); }
template<class T, class U> T* dynamic_pointer_cast(U* value) noexcept { return dynamic_cast<T*>(value); }
template<class T, class U> T* const_pointer_cast(U* value) noexcept { return const_cast<T*>(value); }
template<class T, class U> std::shared_ptr<T> static_pointer_cast(const std::shared_ptr<U>& value) noexcept { return std::static_pointer_cast<T>(value); }
template<class T, class U> std::shared_ptr<T> dynamic_pointer_cast(const std::shared_ptr<U>& value) noexcept { return std::dynamic_pointer_cast<T>(value); }
template<class T, class U> std::shared_ptr<T> const_pointer_cast(const std::shared_ptr<U>& value) noexcept { return std::const_pointer_cast<T>(value); }
}
