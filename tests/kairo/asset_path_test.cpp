#include "asset_catalog.hpp"
#include "semantic_runtime.hpp"
#include <chrono>
#include <cstdio>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace fs=std::filesystem;
using Clock=std::chrono::steady_clock;

static fs::path reference_path(const fs::path& root,const std::string& name){
    auto relative=fs::u8path(name);
    if(relative.is_absolute()||relative.has_root_path())throw pls::cs::IOException("Absolute asset path refused");
    auto result=fs::canonical(root/relative);auto under=result.lexically_relative(root);
    if(under.empty()||*under.begin()=="..")throw pls::cs::IOException("Asset path escapes local root");
    return result;
}

template<class F>static std::string outcome(F&& action){
    try{return "path:"+action().generic_string();}
    catch(const fs::filesystem_error& error){return "fs:"+std::string(error.code().category().name())+":"+std::to_string(error.code().value());}
    catch(const pls::cs::IOException& error){return "guard:"+std::string(error.what());}
}

int main(int argc,char** argv){
#if defined(__3DS__)
    if(!std::freopen("sdmc:/pls-benchmark/asset-path-test.log","w",stdout))return 2;
#else
    if(argc!=2)return 2;
#endif
    try{
        const auto root=fs::canonical(argc==2?fs::u8path(argv[1]):fs::path("/pls-benchmark/assets"));
        pls::assets::Catalog catalog(root);std::size_t count=0;long long reference_ns=0,candidate_ns=0;
        for(int kind=1;kind<=8;++kind)for(const auto* entry:catalog.entries(static_cast<pls::assets::Kind>(kind))){
            auto a=Clock::now();auto expected=reference_path(root,entry->path);auto b=Clock::now();
            auto actual=catalog.path(*entry);auto c=Clock::now();
            if(actual!=expected)throw std::runtime_error("Catalog path differs");
            reference_ns+=std::chrono::duration_cast<std::chrono::nanoseconds>(b-a).count();
            candidate_ns+=std::chrono::duration_cast<std::chrono::nanoseconds>(c-b).count();
            if(++count%500==0){std::printf("PATH_PROGRESS=%zu\n",count);std::fflush(stdout);}
        }
        const std::vector<std::string> edges={"",".","..","../","/outside",":","converted/","converted//",
            "converted/catalog.idx","./converted/catalog.idx","converted/../converted/catalog.idx",
            "converted/./catalog.idx","converted//catalog.idx","missing-synthetic-fixture",
            "missing-synthetic-fixture/../converted/catalog.idx","converted\\catalog.idx"};
        for(const auto& name:edges){
            pls::assets::Entry entry{};entry.path=name;
            if(outcome([&]{return reference_path(root,name);})!=outcome([&]{return catalog.path(entry);}))
                throw std::runtime_error("Path edge case differs");
        }
        if(count!=catalog.size()||count==0)throw std::runtime_error("Incomplete catalog comparison");
        std::printf("PATH_PASS records=%zu edge_cases=%zu reference_ns=%lld candidate_ns=%lld\n",count,edges.size(),reference_ns,candidate_ns);
        std::fflush(stdout);return 0;
    }catch(const std::exception& error){std::fprintf(stderr,"PATH_FAIL %s\n",error.what());return 1;}
}
