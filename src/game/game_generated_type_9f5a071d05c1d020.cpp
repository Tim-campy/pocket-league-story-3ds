// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_9f5a071d05c1d020.hpp"
namespace pls::game {

void cs_9f5a071d05c1d020::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_0a97cf487265056a,visitor);pls::cs::trace_value(cs_4710c88d5a9d40f6,visitor);pls::cs::trace_value(cs_219b8c78c2281560,visitor);pls::cs::trace_value(cs_b03e120c72310813,visitor);}

void cs_9f5a071d05c1d020::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_0a97cf487265056a);pls::cs::release_value(cs_4710c88d5a9d40f6);pls::cs::release_value(cs_219b8c78c2281560);pls::cs::release_value(cs_b03e120c72310813);}

bool cs_9f5a071d05c1d020::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_a3399ea8077672e2(std::static_pointer_cast<cs_9f5a071d05c1d020>(shared_from_this()),v_obj);}

std::int32_t cs_9f5a071d05c1d020::GetHashCode() {return cs_cdd09ba02ba5e5aa(std::static_pointer_cast<cs_9f5a071d05c1d020>(shared_from_this()));}

void cs_init_9f5a071d05c1d020(){static pls::cs::TypeInitState state;state.run("kairo.unity.graphics.Rectangle",[](){

});}

// M:kairo.unity.graphics.Rectangle.Equals(System.Object)
bool cs_a3399ea8077672e2(pls::cs::Ref<cs_9f5a071d05c1d020> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_9f5a071d05c1d020();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.graphics.Rectangle.Equals(System.Object)",kairo);
{
if ((([&]() { auto cs_left = pls::cs::box(v_obj); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && pls::game::cs_is<pls::cs::Ref<cs_9f5a071d05c1d020>>(pls::cs::box(v_obj)))) {
pls::cs::Ref<cs_9f5a071d05c1d020> v_rectangle_842 = pls::cs::unbox<pls::cs::Ref<cs_9f5a071d05c1d020>>(v_obj);
if (((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4710c88d5a9d40f6; }()); auto cs_right = ([&]() { auto cs_receiver = v_rectangle_842; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4710c88d5a9d40f6; }()); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b03e120c72310813; }()); auto cs_right = ([&]() { auto cs_receiver = v_rectangle_842; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b03e120c72310813; }()); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_219b8c78c2281560; }()); auto cs_right = ([&]() { auto cs_receiver = v_rectangle_842; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_219b8c78c2281560; }()); return (cs_left == cs_right); }()))) {
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0a97cf487265056a; }()); auto cs_right = ([&]() { auto cs_receiver = v_rectangle_842; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0a97cf487265056a; }()); return (cs_left == cs_right); }());
}
return false;
}
return ([&]() { auto cs_left = pls::cs::box(cs_this); auto cs_right = pls::cs::box(v_obj); return cs_left == cs_right; }());
}
}
}
}

// M:kairo.unity.graphics.Rectangle.GetHashCode
std::int32_t cs_cdd09ba02ba5e5aa(pls::cs::Ref<cs_9f5a071d05c1d020> cs_this) { cs_init_9f5a071d05c1d020();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.graphics.Rectangle.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}
}
