#include "tracing_heap.hpp"
#include <iostream>
#include <cassert>
struct Node {Node* next;std::uintptr_t scalar;};
int main(){
    probe::Heap h;static const std::size_t edges[]={offsetof(Node,next)};
    auto a=static_cast<Node*>(h.allocate(sizeof(Node),{edges,1,0,1}));
    auto b=static_cast<Node*>(h.allocate(sizeof(Node),{edges,1,0,1}));
    auto untraced=h.allocate(32);a->next=b;b->next=a;a->scalar=reinterpret_cast<std::uintptr_t>(untraced);
    h.fixture_root(reinterpret_cast<char*>(a)+sizeof(void*)); // Interior address retains full object and its exact edges.
    h.collect_impl(nullptr,0,0);
    if(h.live_blocks()!=2||!h.contains(a)||!h.contains(b)||h.contains(untraced))return 1;
    h.clear_fixture_roots();h.collect_impl(nullptr,0,0);if(h.live_blocks()!=0)return 2;
    volatile char* interior=static_cast<char*>(h.allocate(64))+17;
    *interior=42;h.collect();if(*interior!=42||!h.contains(const_cast<char*>(interior)))return 3;
    h.limit(h.live_bytes()+16);bool exhausted=false;try{h.allocate(32);}catch(const std::bad_alloc&){exhausted=true;}
    if(!exhausted)return 4;
    std::cout<<"PASS interior exact_edges scalar_not_edge cycle conservative_stack heap_limit\n";
}
