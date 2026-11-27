#pragma once
#include <algorithm>
#include <array>
#include <cmath>
#include <cstdint>

namespace pls::kairo {
// Sample the virtual nearest-expanded crop directly: no per-frame CPU target.
inline std::array<std::uint8_t,4> map_zoom_sample(const std::uint8_t* pixels,int width,int height,
    int sx,int sy,int sw,int sh,float tx,float ty,int expansion){
    const float x=tx*float(sw*expansion)-0.5f,y=ty*float(sh*expansion)-0.5f;
    const int ix=int(std::floor(x)),iy=int(std::floor(y));
    const float fx=x-float(ix),fy=y-float(iy);
    auto at=[&](int u,int v,int channel){
        u=std::clamp(sx+std::clamp(u,0,sw*expansion-1)/expansion,0,width-1);
        v=std::clamp(sy+std::clamp(v,0,sh*expansion-1)/expansion,0,height-1);
        return float(pixels[(std::size_t(v)*width+u)*4+channel]);
    };
    std::array<std::uint8_t,4> result{};
    for(int c=0;c<4;++c){
        const float a=at(ix,iy,c)*(1-fx)+at(ix+1,iy,c)*fx;
        const float b=at(ix,iy+1,c)*(1-fx)+at(ix+1,iy+1,c)*fx;
        result[c]=std::uint8_t(std::clamp(std::floor(a*(1-fy)+b*fy+0.5f),0.0f,255.0f));
    }
    return result;
}
}
