#include "pc_memory.hpp"
#define NOMINMAX
#include <windows.h>
#include <iostream>
#include <stdexcept>
void check(bool condition,const char*message){if(!condition)throw std::runtime_error(message);}
int main(){
    constexpr std::size_t amount=64u*1024u*1024u;
    auto before=pls::pc::sample_process_memory();
    check(before.resident_bytes&&before.private_commit_bytes&&before.peak_resident_bytes,"Process counters unavailable");
    check(before.executable_image_committed_bytes&&before.executable_image_resident_bytes&&before.page_bytes,"Code page counters unavailable");
    check(*before.executable_image_resident_bytes<=*before.executable_image_committed_bytes&&*before.executable_image_committed_bytes%before.page_bytes==0&&*before.executable_image_resident_bytes%before.page_bytes==0,"Code page counters inconsistent");
    auto* memory=static_cast<volatile unsigned char*>(VirtualAlloc(nullptr,amount,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE));check(memory!=nullptr,"Own fixture allocation failed");
    for(std::size_t i=0;i<amount;i+=static_cast<std::size_t>(before.page_bytes))memory[i]=1;
    auto after=pls::pc::sample_process_memory();
    check(after.private_commit_bytes&&*after.private_commit_bytes>=*before.private_commit_bytes+amount,"Private commit failed to track own committed pages");
    check(after.resident_bytes&&*after.resident_bytes>=*before.resident_bytes+amount/2,"Working set failed to track own touched pages");
    check(after.peak_resident_bytes&&*after.peak_resident_bytes>=*after.resident_bytes,"Peak working set is inconsistent");
    check(VirtualFree(const_cast<unsigned char*>(memory),0,MEM_RELEASE)!=0,"Own fixture release failed");
    std::cout<<"{\"status\":\"PASS\",\"assertions\":8,\"baseline_resident_bytes\":"<<*before.resident_bytes<<",\"baseline_private_commit_bytes\":"<<*before.private_commit_bytes<<",\"baseline_executable_image_committed_bytes\":"<<*before.executable_image_committed_bytes<<",\"baseline_executable_image_resident_bytes\":"<<*before.executable_image_resident_bytes<<",\"page_bytes\":"<<before.page_bytes<<",\"allocation_bytes\":"<<amount<<"}\n";
}
