()) && pls::generated::cs_b0827224162a4f93())) {
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_749e168bdf49d301 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_url_cell;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_url_cell,v);}void release_edges()override{pls::cs::Object::release_edges();v_url_cell.reset();}void Invoke(){{
([&]() -> void { pls::kairo::AppEventType cs_arg0 = static_cast<pls::kairo::AppEventType>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))); auto cs_arg1 = pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::make(1); cs_arg1.at(0) = pls::cs::box(v_url_cell->value); pls::kairo::FormManagerBase::ProcessEvent(cs_arg0,cs_arg1); }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTotalFrames(); }()); pls::kairo::Canvas::source_last_browser_frame() = cs_value; return cs_value; }());
pls::cs::String v_text_32247 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0068" u"\x003d" u"",4)); auto cs_right = ([&]() -> pls::cs::String { return cs_154f0344cd538956(); }()); return pls::cs::String::concat(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_arg0 = v_url_cell->value; auto cs_arg1 = pls::cs::String(std::u16string(u"\x003f" u"",1)); return pls::game::cs_contains_string(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = (([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0026" u"",1)); auto cs_right = v_text_32247; return pls::cs::String::concat(cs_left,cs_right); }())); v_text_32247 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x003f" u"",1)); auto cs_right = v_text_32247; return pls::cs::String::concat(cs_left,cs_right); }())); v_text_32247 = cs_value; return cs_value; }());
}
std::int32_t v_num3_32383 = ([&]() -> std::int32_t { auto cs_arg0 = v_url_cell->value; auto cs_arg1 = char16_t(35); return pls::game::cs_last_index_char1(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num3_32383; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_url_cell->value; auto cs_arg1 = v_num3_32383; auto cs_arg2 = v_text_32247; return pls::cs::string_insert(cs_arg0,cs_arg1,cs_arg2); }()); v_url_cell->value = cs_value; return cs_value; }());
} else {
([&]() { auto cs_old = v_url_cell->value; auto cs_rhs = v_text_32247; auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_url_cell->value = cs_value; return cs_value; }());
}
([&]() -> void { pls::cs::String cs_arg0 = v_url_cell->value; pls::kairo::UnityApplication::OpenURL(cs_arg0); }());
}}};auto cs_closure=pls::cs::make_ref<cs_closure_749e168bdf49d301>();cs_closure->v_url_cell=v_url_cell;return pls::cs::Delegate<void()>::bind_identity(cs_closure,v_url_cell.get(),std::string("M:kairo.unity.ui.Canvas.OpenBrowser(System.String):32082"),[weak=std::weak_ptr<cs_closure_749e168bdf49d301>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());
return true;
} catch(const pls::cs::Exception& cs_caught_278) {auto cs_exception_278=pls::cs::capture_exception(cs_caught_278);
if(pls::cs::exception_is(cs_exception_278,"System.Exception")) {{
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x30d6" u"\x30e9" u"\x30a6" u"\x30b6" u"\x306e" u"\x8d77" u"\x52d5" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"",15)); auto cs_right = v_url_cell->value; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
}}
else {throw;} }
return false;
}
}
// M:kairo.unity.ui.Canvas.SetLinearFilterEnable(System.Boolean)
void cs_bc7b8b04f006df42(pls::cs::Ref<pls::kairo::Canvas> cs_this,bool v_enable) { if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
// M:kairo.unity.ui.Canvas.VersionUp(System.String)
void cs_ac34c1502cb07afe(pls::cs::String v_url) {

}
// M:kairo.unity.ui.Dialog.#ctor(System.Int32,System.String)
pls::cs::Ref<cs_0286a0dbe9da0b33> cs_63545d46c6887c12(std::int32_t v_type,pls::cs::String v_title) { cs_init_0286a0dbe9da0b33();
{ auto cs_this = pls::cs::make_ref<cs_0286a0dbe9da0b33>(); cs_63545d46c6887c12_init(cs_this,v_type,v_title); return cs_this; }
}
void cs_63545d46c6887c12_init(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this,std::int32_t v_type,pls::cs::String v_title) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_71eb51b3f792969a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_title; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_ef63d4d4b6ab550f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Font> { return pls::cs::make_ref<pls::kairo::Font>(); }()); pls::game::cs_require(cs_target)->cs_6e5c685dce0d605a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String(std::u16string(u"",0)); pls::game::cs_require(cs_target)->cs_7f418c9c27e5c628 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffff000000ull)); return cs_ca48ee9e5dbe6d98(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_1931e59a708b44ff = cs_value; return cs_value; }());
}
}
// M:kairo.unity.ui.Dialog.SetButtons(System.String[])
void cs_f93da55cc1dd9ec3(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this,pls::cs::Array<pls::cs::String> v_buttons) { cs_init_0286a0dbe9da0b33();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_buttons; pls::game::cs_require(cs_target)->cs_7c40c7d83d91cf74 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.Dialog.SetText(System.String)
void cs_d53653cbf2469429(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this,pls::cs::String v_msg) { cs_init_0286a0dbe9da0b33();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<pls::cs::String> v_array_920 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_msg; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_920; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_7f418c9c27e5c628 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7f418c9c27e5c628; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x000a" u"",1)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }()); pls::game::cs_require(cs_target)->cs_7f418c9c27e5c628 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::game::cs_require(cs_target)->cs_49c162566c3d94ef = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = (v_array_920).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_920; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_49c162566c3d94ef = cs_value; return cs_value; }());
}
}
}
}
// M:kairo.unity.ui.Dialog.Show
std::int32_t cs_1727d3688d4d03e6(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this) { cs_init_0286a0dbe9da0b33();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::String v_text_1364 = pls::cs::String{};
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7c40c7d83d91cf74; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"",0)); v_text_1364 = cs_value; return cs_value; }());
for (std::int32_t v_i_1432 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1432; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7c40c7d83d91cf74; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1432; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1432 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = v_i_1432; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_text_1364; auto cs_rhs = pls::cs::String(std::u16string(u"\x002c" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1364 = cs_value; return cs_value; }());
}
([&]() { auto cs_old = v_text_1364; auto cs_rhs = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7c40c7d83d91cf74; }()); auto cs_index = v_i_1432; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1364 = cs_value; return cs_value; }());
}
}
std::int32_t v_num_1559 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_71eb51b3f792969a; }()); pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef63d4d4b6ab550f; }()); pls::cs::String cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7f418c9c27e5c628; }()); pls::cs::String cs_arg3 = v_text_1364; return pls::kairo::show_dialog(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_49c162566c3d94ef; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ((([&]() -> bool { auto cs_left = v_num_1559; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_num_1559; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()))))) {
([&]() -> bool { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_49c162566c3d94ef; }()); return cs_25bba6e14d51039b(cs_arg0); }());
}
return v_num_1559;
}
}
}
// M:kairo.unity.ui.Font.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single)
void cs_a8594be9cb96428d(pls::cs::Ref<pls::kairo::Font> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_text,float v_x,float v_y) { if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::kairo::Font> v_font_2336 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Font> cs_arg0 = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetFont(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text; float cs_arg1 = v_x; float cs_arg2 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Font> cs_arg0 = v_font_2336; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetFont(cs_arg0); }());
}
}
// M:kairo.unity.ui.Graphics.DrawRect2(System.Single,System.Single,System.Single,System.Single)
void cs_e6ac3efef08ae1c0(pls::cs::Ref<pls::kairo::Graphics> cs_this,float v_x,float v_y,float v_width,float v_height) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); float cs_arg0 = v_x; float cs_arg1 = v_y; float cs_arg2 = ([&]() -> float { auto cs_left = v_width; auto cs_right = pls::game::cs_f32(0x3f800000u); return (cs_left - cs_right); }()); float cs_arg3 = ([&]() -> float { auto cs_left = v_height; auto cs_right = pls::game::cs_f32(0x3f800000u); return (cs_left - cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:kairo.unity.ui.Graphics.DrawString(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single)
void cs_ad2d19e5f752fddb(pls::cs::Ref<pls::kairo::Graphics> cs_this,pls::cs::Ref<cs_dc09c88a279424b5> v_lf,pls::cs::String v_str,float v_x,float v_y) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = v_lf; pls::cs::String cs_arg1 = v_str; float cs_arg2 = v_x; float cs_arg3 = v_y; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
// M:kairo.unity.ui.Graphics.DrawString(System.Int64,System.Single,System.Single,System.Int32)
void cs_726c419ca52e10eb(pls::cs::Ref<pls::kairo::Graphics> cs_this,std::int64_t v_v,float v_x,float v_y,std::int32_t v_anchor) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = v_v; return pls::game::cs_integer_string(cs_arg0); }()); float cs_arg2 = v_x; float cs_arg3 = v_y; std::int32_t cs_arg4 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
// M:kairo.unity.ui.Graphics.DrawString(System.Int64,System.Single,System.Single)
void cs_15bb231c9f59a4d4(pls::cs::Ref<pls::kairo::Graphics> cs_this,std::int64_t v_v,float v_x,float v_y) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = v_v; return pls::game::cs_integer_string(cs_arg0); }()); float cs_arg2 = v_x; float cs_arg3 = v_y; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
// M:kairo.unity.ui.Graphics.DrawString2(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32)
void cs_87ad8b4ff44d53d9(pls::cs::Ref<pls::kairo::Graphics> cs_this,pls::cs::Ref<cs_dc09c88a279424b5> v_lf,pls::cs::String v_str,float v_x,float v_y,std::int32_t v_anchor) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = v_lf; pls::cs::Ref<pls::kairo::Graphics> cs_arg1 = cs_this; pls::cs::String cs_arg2 = v_str; float cs_arg3 = v_x; float cs_arg4 = v_y; std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetColor(); }()); std::int32_t cs_arg6 = v_anchor; cs_7650135bd7080a26(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
// M:kairo.unity.ui.Graphics.DrawString2(System.String,System.Single,System.Single,System.Int32)
void cs_355518d610800733(pls::cs::Ref<pls::kairo::Graphics> cs_this,pls::cs::String v_str,float v_x,float v_y,std::int32_t v_anchor) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::String cs_arg1 = v_str; float cs_arg2 = v_x; float cs_arg3 = v_y; std::int32_t cs_arg4 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_87ad8b4ff44d53d9(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
// M:kairo.unity.ui.Graphics.DrawString2(System.String,System.Single,System.Single)
void cs_feea20f608ec9bb6(pls::cs::Ref<pls::kairo::Graphics> cs_this,pls::cs::String v_str,float v_x,float v_y) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::String cs_arg1 = v_str; float cs_arg2 = v_x; float cs_arg3 = v_y; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_87ad8b4ff44d53d9(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
// M:kairo.unity.ui.Graphics.DrawStringBold(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32,System.Int32)
void cs_da83e0acd18b1deb(pls::cs::Ref<pls::kairo::Graphics> cs_this,pls::cs::Ref<cs_dc09c88a279424b5> v_lf,pls::cs::String v_str,float v_x,float v_y,std::int32_t v_color,std::int32_t v_anchor) { if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_color2_71638 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_color(); }());
std::int32_t v_num_71662 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_str; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); v_str = cs_value; return cs_value; }());
if ((([&]() -> bool { return pls::kairo::Graphics::PeekAutoTextLayout(); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_str; auto cs_arg1 = char16_t(60); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = v_lf; pls::cs::String cs_arg1 = v_str; float cs_arg2 = v_x; float cs_arg3 = v_y; std::int32_t cs_arg4 = v_color; std::int32_t cs_arg5 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_89a5e9b21929e049(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
return;
}
if (((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))) && ([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_num_71662 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
([&]() { auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); float cs_arg0 = v_x; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4a7882bb12bfce3f(cs_receiver,cs_arg0); }()); v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); float cs_arg0 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a6f2c13fea15a192(cs_receiver,cs_arg0); }()); v_y = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); std::int32_t cs_arg0 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cb4539652f78b54c(cs_receiver,cs_arg0); }()); v_anchor = cs_value; return cs_value; }());
}
bool v_flag_72111 = (((([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsNeedLocalizeScale(); }()));
if (v_flag_72111) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_num_71662 = cs_value; return cs_value; }());
std::int32_t v_height_72238 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetLocalizeScale(); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x60ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_y; auto cs_rhs = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_height_72238; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); auto cs_value = (cs_old + cs_rhs); v_y = cs_value; return cs_value; }());
}
([&]() -> void { pls::kairo::Font::LockLocalizeSetting(); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); std::int32_t cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
for (std::int32_t v_i_72474 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_72474; auto cs_right = ([&]() -> std::int32_t { auto cs_left = pls::kairo::Graphics::outlineQuality_; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_72474; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_72474 = cs_new; return cs_old; }())) {
float v_num2_72526 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::kairo::Graphics::outlineWidth_; auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_i_72474; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left * cs_right); }()); auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = pls::kairo::Graphics::outlineQuality_; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left / cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num2_72526; return (cs_left - cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_72526; return (cs_left - cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_72526; return (cs_left - cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num2_72526; return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_72526; return (cs_left - cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num2_72526; return (cs_left - cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left + cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num2_72526; return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left + cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num2_72526; return (cs_left - cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_72526; return (cs_left + cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_72526; return (cs_left + cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num2_72526; return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_72526; return (cs_left + cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); std::int32_t cs_arg0 = v_color2_71638; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str; float cs_arg1 = v_x; float cs_arg2 = v_y; std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
if (v_flag_72111) {
([&]() -> void { pls::kairo::Font::UnlockLocalizeSetting(); }());
}
if (([&]() -> bool { auto cs_left = v_num_71662; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); std::int32_t cs_arg0 = v_num_71662; auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.ui.Graphics.DrawStringBold(System.String,System.Single,System.Single,System.Int32,System.Int32)
void cs_bd0818c86bdc2dd2(pls::cs::Ref<pls::kairo::Graphics> cs_this,pls::cs::String v_str,float v_x,float v_y,std::int32_t v_color,std::int32_t v_anchor) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::String cs_arg1 = v_str; float cs_arg2 = v_x; float cs_arg3 = v_y; std::int32_t cs_arg4 = v_color; std::int32_t cs_arg5 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_da83e0acd18b1deb(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:kairo.unity.ui.Graphics.DrawStringBold2(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32,System.Int32)
void cs_89a5e9b21929e049(pls::cs::Ref<pls::kairo::Graphics> cs_this,pls::cs::Ref<cs_dc09c88a279424b5> v_lf,pls::cs::String v_str,float v_x,float v_y,std::int32_t v_color,std::int32_t v_anchor) { if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_color2_73676 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_color(); }());
std::int32_t v_num_73700 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
if (((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))) && ([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_num_73700 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
([&]() { auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); float cs_arg0 = v_x; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4a7882bb12bfce3f(cs_receiver,cs_arg0); }()); v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); float cs_arg0 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a6f2c13fea15a192(cs_receiver,cs_arg0); }()); v_y = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); std::int32_t cs_arg0 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cb4539652f78b54c(cs_receiver,cs_arg0); }()); v_anchor = cs_value; return cs_value; }());
}
bool v_flag_73983 = (((([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsNeedLocalizeScale(); }()));
if (v_flag_73983) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_num_73700 = cs_value; return cs_value; }());
std::int32_t v_height_74110 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetLocalizeScale(); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x60ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_y; auto cs_rhs = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_height_74110; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); auto cs_value = (cs_old + cs_rhs); v_y = cs_value; return cs_value; }());
}
([&]() -> void { pls::kairo::Font::LockLocalizeSetting(); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); std::int32_t cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
for (std::int32_t v_i_74346 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_74346; auto cs_right = ([&]() -> std::int32_t { auto cs_left = pls::kairo::Graphics::outlineQuality_; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_74346; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_74346 = cs_new; return cs_old; }())) {
float v_num2_74398 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::kairo::Graphics::outlineWidth_; auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_i_74346; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left * cs_right); }()); auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = pls::kairo::Graphics::outlineQuality_; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left / cs_right); }());
pls::cs::String v_str2_74479 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_str; return cs_d5579db4f56b3df0(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str2_74479; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num2_74398; return (cs_left - cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_74398; return (cs_left - cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_355518d610800733(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str2_74479; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_74398; return (cs_left - cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_355518d610800733(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str2_74479; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num2_74398; return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_74398; return (cs_left - cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_355518d610800733(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str2_74479; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num2_74398; return (cs_left - cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left + cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_355518d610800733(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str2_74479; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num2_74398; return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left + cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_355518d610800733(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str2_74479; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num2_74398; return (cs_left - cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_74398; return (cs_left + cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_355518d610800733(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str2_74479; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_74398; return (cs_left + cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_355518d610800733(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str2_74479; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num2_74398; return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_74398; return (cs_left + cs_right); }()); std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_355518d610800733(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); std::int32_t cs_arg0 = v_color2_73676; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::String cs_arg0 = v_str; float cs_arg1 = v_x; float cs_arg2 = v_y; std::int32_t cs_arg3 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_355518d610800733(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
if (v_flag_73983) {
([&]() -> void { pls::kairo::Font::UnlockLocalizeSetting(); }());
}
if (([&]() -> bool { auto cs_left = v_num_73700; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); std::int32_t cs_arg0 = v_num_73700; auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.ui.Graphics.DrawText(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Single,System.Int32)
void cs_7ae33d7210848539(pls::cs::Ref<pls::kairo::Graphics> cs_this,pls::cs::Ref<cs_dc09c88a279424b5> v_lf,pls::cs::String v_str,float v_x,float v_y,float v_width,std::int32_t v_anchor) { if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_64954 = v_anchor;
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x70ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_anchor; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); auto cs_value = (cs_old | cs_rhs); v_anchor = cs_value; return cs_value; }());
}
std::int32_t v_num2_65034 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
if (((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))) && ([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_num2_65034 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
([&]() { auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); float cs_arg0 = v_x; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4a7882bb12bfce3f(cs_receiver,cs_arg0); }()); v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); float cs_arg0 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a6f2c13fea15a192(cs_receiver,cs_arg0); }()); v_y = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); std::int32_t cs_arg0 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cb4539652f78b54c(cs_receiver,cs_arg0); }()); v_anchor = cs_value; return cs_value; }());
}
bool v_num3_65319 = (((([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsNeedLocalizeScale(); }()));
if (v_num3_65319) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_num2_65034 = cs_value; return cs_value; }());
std::int32_t v_height_65443 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetLocalizeScale(); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x60ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_y; auto cs_rhs = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_height_65443; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); auto cs_value = (cs_old + cs_rhs); v_y = cs_value; return cs_value; }());
}
([&]() -> void { pls::kairo::Font::LockLocalizeSetting(); }());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num_64954; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_y; auto cs_rhs = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()))); auto cs_value = (cs_old - cs_rhs); v_y = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num_64954; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_y; auto cs_rhs = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); auto cs_value = (cs_old - cs_rhs); v_y = cs_value; return cs_value; }());
}
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = cs_this; pls::cs::String cs_arg1 = v_str; float cs_arg2 = v_x; float cs_arg3 = v_y; float cs_arg4 = v_width; float cs_arg5 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetColor(); }()); std::int32_t cs_arg7 = pls::kairo::Graphics::lineSpacing_; std::int32_t cs_arg8 = v_anchor; cs_393aa8407173c5cb(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
if (v_num3_65319) {
([&]() -> void { pls::kairo::Font::UnlockLocalizeSetting(); }());
}
if (([&]() -> bool { auto cs_left = v_num2_65034; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_font(); }())); std::int32_t cs_arg0 = v_num2_65034; auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.ui.Graphics.DrawText(System.String,System.Single,System.Single,System.Single,System.Int32)
void cs_3a532227458b89c6(pls::cs::Ref<pls::kairo::Graphics> cs_this,pls::cs::String v_str,float v_x,float v_y,float v_width,std::int32_t v_anchor) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(cs_this); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::String cs_arg1 = v_str; float cs_arg2 = v_x; float cs_arg3 = v_y; float cs_arg4 = v_width; std::int32_t cs_arg5 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7ae33d7210848539(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:kairo.unity.ui.Graphics.GetColorOfName(System.Int32)
std::int32_t cs_ca48ee9e5dbe6d98(std::int32_t v_name) {
return v_name;
}
// M:kairo.unity.ui.Graphics.GetLineSpace
std::int32_t cs_734e0f1de4f940e6() {
return pls::kairo::Graphics::lineSpacing_;
}
// M:kairo.unity.ui.IApplication.GetBattery
std::int32_t cs_35fe07f2b79ae9d6(pls::cs::Ref<pls::kairo::IApplication> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int32_t> { return pls::kairo::native_battery_info(); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
}
}
// M:kairo.unity.ui.IApplication.IsBatteryCharging
bool cs_abcd346a5a41f570(pls::cs::Ref<pls::kairo::IApplication> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int32_t> { return pls::kairo::native_battery_info(); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }());
}
}
// M:kairo.unity.ui.Image.GetAreaSize(System.Byte[])
pls::cs::Array<std::int32_t> cs_4821dc8d620fb368(pls::cs::Array<std::uint8_t> v_data) {
pls::cs::Array<std::int32_t> v_array_27155 = pls::kairo::Image::getAreaSize_result;
([&]() { auto cs_target = v_array_27155; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = (([&]() { auto cs_target = v_array_27155; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::cs::String v_fileFormat_27220 = ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return cs_cc8b6c2700fa40bd(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_fileFormat_27220; auto cs_right = pls::cs::String(std::u16string(u"\x0067" u"\x0069" u"\x0066" u"",3)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_array_27155; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_27155; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if (([&]() -> bool { auto cs_left = v_fileFormat_27220; auto cs_right = pls::cs::String(std::u16string(u"\x0070" u"\x006e" u"\x0067" u"",3)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_array_27155; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x13ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); return (cs_left | cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_27155; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x15ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x17ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); return (cs_left | cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if (([&]() -> bool { auto cs_left = v_fileFormat_27220; auto cs_right = pls::cs::String(std::u16string(u"\x006a" u"\x0070" u"\x0067" u"",3)); return (cs_left == cs_right); }())) {
{
std::int32_t v_num_27711 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
while (true) {
std::int32_t v_num2_27752 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_27711; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_27711; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left | cs_right); }());
([&]() { auto cs_old = v_num_27711; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_27711 = cs_value; return cs_value; }());
std::int32_t v_num3_27821 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_27711; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_27711; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left | cs_right); }());
if (([&]() -> bool { auto cs_left = v_num2_27752; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffc0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_array_27155; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_27711; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_27711; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left | cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_27155; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_27711; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_27711; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left | cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
break;
}
([&]() { auto cs_old = v_num_27711; auto cs_rhs = v_num3_27821; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_27711 = cs_value; return cs_value; }());
}
}
}
return v_array_27155;
}
// M:kairo.unity.ui.Image.GetFileFormat(System.Byte[])
pls::cs::String cs_cc8b6c2700fa40bd(pls::cs::Array<std::uint8_t> v_data) {
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
return pls::cs::String{};
}
if ((((([&]() -> bool { auto cs_left = (v_data).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x47ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x49ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x46ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x0067" u"\x0069" u"\x0066" u"",3));
}
if (((((((((([&]() -> bool { auto cs_left = (v_data).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x89ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4eull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x47ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1aull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x0070" u"\x006e" u"\x0067" u"",3));
}
if (((([&]() -> bool { auto cs_left = (v_data).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd8ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x006a" u"\x0070" u"\x0067" u"",3));
}
return pls::cs::String{};
}
// M:kairo.unity.ui.Image.GetPaletteInfo(System.Byte[])
pls::cs::Array<std::int32_t> cs_63aaf001afdbc743(pls::cs::Array<std::uint8_t> v_data) {
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
return pls::cs::Array<std::int32_t>{};
}
pls::cs::String v_fileFormat_26174 = ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return cs_cc8b6c2700fa40bd(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_fileFormat_26174; auto cs_right = pls::cs::String(std::u16string(u"\x0067" u"\x0069" u"\x0066" u"",3)); return (cs_left == cs_right); }())) {
std::uint8_t v_b_26250 = ([&]() { auto cs_array = v_data; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_b_26250); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = pls::kairo::Image::getPaletteInfo_result; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = pls::kairo::Image::getPaletteInfo_result; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_b_26250); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_7681d78b1e4df50b(cs_arg0,cs_arg1); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return pls::kairo::Image::getPaletteInfo_result;
}
std::int32_t v_num_26447 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull));
while (([&]() -> bool { auto cs_left = v_num_26447; auto cs_right = (v_data).length(); return (cs_left < cs_right); }())) {
std::int32_t v_num2_26502 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = v_num_26447; return cs_array.get_Item(cs_index); }()));
if (([&]() -> bool { auto cs_left = v_num2_26502; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2cull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_data; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_26447; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); v_b_26250 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_b_26250); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = pls::kairo::Image::getPaletteInfo_result; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num_26447; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = pls::kairo::Image::getPaletteInfo_result; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_b_26250); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_7681d78b1e4df50b(cs_arg0,cs_arg1); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return pls::kairo::Image::getPaletteInfo_result;
}
return pls::cs::Array<std::int32_t>{};
}
if (([&]() -> bool { auto cs_left = v_num2_26502; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x21ull)); return (cs_left != cs_right); }())) {
break;
}
([&]() { auto cs_old = v_num_26447; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_26447; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_26447 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = v_num_26447; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_num_26447; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_26447 = cs_new; return cs_old; }());
}
}
} else if (([&]() -> bool { auto cs_left = v_fileFormat_26174; auto cs_right = pls::cs::String(std::u16string(u"\x0070" u"\x006e" u"\x0067" u"",3)); return (cs_left == cs_right); }())) {
if (pls::generated::cs_b0827224162a4f93()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0067" u"\x0065" u"\x0074" u"\x0050" u"\x0061" u"\x006c" u"\x0065" u"\x0074" u"\x0074" u"\x0065" u"\x0049" u"\x006e" u"\x0066" u"\x006f" u"\x003a" u"\x0050" u"\x004e" u"\x0047" u"\x306f" u"\x5bfe" u"\x5fdc" u"\x3057" u"\x3066" u"\x3044" u"\x307e" u"\x305b" u"\x3093" u"",27)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
return pls::cs::Array<std::int32_t>{};
}
return pls::cs::Array<std::int32_t>{};
}
// M:kairo.unity.ui.Image.LoadOptimize(java.io.InputStream,kairo.unity.ui.Image[])
void cs_66142c097094c9e8(pls::cs::Ref<pls::kairo::Image> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> v_images) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_images; pls::game::cs_require(cs_target)->images_ = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int8_t>{}; pls::game::cs_require(cs_target)->optimizeSeb_ = cs_value; return cs_value; }());
std::int32_t v_num_8746 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_8765 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector2_8798 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }())); pls::game::cs_require(cs_target)->optimizeBlockWidth_ = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeBlockWidth_; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int16_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); pls::game::cs_require(cs_target)->optimizeBlockHeight_ = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->optimizePass_ = cs_value; return cs_value; }());
std::int32_t v_num2_8977 = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }()));
pls::cs::Array<pls::cs::Array<std::int16_t>> v_array_9027 = pls::cs::Array<pls::cs::Array<std::int16_t>>::make(v_num2_8977);
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int8_t>::make(([&]() -> std::int32_t { auto cs_left = v_num2_8977; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->optimizeSeb_ = cs_value; return cs_value; }());
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector3_9105 = pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>{};
for (std::int32_t v_i_9134 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_9134; auto cs_right = (v_array_9027).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_9134; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_9134 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }())); v_num2_8977 = cs_value; return cs_value; }());
bool v_flag_9221 = false;
pls::cs::Array<std::int16_t> v_array2_9248 = pls::cs::Array<std::int16_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)));
for (std::int32_t v_j_9285 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_9285; auto cs_right = (v_array2_9248).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_9285; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_9285 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_9248; auto cs_index = v_j_9285; auto cs_value = pls::cs::cast_integral<std::int16_t>((([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array2_9248; auto cs_index = v_j_9285; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = true; v_flag_9221 = cs_value; return cs_value; }());
}
}
if ((v_flag_9221 || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array2_9248; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left == cs_right); }()))) {
if (([&]() { pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>> cs_left = v_vector3_9105; pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_right = pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>{}; return pls::generated::cs_391891c911ef6b0a(cs_left,cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }()); v_vector3_9105 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector3_9105); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array2_9248); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeSeb_; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_9134; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeSeb_; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_9134; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector3_9105); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
for (std::int32_t v_k_9742 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_9742; auto cs_right = (v_array2_9248).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_9742; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_9742 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeSeb_; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_9134; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_k_9742; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array2_9248; auto cs_index = v_k_9742; return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
([&]() { auto cs_target = v_array_9027; auto cs_index = v_i_9134; auto cs_value = pls::cs::Array<std::int16_t>::make(([&]() -> std::int32_t { auto cs_left = v_num2_8977; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::mul_i32(cs_left,cs_right); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
for (std::int32_t v_l_9898 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_9898; auto cs_right = (([&]() { auto cs_array = v_array_9027; auto cs_index = v_i_9134; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_9898; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_9898 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = v_array_9027; auto cs_index = v_i_9134; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_9898; auto cs_value = ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizePass_; }()); auto cs_right = v_num2_8977; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_num2_8977; pls::game::cs_require(cs_target)->optimizePass_ = cs_value; return cs_value; }());
}
}
if (([&]() { pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>> cs_left = v_vector3_9105; pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_right = pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>{}; return pls::generated::cs_9739d0439e7c2868(cs_left,cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int16_t>::make(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector3_9105); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->optimizeSebEx_ = cs_value; return cs_value; }());
for (std::int32_t v_m_10172 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_10172; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector3_9105); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_10172; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_10172 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::cs::unbox<pls::cs::Array<std::int16_t>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector3_9105); std::int32_t cs_arg0 = v_m_10172; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()))); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeSebEx_; }())); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_m_10172; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int16_t>::make(([&]() -> std::int32_t { auto cs_left = (v_array_9027).length(); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizePass_; }()); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->optimizeAccessL_ = cs_value; return cs_value; }());
for (std::int32_t v_n_10386 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_n_10386; auto cs_right = (v_array_9027).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_10386; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_10386 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int16_t> v_array3_10435 = ([&]() { auto cs_array = v_array_9027; auto cs_index = v_n_10386; return cs_array.get_Item(cs_index); }());
std::int32_t v_num3_10463 = std::int32_t{};
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num3_10463 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_num3_10463; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizePass_; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num3_10463; auto cs_new = pls::cs::add_i32(cs_old,1); v_num3_10463 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeAccessL_; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_n_10386; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizePass_; }()); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num3_10463; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int16_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
std::int32_t v_num4_10593 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num5_10612 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while (([&]() -> bool { auto cs_left = v_num4_10593; auto cs_right = (v_array3_10435).length(); return (cs_left < cs_right); }())) {
pls::cs::Array<std::uint8_t> v_array4_10676 = pls::cs::Array<std::uint8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)));
for (std::int32_t v_num6_10713 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num6_10713; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num6_10713; auto cs_new = pls::cs::add_i32(cs_old,1); v_num6_10713 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array4_10676; auto cs_index = v_num6_10713; auto cs_value = pls::cs::cast_integral<std::uint8_t>(([&]() { auto cs_array = v_array3_10435; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num4_10593; auto cs_right = v_num6_10713; return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
std::int16_t v_num7_10818 = pls::cs::cast_integral<std::int16_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)));
if (((((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_10676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array3_10435; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num4_10593; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_10676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array3_10435; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num4_10593; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_10676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array3_10435; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num4_10593; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_10676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array3_10435; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num4_10593; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_10676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array3_10435; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num4_10593; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_10676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array3_10435; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num4_10593; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_10676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array3_10435; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num4_10593; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector2_8798); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array3_10435); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int16_t>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector2_8798); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()))); v_num7_10818 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_8746; auto cs_right = pls::cs::cast_integral<std::int32_t>(v_num7_10818); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(v_num7_10818); v_num_8746 = cs_value; return cs_value; }());
}
std::uint16_t v_num8_11283 = pls::cs::cast_integral<std::uint16_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8000ull)));
([&]() { auto cs_old = v_num7_10818; auto cs_rhs = pls::cs::cast_integral<std::int16_t>(v_num8_11283); auto cs_value = (cs_old | cs_rhs); v_num7_10818 = cs_value; return cs_value; }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_8765); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array4_10676); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int16_t>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_8765); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()))); v_num7_10818 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_8746; auto cs_right = pls::cs::cast_integral<std::int32_t>(v_num7_10818); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(v_num7_10818); v_num_8746 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeAccessL_; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_n_10386; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizePass_; }()); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num5_10612; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = v_num7_10818;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_old = v_num4_10593; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num4_10593 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num5_10612; auto cs_new = pls::cs::add_i32(cs_old,1); v_num5_10612 = cs_new; return cs_old; }());
}
([&]() { auto cs_target = v_array_9027; auto cs_index = v_n_10386; auto cs_value = pls::cs::Array<std::int16_t>{};cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
} else {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }())); pls::game::cs_require(cs_target)->optimizeBlockHeight_ = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }())); pls::game::cs_require(cs_target)->optimizeWidthNum_ = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }())); pls::game::cs_require(cs_target)->optimizeHeightNum_ = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->optimizePass_ = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->optimizeBlockWidth_; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_value = (cs_old & cs_rhs); pls::game::cs_require(cs_target)->optimizeBlockWidth_ = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->optimizeBlockHeight_; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_value = (cs_old & cs_rhs); pls::game::cs_require(cs_target)->optimizeBlockHeight_ = cs_value; return cs_value; }());
pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int16_t>>> v_array5_11905 = ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int16_t>>> { pls::cs::Array<std::int32_t> cs_arg0 = ([&](){auto cs_initial_array_372=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_372.at(0)=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeHeightNum_; }());cs_initial_array_372.at(1)=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeWidthNum_; }());return cs_initial_array_372;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int16_t>>>>(cs_arg0); }());
for (std::int32_t v_num9_12011 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num9_12011; auto cs_right = (v_array5_11905).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num9_12011; auto cs_new = pls::cs::add_i32(cs_old,1); v_num9_12011 = cs_new; return cs_old; }())) {
for (std::int32_t v_num10_12071 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num10_12071; auto cs_right = (([&]() { auto cs_array = v_array5_11905; auto cs_index = v_num9_12011; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num10_12071; auto cs_new = pls::cs::add_i32(cs_old,1); v_num10_12071 = cs_new; return cs_old; }())) {
std::int32_t v_num11_12137 = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }()));
([&]() { auto cs_target = ([&]() { auto cs_array = v_array5_11905; auto cs_index = v_num9_12011; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num10_12071; auto cs_value = pls::cs::Array<std::int16_t>::make(([&]() -> std::int32_t { auto cs_left = v_num11_12137; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::mul_i32(cs_left,cs_right); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::cs::Array<std::int16_t> v_array6_12238 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array5_11905; auto cs_index = v_num9_12011; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num10_12071; return cs_array.get_Item(cs_index); }());
for (std::int32_t v_num12_12283 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num12_12283; auto cs_right = (v_array6_12238).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num12_12283; auto cs_new = pls::cs::add_i32(cs_old,1); v_num12_12283 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array6_12238; auto cs_index = v_num12_12283; auto cs_value = ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizePass_; }()); auto cs_right = v_num11_12137; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_num11_12137; pls::game::cs_require(cs_target)->optimizePass_ = cs_value; return cs_value; }());
}
}
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int16_t>::make(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeWidthNum_; }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeHeightNum_; }()); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizePass_; }()); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->optimizeAccessL_ = cs_value; return cs_value; }());
for (std::int32_t v_num13_12590 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num13_12590; auto cs_right = (v_array5_11905).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num13_12590; auto cs_new = pls::cs::add_i32(cs_old,1); v_num13_12590 = cs_new; return cs_old; }())) {
for (std::int32_t v_num14_12653 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num14_12653; auto cs_right = (([&]() { auto cs_array = v_array5_11905; auto cs_index = v_num13_12590; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num14_12653; auto cs_new = pls::cs::add_i32(cs_old,1); v_num14_12653 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int16_t> v_array7_12724 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array5_11905; auto cs_index = v_num13_12590; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num14_12653; return cs_array.get_Item(cs_index); }());
std::int32_t v_num15_12765 = std::int32_t{};
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num15_12765 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_num15_12765; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizePass_; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num15_12765; auto cs_new = pls::cs::add_i32(cs_old,1); v_num15_12765 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeAccessL_; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num13_12590; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeWidthNum_; }()); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num14_12653; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizePass_; }()); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num15_12765; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int16_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
std::int32_t v_num16_12938 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num17_12959 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while (([&]() -> bool { auto cs_left = v_num16_12938; auto cs_right = (v_array7_12724).length(); return (cs_left < cs_right); }())) {
pls::cs::Array<std::int8_t> v_array8_13029 = pls::cs::Array<std::int8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)));
for (std::int32_t v_num18_13068 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num18_13068; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num18_13068; auto cs_new = pls::cs::add_i32(cs_old,1); v_num18_13068 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array8_13029; auto cs_index = v_num18_13068; auto cs_value = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array7_12724; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num16_12938; auto cs_right = v_num18_13068; return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
std::int16_t v_num19_13184 = pls::cs::cast_integral<std::int16_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)));
if (((((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array8_13029; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array7_12724; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num16_12938; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array8_13029; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array7_12724; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num16_12938; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array8_13029; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array7_12724; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num16_12938; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array8_13029; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array7_12724; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num16_12938; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array8_13029; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array7_12724; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num16_12938; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array8_13029; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array7_12724; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num16_12938; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array8_13029; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array7_12724; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num16_12938; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left != cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector2_8798); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array7_12724); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int16_t>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector2_8798); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()))); v_num19_13184 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_8746; auto cs_right = pls::cs::cast_integral<std::int32_t>(v_num19_13184); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(v_num19_13184); v_num_8746 = cs_value; return cs_value; }());
}
std::uint16_t v_num20_13669 = pls::cs::cast_integral<std::uint16_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8000ull)));
([&]() { auto cs_old = v_num19_13184; auto cs_rhs = pls::cs::cast_integral<std::int16_t>(v_num20_13669); auto cs_value = (cs_old | cs_rhs); v_num19_13184 = cs_value; return cs_value; }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_8765); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array8_13029); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int16_t>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_8765); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()))); v_num19_13184 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_8746; auto cs_right = pls::cs::cast_integral<std::int32_t>(v_num19_13184); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(v_num19_13184); v_num_8746 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeAccessL_; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num13_12590; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeWidthNum_; }()); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num14_12653; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizePass_; }()); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num17_12959; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = v_num19_13184;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_old = v_num16_12938; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num16_12938 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num17_12959; auto cs_new = pls::cs::add_i32(cs_old,1); v_num17_12959 = cs_new; return cs_old; }());
}
([&]() { auto cs_target = ([&]() { auto cs_array = v_array5_11905; auto cs_index = v_num13_12590; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num14_12653; auto cs_value = pls::cs::Array<std::int16_t>{};cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
if (([&]() -> bool { auto cs_left = v_num_8746; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7full)); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int8_t>::make((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeAccessL_; }())).length()); pls::game::cs_require(cs_target)->optimizeAccess_ = cs_value; return cs_value; }());
for (std::int32_t v_num21_14184 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num21_14184; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeAccess_; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num21_14184; auto cs_new = pls::cs::add_i32(cs_old,1); v_num21_14184 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeAccessL_; }()); auto cs_index = v_num21_14184; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeAccess_; }()); auto cs_index = v_num21_14184; auto cs_value = pls::cs::cast_integral<std::int8_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
continue;
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeAccess_; }()); auto cs_index = v_num21_14184; auto cs_value = pls::cs::cast_integral<std::int8_t>((([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeAccessL_; }()); auto cs_index = v_num21_14184; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7full)); return (cs_left & cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeAccessL_; }()); auto cs_index = v_num21_14184; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8000ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
std::uint8_t v_b_14486 = pls::cs::cast_integral<std::uint8_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)));
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeAccess_; }()); auto cs_index = v_num21_14184; auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int8_t>(v_b_14486); auto cs_value = (cs_old | cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int16_t>{}; pls::game::cs_require(cs_target)->optimizeAccessL_ = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_8765); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int8_t>::make(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_8765); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->optimize_ = cs_value; return cs_value; }());
for (std::int32_t v_num22_14674 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num22_14674; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_8765); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num22_14674; auto cs_new = pls::cs::add_i32(cs_old,1); v_num22_14674 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::cs::unbox<pls::cs::Array<std::int8_t>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_8765); std::int32_t cs_arg0 = v_num22_14674; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()))); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimize_; }())); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num22_14674; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector2_8798); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int16_t>::make(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector2_8798); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->optimizeEx_ = cs_value; return cs_value; }());
for (std::int32_t v_num23_14914 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num23_14914; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector2_8798); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num23_14914; auto cs_new = pls::cs::add_i32(cs_old,1); v_num23_14914 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::cs::unbox<pls::cs::Array<std::int16_t>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector2_8798); std::int32_t cs_arg0 = v_num23_14914; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()))); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeEx_; }())); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num23_14914; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
}
// M:kairo.unity.ui.Image.LoadOptimize(System.Byte[],kairo.unity.ui.Image[])
void cs_8e928637488e2491(pls::cs::Ref<pls::kairo::Image> cs_this,pls::cs::Array<std::uint8_t> v_data,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> v_images) { if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_15153 = pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{};
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_15153 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(cs_this); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_15153; pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg1 = v_images; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_66142c097094c9e8(cs_receiver,cs_arg0,cs_arg1); }());
} }, [&]() {
([&]() -> void { auto cs_conditional = v_byteArrayInputStream_15153; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }()); }());
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{}; v_byteArrayInputStream_15153 = cs_value; return cs_value; }());
});
}
}
// M:kairo.unity.ui.Image.OverwritePaletteData(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32)
pls::cs::Array<std::uint8_t> cs_378981154fa3f09f(pls::cs::Array<std::uint8_t> v_image,pls::cs::Array<std::uint8_t> v_palette,std::int32_t v_imageOffset,std::int32_t v_paletteOffset,std::int32_t v_colors) {
if ((([&]() { auto cs_left = pls::cs::box(v_palette); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }()) || ([&]() { auto cs_left = pls::cs::box(v_image); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }()))) {
return v_image;
}
pls::cs::Array<std::int32_t> v_paletteInfo_25633 = ([&]() -> pls::cs::Array<std::int32_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_image; return cs_63aaf001afdbc743(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_paletteInfo_25633); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
return v_image;
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_imageOffset; auto cs_right = v_colors; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_palette).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (v_palette).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_imageOffset; return pls::cs::sub_i32(cs_left,cs_right); }()); v_colors = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_paletteOffset; auto cs_right = v_colors; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_paletteInfo_25633; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paletteInfo_25633; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_paletteOffset; return pls::cs::sub_i32(cs_left,cs_right); }()); v_colors = cs_value; return cs_value; }());
}
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_palette); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_paletteOffset; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_image); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paletteInfo_25633; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_imageOffset; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_colors; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
return v_image;
}
// M:kairo.unity.ui.Image.OverwritePaletteData(System.Byte[],System.Byte[])
pls::cs::Array<std::uint8_t> cs_46f5e10bd3c97a4c(pls::cs::Array<std::uint8_t> v_image,pls::cs::Array<std::uint8_t> v_palette) {
if ((([&]() { auto cs_left = pls::cs::box(v_palette); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }()) || ([&]() { auto cs_left = pls::cs::box(v_image); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }()))) {
return v_image;
}
return ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_image; pls::cs::Array<std::uint8_t> cs_arg1 = v_palette; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = (v_palette).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return cs_378981154fa3f09f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
// M:kairo.unity.ui.Matrix.#ctor
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_d1ef6eff6523bffb() { cs_init_c8e1f3d3f96670c6();
{ auto cs_this = pls::cs::make_ref<cs_c8e1f3d3f96670c6>(); cs_d1ef6eff6523bffb_init(cs_this); return cs_this; }
}
void cs_d1ef6eff6523bffb_init(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this) {
cs_this->cs_d48b2c060366a193 = pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)));
cs_this->cs_00f172d916ac1eda = pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)));
cs_this->cs_5911c1aef793c754 = pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)));
{
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6d52e21bbbc1b83b(cs_receiver); }());
}
}
// M:kairo.unity.ui.Matrix.Equals(System.Object)
bool cs_e4546eba7825f981(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() { auto cs_left = pls::cs::box(v_obj); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && pls::game::cs_is<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(pls::cs::box(v_obj)))) {
pls::cs::Ref<cs_c8e1f3d3f96670c6> v_matrix_7374 = pls::cs::unbox<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_obj);
for (std::int32_t v_i_7409 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7409; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7409; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7409 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = v_i_7409; return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_matrix_7374; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = v_i_7409; return cs_array.get_Item(cs_index); }()); return (cs_left != cs_right); }())) {
return false;
}
}
}
return ([&]() { auto cs_receiver = pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this)); auto cs_argument = v_obj; return pls::game::cs_require(cs_receiver)->pls::cs::Object::Equals(cs_argument); }());
}
}
}
// M:kairo.unity.ui.Matrix.GetHashCode
std::int32_t cs_f80b20705650c56f(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:kairo.unity.ui.Matrix.GetValues(System.Single[])
void cs_ca00577a54dd61a5(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,pls::cs::Array<float> v_matrix) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_matrix); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (v_matrix).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
// M:kairo.unity.ui.Matrix.IsIdentity
bool cs_46250df91aacb52a(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_1148 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1148; auto cs_right = (cs_973a19e093bc0fda()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1148; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1148 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = cs_973a19e093bc0fda(); auto cs_index = v_i_1148; return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = v_i_1148; return cs_array.get_Item(cs_index); }()); return (cs_left != cs_right); }())) {
return false;
}
}
return true;
}
}
}
// M:kairo.unity.ui.Matrix.MapPoints(System.Single@,System.Single@)
void cs_76f083d6ddd878de(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float& v_x,float& v_y) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_num_6787 = v_x;
float v_num2_6805 = v_y;
([&]() { auto cs_value = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num_6787; return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num2_6805; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); return (cs_left + cs_right); }()); v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num_6787; return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num2_6805; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); return (cs_left + cs_right); }()); v_y = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.Matrix.PostConcat(System.Single[])
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_b0fd4c69e3e79001(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,pls::cs::Array<float> v_transform) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(v_transform); auto cs_right = pls::cs::box(pls::cs::Array<float>{}); return cs_left == cs_right; }())) {
throw pls::cs::NullReferenceException();
}
std::int32_t v_j_1422 = std::int32_t{}, v_k_1425 = std::int32_t{}, v_l_1428 = std::int32_t{};
for (std::int32_t v_i_1443 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1443; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_00f172d916ac1eda; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1443; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1443 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_00f172d916ac1eda; }()); auto cs_index = v_i_1443; auto cs_value = pls::game::cs_f32(0x00000000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_j_1422 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_j_1422; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1422; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1422 = cs_new; return cs_old; }())) {
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_k_1425 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_k_1425; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_1425; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_1425 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_00f172d916ac1eda; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_j_1422; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_k_1425; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::game::cs_f32(0x00000000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_l_1428 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_l_1428; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_1428; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_1428 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_00f172d916ac1eda; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_j_1422; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_k_1425; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_j_1422; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_l_1428; return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_transform; auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_l_1428; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_k_1425; return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); pls::cs::Array<float> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_00f172d916ac1eda; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ae09ad7913e5d182(cs_receiver,cs_arg0); }());
return cs_this;
}
}
}
// M:kairo.unity.ui.Matrix.PostRotate(System.Single,System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_dfcfe6d3804d0059(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_angle,float v_px,float v_py) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_arg0 = v_angle; return std::isnan(cs_arg0); }())) {
throw pls::cs::ArgumentException();
}
if ((([&]() -> bool { auto cs_left = v_px; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_py; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()))) {
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = (-(v_px)); float cs_arg1 = (-(v_py)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b097c9e7de4a816(cs_receiver,cs_arg0,cs_arg1); }());
}
float v_single_2880 = ([&]() -> float { float cs_arg0 = v_angle; return cs_87ef3d6d0d364edc(cs_arg0); }());
float v_single1_2919 = ([&]() -> float { float cs_arg0 = v_angle; return cs_82e90932e565633e(cs_arg0); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_single1_2919;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_single_2880;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::game::cs_f32(0x00000000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = (-(v_single_2880));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = v_single1_2919;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = pls::game::cs_f32(0x00000000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = pls::game::cs_f32(0x00000000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = pls::game::cs_f32(0x00000000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = pls::game::cs_f32(0x3f800000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); pls::cs::Array<float> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b0fd4c69e3e79001(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = v_px; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_py; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()))) {
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = v_px; float cs_arg1 = v_py; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b097c9e7de4a816(cs_receiver,cs_arg0,cs_arg1); }());
}
return cs_this;
}
}
}
// M:kairo.unity.ui.Matrix.PostScale(System.Single,System.Single,System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_abaf734dcf45a64b(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_x,float v_y,float v_px,float v_py) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_arg0 = v_x; return std::isnan(cs_arg0); }()) || ([&]() -> bool { auto cs_arg0 = v_y; return std::isnan(cs_arg0); }()))) {
throw pls::cs::ArgumentException();
}
if ((([&]() -> bool { auto cs_left = v_px; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_py; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()))) {
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = (-(v_px)); float cs_arg1 = (-(v_py)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b097c9e7de4a816(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = v_x; auto cs_value = (cs_old * cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = v_y; auto cs_value = (cs_old * cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = v_x; auto cs_value = (cs_old * cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = v_y; auto cs_value = (cs_old * cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = v_x; auto cs_value = (cs_old * cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = v_y; auto cs_value = (cs_old * cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
if ((([&]() -> bool { auto cs_left = v_px; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_py; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()))) {
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = v_px; float cs_arg1 = v_py; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b097c9e7de4a816(cs_receiver,cs_arg0,cs_arg1); }());
}
return cs_this;
}
}
}
// M:kairo.unity.ui.Matrix.PostTranslate(System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_2b097c9e7de4a816(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_x,float v_y) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_arg0 = v_x; return std::isnan(cs_arg0); }()) || ([&]() -> bool { auto cs_arg0 = v_y; return std::isnan(cs_arg0); }()))) {
throw pls::cs::ArgumentException();
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_x; return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_y; return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_x; return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_y; return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_x; return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_y; return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
return cs_this;
}
}
}
// M:kairo.unity.ui.Matrix.Reset
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_6d52e21bbbc1b83b(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(cs_973a19e093bc0fda()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (cs_973a19e093bc0fda()).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
return cs_this;
}
}
}
// M:kairo.unity.ui.Matrix.RotateTemporary(System.Single,System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_54df3686b06bf8e3(float v_angle,float v_px,float v_py) { cs_init_c8e1f3d3f96670c6();
{
return ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_70333ca9b184d4ad()); float cs_arg0 = v_angle; float cs_arg1 = v_px; float cs_arg2 = v_py; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d59f8e10788ab6cd(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
// M:kairo.unity.ui.Matrix.ScaleTemporary(System.Single,System.Single,System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_e8ceb82625f5a10e(float v_x,float v_y,float v_px,float v_py) { cs_init_c8e1f3d3f96670c6();
{
return ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_abf3d394789f023c()); float cs_arg0 = v_x; float cs_arg1 = v_y; float cs_arg2 = v_px; float cs_arg3 = v_py; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_097036b885de5d99(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:kairo.unity.ui.Matrix.SetRotate(System.Single,System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_d59f8e10788ab6cd(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_angle,float v_px,float v_py) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6d52e21bbbc1b83b(cs_receiver); }());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = v_angle; float cs_arg1 = v_px; float cs_arg2 = v_py; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_dfcfe6d3804d0059(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
return cs_this;
}
}
}
// M:kairo.unity.ui.Matrix.SetScale(System.Single,System.Single,System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_097036b885de5d99(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_x,float v_y,float v_px,float v_py) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6d52e21bbbc1b83b(cs_receiver); }());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = v_x; float cs_arg1 = v_y; float cs_arg2 = v_px; float cs_arg3 = v_py; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_abaf734dcf45a64b(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
return cs_this;
}
}
}
// M:kairo.unity.ui.Matrix.SetTranslate(System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_54ed94bf2309b437(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_x,float v_y) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6d52e21bbbc1b83b(cs_receiver); }());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = v_x; float cs_arg1 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b097c9e7de4a816(cs_receiver,cs_arg0,cs_arg1); }());
return cs_this;
}
}
}
// M:kairo.unity.ui.Matrix.SetValues(System.Single[])
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_ae09ad7913e5d182(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,pls::cs::Array<float> v_matrix) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_matrix); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (v_matrix).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
return cs_this;
}
}
}
// M:kairo.unity.ui.Matrix.TranslateTemporary(System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_726b189f0fed2c17(float v_x,float v_y) { cs_init_c8e1f3d3f96670c6();
{
return ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_b377fd1b9ba4be2d()); float cs_arg0 = v_x; float cs_arg1 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_54ed94bf2309b437(cs_receiver,cs_arg0,cs_arg1); }());
}
}
// M:kairo.unity.ui.Pictograph.get_Frame
std::int32_t cs_421aa514c9c5d059(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this) { cs_init_ec6b992b38927bb3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_1ba2c52a921cb7ec;}
}
}
// M:kairo.unity.ui.Pictograph.get_Margin
std::int32_t cs_f42f663f078ddc9a(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this) { cs_init_ec6b992b38927bb3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_89c1dc1eeea9127f;}
}
}
// M:kairo.unity.ui.Pictograph.get_Seb
pls::cs::Ref<cs_9cade6927d6e0bf3> cs_a7b9da8fd8e2e224(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this) { cs_init_ec6b992b38927bb3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_619bf37d2a3827ee;}
}
}
// M:kairo.unity.ui.Pictograph.get_Transform
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_f7a1a6d38de745a1(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this) { cs_init_ec6b992b38927bb3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_eabfe8b32a83efad;}
}
}
// M:kairo.unity.ui.Pictograph.get_Wait
std::int32_t cs_4d3996d16d3c5e25(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this) { cs_init_ec6b992b38927bb3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_df0d978c8b9bee8d;}
}
}
// M:kairo.unity.ui.Pictograph.get_X
std::int32_t cs_9e317dd489a1ce8e(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this) { cs_init_ec6b992b38927bb3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_ac10bd1fd4407364;}
}
}
// M:kairo.unity.ui.Pictograph.get_Y
std::int32_t cs_18bd61ecb1024b36(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this) { cs_init_ec6b992b38927bb3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_bbec3199a0864e22;}
}
}
// M:kairo.unity.ui.ResourceManager._init
void cs_91c7f060c04f2ce6(pls::cs::Ref<cs_b728593e3dcffe31> cs_this) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2ad8afd403d5dfb4(cs_receiver,cs_arg0); }());
}
}
}
// M:kairo.unity.ui.ResourceManager._init(System.Boolean)
void cs_2ad8afd403d5dfb4(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,bool v_keepFileList) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); pls::game::cs_require(cs_target)->cs_0e36fb5b2228e5c2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_9cade6927d6e0bf3>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); pls::game::cs_require(cs_target)->cs_b957309a0939d3d1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<pls::kairo::SoundBase>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); pls::game::cs_require(cs_target)->cs_d034fe7d69888987 = cs_value; return cs_value; }());
if ((!(v_keepFileList))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::String>> { pls::cs::Array<std::int32_t> cs_arg0 = ([&](){auto cs_initial_array_360=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_360.at(0)=(cs_5e2555ff8a760a8f()).length();cs_initial_array_360.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));return cs_initial_array_360;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<pls::cs::String>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_6a7748b1a6612d58 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_d4e23024d8a558a1 = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_3fe3f9fb934245ca = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_670c579b3496636a = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.ResourceManager.#ctor(System.String,System.String,System.String,System.String,System.String,System.String,System.String)
pls::cs::Ref<cs_b728593e3dcffe31> cs_63b2bd45669dab69(pls::cs::String v_imgList,pls::cs::String v_sebList,pls::cs::String v_sndList,pls::cs::String v_figList,pls::cs::String v_actList,pls::cs::String v_texList,pls::cs::String v_grpList) { cs_init_b728593e3dcffe31();
{ auto cs_this = pls::cs::make_ref<cs_b728593e3dcffe31>(); cs_63b2bd45669dab69_init(cs_this,v_imgList,v_sebList,v_sndList,v_figList,v_actList,v_texList,v_grpList); return cs_this; }
}
void cs_63b2bd45669dab69_init(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::String v_imgList,pls::cs::String v_sebList,pls::cs::String v_sndList,pls::cs::String v_figList,pls::cs::String v_actList,pls::cs::String v_texList,pls::cs::String v_grpList) {
cs_this->cs_b2b7060a2ecd4629 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
cs_this->cs_f9b013b52e784f8d = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
cs_this->cs_e9b5a40492d552a9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull));
{
([&]() { auto cs_value = pls::cs::Array<pls::cs::String>::make((cs_5e2555ff8a760a8f()).length()); cs_bd0c9538929cdd1c() = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(cs_5e2555ff8a760a8f()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(cs_bd0c9538929cdd1c()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (cs_5e2555ff8a760a8f()).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
if (([&]() { auto cs_left = pls::cs::box(v_imgList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_imgList;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() { auto cs_left = pls::cs::box(v_sebList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_sebList;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() { auto cs_left = pls::cs::box(v_sndList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_sndList;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() { auto cs_left = pls::cs::box(v_figList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = v_figList;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() { auto cs_left = pls::cs::box(v_actList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = v_actList;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() { auto cs_left = pls::cs::box(v_texList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = v_texList;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() { auto cs_left = pls::cs::box(v_grpList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = v_grpList;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_91c7f060c04f2ce6(cs_receiver); }());
}
}
// M:kairo.unity.ui.ResourceManager.CheckFileEffective(System.String)
bool cs_87c6cb7c61cb9fce(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::String v_file) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_file; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
return false;
}
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_file; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005c" u"",1)); return pls::cs::culture_index_of(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_file; auto cs_arg1 = pls::cs::String(std::u16string(u"\x002f" u"",1)); return pls::cs::culture_index_of(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))) {
return (!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_670c579b3496636a; }())));
}
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_670c579b3496636a; }());
}
}
}
// M:kairo.unity.ui.ResourceManager.CloseJarCache
void cs_a5f9622df7c35c0c() { cs_init_b728593e3dcffe31();
{
if (([&]() -> bool { auto cs_left = (cs_6e1bce9006dd3621()).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return;
}
for (std::int32_t v_num_23593 = ([&]() -> std::int32_t { auto cs_left = (cs_6e1bce9006dd3621()).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_23593; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_23593; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_23593 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box((([&]() { auto cs_array = cs_6e1bce9006dd3621(); auto cs_index = v_num_23593; return cs_array.get_Item(cs_index); }())).cs_061de919f485a022); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>((([&]() { auto cs_array = cs_6e1bce9006dd3621(); auto cs_index = v_num_23593; return cs_array.get_Item(cs_index); }())).cs_061de919f485a022); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());
}
}
([&]() -> void { auto cs_receiver = cs_6e1bce9006dd3621(); cs_receiver.Clear(); }());
}
}
// M:kairo.unity.ui.ResourceManager.Dispose
void cs_c9cd9f49f64199fc(pls::cs::Ref<cs_b728593e3dcffe31> cs_this) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c04a7ac90db55ca6(cs_receiver,cs_arg0); }());
}
}
}
// M:kairo.unity.ui.ResourceManager.Dispose(System.Boolean)
void cs_c04a7ac90db55ca6(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,bool v_keepFileList) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_17889 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_17889; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_17889; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_17889 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_num_17889; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_num_17889; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_num_17889; auto cs_value = pls::cs::Ref<pls::kairo::SoundBase>{};cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (std::int32_t v_num2_18042 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num2_18042; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num2_18042; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_18042 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_num2_18042; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_num2_18042; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_713e673d446e8251(cs_receiver); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_num2_18042; auto cs_value = pls::cs::Ref<cs_9cade6927d6e0bf3>{};cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (std::int32_t v_num3_18193 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num3_18193; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num3_18193; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_18193 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num3_18193; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num3_18193; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num3_18193; auto cs_value = pls::cs::Ref<pls::kairo::Image>{};cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); bool cs_arg0 = v_keepFileList; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2ad8afd403d5dfb4(cs_receiver,cs_arg0); }());
}
}
}
// M:kairo.unity.ui.ResourceManager.DrawSeb(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32,System.Int32)
void cs_cd0885d0fd01b56f(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_seb,std::int32_t v_frame) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_old = v_frame; auto cs_rhs = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_seb; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_012842e8ba39224c(cs_receiver); }()); auto cs_value = pls::cs::mod_i32(cs_old,cs_rhs); v_frame = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_seb; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = v_x; float cs_arg2 = v_y; pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = v_frame; auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
// M:kairo.unity.ui.ResourceManager.DrawSeb(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void cs_bece04d9ec4c4353(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_seb) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_seb; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = v_x; float cs_arg2 = v_y; pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5e280cc6c7254fc3(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
// M:kairo.unity.ui.ResourceManager.get_YieldTime
std::int32_t cs_957abf979910fc61() { cs_init_b728593e3dcffe31();
{
return cs_97a973ae39209cad();
}
}
// M:kairo.unity.ui.ResourceManager.GetFileName(System.String)
pls::cs::String cs_174f6b80456cfd05(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::String v_file) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_17562 = ([&]() -> std::int32_t { auto cs_arg0 = v_file; auto cs_arg1 = char16_t(92); return pls::game::cs_last_index_char1(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num_17562; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_file; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num_17562; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_substring1(cs_arg0,cs_arg1); }()); v_file = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_file; auto cs_arg1 = char16_t(47); return pls::game::cs_last_index_char1(cs_arg0,cs_arg1); }()); v_num_17562 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_17562; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_file; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num_17562; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_substring1(cs_arg0,cs_arg1); }()); v_file = cs_value; return cs_value; }());
}
return ([&]() -> pls::cs::String { auto cs_arg0 = v_file; return pls::cs::string_trim(cs_arg0); }());
}
}
}
// M:kairo.unity.ui.ResourceManager.JarCache.#ctor(System.Int32,System.Int32,kairo.unity.util.JarInflater)
cs_bf56843843fb840d cs_b9f0cc63a3a1e0ed(std::int32_t v_rsId,std::int32_t v_rcId,pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar) { cs_init_bf56843843fb840d();
{ cs_bf56843843fb840d cs_this{}; cs_b9f0cc63a3a1e0ed_init(&cs_this,v_rsId,v_rcId,v_jar);return cs_this;}
}
void cs_b9f0cc63a3a1e0ed_init(cs_bf56843843fb840d* cs_this,std::int32_t v_rsId,std::int32_t v_rcId,pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_rsId; pls::game::cs_require(cs_target)->cs_85aa6688644f1732 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_rcId; pls::game::cs_require(cs_target)->cs_0e1d8386a566c122 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_jar; pls::game::cs_require(cs_target)->cs_061de919f485a022 = cs_value; return cs_value; }());
}
}
// M:kairo.unity.ui.ResourceManager.Load(kairo.unity.util.JarInflater,System.Int32)
void cs_75e9fafc48a8059b(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar,std::int32_t v_m3dVer) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jar; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7b258075c3f980c6(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jar; std::int32_t cs_arg1 = v_m3dVer; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_57400ccf89951052(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.ui.ResourceManager.Load(System.Byte[],System.Int32)
void cs_6ec7ac2b50afb0b0(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::Array<std::uint8_t> v_data,std::int32_t v_m3dVer) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_3999 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }()); v_jarInflater_3999 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_3999; std::int32_t cs_arg1 = v_m3dVer; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_75e9fafc48a8059b(cs_receiver,cs_arg0,cs_arg1); }());
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_jarInflater_3999); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_3999); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{}; v_jarInflater_3999 = cs_value; return cs_value; }());
});
}
}
}
// M:kairo.unity.ui.ResourceManager.Load(System.String,System.Int32)
void cs_8c93151a63a54026(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::String v_directory,std::int32_t v_m3dVer) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_4396 = ([&]() -> std::int32_t { auto cs_arg0 = v_directory; auto cs_arg1 = char16_t(46); return pls::game::cs_last_index_char1(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num_4396; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_directory; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = v_num_4396; return pls::generated::cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); v_directory = cs_value; return cs_value; }());
}
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_4519 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::String cs_arg0 = v_directory; return cs_e4e1e97aa25d4dd2(cs_arg0); }()); v_jarInflater_4519 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_4519; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7b258075c3f980c6(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_4519; std::int32_t cs_arg1 = v_m3dVer; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_57400ccf89951052(cs_receiver,cs_arg0,cs_arg1); }());
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_jarInflater_4519); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_4519); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{}; v_jarInflater_4519 = cs_value; return cs_value; }());
});
}
}
}
// M:kairo.unity.ui.ResourceManager.LoadImage(System.Byte[],kairo.unity.ui.Image.Format,kairo.unity.ui.Image.Filter)
pls::cs::Ref<pls::kairo::Image> cs_11f9813c8a63b28f(pls::cs::Array<std::uint8_t> v_src,pls::kairo::Image::Format v_format,pls::kairo::Image::Filter v_filterMode) { cs_init_b728593e3dcffe31();
{
return ([&]() -> pls::cs::Ref<pls::kairo::Image> { pls::cs::Array<std::uint8_t> cs_arg0 = v_src; pls::kairo::Image::Format cs_arg1 = v_format; pls::kairo::Image::Filter cs_arg2 = v_filterMode; return pls::kairo::Image::Load(cs_arg0,cs_arg1,cs_arg2); }());
}
}
// M:kairo.unity.ui.ResourceManager.LoadReady(kairo.unity.util.JarInflater)
void cs_7b258075c3f980c6(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_670c579b3496636a; }())) {
return;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9cd9f49f64199fc(cs_receiver); }());
if (([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_af791034e85c70f7(cs_receiver); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0044" u"\x0061" u"\x0074" u"\x0061" u"\x002f" u"",5)); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_af791034e85c70f7(cs_receiver); }()); return pls::cs::String::concat(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_55a3ac9e1aa7a324 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_3fe3f9fb934245ca = cs_value; return cs_value; }());
for (std::int32_t v_i_5679 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5679; auto cs_right = (cs_bd0c9538929cdd1c()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5679; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5679 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = cs_bd0c9538929cdd1c(); auto cs_index = v_i_5679; return cs_array.get_Item(cs_index); }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
pls::cs::Array<pls::cs::String> v_array_5774 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jar; pls::cs::String cs_arg1 = ([&]() { auto cs_array = cs_bd0c9538929cdd1c(); auto cs_index = v_i_5679; return cs_array.get_Item(cs_index); }()); return pls::generated::cs_aa767d3dce39dc9d(cs_arg0,cs_arg1); }());
if (([&]() { auto cs_left = pls::cs::box(v_array_5774); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_5679; auto cs_value = v_array_5774;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (std::int32_t v_j_5905 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_5905; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_5679; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_5905; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_5905 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_5679; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_5905; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_5679; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_5905; return cs_array.get_Item(cs_index); }()); return pls::cs::string_trim(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_3fe3f9fb934245ca; auto cs_rhs = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_5679; return cs_array.get_Item(cs_index); }())).length(); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_3fe3f9fb934245ca = cs_value; return cs_value; }());
}
}
}
}
}
// M:kairo.unity.ui.ResourceManager.LoadSeb(System.Byte[])
pls::cs::Ref<cs_9cade6927d6e0bf3> cs_4d944e677756a8b9(pls::cs::Array<std::uint8_t> v_src) { cs_init_b728593e3dcffe31();
{
return ([&]() -> pls::cs::Ref<cs_9cade6927d6e0bf3> { pls::cs::Array<std::uint8_t> cs_arg0 = v_src; return cs_4a08f30608a5776b(cs_arg0); }());
}
}
// M:kairo.unity.ui.ResourceManager.LoadSound(System.String,System.Int32)
pls::cs::Ref<pls::kairo::SoundBase> cs_0d8dac4ae3310aea(pls::cs::String v_file,std::int32_t v_format) { cs_init_b728593e3dcffe31();
{
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_file; return pls::generated::cs_56a96842a5446791(cs_arg0); }()); v_file = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::SoundBase> v_result_2742 = pls::cs::Ref<pls::kairo::SoundBase>{};
if (([&]() -> bool { auto cs_left = v_format; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::SoundOGG> { pls::cs::String cs_arg0 = v_file; return pls::kairo::SoundOGG::Load(cs_arg0); }()); v_result_2742 = cs_value; return cs_value; }());
}
return v_result_2742;
}
}
// M:kairo.unity.ui.ResourceManager.LoadStart(kairo.unity.util.JarInflater,System.Int32)
void cs_57400ccf89951052(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar,std::int32_t v_m3dVer) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::cs::Cell<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>> v_jar_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>>(v_jar);
{
pls::cs::Array<pls::cs::Array<std::int32_t>> v_array_6417 = pls::cs::Array<pls::cs::Array<std::int32_t>>{};
if ((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_670c579b3496636a; }())))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_d4e23024d8a558a1 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::Array<pls::cs::Array<std::int32_t>>::make((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }())).length()); v_array_6417 = cs_value; return cs_value; }());
for (std::int32_t v_i_6521 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_6521; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_6521; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_6521 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_6417; auto cs_index = v_i_6521; auto cs_value = pls::cs::Array<std::int32_t>::make((([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_6521; return cs_array.get_Item(cs_index); }())).length());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
for (std::int32_t v_j_6613 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_6613; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_6521; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_6613; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_6613 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = v_array_6417; auto cs_index = v_i_6521; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_6613; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::cs::Array<pls::cs::String> v_array2_6692 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_6521; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_6613; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = (v_array2_6692).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = v_array_6417; auto cs_index = v_i_6521; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_6613; auto cs_value = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array2_6692; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_6521; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_6613; auto cs_value = ([&]() { auto cs_array = v_array2_6692; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
if ((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_670c579b3496636a; }())))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>::make((([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())).length()); pls::game::cs_require(cs_target)->cs_0e36fb5b2228e5c2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_9cade6927d6e0bf3>>::make((([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())).length()); pls::game::cs_require(cs_target)->cs_b957309a0939d3d1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<pls::kairo::SoundBase>>::make((([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())).length()); pls::game::cs_require(cs_target)->cs_d034fe7d69888987 = cs_value; return cs_value; }());
}
pls::cs::Ref<pls::cs::Cell<pls::cs::Array<pls::cs::Array<std::int32_t>>>> v_loadTask_7041_cell = pls::cs::make_ref<pls::cs::Cell<pls::cs::Array<pls::cs::Array<std::int32_t>>>>(([&](){auto cs_initial_array_362=pls::cs::Array<pls::cs::Array<std::int32_t>>::make(3);cs_initial_array_362.at(0)=pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));cs_initial_array_362.at(1)=([&](){auto cs_initial_array_363=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_363.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_initial_array_363.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));return cs_initial_array_363;}());cs_initial_array_362.at(2)=([&](){auto cs_initial_array_364=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_364.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));cs_initial_array_364.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));return cs_initial_array_364;}());return cs_initial_array_362;}()));
pls::cs::Ref<pls::cs::Cell<pls::cs::Array<pls::cs::String>>> v_sebFileName_7153_cell = pls::cs::make_ref<pls::cs::Cell<pls::cs::Array<pls::cs::String>>>(pls::cs::Array<pls::cs::String>::make((([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())).length()));
while (true) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_8d5e1bf55d1a49a9 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<pls::cs::Array<pls::cs::Array<std::int32_t>>>> v_loadTask_7041_cell;pls::cs::Ref<pls::cs::Cell<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>> v_jar_cell;pls::cs::Ref<pls::cs::Cell<pls::cs::Array<pls::cs::String>>> v_sebFileName_7153_cell;pls::cs::Ref<cs_b728593e3dcffe31> cs_this;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_loadTask_7041_cell,v);pls::cs::trace_value(v_jar_cell,v);pls::cs::trace_value(v_sebFileName_7153_cell,v);pls::cs::trace_value(cs_this,v);}void release_edges()override{pls::cs::Object::release_edges();v_loadTask_7041_cell.reset();v_jar_cell.reset();v_sebFileName_7153_cell.reset();cs_this.reset();}void Invoke(){{
std::int64_t v_num17_7289 = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());
for (std::int32_t v_k_7340 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_7340; auto cs_right = (v_loadTask_7041_cell->value).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_7340; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_7340 = cs_new; return cs_old; }())) {
std::int32_t v_num18_7390 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_loadTask_7041_cell->value; auto cs_index = v_k_7340; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
for (std::int32_t v_l_7429 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_loadTask_7041_cell->value; auto cs_index = v_k_7340; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); ([&]() -> bool { auto cs_left = v_l_7429; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_num18_7390; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_7429; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_7429 = cs_new; return cs_old; }()),([&]() { auto cs_array = ([&]() { auto cs_array = v_loadTask_7041_cell->value; auto cs_index = v_k_7340; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }()),([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_d4e23024d8a558a1; auto cs_new = pls::cs::add_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_d4e23024d8a558a1 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_num18_7390; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_87c6cb7c61cb9fce(cs_receiver,cs_arg0); }())) {
std::int32_t v_num19_7586 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if ((([&]() -> bool { auto cs_left = v_num18_7390; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
{
pls::cs::String v_fileName2_7643 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_174f6b80456cfd05(cs_receiver,cs_arg0); }());
pls::cs::Array<pls::cs::String> v_array7_7699 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_fileName2_7643; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
([&]() { auto cs_value = ([&]() { auto cs_array = v_array7_7699; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); v_fileName2_7643 = cs_value; return cs_value; }());
bool v_flag3_7788 = false;
bool v_flag4_7817 = false;
pls::cs::String v_text3_7848 = pls::cs::String{};
pls::kairo::Image::Filter v_filterMode_7884 = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)));
pls::kairo::Image::Format v_format_7941 = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)));
std::int32_t v_renderQueue__7985 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_imageAtlasId__8016 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
std::int32_t v_width_8049 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_height_8073 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
bool v_flag5_8099 = false;
for (std::int32_t v_n_8132 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); ([&]() -> bool { auto cs_left = v_n_8132; auto cs_right = (v_array7_7699).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_8132; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_8132 = cs_new; return cs_old; }())) {
pls::cs::String v_text4_8191 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array7_7699; auto cs_index = v_n_8132; return cs_array.get_Item(cs_index); }()); return pls::cs::culture_to_lower(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_text4_8191; auto cs_right = pls::cs::String(std::u16string(u"\x0062" u"\x0069" u"\x006e" u"",3)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag3_7788 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_text4_8191; auto cs_right = pls::cs::String(std::u16string(u"\x0072" u"\x0065" u"\x0073" u"",3)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag4_7817 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_text4_8191; auto cs_right = pls::cs::String(std::u16string(u"\x0070" u"\x0074" u"",2)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); v_filterMode_7884 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_text4_8191; auto cs_right = pls::cs::String(std::u16string(u"\x0062" u"\x0069" u"",2)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull))); v_filterMode_7884 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_text4_8191; auto cs_right = pls::cs::String(std::u16string(u"\x0074" u"\x0072" u"\x0069" u"",3)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))); v_filterMode_7884 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_text4_8191; auto cs_right = pls::cs::String(std::u16string(u"\x0032" u"\x0034" u"",2)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull))); v_format_7941 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_text4_8191; auto cs_right = pls::cs::String(std::u16string(u"\x0035" u"\x0036" u"\x0035" u"",3)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull))); v_format_7941 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_text4_8191; auto cs_right = pls::cs::String(std::u16string(u"\x0033" u"\x0032" u"",2)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull))); v_format_7941 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_text4_8191; auto cs_right = pls::cs::String(std::u16string(u"\x0034" u"\x0034" u"\x0034" u"\x0034" u"",4)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))); v_format_7941 = cs_value; return cs_value; }());
} else {
if (([&]() -> bool { auto cs_arg0 = v_text4_8191; auto cs_arg1 = pls::cs::String(std::u16string(u"\x002e" u"\x0070" u"\x0061" u"\x006c" u"",4)); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_array7_7699; auto cs_index = v_n_8132; return cs_array.get_Item(cs_index); }()); v_text3_7848 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_arg0 = v_text4_8191; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0071" u"\x002b" u"",2)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }()) || ([&]() -> bool { auto cs_arg0 = v_text4_8191; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0071" u"\x002d" u"",2)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }()))) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text4_8191; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(43)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text4_8191; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::game::cs_substring1(cs_arg0,cs_arg1); }()); v_text4_8191 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text4_8191; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::game::cs_substring1(cs_arg0,cs_arg1); }()); v_text4_8191 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_text4_8191; return pls::cs::int32_parse(cs_arg0); }()); v_renderQueue__7985 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_arg0 = v_text4_8191; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0040" u"",1)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }())) {
if (([&]() -> bool { auto cs_left = (v_text4_8191).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_imageAtlasId__8016 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text4_8191; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::game::cs_substring1(cs_arg0,cs_arg1); }()); return pls::cs::int32_parse(cs_arg0); }()); v_imageAtlasId__8016 = cs_value; return cs_value; }());
}
} else if (([&](){auto cs_text=v_text4_8191;auto cs_char=char16_t(120);return pls::game::cs_index_char1(cs_text,cs_char)!=-1;}())) {
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text4_8191; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(101)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text4_8191; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(69)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text4_8191; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::game::cs_substring1(cs_arg0,cs_arg1); }()); v_text4_8191 = cs_value; return cs_value; }());
if ((!(([&]() -> bool { return cs_dea1d8116ed5aaf1(); }())))) {
continue;
}
}
pls::cs::Array<pls::cs::String> v_array8_9934 = ([&](){auto cs_text=v_text4_8191;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(120);return pls::cs::string_split(cs_text,cs_separators);}());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array8_9934; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); v_width_8049 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array8_9934; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); v_height_8073 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = true; v_flag5_8099 = cs_value; return cs_value; }());
}
}
}
if ((pls::generated::cs_4cc76a7a43706693() && v_flag5_8099)) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\xff72" u"\xff92" u"\xff70" u"\xff7c" u"\xff9e" u"\x306e" u"\xff75" u"\xff8c" u"\xff9f" u"\xff7c" u"\xff6e" u"\xff9d" u"\x304c" u"\x005b" u"\x0062" u"\x0069" u"\x006e" u"\x005d" u"\x005b" u"\x0072" u"\x0065" u"\x0073" u"\x005d" u"\x005b" u"\x0070" u"\x0074" u"\x005d" u"\x005b" u"\x0062" u"\x0069" u"\x005d" u"\x005b" u"\x0074" u"\x0072" u"\x0069" u"\x005d" u"\x005b" u"\x0032" u"\x0034" u"\x005d" u"\x005b" u"\x0033" u"\x0032" u"\x005d" u"\x005b" u"\x0035" u"\x0036" u"\x0035" u"\x005d" u"\x005b" u"\x0034" u"\x0034" u"\x0034" u"\x0034" u"\x005d" u"\x005b" u"\x002a" u"\x002e" u"\x0070" u"\x0061" u"\x006c" u"\x005d" u"\x005b" u"\x0071" u"\x005d" u"\x005b" u"\x0040" u"\x005d" u"\x306e" u"\x3069" u"\x308c" u"\x306b" u"\x3082" u"\x5f53" u"\x3066" u"\x306f" u"\x307e" u"\x308a" u"\x307e" u"\x305b" u"\x3093" u"\x003a" u"",82)); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
try {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b2b7060a2ecd4629; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_l_7429; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Image> { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b2b7060a2ecd4629; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f9b013b52e784f8d; }()); pls::cs::String cs_arg2 = v_fileName2_7643; pls::cs::String cs_arg3 = v_text3_7848; pls::kairo::Image::Format cs_arg4 = v_format_7941; pls::kairo::Image::Filter cs_arg5 = v_filterMode_7884; return pls::kairo::Image::FromRecord(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if (v_flag3_7788) {
if (((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_670c579b3496636a; }()))) || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_cell->value); pls::cs::String cs_arg0 = v_fileName2_7643; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c7d820c198e8591(cs_receiver,cs_arg0); }()))) {
pls::cs::Array<std::uint8_t> v_src_10605 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_cell->value); pls::cs::String cs_arg0 = v_fileName2_7643; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); pls::cs::Array<std::uint8_t> cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(v_text3_7848); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_cell->value); pls::cs::String cs_arg0 = v_text3_7848; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()) : pls::cs::Array<std::uint8_t>{}); return cs_46f5e10bd3c97a4c(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_l_7429; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Image> { pls::cs::Array<std::uint8_t> cs_arg0 = v_src_10605; pls::kairo::Image::Format cs_arg1 = v_format_7941; pls::kairo::Image::Filter cs_arg2 = v_filterMode_7884; return pls::kairo::Image::FromBytes(cs_arg0,cs_arg1,cs_arg2); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
} else if (v_flag4_7817) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_l_7429; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Image> { pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_cell->value); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_af791034e85c70f7(cs_receiver); }()); auto cs_right = v_fileName2_7643; return pls::cs::String::concat(cs_left,cs_right); }()); pls::cs::String cs_arg1 = v_text3_7848; pls::kairo::Image::Format cs_arg2 = v_format_7941; pls::kairo::Image::Filter cs_arg3 = v_filterMode_7884; return pls::kairo::Image::FromFile(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if (((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_670c579b3496636a; }()))) || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_cell->value); pls::cs::String cs_arg0 = v_fileName2_7643; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c7d820c198e8591(cs_receiver,cs_arg0); }()))) {
pls::cs::Array<std::uint8_t> v_src2_11013 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_cell->value); pls::cs::String cs_arg0 = v_fileName2_7643; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); pls::cs::Array<std::uint8_t> cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(v_text3_7848); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_cell->value); pls::cs::String cs_arg0 = v_text3_7848; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()) : pls::cs::Array<std::uint8_t>{}); return cs_46f5e10bd3c97a4c(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_l_7429; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Image> { pls::cs::Array<std::uint8_t> cs_arg0 = v_src2_11013; pls::kairo::Image::Format cs_arg1 = v_format_7941; pls::kairo::Image::Filter cs_arg2 = v_filterMode_7884; return cs_11f9813c8a63b28f(cs_arg0,cs_arg1,cs_arg2); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg0 = v_width_8049; std::int32_t cs_arg1 = v_height_8073; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetStandardResolution(cs_arg0,cs_arg1); }());
if ((v_flag3_7788 && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }()); auto cs_value = true; pls::game::cs_require(cs_target)->useBin_ = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }()); auto cs_value = v_imageAtlasId__8016; pls::game::cs_require(cs_target)->imageAtlasId_ = cs_value; return cs_value; }());
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }()); auto cs_value = v_renderQueue__7985; pls::game::cs_require(cs_target)->renderQueue_ = cs_value; return cs_value; }());
if ((([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9b5a40492d552a9; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }())); pls::cs::String cs_arg0 = v_fileName2_7643; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetName(cs_arg0); }());
}
([&]() { auto cs_old = v_num19_7586; auto cs_new = pls::cs::add_i32(cs_old,1); v_num19_7586 = cs_new; return cs_old; }());
} catch(const pls::cs::Exception& cs_caught_365) {auto cs_exception_365=pls::cs::capture_exception(cs_caught_365);
if(pls::cs::exception_is(cs_exception_365,"System.Exception")) {auto v_t2_11654=cs_exception_365;{
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"\x0049" u"\x006d" u"\x0061" u"\x0067" u"\x0065" u"\x306b" u"\x5931" u"\x6557" u"\x003a" u"",13)); auto cs_right = v_fileName2_7643; return pls::cs::String::concat(cs_left,cs_right); }()); pls::cs::Ref<pls::cs::ExceptionObject> cs_arg1 = v_t2_11654; return cs_68d38462ed74d43f(cs_arg0,cs_arg1); }());
}}
else {throw;} }
}
} else if ((([&]() -> bool { auto cs_left = v_num18_7390; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
{
pls::cs::String v_fileName3_11801 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_174f6b80456cfd05(cs_receiver,cs_arg0); }());
pls::cs::Array<pls::cs::String> v_array9_11857 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_fileName3_11801; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
bool v_u_11914 = false;
bool v_v_11939 = false;
std::int32_t v_num21_11963 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_num22_11992 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); ([&]() -> bool { auto cs_left = v_num22_11992; auto cs_right = (v_array9_11857).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num22_11992; auto cs_new = pls::cs::add_i32(cs_old,1); v_num22_11992 = cs_new; return cs_old; }())) {
char16_t v_recoveredOptionChar_12061 = ([&]() -> char16_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array9_11857; auto cs_index = v_num22_11992; return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_recoveredOptionChar_12061); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(117)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_u_11914 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_recoveredOptionChar_12061); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(118)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_v_11939 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_recoveredOptionChar_12061); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(99)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array9_11857; auto cs_index = v_num22_11992; return cs_array.get_Item(cs_index); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::game::cs_substring1(cs_arg0,cs_arg1); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }()); v_num21_11963 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_value = ([&]() { auto cs_array = v_array9_11857; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); v_fileName3_11801 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sebFileName_7153_cell->value; auto cs_index = v_l_7429; auto cs_value = v_fileName3_11801;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
try {
pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb_12419 = pls::cs::Ref<cs_9cade6927d6e0bf3>{};
for (std::int32_t v_num23_12450 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num23_12450; auto cs_right = v_l_7429; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num23_12450; auto cs_new = pls::cs::add_i32(cs_old,1); v_num23_12450 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_arg0 = v_fileName3_11801; auto cs_arg1 = ([&]() { auto cs_array = v_sebFileName_7153_cell->value; auto cs_index = v_num23_12450; return cs_array.get_Item(cs_index); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_num23_12450; return cs_array.get_Item(cs_index); }()); v_seb_12419 = cs_value; return cs_value; }());
break;
}
}
if (([&]() { auto cs_left = pls::cs::box(v_seb_12419); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_l_7429; auto cs_value = ([&]() -> pls::cs::Ref<cs_9cade6927d6e0bf3> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_cell->value); pls::cs::String cs_arg0 = v_fileName3_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); return cs_4d944e677756a8b9(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_l_7429; auto cs_value = ([&]() -> pls::cs::Ref<cs_9cade6927d6e0bf3> { pls::cs::Ref<cs_9cade6927d6e0bf3> cs_arg0 = v_seb_12419; return cs_1c59e79631d1b59d(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9b5a40492d552a9; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }())); pls::cs::String cs_arg0 = v_fileName3_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d2ae53450b53b314(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }()); auto cs_value = cs_this; pls::game::cs_require(cs_target)->cs_6c943a1b533da794 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }())); bool cs_arg0 = v_u_11914; bool cs_arg1 = v_v_11939; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e0591493f391ca7e(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num21_11963; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg0 = v_num21_11963; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e9137273356b616d(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_old = v_num19_7586; auto cs_new = pls::cs::add_i32(cs_old,1); v_num19_7586 = cs_new; return cs_old; }());
} catch(const pls::cs::Exception& cs_caught_366) {auto cs_exception_366=pls::cs::capture_exception(cs_caught_366);
if(pls::cs::exception_is(cs_exception_366,"System.Exception")) {auto v_t3_13148=cs_exception_366;{
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"\x0053" u"\x0065" u"\x0062" u"\x306b" u"\x5931" u"\x6557" u"\x003a" u"",11)); auto cs_right = v_fileName3_11801; return pls::cs::String::concat(cs_left,cs_right); }()); pls::cs::Ref<pls::cs::ExceptionObject> cs_arg1 = v_t3_13148; return cs_68d38462ed74d43f(cs_arg0,cs_arg1); }());
}}
else {throw;} }
}
} else if ((([&]() -> bool { auto cs_left = v_num18_7390; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()))) {
{
pls::cs::String v_text_13293 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }()); return pls::generated::cs_69fdc17c11a6247b(cs_arg0); }()); return pls::generated::cs_56a96842a5446791(cs_arg0); }());
std::int32_t v_num20_13365 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
for (std::int32_t v_m_13395 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_13395; auto cs_right = (cs_b9076d2bc52fda6e()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_13395; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_13395 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_arg0 = v_text_13293; auto cs_arg1 = ([&]() { auto cs_array = cs_b9076d2bc52fda6e(); auto cs_index = v_m_13395; return cs_array.get_Item(cs_index); }()); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = v_m_13395; v_num20_13365 = cs_value; return cs_value; }());
break;
}
}
if (([&]() -> bool { auto cs_left = v_num20_13365; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
continue;
}
try {
pls::cs::String v_text2_13667 = (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55a3ac9e1aa7a324; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ? pls::cs::String(std::u16string(u"",0)) : ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55a3ac9e1aa7a324; }())));
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_l_7429; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::SoundBase> { pls::cs::String cs_arg0 = ([&]() { auto cs_left = v_text2_13667; auto cs_right = v_text_13293; return pls::cs::String::concat(cs_left,cs_right); }()); std::int32_t cs_arg1 = v_num20_13365; return cs_0d8dac4ae3310aea(cs_arg0,cs_arg1); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9b5a40492d552a9; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_l_7429; return cs_array.get_Item(cs_index); }())); pls::cs::String cs_arg0 = v_text_13293; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetName(cs_arg0); }());
}
([&]() { auto cs_old = v_num19_7586; auto cs_new = pls::cs::add_i32(cs_old,1); v_num19_7586 = cs_new; return cs_old; }());
} catch(const pls::cs::Exception& cs_caught_367) {auto cs_exception_367=pls::cs::capture_exception(cs_caught_367);
if(pls::cs::exception_is(cs_exception_367,"System.Exception")) {auto v_t_13916=cs_exception_367;{
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"\x0053" u"\x006f" u"\x0075" u"\x006e" u"\x0064" u"\x306b" u"\x5931" u"\x6557" u"\x003a" u"",13)); auto cs_right = v_text_13293; return pls::cs::String::concat(cs_left,cs_right); }()); pls::cs::Ref<pls::cs::ExceptionObject> cs_arg1 = v_t_13916; return cs_68d38462ed74d43f(cs_arg0,cs_arg1); }());
}}
else {throw;} }
}
}
if ((([&]() -> bool { auto cs_left = v_num19_7586; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }()); auto cs_right = v_num17_7289; return pls::cs::sub_i64(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(([&]() -> std::int32_t { return cs_957abf979910fc61(); }())); return (cs_left >= cs_right); }()))) {
return;
}
}
}
}
}}};auto cs_closure=pls::cs::make_ref<cs_closure_8d5e1bf55d1a49a9>();cs_closure->v_loadTask_7041_cell=v_loadTask_7041_cell;cs_closure->v_jar_cell=v_jar_cell;cs_closure->v_sebFileName_7153_cell=v_sebFileName_7153_cell;cs_closure->cs_this=cs_this;return pls::cs::Delegate<void()>::bind_identity(cs_closure,v_loadTask_7041_cell.get(),std::string("M:kairo.unity.ui.ResourceManager.LoadStart(kairo.unity.util.JarInflater,System.Int32):7264")+std::to_string(reinterpret_cast<std::uintptr_t>(v_jar_cell.get()))+std::to_string(reinterpret_cast<std::uintptr_t>(v_sebFileName_7153_cell.get())),[weak=std::weak_ptr<cs_closure_8d5e1bf55d1a49a9>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());
bool v_flag_14172 = true;
for (std::int32_t v_num_14198 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num_14198; auto cs_right = (v_loadTask_7041_cell->value).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num_14198; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_14198 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_loadTask_7041_cell->value; auto cs_index = v_num_14198; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = ([&]() { auto cs_array = ([&]() { auto cs_array = v_loadTask_7041_cell->value; auto cs_index = v_num_14198; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = false; v_flag_14172 = cs_value; return cs_value; }());
}
}
if (v_flag_14172) {
break;
}
}
if ((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_670c579b3496636a; }())))) {
for (std::int32_t v_num2_14421 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num2_14421; auto cs_right = (v_array_6417).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num2_14421; auto cs_new = pls::cs::add_i32(cs_old,1); v_num2_14421 = cs_new; return cs_old; }())) {
std::int32_t v_num3_14475 = (([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }())).length();
for (std::int32_t v_num4_14516 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num4_14516; auto cs_right = (([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num4_14516; auto cs_new = pls::cs::add_i32(cs_old,1); v_num4_14516 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num4_14516; return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num3_14475; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num4_14516; return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num3_14475 = cs_value; return cs_value; }());
}
}
for (std::int32_t v_num5_14682 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num5_14682; auto cs_right = (([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num5_14682; auto cs_new = pls::cs::add_i32(cs_old,1); v_num5_14682 = cs_new; return cs_old; }())) {
std::int32_t v_num6_14744 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num5_14682; return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
bool v_flag2_14812 = false;
for (std::int32_t v_num7_14843 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num7_14843; auto cs_right = (([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num7_14843; auto cs_new = pls::cs::add_i32(cs_old,1); v_num7_14843 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num7_14843; return cs_array.get_Item(cs_index); }()); auto cs_right = v_num6_14744; return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag2_14812 = cs_value; return cs_value; }());
}
}
if ((!(v_flag2_14812))) {
([&]() { auto cs_target = ([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num5_14682; auto cs_value = v_num6_14744;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_old = v_num6_14744; auto cs_new = pls::cs::add_i32(cs_old,1); v_num6_14744 = cs_new; return cs_old; }());
}
}
pls::cs::Array<pls::cs::String> v_array3_15103 = pls::cs::Array<pls::cs::String>::make(v_num3_14475);
for (std::int32_t v_num8_15144 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num8_15144; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num8_15144; auto cs_new = pls::cs::add_i32(cs_old,1); v_num8_15144 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array3_15103; auto cs_index = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num8_15144; return cs_array.get_Item(cs_index); }()); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num8_15144; return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_num2_14421; auto cs_value = v_array3_15103;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if ((([&]() -> bool { auto cs_left = v_num2_14421; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
{
pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> v_array6_15323 = pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>::make(v_num3_14475);
for (std::int32_t v_num11_15364 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num11_15364; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num11_15364; auto cs_new = pls::cs::add_i32(cs_old,1); v_num11_15364 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array6_15323; auto cs_index = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num11_15364; return cs_array.get_Item(cs_index); }()); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num11_15364; return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_value = v_array6_15323; pls::game::cs_require(cs_target)->cs_0e36fb5b2228e5c2 = cs_value; return cs_value; }());
}
} else if ((([&]() -> bool { auto cs_left = v_num2_14421; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
{
pls::cs::Array<pls::cs::Ref<cs_9cade6927d6e0bf3>> v_array5_15536 = pls::cs::Array<pls::cs::Ref<cs_9cade6927d6e0bf3>>::make(v_num3_14475);
for (std::int32_t v_num10_15575 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num10_15575; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num10_15575; auto cs_new = pls::cs::add_i32(cs_old,1); v_num10_15575 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array5_15536; auto cs_index = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num10_15575; return cs_array.get_Item(cs_index); }()); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_num10_15575; return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_value = v_array5_15536; pls::game::cs_require(cs_target)->cs_b957309a0939d3d1 = cs_value; return cs_value; }());
}
} else if ((([&]() -> bool { auto cs_left = v_num2_14421; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()))) {
{
pls::cs::Array<pls::cs::Ref<pls::kairo::SoundBase>> v_array4_15753 = pls::cs::Array<pls::cs::Ref<pls::kairo::SoundBase>>::make(v_num3_14475);
for (std::int32_t v_num9_15798 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num9_15798; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num9_15798; auto cs_new = pls::cs::add_i32(cs_old,1); v_num9_15798 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array4_15753; auto cs_index = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_6417; auto cs_index = v_num2_14421; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num9_15798; return cs_array.get_Item(cs_index); }()); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_num9_15798; return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_value = v_array4_15753; pls::game::cs_require(cs_target)->cs_d034fe7d69888987 = cs_value; return cs_value; }());
}
}
}
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>{}); return cs_left != cs_right; }())) {
for (std::int32_t v_num12_15982 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num12_15982; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num12_15982; auto cs_new = pls::cs::add_i32(cs_old,1); v_num12_15982 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num12_15982; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::String v_fileName_16077 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_num12_15982; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_174f6b80456cfd05(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_fileName_16077; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); v_fileName_16077 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_arg0 = v_fileName_16077; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_fileName_16077; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_right = pls::cs::String(std::u16string(u"\x006f" u"\x0070" u"\x0074" u"",3)); return pls::cs::String::concat(cs_left,cs_right); }()); v_fileName_16077 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_cell->value); pls::cs::String cs_arg0 = v_fileName_16077; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c7d820c198e8591(cs_receiver,cs_arg0); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num12_15982; return cs_array.get_Item(cs_index); }())); pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_cell->value); pls::cs::String cs_arg0 = v_fileName_16077; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8e928637488e2491(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}
pls::cs::Ref<pls::cs::Cell<pls::cs::List<pls::cs::Array<std::int32_t>>>> v_atlasIamges_16382_cell = pls::cs::make_ref<pls::cs::Cell<pls::cs::List<pls::cs::Array<std::int32_t>>>>(pls::cs::List<pls::cs::Array<std::int32_t>>::make());
for (std::int32_t v_num13_16427 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num13_16427; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num13_16427; auto cs_new = pls::cs::add_i32(cs_old,1); v_num13_16427 = cs_new; return cs_old; }())) {
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num13_16427; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num13_16427; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->imageAtlasId_; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) {
std::int32_t v_num14_16549 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num13_16427; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num13_16427; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); return pls::cs::add_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = v_atlasIamges_16382_cell->value; auto cs_arg0 = ([&](){auto cs_initial_array_368=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_368.at(0)=v_num13_16427;cs_initial_array_368.at(1)=v_num14_16549;return cs_initial_array_368;}()); cs_receiver.Add(cs_arg0); }());
}
}
for (std::int32_t v_num15_16685 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num15_16685; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_atlasIamges_16382_cell->value).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num15_16685; auto cs_new = pls::cs::add_i32(cs_old,1); v_num15_16685 = cs_new; return cs_old; }())) {
for (std::int32_t v_num16_16754 = ([&]() -> std::int32_t { auto cs_left = (v_atlasIamges_16382_cell->value).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num16_16754; auto cs_right = v_num15_16685; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num16_16754; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num16_16754 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_atlasIamges_16382_cell->value; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num16_16754; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = v_atlasIamges_16382_cell->value; auto cs_index = v_num16_16754; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left < cs_right); }())) {
pls::cs::Array<std::int32_t> v_value_16894 = ([&]() { auto cs_array = v_atlasIamges_16382_cell->value; auto cs_index = v_num16_16754; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = v_atlasIamges_16382_cell->value; auto cs_index = v_num16_16754; auto cs_value = ([&]() { auto cs_array = v_atlasIamges_16382_cell->value; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num16_16754; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); cs_target.set_Item(cs_index,cs_value); return cs_value; }());
([&]() { auto cs_target = v_atlasIamges_16382_cell->value; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num16_16754; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_value_16894; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_126a535427395c41 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<pls::cs::List<pls::cs::Array<std::int32_t>>>> v_atlasIamges_16382_cell;pls::cs::Ref<cs_b728593e3dcffe31> cs_this;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_atlasIamges_16382_cell,v);pls::cs::trace_value(cs_this,v);}void release_edges()override{pls::cs::Object::release_edges();v_atlasIamges_16382_cell.reset();cs_this.reset();}void Invoke(){{
for (std::int32_t v_k_17102 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_17102; auto cs_right = (v_atlasIamges_16382_cell->value).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_17102; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_17102 = cs_new; return cs_old; }())) {
pls::cs::Ref<pls::kairo::Image> v_obj_17154 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = ([&]() { auto cs_array = ([&]() { auto cs_array = v_atlasIamges_16382_cell->value; auto cs_index = v_k_17102; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_obj_17154); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_obj_17154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->imageAtlasId_; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetImageAtlasId(cs_arg0); }());
}
}}};auto cs_closure=pls::cs::make_ref<cs_closure_126a535427395c41>();cs_closure->v_atlasIamges_16382_cell=v_atlasIamges_16382_cell;cs_closure->cs_this=cs_this;return pls::cs::Delegate<void()>::bind_identity(cs_closure,v_atlasIamges_16382_cell.get(),std::string("M:kairo.unity.ui.ResourceManager.LoadStart(kairo.unity.util.JarInflater,System.Int32):17075"),[weak=std::weak_ptr<cs_closure_126a535427395c41>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_670c579b3496636a = cs_value; return cs_value; }());
}
}
}
}
// M:kairo.unity.ui.ResourceManager.OpenJarCache(System.Int32,System.Int32)
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_f22a8aac0144b99b(std::int32_t v_rsId,std::int32_t v_rcId) { cs_init_b728593e3dcffe31();
{
{auto cs_list_enum783=(cs_6e1bce9006dd3621()).GetEnumerator();struct cs_list_scope783{decltype(cs_list_enum783)&e;~cs_list_scope783(){e.Dispose();}} cs_scope783{cs_list_enum783};while(cs_list_enum783.MoveNext()){ cs_bf56843843fb840d v_item_23191=cs_list_enum783.get_Current();{
if ((([&]() -> bool { auto cs_left = (v_item_23191).cs_85aa6688644f1732; auto cs_right = v_rsId; return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = (v_item_23191).cs_0e1d8386a566c122; auto cs_right = v_rcId; return (cs_left == cs_right); }()))) {
return (v_item_23191).cs_061de919f485a022;
}
}}}
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_23335 = ([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = v_rsId; std::int32_t cs_arg1 = v_rcId; return pls::kairo::RecordStore::ReadRecord(cs_arg0,cs_arg1); }()); return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }());
([&]() -> void { auto cs_receiver = cs_6e1bce9006dd3621(); auto cs_arg0 = ([&]() -> cs_bf56843843fb840d { std::int32_t cs_arg0 = v_rsId; std::int32_t cs_arg1 = v_rcId; pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg2 = v_jarInflater_23335; return cs_b9f0cc63a3a1e0ed(cs_arg0,cs_arg1,cs_arg2); }()); cs_receiver.Add(cs_arg0); }());
return v_jarInflater_23335;
}
}
// M:kairo.unity.ui.ResourceManager.SetRecordNameBits(System.Int32)
pls::cs::Ref<cs_b728593e3dcffe31> cs_530b5df6d7de28c3(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,std::int32_t v_bits) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_bits; pls::game::cs_require(cs_target)->cs_e9b5a40492d552a9 = cs_value; return cs_value; }());
return cs_this;
}
}
}
// M:kairo.unity.ui.Seb._draw(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32,System.Int32)
void cs_24c4adaf384504d7(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> v_img,std::int32_t v_frame,std::int32_t v_lineNo) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = v_lineNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
pls::cs::Array<pls::cs::Array<std::int32_t>> v_spritesLocal_25456 = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); std::int32_t cs_arg0 = v_frame; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_81a7716657e08e67(cs_receiver,cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_spritesLocal_25456); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::int32_t>>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_i_25546 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_25546; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_25546; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_25546 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = v_x; float cs_arg2 = v_y; pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = v_img; pls::cs::Array<std::int32_t> cs_arg4 = ([&]() { auto cs_array = v_spritesLocal_25456; auto cs_index = v_i_25546; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6da9e0b022d7fac1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
} else {
pls::cs::Array<std::int32_t> v_spriteLocal_25667 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); std::int32_t cs_arg0 = v_frame; std::int32_t cs_arg1 = v_lineNo; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_540790251ab6ceed(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = v_x; float cs_arg2 = v_y; pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = v_img; pls::cs::Array<std::int32_t> cs_arg4 = v_spriteLocal_25667; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6da9e0b022d7fac1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
}
// M:kairo.unity.ui.Seb._load(java.io.InputStream)
void cs_7e5a86fad2f198c4(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_713e673d446e8251(cs_receiver); }());
pls::cs::Ref<pls::generated::cs_8d93189702e4084b> v_dataInputStream_4443 = pls::cs::Ref<pls::generated::cs_8d93189702e4084b>{};
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_8d93189702e4084b> { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_606370a03155bf34(cs_arg0); }()); v_dataInputStream_4443 = cs_value; return cs_value; }());
std::int32_t v_num_4538 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num3_4555 = std::int32_t{};
std::int32_t v_num2_4565 = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_aa5d67607a160f11(cs_receiver); }()));
if (([&]() -> bool { auto cs_left = v_num2_4565; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::neg_i32(v_num2_4565); v_num_4538 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }())); v_num3_4555 = cs_value; return cs_value; }());
} else {
std::int32_t v_num4_4713 = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_aa5d67607a160f11(cs_receiver); }()));
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int16_t>((([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num2_4565; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num4_4713; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); return (cs_left | cs_right); }())))); v_num3_4555 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }())); pls::game::cs_require(cs_target)->cs_9d08782ceb3285f3 = cs_value; return cs_value; }());
pls::cs::Array<pls::cs::Array<std::int16_t>> v_array_4872 = pls::cs::Array<pls::cs::Array<std::int16_t>>::make(v_num3_4555);
pls::cs::Array<pls::cs::Array<std::int8_t>> v_array2_4913 = pls::cs::Array<pls::cs::Array<std::int8_t>>::make(v_num3_4555);
pls::cs::Array<std::int32_t> v_array3_4951 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)));
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_4984 = pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>{};
for (std::int32_t v_i_5012 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5012; auto cs_right = v_num3_4555; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5012; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5012 = cs_new; return cs_old; }())) {
std::int32_t v_num5_5049 = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));
if (([&]() -> bool { auto cs_left = v_num_4538; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }());
}
([&]() { auto cs_target = v_array_4872; auto cs_index = v_i_5012; auto cs_value = pls::cs::Array<std::int16_t>::make(v_num5_5049);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array2_4913; auto cs_index = v_i_5012; auto cs_value = pls::cs::Array<std::int8_t>::make(([&]() -> std::int32_t { auto cs_left = v_num5_5049; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mul_i32(cs_left,cs_right); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
for (std::int32_t v_j_5238 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_5238; auto cs_right = v_num5_5049; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_5238; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_5238 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = v_num_4538; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
std::uint32_t v_num7_5804 = pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffffffffull));
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(v_num7_5804);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
std::int32_t v_num8_5904 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xff00ull)); return (cs_left & cs_right); }());
std::int32_t v_num9_5943 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull));
std::int32_t v_num10_5967 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }());
std::int32_t v_num11_6005 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xff00ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shr_i32(cs_left,cs_right); }());
std::int32_t v_num12_6052 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }());
if (([&]() -> bool { auto cs_left = v_num8_5904; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2000ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if (([&]() -> bool { auto cs_left = v_num8_5904; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4000ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if (([&]() -> bool { auto cs_left = v_num8_5904; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8000ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); v_num9_5943 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num9_5943; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num10_5967; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num11_6005; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = v_num12_6052; return (cs_left | cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
} else if (([&]() -> bool { auto cs_left = v_num_4538; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_d49800fd6633bd98(); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if ((((((((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()))) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffffeull)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffffdull)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffffcull)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffffbull)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffffaull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_d49800fd6633bd98(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_d49800fd6633bd98(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_d49800fd6633bd98(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_d49800fd6633bd98(); }()); return (cs_left | cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff8ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_17dee35cf6e3ebff(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }())) {
std::int8_t v_num6_7287 = ([&]() -> std::int8_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(v_dataInputStream_4443); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_aa5d67607a160f11(cs_receiver); }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_num6_7287); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_num6_7287); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
std::int32_t v_num13_7496 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = (([&]() -> std::int64_t { auto cs_left = (([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xff000000ull))); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::shr_i64(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull))); return (cs_left & cs_right); }())));
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num13_7496; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = ([&]() { auto cs_array = v_array_4872; auto cs_index = v_i_5012; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_5238; auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::cs::Array<std::int8_t> v_array4_7688 = ([&]() { auto cs_array = v_array2_4913; auto cs_index = v_i_5012; return cs_array.get_Item(cs_index); }());
std::int32_t v_num14_7718 = ([&]() -> std::int32_t { auto cs_left = v_j_5238; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mul_i32(cs_left,cs_right); }());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); return (cs_left | cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if ((((((((((((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffffeull)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffffdull)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffffcull)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff8ull)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); return (cs_left != cs_right); }()))) {
if (([&]() { pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>> cs_left = v_vector_4984; pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_right = pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>{}; return pls::generated::cs_391891c911ef6b0a(cs_left,cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }()); v_vector_4984 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(std::uint64_t(0xffffffffffffff80ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>((([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>((([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>((([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array4_7688; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num14_7718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::cs::Array<std::int16_t> v_recoveredSpriteRecord_8937 = pls::cs::Array<std::int16_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)));
([&]() { auto cs_target = v_recoveredSpriteRecord_8937; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_recoveredSpriteRecord_8937; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_recoveredSpriteRecord_8937; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_recoveredSpriteRecord_8937; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_recoveredSpriteRecord_8937; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_recoveredSpriteRecord_8937; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_recoveredSpriteRecord_8937; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = v_array3_4951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_recoveredSpriteRecord_8937); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
std::int32_t v_num15_9361 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_k_9385 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_9385; auto cs_right = (v_array2_4913).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_9385; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_9385 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_num15_9361; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_array = v_array2_4913; auto cs_index = v_k_9385; return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num15_9361 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make((v_array2_4913).length()); pls::game::cs_require(cs_target)->cs_53963218095f989a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int16_t>::make(v_num15_9361); pls::game::cs_require(cs_target)->cs_3d82d8b64a51d13d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int8_t>::make(([&]() -> std::int32_t { auto cs_left = v_num15_9361; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->cs_0864d2eb25ed95b7 = cs_value; return cs_value; }());
pls::cs::Array<std::int32_t> v_array5_9596 = pls::cs::Array<std::int32_t>{};
{
std::int32_t v_l_9610 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num16_9625 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (; ([&]() -> bool { auto cs_left = v_l_9610; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_9610; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_9610 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }()); auto cs_index = v_l_9610; auto cs_value = v_num16_9625;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = v_array2_4913; auto cs_index = v_l_9610; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }())); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num16_9625; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = (([&]() { auto cs_array = v_array2_4913; auto cs_index = v_l_9610; return cs_array.get_Item(cs_index); }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = v_array_4872; auto cs_index = v_l_9610; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }())); std::int32_t cs_arg3 = v_num16_9625; std::int32_t cs_arg4 = (([&]() { auto cs_array = v_array_4872; auto cs_index = v_l_9610; return cs_array.get_Item(cs_index); }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() { auto cs_old = v_num16_9625; auto cs_rhs = (([&]() { auto cs_array = v_array_4872; auto cs_index = v_l_9610; return cs_array.get_Item(cs_index); }())).length(); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num16_9625 = cs_value; return cs_value; }());
}
if (([&]() { pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>> cs_left = v_vector_4984; pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_right = pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>{}; return pls::generated::cs_9739d0439e7c2868(cs_left,cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int16_t>::make(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->cs_4270f05b25bc352d = cs_value; return cs_value; }());
for (std::int32_t v_m_10004 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_10004; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_10004; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_10004 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::cs::unbox<pls::cs::Array<std::int16_t>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); std::int32_t cs_arg0 = v_m_10004; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()))); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }())); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_m_10004; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>{}; v_vector_4984 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int8_t>::make(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d08782ceb3285f3; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->cs_c38ed7767bcbc4c5 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull))); v_array5_9596 = cs_value; return cs_value; }());
for (std::int32_t v_n_10278 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_n_10278; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d08782ceb3285f3; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_10278; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_10278 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::Array<std::int32_t>> v_spritesLocal_10324 = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); std::int32_t cs_arg0 = v_n_10278; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_81a7716657e08e67(cs_receiver,cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_spritesLocal_10324); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::int32_t>>{}); return cs_left == cs_right; }())) {
continue;
}
std::int32_t v_num17_10429 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num18_10449 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num19_10469 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num20_10489 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num21_10509 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_num22_10534 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num22_10534; auto cs_right = (v_spritesLocal_10324).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num22_10534; auto cs_new = pls::cs::add_i32(cs_old,1); v_num22_10534 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
continue;
}
std::int32_t v_num23_10672 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
if (((([&]() -> bool { auto cs_left = v_num23_10672; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_num23_10672; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff7ull)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = v_num23_10672; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff8ull)); return (cs_left == cs_right); }()))) {
continue;
}
if (([&]() -> bool { auto cs_left = v_num21_10509; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); v_num17_10429 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); v_num18_10449 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num19_10469 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num20_10489 = cs_value; return cs_value; }());
} else {
if (([&]() -> bool { auto cs_left = v_num17_10429; auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); v_num17_10429 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num18_10449; auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); v_num18_10449 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num19_10469; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num19_10469 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num20_10489; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = v_spritesLocal_10324; auto cs_index = v_num22_10534; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num20_10489 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_old = v_num21_10509; auto cs_new = pls::cs::add_i32(cs_old,1); v_num21_10509 = cs_new; return cs_old; }());
}
std::int32_t v_num24_11596 = ([&]() -> std::int32_t { auto cs_left = v_num19_10469; auto cs_right = v_num17_10429; return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num25_11628 = ([&]() -> std::int32_t { auto cs_left = v_num20_10489; auto cs_right = v_num18_10449; return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num26_11660 = ([&]() -> std::int32_t { auto cs_left = v_n_10278; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num26_11660; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(v_num17_10429);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num26_11660; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(v_num18_10449);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num26_11660; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(v_num24_11596);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num26_11660; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(v_num25_11628);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num26_11660; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int8_t>(std::uint64_t(0xffffffffffffff80ull))); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int8_t>(v_num17_10429)); auto cs_right = v_num17_10429; return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int8_t>(v_num18_10449)); auto cs_right = v_num18_10449; return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int8_t>(v_num24_11596)); auto cs_right = v_num24_11596; return (cs_left != cs_right); }())) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int8_t>(v_num25_11628)); auto cs_right = v_num25_11628; return (cs_left != cs_right); }()))) {
if (([&]() { pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>> cs_left = v_vector_4984; pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_right = pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>{}; return pls::generated::cs_391891c911ef6b0a(cs_left,cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }()); v_vector_4984 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num26_11660; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>(std::uint64_t(0xffffffffffffff80ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num26_11660; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::int8_t>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() -> pls::cs::Ref<cs_ec7e2b4042d2be7d> { std::int16_t cs_arg0 = pls::cs::cast_integral<std::int16_t>(v_num17_10429); return cs_99b0e4c5e8c0b01f(cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() -> pls::cs::Ref<cs_ec7e2b4042d2be7d> { std::int16_t cs_arg0 = pls::cs::cast_integral<std::int16_t>(v_num18_10449); return cs_99b0e4c5e8c0b01f(cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() -> pls::cs::Ref<cs_ec7e2b4042d2be7d> { std::int16_t cs_arg0 = pls::cs::cast_integral<std::int16_t>(v_num24_11596); return cs_99b0e4c5e8c0b01f(cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() -> pls::cs::Ref<cs_ec7e2b4042d2be7d> { std::int16_t cs_arg0 = pls::cs::cast_integral<std::int16_t>(v_num25_11628); return cs_99b0e4c5e8c0b01f(cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
if (([&]() -> bool { auto cs_left = v_n_10278; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_num17_10429;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_num18_10449;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_num19_10469;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = v_num20_10489;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
continue;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num17_10429; return (cs_left > cs_right); }())) {
([&]() { auto cs_target = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_num17_10429;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num18_10449; return (cs_left > cs_right); }())) {
([&]() { auto cs_target = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_num18_10449;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num19_10469; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_num19_10469;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num20_10489; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = v_num20_10489;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
([&]() { auto cs_target = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>((([&]() -> std::uint64_t { auto cs_left = ([&]() -> std::uint64_t { auto cs_left = ([&]() -> std::uint64_t { auto cs_left = (([&]() -> std::uint64_t { auto cs_left = (([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>(pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()))); auto cs_right = pls::cs::cast_integral<std::uint64_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30ull)); return pls::cs::shl_u64(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::uint64_t { auto cs_left = (([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>(pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()))); auto cs_right = pls::cs::cast_integral<std::uint64_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::cs::shl_u64(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::uint64_t { auto cs_left = (([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>(pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()))); auto cs_right = pls::cs::cast_integral<std::uint64_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shl_u64(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>(pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = v_array5_9596; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()))); auto cs_right = pls::cs::cast_integral<std::uint64_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }())); return (cs_left | cs_right); }()))); pls::game::cs_require(cs_target)->cs_69c7294e79fb5155 = cs_value; return cs_value; }());
if (([&]() { pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>> cs_left = v_vector_4984; pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_right = pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>{}; return pls::generated::cs_9739d0439e7c2868(cs_left,cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int16_t>::make(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }())); pls::game::cs_require(cs_target)->cs_1ee331dc730bd3cd = cs_value; return cs_value; }());
for (std::int32_t v_num27_13219 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num27_13219; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ee331dc730bd3cd; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num27_13219; auto cs_new = pls::cs::add_i32(cs_old,1); v_num27_13219 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ee331dc730bd3cd; }()); auto cs_index = v_num27_13219; auto cs_value = ([&]() -> std::int16_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_ec7e2b4042d2be7d>>((pls::cs::unbox<pls::cs::Ref<cs_ec7e2b4042d2be7d>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4984); std::int32_t cs_arg0 = v_num27_13219; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f049644ef5a1dd50(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
} }, [&]() {
([&]() -> void { auto cs_conditional = v_dataInputStream_4443; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8d93189702e4084b>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }()); }());
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_8d93189702e4084b>{}; v_dataInputStream_4443 = cs_value; return cs_value; }());
});
}
}
}
// M:kairo.unity.ui.Seb._load(System.Byte[])
void cs_2877241e0de4b3a8(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,pls::cs::Array<std::uint8_t> v_data) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_4133 = pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{};
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_4133 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_4133; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7e5a86fad2f198c4(cs_receiver,cs_arg0); }());
} }, [&]() {
([&]() -> void { auto cs_conditional = v_byteArrayInputStream_4133; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }()); }());
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{}; v_byteArrayInputStream_4133 = cs_value; return cs_value; }());
});
}
}
}
// M:kairo.unity.ui.Seb.#ctor(kairo.unity.ui.Seb)
pls::cs::Ref<cs_9cade6927d6e0bf3> cs_1c59e79631d1b59d(pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb) { cs_init_9cade6927d6e0bf3();
{ auto cs_this = pls::cs::make_ref<cs_9cade6927d6e0bf3>(); cs_1c59e79631d1b59d_init(cs_this,v_seb); return cs_this; }
}
void cs_1c59e79631d1b59d_init(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb) {
cs_this->cs_019432077efbdc74 = pls::cs::String(std::u16string(u"",0));
cs_this->cs_9cace278fd260831 = pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));
cs_this->cs_0b80b02d4903483a = ([&]() -> pls::cs::Ref<cs_5ac9304f9db0671e> { return cs_77ef879cc829cd6c(); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_seb; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_019432077efbdc74; }()); pls::game::cs_require(cs_target)->cs_019432077efbdc74 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_seb; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d08782ceb3285f3; }()); pls::game::cs_require(cs_target)->cs_9d08782ceb3285f3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_seb; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }()); pls::game::cs_require(cs_target)->cs_53963218095f989a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_seb; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); pls::game::cs_require(cs_target)->cs_3d82d8b64a51d13d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_seb; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); pls::game::cs_require(cs_target)->cs_0864d2eb25ed95b7 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_seb; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); pls::game::cs_require(cs_target)->cs_4270f05b25bc352d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_seb; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69c7294e79fb5155; }()); pls::game::cs_require(cs_target)->cs_69c7294e79fb5155 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_seb; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); pls::game::cs_require(cs_target)->cs_c38ed7767bcbc4c5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_seb; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ee331dc730bd3cd; }()); pls::game::cs_require(cs_target)->cs_1ee331dc730bd3cd = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_seb; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6c943a1b533da794; }()); pls::game::cs_require(cs_target)->cs_6c943a1b533da794 = cs_value; return cs_value; }());
}
}
// M:kairo.unity.ui.Seb.#ctor(System.Byte[])
pls::cs::Ref<cs_9cade6927d6e0bf3> cs_4a08f30608a5776b(pls::cs::Array<std::uint8_t> v_data) { cs_init_9cade6927d6e0bf3();
{ auto cs_this = pls::cs::make_ref<cs_9cade6927d6e0bf3>(); cs_4a08f30608a5776b_init(cs_this,v_data); return cs_this; }
}
void cs_4a08f30608a5776b_init(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,pls::cs::Array<std::uint8_t> v_data) {
cs_this->cs_019432077efbdc74 = pls::cs::String(std::u16string(u"",0));
cs_this->cs_9cace278fd260831 = pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));
cs_this->cs_0b80b02d4903483a = ([&]() -> pls::cs::Ref<cs_5ac9304f9db0671e> { return cs_77ef879cc829cd6c(); }());
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); pls::cs::Array<std::uint8_t> cs_arg0 = v_data; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2877241e0de4b3a8(cs_receiver,cs_arg0); }());
}
}
// M:kairo.unity.ui.Seb.ConvBufferToSprite(System.Int32,System.Int32[])
pls::cs::Array<std::int32_t> cs_3c28d7a96403fe84(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,std::int32_t v_index,pls::cs::Array<std::int32_t> v_sprite) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_index; return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
std::int32_t v_num_23423 = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mul_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int8_t>(std::uint64_t(0xffffffffffffff80ull))); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); return (cs_left | cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
std::int32_t v_num2_23677 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::mul_i32(cs_left,cs_right); }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return (cs_left & cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b87c65d3746a352; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mod_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff8ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b87c65d3746a352; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mod_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff8ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
return v_sprite;
}
}
}
// M:kairo.unity.ui.Seb.Dispose
void cs_713e673d446e8251(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_cc71c7763ea3aa22 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9d08782ceb3285f3 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}); return cs_left != cs_right; }())) {
for (std::int32_t v_num_3863 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_3863; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_3863; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_3863 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_num_3863; auto cs_value = pls::cs::Array<pls::cs::Array<std::int32_t>>{};cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}; pls::game::cs_require(cs_target)->cs_da710114f6c50365 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_53963218095f989a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int16_t>{}; pls::game::cs_require(cs_target)->cs_3d82d8b64a51d13d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int8_t>{}; pls::game::cs_require(cs_target)->cs_0864d2eb25ed95b7 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int16_t>{}; pls::game::cs_require(cs_target)->cs_4270f05b25bc352d = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.Seb.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32)
void cs_5e280cc6c7254fc3(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> v_img,std::int32_t v_lineNo) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = v_x; float cs_arg2 = v_y; pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = v_img; std::int32_t cs_arg4 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cc71c7763ea3aa22; }()); std::int32_t cs_arg5 = v_lineNo; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_24c4adaf384504d7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
// M:kairo.unity.ui.Seb.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32[])
void cs_6da9e0b022d7fac1(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> v_img,pls::cs::Array<std::int32_t> v_sp) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(v_sp); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
return;
}
([&]() -> pls::cs::Ref<cs_672083a5397f2913> { return cs_eac2553adb9adb2d(); }());
float v_num_25910 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9cace278fd260831; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return (cs_left + cs_right); }());
float v_num2_25952 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9cace278fd260831; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left + cs_right); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckLocalMatrix(); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { float cs_arg0 = v_num_25910; float cs_arg1 = v_num2_25952; return cs_726b189f0fed2c17(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9d946ea24c94dbc(cs_receiver,cs_arg0); }());
} else {
([&]() { auto cs_old = v_x; auto cs_rhs = v_num_25910; auto cs_value = (cs_old + cs_rhs); v_x = cs_value; return cs_value; }());
([&]() { auto cs_old = v_y; auto cs_rhs = v_num2_25952; auto cs_value = (cs_old + cs_rhs); v_y = cs_value; return cs_value; }());
}
bool v_flag_26136 = false;
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = true; v_flag_26136 = cs_value; return cs_value; }());
}
if (v_flag_26136) {
std::int32_t v_num3_26223 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = (([&]() -> std::int64_t { auto cs_left = (([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xff000000ull))); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::shr_i64(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull))); return (cs_left & cs_right); }())));
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetRenderModeOperator(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetRenderModeSrcRatio(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left != cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num3_26223; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetRenderModeSrcRatio(); }()); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::cs::div_i32(cs_left,cs_right); }()); v_num3_26223 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num3_26223; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); v_num3_26223 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = v_num3_26223; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = v_num3_26223; return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = v_num3_26223; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); std::int32_t cs_arg1 = v_num3_26223; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
}
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left > cs_right); }())) {
std::int32_t v_sx_26733 = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_sy_26753 = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_width_26773 = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_height_26796 = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }());
bool v_recoveredDrawRegion_26821 = true;
if (v_recoveredDrawRegion_26821) {
std::int32_t v_num4_26885 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num4_26885; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_num4_26885; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetFlipMode(cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = ([&]() { auto cs_array = v_img; auto cs_index = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); float cs_arg1 = v_x; float cs_arg2 = v_y; std::int32_t cs_arg3 = v_sx_26733; std::int32_t cs_arg4 = v_sy_26753; std::int32_t cs_arg5 = v_width_26773; std::int32_t cs_arg6 = v_height_26796; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
if (([&]() -> bool { auto cs_left = v_num4_26885; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetFlipMode(cs_arg0); }());
}
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffffeull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xff0000ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xff00ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = v_x; float cs_arg1 = v_y; float cs_arg2 = static_cast<float>(([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); float cs_arg3 = static_cast<float>(([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffffdull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xff0000ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xff00ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = v_x; float cs_arg1 = v_y; float cs_arg2 = static_cast<float>(([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); float cs_arg3 = static_cast<float>(([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffffcull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xff0000ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xff00ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = v_x; float cs_arg1 = v_y; float cs_arg2 = ([&]() -> float { auto cs_left = v_x; auto cs_right = static_cast<float>(([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); return (cs_left + cs_right); }()); float cs_arg3 = ([&]() -> float { auto cs_left = v_y; auto cs_right = static_cast<float>(([&]() { auto cs_array = v_sp; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); return (cs_left + cs_right); }()); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
if (v_flag_26136) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopRenderMode(); }());
}
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckLocalMatrix(); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopMatrix(); }());
}
}
}
}
// M:kairo.unity.ui.Seb.DrawFrame(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32,System.Int32)
void cs_1154a923e75c7349(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> v_img,std::int32_t v_frame,std::int32_t v_lineNo) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = v_x; float cs_arg2 = v_y; pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = v_img; std::int32_t cs_arg4 = v_frame; std::int32_t cs_arg5 = v_lineNo; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_24c4adaf384504d7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
// M:kairo.unity.ui.Seb.Frame
void cs_6dfa20c6668983e8(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cc71c7763ea3aa22; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d08782ceb3285f3; }()); return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_cc71c7763ea3aa22 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.Seb.GetBoundingRect
pls::cs::Array<std::int32_t> cs_a507412f284f974c(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_getBoundingRectI_result_13507 = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_672083a5397f2913> { return cs_eac2553adb9adb2d(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af8004110cb79aa4; }());
([&]() { auto cs_target = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int16_t>((([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>((([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69c7294e79fb5155; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffff000000000000ull)); return (cs_left & cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30ull)); return pls::cs::shr_u64(cs_left,cs_right); }()))));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int16_t>((([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>((([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69c7294e79fb5155; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffff00000000ull)); return (cs_left & cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::cs::shr_u64(cs_left,cs_right); }()))));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int16_t>((([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>((([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69c7294e79fb5155; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shr_u64(cs_left,cs_right); }()))));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int16_t>((([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69c7294e79fb5155; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffull))); return (cs_left & cs_right); }()))));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b87c65d3746a352; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b87c65d3746a352; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return v_getBoundingRectI_result_13507;
}
}
}
// M:kairo.unity.ui.Seb.GetBoundingRect(System.Int32)
pls::cs::Array<std::int16_t> cs_e8833b0a463d9a55(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,std::int32_t v_frame) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int16_t> v_getBoundingRect_result_14340 = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_672083a5397f2913> { return cs_eac2553adb9adb2d(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_adf957d75456082a; }());
std::int32_t v_num_14417 = ([&]() -> std::int32_t { auto cs_left = v_frame; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int8_t>(std::uint64_t(0xffffffffffffff80ull))); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); v_num_14417 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ee331dc730bd3cd; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ee331dc730bd3cd; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ee331dc730bd3cd; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ee331dc730bd3cd; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b87c65d3746a352; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b87c65d3746a352; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return v_getBoundingRect_result_14340;
}
}
}
// M:kairo.unity.ui.Seb.GetHashCode
std::int32_t cs_184041a08c276493(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:kairo.unity.ui.Seb.GetLayersNum
std::int32_t cs_a9047ac84bcd384a(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }())).length();
}
}
}
// M:kairo.unity.ui.Seb.GetMaxFrame
std::int32_t cs_012842e8ba39224c(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d08782ceb3285f3; }());
}
}
}
// M:kairo.unity.ui.Seb.GetSprite(System.Int32,System.Int32)
pls::cs::Array<std::int32_t> cs_f424f89d435cbb04(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,std::int32_t v_frameNo,std::int32_t v_lineNo) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_5ac9304f9db0671e> v_workValue_16792 = ([&]() -> pls::cs::Ref<cs_5ac9304f9db0671e> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5a0a1ad2c9bad9b6(cs_receiver); }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_workValue_16792; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a629158f3074ad89; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::int32_t>>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = v_workValue_16792; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = ([&](){auto cs_initial_array_492=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_492.at(0)=([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a9047ac84bcd384a(cs_receiver); }());cs_initial_array_492.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));return cs_initial_array_492;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_a629158f3074ad89 = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}); return cs_left != cs_right; }())) {
for (std::int32_t v_i_17006 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_17006; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_17006; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_17006 = cs_new; return cs_old; }())) {
std::int32_t v_num_17052 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_i_17006; return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = v_num_17052; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
break;
}
if (([&]() -> bool { auto cs_left = v_num_17052; auto cs_right = v_frameNo; return (cs_left == cs_right); }())) {
pls::cs::Array<std::int32_t> v_array_17171 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_i_17006; return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }());
for (std::int32_t v_num2_17213 = ([&]() -> std::int32_t { auto cs_left = v_i_17006; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num2_17213; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num2_17213; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_17213 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_17213; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_num2_17213; return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = v_array_17171;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }());
}
}
pls::cs::Array<std::int32_t> v_array2_17406 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }());
for (std::int32_t v_num3_17463 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num3_17463; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num3_17463; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_17463 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_num3_17463; return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_17463; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = v_array2_17406;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
pls::cs::Array<std::int32_t> v_array3_17620 = (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}); return cs_left != cs_right; }())) ? ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }()) : ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_workValue_16792; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a629158f3074ad89; }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }())));
std::int32_t v_num4_17703 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num5_17720 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num6_17737 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num7_17754 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num8_17771 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }());
std::int32_t v_num9_17806 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_lineNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }())).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_lineNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num9_17806 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num8_17771; auto cs_right = v_num9_17806; return (cs_left > cs_right); }())) {
return pls::cs::Array<std::int32_t>{};
}
if ((([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num8_17771; return cs_array.get_Item(cs_index); }())); return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num9_17806; return cs_array.get_Item(cs_index); }())); return (cs_left > cs_right); }()))) {
return pls::cs::Array<std::int32_t>{};
}
if (([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }())) {
while (true) {
std::int32_t v_num10_18136 = ([&]() -> std::int32_t { auto cs_left = v_num8_17771; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num9_17806; auto cs_right = v_num8_17771; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
if ((([&]() -> bool { auto cs_left = v_num10_18136; auto cs_right = v_num8_17771; return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num10_18136; return cs_array.get_Item(cs_index); }())); auto cs_right = v_frameNo; return (cs_left == cs_right); }()))) {
break;
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num10_18136; return cs_array.get_Item(cs_index); }())); auto cs_right = v_frameNo; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_num10_18136; v_num8_17771 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = v_num10_18136; v_num9_17806 = cs_value; return cs_value; }());
}
}
}
for (std::int32_t v_num11_18398 = v_num8_17771, v_num12_18412 = ([&]() -> std::int32_t { auto cs_left = v_num8_17771; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num11_18398; auto cs_right = v_num9_17806; return (cs_left <= cs_right); }()); ) {
if (([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num11_18398; return cs_array.get_Item(cs_index); }())); return (cs_left == cs_right); }())) {
([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); std::int32_t cs_arg0 = v_num11_18398; pls::cs::Array<std::int32_t> cs_arg1 = v_array3_17620; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c28d7a96403fe84(cs_receiver,cs_arg0,cs_arg1); }());
return v_array3_17620;
}
if (([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num11_18398; return cs_array.get_Item(cs_index); }())); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num11_18398; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num4_17703 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num11_18398; v_num5_17720 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num5_17720; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num4_17703; return cs_array.get_Item(cs_index); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num6_17737 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num4_17703; return cs_array.get_Item(cs_index); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num7_17754 = cs_value; return cs_value; }());
break;
}
([&]() { auto cs_old = v_num11_18398; auto cs_new = pls::cs::add_i32(cs_old,1); v_num11_18398 = cs_new; return cs_old; }());
([&]() { auto cs_old = v_num12_18412; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num12_18412 = cs_value; return cs_value; }());
}
pls::cs::Ref<cs_672083a5397f2913> v_workStaticValue_18821 = ([&]() -> pls::cs::Ref<cs_672083a5397f2913> { return cs_eac2553adb9adb2d(); }());
pls::cs::Array<std::int32_t> v_array4_18870 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); std::int32_t cs_arg0 = v_num4_17703; pls::cs::Array<std::int32_t> cs_arg1 = ([&]() { auto cs_receiver = v_workStaticValue_18821; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_868c2bf8c835789a; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c28d7a96403fe84(cs_receiver,cs_arg0,cs_arg1); }());
pls::cs::Array<std::int32_t> v_array5_18945 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); std::int32_t cs_arg0 = v_num5_17720; pls::cs::Array<std::int32_t> cs_arg1 = ([&]() { auto cs_receiver = v_workStaticValue_18821; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_13421d3977fbd718; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c28d7a96403fe84(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_frameNo;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_18945; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num6_17737; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num7_17754; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_18945; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num6_17737; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num7_17754; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_18945; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num6_17737; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num7_17754; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_18945; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num6_17737; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num7_17754; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_18945; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num6_17737; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num7_17754; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_18945; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num6_17737; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num7_17754; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return v_array3_17620;
}
}
}
// M:kairo.unity.ui.Seb.GetSpriteLocal(System.Int32,System.Int32)
pls::cs::Array<std::int32_t> cs_540790251ab6ceed(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,std::int32_t v_frameNo,std::int32_t v_lineNo) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_672083a5397f2913> v_workStaticValue_20017 = ([&]() -> pls::cs::Ref<cs_672083a5397f2913> { return cs_eac2553adb9adb2d(); }());
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }())).length(); auto cs_right = (([&]() { auto cs_receiver = v_workStaticValue_20017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_892fee32e48ccc2a; }())).length(); return (cs_left >= cs_right); }())) {
std::int32_t v_num_20130 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }());
([&]() { auto cs_target = v_workStaticValue_20017; auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::make(v_num_20130); pls::game::cs_require(cs_target)->cs_892fee32e48ccc2a = cs_value; return cs_value; }());
for (std::int32_t v_i_20220 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_20220; auto cs_right = (([&]() { auto cs_receiver = v_workStaticValue_20017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_892fee32e48ccc2a; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_20220; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_20220 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_workStaticValue_20017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_892fee32e48ccc2a; }()); auto cs_index = v_i_20220; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = ([&](){auto cs_initial_array_357=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_357.at(0)=v_i_20220;cs_initial_array_357.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));return cs_initial_array_357;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}); return cs_left != cs_right; }())) {
for (std::int32_t v_j_20406 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_20406; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_20406; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_20406 = cs_new; return cs_old; }())) {
std::int32_t v_num2_20452 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_j_20406; return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = v_num2_20452; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
break;
}
if (([&]() -> bool { auto cs_left = v_num2_20452; auto cs_right = v_frameNo; return (cs_left == cs_right); }())) {
pls::cs::Array<std::int32_t> v_array_20574 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_j_20406; return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }());
for (std::int32_t v_num3_20616 = ([&]() -> std::int32_t { auto cs_left = v_j_20406; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num3_20616; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num3_20616; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_20616 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_20616; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_num3_20616; return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = v_array_20574;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }());
}
}
pls::cs::Array<std::int32_t> v_array2_20809 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }());
for (std::int32_t v_num4_20866 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num4_20866; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num4_20866; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num4_20866 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_num4_20866; return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num4_20866; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = v_array2_20809;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
pls::cs::Array<std::int32_t> v_array3_21023 = (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}); return cs_left != cs_right; }())) ? ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }()) : ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_workStaticValue_20017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_892fee32e48ccc2a; }()); auto cs_index = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }())).length(); return cs_array.get_Item(cs_index); }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }())));
std::int32_t v_num5_21132 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num6_21149 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num7_21166 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num8_21183 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num9_21200 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }()); auto cs_index = v_lineNo; return cs_array.get_Item(cs_index); }());
std::int32_t v_num10_21235 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_lineNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }())).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_lineNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num10_21235 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num9_21200; auto cs_right = v_num10_21235; return (cs_left > cs_right); }())) {
return pls::cs::Array<std::int32_t>{};
}
if ((([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num9_21200; return cs_array.get_Item(cs_index); }())); return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num10_21235; return cs_array.get_Item(cs_index); }())); return (cs_left > cs_right); }()))) {
return pls::cs::Array<std::int32_t>{};
}
if (([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }())) {
while (true) {
std::int32_t v_num11_21569 = ([&]() -> std::int32_t { auto cs_left = v_num9_21200; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num10_21235; auto cs_right = v_num9_21200; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
if ((([&]() -> bool { auto cs_left = v_num11_21569; auto cs_right = v_num9_21200; return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num11_21569; return cs_array.get_Item(cs_index); }())); auto cs_right = v_frameNo; return (cs_left == cs_right); }()))) {
break;
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num11_21569; return cs_array.get_Item(cs_index); }())); auto cs_right = v_frameNo; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_num11_21569; v_num9_21200 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = v_num11_21569; v_num10_21235 = cs_value; return cs_value; }());
}
}
}
for (std::int32_t v_num12_21833 = v_num9_21200, v_num13_21847 = ([&]() -> std::int32_t { auto cs_left = v_num9_21200; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num12_21833; auto cs_right = v_num10_21235; return (cs_left <= cs_right); }()); ) {
if (([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num12_21833; return cs_array.get_Item(cs_index); }())); return (cs_left == cs_right); }())) {
([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); std::int32_t cs_arg0 = v_num12_21833; pls::cs::Array<std::int32_t> cs_arg1 = v_array3_21023; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c28d7a96403fe84(cs_receiver,cs_arg0,cs_arg1); }());
return v_array3_21023;
}
if (([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num12_21833; return cs_array.get_Item(cs_index); }())); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num12_21833; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num5_21132 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num12_21833; v_num6_21149 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num6_21149; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num5_21132; return cs_array.get_Item(cs_index); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num7_21166 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num5_21132; return cs_array.get_Item(cs_index); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num8_21183 = cs_value; return cs_value; }());
break;
}
([&]() { auto cs_old = v_num12_21833; auto cs_new = pls::cs::add_i32(cs_old,1); v_num12_21833 = cs_new; return cs_old; }());
([&]() { auto cs_old = v_num13_21847; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num13_21847 = cs_value; return cs_value; }());
}
pls::cs::Array<std::int32_t> v_array4_22247 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); std::int32_t cs_arg0 = v_num5_21132; pls::cs::Array<std::int32_t> cs_arg1 = ([&]() { auto cs_receiver = v_workStaticValue_20017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_868c2bf8c835789a; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c28d7a96403fe84(cs_receiver,cs_arg0,cs_arg1); }());
pls::cs::Array<std::int32_t> v_array5_22322 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); std::int32_t cs_arg0 = v_num6_21149; pls::cs::Array<std::int32_t> cs_arg1 = ([&]() { auto cs_receiver = v_workStaticValue_20017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_13421d3977fbd718; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c28d7a96403fe84(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_frameNo;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_22322; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num7_21166; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num8_21183; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_22322; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num7_21166; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num8_21183; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_22322; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num7_21166; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num8_21183; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_22322; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num7_21166; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num8_21183; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_22322; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num7_21166; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num8_21183; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_22322; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num7_21166; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num8_21183; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return v_array3_21023;
}
}
}
// M:kairo.unity.ui.Seb.GetSprites(System.Int32)
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_eea5b2f6712bae20(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,std::int32_t v_frameNo) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_5ac9304f9db0671e> v_workValue_15727 = ([&]() -> pls::cs::Ref<cs_5ac9304f9db0671e> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5a0a1ad2c9bad9b6(cs_receiver); }());
std::int32_t v_layersNum_15762 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a9047ac84bcd384a(cs_receiver); }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_workValue_15727; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a629158f3074ad89; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::int32_t>>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = v_workValue_15727; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = ([&](){auto cs_initial_array_491=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_491.at(0)=v_layersNum_15762;cs_initial_array_491.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));return cs_initial_array_491;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_a629158f3074ad89 = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_workValue_15727; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_577d4cc58848f157; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::int32_t>>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = v_workValue_15727; auto cs_value = pls::cs::Array<pls::cs::Array<std::int32_t>>::make(v_layersNum_15762); pls::game::cs_require(cs_target)->cs_577d4cc58848f157 = cs_value; return cs_value; }());
}
for (std::int32_t v_i_16014 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_16014; auto cs_right = v_layersNum_15762; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_16014; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_16014 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_workValue_15727; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_577d4cc58848f157; }()); auto cs_index = v_i_16014; auto cs_value = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); std::int32_t cs_arg0 = v_frameNo; std::int32_t cs_arg1 = v_i_16014; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f424f89d435cbb04(cs_receiver,cs_arg0,cs_arg1); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return ([&]() { auto cs_receiver = v_workValue_15727; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_577d4cc58848f157; }());
}
}
}
// M:kairo.unity.ui.Seb.GetSpritesLocal(System.Int32)
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_81a7716657e08e67(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,std::int32_t v_frameNo) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_672083a5397f2913> v_workStaticValue_16205 = ([&]() -> pls::cs::Ref<cs_672083a5397f2913> { return cs_eac2553adb9adb2d(); }());
std::int32_t v_layersNum_16252 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a9047ac84bcd384a(cs_receiver); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_workStaticValue_16205; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46be5d13750c48b7; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_workStaticValue_16205; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46be5d13750c48b7; }())).length(); auto cs_right = v_layersNum_16252; return (cs_left <= cs_right); }()))) {
([&]() { auto cs_target = v_workStaticValue_16205; auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::make(([&]() -> std::int32_t { auto cs_left = v_layersNum_16252; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->cs_46be5d13750c48b7 = cs_value; return cs_value; }());
for (std::int32_t v_i_16443 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_16443; auto cs_right = (([&]() { auto cs_receiver = v_workStaticValue_16205; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46be5d13750c48b7; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_16443; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_16443 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_workStaticValue_16205; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46be5d13750c48b7; }()); auto cs_index = v_i_16443; auto cs_value = pls::cs::Array<pls::cs::Array<std::int32_t>>::make(v_i_16443);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
pls::cs::Array<pls::cs::Array<std::int32_t>> v_array_16567 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_workStaticValue_16205; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46be5d13750c48b7; }()); auto cs_index = v_layersNum_16252; return cs_array.get_Item(cs_index); }());
for (std::int32_t v_j_16623 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_16623; auto cs_right = v_layersNum_16252; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_16623; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_16623 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_16567; auto cs_index = v_j_16623; auto cs_value = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); std::int32_t cs_arg0 = v_frameNo; std::int32_t cs_arg1 = v_j_16623; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_540790251ab6ceed(cs_receiver,cs_arg0,cs_arg1); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return v_array_16567;
}
}
}
// M:kairo.unity.ui.Seb.GetWorkStaticValue
pls::cs::Ref<cs_672083a5397f2913> cs_eac2553adb9adb2d() { cs_init_9cade6927d6e0bf3();
{
pls::cs::Ref<cs_672083a5397f2913> v_workStaticValue_2628 = cs_a42589e7c76d79ef();
if (([&]() { auto cs_left = pls::cs::box(v_workStaticValue_2628); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
pls::cs::Ref<cs_672083a5397f2913> v_workStaticValue1_2731 = ([&]() -> pls::cs::Ref<cs_672083a5397f2913> { return cs_0fb4b76eec65aa76(); }());
([&]() { auto cs_value = v_workStaticValue1_2731; v_workStaticValue_2628 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_workStaticValue1_2731; cs_a42589e7c76d79ef() = cs_value; return cs_value; }());
}
return v_workStaticValue_2628;
}
}
// M:kairo.unity.ui.Seb.GetWorkValue
pls::cs::Ref<cs_5ac9304f9db0671e> cs_5a0a1ad2c9bad9b6(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_5ac9304f9db0671e> v_workValue_2953 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0b80b02d4903483a; }());
if (([&]() { auto cs_left = pls::cs::box(v_workValue_2953); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_5ac9304f9db0671e> { return cs_77ef879cc829cd6c(); }()); v_workValue_2953 = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_0b80b02d4903483a = cs_value; return cs_value; }());
}
return v_workValue_2953;
}
}
}
// M:kairo.unity.ui.Seb.Reverse(System.Boolean,System.Boolean)
void cs_e0591493f391ca7e(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,bool v_u,bool v_v) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}); return cs_left != cs_right; }())) {
for (std::int32_t v_i_28264 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_28264; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_28264; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_28264 = cs_new; return cs_old; }())) {
for (std::int32_t v_j_28315 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_28315; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_i_28264; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_28315; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_28315 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_i_28264; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_28315; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int8_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); pls::game::cs_require(cs_target)->cs_5b87c65d3746a352 = cs_value; return cs_value; }());
if (v_u) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_5b87c65d3746a352; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = (cs_old | cs_rhs); pls::game::cs_require(cs_target)->cs_5b87c65d3746a352 = cs_value; return cs_value; }());
}
if (v_v) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_5b87c65d3746a352; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = (cs_old | cs_rhs); pls::game::cs_require(cs_target)->cs_5b87c65d3746a352 = cs_value; return cs_value; }());
}
}
}
}
// M:kairo.unity.ui.Seb.SetCacheSize(System.Int32)
void cs_e9137273356b616d(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,std::int32_t v_size) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::make(v_size); pls::game::cs_require(cs_target)->cs_da710114f6c50365 = cs_value; return cs_value; }());
for (std::int32_t v_i_28577 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_28577; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_28577; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_28577 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_i_28577; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = ([&](){auto cs_initial_array_371=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_371.at(0)=(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }())).length();cs_initial_array_371.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));return cs_initial_array_371;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
for (std::int32_t v_j_28707 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_28707; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_i_28577; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_28707; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_28707 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_i_28577; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_28707; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}
// M:kairo.unity.ui.Seb.SetClip(System.Int32,System.Int32,System.Int32,System.Int32)
void cs_03c8433bb30c2de8(std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h) { cs_init_9cade6927d6e0bf3();
{

}
}
// M:kairo.unity.ui.Seb.SetName(System.String)
void cs_d2ae53450b53b314(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,pls::cs::String v_name) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_name; pls::game::cs_require(cs_target)->cs_019432077efbdc74 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.Seb.ToString
pls::cs::String cs_db050df5f0170175(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x005b" u"",1)); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_019432077efbdc74; }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x0020" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&](){auto cs_receiver = std::static_pointer_cast<pls::cs::Object>(cs_this);return pls::game::cs_require(cs_receiver)->pls::cs::Object::ToString();}()); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:kairo.unity.ui.Seb.WorkStaticValue.#ctor
pls::cs::Ref<cs_672083a5397f2913> cs_0fb4b76eec65aa76() { cs_init_672083a5397f2913();
{ auto cs_this = pls::cs::make_ref<cs_672083a5397f2913>(); cs_0fb4b76eec65aa76_init(cs_this); return cs_this; }
}
void cs_0fb4b76eec65aa76_init(pls::cs::Ref<cs_672083a5397f2913> cs_this) {
cs_this->cs_892fee32e48ccc2a = ([&](){auto cs_initial_array_268=pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::make(1);cs_initial_array_268.at(0)=pls::cs::Array<pls::cs::Array<std::int32_t>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));return cs_initial_array_268;}());
cs_this->cs_46be5d13750c48b7 = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
cs_this->cs_af8004110cb79aa4 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)));
cs_this->cs_adf957d75456082a = pls::cs::Array<std::int16_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)));
cs_this->cs_868c2bf8c835789a = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)));
cs_this->cs_13421d3977fbd718 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)));
{}
}
// M:kairo.unity.ui.Seb.WorkValue.#ctor
pls::cs::Ref<cs_5ac9304f9db0671e> cs_77ef879cc829cd6c() { cs_init_5ac9304f9db0671e();
{ auto cs_this = pls::cs::make_ref<cs_5ac9304f9db0671e>(); cs_77ef879cc829cd6c_init(cs_this); return cs_this; }
}
void cs_77ef879cc829cd6c_init(pls::cs::Ref<cs_5ac9304f9db0671e> cs_this) {
{}
}
// M:kairo.unity.ui.TextFormat.#ctor
pls::cs::Ref<cs_dc09c88a279424b5> cs_d337fafafa1bc98d() { cs_init_dc09c88a279424b5();
{ auto cs_this = pls::cs::make_ref<cs_dc09c88a279424b5>(); cs_d337fafafa1bc98d_init(cs_this); return cs_this; }
}
void cs_d337fafafa1bc98d_init(pls::cs::Ref<cs_dc09c88a279424b5> cs_this) {
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_470e46d1c0096c27(cs_receiver,cs_arg0); }());
}
}
// M:kairo.unity.ui.TextFormat.Create(System.String)
pls::cs::Ref<cs_dc09c88a279424b5> cs_e5cc191a31275eff(pls::cs::String v_format) { cs_init_dc09c88a279424b5();
{
if (([&]() { auto cs_left = pls::cs::box(cs_a0e59a75dec69092()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { return cs_d337fafafa1bc98d(); }()); cs_a0e59a75dec69092() = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(cs_a0e59a75dec69092()); pls::cs::String cs_arg0 = v_format; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_470e46d1c0096c27(cs_receiver,cs_arg0); }());
return cs_a0e59a75dec69092();
}
}
// M:kairo.unity.ui.TextFormat.GetAnchor(System.Int32)
std::int32_t cs_cb4539652f78b54c(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,std::int32_t v_anchor) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7151221c9064cfc; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return v_anchor;
}
if (([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7151221c9064cfc; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_anchor; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::generated::cs_14daf94c5cc9a117(cs_arg0,cs_arg1); }()); v_anchor = cs_value; return cs_value; }());
}
if (([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7151221c9064cfc; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x70ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_anchor; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x70ull)); return pls::generated::cs_14daf94c5cc9a117(cs_arg0,cs_arg1); }()); v_anchor = cs_value; return cs_value; }());
}
return ([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7151221c9064cfc; }()); return (cs_left | cs_right); }());
}
}
}
// M:kairo.unity.ui.TextFormat.GetFont
std::int32_t cs_5222c35a27bca506(pls::cs::Ref<cs_dc09c88a279424b5> cs_this) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5352e54601bec7cb; }());
}
}
}
// M:kairo.unity.ui.TextFormat.GetX(System.Single)
float cs_4a7882bb12bfce3f(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,float v_x) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(cs_this); float cs_arg0 = v_x; pls::cs::Array<std::int32_t> cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_110453e9e91b0c62; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4217cc125b778a87(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.ui.TextFormat.GetXY(System.Single,System.Int32[])
float cs_4217cc125b778a87(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,float v_basis,pls::cs::Array<std::int32_t> v_elem) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(v_elem); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
return v_basis;
}
float v_num_1833 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::game::cs_f32(0x41200000u); return (cs_left / cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return v_num_1833;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
return ([&]() -> float { auto cs_left = v_basis; auto cs_right = v_num_1833; return (cs_left + cs_right); }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
return ([&]() -> float { auto cs_left = v_basis; auto cs_right = v_num_1833; return (cs_left - cs_right); }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
return ([&]() -> float { auto cs_left = v_basis; auto cs_right = v_num_1833; return (cs_left * cs_right); }());
}
return ([&]() -> float { auto cs_left = v_basis; auto cs_right = v_num_1833; return (cs_left / cs_right); }());
}
}
}
// M:kairo.unity.ui.TextFormat.GetY(System.Single)
float cs_a6f2c13fea15a192(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,float v_y) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(cs_this); float cs_arg0 = v_y; pls::cs::Array<std::int32_t> cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ee2adc9e2cf23dac; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4217cc125b778a87(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.ui.TextFormat.Init(System.String)
void cs_470e46d1c0096c27(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,pls::cs::String v_format) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_5352e54601bec7cb = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_ee2adc9e2cf23dac = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_110453e9e91b0c62 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_d7151221c9064cfc = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_format); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return;
}
pls::cs::Array<pls::cs::String> v_array_677 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_format; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_728 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_728; auto cs_right = (v_array_677).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_728; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_728 = cs_new; return cs_old; }())) {
pls::cs::String v_text_774 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array_677; auto cs_index = v_i_728; return cs_array.get_Item(cs_index); }()); return pls::cs::string_trim(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_774; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
continue;
}
if ((([&]() -> bool { auto cs_left = v_i_728; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_774; return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_5352e54601bec7cb = cs_value; return cs_value; }());
} else if (((([&]() -> bool { auto cs_left = v_i_728; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) || (([&]() -> bool { auto cs_left = v_i_728; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())))) {
{
char16_t v_c_959 = ([&]() -> char16_t { pls::cs::String cs_arg0 = v_text_774; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }());
if ((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(43)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(45)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(42)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(47)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text_774; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::game::cs_substring1(cs_arg0,cs_arg1); }()); v_text_774 = cs_value; return cs_value; }());
}
std::int32_t v_num_1089 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { pls::cs::String cs_arg0 = v_text_774; return cs_128bfc9b6545e4ca(cs_arg0); }()); auto cs_right = pls::game::cs_f32(0x41200000u); return (cs_left * cs_right); }())));
pls::cs::Array<std::int32_t> v_array2_1144 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(43)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = v_array2_1144; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(45)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = v_array2_1144; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(42)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = v_array2_1144; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(47)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = v_array2_1144; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = v_array2_1144; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_num_1089;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = v_i_728; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_array2_1144; pls::game::cs_require(cs_target)->cs_110453e9e91b0c62 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_value = v_array2_1144; pls::game::cs_require(cs_target)->cs_ee2adc9e2cf23dac = cs_value; return cs_value; }());
}
}
} else if ((([&]() -> bool { auto cs_left = v_i_728; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_774; return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_d7151221c9064cfc = cs_value; return cs_value; }());
}
}
}
}
}
// M:kairo.unity.ui.TextLayout._makeTextBlocks
void cs_6fa1a845e6bfcbdf(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{try{
bool v_flag_8736{};
pls::cs::Ref<pls::kairo::Font> v_font_8851{};
bool v_flag2_8949{};
std::int32_t v_blink_9180{};
std::int32_t v_colorOfRGB_9199{};
std::int32_t v_num_9228{};
std::int32_t v_num2_9255{};
pls::cs::Ref<pls::kairo::Font> v_font2_9287{};
std::int32_t v_height_9359{};
float v_num3_9397{};
float v_num4_9418{};
float v_num5_9439{};
std::int32_t v_num6_9458{};
pls::cs::String v_text_9500{};
bool v_flag3_9581{};
bool v_flag4_9604{};
pls::cs::Ref<cs_43347b50b6a10e65> v_textBlock_9632{};
pls::cs::Ref<pls::generated::cs_15e3f7b692b3f380> v_fastVector_9665{};
std::int32_t v_i_9709{};
char16_t v_c_9756{};
bool v_flag5_9786{};
std::int32_t v_num7_9810{};
pls::cs::Array<pls::cs::String> v_array_9834{};
std::int32_t v_num8_9857{};
std::int32_t v_num9_10000{};
pls::cs::String v_text2_10024{};
std::int32_t v_j_10077{};
std::int32_t v_num10_10396{};
std::int32_t v_num11_10418{};
pls::cs::String v_text3_10443{};
pls::cs::Array<pls::cs::String> v_array2_10918{};
pls::cs::Ref<cs_ec6b992b38927bb3> v_pictograph_12667{};
std::int32_t v_num12_12810{};
std::int32_t v_num13_13009{};
float v_x_13156{};
float v_y_13173{};
pls::cs::Array<std::int32_t> v_boundingRect_13226{};
pls::cs::Array<std::int16_t> v_boundingRect2_13547{};
float v_num14_13840{};
float v_num15_14076{};
bool v_flag6_14360{};
std::int32_t v_num16_14654{};
std::int32_t v_k_14692{};
float v_num17_14927{};
std::int32_t v_l_14955{};
char16_t v_c2_15000{};
std::int32_t v_num18_15277{};
std::int32_t v_m_16204{};
pls::cs::Ref<cs_43347b50b6a10e65> v_textBlock2_16267{};
std::int32_t v_n_17873{};
pls::cs::Ref<cs_43347b50b6a10e65> v_textBlock3_17934{};
std::int32_t v_num19_18519{};
std::int32_t v_num20_18971{};
{
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_227dfebb6c8a16fe = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba4a660cefbde7ca; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_43347b50b6a10e65>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); pls::game::cs_require(cs_target)->cs_b0b620cb9221d56f = cs_value; return cs_value; }());
throw pls::cs::ReturnFlow<void>{};
}
([&]() -> void { bool cs_arg0 = false; pls::kairo::Graphics::PushAutoTextLayout(cs_arg0); }());
v_flag_8736 = false;
if ((((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))) && ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_139ae560152ed14a; }())) && ([&](){auto cs_text=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba4a660cefbde7ca; }());auto cs_char=char16_t(32);return pls::game::cs_index_char1(cs_text,cs_char)!=-1;}()))) {
([&]() { auto cs_value = true; v_flag_8736 = cs_value; return cs_value; }());
}
v_font_8851 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }());
if ((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f0b2f99b656c3ee; }())))) {
([&]() -> void { bool cs_arg0 = false; pls::kairo::Font::PushLocalizeSetting(cs_arg0); }());
}
v_flag2_8949 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsNeedLocalizeScale(); }());
if (v_flag2_8949) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Font> { pls::cs::Ref<pls::kairo::Font> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }()); return pls::cs::make_ref<pls::kairo::Font>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_97bc9535d0f50be9 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetLocalizeScale(); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
([&]() -> void { bool cs_arg0 = false; pls::kairo::Font::PushLocalizeSetting(cs_arg0); }());
}
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = true; pls::kairo::Font::LT_DISABLE_TEXTLAYOUT = cs_value; return cs_value; }());
v_blink_9180 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
v_colorOfRGB_9199 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4332ccd66fc0b845; }());
v_num_9228 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_713f699cef7d60cc; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return (cs_left & cs_right); }());
v_num2_9255 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_713f699cef7d60cc; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x70ull)); return (cs_left & cs_right); }());
v_font2_9287 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { pls::cs::Ref<pls::kairo::Font> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }()); return pls::cs::make_ref<pls::kairo::Font>(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); float cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_780b408992a932d9; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->AdjustFontSize(cs_arg0); }());
v_height_9359 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
v_num3_9397 = pls::game::cs_f32(0x00000000u);
v_num4_9418 = pls::game::cs_f32(0x00000000u);
v_num5_9439 = pls::game::cs_f32(0x00000000u);
v_num6_9458 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_5908181b4e6e403a = cs_value; return cs_value; }());
v_text_9500 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba4a660cefbde7ca; }()); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x000a" u"",1)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());
v_flag3_9581 = true;
v_flag4_9604 = true;
v_textBlock_9632 = pls::cs::Ref<cs_43347b50b6a10e65>{};
v_fastVector_9665 = ([&]() -> pls::cs::Ref<pls::generated::cs_15e3f7b692b3f380> { return pls::generated::cs_617649d3cca73756(); }());
for (v_i_9709 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_9709; auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_9500; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_9709; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_9709 = cs_new; return cs_old; }())) {
v_c_9756 = ([&]() -> char16_t { pls::cs::String cs_arg0 = v_text_9500; std::int32_t cs_arg1 = v_i_9709; return pls::generated::cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }());
v_flag5_9786 = false;
v_num7_9810 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
v_array_9834 = pls::cs::Array<pls::cs::String>{};
v_num8_9857 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_9756); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(60)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_text_9500; auto cs_arg1 = char16_t(62); auto cs_arg2 = v_i_9709; return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }()); v_num8_9857 = cs_value; return cs_value; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num8_9857; auto cs_right = v_i_9709; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return (cs_left > cs_right); }())) {
continue;
}
v_num9_10000 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
v_text2_10024 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text_9500; std::int32_t cs_arg1 = v_i_9709; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num8_9857; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }());
for (v_j_10077 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_10077; auto cs_right = (cs_44e247f7ea696755()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_10077; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_10077 = cs_new; return cs_old; }())) {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = cs_44e247f7ea696755(); auto cs_index = v_j_10077; return cs_array.get_Item(cs_index); }()); auto cs_arg1 = v_text2_10024; return pls::cs::culture_compare_to(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) || (((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = cs_44e247f7ea696755(); auto cs_index = v_j_10077; return cs_array.get_Item(cs_index); }()); auto cs_arg1 = char16_t(61); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text2_10024; auto cs_arg1 = char16_t(61); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_arg0 = v_text2_10024; auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = cs_44e247f7ea696755(); auto cs_index = v_j_10077; return cs_array.get_Item(cs_index); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = cs_44e247f7ea696755(); auto cs_index = v_j_10077; return cs_array.get_Item(cs_index); }()); auto cs_arg1 = char16_t(61); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }()))))) {
([&]() { auto cs_value = v_j_10077; v_num9_10000 = cs_value; return cs_value; }());
break;
}
}
if (([&]() -> bool { auto cs_left = v_num9_10000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = v_num8_9857; v_i_9709 = cs_value; return cs_value; }());
v_num10_10396 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
v_num11_10418 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
v_text3_10443 = pls::cs::String(std::u16string(u"",0));
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text2_10024; auto cs_arg1 = char16_t(61); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text2_10024; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text2_10024; auto cs_arg1 = char16_t(61); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text2_10024; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::generated::cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); v_text3_10443 = cs_value; return cs_value; }());
try {
([&]() { auto cs_value = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text3_10443; return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }()); v_num10_10396 = cs_value; return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_264) {auto cs_exception_264=pls::cs::capture_exception(cs_caught_264);
if(pls::cs::exception_is(cs_exception_264,"System.Exception")) {{

}}
else {throw;} }
try {
([&]() { auto cs_value = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text3_10443; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return cs_a097ed679be03337(cs_arg0,cs_arg1); }()); v_num11_10418 = cs_value; return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_265) {auto cs_exception_265=pls::cs::capture_exception(cs_caught_265);
if(pls::cs::exception_is(cs_exception_265,"System.Exception")) {{

}}
else {throw;} }
if (((([&]() -> bool { auto cs_left = v_num9_10000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num11_10418; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text3_10443; auto cs_arg1 = char16_t(44); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) {
v_array2_10918 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_text3_10443; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = (v_array2_10918).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_num11_10418; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array2_10918; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shl_i32(cs_left,cs_right); }()); auto cs_value = (cs_old | cs_rhs); v_num11_10418 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = (v_array2_10918).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_old = v_num11_10418; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array2_10918; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }()); auto cs_value = (cs_old | cs_rhs); v_num11_10418 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_right = (v_array2_10918).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_old = v_num11_10418; auto cs_rhs = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array2_10918; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }()); auto cs_value = (cs_old | cs_rhs); v_num11_10418 = cs_value; return cs_value; }());
}
}
}
{
if ((([&]() -> bool { auto cs_left = v_num9_10000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num11_10418; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num11_10418; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num11_10418; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_colorOfRGB_9199 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_num9_10000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4332ccd66fc0b845; }()); v_colorOfRGB_9199 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_num9_10000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); std::int32_t cs_arg0 = v_num10_10396; auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_height_9359; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); v_height_9359 = cs_value; return cs_value; }());
}
} else if ((([&]() -> bool { auto cs_left = v_num9_10000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_height_9359; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); v_height_9359 = cs_value; return cs_value; }());
}
} else if ((([&]() -> bool { auto cs_left = v_num9_10000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); std::int32_t cs_arg0 = v_num10_10396; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetStyle(cs_arg0); }());
} else if ((([&]() -> bool { auto cs_left = v_num9_10000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetStyle(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetStyle(cs_arg0); }());
} else if ((([&]() -> bool { auto cs_left = v_num9_10000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = v_num10_10396; v_blink_9180 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_num9_10000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_blink_9180 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_num9_10000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left == cs_right); }()))) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text3_10443; auto cs_arg1 = char16_t(108); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); v_num_9228 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text3_10443; auto cs_arg1 = char16_t(99); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); v_num_9228 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text3_10443; auto cs_arg1 = char16_t(114); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); v_num_9228 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text3_10443; auto cs_arg1 = char16_t(116); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); v_num2_9255 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text3_10443; auto cs_arg1 = char16_t(109); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); v_num2_9255 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text3_10443; auto cs_arg1 = char16_t(98); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); v_num2_9255 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::game::cs_f32(0x00000000u); v_num3_9397 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::game::cs_f32(0x00000000u); v_num4_9418 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_num9_10000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return (cs_left == cs_right); }()))) {
{
([&]() { auto cs_value = true; v_flag5_9786 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_text3_10443; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }()); v_array_9834 = cs_value; return cs_value; }());
v_pictograph_12667 = ([&]() -> pls::cs::Ref<cs_ec6b992b38927bb3> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_9834; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_e03b6c2a25908498(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_pictograph_12667); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
goto cs_label_recoveredSwitchExit_11784;
}
v_num12_12810 = ([&]() -> std::int32_t { auto cs_receiver = v_pictograph_12667; return cs_421aa514c9c5d059(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = (v_array_9834).length(); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_array = v_array_9834; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_9834; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::String(std::u16string(u"\x221e" u"",1)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); v_num12_12810 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array_9834; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); v_num12_12810 = cs_value; return cs_value; }());
}
}
v_num13_13009 = ([&]() -> std::int32_t { auto cs_receiver = v_pictograph_12667; return cs_9e317dd489a1ce8e(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_right = (v_array_9834).length(); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_array = v_array_9834; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array_9834; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); v_num13_13009 = cs_value; return cs_value; }());
}
v_x_13156 = float{};
v_y_13173 = float{};
if (([&]() -> bool { auto cs_left = v_num12_12810; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
v_boundingRect_13226 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() -> pls::cs::Ref<cs_9cade6927d6e0bf3> { auto cs_receiver = v_pictograph_12667; return cs_a7b9da8fd8e2e224(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a507412f284f974c(cs_receiver); }());
([&]() { auto cs_value = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_boundingRect_13226; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_boundingRect_13226; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); v_x_13156 = cs_value; return cs_value; }());
([&]() { auto cs_value = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_boundingRect_13226; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_boundingRect_13226; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); v_y_13173 = cs_value; return cs_value; }());
} else {
if (([&]() -> bool { auto cs_left = v_num12_12810; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() -> pls::cs::Ref<cs_9cade6927d6e0bf3> { auto cs_receiver = v_pictograph_12667; return cs_a7b9da8fd8e2e224(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_012842e8ba39224c(cs_receiver); }()); return (cs_left >= cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() -> pls::cs::Ref<cs_9cade6927d6e0bf3> { auto cs_receiver = v_pictograph_12667; return cs_a7b9da8fd8e2e224(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_012842e8ba39224c(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num12_12810 = cs_value; return cs_value; }());
}
v_boundingRect2_13547 = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() -> pls::cs::Ref<cs_9cade6927d6e0bf3> { auto cs_receiver = v_pictograph_12667; return cs_a7b9da8fd8e2e224(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }())); std::int32_t cs_arg0 = v_num12_12810; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e8833b0a463d9a55(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect2_13547; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect2_13547; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); return pls::cs::add_i32(cs_left,cs_right); }())); v_x_13156 = cs_value; return cs_value; }());
([&]() { auto cs_value = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect2_13547; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect2_13547; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); return pls::cs::add_i32(cs_left,cs_right); }())); v_y_13173 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = v_pictograph_12667; return cs_f7a1a6d38de745a1(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }())); auto& cs_arg0 = v_x_13156; auto& cs_arg1 = v_y_13173; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_76f083d6ddd878de(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num13_13009; auto cs_right = pls::cs::conv_i32((([&]() -> float { auto cs_left = v_x_13156; auto cs_right = pls::game::cs_f32(0x3f666666u); return (cs_left + cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = v_pictograph_12667; return cs_f42f663f078ddc9a(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num7_9810 = cs_value; return cs_value; }());
v_num14_13840 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); auto cs_right = pls::game::cs_f32(0x41400000u); return (cs_left / cs_right); }());
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(v_num7_9810); auto cs_right = v_num14_13840; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); v_num7_9810 = cs_value; return cs_value; }());
}
}
cs_label_recoveredSwitchExit_11784: ;
;
}
([&]() { auto cs_value = true; v_flag3_9581 = cs_value; return cs_value; }());
if ((!(v_flag5_9786))) {
continue;
}
}
}
v_num15_14076 = pls::game::cs_f32(0x00000000u);
if (v_flag5_9786) {
([&]() { auto cs_value = static_cast<float>(v_num7_9810); v_num15_14076 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_9756); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(10)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_9756); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(13)); return (cs_left != cs_right); }()))) {
if (([&]() { auto cs_left = pls::cs::box(v_textBlock_9632); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = (([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_receiver = v_textBlock_9632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b17fa7396bdbcd90; }()); auto cs_right = pls::game::cs_char_string(v_c_9756); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidthF(cs_arg0); }()); auto cs_right = ([&]() { auto cs_receiver = v_textBlock_9632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_213a47847f8db5d2; }()); return (cs_left - cs_right); }())); v_num15_14076 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { char16_t cs_arg0 = v_c_9756; return pls::generated::cs_f8c13f883911de4b(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidthF(cs_arg0); }()); v_num15_14076 = cs_value; return cs_value; }());
}
}
v_flag6_14360 = ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_9756); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(10)); return (cs_left == cs_right); }());
if (((((!(v_flag6_14360)) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = v_num5_9439; auto cs_right = v_num15_14076; return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = v_num3_9397; return (cs_left - cs_right); }()); return (cs_left > cs_right); }())) && ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_139ae560152ed14a; }()))) {
if ((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_511fb284df94c7d6; }()) && ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_9756); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(12290)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_9756); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(12289)); return (cs_left == cs_right); }()))))) {
([&]() { auto cs_value = pls::game::cs_f32(0x00000000u); v_num15_14076 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = true; v_flag6_14360 = cs_value; return cs_value; }());
}
}
if (((v_flag_8736 && v_flag4_9604) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_9756); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(32)); return (cs_left != cs_right); }()))) {
v_num16_14654 = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_9500; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }());
for (v_k_14692 = v_i_9709; ([&]() -> bool { auto cs_left = v_k_14692; auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_9500; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_14692; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_14692 = cs_new; return cs_old; }())) {
if (((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() -> char16_t { pls::cs::String cs_arg0 = v_text_9500; std::int32_t cs_arg1 = v_k_14692; return pls::generated::cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(32)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() -> char16_t { pls::cs::String cs_arg0 = v_text_9500; std::int32_t cs_arg1 = v_k_14692; return pls::generated::cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(10)); return (cs_left == cs_right); }())) || ([&]() -> bool { pls::cs::String cs_arg0 = v_text_9500; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); std::int32_t cs_arg2 = v_k_14692; return pls::generated::cs_9edf4346f293871d(cs_arg0,cs_arg1,cs_arg2); }()))) {
([&]() { auto cs_value = v_k_14692; v_num16_14654 = cs_value; return cs_value; }());
break;
}
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num16_14654; auto cs_right = v_i_9709; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
v_num17_14927 = pls::game::cs_f32(0x00000000u);
for (v_l_14955 = v_i_9709; ([&]() -> bool { auto cs_left = v_l_14955; auto cs_right = v_num16_14654; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_14955; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_14955 = cs_new; return cs_old; }())) {
v_c2_15000 = ([&]() -> char16_t { pls::cs::String cs_arg0 = v_text_9500; std::int32_t cs_arg1 = v_l_14955; return pls::generated::cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c2_15000); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(60)); return (cs_left == cs_right); }()) && (((((((([&]() -> bool { pls::cs::String cs_arg0 = v_text_9500; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0063" u"\x006f" u"\x003d" u"",4)); std::int32_t cs_arg2 = v_l_14955; return pls::generated::cs_9edf4346f293871d(cs_arg0,cs_arg1,cs_arg2); }()) || ([&]() -> bool { pls::cs::String cs_arg0 = v_text_9500; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0073" u"\x0069" u"\x003d" u"",4)); std::int32_t cs_arg2 = v_l_14955; return pls::generated::cs_9edf4346f293871d(cs_arg0,cs_arg1,cs_arg2); }())) || ([&]() -> bool { pls::cs::String cs_arg0 = v_text_9500; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0073" u"\x0074" u"\x003d" u"",4)); std::int32_t cs_arg2 = v_l_14955; return pls::generated::cs_9edf4346f293871d(cs_arg0,cs_arg1,cs_arg2); }())) || ([&]() -> bool { pls::cs::String cs_arg0 = v_text_9500; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0070" u"\x006f" u"\x003d" u"",4)); std::int32_t cs_arg2 = v_l_14955; return pls::generated::cs_9edf4346f293871d(cs_arg0,cs_arg1,cs_arg2); }())) || ([&]() -> bool { pls::cs::String cs_arg0 = v_text_9500; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x006c" u"\x003d" u"",4)); std::int32_t cs_arg2 = v_l_14955; return pls::generated::cs_9edf4346f293871d(cs_arg0,cs_arg1,cs_arg2); }())) || ([&]() -> bool { pls::cs::String cs_arg0 = v_text_9500; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x002f" u"",2)); std::int32_t cs_arg2 = v_l_14955; return pls::generated::cs_9edf4346f293871d(cs_arg0,cs_arg1,cs_arg2); }())) || ([&]() -> bool { pls::cs::String cs_arg0 = v_text_9500; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); std::int32_t cs_arg2 = v_l_14955; return pls::generated::cs_9edf4346f293871d(cs_arg0,cs_arg1,cs_arg2); }()))))) {
v_num18_15277 = ([&]() -> std::int32_t { auto cs_arg0 = v_text_9500; auto cs_arg1 = char16_t(62); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_l_14955; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = v_num18_15277; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = v_num18_15277; v_l_14955 = cs_value; return cs_value; }());
continue;
}
}
([&]() { auto cs_old = v_num17_14927; auto cs_rhs = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { char16_t cs_arg0 = v_c2_15000; return pls::generated::cs_f8c13f883911de4b(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidthF(cs_arg0); }()); auto cs_value = (cs_old + cs_rhs); v_num17_14927 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = v_num5_9439; auto cs_right = v_num17_14927; return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = v_num3_9397; return (cs_left - cs_right); }()); return (cs_left > cs_right); }()))) {
if (([&]() -> bool { auto cs_left = v_i_9709; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = false; v_flag_8736 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = true; v_flag6_14360 = cs_value; return cs_value; }());
}
}
}
([&]() { auto cs_value = false; v_flag4_9604 = cs_value; return cs_value; }());
}
if (((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_9756); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(32)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = true; v_flag4_9604 = cs_value; return cs_value; }());
if (v_flag6_14360) {
([&]() { auto cs_value = pls::game::cs_f32(0x00000000u); v_num15_14076 = cs_value; return cs_value; }());
}
}
if (v_flag6_14360) {
if (([&]() -> bool { auto cs_left = v_num_9228; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = (([&]() -> float { auto cs_left = v_num3_9397; auto cs_right = ([&]() -> float { auto cs_left = v_num5_9439; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left - cs_right); }())); v_num3_9397 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_num3_9397; auto cs_right = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = v_num3_9397; return (cs_left - cs_right); }())); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_num5_9439; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left - cs_right); }())); v_num3_9397 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = v_num_9228; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {
if ((!(((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }())))))) {
([&]() { auto cs_value = (([&]() -> float { auto cs_left = v_num3_9397; auto cs_right = v_num5_9439; return (cs_left - cs_right); }())); v_num3_9397 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = v_num5_9439; return (cs_left - cs_right); }())); v_num3_9397 = cs_value; return cs_value; }());
}
}
for (v_m_16204 = v_num6_9458; ([&]() -> bool { auto cs_left = v_m_16204; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_9665); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_16204; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_16204 = cs_new; return cs_old; }())) {
v_textBlock2_16267 = pls::cs::unbox<pls::cs::Ref<cs_43347b50b6a10e65>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_9665); std::int32_t cs_arg0 = v_m_16204; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }()));
([&]() { auto cs_target = v_textBlock2_16267; auto cs_value = v_num3_9397; pls::game::cs_require(cs_target)->cs_54138a074e43426e = cs_value; return cs_value; }());
([&]() { auto cs_target = v_textBlock2_16267; auto cs_value = ([&]() -> float { auto cs_left = v_num4_9418; auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_height_9359; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = v_textBlock2_16267; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5951a1be8973598c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()))); return (cs_left + cs_right); }()); pls::game::cs_require(cs_target)->cs_555538e920ee71b1 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num3_9397; auto cs_rhs = ([&]() { auto cs_receiver = v_textBlock2_16267; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_213a47847f8db5d2; }()); auto cs_value = (cs_old + cs_rhs); v_num3_9397 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::game::cs_f32(0x00000000u); v_num5_9439 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_9665); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); v_num6_9458 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::game::cs_f32(0x00000000u); v_num3_9397 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num4_9418; auto cs_rhs = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_height_9359; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f4a451961599aab2; }()); return pls::cs::add_i32(cs_left,cs_right); }()))); auto cs_value = (cs_old + cs_rhs); v_num4_9418 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); v_height_9359 = cs_value; return cs_value; }());
([&]() { auto cs_value = true; v_flag3_9581 = cs_value; return cs_value; }());
}
if ((((([&]() -> bool { auto cs_left = v_num15_14076; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left > cs_right); }()) || v_flag5_9786)) && v_flag3_9581)) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_43347b50b6a10e65> { pls::cs::Ref<cs_87fb4d668ea5580b> cs_arg0 = cs_this; pls::cs::Ref<pls::kairo::Font> cs_arg1 = v_font2_9287; std::int32_t cs_arg2 = v_colorOfRGB_9199; float cs_arg3 = pls::game::cs_f32(0x00000000u); float cs_arg4 = pls::game::cs_f32(0x00000000u); std::int32_t cs_arg5 = v_blink_9180; return cs_105f56890100ea40(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()); v_textBlock_9632 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_9665); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_textBlock_9632); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b6a40aa7b6cac314(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = false; v_flag3_9581 = cs_value; return cs_value; }());
}
if (v_flag5_9786) {
([&]() { auto cs_target = v_textBlock_9632; auto cs_value = true; pls::game::cs_require(cs_target)->cs_76ef6fdfcd6628c6 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_textBlock_9632; auto cs_value = v_array_9834; pls::game::cs_require(cs_target)->cs_55c8b74f6db29a7a = cs_value; return cs_value; }());
([&]() { auto cs_target = v_textBlock_9632; auto cs_value = static_cast<float>(v_num7_9810); pls::game::cs_require(cs_target)->cs_213a47847f8db5d2 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num5_9439; auto cs_rhs = static_cast<float>(v_num7_9810); auto cs_value = (cs_old + cs_rhs); v_num5_9439 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5908181b4e6e403a; }()); auto cs_right = v_num5_9439; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_num5_9439; pls::game::cs_require(cs_target)->cs_5908181b4e6e403a = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_43347b50b6a10e65> { pls::cs::Ref<cs_87fb4d668ea5580b> cs_arg0 = cs_this; pls::cs::Ref<pls::kairo::Font> cs_arg1 = v_font2_9287; std::int32_t cs_arg2 = v_colorOfRGB_9199; float cs_arg3 = pls::game::cs_f32(0x00000000u); float cs_arg4 = pls::game::cs_f32(0x00000000u); std::int32_t cs_arg5 = v_blink_9180; return cs_105f56890100ea40(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()); v_textBlock_9632 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_9665); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_textBlock_9632); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b6a40aa7b6cac314(cs_receiver,cs_arg0); }());
} else if (([&]() -> bool { auto cs_left = v_num15_14076; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font2_9287); pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_receiver = v_textBlock_9632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b17fa7396bdbcd90; }()); auto cs_right = pls::game::cs_char_string(v_c_9756); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidthF(cs_arg0); }()); auto cs_right = ([&]() { auto cs_receiver = v_textBlock_9632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_213a47847f8db5d2; }()); return (cs_left - cs_right); }()); v_num15_14076 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_textBlock_9632; auto cs_old = pls::game::cs_require(cs_target)->cs_b17fa7396bdbcd90; auto cs_rhs = v_c_9756; auto cs_value = pls::cs::String::concat(cs_old,pls::game::cs_char_string(cs_rhs)); pls::game::cs_require(cs_target)->cs_b17fa7396bdbcd90 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_textBlock_9632; auto cs_old = pls::game::cs_require(cs_target)->cs_213a47847f8db5d2; auto cs_rhs = v_num15_14076; auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_213a47847f8db5d2 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num5_9439; auto cs_rhs = v_num15_14076; auto cs_value = (cs_old + cs_rhs); v_num5_9439 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5908181b4e6e403a; }()); auto cs_right = v_num5_9439; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_num5_9439; pls::game::cs_require(cs_target)->cs_5908181b4e6e403a = cs_value; return cs_value; }());
}
}
}
if (([&]() -> bool { auto cs_left = v_num6_9458; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_9665); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); return (cs_left < cs_right); }())) {
if (([&]() -> bool { auto cs_left = v_num_9228; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
if ((!(((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }())))))) {
([&]() { auto cs_value = (([&]() -> float { auto cs_left = v_num3_9397; auto cs_right = ([&]() -> float { auto cs_left = v_num5_9439; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left - cs_right); }())); v_num3_9397 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_num3_9397; auto cs_right = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = v_num3_9397; return (cs_left - cs_right); }())); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_num5_9439; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left - cs_right); }())); v_num3_9397 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = v_num_9228; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {
if ((!(((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }())))))) {
([&]() { auto cs_value = (([&]() -> float { auto cs_left = v_num3_9397; auto cs_right = v_num5_9439; return (cs_left - cs_right); }())); v_num3_9397 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = v_num5_9439; return (cs_left - cs_right); }())); v_num3_9397 = cs_value; return cs_value; }());
}
}
for (v_n_17873 = v_num6_9458; ([&]() -> bool { auto cs_left = v_n_17873; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_9665); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_17873; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_17873 = cs_new; return cs_old; }())) {
v_textBlock3_17934 = pls::cs::unbox<pls::cs::Ref<cs_43347b50b6a10e65>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_9665); std::int32_t cs_arg0 = v_n_17873; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }()));
([&]() { auto cs_target = v_textBlock3_17934; auto cs_value = v_num3_9397; pls::game::cs_require(cs_target)->cs_54138a074e43426e = cs_value; return cs_value; }());
([&]() { auto cs_target = v_textBlock3_17934; auto cs_value = ([&]() -> float { auto cs_left = v_num4_9418; auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_height_9359; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = v_textBlock3_17934; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5951a1be8973598c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()))); return (cs_left + cs_right); }()); pls::game::cs_require(cs_target)->cs_555538e920ee71b1 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num3_9397; auto cs_rhs = ([&]() { auto cs_receiver = v_textBlock3_17934; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_213a47847f8db5d2; }()); auto cs_value = (cs_old + cs_rhs); v_num3_9397 = cs_value; return cs_value; }());
}
([&]() { auto cs_old = v_num4_9418; auto cs_rhs = static_cast<float>(v_height_9359); auto cs_value = (cs_old + cs_rhs); v_num4_9418 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num2_9255; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return (cs_left == cs_right); }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> float { auto cs_left = (-(v_num4_9418)); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); v_num4_9418 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = v_num4_9418; return (cs_left - cs_right); }())); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); v_num4_9418 = cs_value; return cs_value; }());
}
} else if (([&]() -> bool { auto cs_left = v_num2_9255; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); return (cs_left == cs_right); }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = (-(v_num4_9418)); v_num4_9418 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = v_num4_9418; return (cs_left - cs_right); }()); v_num4_9418 = cs_value; return cs_value; }());
}
} else {
([&]() { auto cs_value = pls::game::cs_f32(0x00000000u); v_num4_9418 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_9418; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::game::cs_f32(0x00000000u); v_num4_9418 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_43347b50b6a10e65>>::make(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_9665); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }())); pls::game::cs_require(cs_target)->cs_b0b620cb9221d56f = cs_value; return cs_value; }());
for (v_num19_18519 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num19_18519; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num19_18519; auto cs_new = pls::cs::add_i32(cs_old,1); v_num19_18519 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_num19_18519; auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_43347b50b6a10e65>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_9665); std::int32_t cs_arg0 = v_num19_18519; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_num19_18519; return cs_array.get_Item(cs_index); }()); auto cs_old = pls::game::cs_require(cs_target)->cs_555538e920ee71b1; auto cs_rhs = v_num4_9418; auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_555538e920ee71b1 = cs_value; return cs_value; }());
}
}}, [&]() {
([&]() { auto cs_value = false; pls::kairo::Font::LT_DISABLE_TEXTLAYOUT = cs_value; return cs_value; }());
if (v_flag2_8949) {
([&]() -> void { pls::kairo::Font::PopLocalizeSetting(); }());
([&]() { auto cs_target = cs_this; auto cs_value = v_font_8851; pls::game::cs_require(cs_target)->cs_97bc9535d0f50be9 = cs_value; return cs_value; }());
}
if ((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f0b2f99b656c3ee; }())))) {
([&]() -> void { pls::kairo::Font::PopLocalizeSetting(); }());
}
([&]() -> bool { return pls::kairo::Graphics::PopAutoTextLayout(); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }())) {
for (v_num20_18971 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num20_18971; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num20_18971; auto cs_new = pls::cs::add_i32(cs_old,1); v_num20_18971 = cs_new; return cs_old; }())) {
if ((([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_num20_18971; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_54138a074e43426e; }()); auto cs_right = ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_num20_18971; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_213a47847f8db5d2; }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); return (cs_left > cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_num20_18971; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_555538e920ee71b1; }()); auto cs_right = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_num20_18971; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5951a1be8973598c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); return (cs_left + cs_right); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); return (cs_left > cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_227dfebb6c8a16fe = cs_value; return cs_value; }());
break;
}
}
}
});
}
}catch(const pls::cs::ReturnFlow<void>& cs_return){return;}}
}
}
// M:kairo.unity.ui.TextLayout.#ctor
pls::cs::Ref<cs_87fb4d668ea5580b> cs_049b13b83157cd05() { cs_init_87fb4d668ea5580b();
{ auto cs_this = pls::cs::make_ref<cs_87fb4d668ea5580b>(); cs_049b13b83157cd05_init(cs_this); return cs_this; }
}
void cs_049b13b83157cd05_init(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this) {
([&]() { bool cs_arg0 = (!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))); bool cs_arg1 = true; cs_6a4fbab3f7192191_init(std::static_pointer_cast<cs_87fb4d668ea5580b>(cs_this),cs_arg0,cs_arg1); }());
{

}
}
// M:kairo.unity.ui.TextLayout.#ctor(System.Boolean,System.Boolean)
pls::cs::Ref<cs_87fb4d668ea5580b> cs_6a4fbab3f7192191(bool v_autoScale,bool v_localizeFontEnable) { cs_init_87fb4d668ea5580b();
{ auto cs_this = pls::cs::make_ref<cs_87fb4d668ea5580b>(); cs_6a4fbab3f7192191_init(cs_this,v_autoScale,v_localizeFontEnable); return cs_this; }
}
void cs_6a4fbab3f7192191_init(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this,bool v_autoScale,bool v_localizeFontEnable) {
cs_this->cs_b0b620cb9221d56f = pls::cs::Array<pls::cs::Ref<cs_43347b50b6a10e65>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ffa9a8d9e34e056c(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = v_autoScale; pls::game::cs_require(cs_target)->cs_138c255898ffd047 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_localizeFontEnable; pls::game::cs_require(cs_target)->cs_8f0b2f99b656c3ee = cs_value; return cs_value; }());
}
}
// M:kairo.unity.ui.TextLayout.AddCache(kairo.unity.ui.TextLayout)
void cs_26ad55d0be317540(pls::cs::Ref<cs_87fb4d668ea5580b> v_lay) { cs_init_87fb4d668ea5580b();
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = cs_e474d7417b077725(); auto cs_index = cs_0d5492cd1d90fb7a(); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_array = cs_e474d7417b077725(); auto cs_index = cs_0d5492cd1d90fb7a(); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f61df7e0767e466a(cs_receiver); }());
}
([&]() { auto cs_target = cs_e474d7417b077725(); auto cs_index = cs_0d5492cd1d90fb7a(); auto cs_value = v_lay;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = cs_0d5492cd1d90fb7a(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = (cs_e474d7417b077725()).length(); return pls::cs::mod_i32(cs_left,cs_right); }()); cs_0d5492cd1d90fb7a() = cs_value; return cs_value; }());
}
}
// M:kairo.unity.ui.TextLayout.Dispose
void cs_f61df7e0767e466a(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_24367 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_24367; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_24367; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_24367 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_43347b50b6a10e65>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_num_24367; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_41714700f28172c8(cs_receiver); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_num_24367; auto cs_value = pls::cs::Ref<cs_43347b50b6a10e65>{};cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<pls::kairo::Font>{}; pls::game::cs_require(cs_target)->cs_97bc9535d0f50be9 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String(std::u16string(u"",0)); pls::game::cs_require(cs_target)->cs_ba4a660cefbde7ca = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void cs_8266e31fa35e0e2a(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_dx,float v_dy,std::int32_t v_scrollV) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
bool v_flag_20511 = false;
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckLocalMatrix(); }())) {
([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }());
pls::cs::Ref<cs_f1dd8f2aa583774c> v_transRectGUI_20636 = ([&]() -> pls::cs::Ref<cs_f1dd8f2aa583774c> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = pls::game::cs_f32(0x00000000u); float cs_arg1 = pls::game::cs_f32(0x00000000u); float cs_arg2 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); auto cs_arg4 = pls::cs::Ref<cs_f1dd8f2aa583774c>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6b2275fd3b361511(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
float v_num_20725 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_f1dd8f2aa583774c>>(v_transRectGUI_20636); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bacff363ff8ad693(cs_receiver); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); return (cs_left / cs_right); }());
float v_num2_20782 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_f1dd8f2aa583774c>>(v_transRectGUI_20636); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_43d7fa04d81da9ff(cs_receiver); }()); auto cs_right = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); return (cs_left / cs_right); }()); auto cs_right = v_num_20725; return (cs_left / cs_right); }());
if (([&]() -> bool { auto cs_left = v_num2_20782; auto cs_right = pls::game::cs_f32(0x3f800000u); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = true; v_flag_20511 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { float cs_arg0 = v_num2_20782; float cs_arg1 = pls::game::cs_f32(0x3f800000u); auto cs_arg2 = pls::game::cs_f32(0x00000000u); auto cs_arg3 = pls::game::cs_f32(0x00000000u); return cs_e8ceb82625f5a10e(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9d946ea24c94dbc(cs_receiver,cs_arg0); }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto& cs_arg0 = v_dx; auto& cs_arg1 = v_dy; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->BeginLocalCoordination(cs_arg0,cs_arg1); }());
pls::cs::run_finally([&]() -> void { {
([&]() -> void { bool cs_arg0 = false; pls::kairo::Graphics::PushAutoTextLayout(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_780b408992a932d9; }()); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(cs_this); float cs_arg0 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ee4e5e36d9d59ce9(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6fa1a845e6bfcbdf(cs_receiver); }());
}
([&]() -> void { bool cs_arg0 = false; pls::kairo::Font::PushLocalizeSetting(cs_arg0); }());
std::int32_t v_num3_21203 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))) && ([&]() -> bool { auto cs_left = pls::game::cs_f32(0x00000000u); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); v_num3_21203 = cs_value; return cs_value; }());
}
if (((cs_b9bcb985f936ef96() && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = ([&]() -> float { auto cs_left = v_dx; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left - cs_right); }()); float cs_arg1 = ([&]() -> float { auto cs_left = v_dy; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left - cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0x40800000u); return (cs_left + cs_right); }()); float cs_arg3 = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = pls::game::cs_f32(0x40800000u); return (cs_left + cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e6ac3efef08ae1c0(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
if ((((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8df59013aef0194; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_138c255898ffd047; }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }()))) {
std::int32_t v_height_21545 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8df59013aef0194; }());
if (([&]() -> bool { auto cs_left = v_height_21545; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); v_height_21545 = cs_value; return cs_value; }());
}
std::int32_t v_renderingFontSize_21650 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0ce192f490a08aa6(cs_receiver); }());
if (((([&]() -> bool { auto cs_left = v_renderingFontSize_21650; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = v_renderingFontSize_21650; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = v_renderingFontSize_21650; auto cs_right = v_height_21545; return (cs_left < cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = ([&]() -> float { auto cs_left = v_dx; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left - cs_right); }()); float cs_arg1 = ([&]() -> float { auto cs_left = v_dy; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left - cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0x40800000u); return (cs_left + cs_right); }()); float cs_arg3 = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = pls::game::cs_f32(0x40800000u); return (cs_left + cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e6ac3efef08ae1c0(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = ([&]() -> float { auto cs_left = v_dx; auto cs_right = pls::game::cs_f32(0x40400000u); return (cs_left - cs_right); }()); float cs_arg1 = ([&]() -> float { auto cs_left = v_dy; auto cs_right = pls::game::cs_f32(0x40400000u); return (cs_left - cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0x40c00000u); return (cs_left + cs_right); }()); float cs_arg3 = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = pls::game::cs_f32(0x40c00000u); return (cs_left + cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e6ac3efef08ae1c0(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_227dfebb6c8a16fe; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = v_dx; float cs_arg1 = v_dy; float cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); float cs_arg3 = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = static_cast<float>(v_num3_21203); return (cs_left + cs_right); }()); auto cs_arg4 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClipRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
std::int32_t v_num4_22072 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c758e412ac7cc76d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::div_i32(cs_left,cs_right); }());
for (std::int32_t v_i_22105 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_22105; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_22105; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_22105 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = v_num4_22072; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
break;
}
([&]() { auto cs_old = v_num4_22072; auto cs_rhs = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_43347b50b6a10e65>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_i_22105; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = v_dx; float cs_arg2 = ([&]() -> float { auto cs_left = v_dy; auto cs_right = static_cast<float>(v_scrollV); return (cs_left - cs_right); }()); float cs_arg3 = v_dy; float cs_arg4 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); std::int32_t cs_arg5 = v_num4_22072; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f5f0c633a6ccc4ff(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num4_22072 = cs_value; return cs_value; }());
}
} }, [&]() {
([&]() -> void { pls::kairo::Font::PopLocalizeSetting(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->EndLocalCoordination(); }());
if (v_flag_20511) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopMatrix(); }());
}
([&]() -> bool { return pls::kairo::Graphics::PopAutoTextLayout(); }());
});
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_227dfebb6c8a16fe; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopClip(); }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb47e857b8021848; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_fb47e857b8021848; auto cs_new = pls::cs::add_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_fb47e857b8021848 = cs_new; return cs_old; }());
}
}
}
}
// M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.Single,System.Single)
void cs_3d92f78fee96bd83(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_dx,float v_dy) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = v_dx; float cs_arg2 = v_dy; std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8266e31fa35e0e2a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32,System.Int32)
void cs_78b89240a118cc3f(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_text,float v_x,float v_y,std::int32_t v_color,std::int32_t v_anchor) { cs_init_87fb4d668ea5580b();
{
([&]() -> void { pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::Ref<pls::kairo::Graphics> cs_arg1 = v_g; pls::cs::String cs_arg2 = v_text; float cs_arg3 = v_x; float cs_arg4 = v_y; float cs_arg5 = pls::game::cs_f32(0xbf800000u); float cs_arg6 = pls::game::cs_f32(0xbf800000u); std::int32_t cs_arg7 = v_color; std::int32_t cs_arg8 = ([&]() -> std::int32_t { return cs_734e0f1de4f940e6(); }()); std::int32_t cs_arg9 = v_anchor; cs_c60fc12f4b4b165d(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
// M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32)
void cs_393aa8407173c5cb(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_text,float v_x,float v_y,float v_w,float v_h,std::int32_t v_color,std::int32_t v_lineSpace,std::int32_t v_anchor) { cs_init_87fb4d668ea5580b();
{
([&]() -> void { pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::Ref<pls::kairo::Graphics> cs_arg1 = v_g; pls::cs::String cs_arg2 = v_text; float cs_arg3 = v_x; float cs_arg4 = v_y; float cs_arg5 = v_w; float cs_arg6 = v_h; std::int32_t cs_arg7 = v_color; std::int32_t cs_arg8 = v_lineSpace; std::int32_t cs_arg9 = v_anchor; cs_c60fc12f4b4b165d(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
// M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.TextFormat,kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32,System.Int32)
void cs_7650135bd7080a26(pls::cs::Ref<cs_dc09c88a279424b5> v_lf,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_text,float v_x,float v_y,std::int32_t v_color,std::int32_t v_anchor) { cs_init_87fb4d668ea5580b();
{
([&]() -> void { pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = v_lf; pls::cs::Ref<pls::kairo::Graphics> cs_arg1 = v_g; pls::cs::String cs_arg2 = v_text; float cs_arg3 = v_x; float cs_arg4 = v_y; float cs_arg5 = pls::game::cs_f32(0xbf800000u); float cs_arg6 = pls::game::cs_f32(0xbf800000u); std::int32_t cs_arg7 = v_color; std::int32_t cs_arg8 = ([&]() -> std::int32_t { return cs_734e0f1de4f940e6(); }()); std::int32_t cs_arg9 = v_anchor; cs_c60fc12f4b4b165d(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
// M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.TextFormat,kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32)
void cs_c60fc12f4b4b165d(pls::cs::Ref<cs_dc09c88a279424b5> v_lf,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_text,float v_x,float v_y,float v_w,float v_h,std::int32_t v_color,std::int32_t v_lineSpace,std::int32_t v_anchor) { cs_init_87fb4d668ea5580b();
{
pls::cs::Ref<pls::kairo::Font> v_font_25281 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }());
float v_scale_25310 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }());
if (([&]() -> bool { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); v_anchor = cs_value; return cs_value; }());
}
std::int32_t v_num_25386 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
if (((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))) && ([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_25281); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_25281); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_num_25386 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_25281); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
([&]() { auto cs_value = static_cast<float>(pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); float cs_arg0 = v_x; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4a7882bb12bfce3f(cs_receiver,cs_arg0); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())))); v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = static_cast<float>(pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); float cs_arg0 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a6f2c13fea15a192(cs_receiver,cs_arg0); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())))); v_y = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); std::int32_t cs_arg0 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cb4539652f78b54c(cs_receiver,cs_arg0); }()); v_anchor = cs_value; return cs_value; }());
}
bool v_num2_25696 = (((([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_25281); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsNeedLocalizeScale(); }()));
if (v_num2_25696) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_25281); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_num_25386 = cs_value; return cs_value; }());
std::int32_t v_height_25817 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_25281); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_25281); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_25281); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetLocalizeScale(); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x60ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_y; auto cs_rhs = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_height_25817; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_25281); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); auto cs_value = (cs_old + cs_rhs); v_y = cs_value; return cs_value; }());
}
([&]() -> void { pls::kairo::Font::LockLocalizeSetting(); }());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x60ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_g; auto cs_value = false; pls::game::cs_require(cs_target)->fontScaleOffsetEnable_ = cs_value; return cs_value; }());
}
pls::cs::Ref<cs_87fb4d668ea5580b> v_textLayout_26115 = ([&]() -> pls::cs::Ref<cs_87fb4d668ea5580b> { pls::cs::String cs_arg0 = v_text; float cs_arg1 = v_w; float cs_arg2 = v_h; std::int32_t cs_arg3 = v_color; std::int32_t cs_arg4 = v_lineSpace; std::int32_t cs_arg5 = v_anchor; std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_25281); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); float cs_arg7 = v_scale_25310; return cs_d1f58fb398b6d1fe(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
if (([&]() { auto cs_left = pls::cs::box(v_textLayout_26115); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_26115); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = v_x; float cs_arg2 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3d92f78fee96bd83(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
} else {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_87fb4d668ea5580b> { bool cs_arg0 = true; auto cs_arg1 = true; return cs_6a4fbab3f7192191(cs_arg0,cs_arg1); }()); v_textLayout_26115 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_26115); float cs_arg0 = v_scale_25310; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ee4e5e36d9d59ce9(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_26115); float cs_arg0 = v_w; float cs_arg1 = v_h; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_33bd53255618fce1(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_26115); std::int32_t cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_57d9a00224068c1c(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_26115); std::int32_t cs_arg0 = v_lineSpace; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6c80e48b0bf350ca(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_26115); std::int32_t cs_arg0 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2be5ebb4744281a0(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = v_textLayout_26115; auto cs_value = ([&]() -> bool { auto cs_left = v_lineSpace; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()); pls::game::cs_require(cs_target)->cs_139ae560152ed14a = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_26115); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_25281); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3f8d078441a76042(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_26115); pls::cs::String cs_arg0 = v_text; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e3fe9411871b8a7e(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_26115); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a0d538f5ac080fc1(cs_receiver); }());
([&]() -> void { pls::cs::Ref<cs_87fb4d668ea5580b> cs_arg0 = v_textLayout_26115; cs_26ad55d0be317540(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_26115); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = v_x; float cs_arg2 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3d92f78fee96bd83(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x60ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_g; auto cs_value = true; pls::game::cs_require(cs_target)->fontScaleOffsetEnable_ = cs_value; return cs_value; }());
}
if (v_num2_25696) {
([&]() -> void { pls::kairo::Font::UnlockLocalizeSetting(); }());
}
if (([&]() -> bool { auto cs_left = v_num_25386; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_25281); std::int32_t cs_arg0 = v_num_25386; auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.ui.TextLayout.Flush
void cs_a0d538f5ac080fc1(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d01a0b822cf8b96e; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_c758e412ac7cc76d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }()); auto cs_right = ([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d01a0b822cf8b96e; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i64(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4517b8f329a3a702; }())); return pls::cs::div_i64(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull))); return pls::cs::div_i64(cs_left,cs_right); }()); return pls::cs::sub_i64(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_4fe63b6b69f138f1 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.TextLayout.Frame
void cs_ec2c7667176e288c(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fe63b6b69f138f1; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull))); return pls::cs::sub_i64(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_4fe63b6b69f138f1 = cs_value; return cs_value; }());
}
std::int64_t v_num_22670 = ([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { auto cs_left = (([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fe63b6b69f138f1; }()); return pls::cs::sub_i64(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4517b8f329a3a702; }())); return pls::cs::mul_i64(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull))); return pls::cs::div_i64(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num_22670; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); v_num_22670 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num_22670; auto cs_right = pls::cs::cast_integral<std::int64_t>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d01a0b822cf8b96e; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int64_t>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d01a0b822cf8b96e; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); v_num_22670 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(v_num_22670); pls::game::cs_require(cs_target)->cs_c758e412ac7cc76d = cs_value; return cs_value; }());
for (std::int32_t v_i_22871 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_22871; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_22871; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_22871 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_i_22871; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_192bcc8e433dae59; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_i_22871; return cs_array.get_Item(cs_index); }()); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_i_22871; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7055da6e5ca7b4e7; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_i_22871; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_192bcc8e433dae59; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_7055da6e5ca7b4e7 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6143c284950cea97; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_6143c284950cea97; auto cs_new = pls::cs::add_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_6143c284950cea97 = cs_new; return cs_old; }());
}
}
}
}
// M:kairo.unity.ui.TextLayout.GetHeight
std::int32_t cs_42908a7b6fab813f(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_num_19293 = pls::game::cs_f32(0x00000000u);
for (std::int32_t v_i_19315 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_19315; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_19315; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_19315 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_43347b50b6a10e65> v_textBlock_19370 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_i_19315; return cs_array.get_Item(cs_index); }());
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = v_textBlock_19370; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b17fa7396bdbcd90; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = v_textBlock_19370; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_555538e920ee71b1; }()); auto cs_right = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = v_textBlock_19370; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5951a1be8973598c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); return (cs_left + cs_right); }()); auto cs_right = v_num_19293; return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = v_textBlock_19370; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_555538e920ee71b1; }()); auto cs_right = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = v_textBlock_19370; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5951a1be8973598c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); return (cs_left + cs_right); }()); v_num_19293 = cs_value; return cs_value; }());
}
}
return pls::cs::conv_i32((([&]() -> float { auto cs_left = v_num_19293; auto cs_right = pls::game::cs_f32(0x3f666666u); return (cs_left + cs_right); }())));
}
}
}
// M:kairo.unity.ui.TextLayout.GetPictograph(System.String)
pls::cs::Ref<cs_ec6b992b38927bb3> cs_e03b6c2a25908498(pls::cs::String v_key) { cs_init_87fb4d668ea5580b();
{
pls::cs::Ref<cs_ec6b992b38927bb3> v_value_31124 = pls::cs::Ref<cs_ec6b992b38927bb3>{};
([&](){auto cs_dictionary=cs_43a8f39c2b6c4c75();auto cs_key=v_key;return cs_dictionary.TryGetValue(cs_key,v_value_31124);}());
return v_value_31124;
}
}
// M:kairo.unity.ui.TextLayout.GetRenderingFontSize
std::int32_t cs_0ce192f490a08aa6(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5951a1be8973598c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
}
}
// M:kairo.unity.ui.TextLayout.GetText
pls::cs::String cs_1949108397c0af06(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba4a660cefbde7ca; }());
}
}
}
// M:kairo.unity.ui.TextLayout.GetTextWidthF
float cs_9edeb49f35813f3e(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5908181b4e6e403a; }());
}
}
}
// M:kairo.unity.ui.TextLayout.Init
void cs_ffa9a8d9e34e056c(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Font> { return pls::cs::make_ref<pls::kairo::Font>(); }()); pls::game::cs_require(cs_target)->cs_97bc9535d0f50be9 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); pls::game::cs_require(cs_target)->cs_4332ccd66fc0b845 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String(std::u16string(u"",0)); pls::game::cs_require(cs_target)->cs_ba4a660cefbde7ca = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba4a660cefbde7ca; }()); return pls::game::cs_value_hash(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_811006785b43de41 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_c758e412ac7cc76d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_4fe63b6b69f138f1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0xbf800000u); pls::game::cs_require(cs_target)->cs_26cb7e30e3aae8e3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0xbf800000u); pls::game::cs_require(cs_target)->cs_6a47ac5c1690d6ca = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); pls::game::cs_require(cs_target)->cs_4517b8f329a3a702 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { return cs_734e0f1de4f940e6(); }()); pls::game::cs_require(cs_target)->cs_f4a451961599aab2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_5908181b4e6e403a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); pls::game::cs_require(cs_target)->cs_713f699cef7d60cc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_511fb284df94c7d6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_139ae560152ed14a = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(cs_this); float cs_arg0 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); auto cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScaleRatio(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ee4e5e36d9d59ce9(cs_receiver,cs_arg0); }());
}
}
}
// M:kairo.unity.ui.TextLayout.IsEnd
bool cs_3f1332571d4620b3(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c758e412ac7cc76d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c758e412ac7cc76d; }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d01a0b822cf8b96e; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return (cs_left >= cs_right); }());
}
return true;
}
}
}
// M:kairo.unity.ui.TextLayout.RemoveColorTag(System.String)
pls::cs::String cs_d5579db4f56b3df0(pls::cs::String v_text) { cs_init_87fb4d668ea5580b();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0028" u"\x0063" u"\x006f" u"\x003d" u"\x005b" u"\x0061" u"\x002d" u"\x007a" u"\x0041" u"\x002d" u"\x005a" u"\x0030" u"\x002d" u"\x0039" u"\x002c" u"\x005d" u"\x002b" u"\x007c" u"\x002f" u"\x0063" u"\x006f" u"\x0029" u"\x003e" u"",24)); auto cs_arg2 = pls::cs::String(std::u16string(u"",0)); return pls::cs::RuntimeRegex::Replace(cs_arg0,cs_arg1,cs_arg2); }());
}
}
// M:kairo.unity.ui.TextLayout.SearchCache(System.String,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
pls::cs::Ref<cs_87fb4d668ea5580b> cs_d1f58fb398b6d1fe(pls::cs::String v_text,float v_w,float v_h,std::int32_t v_color,std::int32_t v_lineSpace,std::int32_t v_anchor,std::int32_t v_font,float v_scaleRatio) { cs_init_87fb4d668ea5580b();
{
std::int32_t v_hashCode_28753 = ([&]() -> std::int32_t { auto cs_arg0 = v_text; return pls::game::cs_value_hash(cs_arg0); }());
for (std::int32_t v_i_28796 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_28796; auto cs_right = (cs_e474d7417b077725()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_28796; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_28796 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_87fb4d668ea5580b> v_textLayout_28847 = ([&]() { auto cs_array = cs_e474d7417b077725(); auto cs_index = v_i_28796; return cs_array.get_Item(cs_index); }());
if (((((((((((([&]() { auto cs_left = pls::cs::box(v_textLayout_28847); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_textLayout_28847; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_811006785b43de41; }()); auto cs_right = v_hashCode_28753; return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = v_textLayout_28847; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba4a660cefbde7ca; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = v_textLayout_28847; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba4a660cefbde7ca; }()); auto cs_arg1 = v_text; return pls::game::cs_string_equals(cs_arg0,cs_arg1); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_textLayout_28847; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = v_w; return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_textLayout_28847; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = v_h; return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_textLayout_28847; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4332ccd66fc0b845; }()); auto cs_right = v_color; return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_textLayout_28847; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f4a451961599aab2; }()); auto cs_right = v_lineSpace; return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_textLayout_28847; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_713f699cef7d60cc; }()); auto cs_right = v_anchor; return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = v_textLayout_28847; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); auto cs_right = v_font; return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_textLayout_28847; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_780b408992a932d9; }()); auto cs_right = v_scaleRatio; return (cs_left == cs_right); }()))) {
return v_textLayout_28847;
}
}
return pls::cs::Ref<cs_87fb4d668ea5580b>{};
}
}
// M:kairo.unity.ui.TextLayout.SetAnchor(System.Int32)
void cs_2be5ebb4744281a0(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this,std::int32_t v_anchor) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_anchor; pls::game::cs_require(cs_target)->cs_713f699cef7d60cc = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.TextLayout.SetColor(System.Int32)
void cs_57d9a00224068c1c(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this,std::int32_t v_color) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_color; pls::game::cs_require(cs_target)->cs_4332ccd66fc0b845 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.TextLayout.SetFontSize(System.Int32)
void cs_3f8d078441a76042(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this,std::int32_t v_size) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_b4e2c591dbe50b4d = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); std::int32_t cs_arg0 = v_size; auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.ui.TextLayout.SetGraphicsScale(System.Single)
void cs_ee4e5e36d9d59ce9(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this,float v_scaleRatio) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_scaleRatio; pls::game::cs_require(cs_target)->cs_780b408992a932d9 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.TextLayout.SetLineSpace(System.Int32)
void cs_6c80e48b0bf350ca(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this,std::int32_t v_lineSpace) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_lineSpace; pls::game::cs_require(cs_target)->cs_f4a451961599aab2 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.TextLayout.SetSize(System.Single,System.Single)
void cs_33bd53255618fce1(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this,float v_w,float v_h) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_w; pls::game::cs_require(cs_target)->cs_26cb7e30e3aae8e3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_h; pls::game::cs_require(cs_target)->cs_6a47ac5c1690d6ca = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.TextLayout.SetSpeed(System.Int32)
void cs_01912744e41e851a(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this,std::int32_t v_speed) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_speed; pls::game::cs_require(cs_target)->cs_4517b8f329a3a702 = cs_value; return cs_value; }());
if ((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }())))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4517b8f329a3a702; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_4517b8f329a3a702 = cs_value; return cs_value; }());
}
}
}
}
// M:kairo.unity.ui.TextLayout.SetText(System.String)
void cs_e3fe9411871b8a7e(pls::cs::Ref<cs_87fb4d668ea5580b> cs_this,pls::cs::String v_text) { cs_init_87fb4d668ea5580b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(v_text); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"",0)); v_text = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = v_text; pls::game::cs_require(cs_target)->cs_ba4a660cefbde7ca = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba4a660cefbde7ca; }()); return pls::game::cs_value_hash(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_811006785b43de41 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_c758e412ac7cc76d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_4fe63b6b69f138f1 = cs_value; return cs_value; }());
if (((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b4e2c591dbe50b4d; }()))) && ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_139ae560152ed14a; }()))) {
std::int32_t v_num_7421 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::kairo::Font::requestFontScale; return pls::cs::div_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_7421; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::kairo::Font::requestFontScale; return pls::cs::div_i32(cs_left,cs_right); }()); bool cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_b4e2c591dbe50b4d = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6fa1a845e6bfcbdf(cs_receiver); }());
pls::cs::Ref<pls::kairo::Font> v_font_7602 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { pls::cs::Ref<pls::kairo::Font> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }()); return pls::cs::make_ref<pls::kairo::Font>(cs_arg0); }());
if ((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_138c255898ffd047; }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left > cs_right); }()))) {
if ((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_139ae560152ed14a; }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left > cs_right); }()))) {
while (([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = pls::game::cs_f32(0x3f800000u); return (cs_left + cs_right); }()); auto cs_right = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_42908a7b6fab813f(cs_receiver); }())); return (cs_left < cs_right); }())) {
std::int32_t v_num2_7772 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); std::int32_t cs_arg0 = v_num2_7772; bool cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6fa1a845e6bfcbdf(cs_receiver); }());
if (([&]() -> bool { auto cs_left = v_num2_7772; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
break;
}
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a47ac5c1690d6ca; }()); auto cs_right = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_42908a7b6fab813f(cs_receiver); }())); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_42908a7b6fab813f(cs_receiver); }())); pls::game::cs_require(cs_target)->cs_6a47ac5c1690d6ca = cs_value; return cs_value; }());
}
} else if (((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_139ae560152ed14a; }()))) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left > cs_right); }()))) {
while (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26cb7e30e3aae8e3; }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5908181b4e6e403a; }()); return (cs_left < cs_right); }())) {
std::int32_t v_num3_8104 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_97bc9535d0f50be9; }())); std::int32_t cs_arg0 = v_num3_8104; bool cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6fa1a845e6bfcbdf(cs_receiver); }());
if (([&]() -> bool { auto cs_left = v_num3_8104; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
break;
}
}
}
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_d01a0b822cf8b96e = cs_value; return cs_value; }());
for (std::int32_t v_i_8290 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_8290; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_8290; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_8290 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_i_8290; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_76ef6fdfcd6628c6; }())) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_d01a0b822cf8b96e; auto cs_new = pls::cs::add_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_d01a0b822cf8b96e = cs_new; return cs_old; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_d01a0b822cf8b96e; auto cs_rhs = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b0b620cb9221d56f; }()); auto cs_index = v_i_8290; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b17fa7396bdbcd90; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_d01a0b822cf8b96e = cs_value; return cs_value; }());
}
}
([&]() { auto cs_target = cs_this; auto cs_value = v_font_7602; pls::game::cs_require(cs_target)->cs_97bc9535d0f50be9 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.TextLayout.StringWidthF(kairo.unity.ui.TextFormat,kairo.unity.ui.Font,System.String)
float cs_73930d73c766bf02(pls::cs::Ref<cs_dc09c88a279424b5> v_lf,pls::cs::Ref<pls::kairo::Font> v_font,pls::cs::String v_text) { cs_init_87fb4d668ea5580b();
{
std::int32_t v_num_27348 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
if (((((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))) && ([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_num_27348 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
bool v_flag_27533 = (((([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsNeedLocalizeScale(); }()));
if (v_flag_27533) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_num_27348 = cs_value; return cs_value; }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetLocalizeScale(); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
([&]() -> void { pls::kairo::Font::LockLocalizeSetting(); }());
}
std::int32_t v_anchor_27759 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull));
std::int32_t v_num2_27779 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull));
std::int32_t v_height_27799 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
std::int32_t v_colorOfRGB_27833 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::Ref<cs_87fb4d668ea5580b> v_textLayout_27893 = ([&]() -> pls::cs::Ref<cs_87fb4d668ea5580b> { pls::cs::String cs_arg0 = v_text; float cs_arg1 = static_cast<float>(v_num2_27779); float cs_arg2 = static_cast<float>(v_height_27799); std::int32_t cs_arg3 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg5 = v_anchor_27759; std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); float cs_arg7 = pls::game::cs_f32(0x42c80000u); return cs_d1f58fb398b6d1fe(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
if (([&]() { auto cs_left = pls::cs::box(v_textLayout_27893); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_87fb4d668ea5580b> { bool cs_arg0 = true; auto cs_arg1 = true; return cs_6a4fbab3f7192191(cs_arg0,cs_arg1); }()); v_textLayout_27893 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_27893); float cs_arg0 = pls::game::cs_f32(0x42c80000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ee4e5e36d9d59ce9(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_27893); float cs_arg0 = static_cast<float>(v_num2_27779); float cs_arg1 = static_cast<float>(v_height_27799); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_33bd53255618fce1(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_27893); std::int32_t cs_arg0 = v_colorOfRGB_27833; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_57d9a00224068c1c(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_27893); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6c80e48b0bf350ca(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_27893); std::int32_t cs_arg0 = v_anchor_27759; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2be5ebb4744281a0(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = v_textLayout_27893; auto cs_value = false; pls::game::cs_require(cs_target)->cs_139ae560152ed14a = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_27893); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3f8d078441a76042(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_27893); pls::cs::String cs_arg0 = v_text; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e3fe9411871b8a7e(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_27893); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a0d538f5ac080fc1(cs_receiver); }());
([&]() -> void { pls::cs::Ref<cs_87fb4d668ea5580b> cs_arg0 = v_textLayout_27893; cs_26ad55d0be317540(cs_arg0); }());
}
float v_textWidthF_28429 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_textLayout_27893); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9edeb49f35813f3e(cs_receiver); }());
if (v_flag_27533) {
([&]() -> void { pls::kairo::Font::UnlockLocalizeSetting(); }());
}
if (([&]() -> bool { auto cs_left = v_num_27348; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font); std::int32_t cs_arg0 = v_num_27348; auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
return v_textWidthF_28429;
}
}
// M:kairo.unity.ui.TextLayout.TextBlock.#ctor(kairo.unity.ui.TextLayout,kairo.unity.ui.Font,System.Int32,System.Single,System.Single,System.Int32)
pls::cs::Ref<cs_43347b50b6a10e65> cs_105f56890100ea40(pls::cs::Ref<cs_87fb4d668ea5580b> v_parent,pls::cs::Ref<pls::kairo::Font> v_font,std::int32_t v_color,float v_x,float v_y,std::int32_t v_blink) { cs_init_43347b50b6a10e65();
{ auto cs_this = pls::cs::make_ref<cs_43347b50b6a10e65>(); cs_105f56890100ea40_init(cs_this,v_parent,v_font,v_color,v_x,v_y,v_blink); return cs_this; }
}
void cs_105f56890100ea40_init(pls::cs::Ref<cs_43347b50b6a10e65> cs_this,pls::cs::Ref<cs_87fb4d668ea5580b> v_parent,pls::cs::Ref<pls::kairo::Font> v_font,std::int32_t v_color,float v_x,float v_y,std::int32_t v_blink) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_parent; pls::game::cs_require(cs_target)->cs_c4c04b027207a322 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Font> { pls::cs::Ref<pls::kairo::Font> cs_arg0 = v_font; return pls::cs::make_ref<pls::kairo::Font>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_5951a1be8973598c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_color; pls::game::cs_require(cs_target)->cs_de8fb13c183fecc1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_54138a074e43426e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_555538e920ee71b1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_blink; pls::game::cs_require(cs_target)->cs_192bcc8e433dae59 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String(std::u16string(u"",0)); pls::game::cs_require(cs_target)->cs_b17fa7396bdbcd90 = cs_value; return cs_value; }());
}
}
// M:kairo.unity.ui.TextLayout.TextBlock.Dispose
void cs_41714700f28172c8(pls::cs::Ref<cs_43347b50b6a10e65> cs_this) { cs_init_43347b50b6a10e65();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5951a1be8973598c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<pls::kairo::Font>{}; pls::game::cs_require(cs_target)->cs_5951a1be8973598c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::game::cs_require(cs_target)->cs_b17fa7396bdbcd90 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.TextLayout.TextBlock.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,System.Int32)
std::int32_t cs_f5f0c633a6ccc4ff(pls::cs::Ref<cs_43347b50b6a10e65> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,float v_boxY,float v_boxH,std::int32_t v_len) { cs_init_43347b50b6a10e65();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{try{
float v_num_903 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_54138a074e43426e; }());
float v_num2_923 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_555538e920ee71b1; }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckLocalMatrix(); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { float cs_arg0 = v_num_903; float cs_arg1 = v_num2_923; return cs_726b189f0fed2c17(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9d946ea24c94dbc(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = (([&]() { auto cs_value = pls::game::cs_f32(0x00000000u); v_num2_923 = cs_value; return cs_value; }())); v_num_903 = cs_value; return cs_value; }());
}
pls::cs::run_finally([&]() {{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_76ef6fdfcd6628c6; }())) {
std::int32_t v_result_1112 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
if (([&]() -> bool { auto cs_left = v_len; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
throw pls::cs::ReturnFlow<std::int32_t>{pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))};
}
pls::cs::Ref<cs_ec6b992b38927bb3> v_pictograph_1194 = ([&]() -> pls::cs::Ref<cs_ec6b992b38927bb3> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_e03b6c2a25908498(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_pictograph_1194); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
throw pls::cs::ReturnFlow<std::int32_t>{v_result_1112};
}
std::int32_t v_num3_1321 = ([&]() -> std::int32_t { auto cs_receiver = v_pictograph_1194; return cs_421aa514c9c5d059(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }());
std::int32_t v_num4_1356 = ([&]() -> std::int32_t { auto cs_receiver = v_pictograph_1194; return cs_4d3996d16d3c5e25(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }());
std::int32_t v_num5_1390 = ([&]() -> std::int32_t { auto cs_receiver = v_pictograph_1194; return cs_9e317dd489a1ce8e(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }());
std::int32_t v_num6_1421 = ([&]() -> std::int32_t { auto cs_receiver = v_pictograph_1194; return cs_18bd61ecb1024b36(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }())).length(); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::String(std::u16string(u"\x221e" u"",1)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); v_num3_1321 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); v_num3_1321 = cs_value; return cs_value; }());
}
}
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }())).length(); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); v_num4_1356 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }())).length(); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); v_num5_1390 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }())).length(); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_55c8b74f6db29a7a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); v_num6_1421 = cs_value; return cs_value; }());
}
([&]() { auto cs_old = v_x; auto cs_rhs = static_cast<float>(v_num5_1390); auto cs_value = (cs_old + cs_rhs); v_x = cs_value; return cs_value; }());
([&]() { auto cs_old = v_y; auto cs_rhs = static_cast<float>(v_num6_1421); auto cs_value = (cs_old + cs_rhs); v_y = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num4_1356; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); v_num4_1356 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num3_1321; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c4c04b027207a322; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb47e857b8021848; }()); auto cs_right = v_num4_1356; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() -> pls::cs::Ref<cs_9cade6927d6e0bf3> { auto cs_receiver = v_pictograph_1194; return cs_a7b9da8fd8e2e224(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_012842e8ba39224c(cs_receiver); }()); return pls::cs::mod_i32(cs_left,cs_right); }()); v_num3_1321 = cs_value; return cs_value; }());
}
float v_num7_2256 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5951a1be8973598c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); auto cs_right = pls::game::cs_f32(0x41400000u); return (cs_left / cs_right); }());
pls::cs::Array<std::int16_t> v_boundingRect_2309 = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() -> pls::cs::Ref<cs_9cade6927d6e0bf3> { auto cs_receiver = v_pictograph_1194; return cs_a7b9da8fd8e2e224(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }())); std::int32_t cs_arg0 = v_num3_1321; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e8833b0a463d9a55(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = v_boxH; auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }()) && ((([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_555538e920ee71b1; }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect_2309; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect_2309; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); return pls::cs::add_i32(cs_left,cs_right); }()))); auto cs_right = v_num7_2256; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = v_boxY; return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = v_boxY; auto cs_right = v_boxH; return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_555538e920ee71b1; }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_boundingRect_2309; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num7_2256; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); return (cs_left < cs_right); }()))))) {
throw pls::cs::ReturnFlow<std::int32_t>{v_result_1112};
}
if (cs_fa530d5bd7357035()) {
pls::cs::Array<pls::cs::Array<std::int32_t>> v_sprites_2603 = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() -> pls::cs::Ref<cs_9cade6927d6e0bf3> { auto cs_receiver = v_pictograph_1194; return cs_a7b9da8fd8e2e224(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }())); std::int32_t cs_arg0 = v_num3_1321; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_eea5b2f6712bae20(cs_receiver,cs_arg0); }());
{ auto cs_each659 = v_sprites_2603; for (std::int32_t cs_i659=0; cs_i659<cs_each659.length(); ++cs_i659) { pls::cs::Array<std::int32_t> v_array_2653 = cs_each659.get_Item(cs_i659); {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
continue;
}
bool v_flag_2773 = false;
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = true; v_flag_2773 = cs_value; return cs_value; }());
}
if (v_flag_2773) {
std::int32_t v_num8_2898 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = (([&]() -> std::int64_t { auto cs_left = (([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xff000000ull))); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::shr_i64(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull))); return (cs_left & cs_right); }())));
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetRenderModeOperator(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetRenderModeSrcRatio(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left != cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num8_2898; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetRenderModeSrcRatio(); }()); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::cs::div_i32(cs_left,cs_right); }()); v_num8_2898 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num8_2898; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); v_num8_2898 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = v_num8_2898; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = v_num8_2898; return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = v_num8_2898; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); std::int32_t cs_arg1 = v_num8_2898; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
}
}
float v_dx_3507 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num_903; return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num7_2256; return (cs_left * cs_right); }()); return (cs_left + cs_right); }());
float v_dy_3560 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_923; return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num7_2256; return (cs_left * cs_right); }()); return (cs_left + cs_right); }());
std::int32_t v_num9_3612 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num7_2256; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
std::int32_t v_num10_3670 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num7_2256; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = v_pictograph_1194; return cs_f7a1a6d38de745a1(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_46250df91aacb52a(cs_receiver); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = v_pictograph_1194; return cs_f7a1a6d38de745a1(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9d946ea24c94dbc(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_9cade6927d6e0bf3> { auto cs_receiver = v_pictograph_1194; return cs_a7b9da8fd8e2e224(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6c943a1b533da794; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = ([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); float cs_arg1 = v_dx_3507; float cs_arg2 = v_dy_3560; float cs_arg3 = static_cast<float>(v_num9_3612); float cs_arg4 = static_cast<float>(v_num10_3670); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = ([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg7 = ([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg8 = ([&]() { auto cs_array = v_array_2653; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = v_pictograph_1194; return cs_f7a1a6d38de745a1(static_cast<pls::cs::Ref<cs_ec6b992b38927bb3>>(cs_receiver)); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_46250df91aacb52a(cs_receiver); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopMatrix(); }());
}
if (v_flag_2773) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopRenderMode(); }());
}
} } }
}
throw pls::cs::ReturnFlow<std::int32_t>{v_result_1112};
}
{
std::int32_t v_num11_4176 = v_len;
if (([&]() -> bool { auto cs_left = v_num11_4176; auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b17fa7396bdbcd90; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b17fa7396bdbcd90; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); v_num11_4176 = cs_value; return cs_value; }());
}
if ((((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_192bcc8e433dae59; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7055da6e5ca7b4e7; }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_192bcc8e433dae59; }()); return (cs_left >= cs_right); }()))) || ([&]() -> bool { auto cs_left = v_len; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
throw pls::cs::ReturnFlow<std::int32_t>{v_num11_4176};
}
if ((([&]() -> bool { auto cs_left = v_boxH; auto cs_right = pls::game::cs_f32(0xbf800000u); return (cs_left != cs_right); }()) && ((([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_555538e920ee71b1; }()); return (cs_left + cs_right); }()); auto cs_right = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5951a1be8973598c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); return (cs_left + cs_right); }()); auto cs_right = v_boxY; return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = v_boxY; auto cs_right = v_boxH; return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_555538e920ee71b1; }()); return (cs_left + cs_right); }()); return (cs_left < cs_right); }()))))) {
throw pls::cs::ReturnFlow<std::int32_t>{v_num11_4176};
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de8fb13c183fecc1; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_len; auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b17fa7396bdbcd90; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5951a1be8973598c; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b17fa7396bdbcd90; }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num_903; return (cs_left + cs_right); }()); float cs_arg3 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_923; return (cs_left + cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a8594be9cb96428d(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5951a1be8973598c; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b17fa7396bdbcd90; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = v_len; return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_num_903; return (cs_left + cs_right); }()); float cs_arg3 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_num2_923; return (cs_left + cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a8594be9cb96428d(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
throw pls::cs::ReturnFlow<std::int32_t>{v_num11_4176};
}
}}, [&]() {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckLocalMatrix(); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopMatrix(); }());
}
});
}catch(const pls::cs::ReturnFlow<std::int32_t>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<std::int32_t>();}
}
}
// M:kairo.unity.ui.UIException.GetStatus
std::int32_t cs_31cf637794688433(pls::cs::Ref<cs_27b8baf7307cff9f> cs_this) { cs_init_27b8baf7307cff9f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
}
}
// M:kairo.unity.util.BitUtil.Join(System.Int32,System.Int32)
std::int64_t cs_d08f1252d303b1f0(std::int32_t v_high,std::int32_t v_low) { pls::generated::cs_init_f3ea616d36334b95();
{
return ([&]() -> std::int64_t { auto cs_left = (([&]() -> std::int64_t { auto cs_left = (([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_high); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffffffffull))); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::cs::shl_i64(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_low); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffffffffull))); return (cs_left & cs_right); }())); return (cs_left | cs_right); }());
}
}
// M:kairo.unity.util.BitUtil.Split(System.Int64)
pls::cs::Array<std::int32_t> cs_b37fd969c7a5953c(std::int64_t v_value) { pls::generated::cs_init_f3ea616d36334b95();
{
std::uint64_t v_num_1995 = pls::cs::cast_integral<std::uint64_t>(std::uint64_t(0xffffffff00000000ull));
([&]() { auto cs_target = pls::generated::cs_0ee869b1ec0c9fc3(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>((([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>(v_value); auto cs_right = v_num_1995; return (cs_left & cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::cs::shr_i64(cs_left,cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = pls::generated::cs_0ee869b1ec0c9fc3(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffffffffull))); return (cs_left & cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return pls::generated::cs_0ee869b1ec0c9fc3();
}
}
// M:kairo.unity.util.ClockTime.Destroy
void cs_252b02044b3d6557() { cs_init_130519c307b90f46();
{

}
}
// M:kairo.unity.util.ClockTime.GetTime
std::int64_t cs_e285ad46e15aa69f() { cs_init_130519c307b90f46();
{
if ((!(cs_0aabbac1b4cc00d9()))) {
return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());
}
return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());
}
}
// M:kairo.unity.util.JarInflater.#ctor(System.String)
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_e4e1e97aa25d4dd2(pls::cs::String v_directory) { pls::generated::cs_init_52158c8b20364c2b();
{ auto cs_this = pls::cs::make_ref<pls::generated::cs_52158c8b20364c2b>(); cs_e4e1e97aa25d4dd2_init(cs_this,v_directory); return cs_this; }
}
void cs_e4e1e97aa25d4dd2_init(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_this,pls::cs::String v_directory) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_directory; pls::game::cs_require(cs_target)->cs_578ed5fb729c9567 = cs_value; return cs_value; }());
if ((!(([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x002f" u"",1)); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }())))) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_578ed5fb729c9567; auto cs_rhs = pls::cs::String(std::u16string(u"\x002f" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_578ed5fb729c9567 = cs_value; return cs_value; }());
}
pls::cs::String v_text_1251 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",4)); return pls::cs::String::concat(cs_arg0,cs_arg1); }());
pls::cs::Array<pls::cs::String> v_array_1343 = ([&](){auto cs_initial_array_375=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_375.at(0)=v_text_1251;cs_initial_array_375.at(1)=([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); auto cs_arg1 = v_text_1251; return pls::cs::String::concat(cs_arg0,cs_arg1); }());return cs_initial_array_375;}());
for (std::int32_t v_i_1434 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1434; auto cs_right = (v_array_1343).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1434; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1434 = cs_new; return cs_old; }())) {try {
pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_resourceAsStream_1485 = ([&]() -> pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1343; auto cs_index = v_i_1434; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c147457aef6fbe27(cs_receiver,cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_resourceAsStream_1485); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
continue;
}
pls::cs::run_finally([&]() -> void { {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(cs_this); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_resourceAsStream_1485; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_e488b26211313625(cs_receiver,cs_arg0); }());
throw pls::cs::BranchFlow{1425,pls::cs::BranchFlow::Kind::break_};
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_resourceAsStream_1485); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_resourceAsStream_1485); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>{}; v_resourceAsStream_1485 = cs_value; return cs_value; }());
});
}catch(const pls::cs::BranchFlow&cs_branch){if(cs_branch.target!=1425)throw;if(cs_branch.kind==pls::cs::BranchFlow::Kind::continue_)continue;break;}}
}
}
// M:kairo.unity.util.JarInflater.CheckResourceAsStream(System.String)
bool cs_ac9d24f4cde3d39d(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_this,pls::cs::String v_file) { pls::generated::cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_file; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_cfa0bd9ae3912c7e(cs_receiver,cs_arg0); }()); v_file = cs_value; return cs_value; }());
try {
return (([&]() -> bool { pls::cs::String cs_arg0 = v_file; return pls::generated::cs_0932d38228a45953(cs_arg0); }()) || ([&]() -> bool { pls::cs::String cs_arg0 = ([&]() { auto cs_left = v_file; auto cs_right = pls::cs::String(std::u16string(u"\x002e" u"\x0062" u"\x0079" u"\x0074" u"\x0065" u"\x0073" u"",6)); return pls::cs::String::concat(cs_left,cs_right); }()); return pls::generated::cs_0932d38228a45953(cs_arg0); }()));
} catch(const pls::cs::Exception& cs_caught_369) {auto cs_exception_369=pls::cs::capture_exception(cs_caught_369);
if(pls::cs::exception_is(cs_exception_369,"System.Exception")) {{

}}
else {throw;} }
return false;
}
}
}
// M:kairo.unity.util.JarInflater.Exist(System.String)
bool cs_3c7d820c198e8591(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_this,pls::cs::String v_name) { pls::generated::cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_cfa0bd9ae3912c7e(cs_receiver,cs_arg0); }()); v_name = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); auto cs_right = v_name; return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ac9d24f4cde3d39d(cs_receiver,cs_arg0); }());
}
return ([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::Ref<pls::generated::cs_bfe2a01361163e7a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_642a65c689c877cf(cs_receiver,cs_arg0); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }());
}
}
}
// M:kairo.unity.util.JarInflater.GetDirectory
pls::cs::String cs_af791034e85c70f7(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_this) { pls::generated::cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }());
}
}
}
// M:kairo.unity.util.JarInflater.GetFiles
pls::cs::Array<pls::cs::String> cs_13b4a0fe102f7702(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_this) { pls::generated::cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return pls::cs::Array<pls::cs::String>{};
}
return ([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6f69af47bcfae216; }());return cs_dictionary.KeysToArray();}());
}
}
}
// M:kairo.unity.util.KairoException.get_DisplayMessage
pls::cs::String cs_1b62bb3466e191a0(pls::cs::Ref<cs_cd97eee87b3216c4> cs_this) { cs_init_cd97eee87b3216c4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{ return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e52c7bad466e5ea; }()); }
}
}
// M:kairo.unity.util.Language.ClearSoftLabelTable
void cs_3d765e32623626a4() { pls::generated::cs_init_72d9658ed61145d6();
{
([&]() { auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::String>>{}; pls::generated::cs_6393581f8e4c2247() = cs_value; return cs_value; }());
}
}
// M:kairo.unity.util.Language.ClearTextTable
void cs_5185b14a34385754() { pls::generated::cs_init_72d9658ed61145d6();
{
([&]() { auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>>{}; pls::generated::cs_560940226681a6a6() = cs_value; return cs_value; }());
}
}
// M:kairo.unity.util.Language.English
bool cs_dea1d8116ed5aaf1() { pls::generated::cs_init_72d9658ed61145d6();
{
return ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { return pls::generated::cs_f2f74213ca1ea9bc(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }());
}
}
// M:kairo.unity.util.Language.GetCustomLanguagePackLocation
pls::cs::String cs_f2f2f095a1f4f83c() { pls::generated::cs_init_72d9658ed61145d6();
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x006c" u"\x006f" u"\x0063" u"\x0061" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",23)); pls::cs::String cs_arg1 = pls::cs::String{}; return pls::kairo::PlayerPrefs::GetString(cs_arg0,cs_arg1); }());
}
}
// M:kairo.unity.util.Language.GetLanguageCode
pls::cs::String cs_154f0344cd538956() { pls::generated::cs_init_72d9658ed61145d6();
{
if (([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }())) {
return pls::cs::String(std::u16string(u"\x006a" u"\x0061" u"\x002d" u"\x004a" u"\x0050" u"",5));
}
return cs_9d62cf693893d256();
}
}
// M:kairo.unity.util.Language.GetLanguagePackFile
pls::cs::String cs_9f46a4d7d50765c3() { pls::generated::cs_init_72d9658ed61145d6();
{
return cs_8da583a8425c5117();
}
}
// M:kairo.unity.util.Language.GetLanguagePackInfo(System.Byte[])
pls::cs::Ref<cs_d86010513034d6a0> cs_70bf143fda522859(pls::cs::Array<std::uint8_t> v_data) { pls::generated::cs_init_72d9658ed61145d6();
{try{
pls::cs::Ref<cs_d86010513034d6a0> v_languagePackInfo_62722 = ([&]() -> pls::cs::Ref<cs_d86010513034d6a0> { return cs_73cc6ce27c640033(); }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
throw pls::cs::ReturnFlow<pls::cs::Ref<cs_d86010513034d6a0>>{v_languagePackInfo_62722};
}
{pls::cs::Ref<pls::cs::MemoryStream> v_stream_62848=([&]() { auto cs_arg0 = v_data; return pls::cs::make_ref<pls::cs::MemoryStream>(cs_arg0); }());pls::cs::run_finally([&](){{
{pls::cs::Ref<pls::cs::RuntimeStreamReader> v_streamReader_62910=([&]() { auto cs_arg0 = v_stream_62848; auto cs_arg1 = pls::cs::RuntimeEncoding::get_UTF8(); return pls::cs::make_ref<pls::cs::RuntimeStreamReader>(cs_arg0,cs_arg1); }());pls::cs::run_finally([&](){{
while (true) {
pls::cs::String v_text_63010 = ([&]() -> pls::cs::String { auto cs_receiver = v_streamReader_62910; return pls::game::cs_require(cs_receiver)->ReadLine(); }());
if (([&]() { auto cs_left = pls::cs::box(v_text_63010); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
break;
}
std::int32_t v_num_63106 = ([&]() -> std::int32_t { auto cs_arg0 = v_text_63010; auto cs_arg1 = char16_t(44); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num_63106; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
break;
}
pls::cs::String v_text2_63195 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text_63010; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = v_num_63106; return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::String v_text3_63240 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text_63010; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num_63106; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_substring1(cs_arg0,cs_arg1); }());
pls::cs::Ref<pls::cs::RegexMatch> v_match_63285 = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_text2_63195; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005e" u"\x005c" u"\x0073" u"\x002a" u"\x0022" u"\x0028" u"\x002e" u"\x002a" u"\x0029" u"\x0022" u"\x005c" u"\x0073" u"\x002a" u"\x0024" u"",14)); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());
if (pls::game::cs_require(v_match_63285)->get_Success()) {
([&]() { auto cs_value = pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_63285)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value(); v_text2_63195 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text2_63195; return pls::cs::string_trim(cs_arg0); }()); return pls::cs::culture_to_lower(cs_arg0); }()); v_text2_63195 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_text3_63240; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005e" u"\x005c" u"\x0073" u"\x002a" u"\x0022" u"\x0028" u"\x002e" u"\x002a" u"\x0029" u"\x0022" u"\x005c" u"\x0073" u"\x002a" u"\x0024" u"",14)); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }()); v_match_63285 = cs_value; return cs_value; }());
if (pls::game::cs_require(v_match_63285)->get_Success()) {
([&]() { auto cs_value = pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_63285)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value(); v_text3_63240 = cs_value; return cs_value; }());
}
if ((!(([&]() -> bool { auto cs_arg0 = v_text2_63195; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0040" u"",1)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }())))) {
break;
}
{auto cs_switch_value_63657=v_text2_63195;std::int32_t cs_switch_index_63657=-1;if(cs_switch_value_63657==pls::cs::String(std::u16string(u"\x0040" u"\x0074" u"\x0069" u"\x0074" u"\x006c" u"\x0065" u"",6)))cs_switch_index_63657=0;if(cs_switch_value_63657==pls::cs::String(std::u16string(u"\x0040" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"",9)))cs_switch_index_63657=1;if(cs_switch_value_63657==pls::cs::String(std::u16string(u"\x0040" u"\x0073" u"\x0063" u"\x0061" u"\x006c" u"\x0065" u"",6)))cs_switch_index_63657=2;if(cs_switch_value_63657==pls::cs::String(std::u16string(u"\x0040" u"\x0061" u"\x0070" u"\x0070" u"\x006c" u"\x0069" u"",6)))cs_switch_index_63657=3;if(cs_switch_value_63657==pls::cs::String(std::u16string(u"\x0040" u"\x0076" u"\x0065" u"\x0072" u"\x0073" u"\x0069" u"\x006f" u"\x006e" u"",8)))cs_switch_index_63657=4;if(cs_switch_value_63657==pls::cs::String(std::u16string(u"\x0040" u"\x0061" u"\x0075" u"\x0074" u"\x0068" u"\x006f" u"\x0072" u"",7)))cs_switch_index_63657=5;switch(cs_switch_index_63657){
case 0:
{
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = v_text3_63240; pls::game::cs_require(cs_target)->cs_5a7be69e432288e7 = cs_value; return cs_value; }());
break;
}
case 1:
{
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text3_63240; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005b" u"\x005e" u"\x0061" u"\x002d" u"\x007a" u"\x0041" u"\x002d" u"\x005a" u"\x005c" u"\x002d" u"\x005d" u"",11)); auto cs_arg2 = pls::cs::String(std::u16string(u"",0)); return pls::cs::RuntimeRegex::Replace(cs_arg0,cs_arg1,cs_arg2); }()); pls::game::cs_require(cs_target)->cs_559ce244f31c7bdd = cs_value; return cs_value; }());
break;
}
case 2:
{
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = v_text3_63240; pls::game::cs_require(cs_target)->cs_ab5676da2e5daeda = cs_value; return cs_value; }());
break;
}
case 3:
{
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = v_text3_63240; pls::game::cs_require(cs_target)->cs_9bdb4dbfef785f37 = cs_value; return cs_value; }());
break;
}
case 4:
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_text3_63240; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0028" u"\x005b" u"\x0030" u"\x002d" u"\x0039" u"\x002e" u"\x005d" u"\x002b" u"\x0029" u"",9)); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }()); v_match_63285 = cs_value; return cs_value; }());
if (pls::game::cs_require(v_match_63285)->get_Success()) {
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_63285)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value(); pls::game::cs_require(cs_target)->cs_48810e5f53569359 = cs_value; return cs_value; }());
}
break;
}
case 5:
{
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = v_text3_63240; pls::game::cs_require(cs_target)->cs_9cd046221a0a73b2 = cs_value; return cs_value; }());
break;
}
}}
}
}},[&](){if(v_streamReader_62910){pls::game::cs_require(v_streamReader_62910)->Dispose();}});}
}},[&](){if(v_stream_62848){pls::game::cs_require(v_stream_62848)->Dispose();}});}
pls::cs::String v_title_64312 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = v_languagePackInfo_62722; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_559ce244f31c7bdd; }()); return cs_3b656a07e9770826(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_title_64312); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = v_title_64312; pls::game::cs_require(cs_target)->cs_5a7be69e432288e7 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = pls::cs::String(std::u16string(u"\x004b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"",9)); pls::game::cs_require(cs_target)->cs_9cd046221a0a73b2 = cs_value; return cs_value; }());
throw pls::cs::ReturnFlow<pls::cs::Ref<cs_d86010513034d6a0>>{v_languagePackInfo_62722};
}catch(const pls::cs::ReturnFlow<pls::cs::Ref<cs_d86010513034d6a0>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Ref<cs_d86010513034d6a0>>();}
}
// M:kairo.unity.util.Language.GetSystemLanguagePackFiles
pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_2d156cd0932d3318() { pls::generated::cs_init_72d9658ed61145d6();
{
return cs_aefbaa4ea6f5261a();
}
}
// M:kairo.unity.util.Language.GetTitle(System.String)
pls::cs::String cs_3b656a07e9770826(pls::cs::String v_code) { pls::generated::cs_init_72d9658ed61145d6();
{
pls::cs::String v_result_67100 = pls::cs::String{};
if (([&]() { auto cs_left = pls::cs::box(v_code); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_code; return pls::cs::culture_to_lower(cs_arg0); }()); v_code = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_arg0 = v_code; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005e" u"\x006a" u"\x0061" u"",3)); return pls::cs::RuntimeRegex::IsMatch(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x65e5" u"\x672c" u"\x8a9e" u"",3)); v_result_67100 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_arg0 = v_code; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005e" u"\x0065" u"\x006e" u"\x0028" u"\x002d" u"\x0075" u"\x0073" u"\x0029" u"\x003f" u"\x0024" u"",10)); return pls::cs::RuntimeRegex::IsMatch(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x0045" u"\x006e" u"\x0067" u"\x006c" u"\x0069" u"\x0073" u"\x0068" u"",7)); v_result_67100 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_arg0 = v_code; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005e" u"\x007a" u"\x0068" u"\x0028" u"\x002d" u"\x0063" u"\x006e" u"\x007c" u"\x002d" u"\x0073" u"\x0067" u"\x0029" u"",12)); return pls::cs::RuntimeRegex::IsMatch(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x4e2d" u"\x6587" u"\x0028" u"\x7b80" u"\x4f53" u"\x0029" u"",6)); v_result_67100 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_arg0 = v_code; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005e" u"\x007a" u"\x0068" u"\x0028" u"\x002d" u"\x0074" u"\x0077" u"\x007c" u"\x002d" u"\x0068" u"\x006b" u"\x007c" u"\x002d" u"\x006d" u"\x006f" u"\x0029" u"\x003f" u"",17)); return pls::cs::RuntimeRegex::IsMatch(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x4e2d" u"\x6587" u"\x0028" u"\x7e41" u"\x9ad4" u"\x0029" u"",6)); v_result_67100 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_arg0 = v_code; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005e" u"\x006b" u"\x006f" u"",3)); return pls::cs::RuntimeRegex::IsMatch(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\xd55c" u"\xad6d" u"\xc5b4" u"",3)); v_result_67100 = cs_value; return cs_value; }());
}
return v_result_67100;
}
}
// M:kairo.unity.util.Language.Init
void cs_a56548cef82c6906() { pls::generated::cs_init_72d9658ed61145d6();
{
if (([&]() { auto cs_left = pls::cs::box(cs_aefbaa4ea6f5261a()); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<pls::cs::String>>{}); return cs_left == cs_right; }())) {
pls::cs::String v_filename_25734 = pls::cs::String(std::u16string(u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",12));
pls::cs::List<pls::cs::Array<pls::cs::String>> v_list_25780 = pls::cs::List<pls::cs::Array<pls::cs::String>>::make();
if (([&]() -> bool { auto cs_left = pls::generated::cs_0dc92919b1751224(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
if (([&]() -> bool { return cs_dea1d8116ed5aaf1(); }())) {
([&]() -> void { auto cs_receiver = v_list_25780; auto cs_arg0 = ([&](){auto cs_initial_array_750=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_750.at(0)=pls::cs::String(std::u16string(u"\x0045" u"\x006e" u"\x0067" u"\x006c" u"\x0069" u"\x0073" u"\x0068" u"",7));cs_initial_array_750.at(1)=pls::cs::String(std::u16string(u"",0));cs_initial_array_750.at(2)=pls::cs::String(std::u16string(u"\x0065" u"\x006e" u"\x002d" u"\x0055" u"\x0053" u"",5));return cs_initial_array_750;}()); cs_receiver.Add(cs_arg0); }());
([&]() -> void { auto cs_receiver = v_list_25780; auto cs_arg0 = ([&](){auto cs_initial_array_751=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_751.at(0)=pls::cs::String(std::u16string(u"\x65e5" u"\x672c" u"\x8a9e" u"",3));cs_initial_array_751.at(1)=pls::generated::cs_3fb70c2eded7c9ff();cs_initial_array_751.at(2)=pls::cs::String(std::u16string(u"",0));return cs_initial_array_751;}()); cs_receiver.Add(cs_arg0); }());
} else {
([&]() -> void { auto cs_receiver = v_list_25780; auto cs_arg0 = ([&](){auto cs_initial_array_752=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_752.at(0)=pls::cs::String(std::u16string(u"\x65e5" u"\x672c" u"\x8a9e" u"",3));cs_initial_array_752.at(1)=pls::cs::String(std::u16string(u"",0));cs_initial_array_752.at(2)=pls::cs::String(std::u16string(u"\x006a" u"\x0061" u"\x002d" u"\x004a" u"\x0050" u"",5));return cs_initial_array_752;}()); cs_receiver.Add(cs_arg0); }());
([&]() -> void { auto cs_receiver = v_list_25780; auto cs_arg0 = ([&](){auto cs_initial_array_753=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_753.at(0)=pls::cs::String(std::u16string(u"\x0045" u"\x006e" u"\x0067" u"\x006c" u"\x0069" u"\x0073" u"\x0068" u"",7));cs_initial_array_753.at(1)=pls::generated::cs_01c4bf6216ab6adc();cs_initial_array_753.at(2)=pls::cs::String(std::u16string(u"",0));return cs_initial_array_753;}()); cs_receiver.Add(cs_arg0); }());
}
} else {
([&]() -> void { auto cs_receiver = v_list_25780; auto cs_arg0 = ([&](){auto cs_initial_array_754=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_754.at(0)=pls::cs::String(std::u16string(u"\x0045" u"\x006e" u"\x0067" u"\x006c" u"\x0069" u"\x0073" u"\x0068" u"",7));cs_initial_array_754.at(1)=pls::cs::String(std::u16string(u"",0));cs_initial_array_754.at(2)=pls::cs::String(std::u16string(u"\x0065" u"\x006e" u"\x002d" u"\x0055" u"\x0053" u"",5));return cs_initial_array_754;}()); cs_receiver.Add(cs_arg0); }());
}
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_26241 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::run_finally([&]() -> void { try {
if (([&]() -> bool { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::String cs_arg1 = v_filename_25734; return pls::kairo::Storage::Exists(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = v_filename_25734; return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }()); v_jarInflater_26241 = cs_value; return cs_value; }());
pls::cs::Array<pls::cs::String> v_files_26406 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_26241); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_13b4a0fe102f7702(cs_receiver); }());
{ auto cs_each755 = v_files_26406; for (std::int32_t cs_i755=0; cs_i755<cs_each755.length(); ++cs_i755) { pls::cs::String v_text_26444 = cs_each755.get_Item(cs_i755); {
try {
pls::cs::Ref<cs_d86010513034d6a0> v_languagePackInfo_26528 = ([&]() -> pls::cs::Ref<cs_d86010513034d6a0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_26241); pls::cs::String cs_arg0 = v_text_26444; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); return cs_70bf143fda522859(cs_arg0); }());
([&]() -> void { auto cs_receiver = v_list_25780; auto cs_arg0 = ([&](){auto cs_initial_array_756=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_756.at(0)=([&]() { auto cs_receiver = v_languagePackInfo_26528; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5a7be69e432288e7; }());cs_initial_array_756.at(1)=v_text_26444;cs_initial_array_756.at(2)=([&]() { auto cs_receiver = v_languagePackInfo_26528; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_559ce244f31c7bdd; }());return cs_initial_array_756;}()); cs_receiver.Add(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_757) {auto cs_exception_757=pls::cs::capture_exception(cs_caught_757);
if(pls::cs::exception_is(cs_exception_757,"System.Exception")) {{

}}
else {throw;} }
} } }
}
} catch(const pls::cs::Exception& cs_caught_758) {auto cs_exception_758=pls::cs::capture_exception(cs_caught_758);
if(pls::cs::exception_is(cs_exception_758,"System.Exception")) {{

}}
else {throw;} } }, [&]() {
if ((([&]() { auto cs_left = pls::cs::box(pls::cs::box((v_jarInflater_26241))); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>((v_jarInflater_26241)); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{}; v_jarInflater_26241 = cs_value; return cs_value; }());
});
([&]() { auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::String>> { auto cs_receiver = v_list_25780; return cs_receiver.ToArray(); }()); cs_aefbaa4ea6f5261a() = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = pls::generated::cs_593dc05baccea7cd(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14)); return pls::kairo::PlayerPrefs::HasKey(cs_arg0); }()))) {
([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14)); pls::kairo::PlayerPrefs::DeleteKey(cs_arg0); }());
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0050" u"\x006c" u"\x0061" u"\x0079" u"\x0065" u"\x0072" u"\x0050" u"\x0072" u"\x0065" u"\x0066" u"\x0073" u"\x002e" u"\x0044" u"\x0065" u"\x006c" u"\x0065" u"\x0074" u"\x0065" u"\x004b" u"\x0065" u"\x0079" u"\x0028" u"\x0050" u"\x0052" u"\x0045" u"\x0046" u"\x005f" u"\x004c" u"\x0041" u"\x004e" u"\x0047" u"\x005f" u"\x0050" u"\x0041" u"\x0043" u"\x004b" u"\x0029" u"",37)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
}
if (((!(([&]() -> bool { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14)); return pls::kairo::PlayerPrefs::HasKey(cs_arg0); }()))) && ([&]() -> bool { auto cs_left = pls::generated::cs_0dc92919b1751224(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()))) {
pls::cs::Ref<pls::generated::cs_c0fae45144034cf9> v_jLocale_27234 = ([&]() -> pls::cs::Ref<pls::generated::cs_c0fae45144034cf9> { return pls::generated::cs_7faa6468ee6a5cd1(); }());
pls::cs::String v_text2_27277 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_c0fae45144034cf9>>(v_jLocale_27234); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_af0690d8cc2a7c96(cs_receiver); }()); return pls::cs::culture_to_lower(cs_arg0); }());
pls::cs::String v_text3_27329 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_c0fae45144034cf9>>(v_jLocale_27234); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_9731cae4f8bdbaf7(cs_receiver); }()); return pls::cs::culture_to_lower(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_text2_27277; auto cs_right = pls::cs::String(std::u16string(u"\x007a" u"\x0068" u"",2)); return (cs_left == cs_right); }())) {
if (([&]() -> bool { auto cs_left = v_text3_27329; auto cs_right = pls::cs::String(std::u16string(u"\x0073" u"\x0067" u"",2)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x0063" u"\x0068" u"",2)); v_text3_27329 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text3_27329; auto cs_right = pls::cs::String(std::u16string(u"\x0068" u"\x006b" u"",2)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x0074" u"\x0077" u"",2)); v_text3_27329 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text3_27329; auto cs_right = pls::cs::String(std::u16string(u"\x006d" u"\x006f" u"",2)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x0074" u"\x0077" u"",2)); v_text3_27329 = cs_value; return cs_value; }());
}
}
pls::cs::Array<pls::cs::String> v_array_27591 = pls::cs::Array<pls::cs::String>{};
pls::cs::Array<pls::cs::String> v_array2_27618 = pls::cs::Array<pls::cs::String>{};
pls::cs::Array<pls::cs::Array<pls::cs::String>> v_array3_27648 = cs_aefbaa4ea6f5261a();
{ auto cs_each759 = v_array3_27648; for (std::int32_t cs_i759=0; cs_i759<cs_each759.length(); ++cs_i759) { pls::cs::Array<pls::cs::String> v_array4_27683 = cs_each759.get_Item(cs_i759); {
pls::cs::String v_text4_27737 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array4_27683; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::culture_to_lower(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text2_27277; auto cs_right = pls::cs::String(std::u16string(u"\x002d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text3_27329; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text4_27737; return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_array4_27683; v_array_27591 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text2_27277; auto cs_right = ([&]() { auto cs_array = ([&](){auto cs_text=v_text4_27737;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(45);return pls::cs::string_split(cs_text,cs_separators);}()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_array4_27683; v_array2_27618 = cs_value; return cs_value; }());
}
} } }
if (([&]() -> bool { auto cs_left = pls::generated::cs_593dc05baccea7cd(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if (pls::generated::cs_4cc76a7a43706693()) {
if (([&]() { auto cs_left = pls::cs::box(v_array_27591); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left == cs_right; }())) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0062" u"\x0065" u"\x0073" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x0020" u"\x003d" u"\x003d" u"\x0020" u"\x006e" u"\x0075" u"\x006c" u"\x006c" u"",20)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
} else {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0062" u"\x0065" u"\x0073" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005b" u"\x0031" u"\x005d" u"",15)); auto cs_right = ([&]() { auto cs_array = v_array_27591; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
if (([&]() { auto cs_left = pls::cs::box(v_array2_27618); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left == cs_right; }())) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x006d" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x0020" u"\x003d" u"\x003d" u"\x0020" u"\x006e" u"\x0075" u"\x006c" u"\x006c" u"",21)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
} else {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x006d" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005b" u"\x0031" u"\x005d" u"",16)); auto cs_right = ([&]() { auto cs_array = v_array2_27618; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
}
if ((((([&]() { auto cs_left = pls::cs::box(v_array_27591); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = v_array_27591; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"",0)); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()))) && ((([&]() { auto cs_left = pls::cs::box(v_array2_27618); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = v_array2_27618; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"",0)); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()))))) {
([&]() { auto cs_value = ([&](){auto cs_initial_array_760=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_760.at(0)=pls::cs::String(std::u16string(u"\x65e5" u"\x672c" u"\x8a9e" u"",3));cs_initial_array_760.at(1)=pls::generated::cs_3fb70c2eded7c9ff();cs_initial_array_760.at(2)=pls::cs::String(std::u16string(u"",0));return cs_initial_array_760;}()); v_array_27591 = cs_value; return cs_value; }());
}
}
if (([&]() { auto cs_left = pls::cs::box(v_array_27591); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14)); pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array_27591; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::kairo::PlayerPrefs::SetString(cs_arg0,cs_arg1); }());
} else if (([&]() { auto cs_left = pls::cs::box(v_array2_27618); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14)); pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array2_27618; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::kairo::PlayerPrefs::SetString(cs_arg0,cs_arg1); }());
}
}
pls::cs::Array<std::uint8_t> v_array5_28688 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x0066" u"\x006f" u"\x0072" u"\x006d" u"\x0061" u"\x0074" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",24)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() { auto cs_left = pls::cs::box(v_array5_28688); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left != cs_right; }())) {
pls::cs::String v_text5_28788 = ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_array5_28688; return pls::generated::cs_5d8e9e8201c04369(cs_arg0); }());
([&]() { auto cs_value = pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<pls::generated::cs_98f0a1bec2084c3c>>::make(); pls::generated::cs_2c85f04bd0d708d9() = cs_value; return cs_value; }());
{ auto cs_each761 = ([&](){auto cs_text=v_text5_28788;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(10);return pls::cs::string_split(cs_text,cs_separators);}()); for (std::int32_t cs_i761=0; cs_i761<cs_each761.length(); ++cs_i761) { pls::cs::String v_recoveredLangFormatLine_28895 = cs_each761.get_Item(cs_i761); {
pls::cs::Array<pls::cs::String> v_array6_28977 = ([&](){auto cs_text=v_recoveredLangFormatLine_28895;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(44);return pls::cs::string_split(cs_text,cs_separators);}());
pls::cs::Ref<pls::generated::cs_98f0a1bec2084c3c> v_langPackFormat_29042 = ([&]() -> pls::cs::Ref<pls::generated::cs_98f0a1bec2084c3c> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array6_28977; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); char16_t cs_arg1 = pls::cs::cast_integral<char16_t>(([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array6_28977; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }())); char16_t cs_arg2 = pls::cs::cast_integral<char16_t>(([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array6_28977; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }())); return cs_0df98a8eddce17f9(cs_arg0,cs_arg1,cs_arg2); }());
([&]() { auto cs_target = pls::generated::cs_2c85f04bd0d708d9(); auto cs_index = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = v_langPackFormat_29042; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a0cee6b194388bb1; }()); return pls::cs::culture_to_lower(cs_arg0); }()); auto cs_value = v_langPackFormat_29042; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
} } }
if ((!(([&]() -> bool { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14)); pls::cs::String cs_arg1 = pls::cs::String{}; return pls::kairo::PlayerPrefs::GetString(cs_arg0,cs_arg1); }()); pls::cs::Array<std::uint8_t> cs_arg1 = pls::cs::Array<std::uint8_t>{}; bool cs_arg2 = false; return cs_1acec610f93846f1(cs_arg0,cs_arg1,cs_arg2); }())))) {
([&]() -> bool { pls::cs::String cs_arg0 = pls::cs::String{}; auto cs_arg1 = pls::cs::Array<std::uint8_t>{}; auto cs_arg2 = true; return cs_1acec610f93846f1(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
// M:kairo.unity.util.Language.LangPackFormat.#ctor(System.String,System.Char,System.Char)
pls::cs::Ref<pls::generated::cs_98f0a1bec2084c3c> cs_0df98a8eddce17f9(pls::cs::String v_file,char16_t v_lineCode,char16_t v_segCode) { cs_init_98f0a1bec2084c3c();
{ auto cs_this = pls::cs::make_ref<pls::generated::cs_98f0a1bec2084c3c>(); cs_0df98a8eddce17f9_init(cs_this,v_file,v_lineCode,v_segCode); return cs_this; }
}
void cs_0df98a8eddce17f9_init(pls::cs::Ref<pls::generated::cs_98f0a1bec2084c3c> cs_this,pls::cs::String v_file,char16_t v_lineCode,char16_t v_segCode) {
cs_this->cs_96513160b9f9c6b8 = char16_t(10);
cs_this->cs_37e0eb7044938cba = char16_t(9);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_file; pls::game::cs_require(cs_target)->cs_a0cee6b194388bb1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_lineCode; pls::game::cs_require(cs_target)->cs_96513160b9f9c6b8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_segCode; pls::game::cs_require(cs_target)->cs_37e0eb7044938cba = cs_value; return cs_value; }());
}
}
// M:kairo.unity.util.Language.LangPackRecord.#ctor(System.Int32,System.String,System.String)
pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> cs_3b2d98b947053d2a(std::int32_t v_id,pls::cs::String v_file,pls::cs::String v_text) { cs_init_9487cb83e3a46e0a();
{ auto cs_this = pls::cs::make_ref<pls::generated::cs_9487cb83e3a46e0a>(); cs_3b2d98b947053d2a_init(cs_this,v_id,v_file,v_text); return cs_this; }
}
void cs_3b2d98b947053d2a_init(pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> cs_this,std::int32_t v_id,pls::cs::String v_file,pls::cs::String v_text) {
cs_this->cs_11bb01ff7e196717 = pls::cs::List<pls::generated::cs_ab1b1085a7ab32b9>::make();
cs_this->cs_eacffaa0f8c3f949 = pls::cs::List<pls::cs::String>::make();
cs_this->cs_da40773ef2f3923c = pls::cs::List<pls::cs::String>::make();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_id; pls::game::cs_require(cs_target)->cs_c85df0bf60809784 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_file; pls::game::cs_require(cs_target)->cs_05293b75838ad9b4 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_arg0 = v_text; cs_receiver.Add(cs_arg0); }());
}
}
// M:kairo.unity.util.Language.LangPackRecord.AddPosition(System.Int32,System.Int32)
void cs_ef461dafc6d09069(pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> cs_this,std::int32_t v_line,std::int32_t v_segment) { cs_init_9487cb83e3a46e0a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11bb01ff7e196717; }()); auto cs_arg0 = ([&]() -> pls::generated::cs_ab1b1085a7ab32b9 { std::int32_t cs_arg0 = v_line; std::int32_t cs_arg1 = v_segment; return cs_f7e443d43797a1e8(cs_arg0,cs_arg1); }()); cs_receiver.Add(cs_arg0); }());
}
}
}
// M:kairo.unity.util.Language.LanguagePackInfo.#ctor
pls::cs::Ref<cs_d86010513034d6a0> cs_73cc6ce27c640033() { cs_init_d86010513034d6a0();
{ auto cs_this = pls::cs::make_ref<cs_d86010513034d6a0>(); cs_73cc6ce27c640033_init(cs_this); return cs_this; }
}
void cs_73cc6ce27c640033_init(pls::cs::Ref<cs_d86010513034d6a0> cs_this) {
{}
}
// M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[])
void cs_f93cc86620424e6c(pls::cs::Array<std::uint8_t> v_data) { pls::generated::cs_init_72d9658ed61145d6();
{
std::int32_t v_recoveredPdbConstInt32_46651 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_46694 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::Array<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>> v_array_46734 = pls::generated::cs_fe1686f2bdf4b397();
pls::cs::Array<pls::cs::String> v_array2_46772 = pls::generated::cs_74c39fff0f46ab52();
pls::cs::String v_text_46809 = cs_885e46a8a2b95893();
pls::cs::String v_text2_46843 = cs_9d62cf693893d256();
pls::cs::String v_text3_46876 = cs_2fd3deed1e409352();
std::int32_t v_num_46907 = cs_237ab1e79f07965b();
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x0065" u"\x006e" u"\x002d" u"\x0055" u"\x0053" u"",5)); cs_9d62cf693893d256() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x004b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"",9)); cs_885e46a8a2b95893() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x0045" u"\x006e" u"\x0067" u"\x006c" u"\x0069" u"\x0073" u"\x0068" u"",7)); cs_2fd3deed1e409352() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); cs_237ab1e79f07965b() = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::generated::cs_0dc92919b1751224(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x006a" u"\x0061" u"\x002d" u"\x004a" u"\x0050" u"",5)); cs_9d62cf693893d256() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x65e5" u"\x672c" u"\x8a9e" u"",3)); cs_2fd3deed1e409352() = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = pls::generated::cs_0dc92919b1751224(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) && ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x006a" u"\x0061" u"\x002d" u"\x004a" u"\x0050" u"",5)); cs_9d62cf693893d256() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x65e5" u"\x672c" u"\x8a9e" u"",3)); cs_2fd3deed1e409352() = cs_value; return cs_value; }());
}
pls::cs::run_finally([&]() -> void { try {
pls::cs::Dictionary<pls::cs::String,pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>> v_dictionary_47315 = pls::cs::Dictionary<pls::cs::String,pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>>::make();
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::cs::Array<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>{}; pls::generated::cs_fe1686f2bdf4b397() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::Array<pls::cs::String>{}; pls::generated::cs_74c39fff0f46ab52() = cs_value; return cs_value; }());
} else {
pls::cs::Array<std::uint8_t> v_array3_47497 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x0074" u"\x0065" u"\x006d" u"\x0070" u"\x006c" u"\x0061" u"\x0074" u"\x0065" u"\x005f" u"\x0065" u"\x006e" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",29)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() { auto cs_left = pls::cs::box(v_array3_47497); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
throw pls::cs::Exception();
}
pls::cs::String v_text4_47643 = ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_array3_47497; return pls::generated::cs_5d8e9e8201c04369(cs_arg0); }());
([&]() { auto cs_value = pls::cs::Array<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); pls::generated::cs_fe1686f2bdf4b397() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::Array<pls::cs::String>{}; pls::generated::cs_74c39fff0f46ab52() = cs_value; return cs_value; }());
pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_langPackRecord_47778 = pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>{};
std::int32_t v_num2_47810 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while (([&]() -> bool { auto cs_left = v_num2_47810; auto cs_right = (v_text4_47643).length(); return (cs_left < cs_right); }())) {
std::int32_t v_num3_47870 = ([&]() -> std::int32_t { auto cs_arg0 = v_text4_47643; auto cs_arg1 = char16_t(44); auto cs_arg2 = v_num2_47810; return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
std::int32_t v_num4_47913 = ([&]() -> std::int32_t { auto cs_arg0 = v_text4_47643; auto cs_arg1 = char16_t(44); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num3_47870; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
std::int32_t v_num5_47960 = ([&]() -> std::int32_t { auto cs_arg0 = v_text4_47643; auto cs_arg1 = char16_t(44); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num4_47913; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
std::int32_t v_num6_48007 = ([&]() -> std::int32_t { auto cs_arg0 = v_text4_47643; auto cs_arg1 = char16_t(10); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num5_47960; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = v_num6_48007; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = (v_text4_47643).length(); v_num6_48007 = cs_value; return cs_value; }());
}
pls::cs::String v_text5_48124 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text4_47643; auto cs_arg1 = v_num2_47810; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num3_47870; auto cs_right = v_num2_47810; return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::string_trim(cs_arg0); }());
pls::cs::String v_file_48188 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text4_47643; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num3_47870; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num4_47913; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num3_47870; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::culture_to_lower(cs_arg0); }());
pls::cs::String v_text6_48264 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text4_47643; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num4_47913; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num5_47960; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num4_47913; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::string_trim(cs_arg0); }());
pls::cs::String v_text7_48338 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text4_47643; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num5_47960; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num6_48007; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num5_47960; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = (v_text5_48124).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = v_text5_48124; return pls::cs::int32_parse(cs_arg0); }()); pls::cs::String cs_arg1 = v_file_48188; pls::cs::String cs_arg2 = v_text7_48338; return cs_3b2d98b947053d2a(cs_arg0,cs_arg1,cs_arg2); }()); v_langPackRecord_47778 = cs_value; return cs_value; }());
{ auto cs_each766 = ([&](){auto cs_text=v_text6_48264;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(38);return pls::cs::string_split(cs_text,cs_separators);}()); for (std::int32_t cs_i766=0; cs_i766<cs_each766.length(); ++cs_i766) { pls::cs::String v_positionText_48510 = cs_each766.get_Item(cs_i766); {
pls::cs::Array<pls::cs::String> v_array5_48586 = ([&](){auto cs_text=v_positionText_48510;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(45);return pls::cs::string_split(cs_text,cs_separators);}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>(v_langPackRecord_47778); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array5_48586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array5_48586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ef461dafc6d09069(cs_receiver,cs_arg0,cs_arg1); }());
} } }
while (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c85df0bf60809784; }()); auto cs_right = (pls::generated::cs_fe1686f2bdf4b397()).length(); return (cs_left >= cs_right); }())) {
pls::cs::Array<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>> v_destinationArray_48803 = pls::cs::Array<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>::make(([&]() -> std::int32_t { auto cs_left = (pls::generated::cs_fe1686f2bdf4b397()).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x200ull)); return pls::cs::add_i32(cs_left,cs_right); }()));
([&]() -> void { auto cs_arg0 = pls::cs::array_cast(pls::cs::box(pls::generated::cs_fe1686f2bdf4b397())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::array_cast(pls::cs::box(v_destinationArray_48803)); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = (pls::generated::cs_fe1686f2bdf4b397()).length(); pls::cs::array_copy(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() { auto cs_value = v_destinationArray_48803; pls::generated::cs_fe1686f2bdf4b397() = cs_value; return cs_value; }());
}
([&]() { auto cs_target = pls::generated::cs_fe1686f2bdf4b397(); auto cs_index = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c85df0bf60809784; }()); auto cs_value = v_langPackRecord_47778;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>> v_value_49103 = pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>{};
if ((!(([&](){auto cs_dictionary=v_dictionary_47315;auto cs_key=([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_05293b75838ad9b4; }());return cs_dictionary.TryGetValue(cs_key,v_value_49103);}())))) {
([&]() { auto cs_target = v_dictionary_47315; auto cs_index = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_05293b75838ad9b4; }()); auto cs_value = (([&]() { auto cs_value = pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>::make(); v_value_49103 = cs_value; return cs_value; }())); cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
([&]() -> void { auto cs_receiver = v_value_49103; auto cs_arg0 = v_langPackRecord_47778; cs_receiver.Add(cs_arg0); }());
} else {
if (([&]() { auto cs_left = pls::cs::box(v_langPackRecord_47778); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_arg0 = v_text7_48338; cs_receiver.Add(cs_arg0); }());
}
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num6_48007; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num2_47810 = cs_value; return cs_value; }());
}
std::int32_t v_num7_49477 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
{
pls::cs::String v_text8_49507 = pls::cs::String{};
{pls::cs::Ref<pls::cs::MemoryStream> v_stream_49546=([&]() { auto cs_arg0 = v_data; return pls::cs::make_ref<pls::cs::MemoryStream>(cs_arg0); }());pls::cs::run_finally([&](){{
{pls::cs::Ref<pls::cs::RuntimeStreamReader> v_streamReader_49612=([&]() { auto cs_arg0 = v_stream_49546; auto cs_arg1 = pls::cs::RuntimeEncoding::get_UTF8(); return pls::cs::make_ref<pls::cs::RuntimeStreamReader>(cs_arg0,cs_arg1); }());pls::cs::run_finally([&](){{
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_receiver = v_streamReader_49612; return pls::game::cs_require(cs_receiver)->ReadToEnd(); }()); v_text8_49507 = cs_value; return cs_value; }());
}},[&](){if(v_streamReader_49612){pls::game::cs_require(v_streamReader_49612)->Dispose();}});}
}},[&](){if(v_stream_49546){pls::game::cs_require(v_stream_49546)->Dispose();}});}
pls::cs::List<pls::cs::Array<pls::cs::String>>::make();
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>{}; v_langPackRecord_47778 = cs_value; return cs_value; }());
pls::cs::String v_text9_49799 = pls::cs::String(std::u16string(u"",0));
pls::cs::String v_text10_49823 = pls::cs::String(std::u16string(u"",0));
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num2_47810 = cs_value; return cs_value; }());
while (([&]() -> bool { auto cs_left = v_num2_47810; auto cs_right = (v_text8_49507).length(); return (cs_left < cs_right); }())) {
std::int32_t v_num8_49901 = ([&]() -> std::int32_t { auto cs_arg0 = v_text8_49507; auto cs_arg1 = char16_t(44); auto cs_arg2 = v_num2_47810; return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
std::int32_t v_num9_49944 = ([&]() -> std::int32_t { auto cs_arg0 = v_text8_49507; auto cs_arg1 = char16_t(10); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num8_49901; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = v_num9_49944; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = (v_text8_49507).length(); v_num9_49944 = cs_value; return cs_value; }());
}
std::int32_t v_num10_50058 = v_num9_49944;
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text8_49507; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num9_49944; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(13)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_num9_49944; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num9_49944 = cs_new; return cs_old; }());
}
pls::cs::String v_text11_50151 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text8_49507; auto cs_arg1 = v_num2_47810; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num8_49901; auto cs_right = v_num2_47810; return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::String v_text12_50209 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text8_49507; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num8_49901; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num9_49944; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num8_49901; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());
if ((([&]() -> bool { auto cs_arg0 = v_text11_50151; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0022" u"",1)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }()) && ([&]() -> bool { auto cs_arg0 = v_text11_50151; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0022" u"",1)); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }()))) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text11_50151; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = (v_text11_50151).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); v_text11_50151 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_arg0 = v_text12_50209; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0022" u"",1)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }()) && ([&]() -> bool { auto cs_arg0 = v_text12_50209; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0022" u"",1)); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }()))) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text12_50209; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = (v_text12_50209).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); v_text12_50209 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_arg0 = v_text11_50151; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0040" u"",1)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }())) {
if (([&]() -> bool { auto cs_left = v_text11_50151; auto cs_right = pls::cs::String(std::u16string(u"\x0040" u"\x0061" u"\x0075" u"\x0074" u"\x0068" u"\x006f" u"\x0072" u"",7)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_text12_50209; cs_885e46a8a2b95893() = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text11_50151; auto cs_right = pls::cs::String(std::u16string(u"\x0040" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"",9)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text12_50209; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005b" u"\x005e" u"\x0061" u"\x002d" u"\x007a" u"\x0041" u"\x002d" u"\x005a" u"\x005c" u"\x002d" u"\x005d" u"",11)); auto cs_arg2 = pls::cs::String(std::u16string(u"",0)); return pls::cs::RuntimeRegex::Replace(cs_arg0,cs_arg1,cs_arg2); }()); cs_9d62cf693893d256() = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text11_50151; auto cs_right = pls::cs::String(std::u16string(u"\x0040" u"\x0074" u"\x0069" u"\x0074" u"\x006c" u"\x0065" u"",6)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_text12_50209; cs_2fd3deed1e409352() = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text11_50151; auto cs_right = pls::cs::String(std::u16string(u"\x0040" u"\x0073" u"\x0063" u"\x0061" u"\x006c" u"\x0065" u"",6)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); cs_237ab1e79f07965b() = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_arg0 = v_text12_50209; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0025" u"",1)); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text12_50209; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = (v_text12_50209).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); v_text12_50209 = cs_value; return cs_value; }());
}
if (([&](){auto cs_receiver=v_text12_50209;auto cs_argument=pls::cs::String(std::u16string(u"\x0061" u"\x0075" u"\x0074" u"\x006f" u"",4));cs_receiver.length();return pls::cs::culture_equals_ignore_case(cs_receiver,cs_argument);}())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); cs_237ab1e79f07965b() = cs_value; return cs_value; }());
} else {
std::int32_t v_result_51201 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&](){auto cs_text=v_text12_50209;return pls::cs::int32_try_parse(cs_text,v_result_51201);}())) {
([&]() { auto cs_value = v_result_51201; cs_237ab1e79f07965b() = cs_value; return cs_value; }());
}
}
}
if (([&]() -> bool { auto cs_left = v_text11_50151; auto cs_right = pls::cs::String(std::u16string(u"\x0040" u"\x0061" u"\x0070" u"\x0070" u"\x006c" u"\x0069" u"",6)); return (cs_left == cs_right); }())) {
pls::cs::Ref<pls::cs::RegexMatch> v_match_51390 = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_text12_50209; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0028" u"\x005b" u"\x0030" u"\x002d" u"\x0039" u"\x005d" u"\x002b" u"\x0029" u"",8)); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());
if (pls::game::cs_require(v_match_51390)->get_Success()) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_51390)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value(); return pls::cs::int32_parse(cs_arg0); }()); v_num7_49477 = cs_value; return cs_value; }());
}
}
} else if (([&]() -> bool { auto cs_arg0 = v_text11_50151; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0023" u"",1)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }())) {
std::int32_t v_result2_51603 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&](){auto cs_text=([&]() -> pls::cs::String { auto cs_arg0 = v_text11_50151; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::game::cs_substring1(cs_arg0,cs_arg1); }());return pls::cs::int32_try_parse(cs_text,v_result2_51603);}())) {
([&]() { auto cs_value = ([&]() { auto cs_array = pls::generated::cs_fe1686f2bdf4b397(); auto cs_index = v_result2_51603; return cs_array.get_Item(cs_index); }()); v_langPackRecord_47778 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_langPackRecord_47778); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Ref<pls::cs::RegexMatch> v_match2_51797 = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x005e" u"\x003c" u"\x0070" u"\x006f" u"\x003d" u"\x005b" u"\x005e" u"\x003e" u"\x005d" u"\x002b" u"\x003e" u"",11)); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());
([&]() { auto cs_value = ((((!(pls::game::cs_require(v_match2_51797)->get_Success()))) ? pls::cs::String(std::u16string(u"",0)) : pls::game::cs_require(v_match2_51797)->get_Value())); v_text9_49799 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x002f" u"\x0070" u"\x006f" u"\x003e" u"\x0024" u"",6)); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }()); v_match2_51797 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((!(pls::game::cs_require(v_match2_51797)->get_Success()))) ? pls::cs::String(std::u16string(u"",0)) : pls::game::cs_require(v_match2_51797)->get_Value())); v_text10_49823 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }()); auto cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text9_49799; auto cs_right = v_text12_50209; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text10_49823; return pls::cs::String::concat(cs_left,cs_right); }()); cs_receiver.Add(cs_arg0); }());
}
}
} else if (([&]() -> bool { auto cs_left = (v_text11_50151).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(v_langPackRecord_47778); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }()); auto cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text9_49799; auto cs_right = v_text12_50209; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text10_49823; return pls::cs::String::concat(cs_left,cs_right); }()); cs_receiver.Add(cs_arg0); }());
}
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num10_50058; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num2_47810 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = v_num7_49477; auto cs_right = pls::generated::cs_efcdf5d0d7b2cdc2(); return (cs_left != cs_right); }())) {
throw pls::cs::Exception(pls::cs::String(std::u16string(u"\x0054" u"\x0068" u"\x0065" u"\x0020" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0020" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x0073" u"\x0020" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0064" u"\x0069" u"\x0066" u"\x0066" u"\x0065" u"\x0072" u"\x0065" u"\x006e" u"\x0074" u"\x0020" u"\x0061" u"\x0070" u"\x0070" u"\x006c" u"\x0069" u"\x0063" u"\x0061" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x0073" u"\x002e" u"",46)).utf8());
}
if ((([&]() { auto cs_left = pls::cs::box(cs_9d62cf693893d256()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = (cs_9d62cf693893d256()).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
pls::cs::Array<pls::cs::String> v_array6_52524 = ([&](){auto cs_text=cs_9d62cf693893d256();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(45);return pls::cs::string_split(cs_text,cs_separators);}());
if (([&]() -> bool { auto cs_left = (v_array6_52524).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array6_52524; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::culture_to_lower(cs_arg0); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array6_52524; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::culture_to_upper(cs_arg0); }()); return pls::cs::String::concat(cs_left,cs_right); }()); cs_9d62cf693893d256() = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = (cs_2fd3deed1e409352()).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = cs_9d62cf693893d256(); cs_2fd3deed1e409352() = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::cs::Array<pls::cs::String>{}; pls::generated::cs_74c39fff0f46ab52() = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(cs_9d62cf693893d256()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Array<pls::cs::String> v_array7_52857 = ([&](){auto cs_text=cs_9d62cf693893d256();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(45);return pls::cs::string_split(cs_text,cs_separators);}());
pls::cs::List<pls::cs::String> v_list2_52911 = pls::cs::List<pls::cs::String>::make();
([&]() -> void { auto cs_receiver = v_list2_52911; auto cs_arg0 = cs_9d62cf693893d256(); cs_receiver.Add(cs_arg0); }());
if (([&]() -> bool { auto cs_left = cs_9d62cf693893d256(); auto cs_right = pls::cs::String(std::u16string(u"\x007a" u"\x0068" u"\x002d" u"\x0053" u"\x0047" u"",5)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = v_list2_52911; auto cs_arg0 = pls::cs::String(std::u16string(u"\x007a" u"\x0068" u"\x002d" u"\x0043" u"\x004e" u"",5)); cs_receiver.Add(cs_arg0); }());
}
if (([&]() -> bool { auto cs_left = cs_9d62cf693893d256(); auto cs_right = pls::cs::String(std::u16string(u"\x007a" u"\x0068" u"\x002d" u"\x0048" u"\x004b" u"",5)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = v_list2_52911; auto cs_arg0 = pls::cs::String(std::u16string(u"\x007a" u"\x0068" u"\x002d" u"\x0054" u"\x0057" u"",5)); cs_receiver.Add(cs_arg0); }());
}
if (([&]() -> bool { auto cs_left = cs_9d62cf693893d256(); auto cs_right = pls::cs::String(std::u16string(u"\x007a" u"\x0068" u"\x002d" u"\x004d" u"\x004f" u"",5)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = v_list2_52911; auto cs_arg0 = pls::cs::String(std::u16string(u"\x007a" u"\x0068" u"\x002d" u"\x0054" u"\x0057" u"",5)); cs_receiver.Add(cs_arg0); }());
}
if (([&]() -> bool { auto cs_left = (v_array7_52857).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = v_list2_52911; auto cs_arg0 = ([&]() { auto cs_array = v_array7_52857; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); cs_receiver.Add(cs_arg0); }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_receiver = v_list2_52911; return cs_receiver.ToArray(); }()); pls::generated::cs_74c39fff0f46ab52() = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::cs::Dictionary<pls::cs::String,pls::cs::Array<pls::cs::List<pls::generated::cs_acb158b492b43017>>>::make(); pls::generated::cs_d82354f7d4cc6e5c() = cs_value; return cs_value; }());
{auto cs_list_enum769=(v_dictionary_47315).GetEnumerator();struct cs_list_scope769{decltype(cs_list_enum769)&e;~cs_list_scope769(){e.Dispose();}} cs_scope769{cs_list_enum769};while(cs_list_enum769.MoveNext()){ pls::cs::KeyValuePair<pls::cs::String,pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>> v_item_53409=cs_list_enum769.get_Current();{
std::int32_t v_num11_53498 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
{auto cs_list_enum770=((v_item_53409).get_Value()).GetEnumerator();struct cs_list_scope770{decltype(cs_list_enum770)&e;~cs_list_scope770(){e.Dispose();}} cs_scope770{cs_list_enum770};while(cs_list_enum770.MoveNext()){ pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_item2_53515=cs_list_enum770.get_Current();{
{auto cs_list_enum771=(([&]() { auto cs_receiver = v_item2_53515; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11bb01ff7e196717; }())).GetEnumerator();struct cs_list_scope771{decltype(cs_list_enum771)&e;~cs_list_scope771(){e.Dispose();}} cs_scope771{cs_list_enum771};while(cs_list_enum771.MoveNext()){ pls::generated::cs_ab1b1085a7ab32b9 v_position_53575=cs_list_enum771.get_Current();{
if (([&]() -> bool { auto cs_left = v_num11_53498; auto cs_right = (v_position_53575).cs_1bd11544863adf53; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = (v_position_53575).cs_1bd11544863adf53; v_num11_53498 = cs_value; return cs_value; }());
}
}}}
}}}
([&]() { auto cs_old = v_num11_53498; auto cs_new = pls::cs::add_i32(cs_old,1); v_num11_53498 = cs_new; return cs_old; }());
pls::cs::Array<pls::cs::List<pls::generated::cs_acb158b492b43017>> v_array8_53779 = pls::cs::Array<pls::cs::List<pls::generated::cs_acb158b492b43017>>::make(v_num11_53498);
{auto cs_list_enum772=((v_item_53409).get_Value()).GetEnumerator();struct cs_list_scope772{decltype(cs_list_enum772)&e;~cs_list_scope772(){e.Dispose();}} cs_scope772{cs_list_enum772};while(cs_list_enum772.MoveNext()){ pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_item3_53827=cs_list_enum772.get_Current();{
{auto cs_list_enum773=(([&]() { auto cs_receiver = v_item3_53827; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11bb01ff7e196717; }())).GetEnumerator();struct cs_list_scope773{decltype(cs_list_enum773)&e;~cs_list_scope773(){e.Dispose();}} cs_scope773{cs_list_enum773};while(cs_list_enum773.MoveNext()){ pls::generated::cs_ab1b1085a7ab32b9 v_position2_53887=cs_list_enum773.get_Current();{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = v_array8_53779; auto cs_index = (v_position2_53887).cs_1bd11544863adf53; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = v_array8_53779; auto cs_index = (v_position2_53887).cs_1bd11544863adf53; auto cs_value = pls::cs::List<pls::generated::cs_acb158b492b43017>::make();cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { auto cs_receiver = ([&]() { auto cs_array = v_array8_53779; auto cs_index = (v_position2_53887).cs_1bd11544863adf53; return cs_array.get_Item(cs_index); }()); auto cs_arg0 = ([&]() -> pls::generated::cs_acb158b492b43017 { std::int32_t cs_arg0 = (v_position2_53887).cs_1bd11544863adf53; std::int32_t cs_arg1 = (v_position2_53887).cs_2525b3344f53d974; pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> cs_arg2 = v_item3_53827; return cs_aeb4d46bb60fe1d6(cs_arg0,cs_arg1,cs_arg2); }()); cs_receiver.Add(cs_arg0); }());
}}}
}}}
pls::cs::Array<pls::cs::List<pls::generated::cs_acb158b492b43017>> v_array9_54214 = v_array8_53779;
{ auto cs_each774 = v_array9_54214; for (std::int32_t cs_i774=0; cs_i774<cs_each774.length(); ++cs_i774) { pls::cs::List<pls::generated::cs_acb158b492b43017> v_list3_54237 = cs_each774.get_Item(cs_i774); {
if (([&]() { auto cs_left = pls::cs::box(v_list3_54237); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
continue;
}
for (std::int32_t v_j_54370 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_54370; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_list3_54237).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_54370; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_54370 = cs_new; return cs_old; }())) {
for (std::int32_t v_num12_54429 = ([&]() -> std::int32_t { auto cs_left = (v_list3_54237).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num12_54429; auto cs_right = v_j_54370; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num12_54429; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num12_54429 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_array = v_list3_54237; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_54429; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())).cs_018ea348c0cf88c0; auto cs_right = (([&]() { auto cs_array = v_list3_54237; auto cs_index = v_num12_54429; return cs_array.get_Item(cs_index); }())).cs_018ea348c0cf88c0; return (cs_left > cs_right); }())) {
pls::generated::cs_acb158b492b43017 v_value2_54582 = ([&]() { auto cs_array = v_list3_54237; auto cs_index = v_num12_54429; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = v_list3_54237; auto cs_index = v_num12_54429; auto cs_value = ([&]() { auto cs_array = v_list3_54237; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_54429; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); cs_target.set_Item(cs_index,cs_value); return cs_value; }());
([&]() { auto cs_target = v_list3_54237; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_54429; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_value2_54582; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}
} } }
([&]() { auto cs_target = pls::generated::cs_d82354f7d4cc6e5c(); auto cs_index = (v_item_53409).get_Key(); auto cs_value = v_array8_53779; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}}}
pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>> v_value3_54797 = pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>{};
if (([&](){auto cs_dictionary=v_dictionary_47315;auto cs_key=pls::cs::String(std::u16string(u"\x006c" u"\x0069" u"\x0062" u"\x002e" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"",12));return cs_dictionary.TryGetValue(cs_key,v_value3_54797);}())) {
pls::cs::Array<std::uint8_t> v_array10_54893 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x0074" u"\x0065" u"\x006d" u"\x0070" u"\x006c" u"\x0061" u"\x0074" u"\x0065" u"\x005f" u"\x006a" u"\x0061" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",29)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() { auto cs_left = pls::cs::box(v_array10_54893); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
throw pls::cs::Exception();
}
pls::cs::String v_text13_55046 = ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_array10_54893; return pls::generated::cs_5d8e9e8201c04369(cs_arg0); }());
pls::cs::Dictionary<pls::cs::String,pls::cs::List<std::int32_t>> v_dictionary2_55122 = pls::cs::Dictionary<pls::cs::String,pls::cs::List<std::int32_t>>::make();
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num2_47810 = cs_value; return cs_value; }());
while (([&]() -> bool { auto cs_left = v_num2_47810; auto cs_right = (v_text13_55046).length(); return (cs_left < cs_right); }())) {
std::int32_t v_num13_55243 = ([&]() -> std::int32_t { auto cs_arg0 = v_text13_55046; auto cs_arg1 = char16_t(44); auto cs_arg2 = v_num2_47810; return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
std::int32_t v_num14_55289 = ([&]() -> std::int32_t { auto cs_arg0 = v_text13_55046; auto cs_arg1 = char16_t(44); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num13_55243; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
std::int32_t v_num15_55340 = ([&]() -> std::int32_t { auto cs_arg0 = v_text13_55046; auto cs_arg1 = char16_t(44); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num14_55289; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
std::int32_t v_num16_55391 = ([&]() -> std::int32_t { auto cs_arg0 = v_text13_55046; auto cs_arg1 = char16_t(10); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num15_55340; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = v_num16_55391; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = (v_text13_55046).length(); v_num16_55391 = cs_value; return cs_value; }());
}
pls::cs::String v_text14_55519 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text13_55046; auto cs_arg1 = v_num2_47810; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num13_55243; auto cs_right = v_num2_47810; return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::string_trim(cs_arg0); }());
pls::cs::String v_text15_55587 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text13_55046; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num13_55243; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num14_55289; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num13_55243; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::culture_to_lower(cs_arg0); }());
([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text13_55046; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num14_55289; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num15_55340; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num14_55289; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::string_trim(cs_arg0); }());
pls::cs::String v_key_55734 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text13_55046; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num15_55340; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num16_55391; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num15_55340; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());
if ((([&]() -> bool { auto cs_left = v_text15_55587; auto cs_right = pls::cs::String(std::u16string(u"\x006c" u"\x0069" u"\x0062" u"\x002e" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"",12)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = (v_text14_55519).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
pls::cs::List<std::int32_t> v_value4_55875 = pls::cs::List<std::int32_t>{};
if ((!(([&](){auto cs_dictionary=v_dictionary2_55122;auto cs_key=v_key_55734;return cs_dictionary.TryGetValue(cs_key,v_value4_55875);}())))) {
([&]() { auto cs_target = v_dictionary2_55122; auto cs_index = v_key_55734; auto cs_value = (([&]() { auto cs_value = pls::cs::List<std::int32_t>::make(); v_value4_55875 = cs_value; return cs_value; }())); cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
([&]() -> void { auto cs_receiver = v_value4_55875; auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = v_text14_55519; return pls::cs::int32_parse(cs_arg0); }()); cs_receiver.Add(cs_arg0); }());
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num16_55391; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num2_47810 = cs_value; return cs_value; }());
}
pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>> v_array11_56114 = ([&](){auto cs_initial_array_775=pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>>::make(2);cs_initial_array_775.at(0)=pls::generated::cs_e7e31338a40ebcb2();cs_initial_array_775.at(1)=pls::generated::cs_d135969453118803();return cs_initial_array_775;}());
for (std::int32_t v_k_56211 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_56211; auto cs_right = (v_array11_56114).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_56211; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_56211 = cs_new; return cs_old; }())) {
for (std::int32_t v_l_56267 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_56267; auto cs_right = (([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_56267; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_56267 = cs_new; return cs_old; }())) {
pls::cs::String v_text16_56326 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num17_56365 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
pls::cs::List<std::int32_t> v_value5_56395 = pls::cs::List<std::int32_t>{};
if (([&](){auto cs_dictionary=v_dictionary2_55122;auto cs_key=([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());return cs_dictionary.TryGetValue(cs_key,v_value5_56395);}())) {
{auto cs_list_enum776=(v_value5_56395).GetEnumerator();struct cs_list_scope776{decltype(cs_list_enum776)&e;~cs_list_scope776(){e.Dispose();}} cs_scope776{cs_list_enum776};while(cs_list_enum776.MoveNext()){ std::int32_t v_item4_56489=cs_list_enum776.get_Current();{
for (std::int32_t v_m_56549 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_56549; auto cs_right = (v_value3_54797).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_56549; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_56549 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_value3_54797; auto cs_index = v_m_56549; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c85df0bf60809784; }()); auto cs_right = v_item4_56489; return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_m_56549; v_num17_56365 = cs_value; return cs_value; }());
break;
}
}
if (([&]() -> bool { auto cs_left = v_num17_56365; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
break;
}
}}}
} else {
for (std::int32_t v_num18_56840 = ([&]() -> std::int32_t { auto cs_left = (v_value3_54797).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num18_56840; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num18_56840; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num18_56840 = cs_new; return cs_old; }())) {
pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_langPackRecord2_56923 = ([&]() { auto cs_array = v_value3_54797; auto cs_index = v_num18_56840; return cs_array.get_Item(cs_index); }());
if (((([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord2_56923; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = (v_text16_56326).length(); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord2_56923; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_text16_56326; return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_langPackRecord2_56923; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = v_num18_56840; v_num17_56365 = cs_value; return cs_value; }());
break;
}
}
}
if (([&]() -> bool { auto cs_left = v_num17_56365; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_langPackRecord3_57236 = ([&]() { auto cs_array = v_value3_54797; auto cs_index = v_num17_56365; return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left <= cs_right); }())) {
pls::cs::Array<pls::cs::String> v_array12_57339 = pls::cs::Array<pls::cs::String>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)));
([&]() -> void { auto cs_arg0 = pls::cs::array_cast(pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; return cs_array.get_Item(cs_index); }()))); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::array_cast(pls::cs::box(v_array12_57339)); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::array_copy(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() { auto cs_target = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; auto cs_value = v_array12_57339;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_langPackRecord3_57236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::String(std::u16string(u"",0));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord3_57236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_langPackRecord3_57236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11bb01ff7e196717; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = v_langPackRecord3_57236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11bb01ff7e196717; }()); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_receiver.RemoveAt(cs_arg0); }());
}
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_langPackRecord3_57236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11bb01ff7e196717; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() -> void { auto cs_receiver = v_value3_54797; auto cs_arg0 = v_num17_56365; cs_receiver.RemoveAt(cs_arg0); }());
}
}
}
}
([&]() { auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>> { pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = pls::generated::cs_e7e31338a40ebcb2(); return pls::generated::cs_79b14a50dd86de7d(cs_arg0); }()); pls::generated::cs_a41430b838321192() = cs_value; return cs_value; }());
}
}
pls::cs::Array<pls::cs::String> v_array13_57999 = pls::cs::Array<pls::cs::String>{};
pls::cs::Array<pls::cs::Array<pls::cs::String>> v_array14_58030 = pls::cs::Array<pls::cs::Array<pls::cs::String>>{};
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x0078" u"\x006c" u"\x0073" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",7)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }()); v_jarInflater_46694 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_46694); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"\x006b" u"\x0065" u"\x0079" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",11)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c7d820c198e8591(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_46694; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"\x006b" u"\x0065" u"\x0079" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",11)); return pls::generated::cs_aa767d3dce39dc9d(cs_arg0,cs_arg1); }()); v_array13_57999 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_array13_57999); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::String>>::make((v_array13_57999).length()); v_array14_58030 = cs_value; return cs_value; }());
for (std::int32_t v_n_58329 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_n_58329; auto cs_right = (v_array14_58030).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_58329; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_58329 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array14_58030; auto cs_index = v_n_58329; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array13_57999; auto cs_index = v_n_58329; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); bool cs_arg2 = false; bool cs_arg3 = false; bool cs_arg4 = false; return pls::generated::cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = v_array14_58030; cs_45076861cf1dc76f(cs_arg0); }());
}
}
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_46694); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0074" u"\x0065" u"\x0078" u"\x0074" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",8)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c7d820c198e8591(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_46694; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x0065" u"\x0078" u"\x0074" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",8)); return pls::generated::cs_aa767d3dce39dc9d(cs_arg0,cs_arg1); }()); v_array13_57999 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_array13_57999); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::String>>::make((v_array13_57999).length()); v_array14_58030 = cs_value; return cs_value; }());
for (std::int32_t v_num19_58708 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num19_58708; auto cs_right = (v_array14_58030).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num19_58708; auto cs_new = pls::cs::add_i32(cs_old,1); v_num19_58708 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array13_57999; auto cs_index = v_num19_58708; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array13_57999; auto cs_index = v_num19_58708; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x005c" u"\x006e" u"",2)); pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x000a" u"",1)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array14_58030; auto cs_index = v_num19_58708; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array13_57999; auto cs_index = v_num19_58708; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); bool cs_arg2 = false; bool cs_arg3 = false; bool cs_arg4 = false; return pls::generated::cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = v_array14_58030; cs_4200a27cfd6b898d(cs_arg0); }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_46694); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{}; v_jarInflater_46694 = cs_value; return cs_value; }());
([&]() -> void { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); pls::kairo::Font::SetScale(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(pls::generated::cs_fe1686f2bdf4b397()); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>{}); return cs_left != cs_right; }())) {
if ((([&]() -> bool { auto cs_left = cs_237ab1e79f07965b(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_receiver = v_dictionary_47315; auto cs_arg0 = pls::cs::String(std::u16string(u"\x0074" u"\x0065" u"\x0078" u"\x0074" u"",4)); return cs_receiver.ContainsKey(cs_arg0); }()))) {
pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>> v_list5_59192 = pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>::make();
{auto cs_list_enum777=(([&]() { auto cs_array = v_dictionary_47315; auto cs_index = pls::cs::String(std::u16string(u"\x0074" u"\x0065" u"\x0078" u"\x0074" u"",4)); return cs_array.get_Item(cs_index); }())).GetEnumerator();struct cs_list_scope777{decltype(cs_list_enum777)&e;~cs_list_scope777(){e.Dispose();}} cs_scope777{cs_list_enum777};while(cs_list_enum777.MoveNext()){ pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_item5_59233=cs_list_enum777.get_Current();{
if (((((([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_item5_59233; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_item5_59233; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_item5_59233; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = v_item5_59233; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())).length(); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_receiver = v_item5_59233; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc8ull)); return (cs_left < cs_right); }()))) {
([&]() -> void { auto cs_receiver = v_list5_59192; auto cs_arg0 = v_item5_59233; cs_receiver.Add(cs_arg0); }());
}
}}}
std::int32_t v_num20_59489 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num21_59509 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num22_59529 = ([&]() -> std::int32_t { auto cs_left = (v_list5_59192).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::div_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num22_59529; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); v_num22_59529 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_237ab1e79f07965b() = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::Font> v_font_59657 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { return pls::cs::make_ref<pls::kairo::Font>(); }());
while (([&]() -> bool { auto cs_left = v_num20_59489; auto cs_right = (v_list5_59192).get_Count(); return (cs_left < cs_right); }())) {
pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_langPackRecord4_59752 = ([&]() { auto cs_array = v_list5_59192; auto cs_index = v_num20_59489; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_old = cs_237ab1e79f07965b(); auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_59657); pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord4_59752; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_59657); pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord4_59752; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }()); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); cs_237ab1e79f07965b() = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num20_59489; auto cs_rhs = v_num22_59529; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num20_59489 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num21_59509; auto cs_new = pls::cs::add_i32(cs_old,1); v_num21_59509 = cs_new; return cs_old; }());
}
if (([&]() -> bool { auto cs_left = v_num21_59509; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); cs_237ab1e79f07965b() = cs_value; return cs_value; }());
} else {
([&]() { auto cs_old = cs_237ab1e79f07965b(); auto cs_rhs = v_num21_59509; auto cs_value = pls::cs::div_i32(cs_old,cs_rhs); cs_237ab1e79f07965b() = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = cs_237ab1e79f07965b(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); cs_237ab1e79f07965b() = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = cs_237ab1e79f07965b(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); cs_237ab1e79f07965b() = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = cs_237ab1e79f07965b(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return (cs_left != cs_right); }())) {
([&]() -> void { std::int32_t cs_arg0 = cs_237ab1e79f07965b(); pls::kairo::Font::SetScale(cs_arg0); }());
}
}
} catch(const pls::cs::Exception& cs_caught_778) {auto cs_exception_778=pls::cs::capture_exception(cs_caught_778);
if(pls::cs::exception_is(cs_exception_778,"System.Exception")) {auto v_ex_60322=cs_exception_778;{
([&]() { auto cs_value = v_array_46734; pls::generated::cs_fe1686f2bdf4b397() = cs_value; return cs_value; }());
([&]() { auto cs_value = v_array2_46772; pls::generated::cs_74c39fff0f46ab52() = cs_value; return cs_value; }());
([&]() { auto cs_value = v_text_46809; cs_885e46a8a2b95893() = cs_value; return cs_value; }());
([&]() { auto cs_value = v_text2_46843; cs_9d62cf693893d256() = cs_value; return cs_value; }());
([&]() { auto cs_value = v_text3_46876; cs_2fd3deed1e409352() = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num_46907; cs_237ab1e79f07965b() = cs_value; return cs_value; }());
pls::cs::throw_exception(v_ex_60322);
}}
else {throw;} } }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_jarInflater_46694); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_46694); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{}; v_jarInflater_46694 = cs_value; return cs_value; }());
});
}
}
// M:kairo.unity.util.Language.LT(System.String,System.String)
pls::cs::String cs_334563e946ad4962(pls::cs::String v_text,pls::cs::String v_arg) { pls::generated::cs_init_72d9658ed61145d6();
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); pls::cs::String cs_arg1 = v_arg; return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());
}
}
// M:kairo.unity.util.Language.Position.#ctor(System.Int32,System.Int32)
pls::generated::cs_ab1b1085a7ab32b9 cs_f7e443d43797a1e8(std::int32_t v_line,std::int32_t v_segment) { cs_init_ab1b1085a7ab32b9();
{ pls::generated::cs_ab1b1085a7ab32b9 cs_this{}; cs_f7e443d43797a1e8_init(&cs_this,v_line,v_segment);return cs_this;}
}
void cs_f7e443d43797a1e8_init(pls::generated::cs_ab1b1085a7ab32b9* cs_this,std::int32_t v_line,std::int32_t v_segment) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_line; pls::game::cs_require(cs_target)->cs_1bd11544863adf53 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_segment; pls::game::cs_require(cs_target)->cs_2525b3344f53d974 = cs_value; return cs_value; }());
}
}
// M:kairo.unity.util.Language.RecordPosition.#ctor(System.Int32,System.Int32,kairo.unity.util.Language.LangPackRecord)
pls::generated::cs_acb158b492b43017 cs_aeb4d46bb60fe1d6(std::int32_t v_line,std::int32_t v_segment,pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_record) { cs_init_acb158b492b43017();
{ pls::generated::cs_acb158b492b43017 cs_this{}; cs_aeb4d46bb60fe1d6_init(&cs_this,v_line,v_segment,v_record);return cs_this;}
}
void cs_aeb4d46bb60fe1d6_init(pls::generated::cs_acb158b492b43017* cs_this,std::int32_t v_line,std::int32_t v_segment,pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_record) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_line; pls::game::cs_require(cs_target)->cs_06609f2ab38c958b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_segment; pls::game::cs_require(cs_target)->cs_018ea348c0cf88c0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_record; pls::game::cs_require(cs_target)->cs_5043ee31a67ae639 = cs_value; return cs_value; }());
}
}
// M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean)
bool cs_1acec610f93846f1(pls::cs::String v_file,pls::cs::Array<std::uint8_t> v_data,bool v_save) { pls::generated::cs_init_72d9658ed61145d6();
{try{
if (pls::generated::cs_b0827224162a4f93()) {
if (([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0053" u"\x0065" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005b" u"\x0028" u"\x006e" u"\x0075" u"\x006c" u"\x006c" u"\x0029" u"\x005d" u"",23)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
} else {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0053" u"\x0065" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005b" u"",16)); auto cs_right = v_file; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
}
if (([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::generated::cs_a73b188b45467dba() = cs_value; return cs_value; }());
if (([&]() -> bool { return cs_dea1d8116ed5aaf1(); }())) {
if (([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::generated::cs_3fb70c2eded7c9ff(); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_a73b188b45467dba() = cs_value; return cs_value; }());
([&]() -> void { cs_3d765e32623626a4(); }());
([&]() -> void { cs_5185b14a34385754(); }());
}
} else if (([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }())) {
if ((([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::cs::String(std::u16string(u"",0)); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()) || ([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::generated::cs_3fb70c2eded7c9ff(); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()))) {
([&]() -> void { cs_3d765e32623626a4(); }());
([&]() -> void { cs_5185b14a34385754(); }());
} else {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::generated::cs_a73b188b45467dba() = cs_value; return cs_value; }());
}
}
}
if ((([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ((([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::generated::cs_3fb70c2eded7c9ff(); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()) || ([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::generated::cs_01c4bf6216ab6adc(); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()))))) {
if (v_save) {
([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14)); pls::cs::String cs_arg1 = v_file; pls::kairo::PlayerPrefs::SetString(cs_arg0,cs_arg1); }());
([&]() -> void { pls::kairo::PlayerPrefs::Save(); }());
}
([&]() { auto cs_value = v_file; cs_8da583a8425c5117() = cs_value; return cs_value; }());
pls::cs::String v_id_43586 = pls::cs::String(std::u16string(u"\x0055" u"\x0041" u"\x002d" u"\x0033" u"\x0035" u"\x0032" u"\x0032" u"\x0038" u"\x0038" u"\x0037" u"\x0037" u"\x002d" u"\x0031" u"\x0038" u"",14));
([&]() -> void { bool cs_arg0 = true; pls::cs::String cs_arg1 = v_id_43586; auto cs_arg2 = pls::cs::Array<pls::cs::String>::make(1); cs_arg2.at(0) = v_file; cs_d56fc27939b907e9(cs_arg0,cs_arg1,cs_arg2); }());
if (v_save) {
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0044" u"\x0069" u"\x0073" u"\x0070" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x0050" u"\x0061" u"\x0067" u"\x0065" u"\x0056" u"\x0069" u"\x0065" u"\x0077" u"\x005b" u"\x0053" u"\x0065" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x0020" u"\x0020" u"\x0020" u"\x0020" u"\x004d" u"\x0075" u"\x006c" u"\x0074" u"\x0069" u"\x0054" u"\x0079" u"\x0070" u"\x0065" u"\x005d" u"",46)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
([&]() -> void { cs_9d34ee3db26afc7b(); }());
}
throw pls::cs::ReturnFlow<bool>{true};
}
bool v_flag_43862 = ((([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = (v_file).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && (!(([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005e" u"\x005b" u"\x0061" u"\x002d" u"\x007a" u"\x0041" u"\x002d" u"\x005a" u"\x0030" u"\x002d" u"\x0039" u"\x005f" u"\x005c" u"\x002d" u"\x005d" u"\x002b" u"\x005c" u"\x002e" u"\x0063" u"\x0073" u"\x0076" u"\x0024" u"",22)); return pls::cs::RuntimeRegex::IsMatch(cs_arg0,cs_arg1); }()))));
if (pls::generated::cs_4cc76a7a43706693()) {
if (([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0053" u"\x0065" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005b" u"\x0028" u"\x006e" u"\x0075" u"\x006c" u"\x006c" u"\x0029" u"\x005d" u"\x0020" u"\x0020" u"\x0020" u"\x0020" u"\x0063" u"\x0075" u"\x0073" u"\x0074" u"\x006f" u"\x006d" u"\x0028" u"",34)); auto cs_right = pls::cs::String(v_flag_43862?u"True":u"False"); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0029" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
} else {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0053" u"\x0065" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005b" u"",16)); auto cs_right = v_file; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x0020" u"\x0020" u"\x0020" u"\x0020" u"\x0063" u"\x0075" u"\x0073" u"\x0074" u"\x006f" u"\x006d" u"\x0028" u"",12)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(v_flag_43862?u"True":u"False"); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0029" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
}
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_44193 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::run_finally([&]() {try {
if (((([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = (v_file).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && ([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }()))) {
if ((!(v_flag_43862))) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",12)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }()); v_jarInflater_44193 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_44193); pls::cs::String cs_arg0 = v_file; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); v_data = cs_value; return cs_value; }());
} else {
if ((!(([&]() -> bool { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x005f" u"\x0063" u"\x0075" u"\x0073" u"\x0074" u"\x006f" u"\x006d" u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x002e" u"\x0063" u"\x0073" u"\x0076" u"",21)); return pls::kairo::Storage::Exists(cs_arg0,cs_arg1); }())))) {
throw pls::cs::ReturnFlow<bool>{false};
}
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x005f" u"\x0063" u"\x0075" u"\x0073" u"\x0074" u"\x006f" u"\x006d" u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x002e" u"\x0063" u"\x0073" u"\x0076" u"",21)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); v_data = cs_value; return cs_value; }());
}
}
([&]() -> void { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; cs_f93cc86620424e6c(cs_arg0); }());
if ((!(v_flag_43862))) {
pls::cs::String v_title_44680 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = cs_9d62cf693893d256(); return cs_3b656a07e9770826(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_title_44680); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = v_title_44680; cs_2fd3deed1e409352() = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x004b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"",9)); cs_885e46a8a2b95893() = cs_value; return cs_value; }());
}
if (v_save) {
if (v_flag_43862) {
if (([&]() -> bool { auto cs_left = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x006c" u"\x006f" u"\x0063" u"\x0061" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",23)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"",0)); return pls::kairo::PlayerPrefs::GetString(cs_arg0,cs_arg1); }()); auto cs_right = v_file; return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog_44959 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x004d" u"\x0065" u"\x0073" u"\x0073" u"\x0061" u"\x0067" u"\x0065" u"",7)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_44959); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0044" u"\x0061" u"\x0074" u"\x0061" u"\x0020" u"\x0064" u"\x006f" u"\x0077" u"\x006e" u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"\x0065" u"\x0064" u"\x002e" u"\x000a" u"\x0055" u"\x0070" u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"\x0020" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0020" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x0020" u"\x0061" u"\x006e" u"\x0064" u"\x0020" u"\x0063" u"\x0072" u"\x0065" u"\x0061" u"\x0074" u"\x006f" u"\x0072" u"\x0027" u"\x0073" u"\x0020" u"\x006e" u"\x0061" u"\x006d" u"\x0065" u"\x0020" u"\x0074" u"\x006f" u"\x0020" u"\x004b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"\x0020" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0073" u"\x0068" u"\x0061" u"\x0072" u"\x0069" u"\x006e" u"\x0067" u"\x003f" u"\x000a" u"\x004e" u"\x006f" u"\x0020" u"\x0070" u"\x0065" u"\x0072" u"\x0073" u"\x006f" u"\x006e" u"\x0061" u"\x006c" u"\x0020" u"\x0064" u"\x0061" u"\x0074" u"\x0061" u"\x0020" u"\x0077" u"\x0069" u"\x006c" u"\x006c" u"\x0020" u"\x0062" u"\x0065" u"\x0020" u"\x0073" u"\x0065" u"\x006e" u"\x0074" u"\x002e" u"",113)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
std::int32_t v_num_45147 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_44959); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x0073" u"\x0065" u"\x006e" u"\x0064" u"",19)); std::int32_t cs_arg1 = ((([&]() -> bool { auto cs_left = v_num_45147; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); pls::kairo::PlayerPrefs::SetInt(cs_arg0,cs_arg1); }());
}
([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x006c" u"\x006f" u"\x0063" u"\x0061" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",23)); pls::cs::String cs_arg1 = v_file; pls::kairo::PlayerPrefs::SetString(cs_arg0,cs_arg1); }());
([&]() -> void { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x005f" u"\x0063" u"\x0075" u"\x0073" u"\x0074" u"\x006f" u"\x006d" u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x002e" u"\x0063" u"\x0073" u"\x0076" u"",21)); pls::cs::Array<std::uint8_t> cs_arg3 = v_data; pls::kairo::Storage::Write(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14)); pls::cs::String cs_arg1 = v_file; pls::kairo::PlayerPrefs::SetString(cs_arg0,cs_arg1); }());
([&]() -> void { pls::kairo::PlayerPrefs::Save(); }());
}
bool v_num2_45469 = (v_flag_43862 && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x0073" u"\x0065" u"\x006e" u"\x0064" u"",19)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::PlayerPrefs::GetInt(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()));
pls::cs::String v_id2_45546 = pls::cs::String(std::u16string(u"\x0055" u"\x0041" u"\x002d" u"\x0033" u"\x0035" u"\x0032" u"\x0032" u"\x0038" u"\x0038" u"\x0037" u"\x0037" u"\x002d" u"\x0031" u"\x0038" u"",14));
if (v_num2_45469) {
([&]() -> void { bool cs_arg0 = true; pls::cs::String cs_arg1 = v_id2_45546; auto cs_arg2 = pls::cs::Array<pls::cs::String>::make(3); cs_arg2.at(0) = cs_9d62cf693893d256(); cs_arg2.at(1) = cs_885e46a8a2b95893(); cs_arg2.at(2) = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_file; return cs_4eef7fc5ca116b40(cs_arg0); }()); cs_d56fc27939b907e9(cs_arg0,cs_arg1,cs_arg2); }());
} else {
([&]() -> void { bool cs_arg0 = true; pls::cs::String cs_arg1 = v_id2_45546; auto cs_arg2 = pls::cs::Array<pls::cs::String>::make(1); cs_arg2.at(0) = cs_9d62cf693893d256(); cs_d56fc27939b907e9(cs_arg0,cs_arg1,cs_arg2); }());
}
if (v_save) {
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0044" u"\x0069" u"\x0073" u"\x0070" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x0050" u"\x0061" u"\x0067" u"\x0065" u"\x0056" u"\x0069" u"\x0065" u"\x0077" u"\x005b" u"\x0053" u"\x0065" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005d" u"",33)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
([&]() -> void { cs_9d34ee3db26afc7b(); }());
}
([&]() { auto cs_value = v_file; cs_8da583a8425c5117() = cs_value; return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_762) {
