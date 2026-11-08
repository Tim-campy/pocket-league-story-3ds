#include "asset_reader.hpp"
#include "display_metrics.hpp"
#include <iostream>
using namespace pls::kairo;
namespace {
struct App:IApplication{void OnUpdate()override{}void OnDraw()override{}pls::cs::Ref<FormManagerBase> GetFormManager()override{return {};}};
void dump(const char* name){std::cout<<name<<'='<<pls::cs::bit_copy<std::int32_t>(DisplayMetrics::get_Density())<<':'<<DisplayMetrics::get_DensityDPI()<<':'<<DisplayMetrics::get_WidthPixels()<<':'<<DisplayMetrics::get_HeightPixels()<<':'<<pls::cs::bit_copy<std::int32_t>(DisplayMetrics::get_ScaledDensity())<<':'<<pls::cs::bit_copy<std::int32_t>(DisplayMetrics::get_XDPI())<<':'<<pls::cs::bit_copy<std::int32_t>(DisplayMetrics::get_YDPI())<<'\n';}
}
int main(int argc,char** argv){
 if(argc==1){auto app=pls::cs::make_ref<App>();app->source_Init(app);app->host_configure(240,280,{},{});dump("first-static-access");app->host_configure(400,240,{},{});pls::cs::make_ref<DisplayMetrics>();dump("constructor-does-not-refresh");DisplayMetrics::Update();dump("explicit-update");return 0;}
 pls::assets::Catalog catalog(std::filesystem::u8path(argv[1]));pls::assets::install(&catalog);
 std::uint64_t bytes=0;unsigned int views=0,assertions=0,filelist_text_assets=0;auto check=[&](bool value){if(!value)throw std::runtime_error("TextAsset leaf policy failed");++assertions;};
 check(!load_text_asset(pls::cs::String(u"data/own-missing-fixture")));
 for(const auto* entry:catalog.entries(pls::assets::Kind::raw_resource)){
  const auto expected=catalog.read(*entry);auto text=load_text_asset(pls::cs::String::from_utf8(entry->key));check(bool(text));
  auto alias=entry->key;for(auto& c:alias)if(c>='a'&&c<='z')c=static_cast<char>(c-'a'+'A');check(bool(load_text_asset(pls::cs::String::from_utf8(alias))));
  const auto original=text->get_bytes();check(static_cast<std::size_t>(original.length())==expected.size());
  for(std::int32_t i=0;i<original.length();++i)check(original.at(i)==expected[static_cast<std::size_t>(i)]);
  auto changed=text->get_bytes();if(changed.length())changed.at(0)^=255;auto retained=text->get_bytes();
  check(retained.is_null()==false);if(retained.length())check(retained.at(0)==expected[0]);
  unload_text_asset(text);check(original.length()==retained.length());
  if(entry->key=="data/filelist"){
   ++filelist_text_assets;
   for(auto value:expected)check(value<128);const auto value=text->get_text();check(static_cast<std::size_t>(value.length())==expected.size());
   for(std::int32_t i=0;i<value.length();++i)check(value.at(i)==static_cast<char16_t>(expected[static_cast<std::size_t>(i)]));
  }
  bytes+=expected.size();++views;
 }
 std::cout<<"{\"raw_resources\":"<<views<<",\"raw_bytes\":"<<bytes<<",\"filelist_text_assets\":"<<filelist_text_assets<<",\"assertions\":"<<assertions<<",\"game_boot\":false}"<<'\n';
}
