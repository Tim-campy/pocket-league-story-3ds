#pragma once
#include "semantic_runtime.hpp"
#include <mutex>
#include <utility>
namespace pls::cs {
// Synchronization belongs to each field access, not to an entire method or
// expression. In particular, load/add/store is deliberately not an atomic RMW.
template<class T>class SharedField final {
    mutable std::mutex mutex_;
    T value_{};
public:
    SharedField()=default;
    explicit SharedField(T value):value_(std::move(value)){}
    SharedField(const SharedField&)=delete;
    SharedField&operator=(const SharedField&)=delete;
    T load()const{std::lock_guard<std::mutex>lock(mutex_);return value_;}
    void store(T value){
        {std::lock_guard<std::mutex>lock(mutex_);using std::swap;swap(value_,value);}
        // Release the displaced value only after unlocking. No callback or
        // safepoint may run while the field's lock is held.
    }
    void trace_edges(const EdgeVisitor&visitor)const{std::lock_guard<std::mutex>lock(mutex_);trace_value(value_,visitor);}
    void release_edges(){T displaced{};{std::lock_guard<std::mutex>lock(mutex_);using std::swap;swap(value_,displaced);}}
};
}
