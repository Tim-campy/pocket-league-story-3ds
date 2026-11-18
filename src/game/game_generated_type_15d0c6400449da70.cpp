// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_15d0c6400449da70.hpp"
#include "game_generated_type_500cf5d961e2c3a4.hpp"
#include "game_generated_type_f8053a3d49df91b7.hpp"
#include "generated/portable_generated_type_83a7bc36395d16bd.hpp"
namespace pls::game {

void cs_15d0c6400449da70::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::kairo::MonoBehaviour::trace_edges(visitor);pls::cs::trace_value(cs_1a5feededa92c1b2,visitor);pls::cs::trace_value(cs_5bc9b2df362024ae,visitor);pls::cs::trace_value(cs_9defed681d96cc9c,visitor);pls::cs::trace_value(cs_d362654ae6de3a0d,visitor);pls::cs::trace_value(cs_7eef6a8482a8d635,visitor);pls::cs::trace_value(cs_c8dbb157db9fb45c,visitor);pls::cs::trace_value(cs_5c5946093936fbb3,visitor);pls::cs::trace_value(cs_e58caa6febbceffa,visitor);pls::cs::trace_value(cs_4bf3528912e8c804,visitor);}

void cs_15d0c6400449da70::release_edges(){pls::kairo::MonoBehaviour::release_edges();pls::cs::release_value(cs_1a5feededa92c1b2);pls::cs::release_value(cs_5bc9b2df362024ae);pls::cs::release_value(cs_9defed681d96cc9c);pls::cs::release_value(cs_d362654ae6de3a0d);pls::cs::release_value(cs_7eef6a8482a8d635);pls::cs::release_value(cs_c8dbb157db9fb45c);pls::cs::release_value(cs_5c5946093936fbb3);pls::cs::release_value(cs_e58caa6febbceffa);pls::cs::release_value(cs_4bf3528912e8c804);}

void cs_15d0c6400449da70::cs_virtual_a0d307e27d51aaf6() {cs_8793f32da1f89166(pls::cs::static_pointer_cast<cs_15d0c6400449da70>(shared_from_this()));}

static pls::cs::Ref<cs_15d0c6400449da70> cs_11c677d992410d89_value{};

void cs_init_15d0c6400449da70(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_11c677d992410d89_value,visitor);});static pls::cs::TypeInitState state;state.run("system.tapjoy.ui.Tapjoy",[](){

});}

pls::cs::Ref<cs_15d0c6400449da70>& cs_11c677d992410d89(){cs_init_15d0c6400449da70();return cs_11c677d992410d89_value;}

// M:system.tapjoy.ui.Tapjoy.#ctor(System.String,System.String,System.Boolean)
void cs_5b5371f22489a240_init(pls::cs::Ref<cs_15d0c6400449da70> cs_this,pls::cs::String v_key,pls::cs::String v_offerwallName,bool v_log) {
cs_init_15d0c6400449da70();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.#ctor(System.String,System.String,System.Boolean)",game);
{
([&]() { auto cs_value = cs_this; cs_11c677d992410d89() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_this; cs_11c677d992410d89() = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_key; pls::game::cs_require(cs_target)->cs_1a5feededa92c1b2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_offerwallName; pls::game::cs_require(cs_target)->cs_5bc9b2df362024ae = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_log; pls::game::cs_require(cs_target)->cs_e58caa6febbceffa = cs_value; return cs_value; }());
}
}
}

// M:system.tapjoy.ui.Tapjoy.AddBalance(System.Int32)
void cs_fb7f8e8a914f6223(pls::cs::Ref<cs_15d0c6400449da70> cs_this,std::int32_t v_add) { cs_init_15d0c6400449da70();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.AddBalance(System.Int32)",game);
{
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_5c5946093936fbb3; auto cs_rhs = v_add; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_5c5946093936fbb3 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_15d0c6400449da70>>(cs_this); pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/tapjoy/ui/Tapjoy.cs:M:system.tapjoy.ui.Tapjoy.AddBalance(System.Int32):1589",([&]() { auto cs_left = ([]() -> pls::cs::String {static std::atomic<void*> cs_site{};return pls::cs::String::literal_at(cs_site,u"\x005b" u"\x0054" u"\x0061" u"\x0070" u"\x006a" u"\x006f" u"\x0079" u"\x005d" u"\x0020" u"\x0041" u"\x0064" u"\x0064" u"\x0042" u"\x0061" u"\x006c" u"\x0061" u"\x006e" u"\x0063" u"\x0065" u"\x003a" u"",20);}()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5c5946093936fbb3; }())); return pls::cs::String::concat(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a4556f0291f3c16b(cs_receiver,cs_arg0); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static std::atomic<void*> cs_site{};return pls::cs::String::literal_at(cs_site,u"\x005f" u"\x0054" u"\x0061" u"\x0070" u"\x006a" u"\x006f" u"\x0079" u"",7);}()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5c5946093936fbb3; }()); pls::kairo::PlayerPrefs::SetInt(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::kairo::PlayerPrefs::Save(); }());});
}
}
}
}

// M:system.tapjoy.ui.Tapjoy.CallBalance
void cs_8793f32da1f89166(pls::cs::Ref<cs_15d0c6400449da70> cs_this) { cs_init_15d0c6400449da70();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.CallBalance",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_15d0c6400449da70>>(cs_this); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static std::atomic<void*> cs_site{};return pls::cs::String::literal_at(cs_site,u"\x005b" u"\x0054" u"\x0061" u"\x0070" u"\x006a" u"\x006f" u"\x0079" u"\x005d" u"\x0020" u"\x0043" u"\x0061" u"\x006c" u"\x006c" u"\x0042" u"\x0061" u"\x006c" u"\x0061" u"\x006e" u"\x0063" u"\x0065" u"",20);}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a4556f0291f3c16b(cs_receiver,cs_arg0); }());
}
}
}
}

// M:system.tapjoy.ui.Tapjoy.GetBalance
std::int32_t cs_d5c9c1b2a1b2b835(pls::cs::Ref<cs_15d0c6400449da70> cs_this) { cs_init_15d0c6400449da70();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.GetBalance",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5c5946093936fbb3; }());
}
}
}
}

// M:system.tapjoy.ui.Tapjoy.GetInstance
pls::cs::Ref<cs_15d0c6400449da70> cs_0d528e1ef98e7412() { cs_init_15d0c6400449da70();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.GetInstance",game);
{
return cs_11c677d992410d89_value;
}
}
}

// M:system.tapjoy.ui.Tapjoy.GetOfferState
std::int32_t cs_9a09b45425139eed(pls::cs::Ref<cs_15d0c6400449da70> cs_this) { cs_init_15d0c6400449da70();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.GetOfferState",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4bf3528912e8c804; }());
}
}
}
}

// M:system.tapjoy.ui.Tapjoy.Init
void cs_210845d7cf3cf398(pls::cs::Ref<cs_15d0c6400449da70> cs_this) { cs_init_15d0c6400449da70();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.Init",game);
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7eef6a8482a8d635; }())) {
return;
}
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_15d0c6400449da70>>(cs_this); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static std::atomic<void*> cs_site{};return pls::cs::String::literal_at(cs_site,u"\x005b" u"\x0054" u"\x0061" u"\x0070" u"\x006a" u"\x006f" u"\x0079" u"\x005d" u"\x0020" u"\x0049" u"\x006e" u"\x0069" u"\x0074" u"",13);}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a4556f0291f3c16b(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_7eef6a8482a8d635 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static std::atomic<void*> cs_site{};return pls::cs::String::literal_at(cs_site,u"\x005f" u"\x0054" u"\x0061" u"\x0070" u"\x006a" u"\x006f" u"\x0079" u"",7);}()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::PlayerPrefs::GetInt(cs_arg0,cs_arg1); }());}); pls::game::cs_require(cs_target)->cs_5c5946093936fbb3 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_15d0c6400449da70>>(cs_this); pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/tapjoy/ui/Tapjoy.cs:M:system.tapjoy.ui.Tapjoy.Init:1097",([&]() { auto cs_left = ([]() -> pls::cs::String {static std::atomic<void*> cs_site{};return pls::cs::String::literal_at(cs_site,u"\x005b" u"\x0054" u"\x0061" u"\x0070" u"\x006a" u"\x006f" u"\x0079" u"\x005d" u"\x0020" u"\x0049" u"\x006e" u"\x0069" u"\x0074" u"\x005f" u"\x0062" u"\x0061" u"\x006c" u"\x0061" u"\x006e" u"\x0063" u"\x0065" u"\x003a" u"",22);}()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5c5946093936fbb3; }())); return pls::cs::String::concat(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a4556f0291f3c16b(cs_receiver,cs_arg0); }());
}
}
}
}
}

// M:system.tapjoy.ui.Tapjoy.OnApplicationQuit
void cs_da0ffa209848b288(pls::cs::Ref<cs_15d0c6400449da70> cs_this) { cs_init_15d0c6400449da70();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.OnApplicationQuit",game);
{

}
}
}
}

// M:system.tapjoy.ui.Tapjoy.Print(System.String)
void cs_a4556f0291f3c16b(pls::cs::Ref<cs_15d0c6400449da70> cs_this,pls::cs::String v_s) { cs_init_15d0c6400449da70();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.Print(System.String)",game);
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e58caa6febbceffa; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_s; auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
}
}
}
}

// M:system.tapjoy.ui.Tapjoy.Quit
void cs_df368bf0f0331728(pls::cs::Ref<cs_15d0c6400449da70> cs_this) { cs_init_15d0c6400449da70();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.Quit",game);
{
if ((!((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7eef6a8482a8d635; }()))))) {
return;
}
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_15d0c6400449da70>>(cs_this); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static std::atomic<void*> cs_site{};return pls::cs::String::literal_at(cs_site,u"\x005b" u"\x0054" u"\x0061" u"\x0070" u"\x006a" u"\x006f" u"\x0079" u"\x005d" u"\x0020" u"\x0051" u"\x0075" u"\x0069" u"\x0074" u"",13);}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a4556f0291f3c16b(cs_receiver,cs_arg0); }());
}
}
}
}
}

// M:system.tapjoy.ui.Tapjoy.ShowOffers
bool cs_775389b720c542d7(pls::cs::Ref<cs_15d0c6400449da70> cs_this) { cs_init_15d0c6400449da70();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.ShowOffers",game);
{
cs_this->cs_4bf3528912e8c804=static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));
return false;
}
}
}
}

// M:system.tapjoy.ui.Tapjoy.Start
void cs_e5be24181ef4d4c5(pls::cs::Ref<cs_15d0c6400449da70> cs_this) { cs_init_15d0c6400449da70();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.Start",game);
{

}
}
}
}

// M:system.tapjoy.ui.Tapjoy.SubBalance(System.Int32)
void cs_a483fff7ac30a075(pls::cs::Ref<cs_15d0c6400449da70> cs_this,std::int32_t v_sub) { cs_init_15d0c6400449da70();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.ui.Tapjoy.SubBalance(System.Int32)",game);
{
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_5c5946093936fbb3; auto cs_rhs = v_sub; auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_5c5946093936fbb3 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5c5946093936fbb3; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_5c5946093936fbb3 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_15d0c6400449da70>>(cs_this); pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/tapjoy/ui/Tapjoy.cs:M:system.tapjoy.ui.Tapjoy.SubBalance(System.Int32):1814",([&]() { auto cs_left = ([]() -> pls::cs::String {static std::atomic<void*> cs_site{};return pls::cs::String::literal_at(cs_site,u"\x005b" u"\x0054" u"\x0061" u"\x0070" u"\x006a" u"\x006f" u"\x0079" u"\x005d" u"\x0020" u"\x0053" u"\x0075" u"\x0062" u"\x0042" u"\x0061" u"\x006c" u"\x0061" u"\x006e" u"\x0063" u"\x0065" u"\x003a" u"",20);}()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5c5946093936fbb3; }())); return pls::cs::String::concat(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a4556f0291f3c16b(cs_receiver,cs_arg0); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static std::atomic<void*> cs_site{};return pls::cs::String::literal_at(cs_site,u"\x005f" u"\x0054" u"\x0061" u"\x0070" u"\x006a" u"\x006f" u"\x0079" u"",7);}()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5c5946093936fbb3; }()); pls::kairo::PlayerPrefs::SetInt(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::kairo::PlayerPrefs::Save(); }());});
}
}
}
}
}
