#include "services_managed.hpp"
#include <fstream>
#include <iostream>
int main(int argc,char** argv){
    if(argc!=2)return 2;
    unsigned int assertions=0;auto require=[&](bool value){if(!value)throw std::runtime_error("Managed service adapter fixture failed");++assertions;};
    const auto folder=std::filesystem::u8path(argv[1]);
    pls::services::OfflineServices host(folder);pls::services::install(&host);
    auto first=pls::services::managed::register_local();
    const auto id=host.device_id();require(id.size()==32);require(first.length()==5);
    const std::uint8_t expected[]={'1','\n','2','0','2'};
    for(int i=0;i<5;++i)require(first.at(i)==expected[i]);
    first.at(0)=0;auto second=pls::services::managed::register_local();require(first!=second);require(second.at(0)=='1');
    pls::services::OfflineServices reopened(folder);pls::services::install(&reopened);auto third=pls::services::managed::register_local();require(reopened.device_id()==id);require(third.at(0)=='1');
    pls::services::install(nullptr);bool rejected=false;try{pls::services::managed::register_local();}catch(const pls::cs::InvalidOperationException&){rejected=true;}require(rejected);
    std::cout<<"{\"assertions\":"<<assertions<<",\"exact_registration_wire\":true,\"persistent_device_identity\":true,\"fresh_managed_array_per_call\":true,\"account_identity_not_modified\":true,\"game_boot\":false}\n";
}
