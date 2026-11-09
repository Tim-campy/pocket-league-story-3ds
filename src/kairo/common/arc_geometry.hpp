#pragma once
// Independent geometric emission corresponding to Graphics.DrawArc/FillArc.
// No rasterization, framebuffer, material, Unity or Android equivalence claim.
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <stdexcept>

namespace pls::kairo::geometry {
struct ArcPoint {float x{},y{};};
struct ArcParameters {
    float x{},y{},width{},height{},start_angle{},arc_angle{},line_width{1.0f};
};
enum class ArcPrimitive : int {lines=1,triangles=4,quads=7};

// Equivalent numerical operations used by the source FastMath/JMath wrappers.
// A caller may provide the existing runtime's operations through this policy.
struct ArcMath {
    static constexpr double pi=3.141592653589793238462643383279502884;
    float sine(float angle)const {return static_cast<float>(std::sin(static_cast<double>(angle)*pi/180.0));}
    float cosine(float angle)const {return static_cast<float>(std::cos(static_cast<double>(angle)*pi/180.0));}
    float remainder(float angle)const {return std::fmod(angle,360.0f);}
    std::int32_t integer(float value)const {
        // The historical SDK profile's out-of-range conversion; no undefined
        // C++ floating-to-integral conversion. Ordinary geometry stays in range.
        if(!std::isfinite(value)||value<-2147483648.0f||value>=2147483648.0f)
            return std::numeric_limits<std::int32_t>::min();
        return static_cast<std::int32_t>(value);
    }
};

namespace arc_detail {
struct Angles {float start{},end{},sweep{};};
template<class Math>Angles angles(float start,float sweep,const Math& math){
    if(sweep<-360.0f)sweep=-360.0f;
    if(sweep>360.0f)sweep=360.0f;
    start=math.remainder(start);
    if(start<0.0f)start+=360.0f;
    if(sweep<0.0f){start+=sweep;sweep*=-1.0f;}
    return {start,start+sweep,sweep};
}
template<class Math>float next(float current,float end,float step,
                              std::size_t index,std::size_t limit,const Math& math){
    // Unsupported non-progressing dimensions must not hang the host. This is
    // an explicit admission boundary, not a replacement result for such input.
    if(index>=limit||!std::isfinite(step)||!(step>0.0f))
        throw std::domain_error("Arc geometry requires a bounded positive angular step");
    float value=current+step;
    if(index==0){
        value=static_cast<float>(math.integer(value/step))*step+step;
        if(value<current)value+=step;
    }
    if(value>end)value=end;
    if(!(value>current))throw std::domain_error("Arc geometry angular step did not advance");
    return value;
}
template<class Sink>ArcPoint map(Sink& sink,float x,float y){return sink.map(x,y);}
}

// Sink protocol: map(x,y)->ArcPoint; mesh_ready(); vertex(point);
// indices(const int32_t*,count); gui_begin(ArcPrimitive); gui_end().
// GUI begin represents Material.SetPass(0), GL.Begin and the constant shape
// color setup; color/material policy remains the integrating caller's concern.
template<class Sink,class Math=ArcMath>
void draw_arc(ArcParameters p,bool gui,Sink& sink,const Math& math=Math{},
              std::size_t segment_limit=1000000){
    const auto a=arc_detail::angles(p.start_angle,p.arc_angle,math);
    const float rx=p.width/2.0f,ry=p.height/2.0f;
    const float inner_rx=p.width/2.0f-p.line_width;
    const float inner_ry=p.height/2.0f-p.line_width;
    p.x+=p.width/2.0f;p.y+=p.height/2.0f;
    const float step=360.0f/static_cast<float>(math.integer((1.0f+(p.width+p.height)*2.0f/50.0f)*8.0f+8.0f));
    float angle=a.start;
    std::size_t index=0;
    ArcPoint points[4];
    if(!gui){
        sink.mesh_ready();
        const float sine=math.sine(angle),cosine=math.cosine(angle);
        points[0]=arc_detail::map(sink,p.x+cosine*inner_rx,p.y-sine*inner_ry);
        points[1]=arc_detail::map(sink,p.x+cosine*rx,p.y-sine*ry);
        sink.vertex(points[0]);sink.vertex(points[1]);
        while(angle<a.end){
            const float following=arc_detail::next(angle,a.end,step,index,segment_limit,math);
            const float next_sine=math.sine(following),next_cosine=math.cosine(following);
            points[2]=arc_detail::map(sink,p.x+next_cosine*inner_rx,p.y-next_sine*inner_ry);
            points[3]=arc_detail::map(sink,p.x+next_cosine*rx,p.y-next_sine*ry);
            sink.vertex(points[2]);sink.vertex(points[3]);
            const auto base=static_cast<std::int32_t>(index*2);
            const std::int32_t indices[]={base,base+1,base+3,base,base+3,base+2};
            sink.indices(indices,6);
            angle=following;++index;
        }
        return;
    }
    sink.gui_begin(p.line_width==0.0f?ArcPrimitive::lines:ArcPrimitive::quads);
    while(angle<a.end){
        const float following=arc_detail::next(angle,a.end,step,index,segment_limit,math);
        if(index==0){
            const float sine=math.sine(angle),cosine=math.cosine(angle);
            points[0]=arc_detail::map(sink,p.x+cosine*inner_rx,p.y-sine*inner_ry);
            points[1]=arc_detail::map(sink,p.x+cosine*rx,p.y-sine*ry);
        }else{points[0]=points[2];points[1]=points[3];}
        const float next_sine=math.sine(following),next_cosine=math.cosine(following);
        points[2]=arc_detail::map(sink,p.x+next_cosine*inner_rx,p.y-next_sine*inner_ry);
        points[3]=arc_detail::map(sink,p.x+next_cosine*rx,p.y-next_sine*ry);
        sink.vertex(points[0]);sink.vertex(points[2]);sink.vertex(points[3]);sink.vertex(points[1]);
        angle=following;++index;
    }
    sink.gui_end();
}

template<class Sink,class Math=ArcMath>
void fill_arc(ArcParameters p,bool gui,Sink& sink,const Math& math=Math{},
              std::size_t segment_limit=1000000){
    const auto a=arc_detail::angles(p.start_angle,p.arc_angle,math);
    const float rx=p.width/2.0f,ry=p.height/2.0f;
    p.x+=p.width/2.0f;p.y+=p.height/2.0f;
    // The original computes an adaptive value and immediately overwrites it.
    // Its effective, observable tessellation step is exactly eight degrees.
    constexpr float step=8.0f;
    float angle=a.start;
    std::size_t index=0;
    ArcPoint points[3];
    points[0]=arc_detail::map(sink,p.x,p.y);
    const float cosine=math.cosine(angle);
    const float first_x=p.x+cosine*rx;
    const float sine=math.sine(angle);
    points[1]=arc_detail::map(sink,first_x,p.y-sine*ry);
    if(!gui){
        sink.mesh_ready();sink.vertex(points[0]);sink.vertex(points[1]);
        while(angle<a.end){
            const float following=arc_detail::next(angle,a.end,step,index,segment_limit,math);
            const float next_cosine=math.cosine(following);
            const float next_x=p.x+next_cosine*rx;
            const float next_sine=math.sine(following);
            points[2]=arc_detail::map(sink,next_x,p.y-next_sine*ry);
            sink.vertex(points[2]);
            const auto base=static_cast<std::int32_t>(index);
            const std::int32_t indices[]={0,base+1,base+2};
            sink.indices(indices,3);
            angle=following;++index;
        }
        return;
    }
    sink.gui_begin(ArcPrimitive::triangles);
    while(angle<a.end){
        const float following=arc_detail::next(angle,a.end,step,index,segment_limit,math);
        const float next_cosine=math.cosine(following);
        const float next_x=p.x+next_cosine*rx;
        const float next_sine=math.sine(following);
        points[2]=arc_detail::map(sink,next_x,p.y-next_sine*ry);
        sink.vertex(points[0]);sink.vertex(points[1]);sink.vertex(points[2]);
        points[1]=points[2];angle=following;++index;
    }
    sink.gui_end();
}
}
