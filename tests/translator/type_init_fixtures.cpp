#include "managed_type_init.hpp"
#include <atomic>
#include <iostream>
#include <thread>
using namespace pls::cs;
namespace {
int failures{},thread_calls{};std::string trace;
TypeInitState ordered,recursive,a_state,b_state,failed_state,nested,threaded;
int oa{},ob{},ra{},rb{},a{},b{},thread_value{};
void init_ordered(){ordered.run("OrderedInit",[]{trace+="A";oa=7;trace+="B";ob=oa+1;trace+="C";});}
void init_recursive(){recursive.run("RecursiveInit",[]{init_recursive();ra=rb+1;rb=9;});}
void init_b();void init_a(){a_state.run("InitA",[]{init_b();a=b+1;});}void init_b(){b_state.run("InitB",[]{init_a();b=a+1;});}
void init_failed(){failed_state.run("FailedInit",[]{++failures;throw InvalidOperationException("fixture-inner");});}
}
int main(int argc,char**argv){
    if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    init_ordered();std::cout<<"order="<<oa<<","<<ob<<","<<trace<<"\n";init_ordered();std::cout<<"once="<<trace<<"\n";
    init_recursive();std::cout<<"recursive="<<ra<<","<<rb<<"\n";init_a();std::cout<<"cross="<<a<<","<<b<<"\n";
    std::exception_ptr first,second;
    try{init_failed();}catch(...){first=std::current_exception();}
    try{init_failed();}catch(...){second=std::current_exception();}
    try{std::rethrow_exception(first);}catch(const TypeInitializationException& e){
        std::cout<<"failedType="<<e.type_name()<<"\nfailedName="<<e.initializing_type()<<"\n";
        try{std::rethrow_exception(e.inner_exception());}catch(const Exception& inner){std::cout<<"failedInner="<<inner.type_name()<<":"<<inner.what()<<"\n";}
    }
    const void* first_identity{};const void* second_identity{};
    try{std::rethrow_exception(first);}catch(const TypeInitializationException& e){first_identity=e.identity_token().get();}
    try{std::rethrow_exception(second);}catch(const TypeInitializationException& e){second_identity=e.identity_token().get();}
    std::cout<<"failedCount="<<failures<<"\nfailedIdentity="<<(first_identity==second_identity?"True":"False")<<"\n";
    try{nested.run("NestedFailedInit",[]{init_failed();});}catch(const TypeInitializationException& e){try{std::rethrow_exception(e.inner_exception());}catch(const Exception& inner){std::cout<<"nested="<<e.initializing_type()<<","<<inner.type_name()<<"\n";}}
    std::cout<<"directMessage="<<TypeInitializationException("SyntheticType",std::make_exception_ptr(InvalidOperationException("inner"))).what()<<"\n";
    int results[4]{};std::thread threads[4];
    for(int i=0;i<4;++i)threads[i]=std::thread([&,i]{threaded.run("ThreadInit",[]{++thread_calls;std::this_thread::sleep_for(std::chrono::milliseconds(20));thread_value=13;});results[i]=thread_value;});
    for(auto& t:threads)t.join();std::cout<<"threads="<<thread_calls<<","<<results[0]<<","<<results[1]<<","<<results[2]<<","<<results[3]<<"\n";
}
