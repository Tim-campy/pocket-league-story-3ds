#include "semantic_runtime.hpp"
#include <iostream>
using namespace pls::cs;using I=std::int32_t;
template<class F>std::string error(F body){try{body();return "none";}catch(const Exception&e){return e.type_name();}}
static const char*boolean(bool value){return value?"True":"False";}
static std::string join(const List<I>&list){std::string result;for(I i=0;i<list.count();++i){if(i)result+=',';result+=std::to_string(list.get(i));}return result;}
struct IMarker {virtual ~IMarker()=default;};
struct Item : Object,IMarker {};
int main(int argc,char**argv){
    if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    auto list=List<I>::make();std::cout<<"capacity0="<<list.capacity()<<'\n';list.add(9);std::cout<<"capacity1="<<list.capacity()<<'\n';
    auto before=list.get_enumerator();I before_value=0;auto b=error([&]{before_value=before.current();});std::cout<<"before="<<before_value<<','<<b<<'\n';
    auto done=list.get_enumerator();done.move_next();done.move_next();I after_value=0;auto d=error([&]{after_value=done.current();});std::cout<<"after="<<after_value<<','<<d<<'\n';
    auto boxed=list.as_enumerator();std::cout<<"boxed-before="<<error([&]{boxed->get_Current();})<<'\n';
    auto set=list.get_enumerator();list.set(0,9);std::cout<<"set="<<error([&]{set.move_next();})<<'\n';
    auto cap=list.get_enumerator();list.set_capacity(8);std::cout<<"capacity-set="<<error([&]{cap.move_next();})<<'\n';
    auto remove=list.get_enumerator();list.remove(123);std::cout<<"remove-missing="<<error([&]{remove.move_next();})<<'\n';
    auto add=list.get_enumerator();list.add_range(Array<I>::make(0));std::cout<<"add-empty="<<error([&]{add.move_next();})<<'\n';
    auto range=list.get_enumerator();list.remove_range(0,0);std::cout<<"remove-empty="<<error([&]{range.move_next();})<<'\n';
    auto empty=List<I>::make();auto clear=empty.get_enumerator();empty.clear();std::cout<<"clear-empty="<<error([&]{clear.move_next();})<<'\n';
    auto disposed=list.get_enumerator();disposed.dispose();std::cout<<"disposed="<<error([&]{disposed.move_next();})<<'\n';
    auto doubles=List<double>::make();doubles.add(std::numeric_limits<double>::quiet_NaN());std::cout<<"nan="<<boolean(doubles.contains(std::numeric_limits<double>::quiet_NaN()))<<'\n';
    auto objects=List<Ref<Object>>::make();objects.add(box(I(3)));objects.add(box(std::numeric_limits<double>::quiet_NaN()));objects.add(box(String(u"same")));objects.add(nullptr);
    std::cout<<"boxed-equality="<<boolean(objects.contains(box(I(3))))<<','<<boolean(objects.contains(box(std::int64_t(3))))<<','<<boolean(objects.contains(box(std::numeric_limits<double>::quiet_NaN())))<<','<<boolean(objects.contains(box(String(u"same"))))<<','<<boolean(objects.contains(nullptr))<<'\n';
    auto integer=box(I(3));std::cout<<"unbox="<<unbox<I>(integer)<<','<<error([&]{unbox<std::int64_t>(integer);})<<','<<error([]{unbox<I>(nullptr);})<<'\n';
    String name(u"abc");auto str=box(name);std::cout<<"string-identity="<<boolean(str==box(name))<<','<<boolean(name==String(u"abc"))<<'\n';
    auto array=Array<I>::from({1,2});auto arr=box(array);std::cout<<"array-identity="<<boolean(arr==box(array))<<','<<unbox<Array<I>>(arr).at(1)<<'\n';
    auto alias=list;alias.add(4);std::cout<<"list-alias="<<join(list)<<'\n';
    list.insert(1,7);list.add(7);std::cout<<"list-search="<<join(list)<<','<<list.index_of(7)<<','<<list.last_index_of(7)<<'\n';
    list.remove_at(0);list.remove_range(1,1);std::cout<<"list-remove="<<join(list)<<'\n';
    list.insert_range(1,Array<I>::from({1,2}));std::cout<<"list-range="<<join(list)<<'\n';
    auto self=List<I>::make();self.add(1);self.add(2);self.insert_range(1,self);std::cout<<"self-range="<<join(self)<<'\n';
    auto copy=list.to_array();copy.at(0)=99;std::cout<<"to-array-copy="<<list.get(0)<<','<<copy.at(0)<<'\n';
    std::cout<<"bounds="<<error([&]{list.get(-1);})<<','<<error([&]{list.insert(99,1);})<<','<<error([&]{list.set_capacity(0);})<<'\n';
    auto prior=list.capacity();list.clear();std::cout<<"clear-capacity="<<list.count()<<','<<boolean(list.capacity()==prior)<<'\n';
    auto stored=box(alias);std::cout<<"list-object="<<boolean(stored==box(alias))<<'\n';
    auto names=List<String>::make();names.add(String());names.add(String(u"a"));names.add(String(u"a"));std::cout<<"string-list="<<names.index_of(String())<<','<<names.last_index_of(String(u"a"))<<'\n';
    auto reset=alias.get_enumerator();reset.move_next();auto boxed_reset=make_ref<typename List<I>::EnumeratorObject>(reset);boxed_reset->Reset();std::cout<<"reset-copy="<<reset.current()<<'\n';
    auto instance=box(make_ref<Item>());auto marker=unbox<Ref<IMarker>>(instance);
    std::cout<<"interface-object="<<boolean(instance==box(marker))<<'\n';
    auto interfaces=List<Ref<IMarker>>::make();interfaces.add(marker);std::cout<<"interface-equality="<<boolean(interfaces.contains(unbox<Ref<IMarker>>(instance)))<<'\n';
}
