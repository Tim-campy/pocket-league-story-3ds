// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_f1dd8f2aa583774c.hpp"
namespace pls::game {

void cs_f1dd8f2aa583774c::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_8d4cf7374fb757c0,visitor);pls::cs::trace_value(cs_046578c7b896a653,visitor);pls::cs::trace_value(cs_06ef4703cb291a79,visitor);pls::cs::trace_value(cs_c8b58e9490836581,visitor);}

void cs_f1dd8f2aa583774c::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_8d4cf7374fb757c0);pls::cs::release_value(cs_046578c7b896a653);pls::cs::release_value(cs_06ef4703cb291a79);pls::cs::release_value(cs_c8b58e9490836581);}

bool cs_f1dd8f2aa583774c::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_d7701387e8f8c44a(pls::cs::static_pointer_cast<cs_f1dd8f2aa583774c>(shared_from_this()),v_obj);}

std::int32_t cs_f1dd8f2aa583774c::GetHashCode() {return cs_140e188d0a82c8b7(pls::cs::static_pointer_cast<cs_f1dd8f2aa583774c>(shared_from_this()));}

void cs_init_f1dd8f2aa583774c(){static pls::cs::TypeInitState state;state.run("kairo.unity.graphics.RectangleF",[](){

});}

// M:kairo.unity.graphics.RectangleF.#ctor
pls::cs::Ref<cs_f1dd8f2aa583774c> cs_811ec9500127b493() { cs_init_f1dd8f2aa583774c();
{ auto cs_this = pls::cs::make_ref<cs_f1dd8f2aa583774c>(); cs_811ec9500127b493_init(cs_this); return cs_this; }
}

void cs_811ec9500127b493_init(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.graphics.RectangleF.#ctor",kairo);
{

}
}
}

// M:kairo.unity.graphics.RectangleF.Equals(System.Object)
bool cs_d7701387e8f8c44a(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_f1dd8f2aa583774c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.graphics.RectangleF.Equals(System.Object)",kairo);
{
if ((([&]() { auto cs_left = pls::cs::box(v_obj); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && pls::game::cs_is<pls::cs::Ref<cs_f1dd8f2aa583774c>>(pls::cs::box(v_obj)))) {
pls::cs::Ref<cs_f1dd8f2aa583774c> v_rectangleF_1054 = pls::cs::unbox<pls::cs::Ref<cs_f1dd8f2aa583774c>>(v_obj);
if (((([&]() -> bool { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_046578c7b896a653; }())); auto cs_right = static_cast<double>(([&]() { auto cs_receiver = v_rectangleF_1054; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_046578c7b896a653; }())); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8b58e9490836581; }())); auto cs_right = static_cast<double>(([&]() { auto cs_receiver = v_rectangleF_1054; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8b58e9490836581; }())); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_06ef4703cb291a79; }())); auto cs_right = static_cast<double>(([&]() { auto cs_receiver = v_rectangleF_1054; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_06ef4703cb291a79; }())); return (cs_left == cs_right); }()))) {
return ([&]() -> bool { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d4cf7374fb757c0; }())); auto cs_right = static_cast<double>(([&]() { auto cs_receiver = v_rectangleF_1054; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d4cf7374fb757c0; }())); return (cs_left == cs_right); }());
}
return false;
}
return ([&]() { auto cs_left = pls::cs::box(cs_this); auto cs_right = pls::cs::box(v_obj); return cs_left == cs_right; }());
}
}
}
}

// M:kairo.unity.graphics.RectangleF.GetHashCode
std::int32_t cs_140e188d0a82c8b7(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this) { cs_init_f1dd8f2aa583774c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.graphics.RectangleF.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:kairo.unity.graphics.RectangleF.Height
float cs_43d7fa04d81da9ff(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this) { cs_init_f1dd8f2aa583774c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.graphics.RectangleF.Height",kairo);
{
return static_cast<float>(([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d4cf7374fb757c0; }())); auto cs_right = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8b58e9490836581; }())); return (cs_left - cs_right); }()));
}
}
}
}

// M:kairo.unity.graphics.RectangleF.Set(kairo.unity.graphics.RectangleF)
void cs_2c480e787ab8f385(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this,pls::cs::Ref<cs_f1dd8f2aa583774c> v_rc) { cs_init_f1dd8f2aa583774c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.graphics.RectangleF.Set(kairo.unity.graphics.RectangleF)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(([&]() { auto cs_receiver = v_rc; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_046578c7b896a653; }())); pls::game::cs_require(cs_target)->cs_046578c7b896a653 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(([&]() { auto cs_receiver = v_rc; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8b58e9490836581; }())); pls::game::cs_require(cs_target)->cs_c8b58e9490836581 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(([&]() { auto cs_receiver = v_rc; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_06ef4703cb291a79; }())); pls::game::cs_require(cs_target)->cs_06ef4703cb291a79 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(([&]() { auto cs_receiver = v_rc; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d4cf7374fb757c0; }())); pls::game::cs_require(cs_target)->cs_8d4cf7374fb757c0 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.graphics.RectangleF.Set(System.Single,System.Single,System.Single,System.Single)
void cs_20c48a456cf53f6e(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this,float v_left,float v_top,float v_right,float v_bottom) { cs_init_f1dd8f2aa583774c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.graphics.RectangleF.Set(System.Single,System.Single,System.Single,System.Single)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(v_left); pls::game::cs_require(cs_target)->cs_046578c7b896a653 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(v_top); pls::game::cs_require(cs_target)->cs_c8b58e9490836581 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(v_right); pls::game::cs_require(cs_target)->cs_06ef4703cb291a79 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(v_bottom); pls::game::cs_require(cs_target)->cs_8d4cf7374fb757c0 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.graphics.RectangleF.Width
float cs_bacff363ff8ad693(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this) { cs_init_f1dd8f2aa583774c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.graphics.RectangleF.Width",kairo);
{
return static_cast<float>(([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_06ef4703cb291a79; }())); auto cs_right = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_046578c7b896a653; }())); return (cs_left - cs_right); }()));
}
}
}
}
}
