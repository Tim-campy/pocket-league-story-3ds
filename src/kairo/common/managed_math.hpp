#pragma once
#include "semantic_runtime.hpp"
namespace pls::cs {
// Kept separate from the Java JMath.Min implementation (which returns the first
// operand on equality). Historical System.Math.Min selects the second zero.
inline float math_min_single(float first,float second){
    if(runtime_profile==RuntimeProfile::UnityMono265){
        if(std::isnan(first)||std::isnan(second))return bit_copy<float>(std::uint32_t(0xffc00000));
        return first<second?first:second;
    }
    if(first<second||std::isnan(first))return first;
    if(runtime_profile==RuntimeProfile::DotNet&&first==0.0f&&second==0.0f)
        return std::signbit(first)?first:second;
    return second;
}
}
