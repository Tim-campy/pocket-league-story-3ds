#include "managed_dictionary.hpp"
#include <iostream>
#include <sstream>
using namespace pls::cs;using I=std::int32_t;using D=Dictionary<String,I>;
static std::string tf(bool value){return value?"True":"False";}
template<class F>std::string run(F work){try{return work();}catch(const Exception&e){return e.type_name();}}
static std::string contents(const D&d){std::string s;auto e=d.GetEnumerator();while(e.MoveNext()){auto pair=e.get_Current();if(!s.empty())s+=",";s+=pair.key.utf8()+":"+std::to_string(pair.value);}return s;}
static std::string mutation(const std::string&mode){auto d=D::make();d.Add(String(u"a"),1);d.Add(String(u"b"),2);auto e=d.GetEnumerator();if(mode=="set")d.set_Item(String(u"a"),9);if(mode=="add")d.Add(String(u"c"),3);if(mode=="remove")d.Remove(String(u"a"));if(mode=="remove-missing")d.Remove(String(u"x"));if(mode=="clear")d.Clear();return run([&]{return tf(e.MoveNext());});}
int main(int argc,char**argv){if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    auto d=D::make();std::cout<<"empty="<<d.get_Count()<<'\n';d.Add(String(u"a"),1);d.Add(String(u"b"),2);d.Add(String(u"c"),3);std::cout<<"insert="<<contents(d)<<'\n';d.set_Item(String(u"b"),4);std::cout<<"set="<<contents(d)<<'\n';d.Remove(String(u"b"));d.Add(String(u"d"),5);std::cout<<"reuse="<<contents(d)<<'\n';
    I value=9;bool found=d.TryGetValue(String(u"x"),value);std::cout<<"missing-out="<<tf(found)<<','<<value<<'\n';found=d.TryGetValue(String(u"d"),value);std::cout<<"found-out="<<tf(found)<<','<<value<<'\n';
    std::cout<<"duplicate="<<run([&]{d.Add(String(u"a"),99);return std::string("none");})<<'\n';std::cout<<"missing="<<run([&]{return std::to_string(d.get_Item(String(u"x")));})<<'\n';std::cout<<"null-key="<<run([&]{return tf(d.ContainsKey(String()));})<<'\n';
    std::cout<<"null-add="<<run([&]{d.Add(String(),1);return std::string("none");})<<'\n';std::cout<<"null-set="<<run([&]{d.set_Item(String(),1);return std::string("none");})<<'\n';std::cout<<"null-remove="<<run([&]{return tf(d.Remove(String()));})<<'\n';
    std::cout<<"contains="<<tf(d.ContainsKey(String(u"a")))<<','<<tf(d.ContainsValue(5))<<','<<tf(d.ContainsValue(99))<<'\n';
    for(const std::string mode:{"set","add","remove","remove-missing","clear"})std::cout<<"mutation-"<<mode<<'='<<mutation(mode)<<'\n';
    auto empty=D::make();auto ee=empty.GetEnumerator();empty.Clear();std::cout<<"clear-empty="<<run([&]{return tf(ee.MoveNext());})<<'\n';
    auto before=d.GetEnumerator();auto bp=before.get_Current();std::cout<<"before="<<tf(bp.key.is_null())<<','<<bp.value<<'\n';while(before.MoveNext()){}bp=before.get_Current();std::cout<<"after="<<tf(bp.key.is_null())<<','<<bp.value<<'\n';
    auto disposed=d.GetEnumerator();disposed.Dispose();std::cout<<"disposed="<<run([&]{return tf(disposed.MoveNext());})<<'\n';
    auto alias=d;alias.set_Item(String(u"a"),8);std::cout<<"alias="<<d.get_Item(String(u"a"))<<'\n';d.Clear();d.Add(String(u"z"),9);std::cout<<"clear-reuse="<<contents(d)<<'\n';
    auto nan=Dictionary<double,String>::make();nan.set_Item(std::numeric_limits<double>::quiet_NaN(),String(u"n"));nan.set_Item(-0.0,String(u"z"));std::cout<<"float-equal="<<tf(nan.ContainsKey(std::numeric_limits<double>::quiet_NaN()))<<','<<nan.get_Item(0.0).utf8()<<'\n';
    auto nullable=Dictionary<I,String>::make();nullable.Add(1,String());std::cout<<"null-value="<<tf(nullable.ContainsValue(String()))<<','<<tf(nullable.get_Item(1).is_null())<<'\n';std::cout<<"negative-cap="<<run([]{return std::to_string(Dictionary<I,I>::make(-1).get_Count());})<<'\n';
}
