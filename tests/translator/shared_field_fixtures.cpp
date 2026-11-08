#include "managed_shared_field.hpp"
#include "managed_thread.hpp"
#include <atomic>
#include <iostream>
#include <type_traits>
using namespace pls::cs;
namespace {
int assertions=0;
void check(bool valid,const char*message){++assertions;if(!valid)throw Exception(message);}
template<class F>void wait(F&&condition){int attempts=0;while(!condition()){if(++attempts>3000)throw Exception("SharedField fixture timeout");Thread::Sleep(1);}}
template<class F>Ref<Thread>worker(F&&function){return make_ref<Thread>(ThreadStart::from_static("own-SharedField-fixture",std::forward<F>(function)));}
struct Node:Object {
    std::int32_t number=7;SharedField<Ref<Node>>next;
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(next,visitor);}
    void release_edges()override{release_value(next);}
};
struct Board:Object {
    SharedField<std::int32_t>count;SharedField<bool>published;
    SharedField<String>text;SharedField<Ref<Node>>object;SharedField<Array<std::int32_t>>array;
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(text,visitor);trace_value(object,visitor);trace_value(array,visitor);}
    void release_edges()override{release_value(text);release_value(object);release_value(array);}
};
static_assert(!std::is_copy_constructible_v<SharedField<std::int32_t>>);
static_assert(!std::is_convertible_v<SharedField<std::int32_t>,std::int32_t>);
}
int main(){GcMutatorScope mutator;auto board=make_ref<Board>();
    check(board->count.load()==0,"Default Int32");check(!board->published.load(),"Default Boolean");
    check(board->text.load().is_null(),"Default String");check(!board->object.load(),"Default ref");check(board->array.load().is_null(),"Default array");
    std::weak_ptr<Node>weak;std::atomic<bool>replace{false},replaced{false};
    auto producer=worker([&]{auto node=make_ref<Node>();node->next.store(node);weak=node;board->object.store(node);board->text.store(String(u"first"));board->array.store(Array<std::int32_t>::from({11,12}));board->published.store(true);
        wait([&]{return replace.load();});board->object.store(make_ref<Node>());board->text.store(String(u"second"));board->array.store(Array<std::int32_t>::from({99}));replaced=true;});
    producer->Start();wait([&]{return board->published.load();});
    auto old_object=board->object.load();auto old_text=board->text.load();auto old_array=board->array.load();
    check(old_object&&old_object->number==7,"Published ref");check(old_text==String(u"first"),"Published UTF16 String");check(old_array.length()==2&&old_array[0]==11,"Published array wrapper");
    replace=true;wait([&]{return replaced.load();});producer->Join();
    check(old_object&&old_object->number==7,"Loaded ref survives later store");check(old_text==String(u"first"),"Loaded String survives later store");check(old_array.length()==2&&old_array[1]==12,"Loaded array survives later store");
    check(board->text.load()==String(u"second")&&board->array.load()[0]==99,"Subsequent loads observe new values");
    gc_collect(0);check(!weak.expired(),"Loaded ref is a GC root after field replacement");
    old_object.reset();gc_collect(0);check(weak.expired(),"Displaced unrooted ref cycle collected");
    auto rooted=make_ref<Node>();rooted->next.store(rooted);std::weak_ptr<Node>rooted_weak=rooted;board->object.store(rooted);rooted.reset();
    gc_collect(0);check(!rooted_weak.expired(),"GC traces SharedField edge");board->object.store(nullptr);gc_collect(0);check(rooted_weak.expired(),"GC releases cycle after field cleared");
    board->count.store(0);std::atomic<int>ready{0};std::atomic<bool>go{false};
    auto increment=[&]{auto loaded=board->count.load();++ready;wait([&]{return go.load();});board->count.store(add_i32(loaded,1));};
    auto first=worker(increment),second=worker(increment);first->Start();second->Start();wait([&]{return ready.load()==2;});go=true;first->Join();second->Join();
    auto lost_update=board->count.load();check(lost_update==1,"Split load/add/store must permit lost update");
    board->count.store(INT32_MAX);board->count.store(add_i32(board->count.load(),1));check(board->count.load()==INT32_MIN,"Shared Int32 arithmetic still uses managed wrap");
    auto cycle=make_ref<Board>();cycle->object.store(make_ref<Node>());auto held=cycle->object.load();std::weak_ptr<Object>weak_array=cycle->array.load().as_object();
    cycle->text.store(String(u"traced"));cycle->array.store(Array<std::int32_t>::from({1}));std::weak_ptr<Object>text_weak=cycle->text.load().as_object();weak_array=cycle->array.load().as_object();
    gc_collect(0);check(!text_weak.expired()&&!weak_array.expired(),"GC traces String and array storage through fields");
    cycle->release_edges();check(cycle->text.load().is_null()&&cycle->array.load().is_null()&&!cycle->object.load(),"release_edges clears wrappers");
    check(held&&held->number==7,"Loaded copy survives release_edges");
    std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<",\"lost_update_result\":"<<lost_update<<",\"game_executed\":false}\n";
}
