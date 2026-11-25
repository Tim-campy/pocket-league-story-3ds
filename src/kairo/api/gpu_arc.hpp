#pragma once
#include "../common/arc_geometry.hpp"
#include <array>
#include <vector>

namespace pls::kairo::geometry {
template<class Map,class Emit>class ArcGpuSink {
    Map mapping_;
    Emit emit_;
    std::vector<ArcPoint> mesh_;
    std::array<ArcPoint,4> pending_{};
    std::size_t count_{};
    ArcPrimitive primitive_{ArcPrimitive::triangles};
    bool mesh_mode_{};
    void triangle(ArcPoint a,ArcPoint b,ArcPoint c){emit_(std::array<ArcPoint,4>{a,b,c,c});}
    void line(ArcPoint a,ArcPoint b){
        const float dx=b.x-a.x,dy=b.y-a.y,length=std::hypot(dx,dy);
        if(length==0)return;
        const float x=-dy*0.5f/length,y=dx*0.5f/length;
        emit_(std::array<ArcPoint,4>{{{a.x+x,a.y+y},{b.x+x,b.y+y},
                                    {b.x-x,b.y-y},{a.x-x,a.y-y}}});
    }
public:
    ArcGpuSink(Map mapping,Emit emit):mapping_(mapping),emit_(emit){}
    ArcPoint map(float x,float y){
        auto p=mapping_(x,y);
        if(!std::isfinite(p.x)||!std::isfinite(p.y))throw std::domain_error("Non-finite GPU arc vertex");
        return p;
    }
    void mesh_ready(){mesh_mode_=true;mesh_.clear();count_=0;}
    void gui_begin(ArcPrimitive primitive){mesh_mode_=false;primitive_=primitive;count_=0;}
    void gui_end(){if(count_)throw std::logic_error("Incomplete GPU arc primitive");}
    void vertex(ArcPoint point){
        if(mesh_mode_){
            if(mesh_.size()>=2000002)throw std::length_error("GPU arc vertex limit");
            mesh_.push_back(point);return;
        }
        pending_.at(count_++)=point;
        const auto needed=primitive_==ArcPrimitive::lines?2u:primitive_==ArcPrimitive::triangles?3u:4u;
        if(count_!=needed)return;
        if(needed==2)line(pending_[0],pending_[1]);
        else if(needed==3)triangle(pending_[0],pending_[1],pending_[2]);
        else emit_(pending_);
        count_=0;
    }
    void indices(const std::int32_t* indices,std::size_t count){
        if(!mesh_mode_||count%3||(!indices&&count))throw std::invalid_argument("Invalid GPU arc indices");
        for(std::size_t i=0;i<count;i+=3)
            triangle(mesh_.at(std::size_t(indices[i])),mesh_.at(std::size_t(indices[i+1])),mesh_.at(std::size_t(indices[i+2])));
    }
};
template<class Map,class Emit>ArcGpuSink(Map,Emit)->ArcGpuSink<Map,Emit>;
}
