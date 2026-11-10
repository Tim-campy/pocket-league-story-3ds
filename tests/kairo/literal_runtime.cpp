#include "semantic_runtime.hpp"
#include "allocation_probe.hpp"
#include <cstdio>
#include <thread>
#include <array>
using namespace pls::cs;
String first(){static const auto text=String::literal(u"literal\0\xd800",9);return text;}
String second(){static const auto text=String::literal(u"literal\0\xd800",9);return text;}
int main(){
    GcMutatorScope mutator;
    auto a=first(),b=second();if(a.as_object()!=b.as_object()||a.length()!=9||a.at(7)!=0||a.at(8)!=0xd800)return 1;
    if(String(u"literal\0\xd800",9).as_object()==a.as_object())return 2;
    std::array<String,8>values;std::array<std::thread,8>workers;
    for(std::size_t i=0;i<workers.size();++i)workers[i]=std::thread([&,i]{GcMutatorScope scope;values[i]=String::literal(u"concurrent synthetic literal",28);});
    for(auto&t:workers)t.join();
    for(const auto&s:values)if(s.as_object()!=values[0].as_object())return 3;
    gc_collect();if(first().as_object()!=a.as_object())return 4;
    auto before=pls::allocation_probe::snapshot();pls::allocation_probe::enabled=true;
    for(int i=0;i<10000;++i)if(first().as_object()!=second().as_object())return 5;
    pls::allocation_probe::enabled=false;auto after=pls::allocation_probe::snapshot();
    if(after.allocations!=before.allocations||after.bytes!=before.bytes)return 6;
    std::printf("{\"cached_reads\":20000,\"allocations\":0,\"bytes\":0,\"concurrent_callers\":8,\"identity_and_utf16\":true}\n");
}
