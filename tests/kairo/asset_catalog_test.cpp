#include "asset_catalog.hpp"
#include "sha256.hpp"
#include <iostream>
#include <stdexcept>
int main(int argc,char** argv){
    using namespace pls::assets;
    if(argc!=2)throw std::invalid_argument("Local asset root required");
    if(sha256({})!="e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855")throw std::runtime_error("SHA empty");
    if(sha256({'a','b','c'})!="ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad")throw std::runtime_error("SHA abc");
    Sha256 hash;std::vector<std::uint8_t> block(1000,'a');for(int i=0;i<1000;++i)hash.update(block.data(),block.size());
    if(hash.finish()!="cdc76e5c9914fb9281a1c7e284d73e67f1809a48a497200e046d39ccc7112cd0")throw std::runtime_error("SHA streaming");
    Catalog catalog(std::filesystem::u8path(argv[1]));std::size_t verified{},image_links{};
    for(auto kind:{Kind::resource,Kind::member,Kind::image,Kind::font,Kind::audio,Kind::builtin_font,Kind::baked_array,Kind::raw_resource})
        for(auto* entry:catalog.entries(kind)){
            catalog.verify(*entry);++verified;
            if(kind==Kind::member){auto data=catalog.read(*entry);if(data.size()>8&&data[0]==137&&data[1]=='P'&&data[2]=='N'&&data[3]=='G'){
                auto image=catalog.find(Kind::image,sha256(data));if(!image||image->size!=std::uint64_t(image->width)*image->height*4)throw std::runtime_error("PNG identity link differs");++image_links;
            }}
        }
    if(verified!=catalog.size()||catalog.entries(Kind::resource).size()!=21||image_links!=718)throw std::runtime_error("Catalog fixture coverage differs");
    std::size_t raw_resources{},distinct_views{};
    for(auto* raw:catalog.entries(Kind::raw_resource)){auto decoded=catalog.find(Kind::resource,raw->key);if(!decoded)throw std::runtime_error("Raw resource lacks corresponding decoded view");++raw_resources;if(raw->sha256!=decoded->sha256)++distinct_views;}
    if(raw_resources!=catalog.entries(Kind::resource).size()||distinct_views==0)throw std::runtime_error("Raw and decoded resource views were conflated");
    std::cout<<"{\"records_verified\":"<<verified<<",\"png_occurrence_links\":"<<image_links<<",\"raw_resources\":"<<raw_resources<<",\"raw_decoded_different\":"<<distinct_views<<",\"game_boot\":false}\n";
}
