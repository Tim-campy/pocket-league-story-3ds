// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_9465f7541f51c47e.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_7fd3b635ed6929d0.hpp"
#include "generated/portable_generated_type_bb652fbb61000386.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::game {

void cs_9465f7541f51c47e::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_8c0cc3bea061f0cd,visitor);pls::cs::trace_value(cs_aaefb5b9fae0397e,visitor);pls::cs::trace_value(cs_617d9d7e65ae6487,visitor);pls::cs::trace_value(cs_2b38757bf00583cf,visitor);pls::cs::trace_value(cs_c9cc587d986ccc18,visitor);}

void cs_9465f7541f51c47e::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_8c0cc3bea061f0cd);pls::cs::release_value(cs_aaefb5b9fae0397e);pls::cs::release_value(cs_617d9d7e65ae6487);pls::cs::release_value(cs_2b38757bf00583cf);pls::cs::release_value(cs_c9cc587d986ccc18);}

void cs_init_9465f7541f51c47e(){static pls::cs::TypeInitState state;state.run("system.friend.ui.Friend",[](){

});}

// M:system.friend.ui.Friend.#ctor
pls::cs::Ref<cs_9465f7541f51c47e> cs_2ce578f5724575d0() { cs_init_9465f7541f51c47e();
{ auto cs_this = pls::cs::make_ref<cs_9465f7541f51c47e>(); cs_2ce578f5724575d0_init(cs_this); return cs_this; }
}

void cs_2ce578f5724575d0_init(pls::cs::Ref<cs_9465f7541f51c47e> cs_this) {
cs_this->cs_617d9d7e65ae6487 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_2b38757bf00583cf = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_c9cc587d986ccc18 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<pls::generated::cs_bb652fbb61000386>{}; pls::game::cs_require(cs_target)->cs_8c0cc3bea061f0cd = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = pls::cs::String(u""); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_aaefb5b9fae0397e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_617d9d7e65ae6487 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2b38757bf00583cf = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_c9cc587d986ccc18 = cs_value; return cs_value; }());
}
}

// M:system.friend.ui.Friend.#ctor(System.String,System.String,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_9465f7541f51c47e> cs_0f10e92aa7924479(pls::cs::String v_friendId,pls::cs::String v_name,std::int32_t v_state,std::int32_t v_minute,std::int32_t v_updated) { cs_init_9465f7541f51c47e();
{ auto cs_this = pls::cs::make_ref<cs_9465f7541f51c47e>(); cs_0f10e92aa7924479_init(cs_this,v_friendId,v_name,v_state,v_minute,v_updated); return cs_this; }
}

void cs_0f10e92aa7924479_init(pls::cs::Ref<cs_9465f7541f51c47e> cs_this,pls::cs::String v_friendId,pls::cs::String v_name,std::int32_t v_state,std::int32_t v_minute,std::int32_t v_updated) {
cs_this->cs_617d9d7e65ae6487 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_2b38757bf00583cf = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_c9cc587d986ccc18 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = v_friendId; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_8c0cc3bea061f0cd = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = v_name; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_aaefb5b9fae0397e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_state; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_617d9d7e65ae6487 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_minute; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2b38757bf00583cf = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_updated; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_c9cc587d986ccc18 = cs_value; return cs_value; }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aaefb5b9fae0397e; }())); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0008" u"",1)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8ebcc441a59bda9a(cs_receiver,cs_arg0); }())))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aaefb5b9fae0397e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->ToString(); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0008" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_aaefb5b9fae0397e = cs_value; return cs_value; }());
}
}
}

// M:system.friend.ui.Friend.Deserialize(java.io.InputStream)
void cs_ab2f2c9f1fce2e02(pls::cs::Ref<cs_9465f7541f51c47e> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_9465f7541f51c47e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_8c0cc3bea061f0cd = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_617d9d7e65ae6487 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2b38757bf00583cf = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_c9cc587d986ccc18 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_aaefb5b9fae0397e = cs_value; return cs_value; }());
}
}
}

// M:system.friend.ui.Friend.Serialize(java.io.OutputStream)
void cs_440d2f888a8888df(pls::cs::Ref<cs_9465f7541f51c47e> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_9465f7541f51c47e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c0cc3bea061f0cd; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_617d9d7e65ae6487; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b38757bf00583cf; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c9cc587d986ccc18; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aaefb5b9fae0397e; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
}
}
}
}
