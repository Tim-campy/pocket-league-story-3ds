// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_22115ea4236d0eaa.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_7fd3b635ed6929d0.hpp"
#include "generated/portable_generated_type_bb652fbb61000386.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::game {

void cs_22115ea4236d0eaa::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_2940d449a6dc2c58,visitor);pls::cs::trace_value(cs_db96c721c151249c,visitor);pls::cs::trace_value(cs_0ba613afa6875a18,visitor);}

void cs_22115ea4236d0eaa::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_2940d449a6dc2c58);pls::cs::release_value(cs_db96c721c151249c);pls::cs::release_value(cs_0ba613afa6875a18);}

void cs_init_22115ea4236d0eaa(){static pls::cs::TypeInitState state;state.run("system.friend.ui.FriendPlayTimeData",[](){

});}

// M:system.friend.ui.FriendPlayTimeData.#ctor
pls::cs::Ref<cs_22115ea4236d0eaa> cs_624a0425464d274a() { cs_init_22115ea4236d0eaa();
{ auto cs_this = pls::cs::make_ref<cs_22115ea4236d0eaa>(); cs_624a0425464d274a_init(cs_this); return cs_this; }
}

void cs_624a0425464d274a_init(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this) {
cs_this->cs_db96c721c151249c = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_0ba613afa6875a18 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
{

}
}

// M:system.friend.ui.FriendPlayTimeData.#ctor(System.String,System.Int32,System.Int32)
pls::cs::Ref<cs_22115ea4236d0eaa> cs_d95d2ae3639f5d06(pls::cs::String v_friendId,std::int32_t v_minute,std::int32_t v_state) { cs_init_22115ea4236d0eaa();
{ auto cs_this = pls::cs::make_ref<cs_22115ea4236d0eaa>(); cs_d95d2ae3639f5d06_init(cs_this,v_friendId,v_minute,v_state); return cs_this; }
}

void cs_d95d2ae3639f5d06_init(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this,pls::cs::String v_friendId,std::int32_t v_minute,std::int32_t v_state) {
cs_this->cs_db96c721c151249c = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_0ba613afa6875a18 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = v_friendId; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2940d449a6dc2c58 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_minute; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_db96c721c151249c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_state; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_0ba613afa6875a18 = cs_value; return cs_value; }());
}
}

// M:system.friend.ui.FriendPlayTimeData.Deserialize(java.io.InputStream)
void cs_9b78afe85b06708d(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_22115ea4236d0eaa();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2940d449a6dc2c58 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_db96c721c151249c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_0ba613afa6875a18 = cs_value; return cs_value; }());
}
}
}

// M:system.friend.ui.FriendPlayTimeData.Serialize(java.io.OutputStream)
void cs_2044571a728aaa71(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_22115ea4236d0eaa();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2940d449a6dc2c58; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_db96c721c151249c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ba613afa6875a18; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
}
}
}
}
