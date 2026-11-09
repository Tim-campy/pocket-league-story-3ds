// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_7f70540c4f85d74f.hpp"
namespace pls::game {

void cs_7f70540c4f85d74f::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_59ca359e3d3d712d,visitor);pls::cs::trace_value(cs_0d03485f6b953700,visitor);}

void cs_7f70540c4f85d74f::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_59ca359e3d3d712d);pls::cs::release_value(cs_0d03485f6b953700);}

pls::cs::String cs_7f70540c4f85d74f::ToString() {return cs_9eab9ded735366ec(std::static_pointer_cast<cs_7f70540c4f85d74f>(shared_from_this()));}

std::int32_t cs_7f70540c4f85d74f::GetHashCode() {return cs_6853b87e6d3191df(std::static_pointer_cast<cs_7f70540c4f85d74f>(shared_from_this()));}

void cs_init_7f70540c4f85d74f(){static pls::cs::TypeInitState state;state.run("kairo.unity.system.KairoBase.AccessCount",[](){

});}

// M:kairo.unity.system.KairoBase.AccessCount.#ctor(System.String,System.Int64)
pls::cs::Ref<cs_7f70540c4f85d74f> cs_b544d4afdbad19e4(pls::cs::String v_name,std::int64_t v_value) { cs_init_7f70540c4f85d74f();
{ auto cs_this = pls::cs::make_ref<cs_7f70540c4f85d74f>(); cs_b544d4afdbad19e4_init(cs_this,v_name,v_value); return cs_this; }
}

void cs_b544d4afdbad19e4_init(pls::cs::Ref<cs_7f70540c4f85d74f> cs_this,pls::cs::String v_name,std::int64_t v_value) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_name; pls::game::cs_require(cs_target)->cs_59ca359e3d3d712d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_0d03485f6b953700 = cs_value; return cs_value; }());
}
}

// M:kairo.unity.system.KairoBase.AccessCount.GetHashCode
std::int32_t cs_6853b87e6d3191df(pls::cs::Ref<cs_7f70540c4f85d74f> cs_this) { cs_init_7f70540c4f85d74f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}

// M:kairo.unity.system.KairoBase.AccessCount.ToString
pls::cs::String cs_9eab9ded735366ec(pls::cs::Ref<cs_7f70540c4f85d74f> cs_this) { cs_init_7f70540c4f85d74f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59ca359e3d3d712d; }()); auto cs_right = (((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0d03485f6b953700; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left >= cs_right); }())) ? pls::cs::String(std::u16string(u"\x002b" u"",1)) : pls::cs::String(std::u16string(u"",0)))); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0d03485f6b953700; }())); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
}
