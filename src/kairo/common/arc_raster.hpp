#pragma once
// PC CPU coverage policy for the independent arc geometry stream.
// This is not a claim of OpenGL/Unity/Android sample-coverage equivalence.
#include "arc_geometry.hpp"
#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <utility>
#include <vector>

namespace pls::kairo::geometry {

// Admission: nonnegative int viewport extents and finite binary32 positions.
// The mapping callback returns target-space positions. Coverage uses binary64
// edge/clipping arithmetic, pixel centers and a top-left rule, then invokes
// paint(x,y) once per triangle sample. Color, blending, scissor and textures
// belong to the caller. Overlap BETWEEN distinct primitives is not discarded.
// GUI quads use triangles [0,1,2] then [0,2,3]. Lines use clipped, floored
// endpoints and a closed Bresenham traversal; a truly zero-length line paints
// nothing. This deterministic PC policy is not an Android line-rule oracle.
// Mesh input is bounded by vertex_limit. Non-finite positions, malformed
// primitive streams/indices and nonconverging clipping are explicitly refused.
// Callbacks must not re-enter or concurrently mutate this sink.
template<class Map,class Pixel>class ArcRasterSink {
    struct Point {double x{},y{};};
    enum class Mode {none,mesh,lines,triangles,quads};
    int width_,height_;
    Map mapping_;
    Pixel paint_;
    std::size_t vertex_limit_;
    Mode mode_{Mode::none};
    std::vector<ArcPoint> mesh_;
    std::array<ArcPoint,4> pending_{};
    std::size_t pending_count_{};

    static void finite(ArcPoint p){
        if(!std::isfinite(p.x)||!std::isfinite(p.y))
            throw std::domain_error("Arc raster requires finite target positions");
    }
    static Point wide(ArcPoint p){return {static_cast<double>(p.x),static_cast<double>(p.y)};}
    static double edge(Point a,Point b,Point p){return (b.x-a.x)*(p.y-a.y)-(b.y-a.y)*(p.x-a.x);}
    static bool top_left(Point a,Point b){return b.y<a.y||(b.y==a.y&&b.x>a.x);}
    static bool inside(double value,bool inclusive){return value>0.0||(value==0.0&&inclusive);}
    static int lower_bound(double v,int extent){
        const double n=std::ceil(v-0.5);
        if(n<=0.0)return 0;if(n>=static_cast<double>(extent))return extent;
        return static_cast<int>(n);
    }
    static int upper_bound(double v,int extent){
        // Retain the extremal sample for the edge rule to decide; never cast
        // an unclipped input coordinate to int, even for very large geometry.
        const double n=std::floor(v-0.5)+1.0;
        if(n<=0.0)return 0;if(n>=static_cast<double>(extent))return extent;
        return static_cast<int>(n);
    }
    void triangle(ArcPoint pa,ArcPoint pb,ArcPoint pc){
        if(width_==0||height_==0)return;
        auto a=wide(pa),b=wide(pb),c=wide(pc);
        double area=edge(a,b,c);
        if(area==0.0)return;
        if(area<0.0)std::swap(b,c);
        const auto left=lower_bound(std::min({a.x,b.x,c.x}),width_);
        const auto right=upper_bound(std::max({a.x,b.x,c.x}),width_);
        const auto top=lower_bound(std::min({a.y,b.y,c.y}),height_);
        const auto bottom=upper_bound(std::max({a.y,b.y,c.y}),height_);
        const bool ab=top_left(a,b),bc=top_left(b,c),ca=top_left(c,a);
        for(int y=top;y<bottom;++y)for(int x=left;x<right;++x){
            const Point p{static_cast<double>(x)+0.5,static_cast<double>(y)+0.5};
            if(inside(edge(a,b,p),ab)&&inside(edge(b,c,p),bc)&&inside(edge(c,a,p),ca))paint_(x,y);
        }
    }
    unsigned outcode(Point p)const{
        unsigned code=0;
        if(p.x<0.0)code|=1u;else if(p.x>static_cast<double>(width_))code|=2u;
        if(p.y<0.0)code|=4u;else if(p.y>static_cast<double>(height_))code|=8u;
        return code;
    }
    bool clip_line(Point& a,Point& b)const{
        // Cohen-Sutherland anchors each intersection to the selected boundary,
        // avoiding work proportional to an offscreen coordinate's magnitude.
        for(unsigned iteration=0;iteration<16;++iteration){
            const auto ac=outcode(a),bc=outcode(b);
            if((ac|bc)==0)return true;
            if(ac&bc)return false;
            const auto outside=ac?ac:bc;
            Point p;
            if(outside&4u){
                if(b.y==a.y)return false;
                p.y=0.0;p.x=a.x+(b.x-a.x)*(p.y-a.y)/(b.y-a.y);
            }else if(outside&8u){
                if(b.y==a.y)return false;
                p.y=static_cast<double>(height_);p.x=a.x+(b.x-a.x)*(p.y-a.y)/(b.y-a.y);
            }else if(outside&2u){
                if(b.x==a.x)return false;
                p.x=static_cast<double>(width_);p.y=a.y+(b.y-a.y)*(p.x-a.x)/(b.x-a.x);
            }else{
                if(b.x==a.x)return false;
                p.x=0.0;p.y=a.y+(b.y-a.y)*(p.x-a.x)/(b.x-a.x);
            }
            if(!std::isfinite(p.x)||!std::isfinite(p.y))
                throw std::domain_error("Arc line clipping produced a non-finite intersection");
            auto& target=ac?a:b;
            if(target.x==p.x&&target.y==p.y)
                throw std::domain_error("Arc line clipping did not advance");
            target=p;
        }
        throw std::domain_error("Arc line clipping did not converge");
    }
    void line(ArcPoint pa,ArcPoint pb){
        if(width_==0||height_==0)return;
        auto a=wide(pa),b=wide(pb);
        if(!clip_line(a,b)||(a.x==b.x&&a.y==b.y))return;
        if((a.x==width_&&b.x==width_)||(a.y==height_&&b.y==height_))return;
        auto x0=static_cast<std::int64_t>(std::floor(a.x));
        auto y0=static_cast<std::int64_t>(std::floor(a.y));
        auto x1=static_cast<std::int64_t>(std::floor(b.x));
        auto y1=static_cast<std::int64_t>(std::floor(b.y));
        // Canonical endpoint ordering makes reversal use the same CPU samples.
        // A new line starts a new traversal: coincident GL.LINES still paint twice.
        if(x0>x1||(x0==x1&&y0>y1)){std::swap(x0,x1);std::swap(y0,y1);}
        const auto dx=x1>=x0?x1-x0:x0-x1;
        const auto dy=-(y1>=y0?y1-y0:y0-y1);
        const std::int64_t sx=x0<x1?1:-1,sy=y0<y1?1:-1;
        auto error=dx+dy;
        for(;;){
            if(x0>=0&&y0>=0&&x0<width_&&y0<height_)paint_(static_cast<int>(x0),static_cast<int>(y0));
            if(x0==x1&&y0==y1)break;
            const auto twice=error*2;
            if(twice>=dy){error+=dy;x0+=sx;}
            if(twice<=dx){error+=dx;y0+=sy;}
        }
    }
    bool gui_active()const{return mode_==Mode::lines||mode_==Mode::triangles||mode_==Mode::quads;}
public:
    ArcRasterSink(int width,int height,Map mapping,Pixel paint,std::size_t vertex_limit=2000002)
        :width_(width),height_(height),mapping_(std::move(mapping)),paint_(std::move(paint)),vertex_limit_(vertex_limit){
        if(width<0||height<0)throw std::invalid_argument("Arc raster viewport extents must be nonnegative");
    }
    ArcPoint map(float x,float y){
        finite({x,y});auto p=mapping_(x,y);finite(p);return p;
    }
    void mesh_ready(){
        if(gui_active())throw std::logic_error("Arc mesh cannot start inside a GUI primitive");
        mode_=Mode::mesh;mesh_.clear();pending_count_=0;
    }
    void vertex(ArcPoint p){
        finite(p);
        if(mode_==Mode::mesh){
            if(mesh_.size()>=vertex_limit_)throw std::length_error("Arc raster mesh exceeds its admitted vertex budget");
            mesh_.push_back(p);return;
        }
        if(!gui_active())throw std::logic_error("Arc vertex requires a mesh or GUI primitive");
        pending_[pending_count_++]=p;
        const auto count=mode_==Mode::lines?std::size_t(2):mode_==Mode::triangles?std::size_t(3):std::size_t(4);
        if(pending_count_!=count)return;
        const auto group=pending_;pending_count_=0;
        if(mode_==Mode::lines)line(group[0],group[1]);
        else{
            triangle(group[0],group[1],group[2]);
            if(mode_==Mode::quads)triangle(group[0],group[2],group[3]);
        }
    }
    void indices(const std::int32_t* indices,std::size_t count){
        if(mode_!=Mode::mesh)throw std::logic_error("Arc indices require a mesh primitive");
        if(count%3!=0||(!indices&&count))throw std::invalid_argument("Arc mesh indices must be complete triangles");
        for(std::size_t i=0;i<count;++i)
            if(indices[i]<0||static_cast<std::size_t>(indices[i])>=mesh_.size())throw std::out_of_range("Arc mesh index outside its vertex buffer");
        for(std::size_t i=0;i<count;i+=3)
            triangle(mesh_[static_cast<std::size_t>(indices[i])],mesh_[static_cast<std::size_t>(indices[i+1])],mesh_[static_cast<std::size_t>(indices[i+2])]);
    }
    void gui_begin(ArcPrimitive primitive){
        if(gui_active())throw std::logic_error("Arc GUI primitives cannot be nested");
        if(primitive==ArcPrimitive::lines)mode_=Mode::lines;
        else if(primitive==ArcPrimitive::triangles)mode_=Mode::triangles;
        else if(primitive==ArcPrimitive::quads)mode_=Mode::quads;
        else throw std::invalid_argument("Unknown arc GUI primitive");
        pending_count_=0;
    }
    void gui_end(){
        if(!gui_active())throw std::logic_error("Arc GUI end without a matching begin");
        if(pending_count_!=0)throw std::logic_error("Arc GUI primitive has incomplete vertices");
        mode_=Mode::none;
    }
};
template<class Map,class Pixel>ArcRasterSink(int,int,Map,Pixel)->ArcRasterSink<Map,Pixel>;
template<class Map,class Pixel>ArcRasterSink(int,int,Map,Pixel,std::size_t)->ArcRasterSink<Map,Pixel>;
}
