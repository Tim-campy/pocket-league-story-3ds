#include "../../src/kairo/common/arc_raster.hpp"
#include <iostream>
#include <limits>
#include <numeric>
#include <string>
#include <vector>

namespace {
using namespace pls::kairo::geometry;
std::size_t assertions=0,scenarios=0;
void check(bool value,const char* name){++assertions;if(!value)throw std::runtime_error(name);}
template<class E,class Work>void rejects(Work&& work,const char* name){
    bool rejected=false;try{work();}catch(const E&){rejected=true;}check(rejected,name);
}
struct Canvas {
    int width,height;
    std::vector<unsigned> hits;
    std::vector<std::pair<int,int>> trace;
    Canvas(int w,int h):width(w),height(h),hits(static_cast<std::size_t>(w)*static_cast<std::size_t>(h)){}
    void paint(int x,int y){
        if(x<0||y<0||x>=width||y>=height)throw std::runtime_error("Pixel callback escaped admitted viewport");
        ++hits[static_cast<std::size_t>(y)*static_cast<std::size_t>(width)+static_cast<std::size_t>(x)];trace.emplace_back(x,y);
    }
    unsigned at(int x,int y)const{return hits[static_cast<std::size_t>(y)*static_cast<std::size_t>(width)+static_cast<std::size_t>(x)];}
    std::size_t visits()const{return trace.size();}
};
auto identity=[](float x,float y){return ArcPoint{x,y};};
auto sink(Canvas& canvas){return ArcRasterSink(canvas.width,canvas.height,identity,[&canvas](int x,int y){canvas.paint(x,y);});}
template<class Sink>void mesh(Sink& output,const std::vector<ArcPoint>& points,const std::vector<std::int32_t>& indices){
    output.mesh_ready();for(auto p:points)output.vertex(p);output.indices(indices.data(),indices.size());
}
template<class Sink>void gui(Sink& output,ArcPrimitive primitive,const std::vector<ArcPoint>& points){
    output.gui_begin(primitive);for(auto p:points)output.vertex(p);output.gui_end();
}
void rectangle(const Canvas& canvas,int left,int top,int right,int bottom,unsigned count=1){
    for(int y=0;y<canvas.height;++y)for(int x=0;x<canvas.width;++x)
        check(canvas.at(x,y)==((x>=left&&x<right&&y>=top&&y<bottom)?count:0),"Rectangle union/ownership mismatch");
}
void triangle_cases(){
    const std::vector<ArcPoint> box{{1,1},{5,1},{5,4},{1,4}};
    Canvas reference(8,6);auto a=sink(reference);mesh(a,box,{0,1,2,0,2,3});rectangle(reference,1,1,5,4);check(reference.visits()==12,"Shared diagonal painted twice");++scenarios;
    Canvas reversed(8,6);auto b=sink(reversed);mesh(b,box,{2,1,0,3,2,0});check(reference.hits==reversed.hits,"Reversed triangle winding changed coverage");++scenarios;
    Canvas reordered(8,6);auto c=sink(reordered);mesh(c,box,{0,2,3,0,1,2});check(reference.hits==reordered.hits,"Triangle order changed union");++scenarios;
    Canvas half(8,6);auto d=sink(half);mesh(d,{{1.5f,1.5f},{5.5f,1.5f},{5.5f,4.5f},{1.5f,4.5f}},{0,1,2,0,2,3});rectangle(half,1,1,5,4);++scenarios;
    Canvas large(8,6);auto e=sink(large);mesh(e,{{-1000000,-1000000},{1000000,-1000000},{1000000,1000000},{-1000000,1000000}},{0,1,2,0,2,3});rectangle(large,0,0,8,6);check(large.visits()==48,"Large clipped rectangle had overlap");++scenarios;
    Canvas outside(8,6);auto f=sink(outside);mesh(f,{{-5,-5},{-1,-5},{-1,-1}},{0,1,2});mesh(f,{{8,0},{9,0},{8,5}},{0,1,2});check(outside.visits()==0,"Outside triangle painted");++scenarios;
    Canvas degenerate(8,6);auto g=sink(degenerate);mesh(g,{{0,0},{1,1},{2,2}},{0,1,2});mesh(g,{{2,2},{2,2},{2,2}},{0,1,2});check(degenerate.visits()==0,"Degenerate triangle painted");++scenarios;
    Canvas translated(8,6);int maps=0;auto h=ArcRasterSink(8,6,[&](float x,float y){++maps;return ArcPoint{x+1,y+2};},[&](int x,int y){translated.paint(x,y);});
    h.mesh_ready();for(auto p:std::vector<ArcPoint>{{0,0},{4,0},{4,3},{0,3}})h.vertex(h.map(p.x,p.y));const std::int32_t ids[]={0,1,2,0,2,3};h.indices(ids,6);
    rectangle(translated,1,2,5,5);check(maps==4,"Map callback was bypassed or applied twice");++scenarios;
}
void gui_cases(){
    const std::vector<ArcPoint> box{{1,1},{5,1},{5,4},{1,4}};
    Canvas quads(8,6),triangles(8,6);auto a=sink(quads),b=sink(triangles);
    gui(a,ArcPrimitive::quads,box);mesh(b,box,{0,1,2,0,2,3});check(quads.trace==triangles.trace,"GUI quad changed triangle emission order");rectangle(quads,1,1,5,4);++scenarios;
    Canvas lists(8,6);auto c=sink(lists);gui(c,ArcPrimitive::triangles,{{1,1},{5,1},{5,4},{1,1},{5,4},{1,4}});check(lists.trace==triangles.trace,"GUI triangle list changed order");++scenarios;
    Canvas doubled(8,6);auto d=sink(doubled);gui(d,ArcPrimitive::quads,{{1,1},{5,1},{5,4},{1,4},{1,1},{5,1},{5,4},{1,4}});rectangle(doubled,1,1,5,4,2);check(doubled.visits()==24,"Distinct coincident quads were deduplicated");++scenarios;
    Canvas groups(8,6);auto e=sink(groups);gui(e,ArcPrimitive::quads,{{0,0},{2,0},{2,2},{0,2},{5,3},{7,3},{7,5},{5,5}});
    bool right=false;for(auto p:groups.trace){if(p.first>=5)right=true;else check(!right,"GUI primitive groups were reordered");}check(groups.visits()==8,"GUI groups missed pixels");++scenarios;
}
void line_cases(){
    Canvas doubled(8,6);auto a=sink(doubled);gui(a,ArcPrimitive::lines,{{1,1},{6,1},{6,1},{1,1}});
    for(int x=0;x<8;++x)check(doubled.at(x,1)==(x>=1&&x<=6?2u:0u),"Coincident reversed lines were not individually painted");check(doubled.visits()==12,"Line traversal duplicated an internal sample");++scenarios;
    Canvas forward(8,6),reverse(8,6);auto b=sink(forward),c=sink(reverse);gui(b,ArcPrimitive::lines,{{0,0},{7,5}});gui(c,ArcPrimitive::lines,{{7,5},{0,0}});check(forward.trace==reverse.trace,"CPU line reversal changed sample policy");++scenarios;
    Canvas clipped(8,6);auto d=sink(clipped);gui(d,ArcPrimitive::lines,{{-1000000,2},{1000000,2}});rectangle(clipped,0,2,8,3);++scenarios;
    Canvas vertical(8,6);auto e=sink(vertical);gui(e,ArcPrimitive::lines,{{3,-1000000},{3,1000000}});rectangle(vertical,3,0,4,6);++scenarios;
    Canvas outside(8,6);auto f=sink(outside);gui(f,ArcPrimitive::lines,{{8,-1},{8,7},{-10,-10},{-2,-2}});check(outside.visits()==0,"Right/outside lines painted");++scenarios;
    Canvas point(8,6);auto g=sink(point);gui(g,ArcPrimitive::lines,{{2,2},{2,2}});check(point.visits()==0,"Zero-length line policy changed");++scenarios;
    Canvas extreme(8,6);auto h=sink(extreme);const auto maximum=std::numeric_limits<float>::max();gui(h,ArcPrimitive::lines,{{-maximum,3},{maximum,3}});rectangle(extreme,0,3,8,4);++scenarios;
}
void arc_cases(){
    ArcParameters p{2,2,12,10,0,135,1};
    Canvas filled_gui(20,18),filled_mesh(20,18);auto a=sink(filled_gui),b=sink(filled_mesh);fill_arc(p,true,a);fill_arc(p,false,b);
    check(filled_gui.hits==filled_mesh.hits,"Fill arc GUI/mesh union differed");check(filled_gui.visits()>0,"Fill arc painted no samples");for(auto n:filled_gui.hits)check(n<=1,"Fill fan shared a sample across triangles");++scenarios;
    Canvas outline_gui(20,18),outline_mesh(20,18);auto c=sink(outline_gui),d=sink(outline_mesh);draw_arc(p,true,c);draw_arc(p,false,d);
    check(outline_gui.hits==outline_mesh.hits,"Outline GUI/mesh coverage differed");check(outline_gui.visits()>0,"Outline arc painted no samples");for(auto n:outline_gui.hits)check(n<=1,"Outline strip shared a sample across triangles");++scenarios;
    p.line_width=0;Canvas zero_gui(20,18),zero_mesh(20,18);auto e=sink(zero_gui),f=sink(zero_mesh);draw_arc(p,true,e);draw_arc(p,false,f);
    check(zero_gui.visits()>0,"GUI zero-width arc lost both line segments");for(auto n:zero_gui.hits)check(n%2==0,"GUI zero-width segments were deduplicated");check(zero_mesh.visits()==0,"Mesh zero-width degenerates painted");++scenarios;
    p.arc_angle=0;Canvas empty(20,18);auto g=sink(empty);fill_arc(p,true,g);fill_arc(p,false,g);draw_arc(p,true,g);draw_arc(p,false,g);check(empty.visits()==0,"Empty arc painted");++scenarios;
}
void admission_cases(){
    auto noop=[](int,int){};
    rejects<std::invalid_argument>([&]{ArcRasterSink s(-1,1,identity,noop);},"Negative width admitted");
    rejects<std::invalid_argument>([&]{ArcRasterSink s(1,-1,identity,noop);},"Negative height admitted");++scenarios;
    for(auto extents:std::vector<std::pair<int,int>>{{0,4},{4,0},{0,0},{std::numeric_limits<int>::max(),0}}){
        std::size_t visits=0;auto s=ArcRasterSink(extents.first,extents.second,identity,[&](int,int){++visits;});
        mesh(s,{{-1,-1},{5,-1},{5,5}},{0,1,2});gui(s,ArcPrimitive::lines,{{-5,2},{5,2}});check(visits==0,"Empty viewport emitted samples");++scenarios;
    }
    Canvas canvas(8,6);auto s=sink(canvas);
    rejects<std::logic_error>([&]{s.vertex({0,0});},"Vertex without primitive admitted");
    rejects<std::logic_error>([&]{s.indices(nullptr,0);},"Indices without mesh admitted");
    rejects<std::logic_error>([&]{s.gui_end();},"GUI end without begin admitted");
    rejects<std::invalid_argument>([&]{s.gui_begin(static_cast<ArcPrimitive>(99));},"Unknown GUI mode admitted");++scenarios;
    s.gui_begin(ArcPrimitive::triangles);
    rejects<std::logic_error>([&]{s.gui_begin(ArcPrimitive::lines);},"Nested GUI begin admitted");
    rejects<std::logic_error>([&]{s.mesh_ready();},"Mesh inside GUI begin admitted");s.gui_end();++scenarios;
    auto partial=sink(canvas);partial.gui_begin(ArcPrimitive::triangles);partial.vertex({0,0});rejects<std::logic_error>([&]{partial.gui_end();},"Partial GUI primitive admitted");++scenarios;
    auto bad=sink(canvas);bad.mesh_ready();bad.vertex({0,0});bad.vertex({4,0});bad.vertex({4,4});
    const std::int32_t invalid[]={0,1,2,0,1,-1};rejects<std::out_of_range>([&]{bad.indices(invalid,6);},"Negative mesh index admitted");check(canvas.visits()==0,"Malformed index batch partially painted");
    const std::int32_t high[]={0,1,3};rejects<std::out_of_range>([&]{bad.indices(high,3);},"High mesh index admitted");
    rejects<std::invalid_argument>([&]{bad.indices(invalid,2);},"Incomplete mesh triangle admitted");
    rejects<std::invalid_argument>([&]{bad.indices(nullptr,3);},"Null index span admitted");bad.indices(nullptr,0);++scenarios;
    auto budget=ArcRasterSink(8,6,identity,noop,std::size_t(2));budget.mesh_ready();budget.vertex({0,0});budget.vertex({1,0});rejects<std::length_error>([&]{budget.vertex({1,1});},"Mesh vertex budget ignored");++scenarios;
    const auto nan=std::numeric_limits<float>::quiet_NaN();const auto infinity=std::numeric_limits<float>::infinity();
    rejects<std::domain_error>([&]{s.map(nan,0);},"NaN map input admitted");
    auto invalid_map=ArcRasterSink(8,6,[&](float,float){return ArcPoint{infinity,0};},noop);
    rejects<std::domain_error>([&]{invalid_map.map(0,0);},"Infinite mapped position admitted");
    auto invalid_vertex=sink(canvas);invalid_vertex.mesh_ready();rejects<std::domain_error>([&]{invalid_vertex.vertex({nan,0});},"NaN mesh position admitted");++scenarios;
}
}
int main(){
    try{
        triangle_cases();gui_cases();line_cases();arc_cases();admission_cases();
        std::cout<<"{\"status\":\"PASS\",\"scenarios\":"<<scenarios<<",\"assertions\":"<<assertions<<",\"raster_android_verified\":false,\"game_boot\":false}\n";
    }catch(const std::exception& error){std::cerr<<"Arc CPU raster fixture failed: "<<error.what()<<'\n';return 1;}
}
