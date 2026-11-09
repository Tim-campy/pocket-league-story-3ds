#include "../../src/kairo/common/arc_geometry.hpp"
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace {
using namespace pls::kairo::geometry;
std::string bits(float value){std::uint32_t n{};std::memcpy(&n,&value,sizeof(n));std::ostringstream out;out<<std::hex<<std::setfill('0')<<std::setw(8)<<n;return out.str();}
std::string double_bits(double value){std::uint64_t n{};std::memcpy(&n,&value,sizeof(n));std::ostringstream out;out<<std::hex<<std::setfill('0')<<std::setw(16)<<n;return out.str();}
float value(const std::string& text){const auto n=static_cast<std::uint32_t>(std::stoul(text,nullptr,16));float result{};std::memcpy(&result,&n,sizeof(result));return result;}
struct TraceSink {
    std::ostream& out;
    ArcPoint map(float x,float y){out<<"map:"<<bits(x)<<','<<bits(y)<<'\n';return {x,y};}
    void mesh_ready(){out<<"ready\n";}
    void vertex(ArcPoint point){out<<"v:"<<bits(point.x)<<','<<bits(point.y)<<",00000000\n";}
    void indices(const std::int32_t* values,std::size_t count){out<<"i:";for(std::size_t i=0;i<count;++i){if(i)out<<',';out<<values[i];}out<<'\n';}
    void gui_begin(ArcPrimitive mode){out<<"pass:0\nbegin:"<<static_cast<int>(mode)<<'\n';}
    void gui_end(){out<<"end\n";}
};
void precision_probe(const char* path){
    std::cout<<"platform-pointer-bytes="<<sizeof(void*)<<'\n';
    std::ifstream input(path);if(!input)throw std::runtime_error("Cannot read own precision cases");
    for(std::string row;std::getline(input,row);){
        std::vector<std::string> fields;std::istringstream split(row);
        for(std::string cell;std::getline(split,cell,'\t');)fields.push_back(cell);
        if(fields.size()!=5)throw std::invalid_argument("Invalid precision row");
        const auto angle=value(fields[1]),center=value(fields[2]),radius=value(fields[3]),v=value(fields[4]);
        const auto id=fields[0];const ArcMath math;
        std::cout<<id<<"-cos="<<bits(math.cosine(angle))<<'\n'<<id<<"-sin="<<bits(math.sine(angle))<<'\n';
        std::cout<<id<<"-radians="<<double_bits(static_cast<double>(angle)*ArcMath::pi/180.0)<<'\n';
        const float product=v*radius;const float expression=center+product;
        std::cout<<id<<"-expr="<<bits(expression)<<'\n'<<id<<"-single-product="<<bits(expression)<<'\n';
        // Diagnostic control only; never used by the binary32 geometry kernel.
        std::cout<<id<<"-diagnostic-wide="<<bits(static_cast<float>(static_cast<double>(center)+static_cast<double>(v)*static_cast<double>(radius)))<<'\n';
    }
    for(int count=1;count<=8;++count){
        const float step=360.0f/26.0f;float angle=0.0f;
        for(int i=0;i<count;++i){float next=angle+step;if(i==0)next=static_cast<float>(static_cast<int>(next/step))*step+step;angle=next;}
        std::cout<<"step-"<<count<<"-plain="<<bits(angle)<<'\n'<<"step-"<<count<<"-single="<<bits(angle)<<'\n';
    }
}
}
int main(int argc,char** argv){
    static_assert(sizeof(float)==4&&std::numeric_limits<float>::is_iec559,"Arc traces require binary32");
    if(argc==3&&std::string(argv[1])=="--precision"){precision_probe(argv[2]);return 0;}
    if(argc!=2)throw std::invalid_argument("Own geometry case manifest required");
    std::ifstream input(argv[1]);if(!input)throw std::runtime_error("Cannot read own geometry cases");
    for(std::string row;std::getline(input,row);){
        std::vector<std::string> fields;std::istringstream split(row);
        for(std::string cell;std::getline(split,cell,'\t');)fields.push_back(cell);
        if(fields.size()!=10)throw std::invalid_argument("Invalid own geometry case row");
        ArcParameters p{value(fields[3]),value(fields[4]),value(fields[5]),value(fields[6]),value(fields[7]),value(fields[8]),value(fields[9])};
        TraceSink sink{std::cout};std::cout<<"case:"<<fields[0]<<'\n';
        if(fields[1]=="draw")draw_arc(p,fields[2]=="1",sink);
        else if(fields[1]=="fill")fill_arc(p,fields[2]=="1",sink);
        else throw std::invalid_argument("Unknown own geometry case kind");
        std::cout<<"done\n";
    }
}
