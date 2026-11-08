#pragma once
#include "semantic_runtime.hpp"
#include <array>

namespace pls::cs {
// Seeded managed Random. Ring layout is zero-based; all arithmetic is explicit
// unchecked C# arithmetic. This is not std::random and has no hidden clock seed.
class Random : public Object {
    std::array<std::int32_t,55>state_{};
    std::size_t current_=54,other_=20;
    bool historical_;
    static constexpr std::int32_t modulus=std::numeric_limits<std::int32_t>::max();
    std::int32_t draw(){
        current_=(current_+1)%55;other_=(other_+1)%55;
        auto value=sub_i32(state_[current_],state_[other_]);
        if(!historical_&&value==modulus)--value;
        if(value<0)value=add_i32(value,modulus);
        state_[current_]=value;return value;
    }
protected:
    virtual double Sample(){return static_cast<double>(draw())*(1.0/static_cast<double>(modulus));}
public:
    explicit Random(std::int32_t seed):historical_(runtime_profile==RuntimeProfile::UnityMono265){
        if(historical_&&seed==std::numeric_limits<std::int32_t>::min())throw OverflowException();
        const auto positive=seed==std::numeric_limits<std::int32_t>::min()?modulus:(seed<0?neg_i32(seed):seed);
        auto previous=sub_i32(161803398,positive),next=std::int32_t(1);state_[54]=previous;
        for(std::size_t step=1;step<55;++step){const auto slot=(21*step)%55-1;state_[slot]=next;next=sub_i32(previous,next);if(next<0)next=add_i32(next,modulus);previous=state_[slot];}
        for(int pass=0;pass<4;++pass)for(std::size_t i=0;i<55;++i){state_[i]=sub_i32(state_[i],state_[(i+31)%55]);if(state_[i]<0)state_[i]=add_i32(state_[i],modulus);}
        other_=historical_?30:20;
    }
    virtual std::int32_t Next(){return historical_?static_cast<std::int32_t>(Sample()*modulus):draw();}
    virtual std::int32_t Next(std::int32_t max_value){if(max_value<0)throw ArgumentOutOfRangeException();return static_cast<std::int32_t>(Sample()*max_value);}
    virtual std::int32_t Next(std::int32_t min_value,std::int32_t max_value){
        if(min_value>max_value)throw ArgumentOutOfRangeException();
        const auto distance=static_cast<std::uint32_t>(max_value)-static_cast<std::uint32_t>(min_value);
        if(historical_){if(distance<=1)return min_value;return cast_integral<std::int32_t>(static_cast<std::uint32_t>(Sample()*distance)+static_cast<std::uint32_t>(min_value));}
        if(distance<=static_cast<std::uint32_t>(modulus))return add_i32(static_cast<std::int32_t>(Sample()*distance),min_value);
        auto signed_sample=draw();if(draw()%2==0)signed_sample=neg_i32(signed_sample);
        const double large=(static_cast<double>(signed_sample)+static_cast<double>(modulus-1))/(2.0*modulus-1.0);
        return static_cast<std::int32_t>(static_cast<std::int64_t>(large*distance)+min_value);
    }
    virtual void NextBytes(const Array<std::uint8_t>&buffer){
        if(buffer.is_null())throw ArgumentNullException();
        for(std::int32_t i=0;i<buffer.length();++i)buffer.at(i)=historical_?static_cast<std::uint8_t>(Sample()*256.0):cast_integral<std::uint8_t>(draw());
    }
    virtual double NextDouble(){return Sample();}
};
} // namespace pls::cs
