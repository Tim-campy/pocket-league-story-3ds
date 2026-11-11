#pragma once
#include "graphics.hpp"
namespace pls::kairo {
// CPU counterpart of the source's material/depth command lists. It owns no
// Unity object; recorded pixels are replayed only by the offscreen backend.
class MeshManager : public cs::Object {
public:
    struct Fragment {
        std::int32_t x{},y{};
        std::array<std::uint8_t,4> color{};
        float depth{};
        std::array<std::int32_t,3> mode{};
        std::array<std::int32_t,2> blend{};
    };
    struct Batch {
        std::uint32_t shader_flags{};
        std::int32_t queue{},alpha_type{},filter{};
        cs::Ref<Image> image{};
        std::int32_t blend_color{};
        std::vector<Fragment> fragments;
    };
    struct ActivePass {
        std::size_t batch{};
        float depth{},alpha_ratio{1};
        std::array<std::int32_t,3> mode{};
        std::array<std::int32_t,2> blend{};
    };
    using Commands=std::vector<Batch>;
private:
    cs::Ref<Graphics> graphics_{};
    Commands batches_;
    std::vector<ActivePass> active_;
    float current_depth_{},front_depth_{};
    bool capture_{};
public:
    explicit MeshManager(cs::Ref<Graphics> graphics):graphics_(std::move(graphics)){}
    static std::string source_managed_type_name(){return "kairo.unity.graphics.MeshManager";}
    std::string managed_type_name()const override{return source_managed_type_name();}
    void SetDepth(std::int32_t,bool back=false);
    void SetDepthFront(){if(front_depth_<current_depth_)current_depth_=front_depth_;}
    void BeginMesh();
    void BeginPrimitive(cs::Ref<Image>,std::array<std::uint8_t,4>,std::array<std::int32_t,3>,std::array<std::int32_t,2>,bool);
    void Record(std::int32_t,std::int32_t,std::array<std::uint8_t,4>);
    bool capturing()const{return capture_;}void capture(bool value){capture_=value;}
    float current_depth()const{return current_depth_;}float front_depth()const{return front_depth_;}
    Commands take_commands(){active_.clear();return std::move(batches_);}
    void put_commands(Commands commands){active_.clear();batches_=std::move(commands);}
    const Commands&commands()const{return batches_;}
    static void Render(const cs::Ref<Image>&,const Commands&,const Commands&);
    void trace_edges(const cs::EdgeVisitor&visit)const override;
    void release_edges()override;
    void memory_ranges(const memory::RangeVisitor&visit)const override;
};
}
