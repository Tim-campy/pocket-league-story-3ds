#pragma once
#include <array>
#include <cstdint>
#include <cstring>
#include <stdexcept>
#include <vector>

namespace pls::assets::ctr_texture {
struct Layout { std::uint32_t width, height, texture_width, texture_height; };
inline std::uint32_t extent(std::uint32_t value) {
    if(!value || value>1024)throw std::invalid_argument("CTR texture dimension outside 1..1024");
    std::uint32_t result=8;while(result<value)result*=2;return result;
}
inline std::size_t offset(std::uint32_t x,std::uint32_t y,std::uint32_t texture_width)noexcept {
    const auto spread=[](std::uint32_t n){return (n&1u)|((n&2u)<<1)|((n&4u)<<2);};
    return 24+(((y>>3)*(texture_width>>3)+(x>>3))*64+spread(x)+(spread(y)<<1))*4;
}
inline Layout validate(const std::vector<std::uint8_t>& data,std::uint32_t width,std::uint32_t height) {
    if(data.size()<24 || std::memcmp(data.data(),"PLSCTR1\0",8))throw std::invalid_argument("Invalid CTR texture header");
    const auto word=[&](std::size_t i){return std::uint32_t(data[i])|(std::uint32_t(data[i+1])<<8)|(std::uint32_t(data[i+2])<<16)|(std::uint32_t(data[i+3])<<24);};
    Layout result{word(8),word(12),word(16),word(20)};
    if(result.width!=width || result.height!=height || result.texture_width!=extent(width) || result.texture_height!=extent(height) || data.size()!=24+std::size_t(result.texture_width)*result.texture_height*4)
        throw std::invalid_argument("CTR texture extent differs from catalog");
    return result;
}
inline std::array<std::uint8_t,4> pixel(const std::vector<std::uint8_t>& data,const Layout& layout,std::uint32_t x,std::uint32_t y) {
    if(x>=layout.width || y>=layout.height)throw std::out_of_range("CTR texture pixel");
    const auto i=offset(x,y,layout.texture_width);
    return {data.at(i+3),data.at(i+2),data.at(i+1),data.at(i)};
}
inline std::vector<std::uint8_t> linear(const std::vector<std::uint8_t>& data,const Layout& layout) {
    std::vector<std::uint8_t> result(std::size_t(layout.width)*layout.height*4);
    for(std::uint32_t y=0;y<layout.height;++y)for(std::uint32_t x=0;x<layout.width;++x){
        const auto p=pixel(data,layout,x,y);const auto target=(std::size_t(y)*layout.width+x)*4;
        for(std::size_t c=0;c<4;++c)result[target+c]=p[c];
    }
    return result;
}
}
