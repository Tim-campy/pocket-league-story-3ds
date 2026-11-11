// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_08829eb6a4df2a40.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_3a3d09f9e75a32d2.hpp"
#include "game_generated_type_3ee77977aa791047.hpp"
#include "game_generated_type_487b2c2b346d5c73.hpp"
#include "game_generated_type_4a8bef2ab48b32d7.hpp"
#include "game_generated_type_4e9b1f0e9e3baf25.hpp"
#include "game_generated_type_5df8265429cd2423.hpp"
#include "game_generated_type_6485f92c2f04639f.hpp"
#include "game_generated_type_6ee7d14059be1acf.hpp"
#include "game_generated_type_757516ce190cf813.hpp"
#include "game_generated_type_931908081ea62151.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_af32d28251411c95.hpp"
#include "game_generated_type_e31f80000513fe82.hpp"
#include "generated/portable_generated_type_3af9088680f95fb3.hpp"
#include "generated/portable_generated_type_52158c8b20364c2b.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_a0cf9aef6a251bfd.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
#include "generated/portable_generated_type_f8b20a4d1d9d695f.hpp"
namespace pls::game {

void cs_af32d28251411c95::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_9326c27a92cfea3a::trace_edges(visitor);pls::cs::trace_value(cs_449a72c816bc8b81,visitor);pls::cs::trace_value(cs_7098c1837eb30f29,visitor);pls::cs::trace_value(cs_f7b1fd704bdd2c8a,visitor);pls::cs::trace_value(cs_a6d9872478ce823a,visitor);pls::cs::trace_value(cs_d08ec7df0a5c34ee,visitor);pls::cs::trace_value(cs_522c8c247df0b8bb,visitor);pls::cs::trace_value(cs_790b10da4e9ff66f,visitor);pls::cs::trace_value(cs_9104d50d4078e9c9,visitor);pls::cs::trace_value(cs_6c5020fb7ea0a4fb,visitor);}

void cs_af32d28251411c95::release_edges(){cs_9326c27a92cfea3a::release_edges();pls::cs::release_value(cs_449a72c816bc8b81);pls::cs::release_value(cs_7098c1837eb30f29);pls::cs::release_value(cs_f7b1fd704bdd2c8a);pls::cs::release_value(cs_a6d9872478ce823a);pls::cs::release_value(cs_d08ec7df0a5c34ee);pls::cs::release_value(cs_522c8c247df0b8bb);pls::cs::release_value(cs_790b10da4e9ff66f);pls::cs::release_value(cs_9104d50d4078e9c9);pls::cs::release_value(cs_6c5020fb7ea0a4fb);}

void cs_af32d28251411c95::cs_virtual_07a0bb2e4afc307c(pls::cs::Ref<pls::kairo::Graphics> v_g) {cs_9d38c5ec25140485(pls::cs::static_pointer_cast<cs_af32d28251411c95>(shared_from_this()),v_g);}

bool cs_af32d28251411c95::cs_virtual_9b7c686ee42b269b() {return cs_ad96de4fc5954f60(pls::cs::static_pointer_cast<cs_af32d28251411c95>(shared_from_this()));}

void cs_af32d28251411c95::cs_virtual_9f5fde625f99aa16(pls::cs::Ref<cs_757516ce190cf813> v_evt) {cs_826469405b7c0a34(pls::cs::static_pointer_cast<cs_af32d28251411c95>(shared_from_this()),v_evt);}

void cs_af32d28251411c95::cs_virtual_acea3de130dbb7cd() {cs_98117d8ad36b8cc1(pls::cs::static_pointer_cast<cs_af32d28251411c95>(shared_from_this()));}

static pls::cs::Array<pls::cs::String> cs_3f7ae294e0213a46_value{};

static pls::cs::Ref<pls::kairo::Image> cs_de24cebe7367b9a6_value{};

static pls::cs::Ref<cs_af32d28251411c95> cs_49cf94cd1a414d1f_value{};

void cs_init_af32d28251411c95(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_3f7ae294e0213a46_value,visitor);pls::cs::trace_value(cs_de24cebe7367b9a6_value,visitor);pls::cs::trace_value(cs_49cf94cd1a414d1f_value,visitor);});static pls::cs::TypeInitState state;state.run("system.surface.GameBanner",[](){
cs_3f7ae294e0213a46_value = pls::cs::evaluate_type_initializer_field("F:system.surface.GameBanner.FILENAMES",[&](){return pls::source_allocations::completed("new_array","src/Assembly-CSharp/system/surface/GameBanner.cs:M:system.surface.GameBanner.GetInstance:584",([&](){auto cs_initial_array_208=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_208.at(0)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x005f" u"\x0062" u"\x0061" u"\x006e" u"\x006e" u"\x0065" u"\x0072" u"\x005f" u"\x0030" u"\x0030" u"\x002e" u"\x0070" u"\x006e" u"\x0067" u"",20);return cs_literal;}());cs_initial_array_208.at(1)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0061" u"\x0064" u"\x005f" u"\x006f" u"\x0066" u"\x0066" u"\x005f" u"\x0062" u"\x0061" u"\x006e" u"\x006e" u"\x0065" u"\x0072" u"\x005f" u"\x0030" u"\x0030" u"\x002e" u"\x0070" u"\x006e" u"\x0067" u"",20);return cs_literal;}());cs_initial_array_208.at(2)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x005f" u"\x0062" u"\x0061" u"\x006e" u"\x006e" u"\x0065" u"\x0072" u"\x005f" u"\x0030" u"\x0030" u"\x002e" u"\x0070" u"\x006e" u"\x0067" u"",18);return cs_literal;}());cs_initial_array_208.at(3)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x005f" u"\x0062" u"\x0061" u"\x006e" u"\x006e" u"\x0065" u"\x0072" u"\x005f" u"\x0030" u"\x0031" u"\x002e" u"\x0070" u"\x006e" u"\x0067" u"",18);return cs_literal;}());cs_initial_array_208.at(4)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x005f" u"\x0062" u"\x0061" u"\x006e" u"\x006e" u"\x0065" u"\x0072" u"\x005f" u"\x0030" u"\x0032" u"\x002e" u"\x0070" u"\x006e" u"\x0067" u"",18);return cs_literal;}());cs_initial_array_208.at(5)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x005f" u"\x0062" u"\x0061" u"\x006e" u"\x006e" u"\x0065" u"\x0072" u"\x005f" u"\x0030" u"\x0033" u"\x002e" u"\x0070" u"\x006e" u"\x0067" u"",18);return cs_literal;}());cs_initial_array_208.at(6)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x005f" u"\x0062" u"\x0061" u"\x006e" u"\x006e" u"\x0065" u"\x0072" u"\x005f" u"\x0030" u"\x0034" u"\x002e" u"\x0070" u"\x006e" u"\x0067" u"",18);return cs_literal;}());return cs_initial_array_208;}()));});

});}

pls::cs::Array<pls::cs::String>& cs_3f7ae294e0213a46(){cs_init_af32d28251411c95();return cs_3f7ae294e0213a46_value;}

pls::cs::Ref<pls::kairo::Image>& cs_de24cebe7367b9a6(){cs_init_af32d28251411c95();return cs_de24cebe7367b9a6_value;}

pls::cs::Ref<cs_af32d28251411c95>& cs_49cf94cd1a414d1f(){cs_init_af32d28251411c95();return cs_49cf94cd1a414d1f_value;}

// M:system.surface.GameBanner.#ctor
pls::cs::Ref<cs_af32d28251411c95> cs_11534d928e8399e4() { cs_init_af32d28251411c95();
{ auto cs_this = pls::cs::make_ref<cs_af32d28251411c95>(); cs_11534d928e8399e4_init(cs_this); return cs_this; }
}

void cs_11534d928e8399e4_init(pls::cs::Ref<cs_af32d28251411c95> cs_this) {
([&]() { cs_a1b466bc14363691_init(pls::cs::static_pointer_cast<cs_9326c27a92cfea3a>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.#ctor",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());}); pls::game::cs_require(cs_target)->cs_449a72c816bc8b81 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());}); pls::game::cs_require(cs_target)->cs_7098c1837eb30f29 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_4e9b1f0e9e3baf25> { return cs_81e284f6e842da85(); }()); pls::game::cs_require(cs_target)->cs_f7b1fd704bdd2c8a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/surface/GameBanner.cs:M:system.surface.GameBanner.#ctor:1109",([&]() -> pls::cs::Ref<pls::generated::cs_a0cf9aef6a251bfd> { return pls::generated::cs_783c2dc4bd688739(); }())); pls::game::cs_require(cs_target)->cs_790b10da4e9ff66f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_a6d9872478ce823a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); pls::game::cs_require(cs_target)->cs_522c8c247df0b8bb = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_9104d50d4078e9c9 = cs_value; return cs_value; }());
}
}
}

// M:system.surface.GameBanner.Draw(kairo.unity.ui.Graphics)
void cs_9d38c5ec25140485(pls::cs::Ref<cs_af32d28251411c95> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_af32d28251411c95();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.Draw(kairo.unity.ui.Graphics)",game);
{
return;
}
}
}
}

// M:system.surface.GameBanner.GetInstance
pls::cs::Ref<cs_af32d28251411c95> cs_cb8c524e1144420f() { cs_init_af32d28251411c95();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.GetInstance",game);
{
if (([&]() { auto cs_left = pls::cs::box(cs_49cf94cd1a414d1f()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/surface/GameBanner.cs:M:system.surface.GameBanner.GetInstance:1309",([&]() -> pls::cs::Ref<cs_af32d28251411c95> { return cs_11534d928e8399e4(); }())); cs_49cf94cd1a414d1f() = cs_value; return cs_value; }());
}
return cs_49cf94cd1a414d1f();
}
}
}

// M:system.surface.GameBanner.IsGameSurface
bool cs_ad96de4fc5954f60(pls::cs::Ref<cs_af32d28251411c95> cs_this) { cs_init_af32d28251411c95();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.IsGameSurface",game);
{
return false;
}
}
}
}

// M:system.surface.GameBanner.Load
void cs_e60d8493ba30ab4c(pls::cs::Ref<cs_af32d28251411c95> cs_this) { cs_init_af32d28251411c95();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.Load",game);
{
return;
}
}
}
}

// M:system.surface.GameBanner.OnTouchEvent(kairo.unity.surface.TouchEvent)
void cs_826469405b7c0a34(pls::cs::Ref<cs_af32d28251411c95> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_evt) { cs_init_af32d28251411c95();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.OnTouchEvent(kairo.unity.surface.TouchEvent)",game);
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_1500 = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
std::int32_t v_type_1534 = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }());
if (([&]() -> bool { auto cs_left = v_type_1534; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left == cs_right); }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_1500; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
pls::cs::String v_text_1622 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/surface/GameBanner.cs:M:system.surface.GameBanner.OnTouchEvent(kairo.unity.surface.TouchEvent):1629",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/surface/GameBanner.cs:M:system.surface.GameBanner.OnTouchEvent(kairo.unity.surface.TouchEvent):1629",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/surface/GameBanner.cs:M:system.surface.GameBanner.OnTouchEvent(kairo.unity.surface.TouchEvent):1629",([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6c5020fb7ea0a4fb; }()); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"\x002f" u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x002f" u"\x003f" u"\x0067" u"\x006d" u"\x003d" u"",32);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::game::cs_integer_string(pls::generated::cs_efcdf5d0d7b2cdc2()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0026" u"\x0064" u"\x006c" u"\x003d" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"\x000a" u"\x000a" u"",11);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }()));
pls::cs::Ref<pls::kairo::IApplication> v_currentApp_1731 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());});
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_1500; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_1838 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
pls::cs::Ref<cs_08829eb6a4df2a40> v_instance2_1891 = ([&]() -> pls::cs::Ref<cs_08829eb6a4df2a40> { return cs_aaf24b850afadd84(); }());
pls::cs::Ref<cs_5df8265429cd2423> v_billingForm_1945 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/surface/GameBanner.cs:M:system.surface.GameBanner.OnTouchEvent(kairo.unity.surface.TouchEvent):1959",([&]() -> pls::cs::Ref<cs_5df8265429cd2423> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_e8ae3ed2ae7db752(cs_arg0); }()));
([&]() { auto cs_target = v_billingForm_1945; auto cs_value = ([&]() -> pls::cs::Ref<cs_931908081ea62151> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance2_1891); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_eeb39a8b5e25b72e(cs_receiver,cs_arg0); }()); pls::game::cs_require(cs_target)->cs_c5d00bd651861fba = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_1838); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_billingForm_1945; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());});
} else {
([&]() -> bool { pls::cs::String cs_arg0 = pls::generated::cs_7f5d05d9a8be3705(); return cs_25bba6e14d51039b(cs_arg0); }());
}
}
}
}
}
}

// M:system.surface.GameBanner.RotateClear
void cs_98117d8ad36b8cc1(pls::cs::Ref<cs_af32d28251411c95> cs_this) { cs_init_af32d28251411c95();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.RotateClear",game);
{

}
}
}
}

// M:system.surface.GameBanner.Unload
void cs_2fc41a4e0b75b7e8(pls::cs::Ref<cs_af32d28251411c95> cs_this) { cs_init_af32d28251411c95();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.Unload",game);
{
if (([&]() { auto cs_left = pls::cs::box(cs_de24cebe7367b9a6()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(cs_de24cebe7367b9a6()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());});
}
([&]() { auto cs_value = pls::cs::Ref<pls::kairo::Image>{}; cs_de24cebe7367b9a6() = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_a6d9872478ce823a = cs_value; return cs_value; }());
}
}
}
}
}
