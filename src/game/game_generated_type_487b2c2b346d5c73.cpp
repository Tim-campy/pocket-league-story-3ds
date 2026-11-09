// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_0286a0dbe9da0b33.hpp"
#include "game_generated_type_2c2ce8625d613473.hpp"
#include "game_generated_type_487b2c2b346d5c73.hpp"
#include "game_generated_type_72d9658ed61145d6.hpp"
#include "game_generated_type_77de402a688eeb9d.hpp"
#include "game_generated_type_8e2bf0f8fe011785.hpp"
#include "game_generated_type_b489b0d33bb37bb8.hpp"
#include "game_generated_type_c87dc3d2d0f9440a.hpp"
#include "game_generated_type_ed8eabc614ddcf9e.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
#include "generated/portable_generated_type_83a7bc36395d16bd.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
namespace pls::game {

// M:kairo.unity.ui.Canvas.Fullscreen(System.Boolean)
void cs_00f4f3ea699b68a8(pls::cs::Ref<pls::kairo::Canvas> cs_this,bool v_enable) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Canvas.Fullscreen(System.Boolean)",kairo);
{
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() -> pls::cs::Ref<pls::kairo::FormManagerBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormManager(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsCapturing(); }());})) {
return;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { bool cs_arg0 = v_enable; cs_933c73fabeb9213d(cs_arg0); }());});
}
}
}

// M:kairo.unity.ui.Canvas.ImeOnBlock(System.String,System.Int32,System.Int32)
pls::cs::String cs_0c63416912f65567(pls::cs::Ref<pls::kairo::Canvas> cs_this,pls::cs::String v_text,std::int32_t v_displayMode,std::int32_t v_inputMode) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Canvas.ImeOnBlock(System.String,System.Int32,System.Int32)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; std::int32_t cs_arg1 = v_displayMode; std::int32_t cs_arg2 = v_inputMode; return pls::kairo::request_text_input(cs_arg0,cs_arg1,cs_arg2); }());});
}
}
}

// M:kairo.unity.ui.Canvas.IsGetStatusBarHeight
bool cs_c8e32e6eaf380ca6(pls::cs::Ref<pls::kairo::Canvas> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Canvas.IsGetStatusBarHeight",kairo);
{
return true;
}
}
}

// M:kairo.unity.ui.Canvas.IsGetStatusBarPosition
bool cs_26fe694df0ae6d4f(pls::cs::Ref<pls::kairo::Canvas> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Canvas.IsGetStatusBarPosition",kairo);
{
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_status_bar_position; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }());
}
}
}

// M:kairo.unity.ui.Canvas.IsLinearFilterEnable
bool cs_c1254eeab17d49bd(pls::cs::Ref<pls::kairo::Canvas> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Canvas.IsLinearFilterEnable",kairo);
{
return ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { return pls::kairo::QualitySettings::get_antiAliasing(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }());
}
}
}

// M:kairo.unity.ui.Canvas.OpenBrowser(System.String)
bool cs_25bba6e14d51039b(pls::cs::String v_url) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Canvas.OpenBrowser(System.String)",kairo);
{
pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_url_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::String>>(v_url);
{
try {
if (([&]() -> bool { auto cs_left = pls::generated::cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
pls::cs::Ref<cs_b489b0d33bb37bb8> v_instance_30580 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
if (([&]() { auto cs_left = pls::cs::box(v_instance_30580); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Ref<pls::cs::RegexMatch> v_match_30662 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_url_cell->value; auto cs_arg1 = pls::cs::String(std::u16string(u"\x006d" u"\x0061" u"\x0072" u"\x006b" u"\x0065" u"\x0074" u"\x003a" u"\x002f" u"\x002f" u"\x0064" u"\x0065" u"\x0074" u"\x0061" u"\x0069" u"\x006c" u"\x0073" u"\x005c" u"\x003f" u"\x0069" u"\x0064" u"\x003d" u"\x0028" u"\x005b" u"\x005c" u"\x0077" u"\x002e" u"\x005d" u"\x002b" u"\x0029" u"",29)); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());});
if (pls::game::cs_require(v_match_30662)->get_Success()) {
pls::cs::String v_value_30770 = pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_30662)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value();
cs_c87dc3d2d0f9440a v_gameAppli_30818 = cs_c87dc3d2d0f9440a{};
std::int32_t v_num_30861 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<cs_c87dc3d2d0f9440a> v_appList_30889 = ([&]() -> pls::cs::Array<cs_c87dc3d2d0f9440a> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_30580); bool cs_arg0 = false; bool cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_7e52a7f62521b1ee(cs_receiver,cs_arg0,cs_arg1); }());
for (std::int32_t v_i_30950 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_30950; auto cs_right = (v_appList_30889).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_30950; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_30950 = cs_new; return cs_old; }())) {
cs_c87dc3d2d0f9440a v_gameAppli2_31009 = ([&]() { auto cs_array = v_appList_30889; auto cs_index = v_i_30950; return cs_array.get_Item(cs_index); }());
if (((([&]() { auto cs_left = pls::cs::box((v_gameAppli2_31009).cs_055616eacd82bf39); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ((v_gameAppli2_31009).cs_055616eacd82bf39).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && ((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=(v_gameAppli2_31009).cs_ad6910b7b897b250;auto cs_argument=v_value_30770;cs_receiver.length();return pls::cs::culture_equals_ignore_case(cs_receiver,cs_argument);}());}) || pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=(v_gameAppli2_31009).cs_7a8e84cb54b27614;auto cs_argument=v_value_30770;cs_receiver.length();return pls::cs::culture_equals_ignore_case(cs_receiver,cs_argument);}());}))))) {
std::int32_t v_num2_31284 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
if (([&]() -> bool { auto cs_left = ([&]() -> bool { auto cs_left = (v_gameAppli2_31009).cs_3f97f246a7d4b8ee; auto cs_right = pls::cs::String(std::u16string(u"\x006a" u"\x0061" u"",2)); return (cs_left == cs_right); }()); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());}); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_num2_31284; auto cs_new = pls::cs::add_i32(cs_old,1); v_num2_31284 = cs_new; return cs_old; }());
}
if (([&]() -> bool { auto cs_left = v_num2_31284; auto cs_right = v_num_30861; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_num2_31284; v_num_30861 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_gameAppli2_31009; v_gameAppli_30818 = cs_value; return cs_value; }());
}
}
}
if ((([&]() -> bool { auto cs_left = v_num_30861; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && pls::generated::cs_b0827224162a4f93())) {
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog_31582 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x004f" u"\x0070" u"\x0065" u"\x006e" u"\x0042" u"\x0072" u"\x006f" u"\x0077" u"\x0073" u"\x0065" u"\x0072" u"",11)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_31582); pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\xff8a" u"\xff9f" u"\xff6f" u"\xff79" u"\xff70" u"\xff7c" u"\xff9e" u"\x300c" u"",8)); auto cs_right = v_value_30770; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x300d" u"\x304b" u"\x3089" u"\x0041" u"\x0070" u"\x0070" u"\x006c" u"\x0065" u"\x0049" u"\x0064" u"\x3078" u"\x306e" u"\x5909" u"\x63db" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x000a" u"\x5171" u"\x6709" u"\x0044" u"\x0042" u"\x306b" u"\x767b" u"\x9332" u"\x3055" u"\x308c" u"\x3066" u"\x3044" u"\x308b" u"\x304b" u"\x78ba" u"\x8a8d" u"\x3057" u"\x3066" u"\x304f" u"\x3060" u"\x3055" u"\x3044" u"\x3002" u"",45)); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_31582); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
return false;
}
if (([&]() -> bool { auto cs_left = (v_gameAppli_30818).cs_3f97f246a7d4b8ee; auto cs_right = pls::cs::String(std::u16string(u"\x006a" u"\x0061" u"",2)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x0073" u"\x003a" u"\x002f" u"\x002f" u"\x0069" u"\x0074" u"\x0075" u"\x006e" u"\x0065" u"\x0073" u"\x002e" u"\x0061" u"\x0070" u"\x0070" u"\x006c" u"\x0065" u"\x002e" u"\x0063" u"\x006f" u"\x006d" u"\x002f" u"\x006a" u"\x0070" u"\x002f" u"\x0061" u"\x0070" u"\x0070" u"\x002f" u"\x0069" u"\x0064" u"",34)); auto cs_right = (v_gameAppli_30818).cs_055616eacd82bf39; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x003f" u"\x006d" u"\x0074" u"\x003d" u"\x0038" u"",5)); return pls::cs::String::concat(cs_left,cs_right); }()); v_url_cell->value = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x0073" u"\x003a" u"\x002f" u"\x002f" u"\x0069" u"\x0074" u"\x0075" u"\x006e" u"\x0065" u"\x0073" u"\x002e" u"\x0061" u"\x0070" u"\x0070" u"\x006c" u"\x0065" u"\x002e" u"\x0063" u"\x006f" u"\x006d" u"\x002f" u"\x0061" u"\x0070" u"\x0070" u"\x002f" u"\x0069" u"\x0064" u"",31)); auto cs_right = (v_gameAppli_30818).cs_055616eacd82bf39; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x003f" u"\x006d" u"\x0074" u"\x003d" u"\x0038" u"",5)); return pls::cs::String::concat(cs_left,cs_right); }()); v_url_cell->value = cs_value; return cs_value; }());
}
}
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_749e168bdf49d301 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_url_cell;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_url_cell,v);}void release_edges()override{pls::cs::Object::release_edges();v_url_cell.reset();}void Invoke(){{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::kairo::AppEventType cs_arg0 = static_cast<pls::kairo::AppEventType>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))); auto cs_arg1 = pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::make(1); cs_arg1.at(0) = pls::cs::box(v_url_cell->value); pls::kairo::FormManagerBase::ProcessEvent(cs_arg0,cs_arg1); }());});
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTotalFrames(); }());}); pls::kairo::Canvas::source_last_browser_frame() = cs_value; return cs_value; }());
pls::cs::String v_text_32247 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0068" u"\x003d" u"",4)); auto cs_right = ([&]() -> pls::cs::String { return cs_154f0344cd538956(); }()); return pls::cs::String::concat(cs_left,cs_right); }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_url_cell->value; auto cs_arg1 = pls::cs::String(std::u16string(u"\x003f" u"",1)); return pls::game::cs_contains_string(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = (([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0026" u"",1)); auto cs_right = v_text_32247; return pls::cs::String::concat(cs_left,cs_right); }())); v_text_32247 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x003f" u"",1)); auto cs_right = v_text_32247; return pls::cs::String::concat(cs_left,cs_right); }())); v_text_32247 = cs_value; return cs_value; }());
}
std::int32_t v_num3_32383 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_url_cell->value; auto cs_arg1 = char16_t(35); return pls::game::cs_last_index_char1(cs_arg0,cs_arg1); }());});
if (([&]() -> bool { auto cs_left = v_num3_32383; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_url_cell->value; auto cs_arg1 = v_num3_32383; auto cs_arg2 = v_text_32247; return pls::cs::string_insert(cs_arg0,cs_arg1,cs_arg2); }());}); v_url_cell->value = cs_value; return cs_value; }());
} else {
([&]() { auto cs_old = v_url_cell->value; auto cs_rhs = v_text_32247; auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_url_cell->value = cs_value; return cs_value; }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = v_url_cell->value; pls::kairo::UnityApplication::OpenURL(cs_arg0); }());});
}}};auto cs_closure=pls::cs::make_ref<cs_closure_749e168bdf49d301>();cs_closure->v_url_cell=v_url_cell;return pls::cs::Delegate<void()>::bind_identity(cs_closure,v_url_cell.get(),std::string("M:kairo.unity.ui.Canvas.OpenBrowser(System.String):32082"),[weak=std::weak_ptr<cs_closure_749e168bdf49d301>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());});
return true;
} catch(const pls::cs::Exception& cs_caught_278) {auto cs_exception_278=pls::cs::capture_exception(cs_caught_278);
if(pls::cs::exception_is(cs_exception_278,"System.Exception")) {{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x30d6" u"\x30e9" u"\x30a6" u"\x30b6" u"\x306e" u"\x8d77" u"\x52d5" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"",15)); auto cs_right = v_url_cell->value; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
}}
else {throw;} }
return false;
}
}
}

// M:kairo.unity.ui.Canvas.SetLinearFilterEnable(System.Boolean)
void cs_bc7b8b04f006df42(pls::cs::Ref<pls::kairo::Canvas> cs_this,bool v_enable) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Canvas.SetLinearFilterEnable(System.Boolean)",kairo);
{

}
}
}

// M:kairo.unity.ui.Canvas.VersionUp(System.String)
void cs_ac34c1502cb07afe(pls::cs::String v_url) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Canvas.VersionUp(System.String)",kairo);
{

}
}
}
