#include "managed_collation.hpp"
#include "managed_thread.hpp"
#include <iostream>
#include <string>
using namespace pls::cs;
namespace {
std::string describe(){const auto&c=current_collation_culture();auto s=std::to_string(c.lcid);for(int p:c.parent_lcids)if(p!=127)s+="/"+std::to_string(p);return s;}
template<class F>Ref<Thread> make_thread(F&&work){return make_ref<Thread>(ThreadStart::from_static("own-culture-fixture",std::forward<F>(work)));}
}
int main(){GcMutatorScope host;set_default_collation_culture({1033,{9},"en",false});std::cout<<"initial\t"<<describe()<<'\n';set_current_collation_culture({1055,{31},"tr",true});std::cout<<"parent-tr\t"<<describe()<<'\n';std::string child,overridden,grandchild;auto t=make_thread([&]{child=describe();set_current_collation_culture({1031,{7},"de",false});overridden=describe();auto nested=make_thread([&]{grandchild=describe();});nested->Start();nested->Join();});set_current_collation_culture({1036,{12},"fr",false});t->Start();t->Join();std::cout<<"child\t"<<child<<'\n'<<"child-override\t"<<overridden<<'\n'<<"grandchild\t"<<grandchild<<'\n'<<"parent-fr\t"<<describe()<<'\n';clear_current_collation_culture();std::cout<<"restored\t"<<describe()<<'\n';}
