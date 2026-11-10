#include "diagnostic_profile.hpp"
#include "mesh.hpp"
#include "render_mode.hpp"
#include <limits>
namespace pls::kairo {
void MeshManager::SetDepth(std::int32_t depth,bool back){
    auto value=back?cs::add_i32(depth,-750000):depth;
    const auto next=cs::sub_i32(750000,value);
    if(current_depth_<front_depth_)front_depth_=current_depth_;
    current_depth_=float(next);
}
void MeshManager::BeginMesh(){current_depth_=front_depth_=1498976.0f;active_.clear();batches_.clear();}
void MeshManager::BeginPrimitive(cs::Ref<Image> image,std::array<std::uint8_t,4> brush,std::array<std::int32_t,3> mode,std::array<std::int32_t,2> blend,bool clip){
    active_.clear();if(!capture_)return;
    if(mode[1]<0||mode[1]>255||mode[2]<0||mode[2]>255)throw cs::NotSupportedException("Offscreen ratios outside0..255 are not admitted");
    const int original_alpha=image?image->GetAlphaType():-1;
    const float color_alpha=image?1.0f:float(brush[3])/255.0f;
    std::vector<std::array<std::int32_t,3>> passes;
    if((mode[0]==1||mode[0]==2)&&cs::add_i32(mode[1],mode[2])!=255){
        if(mode[2]<255)passes.push_back({mode[0],0,mode[2]});
        if(mode[1]>0)passes.push_back({mode[0],mode[1],255});
    }else passes.push_back(mode);
    const auto count=passes.size();
    for(int split=0;split<(original_alpha==3?2:1);++split)for(std::size_t p=0;p<count;++p){
        const auto actual=passes[p];const int filter=original_alpha==3?split+1:0;
        int op=actual[0];if(op==1&&actual[1]==255&&actual[2]==0)op=0;
        float alpha_ratio=1.0f;
        if(op==1||op==2)alpha_ratio=float(actual[1]==0?255-actual[2]:actual[1])/255.0f;
        int type=filter==1?1:filter==2?2:original_alpha;
        if(op==1||op==2)type=2;
        const float alpha=color_alpha*alpha_ratio;
        if(alpha<0.01f){if(type==0)type=1;}else if(alpha<=0.99f&&type!=2)type=2;
        std::uint32_t flags=image?0x10U:0U;if(clip)flags|=4U;if(blend[0]==1)flags|=0x20U;
        if(image&&alpha>=0.99f&&op==0&&actual[1]>=255&&blend[0]==0)flags|=0x10000U;
        if(op==1||op==2){flags|=op==1?0x40U:0x80U;
            if(actual[1]+actual[2]==255)flags|=0x2000U;
            else if(op==1?actual[2]==255:actual[1]>0)flags|=0x4000U;else flags|=0x8000U;
        }else if(type==0)flags|=0x100U;
        if(type==2)flags|=0x200U;else if(type==1)flags|=0x400U;
        if(filter==1)flags|=0x800U;else if(filter==2)flags|=0x1000U;
        int queue=type==2?3000:type==1?2450:2000;if(flags&0x8000U)--queue;
        if(image)queue=cs::add_i32(queue,image->renderQueue_);
        const auto constant=(flags&0x20U)?blend[1]:0;
        auto it=std::find_if(batches_.begin(),batches_.end(),[&](const Batch&batch){return batch.shader_flags==flags&&batch.image==image&&batch.blend_color==constant&&batch.queue==queue;});
        std::size_t index=std::size_t(it-batches_.begin());
        if(it==batches_.end())batches_.push_back({flags,queue,type,filter,image,constant,{}});
        current_depth_-=0.1f;
        active_.push_back({index,current_depth_,alpha_ratio,actual,blend});
    }
}
void MeshManager::Record(std::int32_t x,std::int32_t y,std::array<std::uint8_t,4> color){
    try{for(const auto&pass:active_){
        const auto&batch=batches_[pass.batch];const float alpha=float(color[3])/255.0f*pass.alpha_ratio;
        if(batch.filter==1?alpha<=0.99f:batch.filter==2?alpha>0.99f:batch.alpha_type==1&&alpha<0.01f)continue;
        batches_[pass.batch].fragments.push_back({x,y,color,pass.depth,pass.mode,pass.blend});
    }}catch(const std::bad_alloc&){throw cs::OutOfMemoryException();}
}
void MeshManager::Render(const cs::Ref<Image>&target,const Commands&dynamic,const Commands&statics){
    if constexpr(null_render_backend){cs::nonnull(target);for(const auto*commands:{&dynamic,&statics})for(const auto&batch:*commands)if(batch.image){batch.image->Use();batch.image->source_drawn();}return;}
    auto image=cs::nonnull(target);auto painter=cs::make_ref<Graphics>(image);painter->ClearClip();
    struct Item{const Batch*batch;std::size_t manager,index;};std::vector<Item> sorted;
    for(std::size_t manager=0;manager<2;++manager){const auto&commands=manager?statics:dynamic;for(std::size_t index=0;index<commands.size();++index)sorted.push_back({&commands[index],manager,index});}
    std::sort(sorted.begin(),sorted.end(),[](const Item&a,const Item&b){if(a.batch->queue!=b.batch->queue)return a.batch->queue<b.batch->queue;if(a.manager!=b.manager)return a.manager<b.manager;return a.index>b.index;});
    PLS_PROFILE_AREA(raster);
    std::vector<float> depth(std::size_t(image->GetWidth())*std::size_t(image->GetHeight()),std::numeric_limits<float>::infinity());
    for(const auto&item:sorted){const auto&batch=*item.batch;if(batch.image){batch.image->Use();batch.image->source_drawn();}
        for(const auto&fragment:batch.fragments){
            const auto index=std::size_t(fragment.y)*std::size_t(image->GetWidth())+std::size_t(fragment.x);
            if(fragment.depth>depth[index])continue;
            if(batch.alpha_type!=2)depth[index]=fragment.depth;
            painter->mode_=fragment.mode;painter->blend_=fragment.blend;
            painter->pixel(fragment.x,fragment.y,fragment.color,bool(batch.image));
        }
    }
}
void MeshManager::trace_edges(const cs::EdgeVisitor&visit)const{cs::trace_value(graphics_,visit);for(const auto&batch:batches_)cs::trace_value(batch.image,visit);}
void MeshManager::release_edges(){cs::release_value(graphics_);for(auto&batch:batches_)cs::release_value(batch.image);batches_.clear();active_.clear();}
void MeshManager::memory_ranges(const memory::RangeVisitor&visit)const{visit(batches_.data(),batches_.capacity()*sizeof(Batch),memory::Category::managed_heap);for(const auto&batch:batches_)visit(batch.fragments.data(),batch.fragments.capacity()*sizeof(Fragment),memory::Category::managed_heap);}
}
