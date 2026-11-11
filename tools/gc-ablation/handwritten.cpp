// Experimental floor only; never linked into the game. Same checked array,
// null, conversion and wrapping helpers as the projected generated kernels.
#include "probe_types.hpp"
namespace pls::game {
using namespace pls::cs;
void cs_ce67d59af0bdb552(Array<int> screen,Array<int> camera){
    cs_init_ca6f5bbc06a496a9();
    const int sx=screen.at(0),dx=cs_9bf7f8f14a7b18c8();
    const int x=sub_i32(add_i32(sx,dx),conv_i32(cs_require(cs_026b8db91320700d())->cs_5940b7db44d7fcc3));
    const int sy=screen.at(1),dy=cs_0b895d788cf303f2();
    int y=sub_i32(add_i32(sy,dy),conv_i32(cs_require(cs_026b8db91320700d())->cs_3f971496b3e90e07));
    const int vy=cs_56196b1ca040e8ab(),vh=cs_011e7ba02b8a8647();
    y=sub_i32(add_i32(vy,vh),y);
    camera.at(0)=x;camera.at(1)=y;
}
void cs_440a39169e42578b(Ref<cs_403f4e6631bd3667> self,Array<Array<int>> data,int cx,int cy,Array<float> weights){
    cs_init_403f4e6631bd3667();cs_require(self);
    for(int i=0;i<cs_ad318f24aaa1750d().length();i=add_i32(i,1)){
        const int x=add_i32(cx,cs_ad318f24aaa1750d().at(i).at(0));
        const int y=add_i32(cy,cs_ad318f24aaa1750d().at(i).at(1));
        if(x>=0&&x<cs_4f935210abbc9091()&&y>=0&&y<cs_3618bfacb06c987c()){
            auto target=data.at(y);
            const float left=static_cast<float>(data.at(y).at(x));
            const float right=weights.at(i);
            const int value=conv_i32(left*right);
            target.at(x)=value;
        }
    }
}
int cs_885d2f23113de984(Ref<cs_403f4e6631bd3667> self,Array<Array<int>> data,int cx,int cy,bool div){
    cs_init_403f4e6631bd3667();cs_require(self);int sum=0;
    for(int i=0;i<self->cs_86f9bdd77df832c7.length();i=add_i32(i,1)){
        float weight=1.0f;if(!div)weight=self->cs_86f9bdd77df832c7.at(i);
        const int x=add_i32(cx,cs_ad318f24aaa1750d().at(i).at(0));
        const int y=add_i32(cy,cs_ad318f24aaa1750d().at(i).at(1));
        if(x>=0&&x<cs_4f935210abbc9091()&&y>=0&&y<cs_3618bfacb06c987c())
            sum=add_i32(sum,conv_i32(static_cast<float>(data.at(y).at(x))/weight));
    }
    return sum;
}
bool cs_75873ce2f7c043dd(float x1,float y1,float w1,float h1,float x2,float y2,float w2,float h2,bool up){
    cs_init_1815a6964debf82a();
    if(x1+w1<x2)return false;if(x1>x2+w2)return false;
    if(up){if(y1<y2-h2)return false;if(y1-h1>y2)return false;}
    else {if(y1+h1<y2)return false;if(y1>y2+h2)return false;}
    return true;
}
void cs_e2cc7be9866cb657(Ref<cs_2ffa6f51468590ea> self,int type,int id,int depth,int img,int seb,int frame,int x,int y,bool dark,int layer){
    cs_init_2ffa6f51468590ea();cs_require(self);
    if(self->cs_dcc4c8afca6eace7>=self->cs_64448a7513b68aab.length())return;
    for(;;){
        const int slot=add_i32(depth,360);
        if(slot<0||self->cs_797d22d4c2c75df4.length()<=slot)return;
        if(self->cs_797d22d4c2c75df4.at(slot)>=30){depth=add_i32(depth,1);continue;}
        auto target=self->cs_a983c6db567ab7de.at(slot);
        const int index=self->cs_797d22d4c2c75df4.at(slot);
        const int value=self->cs_dcc4c8afca6eace7;target.at(index)=value;
        auto& count=self->cs_797d22d4c2c75df4.at(slot);count=cast_integral<std::uint8_t>(add_i32(count,1));
        if(self->cs_6de10b92fdc859b0>slot)self->cs_6de10b92fdc859b0=slot;
        if(self->cs_3d3b5753ef643c4e<slot)self->cs_3d3b5753ef643c4e=slot;
        auto row=self->cs_64448a7513b68aab.at(self->cs_dcc4c8afca6eace7);
        row.at(0)=type;row.at(1)=id;row.at(2)=depth;row.at(3)=img;row.at(4)=seb;
        row.at(5)=frame;row.at(6)=x;row.at(7)=y;row.at(8)=dark?1:0;row.at(9)=layer;
        self->cs_dcc4c8afca6eace7=add_i32(self->cs_dcc4c8afca6eace7,1);return;
    }
}
}
