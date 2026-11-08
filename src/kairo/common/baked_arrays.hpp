#pragma once
#include "asset_catalog.hpp"
#include "semantic_runtime.hpp"
namespace pls::assets {
template<class T>constexpr std::uint32_t array_type_code(){
    if constexpr(std::is_same_v<T,bool>)return 1;
    if constexpr(std::is_same_v<T,std::uint8_t>)return 2;
    if constexpr(std::is_same_v<T,std::int8_t>)return 3;
    if constexpr(std::is_same_v<T,char16_t>)return 4;
    if constexpr(std::is_same_v<T,std::int16_t>)return 5;
    if constexpr(std::is_same_v<T,std::uint16_t>)return 6;
    if constexpr(std::is_same_v<T,std::int32_t>)return 7;
    if constexpr(std::is_same_v<T,std::uint32_t>)return 8;
    if constexpr(std::is_same_v<T,std::int64_t>)return 9;
    if constexpr(std::is_same_v<T,std::uint64_t>)return 10;
    if constexpr(std::is_same_v<T,float>)return 11;
    if constexpr(std::is_same_v<T,double>)return 12;
    return 0;
}
template<class T>cs::Array<T> baked_array(const std::string& id){
    static_assert(array_type_code<T>()!=0,"Only primitive arrays may be extracted as constant data");
    if(!installed_catalog)throw cs::InvalidOperationException("Host asset catalog is not installed");
    const auto* entry=installed_catalog->find(Kind::baked_array,id);
    if(!entry)throw cs::IOException("Own APK constant-array payload is absent; repeat the authenticated asset pipeline");
    if(entry->height!=array_type_code<T>()||entry->size!=std::uint64_t(entry->width)*sizeof(T)||entry->width>std::uint32_t(INT32_MAX))throw cs::IOException("Constant-array type/extent differs");
    auto data=installed_catalog->read(*entry);auto result=cs::Array<T>::make(std::int32_t(entry->width));
    for(std::uint32_t i=0;i<entry->width;++i){
        std::uint64_t bits{};for(std::size_t j=0;j<sizeof(T);++j)bits|=std::uint64_t(data[std::size_t(i)*sizeof(T)+j])<<(j*8);
        if constexpr(std::is_same_v<T,bool>)result.at(std::int32_t(i))=bits!=0;
        else if constexpr(std::is_integral_v<T>)result.at(std::int32_t(i))=cs::cast_integral<T>(bits);
        else if constexpr(sizeof(T)==4)result.at(std::int32_t(i))=cs::bit_copy<T>(std::uint32_t(bits));
        else result.at(std::int32_t(i))=cs::bit_copy<T>(bits);
    }
    return result; // Fresh storage for each source initializer evaluation.
}
}
