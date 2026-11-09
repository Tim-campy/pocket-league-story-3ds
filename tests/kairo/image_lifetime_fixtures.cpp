#include "graphics.hpp"
#include <iostream>
using namespace pls::kairo;
namespace {
std::int32_t frame,create_area,baseline;bool count_enabled=true;
std::vector<pls::cs::Ref<Image>> all;
struct Owner:pls::cs::Object {pls::cs::Ref<Image> image;void trace_edges(const pls::cs::EdgeVisitor& v)const override{pls::cs::trace_value(image,v);}void release_edges()override{image.reset();}};
const char* B(bool b){return b?"True":"False";}
pls::cs::Ref<Image> S(std::uint8_t a,std::uint8_t b){auto value=Image::FromBytes(pls::cs::Array<std::uint8_t>::from({a,b,41}));all.push_back(value);return value;}
void reset(){for(const auto& image:all)image->Dispose();all.clear();Image::SetSourceImageMaxCount(0);Image::SetSourceImageMaxPixels(0);Image::SetSourceImageValidateFrames(0);frame=0;create_area=0;count_enabled=true;baseline=Image::native_releases();}
void P(const char* name,std::initializer_list<pls::cs::Ref<Image>> images){const auto cache=Image::native_cache_size();std::cout<<name<<'='<<cache[0]<<':'<<cache[1]<<':'<<create_area<<':'<<Image::native_releases()-baseline;for(const auto& image:images)std::cout<<'/'<<B(image->native_resident())<<':'<<B(image->get_IsDisposed())<<':'<<image->GetWidth()<<':'<<image->GetHeight()<<':'<<B(image->IsExpiration());std::cout<<'\n';}
}
int main(int argc,char**argv){
 if(argc!=2&&argc!=3)return 2;pls::assets::Catalog catalog(std::filesystem::u8path(argv[1]));install_asset_catalog(&catalog);
 unsigned int assertions=0;auto check=[&](bool b){if(!b)throw std::runtime_error("Image lifetime policy failed");++assertions;};
 if(argc==3){bool failed=false;try{Image::UnuseExpirationImages();}catch(const pls::cs::InvalidOperationException&){failed=true;}check(failed);failed=false;try{install_image_runtime({});}catch(const pls::cs::ArgumentException&){failed=true;}check(failed);}
 ImageRuntimeBindings runtime;runtime.check_count=pls::cs::Delegate<std::int32_t()>::from_static("own-frame",[]{return frame;});runtime.count_enabled=pls::cs::Delegate<bool()>::from_static("own-count",[]{return count_enabled;});runtime.adjust_create_area=pls::cs::Delegate<void(std::int32_t)>::from_static("own-area",[](std::int32_t delta){create_area=pls::cs::add_i32(create_area,delta);});
 runtime.measure_source=pls::cs::Delegate<pls::cs::Array<std::int32_t>(pls::cs::Array<std::uint8_t>)>::from_static("own-header",[](pls::cs::Array<std::uint8_t> data){return pls::cs::Array<std::int32_t>::from({data.at(0),data.at(1)});});
 runtime.read_source=pls::cs::Delegate<pls::cs::Array<std::uint8_t>(std::int32_t,std::int32_t,pls::cs::String,pls::cs::String)>::from_static("own-file",[](std::int32_t rs,std::int32_t rc,pls::cs::String file,pls::cs::String palette){if(rs!=-1||rc!=-1||!palette.is_null())throw pls::cs::NotSupportedException();return file==pls::cs::String(u"synthetic")?pls::cs::Array<std::uint8_t>::from({3,2,41}):pls::cs::Array<std::uint8_t>{};});install_image_runtime(std::move(runtime));
 if(argc==3){
  std::weak_ptr<Owner> weak;{auto owner=pls::cs::make_ref<Owner>();auto raw=owner.get();owner->image=Image::FromLoader(pls::cs::Delegate<pls::cs::Array<std::uint8_t>()>::bind(owner,"own-image-cycle",[raw]{(void)raw;return pls::cs::Array<std::uint8_t>::from({3,2,41});}));weak=owner;}pls::cs::gc_collect();check(weak.expired());
  std::weak_ptr<Image> image;{auto value=Image::FromSource(pls::cs::Array<std::uint8_t>::from({3,2,41}));value->Use();value->SetExpiration(true,1);image=value;}pls::cs::gc_collect();check(!image.expired());frame=2;Image::UnuseExpirationImages();pls::cs::gc_collect();check(image.expired());check(create_area==0);
  std::cout<<"{\"assertions\":"<<assertions<<",\"missing_bindings_rejected\":true,\"loader_cycle_collected\":true,\"source_cache_owns_resident_images\":true,\"game_boot\":false}\n";return 0;
 }
 reset();auto a=S(3,2);a->SetExpiration(true,40);P("lazy",{a});frame=10;a->Use();P("used",{a});frame=11;a->Use();frame=50;Image::UnuseExpirationImages();P("threshold-equal",{a});frame=51;Image::UnuseExpirationImages();P("threshold-past",{a});frame=52;a->Use();P("reloaded",{a});a->Dispose();P("disposed",{a});
 reset();a=S(3,2);a->Use();a->SetExpiration(false,1);frame=100;Image::UnuseExpirationImages();P("locked",{a});Image::SetSourceImageValidateFrames(5);a->SetExpiration(true);Image::UnuseExpirationImages();P("global-frames",{a});
 reset();a=S(3,2);a->Use();a->SetExpiration(true,0);frame=100;Image::UnuseExpirationImages();P("zero-disabled",{a});a->SetExpiration(true,-2);Image::UnuseExpirationImages();P("negative-disabled",{a});
 reset();a=Image::CreateImage(3,2);all.push_back(a);frame=100;Image::UnuseExpirationImages();P("created-locked",{a});a->SetExpiration(true,1);Image::UnuseExpirationImages();P("created-expired-dispose",{a});
 reset();a=Image::FromRgba(3,2,std::vector<std::uint8_t>(24));all.push_back(a);a->SetExpiration(true,1);frame=100;Image::UnuseExpirationImages();a->Unuse();P("texture-not-reloadable",{a});a->Dispose();P("texture-disposed",{a});
 reset();Image::SetSourceImageMaxCount(1);a=S(3,2);a->SetExpiration(false);a->Use();auto b=S(4,1);b->Use();P("count-evicts-locked",{a,b});
 reset();Image::SetSourceImageMaxPixels(4);a=Image::CreateImage(3,2);all.push_back(a);b=S(4,1);b->Use();P("pixels-evict-created",{a,b});
 reset();Image::SetSourceImageMaxCount(2);a=S(3,2);a->Use();frame=1;b=S(4,1);b->Use();frame=2;auto c=S(1,1);c->Use();P("oldest-weight",{a,b,c});
 reset();frame=std::numeric_limits<std::int32_t>::max();a=S(3,2);a->Use();a->SetExpiration(true,1);frame=std::numeric_limits<std::int32_t>::min();Image::UnuseExpirationImages();P("wrapped-one",{a});++frame;Image::UnuseExpirationImages();P("wrapped-two",{a});
 reset();a=Image::FromFile(pls::cs::String(u"synthetic"));all.push_back(a);P("file-placeholder",{a});a->Use();P("file-loaded",{a});a->Unuse();a->Use();P("file-reloaded",{a});
 reset();a=S(3,2);a->Use();a->SetExpiration(true,1);frame=15;a->source_drawn();frame=16;Image::UnuseExpirationImages();P("draw-stamp-equal",{a});frame=17;Image::UnuseExpirationImages();P("draw-stamp-past",{a});
 reset();auto src=pls::cs::Array<std::uint8_t>::from({3,2,41});a=Image::FromBytes(src);all.push_back(a);src.at(0)=4;src.at(1)=1;P("source-alias-before-use",{a});a->Use();P("source-alias-after-use",{a});a->Unuse();src.at(0)=1;a->Use();P("source-alias-reload",{a});
 reset();a=S(3,2);a->Use();count_enabled=false;a->Unuse();P("count-disabled-unuse",{a});reset();
}
