// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_4ccab99c775ca4c5.hpp"
#include "game_generated_type_5ad2213598dfcd5d.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
namespace pls::game {

void cs_4ccab99c775ca4c5::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_5ad2213598dfcd5d::trace_edges(visitor);pls::cs::trace_value(cs_e7444216b8176cd4,visitor);pls::cs::trace_value(cs_4761156567811a9b,visitor);pls::cs::trace_value(cs_84f6d6bdc01421d0,visitor);pls::cs::trace_value(cs_03f115a488ad951b,visitor);}

void cs_4ccab99c775ca4c5::release_edges(){cs_5ad2213598dfcd5d::release_edges();pls::cs::release_value(cs_e7444216b8176cd4);pls::cs::release_value(cs_4761156567811a9b);pls::cs::release_value(cs_84f6d6bdc01421d0);pls::cs::release_value(cs_03f115a488ad951b);}

void cs_init_4ccab99c775ca4c5(){static pls::cs::TypeInitState state;state.run("kairo.unity.panel.TextBox",[](){

});}

// M:kairo.unity.panel.TextBox.#ctor(System.String,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_4ccab99c775ca4c5> cs_86553cba2c357ac5(pls::cs::String v_text,std::int32_t v_columns,std::int32_t v_rows,std::int32_t v_mode) { cs_init_4ccab99c775ca4c5();
{ auto cs_this = pls::cs::make_ref<cs_4ccab99c775ca4c5>(); cs_86553cba2c357ac5_init(cs_this,v_text,v_columns,v_rows,v_mode); return cs_this; }
}

void cs_86553cba2c357ac5_init(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this,pls::cs::String v_text,std::int32_t v_columns,std::int32_t v_rows,std::int32_t v_mode) {
([&]() { cs_123805c6bd81d455_init(pls::cs::static_pointer_cast<cs_5ad2213598dfcd5d>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.#ctor(System.String,System.Int32,System.Int32,System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0008" u"",1);return cs_literal;}()); pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}()); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());}); pls::game::cs_require(cs_target)->cs_e7444216b8176cd4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_columns; pls::game::cs_require(cs_target)->cs_4761156567811a9b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::game::cs_require(cs_target)->cs_84f6d6bdc01421d0 = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.panel.TextBox.GetHeight
std::int32_t cs_a404deaded797ee7(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this) { cs_init_4ccab99c775ca4c5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.GetHeight",kairo);
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));
}
}
}
}

// M:kairo.unity.panel.TextBox.GetText
pls::cs::String cs_b39060ea994b3795(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this) { cs_init_4ccab99c775ca4c5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.GetText",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e7444216b8176cd4; }());
}
}
}
}

// M:kairo.unity.panel.TextBox.GetWidth
std::int32_t cs_db57ee312d172295(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this) { cs_init_4ccab99c775ca4c5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.GetWidth",kairo);
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull));
}
}
}
}

// M:kairo.unity.panel.TextBox.SetInputMode(System.Int32)
void cs_a0d774261b152928(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this,std::int32_t v_mode) { cs_init_4ccab99c775ca4c5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.SetInputMode(System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_mode; pls::game::cs_require(cs_target)->cs_84f6d6bdc01421d0 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.panel.TextBox.SetLocation(System.Int32,System.Int32)
void cs_60931973f98bba2d(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this,std::int32_t v_x,std::int32_t v_y) { cs_init_4ccab99c775ca4c5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.SetLocation(System.Int32,System.Int32)",kairo);
{

}
}
}
}

// M:kairo.unity.panel.TextBox.SetMaxLength(System.Int32)
void cs_f48ad653747329a7(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this,std::int32_t v_length) { cs_init_4ccab99c775ca4c5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.SetMaxLength(System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_length; pls::game::cs_require(cs_target)->cs_03f115a488ad951b = cs_value; return cs_value; }());
}
}
}
}
}
