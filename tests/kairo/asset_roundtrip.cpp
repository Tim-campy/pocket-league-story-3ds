#include "backend.hpp"
#include <filesystem>
#include <fstream>
#include <sstream>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <stdexcept>
int main(int argc,char** argv) {
    if(argc!=2)throw std::invalid_argument("local assets directory required");
    std::filesystem::path root=std::filesystem::u8path(argv[1]);
    std::ifstream index(root/"converted/images.tsv");
    if(!index)throw std::runtime_error("run verified local conversion first");
    pls::sdl::Backend backend(768,480,true);
    std::string line;std::size_t count=0;std::uint64_t bytes=0,peak=0;
    while(std::getline(index,line)) {
        std::istringstream row(line);int width{},height{};std::string relative;
        if(!(row>>width>>height>>relative))throw std::runtime_error("invalid local index");
        if(width<=0||width>768||height<=0||height>480)throw std::runtime_error("invalid measured extent");
        std::ifstream file(root/std::filesystem::u8path(relative),std::ios::binary);
        std::vector<std::uint8_t> source{std::istreambuf_iterator<char>(file),std::istreambuf_iterator<char>()};
        auto* texture=backend.upload_rgba8(width,height,source);
        peak=std::max(peak,backend.memory().texture_payload_bytes);
        backend.clear({0,0,0,0});backend.draw(texture,{0,0,width,height},{0,0,width,height},false);
        auto destination=backend.read_pixels();
        for(int y=0;y<height;++y)for(int x=0;x<width;++x)for(int channel=0;channel<4;++channel)
            if(source[(std::size_t(y)*width+x)*4+channel]!=destination[(std::size_t(y)*768+x)*4+channel])
                throw std::runtime_error("RGBA8 texture readback differs");
        backend.release(texture);++count;bytes+=source.size();
    }
    std::cout<<"{\"rgba8_files\":"<<count<<",\"rgba8_bytes\":"<<bytes<<",\"peak_texture_payload_bytes\":"<<peak<<",\"game_boot\":false}\n";
    return count==654?0:1;
}
