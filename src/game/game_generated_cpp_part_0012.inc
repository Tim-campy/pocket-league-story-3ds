 auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_i_63047; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_width_63128 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_i_63047; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return cs_83a6f271dad6430d(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1cull)); return cs_array.get_Item(cs_index); }()); float cs_arg1 = static_cast<float>(v_num5_63082); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num3_62600; auto cs_right = v_num2_62581; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GHeight; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_GTop; return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg5 = v_width_63128; std::int32_t cs_arg6 = v_GHeight; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1dull)); return cs_array.get_Item(cs_index); }()); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num3_62600; auto cs_right = v_num2_62581; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GHeight; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_GTop; return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
if (([&]() { auto cs_left = pls::cs::box(v_T_S); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return;
}
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_f3bdc307b801c3d8(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_T_S; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_62532); pls::cs::String cs_arg0 = v_T_S; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num3_62600; auto cs_right = v_num2_62581; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GHeight; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_GTop; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_fff714fdd7b4bc9d(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_T_S; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_62532); pls::cs::String cs_arg0 = v_T_S; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num3_62600; auto cs_right = v_num2_62581; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GHeight; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_GTop; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
// M:main.AppData.DrawWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.String)
void cs_e913ec62d66058dc(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_GWidth,std::int32_t v_GHeight,std::int32_t v_GTop,pls::cs::String v_T_S) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_GWidth; std::int32_t cs_arg2 = v_GHeight; std::int32_t cs_arg3 = v_GTop; pls::cs::String cs_arg4 = v_T_S; std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bff8af433f297883(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
// M:main.AppData.DrawWindow2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_0cc1fdddf9e65634(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_GWidth,std::int32_t v_GHeight,std::int32_t v_GTop,std::int32_t v_oy) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_old = v_oy; auto cs_new = pls::cs::sub_i32(cs_old,1); v_oy = cs_new; return cs_old; }());
std::int32_t v_originX_63833 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }());
std::int32_t v_originY_63866 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
pls::cs::Ref<cs_e315dac1df3b175d> v_instance_63926 = ([&]() -> pls::cs::Ref<cs_e315dac1df3b175d> { return cs_f32a8bd00f4461ef(); }());
pls::cs::Ref<pls::kairo::Image> v_image_63970 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1cull)); return cs_array.get_Item(cs_index); }());
pls::cs::Ref<pls::kairo::Font> v_recoveredUnusedSlot4_64027 = pls::cs::Ref<pls::kairo::Font>{};
std::int32_t v_recoveredUnusedSlot5_64073 = std::int32_t{};
std::int32_t v_recoveredUnusedSlot6_64119 = std::int32_t{};
std::int32_t v_recoveredUnusedSlot7_64165 = std::int32_t{};
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = v_image_63970; float cs_arg1 = pls::game::cs_f32(0x00000000u); float cs_arg2 = static_cast<float>(v_oy); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_63926); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }())); float cs_arg4 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_63926); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = v_oy; return pls::cs::sub_i32(cs_left,cs_right); }())); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg7 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_63970); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); std::int32_t cs_arg8 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_63970); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_originX_63833; std::int32_t cs_arg1 = v_originY_63866; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
}
}
}
// M:main.AppData.ExecEvent(System.Int32,System.String,System.Int32[])
pls::cs::Ref<cs_a2cea92715051fa5> cs_96c78216c71a4527(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_id,pls::cs::String v_args,pls::cs::Array<std::int32_t> v_argi) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }())).length(); auto cs_right = v_id; return (cs_left <= cs_right); }()))) {
return pls::cs::Ref<cs_a2cea92715051fa5>{};
}
if (([&]() { auto cs_left = pls::cs::box(v_args); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); v_args = cs_value; return cs_value; }());
}
pls::cs::Ref<cs_80d72c9d6f5bfcfe> v_eventData_112012 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }()); auto cs_index = v_id; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d8524a356e38017; }()); auto cs_index = v_id; auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d8524a356e38017; }()); auto cs_index = v_id; return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return cs_83a6f271dad6430d(cs_arg0,cs_arg1); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if ((pls::generated::cs_4cc76a7a43706693() && ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_eventData_112012; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10e47a57597e3769; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::int32_t>>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_eventData_112012; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10e47a57597e3769; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))))) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0049" u"\x0044" u"\x005b" u"",3)); auto cs_right = pls::game::cs_integer_string(v_id); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x0020" u"\x306e" u"\x30a4" u"\x30d9" u"\x30f3" u"\x30c8" u"\x306f" u"\x5b58" u"\x5728" u"\x3057" u"\x307e" u"\x305b" u"\x3093" u"",14)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
return ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg0 = ([&]() { auto cs_receiver = v_eventData_112012; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10e47a57597e3769; }()); bool cs_arg1 = true; pls::cs::String cs_arg2 = v_args; pls::cs::Array<std::int32_t> cs_arg3 = v_argi; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_923e2e9d94b50211(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
// M:main.AppData.ExecuteScript(System.Int32[],System.Boolean,System.String,System.Int32[],System.Int32[][])
pls::cs::Ref<cs_a2cea92715051fa5> cs_a1904407481c4852(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::int32_t> v_scr,bool v_popup,pls::cs::String v_args,pls::cs::Array<std::int32_t> v_argi,pls::cs::Array<pls::cs::Array<std::int32_t>> v_script) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() { auto cs_left = pls::cs::box(v_scr); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (v_scr).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
return pls::cs::Ref<cs_a2cea92715051fa5>{};
}
pls::cs::Ref<cs_a2cea92715051fa5> v_subForm_113856 = pls::cs::Ref<cs_a2cea92715051fa5>{};
std::int32_t v_num_113879 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num2_113900 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Ref<cs_169021fb033627ed> v_teamData_113922 = pls::cs::Ref<cs_169021fb033627ed>{};
pls::cs::Ref<cs_76884ad002dceb7a> v_tenantData_113953 = pls::cs::Ref<cs_76884ad002dceb7a>{};
pls::cs::Array<std::int32_t> v_array_113981 = pls::cs::Array<std::int32_t>::make((v_scr).length());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_scr); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_array_113981); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (v_array_113981).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
for (std::int32_t v_i_114076 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); ([&]() -> bool { auto cs_left = v_i_114076; auto cs_right = (v_array_113981).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_114076; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_114076 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_113981; auto cs_index = v_i_114076; return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffff80000063ull)); return (cs_left <= cs_right); }())) {
std::int32_t v_num3_114155 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_113981; auto cs_index = v_i_114076; return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffff80000000ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
if (pls::generated::cs_b0827224162a4f93()) {
if (([&]() { auto cs_left = pls::cs::box(v_argi); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog_114258 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\xff74" u"\xff97" u"\xff70" u"",3)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_114258); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30b9" u"\x30af" u"\x30ea" u"\x30d7" u"\x30c8" u"\x306e" u"\x5b9f" u"\x884c" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x6574" u"\x6570" u"\x5f15" u"\x6570" u"\x3078" u"\x306e" u"\x53c2" u"\x7167" u"\x304c" u"\x0020" u"\x006e" u"\x0075" u"\x006c" u"\x006c" u"\x0020" u"\x3067" u"\x3059" u"\x3002" u"",34)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_114258); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
} else if (([&]() -> bool { auto cs_left = (v_argi).length(); auto cs_right = v_num3_114155; return (cs_left <= cs_right); }())) {
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog2_114432 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\xff74" u"\xff97" u"\xff70" u"",3)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_114432); pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x30b9" u"\x30af" u"\x30ea" u"\x30d7" u"\x30c8" u"\x306e" u"\x5b9f" u"\x884c" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x6574" u"\x6570" u"\x5f15" u"\x6570" u"\x3078" u"\x306e" u"\x53c2" u"\x7167" u"\x756a" u"\x53f7" u"\x304c" u"\x7bc4" u"\x56f2" u"\x5916" u"\x3067" u"\x3059" u"\x3002" u"",33)); auto cs_right = pls::game::cs_integer_string(v_num3_114155); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string((v_argi).length()); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_114432); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
}
}
([&]() { auto cs_target = v_array_113981; auto cs_index = v_i_114076; auto cs_value = ([&]() { auto cs_array = v_argi; auto cs_index = v_num3_114155; return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
([&]() { auto cs_value = v_array_113981; v_scr = cs_value; return cs_value; }());
switch (v_num_113879) {
case 0:
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::neg_i32(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_58ba802eb16824af(cs_receiver,cs_arg0,cs_arg1); }());
} else {
([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c55d45b06296c39b(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x4e07" u"",1)); std::int64_t cs_arg1 = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); return cs_8479246d6a9e3c73(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
}
break;
}
case 1:
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = v_args; pls::cs::Array<std::int32_t> cs_arg2 = v_argi; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_96c78216c71a4527(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }()); v_subForm_113856 = cs_value; return cs_value; }());
break;
}
case 2:
{
if (([&]() -> bool { auto cs_left = (v_scr).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left > cs_right); }())) {
pls::cs::String v_text_114941 = pls::cs::String(u"");
for (std::int32_t v_n_114976 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); ([&]() -> bool { auto cs_left = v_n_114976; auto cs_right = (v_scr).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_114976; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_114976 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = v_n_114976; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_text_114941; auto cs_rhs = pls::cs::String(std::u16string(u"\x0009" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_114941 = cs_value; return cs_value; }());
}
pls::cs::String v_value_115079 = ([&]() { auto cs_array = cs_a6acb1dbcdc3e821(); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = v_n_114976; return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
([&]() { auto cs_old = v_text_114941; auto cs_rhs = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_value_115079; pls::cs::String cs_arg1 = v_args; return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_114941 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = v_text_114941; v_args = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = v_args; return cs_1a5bef6be60e3144(cs_arg0,cs_arg1); }()); v_subForm_113856 = cs_value; return cs_value; }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_subForm_113856; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_68fcb18265769d80(cs_receiver,cs_arg0); }());
break;
}
case 3:
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x958b" u"\x5e55" u"\xff77" u"\xff6f" u"\xff78" u"\xff75" u"\xff8c" u"\x901a" u"\x4fe1" u"\x000a" u"\x304c" u"\x767a" u"\x884c" u"\x3055" u"\x308c" u"\x307e" u"\x3057" u"\x305f" u"",18)); return cs_f37fe52fbf5cb7ca(cs_arg0); }()); return cs_c99c9d4e5fd84a90(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_68fcb18265769d80(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = v_args; return cs_6ab4e0e4e2fbf409(cs_arg0,cs_arg1); }()); v_subForm_113856 = cs_value; return cs_value; }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_subForm_113856; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_68fcb18265769d80(cs_receiver,cs_arg0); }());
break;
}
case 4:
{
if (([&]() -> bool { auto cs_left = (v_scr).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left > cs_right); }())) {
pls::cs::String v_text2_115485 = pls::cs::String(u"");
for (std::int32_t v_num4_115521 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); ([&]() -> bool { auto cs_left = v_num4_115521; auto cs_right = (v_scr).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num4_115521; auto cs_new = pls::cs::add_i32(cs_old,1); v_num4_115521 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = v_num4_115521; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_text2_115485; auto cs_rhs = pls::cs::String(std::u16string(u"\x0009" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text2_115485 = cs_value; return cs_value; }());
}
pls::cs::String v_value2_115637 = ([&]() { auto cs_array = cs_a6acb1dbcdc3e821(); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = v_num4_115521; return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
([&]() { auto cs_old = v_text2_115485; auto cs_rhs = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_value2_115637; pls::cs::String cs_arg1 = v_args; return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text2_115485 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = v_text2_115485; v_args = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_168a4d2c87612e3b; }()); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = v_args; std::int32_t cs_arg2 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_d975d56836cd4f01(cs_arg0,cs_arg1,cs_arg2); }()); v_subForm_113856 = cs_value; return cs_value; }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_subForm_113856; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_68fcb18265769d80(cs_receiver,cs_arg0); }());
break;
}
case 6:
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_7ffc94dcefc625fc(cs_arg0); }()); v_subForm_113856 = cs_value; return cs_value; }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_subForm_113856; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_68fcb18265769d80(cs_receiver,cs_arg0); }());
break;
}
case 7:
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = (cs_old | cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
break;
}
case 8:
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_14daf94c5cc9a117(cs_arg0,cs_arg1); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
break;
}
case 9:
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_8f8054b388e3f93e> v_playerData5_116124 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab1e9b1101610757; }()); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_playerData5_116124); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_3a643b1c499c91f2(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_playerData5_116124); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = ([&]() { auto cs_receiver = v_playerData5_116124; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fd3d0f4b83ccd11a; }()); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
}
break;
}
case 10:
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_6803fd77f880b974> v_supervisorData_116416 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38b063657ea0f85; }()); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6803fd77f880b974>>(v_supervisorData_116416); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_578ec07433e9ad4f(cs_receiver,cs_arg0); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1aull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cfca9553bfb1ae94(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1aull)); pls::cs::String cs_arg1 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
}
}
break;
}
case 11:
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_5beb6285da308d06> v_formationData_116641 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }()); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5beb6285da308d06>>(v_formationData_116641); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_44b45d582a2cd832(cs_receiver,cs_arg0); }());
}
break;
}
case 12:
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b71369152562ebeb; }()); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); v_tenantData_113953 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_76884ad002dceb7a>>(v_tenantData_113953); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_10f45fbec18df8e2(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = v_tenantData_113953; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eeff62cf7cc3cf10; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_df4d36551e4e7018(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4ea9378e412c2976(cs_receiver,cs_arg0); }());
}
}
break;
}
case 13:
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_ec7bde62b3c2b35f> v_fanActData_117033 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86eaf5d444f8e536; }()); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ec7bde62b3c2b35f>>(v_fanActData_117033); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f73f7ae603a486e2(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x19ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = v_fanActData_117033; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2f3586a70c48cd01; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_df4d36551e4e7018(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4ea9378e412c2976(cs_receiver,cs_arg0); }());
}
}
break;
}
case 14:
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_4489b86073532f79> v_trainingData_117290 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }()); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4489b86073532f79>>(v_trainingData_117290); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2fae0b3104f15757(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x17ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = ([&]() { auto cs_receiver = v_trainingData_117290; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_33497b4bf95ea17d; }()); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
}
break;
}
case 15:
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_bd3043ac164d021f> v_sponsorData_117497 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }()); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_sponsorData_117497; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f0f476890aa67d1b; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd3043ac164d021f>>(v_sponsorData_117497); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2ebff4ed9484ea5e(cs_receiver,cs_arg0); }());
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cfca9553bfb1ae94(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); pls::cs::String cs_arg1 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_df4d36551e4e7018(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4ea9378e412c2976(cs_receiver,cs_arg0); }());
}
}
break;
}
case 16:
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_3e5b0d35ae6be8e7> v_questMatchData_117841 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }()); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_questMatchData_117841; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e78d2b9cd5330285; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3e5b0d35ae6be8e7>>(v_questMatchData_117841); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5a4aaafd12bca5e1(cs_receiver,cs_arg0); }());
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cfca9553bfb1ae94(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); pls::cs::String cs_arg1 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_df4d36551e4e7018(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4ea9378e412c2976(cs_receiver,cs_arg0); }());
}
}
break;
}
case 17:
{
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_ba9af87bc2bff5b4> v_tradeData2_118180 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }()); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_tradeData2_118180; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0cec29b10881eeac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ba9af87bc2bff5b4>>(v_tradeData2_118180); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_58bab8057b32b1a5(cs_receiver,cs_arg0); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cfca9553bfb1ae94(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::String cs_arg1 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_df4d36551e4e7018(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4ea9378e412c2976(cs_receiver,cs_arg0); }());
}
}
}
break;
}
}
case 18:
{
{
for (std::int32_t v_k_118483 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_118483; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_118483; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_118483 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_ba9af87bc2bff5b4> v_tradeData_118539 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }()); auto cs_index = v_k_118483; return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_tradeData_118539; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_746e84f8240a6c37; }()); auto cs_right = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ba9af87bc2bff5b4>>(v_tradeData_118539); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_58bab8057b32b1a5(cs_receiver,cs_arg0); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cfca9553bfb1ae94(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::String cs_arg1 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
break;
}
}
case 19:
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_b68aa9c3dd5cf14c> v_leagueData_118809 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }()); auto cs_index = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b68aa9c3dd5cf14c>>(v_leagueData_118809); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_daf67eb310d15fc9(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = v_leagueData_118809; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8a2ad2dcf58e1c56; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_df4d36551e4e7018(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4ea9378e412c2976(cs_receiver,cs_arg0); }());
}
}
break;
}
case 20:
{
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b71369152562ebeb; }()); auto cs_index = cs_fb6df40d6c8d54a1(); return cs_array.get_Item(cs_index); }()); v_tenantData_113953 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_76884ad002dceb7a>>(v_tenantData_113953); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_10f45fbec18df8e2(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x26ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = v_tenantData_113953; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eeff62cf7cc3cf10; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_df4d36551e4e7018(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4ea9378e412c2976(cs_receiver,cs_arg0); }());
}
break;
}
case 21:
{
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b71369152562ebeb; }()); auto cs_index = cs_f2f6d6b59543d16e(); return cs_array.get_Item(cs_index); }()); v_tenantData_113953 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_76884ad002dceb7a>>(v_tenantData_113953); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_10f45fbec18df8e2(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x26ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = v_tenantData_113953; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eeff62cf7cc3cf10; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_df4d36551e4e7018(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4ea9378e412c2976(cs_receiver,cs_arg0); }());
}
break;
}
case 22:
{
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b71369152562ebeb; }()); auto cs_index = cs_e536a9aad2f2307d(); return cs_array.get_Item(cs_index); }()); v_tenantData_113953 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_76884ad002dceb7a>>(v_tenantData_113953); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_10f45fbec18df8e2(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x26ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = v_tenantData_113953; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eeff62cf7cc3cf10; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_df4d36551e4e7018(cs_receiver,cs_arg0); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4ea9378e412c2976(cs_receiver,cs_arg0); }());
}
break;
}
case 23:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7f12854f7666a8c0(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
case 24:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7f12854f7666a8c0(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
case 25:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); std::int32_t cs_arg1 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7f12854f7666a8c0(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
case 26:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg1 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7f12854f7666a8c0(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
case 27:
{
{
for (std::int32_t v_num8_119976 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num8_119976; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num8_119976; auto cs_new = pls::cs::add_i32(cs_old,1); v_num8_119976 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_8f8054b388e3f93e> v_playerData8_120053 = pls::cs::unbox<pls::cs::Ref<cs_8f8054b388e3f93e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); std::int32_t cs_arg0 = v_num8_119976; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8f8054b388e3f93e>>(v_playerData8_120053); std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f6695ef7b0c2d09b(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
}
case 28:
{
{
for (std::int32_t v_num7_120256 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num7_120256; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num7_120256; auto cs_new = pls::cs::add_i32(cs_old,1); v_num7_120256 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_8f8054b388e3f93e> v_playerData7_120333 = pls::cs::unbox<pls::cs::Ref<cs_8f8054b388e3f93e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); std::int32_t cs_arg0 = v_num7_120256; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8f8054b388e3f93e>>(v_playerData7_120333); std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c5f81252b71fc176(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
}
case 29:
{
{
for (std::int32_t v_num6_120543 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num6_120543; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num6_120543; auto cs_new = pls::cs::add_i32(cs_old,1); v_num6_120543 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_8f8054b388e3f93e> v_playerData6_120620 = pls::cs::unbox<pls::cs::Ref<cs_8f8054b388e3f93e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); std::int32_t cs_arg0 = v_num6_120543; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8f8054b388e3f93e>>(v_playerData6_120620); std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c5f81252b71fc176(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
}
case 30:
{
{
for (std::int32_t v_num5_120830 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num5_120830; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num5_120830; auto cs_new = pls::cs::add_i32(cs_old,1); v_num5_120830 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_8f8054b388e3f93e> v_playerData4_120907 = pls::cs::unbox<pls::cs::Ref<cs_8f8054b388e3f93e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); std::int32_t cs_arg0 = v_num5_120830; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8f8054b388e3f93e>>(v_playerData4_120907); std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c5f81252b71fc176(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
}
case 31:
{
{
for (std::int32_t v_m_121118 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_121118; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_121118; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_121118 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_8f8054b388e3f93e> v_playerData3_121186 = pls::cs::unbox<pls::cs::Ref<cs_8f8054b388e3f93e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); std::int32_t cs_arg0 = v_m_121118; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8f8054b388e3f93e>>(v_playerData3_121186); std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c5f81252b71fc176(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
}
case 32:
{
{
for (std::int32_t v_l_121394 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_121394; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_121394; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_121394 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_8f8054b388e3f93e> v_playerData2_121462 = pls::cs::unbox<pls::cs::Ref<cs_8f8054b388e3f93e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); std::int32_t cs_arg0 = v_l_121394; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8f8054b388e3f93e>>(v_playerData2_121462); std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c5f81252b71fc176(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
}
case 33:
{
{
for (std::int32_t v_j_121670 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_121670; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_121670; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_121670 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_8f8054b388e3f93e> v_playerData_121738 = pls::cs::unbox<pls::cs::Ref<cs_8f8054b388e3f93e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); std::int32_t cs_arg0 = v_j_121670; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8f8054b388e3f93e>>(v_playerData_121738); std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); bool cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_70f307cb0fa7515f(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
}
case 34:
{
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_cbe68b9b24b53e9d(cs_arg0,cs_arg1); }()); v_num2_113900 = cs_value; return cs_value; }());
([&]() -> void { std::int32_t cs_arg0 = v_num2_113900; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_e6d7f2694992c8ae(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num2_113900; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
}
break;
}
case 35:
{
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_cbe68b9b24b53e9d(cs_arg0,cs_arg1); }()); v_num2_113900 = cs_value; return cs_value; }());
([&]() -> void { std::int32_t cs_arg0 = v_num2_113900; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); cs_e6d7f2694992c8ae(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num2_113900; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
}
break;
}
case 36:
{
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_cbe68b9b24b53e9d(cs_arg0,cs_arg1); }()); v_num2_113900 = cs_value; return cs_value; }());
([&]() -> void { std::int32_t cs_arg0 = v_num2_113900; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); cs_e6d7f2694992c8ae(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num2_113900; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x13ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
}
break;
}
case 37:
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x48ull)); return cs_f3757396c70cfb9a(cs_arg0); }()); v_subForm_113856 = cs_value; return cs_value; }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_subForm_113856; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_68fcb18265769d80(cs_receiver,cs_arg0); }());
break;
}
case 38:
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x34ull)); return cs_f3757396c70cfb9a(cs_arg0); }()); v_subForm_113856 = cs_value; return cs_value; }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_subForm_113856; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_68fcb18265769d80(cs_receiver,cs_arg0); }());
break;
}
case 39:
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x46ull)); return cs_f3757396c70cfb9a(cs_arg0); }()); v_subForm_113856 = cs_value; return cs_value; }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_subForm_113856; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_68fcb18265769d80(cs_receiver,cs_arg0); }());
break;
}
case 40:
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x45ull)); return cs_f3757396c70cfb9a(cs_arg0); }()); v_subForm_113856 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_subForm_113856; auto cs_value = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_30348f098e28d0ba = cs_value; return cs_value; }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_subForm_113856; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_68fcb18265769d80(cs_receiver,cs_arg0); }());
break;
}
case 41:
{
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); v_teamData_113922 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_169021fb033627ed>>(v_teamData_113922); std::int32_t cs_arg0 = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_28b3e7b1b8b25387(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x15ull)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_scr; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4df3684183687480(cs_receiver,cs_arg0,cs_arg1); }());
}
break;
}
case 42:
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x49ull)); return cs_f3757396c70cfb9a(cs_arg0); }()); v_subForm_113856 = cs_value; return cs_value; }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_subForm_113856; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_68fcb18265769d80(cs_receiver,cs_arg0); }());
break;
}
}
return v_subForm_113856;
}
}
}
// M:main.AppData.ExecuteScript(System.Int32[],System.Boolean,System.String,System.Int32[])
pls::cs::Ref<cs_a2cea92715051fa5> cs_3bfa66c84a48254b(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::int32_t> v_scr,bool v_popup,pls::cs::String v_args,pls::cs::Array<std::int32_t> v_argi) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Array<std::int32_t> cs_arg0 = v_scr; bool cs_arg1 = v_popup; pls::cs::String cs_arg2 = v_args; pls::cs::Array<std::int32_t> cs_arg3 = v_argi; pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg4 = pls::cs::Array<pls::cs::Array<std::int32_t>>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a1904407481c4852(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
// M:main.AppData.ExecuteScript(System.Int32[][],System.Boolean,System.String,System.Int32[],System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_a2cea92715051fa5> cs_45e6154c4803e55e(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<pls::cs::Array<std::int32_t>> v_script,bool v_popup,pls::cs::String v_args,pls::cs::Array<std::int32_t> v_argi,std::int32_t v_line,std::int32_t v_talkCharaType,std::int32_t v_talkCharaIndex) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(v_script); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::int32_t>>{}); return cs_left == cs_right; }())) {
return pls::cs::Ref<cs_a2cea92715051fa5>{};
}
pls::cs::Ref<cs_a2cea92715051fa5> v_subForm_112841 = pls::cs::Ref<cs_a2cea92715051fa5>{};
pls::cs::Ref<cs_456d3d004decc356> v_delayEvent_112871 = pls::cs::Ref<cs_456d3d004decc356>{};
for (std::int32_t v_i_112902 = v_line; ([&]() -> bool { auto cs_left = v_i_112902; auto cs_right = (v_script).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_112902; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_112902 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_112951 = ([&]() { auto cs_array = v_script; auto cs_index = v_i_112902; return cs_array.get_Item(cs_index); }());
std::int32_t v_num_112978 = ([&]() { auto cs_array = v_array_112951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
switch (v_num_112978) {
case 5:
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_456d3d004decc356> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg0 = v_script; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6efab0ea61f29346(cs_receiver,cs_arg0); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_i_112902; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() { auto cs_array = v_array_112951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); std::int32_t cs_arg4 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg5 = v_args; pls::cs::Array<std::int32_t> cs_arg6 = v_argi; return cs_da24e0fc27feed21(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }()); v_delayEvent_112871 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_right = (v_array_112951).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = v_delayEvent_112871; auto cs_value = ([&]() { auto cs_array = v_array_112951; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_3bb9a4cf3da2e687 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7f9e0682751f782; }())); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_delayEvent_112871); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
return v_subForm_112841;
}
default:
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Array<std::int32_t> cs_arg0 = v_array_112951; bool cs_arg1 = v_popup; pls::cs::String cs_arg2 = v_args; pls::cs::Array<std::int32_t> cs_arg3 = v_argi; pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg4 = v_script; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a1904407481c4852(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_subForm_112841 = cs_value; return cs_value; }());
if (((([&]() -> bool { auto cs_left = v_talkCharaIndex; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(v_subForm_112841); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_subForm_112841; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48681753fb5565a9; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = v_subForm_112841; auto cs_value = v_talkCharaType; pls::game::cs_require(cs_target)->cs_76ca7803148410fd = cs_value; return cs_value; }());
([&]() { auto cs_target = v_subForm_112841; auto cs_value = v_talkCharaIndex; pls::game::cs_require(cs_target)->cs_48681753fb5565a9 = cs_value; return cs_value; }());
}
break;
}
}
}
return v_subForm_112841;
}
}
}
// M:main.AppData.ExecuteScript(System.Int32[][],System.Boolean,System.String,System.Int32[],System.Int32)
pls::cs::Ref<cs_a2cea92715051fa5> cs_923e2e9d94b50211(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<pls::cs::Array<std::int32_t>> v_script,bool v_popup,pls::cs::String v_args,pls::cs::Array<std::int32_t> v_argi,std::int32_t v_line) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg0 = v_script; bool cs_arg1 = v_popup; pls::cs::String cs_arg2 = v_args; pls::cs::Array<std::int32_t> cs_arg3 = v_argi; std::int32_t cs_arg4 = v_line; std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_45e6154c4803e55e(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
}
// M:main.AppData.FrameToMilliSecond(System.Int32)
std::int32_t cs_18a764a32e8067a4(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_frame) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); auto cs_right = v_frame; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::div_i32(cs_left,cs_right); }());
}
}
}
// M:main.AppData.Gc
void cs_82225e2054b31b3e() { cs_init_2ffa6f51468590ea();
{
([&]() -> void { pls::generated::cs_ff348c05d6b0416a(); }());
([&]() -> void { cs_012506043193cb2a(); }());
try {
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x64ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_732) {auto cs_exception_732=pls::cs::capture_exception(cs_caught_732);
if(pls::cs::exception_is(cs_exception_732,"System.Exception")) {{

}}
else {throw;} }
}
}
// M:main.AppData.GetAllStock(System.Int32)
std::int32_t cs_9221c265df5b5c4a(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_itemId) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
{
std::int32_t v_recoveredReturn_103400 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
return v_recoveredReturn_103400;
}
}
}
}
// M:main.AppData.GetBRectSeb(kairo.unity.ui.Seb,System.Int32,System.Int32,System.Int32)
pls::cs::Array<std::int32_t> cs_57a3d9e189bcafdf(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,std::int32_t v_x,std::int32_t v_y,std::int32_t v_frame) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_boundingRect_73234 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(v_seb); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a507412f284f974c(cs_receiver); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_785744431b3607a3; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_boundingRect_73234; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_785744431b3607a3; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_boundingRect_73234; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_785744431b3607a3; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = v_boundingRect_73234; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_785744431b3607a3; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() { auto cs_array = v_boundingRect_73234; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_785744431b3607a3; }());
}
}
}
// M:main.AppData.GetDelayId(System.Int32[][])
std::int32_t cs_6efab0ea61f29346(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<pls::cs::Array<std::int32_t>> v_script) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_125465 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_125465; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_125465; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_125465 = cs_new; return cs_old; }())) {
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }()); auto cs_index = v_i_125465; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(v_script); auto cs_right = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }()); auto cs_index = v_i_125465; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10e47a57597e3769; }())); return cs_left == cs_right; }()))) {
return ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_i_125465; return pls::cs::add_i32(cs_left,cs_right); }());
}
}
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0067" u"\x0065" u"\x0074" u"\x0044" u"\x0065" u"\x006c" u"\x0061" u"\x0079" u"\x0049" u"\x0064" u"\x003a" u"\x002d" u"\x0031" u"",13)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
}
}
// M:main.AppData.GetDelayScript(System.Int32)
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_376abd5bcc201f39(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_delayId) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_125749 = ([&]() -> std::int32_t { auto cs_left = v_delayId; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mod_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_delayId; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return (cs_left < cs_right); }())) {
return ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }()); auto cs_index = v_num_125749; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10e47a57597e3769; }());
}
return pls::cs::Array<pls::cs::Array<std::int32_t>>{};
}
}
}
// M:main.AppData.GetEvenlyDivisionArea(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Array<std::int32_t> cs_0e43d8ab78998b13(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_left,std::int32_t v_right,std::int32_t v_padding,std::int32_t v_index,std::int32_t v_max) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_109974 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_right; auto cs_right = v_left; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_padding; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_max; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = v_max; return pls::cs::div_i32(cs_left,cs_right); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b7fccfa2cdbb09c7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_left; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num_109974; auto cs_right = v_padding; return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b7fccfa2cdbb09c7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_left; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num_109974; auto cs_right = v_padding; return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num_109974; return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b7fccfa2cdbb09c7; }());
}
}
}
// M:main.AppData.GetExistPopupNum(System.Int32)
std::int32_t cs_403b24da3b07fdd6(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_id) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_137057 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_num2_137078 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num2_137078; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num2_137078; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_137078 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_array_137149 = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); std::int32_t cs_arg0 = v_num2_137078; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
pls::cs::Array<std::int32_t> v_array2_137209 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() { auto cs_array = v_array_137149; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_137209; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_num_137057; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_137057 = cs_new; return cs_old; }());
}
}
return v_num_137057;
}
}
}
// M:main.AppData.GetHighScore
std::int64_t cs_c13ac9fb15b1936e(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
}
}
}
// M:main.AppData.GetHttpErrorText
pls::cs::String cs_428607d20e3f3658(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::String v_result_91539 = pls::cs::String(std::u16string(u"\x901a" u"\x4fe1" u"\x3092" u"\x8a31" u"\x53ef" u"\x3057" u"\x96fb" u"\x6ce2" u"\x72b6" u"\x6cc1" u"\x000a" u"\x3092" u"\x78ba" u"\x8a8d" u"\x3057" u"\x3066" u"\x4e0b" u"\x3055" u"\x3044" u"",19));
if (([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::String { return cs_11f71ced6c57f274(); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { return cs_11f71ced6c57f274(); }()); v_result_91539 = cs_value; return cs_value; }());
}
return v_result_91539;
}
}
}
// M:main.AppData.GetInstance
pls::cs::Ref<cs_2ffa6f51468590ea> cs_6b283e61fdac2d16() { cs_init_2ffa6f51468590ea();
{
if (([&]() { auto cs_left = pls::cs::box(cs_ce273ff1f2b6e5e2()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_2f5492a9dea0a4ac(); }()); cs_ce273ff1f2b6e5e2() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_ce273ff1f2b6e5e2()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0503ee09bc84a861(cs_receiver); }());
}
return cs_ce273ff1f2b6e5e2();
}
}
// M:main.AppData.GetInt2Array(System.String)
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_1790480b70821d5d(pls::cs::String v_src) { cs_init_2ffa6f51468590ea();
{
pls::cs::Array<pls::cs::String> v_array_96244 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0026" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
pls::cs::Array<pls::cs::Array<std::int32_t>> v_array2_96291 = pls::cs::Array<pls::cs::Array<std::int32_t>>::make((v_array_96244).length());
for (std::int32_t v_i_96337 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_96337; auto cs_right = (v_array2_96291).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_96337; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_96337 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_96291; auto cs_index = v_i_96337; auto cs_value = ([&]() -> pls::cs::Array<std::int32_t> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_96244; auto cs_index = v_i_96337; return cs_array.get_Item(cs_index); }()); return cs_fd5ca70325423016(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return v_array2_96291;
}
}
// M:main.AppData.GetIntArray(System.String)
pls::cs::Array<std::int32_t> cs_fd5ca70325423016(pls::cs::String v_src) { cs_init_2ffa6f51468590ea();
{
pls::cs::Array<pls::cs::String> v_array_95981 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
pls::cs::Array<std::int32_t> v_array2_96026 = pls::cs::Array<std::int32_t>::make((v_array_95981).length());
for (std::int32_t v_i_96070 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_96070; auto cs_right = (v_array2_96026).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_96070; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_96070 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_96026; auto cs_index = v_i_96070; auto cs_value = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_95981; auto cs_index = v_i_96070; return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return v_array2_96026;
}
}
// M:main.AppData.GetIsometricX(System.Int32,System.Int32)
std::int32_t cs_100d897c2beb4fd1(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_xi,std::int32_t v_yi) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_xi; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_yi; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
}
}
}
// M:main.AppData.GetIsometricY(System.Int32,System.Int32)
std::int32_t cs_06bd63618a2101da(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_xi,std::int32_t v_yi) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_yi; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_xi; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
}
}
}
// M:main.AppData.GetMainBGM
std::int32_t cs_a344504a6163c89e(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
}
}
// M:main.AppData.GetMoneyHighScore
std::int64_t cs_f9661335e04b605e(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }());
}
}
}
// M:main.AppData.GetNearNeighborNode(System.Int32[][][],System.Int32,System.Int32,System.Int32[])
pls::cs::Array<std::int32_t> cs_66bc9cf12d03f05d(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> v_nodeMap,std::int32_t v_x,std::int32_t v_y,pls::cs::Array<std::int32_t> v_priority) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_94506 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull));
pls::cs::Array<std::int32_t> v_result_94535 = pls::cs::Array<std::int32_t>{};
for (std::int32_t v_i_94562 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_94562; auto cs_right = (cs_2dce95b86e846efc()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_94562; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_94562 = cs_new; return cs_old; }())) {
std::int32_t v_num2_94607 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_2dce95b86e846efc(); auto cs_index = v_i_94562; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num3_94641 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_2dce95b86e846efc(); auto cs_index = v_i_94562; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());
if (((((((([&]() -> bool { auto cs_left = v_num3_94641; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) || (([&]() -> bool { auto cs_left = (v_nodeMap).length(); auto cs_right = v_num3_94641; return (cs_left <= cs_right); }())))) || (([&]() -> bool { auto cs_left = v_num2_94607; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())))) || (([&]() -> bool { auto cs_left = (([&]() { auto cs_array = v_nodeMap; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = v_num2_94607; return (cs_left <= cs_right); }())))) {
continue;
}
pls::cs::Array<std::int32_t> v_array_94784 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_nodeMap; auto cs_index = v_num3_94641; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num2_94607; return cs_array.get_Item(cs_index); }());
if ((([&]() { auto cs_left = pls::cs::box(v_priority); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(v_array_94784); auto cs_right = pls::cs::box(v_priority); return cs_left == cs_right; }()))) {
return v_priority;
}
std::int32_t v_num4_94897 = ([&]() { auto cs_array = v_array_94784; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = v_num4_94897; auto cs_right = v_num_94506; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_num4_94897; v_num_94506 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_array_94784; v_result_94535 = cs_value; return cs_value; }());
}
}
return v_result_94535;
}
}
}
// M:main.AppData.GetNearNeighborNode(System.Int32[][][],System.Int32,System.Int32)
pls::cs::Array<std::int32_t> cs_36d757d9a6b64570(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> v_nodeMap,std::int32_t v_x,std::int32_t v_y) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> cs_arg0 = v_nodeMap; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; pls::cs::Array<std::int32_t> cs_arg3 = pls::cs::Array<std::int32_t>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_66bc9cf12d03f05d(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:main.AppData.GetNeighborNodeList(System.Int32[][][],System.Int32,System.Int32)
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_bb8f32b6ffa34b44(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> v_nodeMap,std::int32_t v_x,std::int32_t v_y) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_95096 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
for (std::int32_t v_i_95131 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_95131; auto cs_right = (cs_2dce95b86e846efc()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_95131; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_95131 = cs_new; return cs_old; }())) {
std::int32_t v_num_95176 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_2dce95b86e846efc(); auto cs_index = v_i_95131; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num2_95209 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_2dce95b86e846efc(); auto cs_index = v_i_95131; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());
if (((((((([&]() -> bool { auto cs_left = v_num2_95209; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) || (([&]() -> bool { auto cs_left = (v_nodeMap).length(); auto cs_right = v_num2_95209; return (cs_left <= cs_right); }())))) || (([&]() -> bool { auto cs_left = v_num_95176; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())))) || (([&]() -> bool { auto cs_left = (([&]() { auto cs_array = v_nodeMap; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = v_num_95176; return (cs_left <= cs_right); }())))) {
continue;
}
pls::cs::Array<std::int32_t> v_array_95350 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_nodeMap; auto cs_index = v_num2_95209; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num_95176; return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_95350; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_95096); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array_95350); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
pls::cs::Array<pls::cs::Array<std::int32_t>> v_array2_95469 = pls::cs::Array<pls::cs::Array<std::int32_t>>::make(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_95096); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()));
for (std::int32_t v_j_95516 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_95516; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_95096); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_95516; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_95516 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_95469; auto cs_index = v_j_95516; auto cs_value = pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_95096); std::int32_t cs_arg0 = v_j_95516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (std::int32_t v_k_95613 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_95613; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_array2_95469).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_95613; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_95613 = cs_new; return cs_old; }())) {
for (std::int32_t v_num3_95666 = ([&]() -> std::int32_t { auto cs_left = (v_array2_95469).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num3_95666; auto cs_right = v_k_95613; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num3_95666; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_95666 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array2_95469; auto cs_index = v_num3_95666; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array2_95469; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_95666; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return (cs_left < cs_right); }())) {
pls::cs::Array<std::int32_t> v_array3_95783 = ([&]() { auto cs_array = v_array2_95469; auto cs_index = v_num3_95666; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = v_array2_95469; auto cs_index = v_num3_95666; auto cs_value = ([&]() { auto cs_array = v_array2_95469; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_95666; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array2_95469; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_95666; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_array3_95783;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
return v_array2_95469;
}
}
}
// M:main.AppData.GetNetHighScore
std::int64_t cs_9422ea01999c2f4b(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
}
}
}
// M:main.AppData.GetNowStoreIndex
std::int32_t cs_9a813e32dc689c89(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dcdb2fb19217cbe2; }());
}
}
}
// M:main.AppData.GetPopupMessage(System.Int32)
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> cs_e939d5726a9cdfc7(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_key) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_136486 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_136486; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_136486; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_136486 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_array_136554 = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); std::int32_t cs_arg0 = v_num_136486; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
pls::cs::Array<std::int32_t> v_array2_136613 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() { auto cs_array = v_array_136554; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_136613; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_key; return (cs_left == cs_right); }())) {
return v_array_136554;
}
}
return pls::cs::Array<pls::cs::Ref<pls::cs::Object>>{};
}
}
}
// M:main.AppData.GetSeason
std::int32_t cs_c2f5a87985b4be26(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left <= cs_right); }()))) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return (cs_left <= cs_right); }()))) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
}
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return (cs_left <= cs_right); }()))) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));
}
}
}
// M:main.AppData.GetSeason(System.Int32)
std::int32_t cs_70ecbb19b09f026f(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_month) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_month; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_month; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left <= cs_right); }()))) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_month; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_month; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left <= cs_right); }()))) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
}
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_month; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_month; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return (cs_left <= cs_right); }()))) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));
}
}
}
// M:main.AppData.GetStockTotal(System.Int32[])
std::int32_t cs_f962a6f3d7d47166(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::int32_t> v_stock) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(v_stock); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
std::int32_t v_num_103549 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_i_103570 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_103570; auto cs_right = (v_stock).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_103570; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_103570 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_num_103549; auto cs_rhs = ([&]() { auto cs_array = v_stock; auto cs_index = v_i_103570; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_103549 = cs_value; return cs_value; }());
}
return v_num_103549;
}
}
}
// M:main.AppData.GetTime(System.Int32,System.Int32)
std::int32_t cs_64dc9fcd3a5fc559(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_week,std::int32_t v_time) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_105869 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
([&]() { auto cs_old = v_num_105869; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_week; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5460ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_105869 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num_105869; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_time; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_105869 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num_105869; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa8c0ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x15180ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); v_num_105869 = cs_value; return cs_value; }());
return v_num_105869;
}
}
}
// M:main.AppData.GettMoneyNetHighScore
std::int64_t cs_73e8db267cf0751e(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }());
}
}
}
// M:main.AppData.Init
void cs_0503ee09bc84a861(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }()); cs_3e56073ce0fe6fbf() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_35ab145223dfa9ea() = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x006d" u"\x0069" u"\x0063" u"\x0072" u"\x006f" u"\x0065" u"\x0064" u"\x0069" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x002e" u"\x0070" u"\x006c" u"\x0061" u"\x0074" u"\x0066" u"\x006f" u"\x0072" u"\x006d" u"",21)); return pls::kairo::IApplication::GetProperty(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_3c515a641b6b6cb5 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x004d" u"\x0049" u"\x0044" u"\x006c" u"\x0065" u"\x0074" u"\x002d" u"\x004a" u"\x0061" u"\x0072" u"\x002d" u"\x0055" u"\x0052" u"\x004c" u"",14)); return pls::kairo::IApplication::GetProperty(cs_arg0); }()); pls::generated::cs_3906dbbf3696bb10(cs_arg0); }());
try {
if ((!(([&]() -> bool { return pls::kairo::RecordStore::Setup(); }())))) {
([&]() -> void { pls::kairo::RecordStore::CreateRecordStore(); }());
}
} catch(const pls::cs::Exception& cs_caught_21) {auto cs_exception_21=pls::cs::capture_exception(cs_caught_21);
if(pls::cs::exception_is(cs_exception_21,"System.Exception")) {auto v_t_42698=cs_exception_21;{
([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_42698; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
}}
else {throw;} }
([&]() -> void { pls::cs::Array<pls::cs::String> cs_arg0 = ([&]() { auto cs_array = cs_cc4ff09a914e39af(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::kairo::RecordStore::SetResourceFiles(cs_arg0); }());
([&]() -> void { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"\x002f" u"\x006f" u"\x006e" u"\x0073" u"\x0065" u"\x006e" u"",15)); pls::kairo::Storage::Setup(cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::Array<std::int32_t> v_array_42841 = pls::assets::baked_array<std::int32_t>("6a6dfe876bb1e44bf22d069329f0a8992f0d0fe5b0f9041214be96b80292612b");
pls::cs::Array<std::uint8_t> v_array2_43021 = pls::cs::Array<std::uint8_t>::make(([&]() -> std::int32_t { auto cs_left = (v_array_42841).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }()));
for (std::int32_t v_i_43070 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_43070; auto cs_right = (v_array2_43021).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_43070; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_43070 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_43021; auto cs_index = v_i_43070; auto cs_value = pls::cs::cast_integral<std::uint8_t>((([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_42841; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_i_43070; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_43070; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { pls::cs::Array<std::uint8_t> cs_arg0 = v_array2_43021; pls::generated::cs_a232dc3a48dd6d41(cs_arg0); }());
([&]() -> void { pls::kairo::RecordStore::PreferencesToFile(); }());
if ((pls::generated::cs_b0827224162a4f93() && (!(pls::generated::cs_137686a1e7856340())))) {
([&]() -> void { pls::cs::Array<std::int64_t> cs_arg0 = pls::cs::Array<std::int64_t>{}; bool cs_arg1 = true; cs_815bf8a38e0fb5d2(cs_arg0,cs_arg1); }());
} else {
pls::cs::Array<std::int64_t> v_crcTable_43357 = pls::assets::baked_array<std::int64_t>("ef74e8a6a6f11db7ae8ba56bfe352550b38696d33eb4eec4e65822dc3ceab875");
([&]() -> void { pls::cs::Array<std::int64_t> cs_arg0 = v_crcTable_43357; bool cs_arg1 = true; cs_815bf8a38e0fb5d2(cs_arg0,cs_arg1); }());
}
([&]() -> void { cs_969e6cb0fe9187f1(); }());
pls::cs::Ref<pls::kairo::Image> v_image_43851 = pls::cs::Ref<pls::kairo::Image>{};
pls::cs::Ref<pls::kairo::Graphics> v_graphics_43877 = pls::cs::Ref<pls::kairo::Graphics>{};
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Image> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_arg2 = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull))); auto cs_arg3 = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return pls::kairo::Image::CreateImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); v_image_43851 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Graphics> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_43851); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetGraphics(); }()); v_graphics_43877 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_43877); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_43877); float cs_arg0 = pls::game::cs_f32(0x00000000u); float cs_arg1 = pls::game::cs_f32(0x00000000u); float cs_arg2 = pls::game::cs_f32(0x40800000u); float cs_arg3 = pls::game::cs_f32(0x40800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_43877); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_43877); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_43877); float cs_arg0 = pls::game::cs_f32(0x00000000u); float cs_arg1 = pls::game::cs_f32(0x00000000u); float cs_arg2 = pls::game::cs_f32(0x40800000u); float cs_arg3 = pls::game::cs_f32(0x40800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_43877); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_914a694717591e02 = cs_value; return cs_value; }());
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_graphics_43877); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_43877); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(cs_arg0); }());
}
if (([&]() { auto cs_left = pls::cs::box(v_image_43851); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_43851); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
}
});
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_3ee77977aa791047> { return cs_03172f7ba0b3ea2e(); }()); pls::game::cs_require(cs_target)->cs_54080fc05a8a4a94 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_e31f80000513fe82> { return cs_046213c85d73180d(); }()); pls::game::cs_require(cs_target)->cs_7ee89233a123e4c5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_65bcdaa7ea8c7d7a> { return cs_0d4cf39d498f953d(); }()); pls::game::cs_require(cs_target)->cs_d7dad9c904629e24 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_d0b7ac4933bed3ac> { return cs_10943ab7d88fab29(); }()); pls::game::cs_require(cs_target)->cs_ea5db026197fd848 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_ca6f5bbc06a496a9> { return cs_4d154e578785d870(); }()); pls::game::cs_require(cs_target)->cs_9a33424672d806b2 = cs_value; return cs_value; }());
}
}
}
// M:main.AppData.InitSystemSaveData
void cs_11c8e1bd6951af89(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e> { pls::cs::Array<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>> cs_arg0 = cs_fdd82f25066d7e6e(); pls::cs::Array<std::int32_t> cs_arg1 = cs_00f9a807d9f63c9e(); pls::cs::Array<std::int64_t> cs_arg2 = cs_baf0fa689d930b78(); pls::cs::Array<pls::cs::String> cs_arg3 = cs_e25cc3357054a6bb(); pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_arg4 = cs_b029919ba6a8806e(); return pls::generated::cs_e34104df98d3719c(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); pls::game::cs_require(cs_target)->cs_cf8366a706eb588f = cs_value; return cs_value; }());
if (([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if ((pls::generated::cs_d6caa754a735f006() && ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3c515a641b6b6cb5; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0061" u"\x0070" u"",2)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
void cs_deba4b0ce0e3b25a(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_type,std::int32_t v_id,std::int32_t v_depth,std::int32_t v_seb,std::int32_t v_frame,std::int32_t v_x,std::int32_t v_y,bool v_dark) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = v_depth; std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); std::int32_t cs_arg4 = v_seb; std::int32_t cs_arg5 = v_frame; std::int32_t cs_arg6 = v_x; std::int32_t cs_arg7 = v_y; bool cs_arg8 = v_dark; std::int32_t cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e2cc7be9866cb657(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
}
// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)
void cs_e2cc7be9866cb657(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_type,std::int32_t v_id,std::int32_t v_depth,std::int32_t v_img,std::int32_t v_seb,std::int32_t v_frame,std::int32_t v_x,std::int32_t v_y,bool v_dark,std::int32_t v_layer) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dcc4c8afca6eace7; }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_64448a7513b68aab; }())).length(); return (cs_left >= cs_right); }())) {
return;
}
std::int32_t v_num_127159 = std::int32_t{};
while (true) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_depth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x168ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num_127159 = cs_value; return cs_value; }());
if ((([&]() -> bool { auto cs_left = v_num_127159; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_797d22d4c2c75df4; }())).length(); auto cs_right = v_num_127159; return (cs_left <= cs_right); }()))) {
return;
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_797d22d4c2c75df4; }()); auto cs_index = v_num_127159; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return (cs_left >= cs_right); }())) {
([&]() { auto cs_old = v_depth; auto cs_new = pls::cs::add_i32(cs_old,1); v_depth = cs_new; return cs_old; }());
continue;
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a983c6db567ab7de; }()); auto cs_index = v_num_127159; return cs_array.get_Item(cs_index); }()); auto cs_index = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_797d22d4c2c75df4; }()); auto cs_index = v_num_127159; return cs_array.get_Item(cs_index); }()); auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dcc4c8afca6eace7; }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_797d22d4c2c75df4; }()); auto cs_index = v_num_127159; auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::cast_integral<std::uint8_t>(pls::cs::add_i32(cs_old,1)); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6de10b92fdc859b0; }()); auto cs_right = v_num_127159; return (cs_left > cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_num_127159; pls::game::cs_require(cs_target)->cs_6de10b92fdc859b0 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d3b5753ef643c4e; }()); auto cs_right = v_num_127159; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_num_127159; pls::game::cs_require(cs_target)->cs_3d3b5753ef643c4e = cs_value; return cs_value; }());
}
pls::cs::Array<std::int32_t> v_array_127565 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_64448a7513b68aab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dcc4c8afca6eace7; }()); return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_type;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_id;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_depth;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = v_img;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = v_seb;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = v_frame;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = v_x;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = v_y;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ((v_dark ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = v_layer;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_dcc4c8afca6eace7; auto cs_new = pls::cs::add_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_dcc4c8afca6eace7 = cs_new; return cs_old; }());
break;
}
}
}
}
// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
void cs_d880991aa86126a8(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_type,std::int32_t v_id,std::int32_t v_depth,std::int32_t v_img,std::int32_t v_seb,std::int32_t v_frame,std::int32_t v_x,std::int32_t v_y,bool v_dark) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = v_depth; std::int32_t cs_arg3 = v_img; std::int32_t cs_arg4 = v_seb; std::int32_t cs_arg5 = v_frame; std::int32_t cs_arg6 = v_x; std::int32_t cs_arg7 = v_y; bool cs_arg8 = v_dark; std::int32_t cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e2cc7be9866cb657(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
}
// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_4cdec4269cf962ba(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_type,std::int32_t v_id,std::int32_t v_depth,std::int32_t v_img,std::int32_t v_seb,std::int32_t v_frame,std::int32_t v_x,std::int32_t v_y) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = v_depth; std::int32_t cs_arg3 = v_img; std::int32_t cs_arg4 = v_seb; std::int32_t cs_arg5 = v_frame; std::int32_t cs_arg6 = v_x; std::int32_t cs_arg7 = v_y; bool cs_arg8 = false; std::int32_t cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e2cc7be9866cb657(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
}
// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_6b70c0e50e688669(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_type,std::int32_t v_id,std::int32_t v_depth,std::int32_t v_seb,std::int32_t v_frame,std::int32_t v_x,std::int32_t v_y) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = v_depth; std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); std::int32_t cs_arg4 = v_seb; std::int32_t cs_arg5 = v_frame; std::int32_t cs_arg6 = v_x; std::int32_t cs_arg7 = v_y; bool cs_arg8 = false; std::int32_t cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e2cc7be9866cb657(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
}
// M:main.AppData.IntegerVectorToIntAry(java.util.Vector)
pls::cs::Array<std::int32_t> cs_ddb8952459c3b653(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_ary) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_90623 = pls::cs::Array<std::int32_t>::make(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_ary); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()));
for (std::int32_t v_i_90664 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_90664; auto cs_right = (v_array_90623).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_90664; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_90664 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_90623; auto cs_index = v_i_90664; auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7de6788b61a5af56>>((pls::cs::unbox<pls::cs::Ref<pls::generated::cs_7de6788b61a5af56>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_ary); std::int32_t cs_arg0 = v_i_90664; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_b1fe1ec0a394cd44(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return v_array_90623;
}
}
}
// M:main.AppData.IntToByteArray(System.Int32[])
pls::cs::Array<std::uint8_t> cs_fe9e3393f2622728(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::int32_t> v_ints) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_fb60578b3098a284> v_byteArrayOutputStream_97497 = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_97497; std::int32_t cs_arg1 = (v_ints).length(); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_97622 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_97622; auto cs_right = (v_ints).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_97622; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_97622 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_97497; std::int32_t cs_arg1 = ([&]() { auto cs_array = v_ints; auto cs_index = v_i_97622; return cs_array.get_Item(cs_index); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
}
pls::cs::Array<std::uint8_t> v_result_97728 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_97497); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_97497); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
return v_result_97728;
}
}
}
// M:main.AppData.IsLanguageJpBase(System.Boolean)
bool cs_e6e00716bdf80aa1(bool v_includeJP) { cs_init_2ffa6f51468590ea();
{
if ((v_includeJP && ([&]() -> bool { return cs_a49b19e2c67187e3(); }()))) {
return true;
}
pls::cs::String v_languageCode_148979 = ([&]() -> pls::cs::String { return cs_154f0344cd538956(); }());
if (([&]() -> bool { auto cs_arg0 = pls::cs::String(std::u16string(u"\x006b" u"\x006f" u"",2)); auto cs_arg1 = v_languageCode_148979; return pls::game::cs_string_equals(cs_arg0,cs_arg1); }())) {
return true;
}
if (([&]() -> bool { auto cs_arg0 = pls::cs::String(std::u16string(u"\x007a" u"\x0068" u"",2)); auto cs_arg1 = v_languageCode_148979; return pls::game::cs_string_equals(cs_arg0,cs_arg1); }())) {
return true;
}
if (([&]() -> bool { auto cs_arg0 = pls::cs::String(std::u16string(u"\x007a" u"\x0068" u"\x002d" u"\x0043" u"\x004e" u"",5)); auto cs_arg1 = v_languageCode_148979; return pls::game::cs_string_equals(cs_arg0,cs_arg1); }())) {
return true;
}
return false;
}
}
// M:main.AppData.IsLanguageOther
bool cs_47a03074c3af42f5() { cs_init_2ffa6f51468590ea();
{
return ((([&]() -> bool { auto cs_left = ([&]() -> pls::cs::String { return cs_154f0344cd538956(); }()); auto cs_right = pls::cs::String(std::u16string(u"\x006a" u"\x0061" u"\x002d" u"\x004a" u"\x0050" u"",5)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> pls::cs::String { return cs_154f0344cd538956(); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0065" u"\x006e" u"\x002d" u"\x0055" u"\x0053" u"",5)); return (cs_left != cs_right); }())) && (!(([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { return cs_154f0344cd538956(); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x002a" u"",1)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }()))));
}
}
// M:main.AppData.IsPushSoftLabel(System.Int32,System.Int32)
bool cs_85342f8bdc3d31a8(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_softlabel,std::int32_t v_key) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::String v_softLabelL_46958 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSoftLabelL(); }());
pls::cs::String v_softLabelR_47006 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSoftLabelR(); }());
if ((((([&]() -> bool { auto cs_arg0 = v_softLabelL_46958; auto cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_softlabel; return cs_array.get_Item(cs_index); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x200000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }()))) || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); std::int32_t cs_arg0 = v_key; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }()))) {
return true;
}
if ((((([&]() -> bool { auto cs_arg0 = v_softLabelR_47006; auto cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_softlabel; return cs_array.get_Item(cs_index); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }()))) || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); std::int32_t cs_arg0 = v_key; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }()))) {
return true;
}
return false;
}
}
}
// M:main.AppData.IsPushSoftLabel(System.Int32)
bool cs_c7994eb9bfc0f823(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_softlabel) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = v_softlabel; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_85342f8bdc3d31a8(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:main.AppData.IsPushStateSoftLabel(System.Int32)
bool cs_165d33155d381848(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_softlabel) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::String v_softLabelL_46560 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSoftLabelL(); }());
pls::cs::String v_softLabelR_46608 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSoftLabelR(); }());
if ((([&]() -> bool { auto cs_arg0 = v_softLabelL_46560; auto cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_softlabel; return cs_array.get_Item(cs_index); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x200000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyState(cs_arg0); }()))) {
return true;
}
if ((([&]() -> bool { auto cs_arg0 = v_softLabelR_46608; auto cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_softlabel; return cs_array.get_Item(cs_index); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyState(cs_arg0); }()))) {
return true;
}
return false;
}
}
}
// M:main.AppData.IsSC_LangCode
bool cs_3fb5098d629f7985() { cs_init_2ffa6f51468590ea();
{
pls::cs::String v_languageCode_150363 = ([&]() -> pls::cs::String { return cs_154f0344cd538956(); }());
if ((([&]() { auto cs_left = pls::cs::box(v_languageCode_150363); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_arg0 = v_languageCode_150363; auto cs_arg1 = pls::cs::String(std::u16string(u"\x007a" u"\x0068" u"\x002d" u"\x0043" u"\x004e" u"",5)); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()))) {
return true;
}
return false;
}
}
// M:main.AppData.IsTopForm(kairo.unity.form.FormBase)
bool cs_c080baf09a2b7f6e(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::FormBase> v_formBase) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_67729 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
return ([&]() { auto cs_left = pls::cs::box(v_formBase); auto cs_right = pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_67729); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }())); return cs_left == cs_right; }());
}
}
}
// M:main.AppData.LoadGame(System.Int32,System.Boolean)
void cs_6ee8fd9abc46e04f(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_slot,bool v_auto) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::kairo::RecordStore> v_recordStore_57403 = pls::cs::Ref<pls::kairo::RecordStore>{};
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_57447 = pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{};
([&]() { auto cs_value = v_slot; cs_6b2df6a76278cb1c() = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = v_slot;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }()); v_recordStore_57403 = cs_value; return cs_value; }());
std::int32_t v_num_57619 = std::int32_t{};
pls::cs::Array<std::uint8_t> v_data_57631 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::kairo::RecordStore::ReadRecord(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e> { pls::cs::Array<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>> cs_arg0 = cs_4cfb7d4f52307756(); pls::cs::Array<std::int32_t> cs_arg1 = cs_b3c4355d79ad4a53(); pls::cs::Array<std::int64_t> cs_arg2 = cs_24baaac10d948736(); pls::cs::Array<pls::cs::String> cs_arg3 = cs_37df3dc1c8f8fe67(); pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_arg4 = cs_237ef7bad1a6bbb9(); return pls::generated::cs_e34104df98d3719c(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); pls::game::cs_require(cs_target)->cs_9e66073c32cd8559 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); pls::cs::Array<std::uint8_t> cs_arg0 = v_data_57631; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_abffc02b85346a7d(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }())).length()); pls::game::cs_require(cs_target)->cs_5d8524a356e38017 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d8524a356e38017; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }()); pls::game::cs_require(cs_target)->cs_d7f9e0682751f782 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); v_num_57619 = cs_value; return cs_value; }());
for (std::int32_t v_i_58107 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_58107; auto cs_right = v_num_57619; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_58107; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_58107 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_456d3d004decc356> v_delayEvent_58150 = ([&]() -> pls::cs::Ref<cs_456d3d004decc356> { return cs_42bd1e40ac82632c(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_456d3d004decc356>>(v_delayEvent_58150); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9415d955c0e9b9aa(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7f9e0682751f782; }())); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_delayEvent_58150); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_j_58395 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_58395; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab1e9b1101610757; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_58395; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_58395 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8f8054b388e3f93e>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab1e9b1101610757; }()); auto cs_index = v_j_58395; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d2e2959006f65842(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_k_58603 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_58603; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_58603; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_58603 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3e5b0d35ae6be8e7>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }()); auto cs_index = v_k_58603; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_20e7e655ba517213(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_l_58813 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_58813; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_58813; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_58813 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd3043ac164d021f>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }()); auto cs_index = v_l_58813; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5b72ece6ea740ac2(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_m_59033 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_59033; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_59033; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_59033 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5beb6285da308d06>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }()); auto cs_index = v_m_59033; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_236fc3772d53f167(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_n_59257 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_n_59257; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c7e3a6362e30637; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_59257; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_59257 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d22b1a8b100a0cab>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c7e3a6362e30637; }()); auto cs_index = v_n_59257; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_efc96767f554942e(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_num2_59477 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num2_59477; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38b063657ea0f85; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num2_59477; auto cs_new = pls::cs::add_i32(cs_old,1); v_num2_59477 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6803fd77f880b974>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38b063657ea0f85; }()); auto cs_index = v_num2_59477; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_262b508bafb7c194(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_num3_59707 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num3_59707; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num3_59707; auto cs_new = pls::cs::add_i32(cs_old,1); v_num3_59707 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_169021fb033627ed>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }()); auto cs_index = v_num3_59707; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8758aeee74c0e7c3(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_num4_59927 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num4_59927; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b71369152562ebeb; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num4_59927; auto cs_new = pls::cs::add_i32(cs_old,1); v_num4_59927 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_76884ad002dceb7a>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b71369152562ebeb; }()); auto cs_index = v_num4_59927; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_079be3700b1911c3(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_num5_60157 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num5_60157; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86eaf5d444f8e536; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num5_60157; auto cs_new = pls::cs::add_i32(cs_old,1); v_num5_60157 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ec7bde62b3c2b35f>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86eaf5d444f8e536; }()); auto cs_index = v_num5_60157; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0a0cbd073dc391ab(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_num6_60387 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num6_60387; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39dbfa9f37472c19; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num6_60387; auto cs_new = pls::cs::add_i32(cs_old,1); v_num6_60387 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_69a97d2bf5ede86d>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39dbfa9f37472c19; }()); auto cs_index = v_num6_60387; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_51cc9c24bc647fec(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_num7_60614 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num7_60614; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num7_60614; auto cs_new = pls::cs::add_i32(cs_old,1); v_num7_60614 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ba9af87bc2bff5b4>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }()); auto cs_index = v_num7_60614; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b3e612b2e80fb56f(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_num8_60843 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num8_60843; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num8_60843; auto cs_new = pls::cs::add_i32(cs_old,1); v_num8_60843 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4489b86073532f79>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }()); auto cs_index = v_num8_60843; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_509e7280c21e82b2(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_num9_61078 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num9_61078; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num9_61078; auto cs_new = pls::cs::add_i32(cs_old,1); v_num9_61078 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b68aa9c3dd5cf14c>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }()); auto cs_index = v_num9_61078; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e044e6df16b473c1(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ca6f5bbc06a496a9>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9a33424672d806b2; }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c69aa38442d17582(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f047ca6e22a5e6(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
for (std::int32_t v_num10_61606 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num10_61606; auto cs_right = (([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_adb25bcb8b2e59bb; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num10_61606; auto cs_new = pls::cs::add_i32(cs_old,1); v_num10_61606 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_a9f43a9b869eaae8>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_adb25bcb8b2e59bb; }()); auto cs_index = v_num10_61606; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57447; std::int32_t cs_arg1 = v_num10_61606; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dd3cfe0dec17e612(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_918d48bdf0e5b4c2(cs_receiver); }());
for (std::int32_t v_num11_61811 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num11_61811; auto cs_right = (([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_adb25bcb8b2e59bb; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num11_61811; auto cs_new = pls::cs::add_i32(cs_old,1); v_num11_61811 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_a9f43a9b869eaae8>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_adb25bcb8b2e59bb; }()); auto cs_index = v_num11_61811; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8790a2fb33468687(cs_receiver); }());
}
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_byteArrayInputStream_57447); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_57447); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{}; v_byteArrayInputStream_57447 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_recordStore_57403); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_57403); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::kairo::RecordStore>{}; v_recordStore_57403 = cs_value; return cs_value; }());
});
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_7c0f60cfdd8cf265>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bfeb1e42ccfb2f05; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7c43f473090ad04a(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); bool cs_arg0 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bc7b8b04f006df42(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d0b7ac4933bed3ac>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ea5db026197fd848; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_29383d2c05591321(cs_receiver); }());
}
}
}
// M:main.AppData.LoadGame(System.Int32)
void cs_4cedb97ede57494d(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_slot) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = v_slot; bool cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6ee8fd9abc46e04f(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:main.AppData.LoadSystem
bool cs_934436cd92ceb4da(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{try{
pls::cs::Ref<pls::kairo::RecordStore> v_recordStore_48914 = pls::cs::Ref<pls::kairo::RecordStore>{};
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }()); v_recordStore_48914 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_48914); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetNumRecords(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
throw pls::cs::ReturnFlow<bool>{false};
}
pls::cs::Array<std::uint8_t> v_data_49080 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::ReadRecord(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_11c8e1bd6951af89(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }())); pls::cs::Array<std::uint8_t> cs_arg0 = v_data_49080; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_abffc02b85346a7d(cs_receiver,cs_arg0); }());
}}, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_recordStore_48914); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_48914); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::kairo::RecordStore>{}; v_recordStore_48914 = cs_value; return cs_value; }());
});
if (pls::generated::cs_d6caa754a735f006()) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
throw pls::cs::ReturnFlow<bool>{true};
}catch(const pls::cs::ReturnFlow<bool>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<bool>();}
}
}
// M:main.AppData.MakeQuery(System.String,System.String)
pls::cs::String cs_ecb814bcd5ee800e(pls::cs::String v_query,pls::cs::String v_param) { cs_init_2ffa6f51468590ea();
{
if (([&]() { auto cs_left = pls::cs::box(v_param); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::String(u"");
}
return ([&]() { auto cs_left = v_query; auto cs_right = v_param; return pls::cs::String::concat(cs_left,cs_right); }());
}
}
// M:main.AppData.Max(System.Int32,System.Int32)
std::int32_t cs_4cd2b388eb7a0694(std::int32_t v_v1,std::int32_t v_v2) { cs_init_2ffa6f51468590ea();
{
if (([&]() -> bool { auto cs_left = v_v1; auto cs_right = v_v2; return (cs_left < cs_right); }())) {
return v_v2;
}
return v_v1;
}
}
// M:main.AppData.Min(System.Int32,System.Int32)
std::int32_t cs_f18b55fda99863b9(std::int32_t v_v1,std::int32_t v_v2) { cs_init_2ffa6f51468590ea();
{
if (([&]() -> bool { auto cs_left = v_v1; auto cs_right = v_v2; return (cs_left < cs_right); }())) {
return v_v1;
}
return v_v2;
}
}
// M:main.AppData.NewGame(System.Int32,System.String)
void cs_b708460eea6c6df0(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_slot,pls::cs::String v_name) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = v_slot; cs_6b2df6a76278cb1c() = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = v_slot;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e> { pls::cs::Array<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>> cs_arg0 = cs_4cfb7d4f52307756(); pls::cs::Array<std::int32_t> cs_arg1 = cs_b3c4355d79ad4a53(); pls::cs::Array<std::int64_t> cs_arg2 = cs_24baaac10d948736(); pls::cs::Array<pls::cs::String> cs_arg3 = cs_37df3dc1c8f8fe67(); pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_arg4 = cs_237ef7bad1a6bbb9(); return pls::generated::cs_e34104df98d3719c(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); pls::game::cs_require(cs_target)->cs_9e66073c32cd8559 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_name;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x90ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2a30ull)); bool cs_arg5 = true; return cs_c2e72dbaa2066493(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }())).length()); pls::game::cs_require(cs_target)->cs_5d8524a356e38017 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }()); pls::game::cs_require(cs_target)->cs_d7f9e0682751f782 = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::IApplication> v_currentApp_50293 = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());
if (((([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_50293); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScaleRatio(cs_arg0); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return std::fmod(cs_left,cs_right); }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_50293); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1e0ull)); return (cs_left > cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_50293); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1e0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bc7b8b04f006df42(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); bool cs_arg0 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bc7b8b04f006df42(cs_receiver,cs_arg0); }());
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
} catch(const pls::cs::Exception& cs_caught_733) {auto cs_exception_733=pls::cs::capture_exception(cs_caught_733);
if(pls::cs::exception_is(cs_exception_733,"System.Exception")) {auto v_t_50627=cs_exception_733;{
([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_50627; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
}}
else {throw;} }
}
}
}
// M:main.AppData.PlayBgm(System.Int32)
void cs_1ca8cad04edda95c(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_bgm) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3c515a641b6b6cb5; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0061" u"\x0070" u"",2)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }())) {
return;
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_528d7332c1044dd7; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_bgm; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetState(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
return;
}
for (std::int32_t v_i_90958 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_90958; auto cs_right = (cs_f0160227dfac6551()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_90958; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_90958 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_528d7332c1044dd7; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = ([&]() { auto cs_array = cs_f0160227dfac6551(); auto cs_index = v_i_90958; return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetState(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_528d7332c1044dd7; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = ([&]() { auto cs_array = cs_f0160227dfac6551(); auto cs_index = v_i_90958; return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Stop(); }());
}
}
pls::cs::Ref<pls::kairo::SoundPlayer> v_instance_91109 = ([&]() -> pls::cs::Ref<pls::kairo::SoundPlayer> { return pls::kairo::SoundPlayer::GetInstance(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(v_instance_91109); pls::cs::Ref<pls::kairo::SoundBase> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_528d7332c1044dd7; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_bgm; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Play(cs_arg0); }());
}
}
}
// M:main.AppData.PlayJingle(System.Int32)
void cs_fac1396bd1214784(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_jingle) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::kairo::SoundBase> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_528d7332c1044dd7; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_jingle; return cs_array.get_Item(cs_index); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); cs_c664e46032693c99(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = v_jingle; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a3dc092674ab6de6(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.PlaySe(System.Int32)
void cs_a3dc092674ab6de6(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_se) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3c515a641b6b6cb5; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0061" u"\x0070" u"",2)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }())) {
return;
}
{
pls::cs::Ref<pls::kairo::SoundPlayer> v_instance_91300 = ([&]() -> pls::cs::Ref<pls::kairo::SoundPlayer> { return pls::kairo::SoundPlayer::GetInstance(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(v_instance_91300); pls::cs::Ref<pls::kairo::SoundBase> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_528d7332c1044dd7; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_se; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Play(cs_arg0); }());
}
}
}
}
// M:main.AppData.Print(System.String)
void cs_9b142b0c3e92ca63(pls::cs::String v_str) { cs_init_2ffa6f51468590ea();
{
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x25a0" u"",1)); auto cs_right = v_str; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
}
}
// M:main.AppData.Push(kairo.unity.form.FormBase)
bool cs_68fcb18265769d80(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::FormBase> v_form) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_83091 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_83091); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_83091); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetCurrentForm(); }()); pls::cs::Ref<pls::kairo::FormBase> cs_arg1 = v_form; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0,cs_arg1); }());
}
}
}
// M:main.AppData.Random(System.Int32)
std::int32_t cs_15f77c54ef987b54(std::int32_t v_total) { cs_init_2ffa6f51468590ea();
{
return ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_total; return cs_fd17a5b5e4e50b65(cs_arg0); }());
}
}
// M:main.AppData.RemoveAllMenuForms
bool cs_fc39345b3033cf90(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_93940 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
std::int32_t v_formsNum_93985 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_93940); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }());
for (std::int32_t v_num_94032 = ([&]() -> std::int32_t { auto cs_left = v_formsNum_93985; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_94032; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_94032; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_94032 = cs_new; return cs_old; }())) {
pls::cs::Ref<pls::kairo::FormBase> v_form_94087 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_93940); std::int32_t cs_arg0 = v_num_94032; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_form_94087); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left != cs_right); }())) {
continue;
}
pls::cs::Ref<cs_a2cea92715051fa5> v_subForm_94166 = pls::cs::unbox<pls::cs::Ref<cs_a2cea92715051fa5>>(pls::cs::box(v_form_94087));
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_a2cea92715051fa5>>(v_subForm_94166); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4214a8e7a6aa2068(cs_receiver); }())) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_93940); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_subForm_94166; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(cs_arg0); }());
}
}
return true;
}
}
}
// M:main.AppData.RemoveeEffect
void cs_1ef08a4806059060(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_90217 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_90217; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_90217; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_90217 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_num_90217; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
}
}
}
// M:main.AppData.RemovePopupMessages(System.Int32)
void cs_c86a21cd0da793c3(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_id) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_132962 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_132962; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_132962; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_132962 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_array_133030 = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); std::int32_t cs_arg0 = v_num_132962; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = (pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() { auto cs_array = v_array_133030; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()))); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); std::int32_t cs_arg0 = v_num_132962; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
}
}
}
}
// M:main.AppData.ResourceReDownload
void cs_04cd481033911765(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:main.AppData.RotatePoint(System.Int32,System.Int32,System.Int32)
pls::cs::Array<std::int32_t> cs_976ef96162c4c2b4(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_x,std::int32_t v_y,std::int32_t v_dir) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_left = v_dir; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_x;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_y;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if ((([&]() -> bool { auto cs_left = v_dir; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::neg_i32(v_y);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_x;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if ((([&]() -> bool { auto cs_left = v_dir; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::neg_i32(v_x);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::neg_i32(v_y);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_y;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::neg_i32(v_x);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }());
}
}
}
// M:main.AppData.SaveGame
void cs_9abd6db92a325acc(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1a8f5c64147b3e5b(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.SaveGame(System.Boolean)
void cs_1a8f5c64147b3e5b(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,bool v_auto) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::RecordStore> v_recordStore_50798 = pls::cs::Ref<pls::kairo::RecordStore>{};
pls::cs::Ref<pls::generated::cs_fb60578b3098a284> v_byteArrayOutputStream_50843 = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{};
if ((pls::generated::cs_4cc76a7a43706693() && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()))) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x25a0" u"\x0041" u"\x0070" u"\x0070" u"\x0044" u"\x0061" u"\x0074" u"\x0061" u"\x002e" u"\x006a" u"\x0061" u"\x0076" u"\x0061" u"\x0020" u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x0047" u"\x0061" u"\x006d" u"\x0065" u"\x0028" u"\x0029" u"\x0020" u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x005f" u"\x0020" u"\x003d" u"\x003d" u"\x0020" u"\x006e" u"\x0075" u"\x006c" u"\x006c" u"",38)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d8524a356e38017; }()); pls::game::cs_require(cs_target)->cs_72da38f2b646e254 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7f9e0682751f782; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_51226 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_51226; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7f9e0682751f782; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_51226; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_51226 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
pls::cs::Ref<cs_456d3d004decc356> v_delayEvent_51305 = pls::cs::unbox<pls::cs::Ref<cs_456d3d004decc356>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7f9e0682751f782; }())); std::int32_t cs_arg0 = v_i_51226; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_456d3d004decc356>>(v_delayEvent_51305); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4178ca56a2eb6f02(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_j_51615 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_51615; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab1e9b1101610757; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_51615; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_51615 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8f8054b388e3f93e>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab1e9b1101610757; }()); auto cs_index = v_j_51615; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_269ea8f6a92d2b89(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_k_51888 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_51888; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_51888; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_51888 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3e5b0d35ae6be8e7>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }()); auto cs_index = v_k_51888; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4503351df0f1771f(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_l_52163 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_52163; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_52163; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_52163 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd3043ac164d021f>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }()); auto cs_index = v_l_52163; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1613937bf1e1ad15(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_m_52448 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_52448; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_52448; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_52448 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5beb6285da308d06>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }()); auto cs_index = v_m_52448; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_746513213ef872e5(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_n_52737 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_n_52737; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c7e3a6362e30637; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_52737; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_52737 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d22b1a8b100a0cab>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c7e3a6362e30637; }()); auto cs_index = v_n_52737; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_65e6e8cf5fc4699e(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num_53022 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num_53022; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38b063657ea0f85; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num_53022; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_53022 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6803fd77f880b974>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38b063657ea0f85; }()); auto cs_index = v_num_53022; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d5cb91a571e7b87c(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num2_53314 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num2_53314; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num2_53314; auto cs_new = pls::cs::add_i32(cs_old,1); v_num2_53314 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_169021fb033627ed>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }()); auto cs_index = v_num2_53314; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dbc8b1e682acfdab(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num3_53600 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num3_53600; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b71369152562ebeb; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num3_53600; auto cs_new = pls::cs::add_i32(cs_old,1); v_num3_53600 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_76884ad002dceb7a>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b71369152562ebeb; }()); auto cs_index = v_num3_53600; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_29c7e6234270da65(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num4_53896 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num4_53896; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86eaf5d444f8e536; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num4_53896; auto cs_new = pls::cs::add_i32(cs_old,1); v_num4_53896 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ec7bde62b3c2b35f>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86eaf5d444f8e536; }()); auto cs_index = v_num4_53896; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bb060af473fce27c(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num5_54192 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num5_54192; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39dbfa9f37472c19; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num5_54192; auto cs_new = pls::cs::add_i32(cs_old,1); v_num5_54192 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_69a97d2bf5ede86d>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39dbfa9f37472c19; }()); auto cs_index = v_num5_54192; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c3c802ec2eaa524b(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num6_54484 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num6_54484; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num6_54484; auto cs_new = pls::cs::add_i32(cs_old,1); v_num6_54484 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ba9af87bc2bff5b4>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }()); auto cs_index = v_num6_54484; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_feaa7acb9d6c4e25(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num7_54779 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num7_54779; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num7_54779; auto cs_new = pls::cs::add_i32(cs_old,1); v_num7_54779 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4489b86073532f79>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }()); auto cs_index = v_num7_54779; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4feb02c73e4cf20f(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num8_55080 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num8_55080; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num8_55080; auto cs_new = pls::cs::add_i32(cs_old,1); v_num8_55080 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4489b86073532f79>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }()); auto cs_index = v_num8_55080; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4feb02c73e4cf20f(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num9_55381 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num9_55381; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num9_55381; auto cs_new = pls::cs::add_i32(cs_old,1); v_num9_55381 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b68aa9c3dd5cf14c>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }()); auto cs_index = v_num9_55381; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d5cc43a853b66354(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ca6f5bbc06a496a9>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9a33424672d806b2; }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bc6918d3999db00d(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x13ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_50dfaae2579fc0e5(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num10_56107 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num10_56107; auto cs_right = (([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_adb25bcb8b2e59bb; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num10_56107; auto cs_new = pls::cs::add_i32(cs_old,1); v_num10_56107 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_a9f43a9b869eaae8>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_adb25bcb8b2e59bb; }()); auto cs_index = v_num10_56107; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3a0f6398a75c8024(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x15ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }()); v_recordStore_50798 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_50798); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_944778f16504220d(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->WriteRecord(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1full)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> pls::cs::String { std::int64_t cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_45bf8972ccfd60d6(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
if (pls::generated::cs_4cc76a7a43706693()) {
std::int32_t v_num11_56876 = (([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_944778f16504220d(cs_receiver); }())).length();
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x003a" u"",5)); auto cs_right = pls::game::cs_integer_string(v_num11_56876); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0062" u"\x0079" u"\x0074" u"\x0065" u"\x0020" u"\x0028" u"",6)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = v_num11_56876; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return pls::cs::div_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002e" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num11_56876; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return pls::cs::div_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x006b" u"\x0062" u"\x0029" u"",3)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_byteArrayOutputStream_50843); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{}; v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_recordStore_50798); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_50798); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::kairo::RecordStore>{}; v_recordStore_50798 = cs_value; return cs_value; }());
});
}
}
}
// M:main.AppData.SaveSystem
void cs_38f421ed8909306b(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::kairo::RecordStore> v_recordStore_49422 = pls::cs::Ref<pls::kairo::RecordStore>{};
pls::cs::run_finally([&]() -> void { try {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }()); v_recordStore_49422 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_49422); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_944778f16504220d(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->WriteRecord(cs_arg0,cs_arg1); }());
if ((pls::generated::cs_01d5980f91155b3c() && pls::generated::cs_4cc76a7a43706693())) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x25a0" u"\x0041" u"\x0070" u"\x0070" u"\x0044" u"\x0061" u"\x0074" u"\x0061" u"\x002e" u"\x006a" u"\x0061" u"\x0076" u"\x0061" u"\x0020" u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x0053" u"\x0079" u"\x0073" u"\x0074" u"\x0065" u"\x006d" u"\x0028" u"\x0029" u"\x0020" u"\x0073" u"\x0079" u"\x0073" u"\x0053" u"\x0061" u"\x0076" u"\x0065" u"\x005f" u"\x002e" u"\x0074" u"\x006f" u"\x0042" u"\x0079" u"\x0074" u"\x0065" u"\x0041" u"\x0072" u"\x0072" u"\x0061" u"\x0079" u"\x0028" u"\x0029" u"\x002e" u"\x006c" u"\x0065" u"\x006e" u"\x0067" u"\x0074" u"\x0068" u"\x0020" u"\x003d" u"\x0020" u"",59)); auto cs_right = pls::game::cs_integer_string((([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_944778f16504220d(cs_receiver); }())).length()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
} catch(const pls::cs::Exception& cs_caught_351) {auto cs_exception_351=pls::cs::capture_exception(cs_caught_351);
if(pls::cs::exception_is(cs_exception_351,"System.Exception")) {auto v_t_49738=cs_exception_351;{
([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_49738; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
}}
else {throw;} } }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_recordStore_49422); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_49422); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::kairo::RecordStore>{}; v_recordStore_49422 = cs_value; return cs_value; }());
});
}
}
}
// M:main.AppData.SbyteArrayToBoolean(System.Byte[],System.Int32)
pls::cs::Array<bool> cs_6adeca0fd238e2d4(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::uint8_t> v_src,std::int32_t v_size) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_97056 = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = v_src; return pls::generated::cs_c3a84083a67ee263(cs_arg0); }());
std::int32_t v_num_97117 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_97056; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_size; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_num_97117; v_size = cs_value; return cs_value; }());
}
pls::cs::Array<bool> v_array_97220 = pls::cs::Array<bool>::make(v_size);
for (std::int32_t v_i_97256 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); (([&]() -> bool { auto cs_left = v_i_97256; auto cs_right = v_num_97117; return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = v_i_97256; auto cs_right = (v_array_97220).length(); return (cs_left < cs_right); }())); ([&]() { auto cs_old = v_i_97256; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_97256 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_97220; auto cs_index = v_i_97256; auto cs_value = ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_97056; return pls::generated::cs_1207de83c3a46662(cs_arg0); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_97056); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
return v_array_97220;
}
}
}
// M:main.AppData.SbyteArrayToBoolean(System.Byte[])
pls::cs::Array<bool> cs_1ac265addce78873(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::uint8_t> v_src) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<bool> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Array<std::uint8_t> cs_arg0 = v_src; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6adeca0fd238e2d4(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:main.AppData.SbyteArrayToInt(System.Byte[],System.Int32)
pls::cs::Array<std::int32_t> cs_83519dceef52cfef(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::uint8_t> v_src,std::int32_t v_size) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_98000 = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = v_src; return pls::generated::cs_c3a84083a67ee263(cs_arg0); }());
std::int32_t v_num_98061 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_98000; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_size; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_num_98061; v_size = cs_value; return cs_value; }());
}
pls::cs::Array<std::int32_t> v_array_98163 = pls::cs::Array<std::int32_t>::make(v_size);
for (std::int32_t v_i_98198 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); (([&]() -> bool { auto cs_left = v_i_98198; auto cs_right = v_num_98061; return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = v_i_98198; auto cs_right = (v_array_98163).length(); return (cs_left < cs_right); }())); ([&]() { auto cs_old = v_i_98198; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_98198 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_98163; auto cs_index = v_i_98198; auto cs_value = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_98000; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_98000); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
return v_array_98163;
}
}
}
// M:main.AppData.SbyteArrayToInt(System.Byte[])
pls::cs::Array<std::int32_t> cs_9860ae9d692b87ac(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::uint8_t> v_src) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Array<std::uint8_t> cs_arg0 = v_src; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_83519dceef52cfef(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:main.AppData.SearchInteger(System.Int32[],System.Int32)
std::int32_t cs_7f2d55b45a07fbae(pls::cs::Array<std::int32_t> v_array,std::int32_t v_key) { cs_init_2ffa6f51468590ea();
{
if (([&]() { auto cs_left = pls::cs::box(v_array); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
for (std::int32_t v_i_103770 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_103770; auto cs_right = (v_array).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_103770; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_103770 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array; auto cs_index = v_i_103770; return cs_array.get_Item(cs_index); }()); auto cs_right = v_key; return (cs_left == cs_right); }())) {
return v_i_103770;
}
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
}
// M:main.AppData.SerializeScripts(java.io.OutputStream,java.util.Vector)
void cs_124c31e48b3fe662(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os,pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_scripts) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_scripts); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_111194 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_111194; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_scripts); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_111194; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_111194 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_111241 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_scripts); std::int32_t cs_arg0 = v_i_111194; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = (v_array_111241).length(); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_j_111334 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_111334; auto cs_right = (v_array_111241).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_111334; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_111334 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_array = v_array_111241; auto cs_index = v_j_111334; return cs_array.get_Item(cs_index); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
}
}
}
}
}
// M:main.AppData.SetHighScore(System.Int64)
void cs_34a842e07132dc32(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int64_t v_score) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_score;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
// M:main.AppData.SetMoneyHighScore(System.Int64)
void cs_e1e9cde920cf8975(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int64_t v_score) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_score;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
// M:main.AppData.SetNetHighScore(System.Int64)
void cs_c158f59342f4a464(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int64_t v_score) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_score;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
// M:main.AppData.SetNowStoreIndex(System.Int32)
void cs_f49bdf3aeb4aa05c(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_nowStore_index) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_nowStore_index; pls::game::cs_require(cs_target)->cs_dcdb2fb19217cbe2 = cs_value; return cs_value; }());
}
}
}
// M:main.AppData.SettMoneyNetHighScore(System.Int64)
void cs_3cef599a40dc9684(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int64_t v_score) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = v_score;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
// M:main.AppData.ShowNews(System.Int32,System.String)
bool cs_6a1de08d8ad96966(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_id,pls::cs::String v_arg) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_91737 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_91737); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { std::int32_t cs_arg0 = v_id; pls::cs::String cs_arg1 = v_arg; return cs_6ab4e0e4e2fbf409(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_91737); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x958b" u"\x5e55" u"\xff77" u"\xff6f" u"\xff78" u"\xff75" u"\xff8c" u"\x901a" u"\x4fe1" u"\x000a" u"\x304c" u"\x767a" u"\x884c" u"\x3055" u"\x308c" u"\x307e" u"\x3057" u"\x305f" u"",18)); return cs_c99c9d4e5fd84a90(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
}
}
}
// M:main.AppData.Sort(System.Int32[])
void cs_6dfeb96a20cdf0ae(pls::cs::Array<std::int32_t> v_list) { cs_init_2ffa6f51468590ea();
{
for (std::int32_t v_i_105566 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_105566; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_list).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_105566; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_105566 = cs_new; return cs_old; }())) {
for (std::int32_t v_num_105617 = ([&]() -> std::int32_t { auto cs_left = (v_list).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_105617; auto cs_right = v_i_105566; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num_105617; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_105617 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_list; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_105617; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_list; auto cs_index = v_num_105617; return cs_array.get_Item(cs_index); }()); return (cs_left > cs_right); }())) {
std::int32_t v_num2_105715 = ([&]() { auto cs_array = v_list; auto cs_index = v_num_105617; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = v_list; auto cs_index = v_num_105617; auto cs_value = ([&]() { auto cs_array = v_list; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_105617; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_list; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_105617; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_num2_105715;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}
// M:main.AppData.SubMoney(System.Int32,System.Int32)
std::int64_t cs_58ba802eb16824af(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_sub,std::int32_t v_recordId) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int64_t { std::int64_t cs_arg0 = ([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(v_sub); return pls::cs::sub_i64(cs_left,cs_right); }()); std::int64_t cs_arg1 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x8000000000000000ull)); std::int64_t cs_arg2 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x7fffffffffffffffull)); return cs_8416d639bc6d5b2c(cs_arg0,cs_arg1,cs_arg2); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = v_recordId; std::int32_t cs_arg1 = v_sub; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0b17210336b6701f(cs_receiver,cs_arg0,cs_arg1); }());
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
}
}
}
// M:main.AppData.UpdateEffect
void cs_13c75e0d29dc4795(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_89076 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_89076; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_89076; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_89076 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_89123 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = cs_64a0d3e3b430c818(); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = cs_101b5df8388c37cc(); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_728aa1cb5546b430(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = cs_dadcf852be098f4e(); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_2cfd34acbad021cb(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_8838d68b05fe9d2a(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_055caef899588fb7(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
}
}
}
}
}
// M:main.AppData.UpdatePassiveScript
void cs_6166819f046decb1(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:main.AppData.UpdatePopupMessage
void cs_9454f5d1b6455783(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_136035 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_136035; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_136035; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_136035 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_array_136103 = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); std::int32_t cs_arg0 = v_num_136035; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
pls::cs::Array<std::int32_t> v_array2_136162 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() { auto cs_array = v_array_136103; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_136162; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_new; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
continue;
}
std::int32_t v_num2_136231 = ([&]() { auto cs_array = v_array2_136162; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = v_num2_136231; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a3dc092674ab6de6(cs_receiver,cs_arg0); }());
}
std::int32_t v_num3_136300 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull));
std::int32_t v_num4_136314 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num3_136300; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_array2_136162; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num2_136231; auto cs_right = v_num4_136314; return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); std::int32_t cs_arg0 = v_num_136035; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
}
}
}
}
// M:main.Main.#ctor
pls::cs::Ref<cs_bad15ea7469ee2b9> cs_7703d612ae2455fc() { cs_init_bad15ea7469ee2b9();
{ auto cs_this = pls::cs::make_ref<cs_bad15ea7469ee2b9>(); cs_7703d612ae2455fc_init(cs_this); return cs_this; }
}
void cs_7703d612ae2455fc_init(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) {
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(cs_this); pls::cs::Ref<pls::kairo::IApplication> cs_arg0 = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->source_Init(cs_arg0); }());
}
}
// M:main.Main.GetFormManager
pls::cs::Ref<pls::kairo::FormManagerBase> cs_a8d7ff329d533cce(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
}
}
}
// M:main.Main.GetInstance
pls::cs::Ref<cs_bad15ea7469ee2b9> cs_29da291d171721a6() { cs_init_bad15ea7469ee2b9();
{
return pls::cs::unbox<pls::cs::Ref<cs_bad15ea7469ee2b9>>(pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())));
}
}
// M:main.Main.GetJingle
pls::cs::Ref<pls::kairo::SoundBase> cs_ab00e9e29753ed8a() { cs_init_bad15ea7469ee2b9();
{
return cs_18a692dfac4d8961();
}
}
// M:main.Main.OnCreate
void cs_fe479bb5365005e6(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(std::static_pointer_cast<pls::kairo::IApplication>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->source_OnCreate(); }());
([&]() -> void { std::int32_t cs_arg0 = ([&]() -> std::int32_t { return pls::generated::cs_f2f74213ca1ea9bc(); }()); bool cs_arg1 = pls::generated::cs_4cc76a7a43706693(); pls::cs::String cs_arg2 = pls::generated::cs_1ce7e3797101a750(); pls::kairo::native_plugin_init(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x118ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetViewport(cs_arg0,cs_arg1); }());
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_637 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
pls::cs::Ref<pls::kairo::Canvas> v_instance2_696 = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_696); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetBackground(cs_arg0); }());
pls::cs::Ref<cs_6485f92c2f04639f> v_instance3_836 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_696); pls::cs::Ref<pls::kairo::IApplication> cs_arg0 = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetDisplayCurrent(cs_arg0); }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_836); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() { auto cs_receiver = v_instance_637; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_54080fc05a8a4a94; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->ChangeCurrentForm(cs_arg0); }());
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_979 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::run_finally([&]() -> void { try {
pls::cs::Array<pls::cs::String> v_array_1024 = pls::cs::Array<pls::cs::String>{};
pls::cs::Array<pls::cs::Array<pls::cs::String>> v_array2_1053 = pls::cs::Array<pls::cs::Array<pls::cs::String>>{};
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::kairo::RecordStore::ReadRecord(cs_arg0,cs_arg1); }()); return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }()); v_jarInflater_979 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_979; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"\x006b" u"\x0065" u"\x0079" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",11)); return pls::generated::cs_aa767d3dce39dc9d(cs_arg0,cs_arg1); }()); v_array_1024 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_array_1024); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::String>>::make((v_array_1024).length()); v_array2_1053 = cs_value; return cs_value; }());
for (std::int32_t v_i_1286 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1286; auto cs_right = (v_array2_1053).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1286; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1286 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_1053; auto cs_index = v_i_1286; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1024; auto cs_index = v_i_1286; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); bool cs_arg2 = false; bool cs_arg3 = false; bool cs_arg4 = false; return pls::generated::cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = v_array2_1053; cs_45076861cf1dc76f(cs_arg0); }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_979; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x0065" u"\x0078" u"\x0074" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",8)); return pls::generated::cs_aa767d3dce39dc9d(cs_arg0,cs_arg1); }()); v_array_1024 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_array_1024); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::String>>::make((v_array_1024).length()); v_array2_1053 = cs_value; return cs_value; }());
for (std::int32_t v_j_1601 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1601; auto cs_right = (v_array2_1053).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1601; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1601 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_1024; auto cs_index = v_j_1601; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1024; auto cs_index = v_j_1601; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x005c" u"\x006e" u"",2)); pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x000a" u"",1)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array2_1053; auto cs_index = v_j_1601; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1024; auto cs_index = v_j_1601; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); bool cs_arg2 = false; bool cs_arg3 = false; bool cs_arg4 = false; return pls::generated::cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = v_array2_1053; cs_4200a27cfd6b898d(cs_arg0); }());
}
} catch(const pls::cs::Exception& cs_caught_734) {auto cs_exception_734=pls::cs::capture_exception(cs_caught_734);
if(pls::cs::exception_is(cs_exception_734,"System.Exception")) {auto v_t_1835=cs_exception_734;{
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_1835; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
}
}}
else {throw;} } }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_jarInflater_979); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_979); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());
}
});
}
}
}
// M:main.Main.OnDestroy
void cs_436207ec3f57c2d7(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::kairo::request_host_finish(); }());
}
}
}
// M:main.Main.OnDraw
void cs_ac69d759d513a4d5(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
try {
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_4550 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_4550); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->OnDraw(); }());
} catch(const pls::cs::Exception& cs_caught_735) {auto cs_exception_735=pls::cs::capture_exception(cs_caught_735);
if(pls::cs::exception_is(cs_exception_735,"System.Exception")) {auto v_t_4625=cs_exception_735;{
([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_4625; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
}}
else {throw;} }
}
}
}
// M:main.Main.OnResume
void cs_fb26c3c912586adf(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:main.Main.OnSuspend
void cs_48b06d9d94c6401b(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { cs_ff6aeae8eb9c621a(); }());
}
}
}
// M:main.Main.OnUpdate
void cs_0b355334e1fce7ed(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_2056 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
pls::cs::Ref<pls::kairo::Canvas> v_instance2_2115 = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());
pls::cs::Ref<cs_6485f92c2f04639f> v_instance3_2179 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6485f92c2f04639f>>(v_instance3_2179); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dc9257b0bbd34fc9(cs_receiver,cs_arg0); }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Execute(); }());
if (((([&]() { auto cs_left = pls::cs::box(cs_18a692dfac4d8961()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(cs_18a692dfac4d8961()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetState(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(cs_18a692dfac4d8961()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetState(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())))) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_old = cs_18491103f721bd96(); auto cs_new = pls::cs::sub_i32(cs_old,1); cs_18491103f721bd96() = cs_new; return cs_old; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }()))) {
([&]() -> void { pls::cs::Ref<pls::kairo::SoundBase> cs_arg0 = pls::cs::Ref<pls::kairo::SoundBase>{}; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); cs_c664e46032693c99(cs_arg0,cs_arg1); }());
}
if (pls::generated::cs_534ddf5c958564fa()) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6485f92c2f04639f>>(v_instance3_2179); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dc9257b0bbd34fc9(cs_receiver,cs_arg0); }());
}
if ((pls::generated::cs_3020341c80294797() && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_2115); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyState(cs_arg0); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6485f92c2f04639f>>(v_instance3_2179); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x190ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dc9257b0bbd34fc9(cs_receiver,cs_arg0); }());
}
if ((pls::generated::cs_a0d04541596b7678() && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_2115); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyState(cs_arg0); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6485f92c2f04639f>>(v_instance3_2179); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dc9257b0bbd34fc9(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = cs_rhs; pls::kairo::QualitySettings::set_vSyncCount(cs_value); return cs_value; }());
([&]() { auto cs_rhs = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_6485f92c2f04639f>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_db89980015f74cec(cs_receiver); }()); auto cs_value = cs_rhs; pls::kairo::UnityApplication::set_targetFrameRate(cs_value); return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_736) {auto cs_exception_736=pls::cs::capture_exception(cs_caught_736);
if(std::dynamic_pointer_cast<cs_23a020152d468724>(cs_exception_736)) {auto v_ex_2818=std::dynamic_pointer_cast<cs_23a020152d468724>(cs_exception_736);{
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog_2858 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x78ba" u"\x8a8d" u"",2)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_2858); pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x8d77" u"\x52d5" u"\x3067" u"\x304d" u"\x307e" u"\x305b" u"\x3093" u"\x3002" u"",8)); pls::cs::String cs_arg1 = pls::cs::String(u""); return cs_334563e946ad4962(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = v_ex_2818; return cs_1b62bb3466e191a0(static_cast<pls::cs::Ref<cs_cd97eee87b3216c4>>(cs_receiver)); }()); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_2858); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RemoveAllForms(); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Terminate(); }());
}
}}
else if(pls::cs::exception_is(cs_exception_736,"System.Exception")) {auto v_ex2_3109=cs_exception_736;{
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_ex2_3109; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
}
bool v_flag_3193 = false;
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_instance_2056; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog2_3257 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\xff74" u"\xff97" u"\xff70" u"",3)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_3257); pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x30a8" u"\x30e9" u"\x30fc" u"\x304c" u"\x767a" u"\x751f" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"",11)); auto cs_right = (((pls::generated::cs_b0827224162a4f93()) ? ((([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x000a" u"",1)); auto cs_right = pls::game::cs_object_string(pls::cs::box(v_ex2_3109)); return pls::cs::String::concat(cs_left,cs_right); }()))) : (pls::cs::String(u"")))); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_3257); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_2115); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetKeypadState(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x800ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = true; v_flag_3193 = cs_value; return cs_value; }());
}
} else {
pls::cs::String v_text_3518 = pls::cs::String(u"");
for (std::int32_t v_i_3553 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3553; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3553; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3553 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::box(v_text_3518); auto cs_arg1 = pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); std::int32_t cs_arg0 = v_i_3553; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }())); auto cs_arg2 = pls::cs::box(pls::cs::String(std::u16string(u"\x000a" u"",1))); return pls::game::cs_concat_objects3(cs_arg0,cs_arg1,cs_arg2); }()); v_text_3518 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_2056; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = v_ex2_3109; return pls::game::cs_require(cs_receiver)->ToString(); }()); auto cs_right = pls::cs::String(std::u16string(u"\x003a" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text_3518; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_2056; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_2056; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_2056; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_2056; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::generated::cs_51d6c186b8b049a1(cs_arg0,cs_arg1); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(v_instance_2056); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
} catch(const pls::cs::Exception& cs_caught_737) {auto cs_exception_737=pls::cs::capture_exception(cs_caught_737);
if(pls::cs::exception_is(cs_exception_737,"System.Exception")) {{

}}
else {throw;} }
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog3_4020 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\xff74" u"\xff97" u"\xff70" u"",3)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog3_4020); pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x30a8" u"\x30e9" u"\x30fc" u"\x304c" u"\x767a" u"\x751f" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"",11)); auto cs_right = (((pls::generated::cs_b0827224162a4f93()) ? ((([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x000a" u"",1)); auto cs_right = pls::game::cs_object_string(pls::cs::box(v_ex2_3109)); return pls::cs::String::concat(cs_left,cs_right); }()))) : (pls::cs::String(u"")))); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog3_4020); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_2115); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetKeypadState(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x800ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = true; v_flag_3193 = cs_value; return cs_value; }());
}
}
if (v_flag_3193) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RemoveAllForms(); }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_7eb0a1119bc141dc> { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_ex2_3109; return cs_122d27bb8b75d40b(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
} else {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RemoveAllForms(); }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Terminate(); }());
}
}}
else {throw;} }
}
}
}
// M:main.Main.SetJingle(kairo.unity.ui.SoundBase,System.Int32)
void cs_c664e46032693c99(pls::cs::Ref<pls::kairo::SoundBase> v_sound,std::int32_t v_wait) { cs_init_bad15ea7469ee2b9();
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_4952 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
pls::cs::Ref<pls::kairo::SoundPlayer> v_instance2_5001 = ([&]() -> pls::cs::Ref<pls::kairo::SoundPlayer> { return pls::kairo::SoundPlayer::GetInstance(); }());
([&]() { auto cs_value = v_sound; cs_18a692dfac4d8961() = cs_value; return cs_value; }());
([&]() { auto cs_value = v_wait; cs_18491103f721bd96() = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(cs_18a692dfac4d8961()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(v_instance2_5001); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_4952; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x33ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetVolume(cs_arg0,cs_arg1); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(v_instance2_5001); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetVolume(cs_arg0,cs_arg1); }());
}
}
}
// M:panel.MainPanel.#ctor
pls::cs::Ref<cs_20db1845606f1f3b> cs_edc2000ae353f18e() { cs_init_20db1845606f1f3b();
{ auto cs_this = pls::cs::make_ref<cs_20db1845606f1f3b>(); cs_edc2000ae353f18e_init(cs_this); return cs_this; }
}
void cs_edc2000ae353f18e_init(pls::cs::Ref<cs_20db1845606f1f3b> cs_this) {
([&]() { cs_3afc5298ce4a3e84_init(std::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this)); }());
{

}
}
// M:panel.MainPanel.#ctor(System.String,System.String,System.Int32)
pls::cs::Ref<cs_20db1845606f1f3b> cs_8947b9476c4f17f7(pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength) { cs_init_20db1845606f1f3b();
{ auto cs_this = pls::cs::make_ref<cs_20db1845606f1f3b>(); cs_8947b9476c4f17f7_init(cs_this,v_label,v_defaultText,v_maxLength); return cs_this; }
}
void cs_8947b9476c4f17f7_init(pls::cs::Ref<cs_20db1845606f1f3b> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength) {
([&]() { pls::cs::String cs_arg0 = v_label; pls::cs::String cs_arg1 = v_defaultText; std::int32_t cs_arg2 = v_maxLength; std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::String cs_arg4 = pls::cs::String{}; cs_6b53a5cdc402f43c_init(std::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this),cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
{

}
}
// M:panel.MainPanel.#ctor(System.String,System.String)
pls::cs::Ref<cs_20db1845606f1f3b> cs_a669d4cd9c91bbb0(pls::cs::String v_label,pls::cs::String v_defaultText) { cs_init_20db1845606f1f3b();
{ auto cs_this = pls::cs::make_ref<cs_20db1845606f1f3b>(); cs_a669d4cd9c91bbb0_init(cs_this,v_label,v_defaultText); return cs_this; }
}
void cs_a669d4cd9c91bbb0_init(pls::cs::Ref<cs_20db1845606f1f3b> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText) {
([&]() { pls::cs::String cs_arg0 = v_label; pls::cs::String cs_arg1 = v_defaultText; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::String cs_arg4 = pls::cs::String{}; cs_6b53a5cdc402f43c_init(std::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this),cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
{

}
}
// M:PlsPortGeneratedBootstrap.Source.AdjustCreateArea(System.Int32)
void cs_a08cf6e8e956e572(std::int32_t v_delta) { cs_init_ed8eabc614ddcf9e();
{
([&]() { auto cs_old = cs_ae88aadf0313d525(); auto cs_rhs = v_delta; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); cs_ae88aadf0313d525() = cs_value; return cs_value; }());
}
}
// M:PlsPortGeneratedBootstrap.Source.CheckCount
std::int32_t cs_268e4c8a5c5e1aa9() { cs_init_ed8eabc614ddcf9e();
{
return cs_56b87a4889a075c1();
}
}
// M:PlsPortGeneratedBootstrap.Source.CloseJarCache
void cs_88dfc436b791ac1f() { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { cs_a5f9622df7c35c0c(); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.Collect
void cs_81322bc33105f5ac() { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_42d69496680e17fc>>(([&]() -> pls::cs::Ref<pls::generated::cs_42d69496680e17fc> { return pls::generated::cs_232fa563e68dcabb(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b8f5dfbc2bf26f5f(cs_receiver); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.CountEnabled
bool cs_9eef28fe38c56936() { cs_init_ed8eabc614ddcf9e();
{
return pls::generated::cs_7d035d79ab9d9082();
}
}
// M:PlsPortGeneratedBootstrap.Source.CreateConfig
void cs_e3fca2af61411098() { cs_init_ed8eabc614ddcf9e();
{
([&]() { auto cs_value = cs_bf1ac74b7c638067(); pls::generated::cs_b0827224162a4f93() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_5e6bd6b93ec86676(); pls::generated::cs_137686a1e7856340() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_89f7eb250e2141b9(); pls::generated::cs_7d035d79ab9d9082() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_3534afc4e1f18664(); pls::generated::cs_4cc76a7a43706693() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_2e0da33461dc09c9(); pls::generated::cs_e8e122e44197f378() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_afbbab26806e9431(); pls::generated::cs_0dc92919b1751224() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_b265e4c3bc796f66(); pls::generated::cs_98a039c4edacf2e2() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_851355584e1d8ae4(); pls::generated::cs_c85047b12129912e() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_b1c98a140c1251bd(); pls::generated::cs_c57b75ba2c108877() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_ba545d89ce55d6c2(); pls::generated::cs_89a30a814542a913() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_c1a0a612cd012a95(); pls::generated::cs_9ac7702677443627() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_0a0de18cce44e379(); pls::generated::cs_1ce7e3797101a750() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_3d4ffbeaa2cdf318(); pls::generated::cs_acfe0d20af2323a8() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_660241f7af9ec11f(); pls::generated::cs_f15c6a3105cad248() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_ae446073dbdb5d58(); pls::generated::cs_d058affcdd0b23a7() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_66cdbdd75ac1eff7(); pls::generated::cs_55b9773d40ef294f() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_cd31f9dcf1ba6d3b(); pls::generated::cs_19a8f436a39a237f() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_8a7ef2d0171a5e76(); pls::generated::cs_3420b9de46d631e2() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_8f32708756424e8c(); pls::generated::cs_641d09da1fd4cb6f() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_5a3c5ec73378d868(); pls::generated::cs_01d5980f91155b3c() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_c0e35a41bca952fb(); pls::generated::cs_49795a9b1ce2f0ca() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_3446c841631299d2(); pls::generated::cs_ec57416f7acf6303() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_a25d5841bad96750(); pls::generated::cs_383c676f92bb4305() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_c81f69daa2faf6a7(); pls::generated::cs_191c63b05b3afe39() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_76f285f900f0a1ce(); pls::generated::cs_efcdf5d0d7b2cdc2() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_369b0c33d1c6e37e(); pls::generated::cs_3403795577da603c() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_519a9ee3e60a5c6c(); pls::generated::cs_f43ec1743d6637fa() = cs_value; return cs_value; }());
}
}
// M:PlsPortGeneratedBootstrap.Source.DebugFlag
bool cs_7a0a1ee1a93eff71() { cs_init_ed8eabc614ddcf9e();
{
return pls::generated::cs_b0827224162a4f93();
}
}
// M:PlsPortGeneratedBootstrap.Source.DisableAds
void cs_1d5c3f31dd63adfb() { cs_init_ed8eabc614ddcf9e();
{
([&]() { auto cs_value = false; pls::generated::cs_641d09da1fd4cb6f() = cs_value; return cs_value; }());
}
}
// M:PlsPortGeneratedBootstrap.Source.DrawCounters
void cs_e3da4b7ee9f51788() { cs_init_ed8eabc614ddcf9e();
{
if (pls::generated::cs_7d035d79ab9d9082()) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_64c23caca1e41663() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_5c6d8357da0c0aaf() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_220e04776206e9cc() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_f970055179afa1e0() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_3b6b8ce3637f0d5a() = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = cs_56b87a4889a075c1(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return pls::cs::mod_i32(cs_left,cs_right); }()); cs_56b87a4889a075c1() = cs_value; return cs_value; }());
}
}
// M:PlsPortGeneratedBootstrap.Source.DrawGraphicsText(kairo.unity.ui.Graphics,kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32)
void cs_5d2f1075652c16f2(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<cs_dc09c88a279424b5> v_lf,pls::cs::String v_str,float v_x,float v_y,std::int32_t v_anchor) { cs_init_ed8eabc614ddcf9e();
{try{
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_str; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); v_str = cs_value; return cs_value; }());
if ((((([&]() -> bool { return pls::kairo::Graphics::PeekAutoTextLayout(); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_str; auto cs_arg1 = char16_t(60); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) || ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { return cs_734e0f1de4f940e6(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_str; auto cs_arg1 = char16_t(10); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))))) {
([&]() -> void { pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::Ref<pls::kairo::Graphics> cs_arg1 = v_g; pls::cs::String cs_arg2 = v_str; float cs_arg3 = v_x; float cs_arg4 = v_y; std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetColor(); }()); std::int32_t cs_arg6 = v_anchor; cs_7650135bd7080a26(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
throw pls::cs::ReturnFlow<void>{};
}
pls::cs::Ref<pls::kairo::Font> v_font_6159 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; return pls::kairo::native_graphics_read_font(cs_arg0); }());
std::int32_t v_previous_6193 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
if (((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))) && ([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_previous_6193 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
([&]() { auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); float cs_arg0 = v_x; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4a7882bb12bfce3f(cs_receiver,cs_arg0); }()); v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); float cs_arg0 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a6f2c13fea15a192(cs_receiver,cs_arg0); }()); v_y = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); std::int32_t cs_arg0 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cb4539652f78b54c(cs_receiver,cs_arg0); }()); v_anchor = cs_value; return cs_value; }());
}
bool v_localize_6411 = (((([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsNeedLocalizeScale(); }()));
if (v_localize_6411) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_previous_6193 = cs_value; return cs_value; }());
std::int32_t v_height_6522 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetLocalizeScale(); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x60ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) ([&]() { auto cs_old = v_y; auto cs_rhs = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_height_6522; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); auto cs_value = (cs_old + cs_rhs); v_y = cs_value; return cs_value; }());
([&]() -> void { pls::kairo::Font::LockLocalizeSetting(); }());
}
pls::cs::run_finally([&]() {{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = v_str; float cs_arg2 = v_x; float cs_arg3 = v_y; std::int32_t cs_arg4 = v_anchor; pls::kairo::native_graphics_draw_prepared(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}}, [&]() {
if (v_localize_6411) ([&]() -> void { pls::kairo::Font::UnlockLocalizeSetting(); }());
if (([&]() -> bool { auto cs_left = v_previous_6193; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); std::int32_t cs_arg0 = v_previous_6193; auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
});
}catch(const pls::cs::ReturnFlow<void>& cs_return){return;}}
}
// M:PlsPortGeneratedBootstrap.Source.FreeHeapMemory
std::int64_t cs_8c256740f2071d41() { cs_init_ed8eabc614ddcf9e();
{
return pls::cs::unbox<std::int64_t>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = ([&](){struct cs_closure_c6a64f8ef06f48c0 : pls::cs::Object{void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);}void release_edges()override{pls::cs::Object::release_edges();}pls::cs::Ref<pls::cs::Object> Invoke(){{ return pls::cs::box(([&]() -> std::int64_t { return pls::kairo::native_heap_free(); }())); }}};auto cs_closure=pls::cs::make_ref<cs_closure_c6a64f8ef06f48c0>();return pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::bind_identity(cs_closure,nullptr,std::string("M:PlsPortGeneratedBootstrap.Source.FreeHeapMemory:4519"),[weak=std::weak_ptr<cs_closure_c6a64f8ef06f48c0>(cs_closure)]()->pls::cs::Ref<pls::cs::Object>{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();return target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }()));
}
}
// M:PlsPortGeneratedBootstrap.Source.GetApplicationResource(kairo.unity.ui.IApplication)
pls::cs::Ref<cs_b728593e3dcffe31> cs_910a62f2dd3a48eb(pls::cs::Ref<pls::kairo::IApplication> v_app) { cs_init_ed8eabc614ddcf9e();
{
return pls::cs::unbox<pls::cs::Ref<cs_b728593e3dcffe31>>(([&]() -> pls::cs::Ref<pls::cs::Object> { pls::cs::Ref<pls::kairo::IApplication> cs_arg0 = v_app; return pls::kairo::native_application_resource(cs_arg0); }()));
}
}
// M:PlsPortGeneratedBootstrap.Source.GetFep
pls::cs::Ref<cs_d37bccc1c3814fc6> cs_35c6d0bf39ebc561() { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> pls::cs::Ref<cs_d37bccc1c3814fc6> { return cs_17329e66670990a9(); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.GetGraphicsLocalMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_5186306036e04c97(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<cs_c8e1f3d3f96670c6> v_value) { cs_init_ed8eabc614ddcf9e();
{
if (([&]() { auto cs_left = pls::cs::box(v_value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { return cs_d1ef6eff6523bffb(); }()); v_value = cs_value; return cs_value; }());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_value); pls::cs::Array<float> cs_arg0 = ([&]() -> pls::cs::Array<float> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::kairo::native_graphics_read_matrix(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ae09ad7913e5d182(cs_receiver,cs_arg0); }());
return v_value;
}
}
// M:PlsPortGeneratedBootstrap.Source.GetGraphicsMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_ba0c4bb4e6b47a8a(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<cs_c8e1f3d3f96670c6> v_value) { cs_init_ed8eabc614ddcf9e();
{
if (([&]() { auto cs_left = pls::cs::box(v_value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { return cs_d1ef6eff6523bffb(); }()); v_value = cs_value; return cs_value; }());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_value); pls::cs::Array<float> cs_arg0 = ([&]() -> pls::cs::Array<float> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::native_graphics_read_matrix(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ae09ad7913e5d182(cs_receiver,cs_arg0); }());
return v_value;
}
}
// M:PlsPortGeneratedBootstrap.Source.GetGraphicsScreenMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_73f9b6da48f845fd(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<cs_c8e1f3d3f96670c6> v_value) { cs_init_ed8eabc614ddcf9e();
{
if (([&]() { auto cs_left = pls::cs::box(v_value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { return cs_d1ef6eff6523bffb(); }()); v_value = cs_value; return cs_value; }());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_value); pls::cs::Array<float> cs_arg0 = ([&]() -> pls::cs::Array<float> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::kairo::native_graphics_read_matrix(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ae09ad7913e5d182(cs_receiver,cs_arg0); }());
return v_value;
}
}
// M:PlsPortGeneratedBootstrap.Source.GetGraphicsTransRectGUI(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,kairo.unity.graphics.RectangleF)
pls::cs::Ref<cs_f1dd8f2aa583774c> cs_6b2275fd3b361511(pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,float v_width,float v_height,pls::cs::Ref<cs_f1dd8f2aa583774c> v_dst) { cs_init_ed8eabc614ddcf9e();
{
if (([&]() { auto cs_left = pls::cs::box(v_dst); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_f1dd8f2aa583774c> { return cs_811ec9500127b493(); }()); v_dst = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_f1dd8f2aa583774c>>(v_dst); float cs_arg0 = v_x; float cs_arg1 = v_y; float cs_arg2 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_width; return (cs_left + cs_right); }()); float cs_arg3 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_height; return (cs_left + cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_20c48a456cf53f6e(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
float v_left_7787 = ([&]() { auto cs_receiver = v_dst; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_046578c7b896a653; }()), v_top_7801 = ([&]() { auto cs_receiver = v_dst; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8b58e9490836581; }()), v_right_7813 = ([&]() { auto cs_receiver = v_dst; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_06ef4703cb291a79; }()), v_bottom_7829 = ([&]() { auto cs_receiver = v_dst; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d4cf7374fb757c0; }());
pls::cs::Ref<cs_c8e1f3d3f96670c6> v_matrix_7851 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::Ref<cs_c8e1f3d3f96670c6>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_73f9b6da48f845fd(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_matrix_7851); auto& cs_arg0 = v_left_7787; auto& cs_arg1 = v_top_7801; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_76f083d6ddd878de(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_matrix_7851); auto& cs_arg0 = v_right_7813; auto& cs_arg1 = v_bottom_7829; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_76f083d6ddd878de(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_f1dd8f2aa583774c>>(v_dst); float cs_arg0 = v_left_7787; float cs_arg1 = v_top_7801; float cs_arg2 = v_right_7813; float cs_arg3 = v_bottom_7829; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_20c48a456cf53f6e(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
pls::cs::Array<float> v_clip_7995 = ([&]() -> pls::cs::Array<float> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; return pls::kairo::native_graphics_read_clip(cs_arg0); }());
([&]() { auto cs_target = v_dst; auto cs_old = pls::game::cs_require(cs_target)->cs_046578c7b896a653; auto cs_rhs = ([&]() { auto cs_array = v_clip_7995; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = (cs_old - cs_rhs); pls::game::cs_require(cs_target)->cs_046578c7b896a653 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_dst; auto cs_old = pls::game::cs_require(cs_target)->cs_06ef4703cb291a79; auto cs_rhs = ([&]() { auto cs_array = v_clip_7995; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = (cs_old - cs_rhs); pls::game::cs_require(cs_target)->cs_06ef4703cb291a79 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_dst; auto cs_old = pls::game::cs_require(cs_target)->cs_c8b58e9490836581; auto cs_rhs = ([&]() { auto cs_array = v_clip_7995; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = (cs_old - cs_rhs); pls::game::cs_require(cs_target)->cs_c8b58e9490836581 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_dst; auto cs_old = pls::game::cs_require(cs_target)->cs_8d4cf7374fb757c0; auto cs_rhs = ([&]() { auto cs_array = v_clip_7995; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = (cs_old - cs_rhs); pls::game::cs_require(cs_target)->cs_8d4cf7374fb757c0 = cs_value; return cs_value; }());
return v_dst;
}
}
// M:PlsPortGeneratedBootstrap.Source.GetKairo
pls::cs::Ref<cs_b489b0d33bb37bb8> cs_c4936eb85a4204af() { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.GetReserve(kairo.unity.system.KairoBase)
std::int32_t cs_24c32f1e4193a152(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value) { cs_init_ed8eabc614ddcf9e();
{
return ([&]() { auto cs_receiver = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a3decda7a4670291; }());
}
}
// M:PlsPortGeneratedBootstrap.Source.GetReserveEnabled(kairo.unity.system.KairoBase)
bool cs_819b3ebc516bd932(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value) { cs_init_ed8eabc614ddcf9e();
{
return ([&]() { auto cs_receiver = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb15809d7dd758fd; }());
}
}
// M:PlsPortGeneratedBootstrap.Source.InitializeLanguage
void cs_53006aec72e26706() { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { cs_a56548cef82c6906(); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.InitializePlatform
void cs_d9ce38f50244c191() { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { std::int32_t cs_arg0 = ([&]() -> std::int32_t { return pls::generated::cs_f2f74213ca1ea9bc(); }()); bool cs_arg1 = pls::generated::cs_4cc76a7a43706693(); pls::cs::String cs_arg2 = pls::generated::cs_1ce7e3797101a750(); pls::kairo::native_plugin_init(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { bool cs_arg0 = true; bool cs_arg1 = false; cs_749d49646f9339d3(cs_arg0,cs_arg1); }());
([&]() -> void { bool cs_arg0 = false; cs_b0502ca03ca03061(cs_arg0); }());
([&]() -> void { cs_dc20b22a3922530e(); }());
if ((!(pls::generated::cs_c85047b12129912e()))) ([&]() -> void { bool cs_arg0 = false; cs_933c73fabeb9213d(cs_arg0); }());
pls::cs::Ref<pls::kairo::DisplayMetrics> v_metrics_3844 = ([&]() -> pls::cs::Ref<pls::kairo::DisplayMetrics> { return pls::cs::make_ref<pls::kairo::DisplayMetrics>(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }())); pls::cs::Ref<pls::kairo::IApplication> cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetDisplayCurrent(cs_arg0); }());
([&]() -> void { pls::game::native_install_bootstrap_bindings(); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.IsPlaying(kairo.unity.system.KairoBase)
bool cs_14404b0409612e0e(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value) { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ab34005322458eed(cs_receiver); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.Japanese
bool cs_714ae7bf22940094() { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.LoadLibraryResources
pls::cs::Ref<pls::cs::Object> cs_e9e5fbc4cd3f1ed8() { cs_init_ed8eabc614ddcf9e();
{
pls::cs::Ref<cs_b728593e3dcffe31> v_manager_4038 = ([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { auto cs_arg0 = pls::cs::String{}; auto cs_arg1 = pls::cs::String{}; auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; auto cs_arg4 = pls::cs::String{}; auto cs_arg5 = pls::cs::String{}; auto cs_arg6 = pls::cs::String{}; return cs_63b2bd45669dab69(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(v_manager_4038); pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x006c" u"\x0069" u"\x0062" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",12)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6ec7ac2b50afb0b0(cs_receiver,cs_arg0,cs_arg1); }());
{ auto cs_each781 = ([&]() { auto cs_receiver = v_manager_4038; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); for (std::int32_t cs_i781=0; cs_i781<cs_each781.length(); ++cs_i781) { pls::cs::Ref<pls::kairo::Image> v_image_4127 = cs_each781.get_Item(cs_i781); {
if (([&]() { auto cs_left = pls::cs::box(v_image_4127); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_4127); bool cs_arg0 = true; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetExpiration(cs_arg0,cs_arg1); }());
} } }
return pls::cs::box(v_manager_4038);
}
}
// M:PlsPortGeneratedBootstrap.Source.LocalizeScale
bool cs_7c911f55fe4ce22d() { cs_init_ed8eabc614ddcf9e();
{
return pls::generated::cs_89a30a814542a913();
}
}
// M:PlsPortGeneratedBootstrap.Source.MarkupDraw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32)
void cs_08ee9b873c770db5(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_value,float v_x,float v_y,std::int32_t v_anchor) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::Ref<pls::kairo::Graphics> cs_arg1 = v_g; pls::cs::String cs_arg2 = v_value; float cs_arg3 = v_x; float cs_arg4 = v_y; std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetColor(); }()); std::int32_t cs_arg6 = v_anchor; cs_7650135bd7080a26(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.MarkupWidth(kairo.unity.ui.Font,System.String)
float cs_6e94a0e98a66cd1e(pls::cs::Ref<pls::kairo::Font> v_font,pls::cs::String v_value) { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> float { pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::Ref<pls::kairo::Font> cs_arg1 = v_font; pls::cs::String cs_arg2 = v_value; return cs_73930d73c766bf02(cs_arg0,cs_arg1,cs_arg2); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.MatrixValues(kairo.unity.ui.Matrix)
pls::cs::Array<float> cs_5b92f2ba5b09b02c(pls::cs::Ref<cs_c8e1f3d3f96670c6> v_value) { cs_init_ed8eabc614ddcf9e();
{
if (([&]() { auto cs_left = pls::cs::box(v_value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) return pls::cs::Array<float>{};
pls::cs::Array<float> v_values_5778 = pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_value); pls::cs::Array<float> cs_arg0 = v_values_5778; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ca00577a54dd61a5(cs_receiver,cs_arg0); }());
return v_values_5778;
}
}
// M:PlsPortGeneratedBootstrap.Source.MeasureImage(System.Byte[])
pls::cs::Array<std::int32_t> cs_cdb96b9d2c43a215(pls::cs::Array<std::uint8_t> v_data) { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> pls::cs::Array<std::int32_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return cs_4821dc8d620fb368(cs_arg0); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.Millis
std::int64_t cs_ea83d7e6880d60d0() { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.Pause(System.Int64)
void cs_94fed40668eb39b8(std::int64_t v_value) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { std::int64_t cs_arg0 = v_value; cs_26244a61d0d2e16c(cs_arg0); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.PushGraphicsMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
void cs_c9d946ea24c94dbc(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<cs_c8e1f3d3f96670c6> v_value) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::Array<float> cs_arg1 = ([&]() -> pls::cs::Array<float> { pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = v_value; return cs_5b92f2ba5b09b02c(cs_arg0); }()); pls::kairo::native_graphics_push_matrix(cs_arg0,cs_arg1); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.ReadImageData(System.Int32,System.Int32,System.String,System.String)
pls::cs::Array<std::uint8_t> cs_bf9518b639572f74(std::int32_t v_rs,std::int32_t v_rc,pls::cs::String v_file,pls::cs::String v_palette) { cs_init_ed8eabc614ddcf9e();
{
pls::cs::Array<std::uint8_t> v_data_5313 = pls::cs::Array<std::uint8_t>{};
if (([&]() -> bool { auto cs_left = v_rs; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = v_file; return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); v_data_5313 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_palette); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data_5313; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = v_palette; return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); return cs_46f5e10bd3c97a4c(cs_arg0,cs_arg1); }());
} else {
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar_5459 = ([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { std::int32_t cs_arg0 = v_rs; std::int32_t cs_arg1 = v_rc; return cs_f22a8aac0144b99b(cs_arg0,cs_arg1); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_5459); pls::cs::String cs_arg0 = v_file; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); v_data_5313 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_palette); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data_5313; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_5459); pls::cs::String cs_arg0 = v_palette; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); return cs_46f5e10bd3c97a4c(cs_arg0,cs_arg1); }());
}
return v_data_5313;
}
}
// M:PlsPortGeneratedBootstrap.Source.Save(kairo.unity.system.KairoBase)
void cs_ecb38147f2318edc(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_3481915358ac0fff(); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.SaveAll(kairo.unity.system.KairoBase)
void cs_f0ab887a70f5eb9a(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_06f3c8d943914943(); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.SetGameState(kairo.unity.system.KairoBase,System.Boolean)
void cs_f9382522394ab3e5(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value,bool v_playing) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_value); bool cs_arg0 = v_playing; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e63aaf6292bf7187(cs_receiver,cs_arg0); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.SetGraphicsMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
void cs_afe22eae987dcf98(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<cs_c8e1f3d3f96670c6> v_value) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::Array<float> cs_arg1 = ([&]() -> pls::cs::Array<float> { pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = v_value; return cs_5b92f2ba5b09b02c(cs_arg0); }()); pls::kairo::native_graphics_set_matrix(cs_arg0,cs_arg1); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.SetReserve(kairo.unity.system.KairoBase,System.Int32)
void cs_51448637417220ba(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value,std::int32_t v_reserved) { cs_init_ed8eabc614ddcf9e();
{
([&]() { auto cs_target = v_value; auto cs_value = v_reserved; pls::game::cs_require(cs_target)->cs_a3decda7a4670291 = cs_value; return cs_value; }());
}
}
// M:PlsPortGeneratedBootstrap.Source.SetReserveEnabled(kairo.unity.system.KairoBase,System.Boolean)
void cs_28b9303ca50ae96a(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value,bool v_enabled) { cs_init_ed8eabc614ddcf9e();
{
([&]() { auto cs_target = v_value; auto cs_value = v_enabled; pls::game::cs_require(cs_target)->cs_bb15809d7dd758fd = cs_value; return cs_value; }());
}
}
// M:PlsPortGeneratedBootstrap.Source.SetWindowFullscreen(System.Boolean)
void cs_933c73fabeb9213d(bool v_enabled) { cs_init_ed8eabc614ddcf9e();
{
pls::cs::Ref<pls::cs::Cell<bool>> v_enabled_cell=pls::cs::make_ref<pls::cs::Cell<bool>>(v_enabled);
{
if (pls::generated::cs_c85047b12129912e()) return;
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_01a2e3d249a2a9fb : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<bool>> v_enabled_cell;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_enabled_cell,v);}void release_edges()override{pls::cs::Object::release_edges();v_enabled_cell.reset();}void Invoke(){{
([&]() -> void { bool cs_arg0 = v_enabled_cell->value; pls::kairo::native_window_fullscreen(cs_arg0); }());
}}};auto cs_closure=pls::cs::make_ref<cs_closure_01a2e3d249a2a9fb>();cs_closure->v_enabled_cell=v_enabled_cell;return pls::cs::Delegate<void()>::bind_identity(cs_closure,v_enabled_cell.get(),std::string("M:PlsPortGeneratedBootstrap.Source.SetWindowFullscreen(System.Boolean):4964"),[weak=std::weak_ptr<cs_closure_01a2e3d249a2a9fb>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());
}
}
}
// M:PlsPortGeneratedBootstrap.Source.ShowToast(System.String,System.Int32)
void cs_4d9093772b7b2178(pls::cs::String v_text,std::int32_t v_duration) { cs_init_ed8eabc614ddcf9e();
{
pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_text_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::String>>(v_text);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_5d58fc5d227bbe36 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_text_cell;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_text_cell,v);}void release_edges()override{pls::cs::Object::release_edges();v_text_cell.reset();}void Invoke(){{
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_text_cell->value); pls::kairo::debug_log(cs_arg0); }());
}}};auto cs_closure=pls::cs::make_ref<cs_closure_5d58fc5d227bbe36>();cs_closure->v_text_cell=v_text_cell;return pls::cs::Delegate<void()>::bind_identity(cs_closure,v_text_cell.get(),std::string("M:PlsPortGeneratedBootstrap.Source.ShowToast(System.String,System.Int32):4783"),[weak=std::weak_ptr<cs_closure_5d58fc5d227bbe36>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());
}
}
}
// M:PlsPortGeneratedBootstrap.Source.TerminateApplication
void cs_d77afa4a6ff2b7fb() { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { pls::kairo::AppEventType cs_arg0 = static_cast<pls::kairo::AppEventType>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull))); pls::cs::Array<pls::cs::Ref<pls::cs::Object>> cs_arg1 = pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); pls::kairo::FormManagerBase::ProcessEvent(cs_arg0,cs_arg1); }());
pls::cs::Ref<cs_b489b0d33bb37bb8> v_kairo_5138 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
if (([&]() { auto cs_left = pls::cs::box(v_kairo_5138); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_kairo_5138); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_706bcbd9776cf6ef(); }());
([&]() -> void { cs_252b02044b3d6557(); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.TotalHeapMemory
std::int64_t cs_e4c8e8c5d833899f() { cs_init_ed8eabc614ddcf9e();
{
return pls::cs::unbox<std::int64_t>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = ([&](){struct cs_closure_b0fcc6112c9df641 : pls::cs::Object{void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);}void release_edges()override{pls::cs::Object::release_edges();}pls::cs::Ref<pls::cs::Object> Invoke(){{ return pls::cs::box(([&]() -> std::int64_t { return pls::kairo::native_heap_total(); }())); }}};auto cs_closure=pls::cs::make_ref<cs_closure_b0fcc6112c9df641>();return pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::bind_identity(cs_closure,nullptr,std::string("M:PlsPortGeneratedBootstrap.Source.TotalHeapMemory:4648"),[weak=std::weak_ptr<cs_closure_b0fcc6112c9df641>(cs_closure)]()->pls::cs::Ref<pls::cs::Object>{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();return target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }()));
}
}
// M:PlsPortGeneratedBootstrap.Source.Translate(System.String)
pls::cs::String cs_99bb8e5b618e57bb(pls::cs::String v_value) { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_value; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.UpdateKairo(kairo.unity.system.KairoBase)
void cs_762af1e562b96b8a(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_9ca5e184bd541bee(); }());
}
}
// M:PlsPortGeneratedBootstrap.Source.Yield
void cs_d4ade149898c4a1b() { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { cs_012506043193cb2a(); }());
}
}
// M:surface.GamePad.#ctor
pls::cs::Ref<cs_792a6372766eb19f> cs_cf8ab3fc66fb56cb() { cs_init_792a6372766eb19f();
{ auto cs_this = pls::cs::make_ref<cs_792a6372766eb19f>(); cs_cf8ab3fc66fb56cb_init(cs_this); return cs_this; }
}
void cs_cf8ab3fc66fb56cb_init(pls::cs::Ref<cs_792a6372766eb19f> cs_this) {
cs_this->cs_ffeb6ba8f27f04da = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
cs_this->cs_e9c361e061762844 = pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)));
([&]() { cs_a1b466bc14363691_init(std::static_pointer_cast<cs_9326c27a92cfea3a>(cs_this)); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }()); pls::game::cs_require(cs_target)->cs_19e78e808977cc4e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }()); pls::game::cs_require(cs_target)->cs_5867a2554f93e1c1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_4e9b1f0e9e3baf25> { return cs_81e284f6e842da85(); }()); pls::game::cs_require(cs_target)->cs_0d5c709c51fa921b = cs_value; return cs_value; }());
float v_scaleRatio_8340 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_19e78e808977cc4e; }())); bool cs_arg0 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScaleRatio(cs_arg0); }());
float v_num_8388 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x43700000u); auto cs_right = v_scaleRatio_8340; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }());
float v_num2_8429 = pls::game::cs_f32(0x43a00000u);
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); float cs_arg0 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_num_8388; auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left * cs_right); }()); auto cs_right = v_num2_8429; return (cs_left / cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8de8ff27e94cbce9(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Font> { return pls::cs::make_ref<pls::kairo::Font>(); }()); pls::game::cs_require(cs_target)->cs_3a868c09e05f0a18 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a868c09e05f0a18; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_30a4c2b81b0594b6 = cs_value; return cs_value; }());
std::int32_t v_num3_8545 = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { return cs_0d8fb4e4b5984298(); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_num3_8545; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = cs_85947546213f4402(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_array = cs_85947546213f4402(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
// M:surface.GamePad.DrawImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void cs_9bfe00949a9c4d85(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_imgId) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_31176 = ([&]() { auto cs_array = cs_ef3be8cf38199e7e(); auto cs_index = v_imgId; return cs_array.get_Item(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = v_x; float cs_arg2 = v_y; float cs_arg3 = static_cast<float>(([&]() { auto cs_array = v_array_31176; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); float cs_arg4 = static_cast<float>(([&]() { auto cs_array = v_array_31176; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg5 = v_imgId; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b55690f7a47a296c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
// M:surface.GamePad.DrawScaledImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,System.Int32)
void cs_b55690f7a47a296c(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,float v_w,float v_h,std::int32_t v_imgId) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_31365 = ([&]() { auto cs_array = cs_ef3be8cf38199e7e(); auto cs_index = v_imgId; return cs_array.get_Item(cs_index); }());
pls::cs::Ref<pls::kairo::Image> v_image_31399 = ([&]() { auto cs_array = cs_9149ef90399c862e(); auto cs_index = ([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
float v_num_31435 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_31399); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }())); auto cs_right = static_cast<float>(([&]() { auto cs_array = cs_5859d912a9aed67d(); auto cs_index = ([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }())); return (cs_left / cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = v_image_31399; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = static_cast<float>(([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = static_cast<float>(([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); return (cs_left + cs_right); }()); float cs_arg3 = v_w; float cs_arg4 = v_h; std::int32_t cs_arg5 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_31435; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg6 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_31435; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg7 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_31435; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg8 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_31435; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
}
}
}
// M:surface.GamePad.DrawSoftLabelImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void cs_b5ef9d13e4a21bab(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_imgId) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_28285 = ([&]() { auto cs_array = cs_ef3be8cf38199e7e(); auto cs_index = v_imgId; return cs_array.get_Item(cs_index); }());
pls::cs::Ref<pls::kairo::Image> v_image_28319 = ([&]() { auto cs_array = cs_9149ef90399c862e(); auto cs_index = ([&]() { auto cs_array = v_array_28285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
float v_sideViewRatio_28355 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_78001fa70ce5cc94(cs_receiver); }());
std::int32_t v_num_28398 = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_28285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_sideViewRatio_28355; return (cs_left * cs_right); }())));
std::int32_t v_num2_28451 = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_28285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_sideViewRatio_28355; return (cs_left * cs_right); }())));
float v_num3_28507 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_28319); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }())); auto cs_right = static_cast<float>(([&]() { auto cs_array = cs_5859d912a9aed67d(); auto cs_index = ([&]() { auto cs_array = v_array_28285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }())); return (cs_left / cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = v_image_28319; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = static_cast<float>(([&]() { auto cs_array = v_array_28285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = static_cast<float>(([&]() { auto cs_array = v_array_28285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); return (cs_left + cs_right); }()); float cs_arg3 = static_cast<float>(v_num_28398); float cs_arg4 = static_cast<float>(v_num2_28451); std::int32_t cs_arg5 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_28285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num3_28507; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg6 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_28285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num3_28507; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg7 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_28285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num3_28507; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg8 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_28285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num3_28507; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
}
}
}
// M:surface.GamePad.DrawWatch(kairo.unity.ui.Graphics,System.Single,System.Single)
void cs_311049404bce850c(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(cs_52a3cfad721c8407()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_a465028bea3432a3> { return pls::generated::cs_23a91b30234d4879(); }()); cs_52a3cfad721c8407() = cs_value; return cs_value; }());
}
pls::cs::Ref<pls::generated::cs_a465028bea3432a3> v_jCalendar_29736 = cs_52a3cfad721c8407();
std::int64_t v_num_29776 = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());
if ((([&]() -> bool { auto cs_left = v_num_29776; auto cs_right = cs_64e0a7e74b2c1cd4(); return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = cs_022c3a0c1cdb7af0(); auto cs_right = v_num_29776; return (cs_left <= cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_jCalendar_29736); std::int64_t cs_arg0 = v_num_29776; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_ab403c0b96bfdb59(cs_receiver,cs_arg0); }());
std::int32_t v_num2_29922 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_jCalendar_29736); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());
std::int32_t v_num3_29956 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_jCalendar_29736); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { auto cs_left = v_num_29776; auto cs_right = pls::cs::cast_integral<std::int64_t>(([&]() -> std::int32_t { auto cs_left = v_num2_29922; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); return pls::cs::sub_i64(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(v_num3_29956); return pls::cs::sub_i64(cs_left,cs_right); }()); cs_64e0a7e74b2c1cd4() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_left = cs_64e0a7e74b2c1cd4(); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xea60ull))); return pls::cs::add_i64(cs_left,cs_right); }()); cs_022c3a0c1cdb7af0() = cs_value; return cs_value; }());
}
std::int32_t v_num4_30098 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_jCalendar_29736); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());
std::int32_t v_num5_30131 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_jCalendar_29736); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());
pls::cs::Ref<pls::generated::cs_a465028bea3432a3> v_instance_30170 = ([&]() -> pls::cs::Ref<pls::generated::cs_a465028bea3432a3> { return pls::generated::cs_23a91b30234d4879(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_30170); pls::cs::Ref<pls::generated::cs_66dbad5679f8ab87> cs_arg0 = ([&]() -> pls::cs::Ref<pls::generated::cs_66dbad5679f8ab87> { return pls::generated::cs_f437b6bb4cf7b2a6(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_e2c62bcb22f058c9(cs_receiver,cs_arg0); }());
pls::cs::String v_text_30250 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_30170); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); return pls::game::cs_integer_string(cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(v_text_30250); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_arg0 = v_text_30250; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0031" u"\x0032" u"",2)); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()))) {
if (([&]() -> bool { auto cs_left = v_num4_30098; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x42a20000u); return (cs_left - cs_right); }()); float cs_arg2 = v_y; std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x17ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9bfe00949a9c4d85(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x42a20000u); return (cs_left - cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = pls::game::cs_f32(0x40a00000u); return (cs_left + cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9bfe00949a9c4d85(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
([&]() { auto cs_old = v_num4_30098; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); auto cs_value = pls::cs::mod_i32(cs_old,cs_rhs); v_num4_30098 = cs_value; return cs_value; }());
}
for (std::int32_t v_i_30493 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_30493; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_30493; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_30493 = cs_new; return cs_old; }())) {
std::int32_t v_num6_30525 = ([&]() -> std::int32_t { auto cs_left = v_num4_30098; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::mod_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x427c0000u); return (cs_left - cs_right); }()); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left + cs_right); }()); auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_right = v_i_30493; return pls::cs::mul_i32(cs_left,cs_right); }()))); return (cs_left - cs_right); }()); float cs_arg2 = v_y; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x19ull)); auto cs_right = v_num6_30525; return pls::cs::add_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9bfe00949a9c4d85(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_old = v_num4_30098; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::div_i32(cs_old,cs_rhs); v_num4_30098 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num4_30098; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
break;
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x42580000u); return (cs_left - cs_right); }()); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left + cs_right); }()); float cs_arg2 = v_y; std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x23ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9bfe00949a9c4d85(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
for (std::int32_t v_j_30720 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_30720; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_30720; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_30720 = cs_new; return cs_old; }())) {
std::int32_t v_num7_30752 = ([&]() -> std::int32_t { auto cs_left = v_num5_30131; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::mod_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x42200000u); return (cs_left - cs_right); }()); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left + cs_right); }()); auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_right = v_j_30720; return pls::cs::mul_i32(cs_left,cs_right); }()))); return (cs_left - cs_right); }()); float cs_arg2 = v_y; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x19ull)); auto cs_right = v_num7_30752; return pls::cs::add_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9bfe00949a9c4d85(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_old = v_num5_30131; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::div_i32(cs_old,cs_rhs); v_num5_30131 = cs_value; return cs_value; }());
}
}
}
}
// M:surface.GamePad.GetDivisionArea(System.Single,System.Single,System.Single,System.Int32,System.Int32)
pls::cs::Array<float> cs_da8b794ec31d3049(pls::cs::Ref<cs_792a6372766eb19f> cs_this,float v_left,float v_right,float v_padding,std::int32_t v_index,std::int32_t v_max) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_index; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_max; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_83a6f271dad6430d(cs_arg0,cs_arg1); }()); v_index = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_max; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_left;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_right;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
float v_num_32051 = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_right; auto cs_right = v_left; return (cs_left - cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_padding; auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_max; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()))); return (cs_left * cs_right); }()); return (cs_left - cs_right); }())); auto cs_right = static_cast<float>(v_max); return (cs_left / cs_right); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> float { auto cs_left = v_left; auto cs_right = static_cast<float>(pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(v_index); auto cs_right = (([&]() -> float { auto cs_left = v_num_32051; auto cs_right = v_padding; return (cs_left + cs_right); }())); return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3dcccccdu); return (cs_left + cs_right); }())))); return (cs_left + cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> float { auto cs_left = v_left; auto cs_right = static_cast<float>(pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(v_index); auto cs_right = (([&]() -> float { auto cs_left = v_num_32051; auto cs_right = v_padding; return (cs_left + cs_right); }())); return (cs_left * cs_right); }()); auto cs_right = v_num_32051; return (cs_left + cs_right); }()); auto cs_right = pls::game::cs_f32(0x3dcccccdu); return (cs_left + cs_right); }())))); return (cs_left + cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return (cs_left - cs_right); }())); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left + cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }());
}
}
}
// M:surface.GamePad.GetInstance
pls::cs::Ref<cs_792a6372766eb19f> cs_a066f615d75279e2() { cs_init_792a6372766eb19f();
{
if (([&]() { auto cs_left = pls::cs::box(cs_76f760b13fa7718b()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_792a6372766eb19f> { return cs_cf8ab3fc66fb56cb(); }()); cs_76f760b13fa7718b() = cs_value; return cs_value; }());
}
return cs_76f760b13fa7718b();
}
}
// M:surface.GamePad.GetLayoutMode
std::int32_t cs_db5f3811c0200bd7(pls::cs::Ref<cs_792a6372766eb19f> cs_this) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6c26da80c9b27bc8; }());
}
}
}
// M:surface.GamePad.GetMode
std::int32_t cs_0378d82734b4deab(pls::cs::Ref<cs_792a6372766eb19f> cs_this) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_30a4c2b81b0594b6; }());
}
}
}
// M:surface.GamePad.GetOptionPage
std::int32_t cs_905843a9806d4f67(pls::cs::Ref<cs_792a6372766eb19f> cs_this) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e1df28e1da14e090; }());
}
}
}
// M:surface.GamePad.GetSideSize
std::int32_t cs_5e393384aa7d2051(pls::cs::Ref<cs_792a6372766eb19f> cs_this) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_25082 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x52ull));
float v_sideViewRatio_25101 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_78001fa70ce5cc94(cs_receiver); }());
if (([&]() -> bool { auto cs_left = pls::game::cs_f32(0x00000000u); auto cs_right = v_sideViewRatio_25101; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>(v_num_25082); auto cs_right = v_sideViewRatio_25101; return (cs_left * cs_right); }()))); v_num_25082 = cs_value; return cs_value; }());
}
return v_num_25082;
}
}
}
// M:surface.GamePad.GetSideViewRatio
float cs_78001fa70ce5cc94(pls::cs::Ref<cs_792a6372766eb19f> cs_this) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_e315dac1df3b175d> v_instance_24803 = ([&]() -> pls::cs::Ref<cs_e315dac1df3b175d> { return cs_f32a8bd00f4461ef(); }());
float v_num_24847 = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_24803); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = pls::game::cs_f32(0x43700000u); return (cs_left / cs_right); }());
{
bool v_recoveredCondition_26283_24910 = (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0378d82734b4deab(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num_24847; auto cs_right = pls::game::cs_f32(0x3f666666u); return (cs_left < cs_right); }()));
if (v_recoveredCondition_26283_24910) {
return v_num_24847;
}
}
return pls::game::cs_f32(0x00000000u);
}
}
}
// M:surface.GamePad.IsGameSurface
bool cs_d237d8c9ca71f7cc(pls::cs::Ref<cs_792a6372766eb19f> cs_this) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}
// M:surface.GamePad.IsSmallSideView
bool cs_f5a405716b67b4b7(pls::cs::Ref<cs_792a6372766eb19f> cs_this) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = pls::game::cs_f32(0x00000000u); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_78001fa70ce5cc94(cs_receiver); }()); return (cs_left < cs_right); }());
}
}
}
// M:surface.GamePad.IsSoftLabelID(System.Int32)
bool cs_ef3cddc2587c6e11(pls::cs::Ref<cs_792a6372766eb19f> cs_this,std::int32_t v_id) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (((((([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) {
return true;
}
return false;
}
}
}
// M:surface.GamePad.Load(kairo.unity.util.JarInflater)
void cs_2da0940ad60eef3f(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar) { cs_init_792a6372766eb19f();
{
try {
([&]() { auto cs_value = pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>::make((cs_b966f65b238fb3f0()).length()); cs_9149ef90399c862e() = cs_value; return cs_value; }());
for (std::int32_t v_i_8820 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_8820; auto cs_right = (cs_9149ef90399c862e()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_8820; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_8820 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar); pls::cs::String cs_arg0 = ([&]() { auto cs_array = cs_b966f65b238fb3f0(); auto cs_index = v_i_8820; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_95ade8baca7a8831(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_9149ef90399c862e(); auto cs_index = v_i_8820; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Image> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar); pls::cs::String cs_arg0 = ([&]() { auto cs_array = cs_b966f65b238fb3f0(); auto cs_index = v_i_8820; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); auto cs_arg1 = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); auto cs_arg2 = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return pls::kairo::Image::Load(cs_arg0,cs_arg1,cs_arg2); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
std::int32_t v_width_8986 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_array = cs_9149ef90399c862e(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }());
if ((((([&]() -> bool { auto cs_left = v_width_8986; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x180ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = v_width_8986; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x200ull)); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = v_width_8986; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x240ull)); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = v_width_8986; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x300ull)); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_5859d912a9aed67d(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1e4ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_5859d912a9aed67d(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x195ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
} catch(const pls::cs::Exception& cs_caught_202) {auto cs_exception_202=pls::cs::capture_exception(cs_caught_202);
if(pls::cs::exception_is(cs_exception_202,"System.Exception")) {{

}}
else {throw;} }
}
}
// M:surface.GamePad.RotateClear
void cs_df21b41e03f2f36f(pls::cs::Ref<cs_792a6372766eb19f> cs_this) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:surface.GamePad.SetMode(System.Int32)
void cs_7d8c3a37df2c9c0b(pls::cs::Ref<cs_792a6372766eb19f> cs_this,std::int32_t v_mode) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_mode; pls::game::cs_require(cs_target)->cs_30a4c2b81b0594b6 = cs_value; return cs_value; }());
}
}
}
// M:surface.GamePad.SetOptionPage(System.Int32)
void cs_f3c9caa17c71880a(pls::cs::Ref<cs_792a6372766eb19f> cs_this,std::int32_t v_page) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_page; pls::game::cs_require(cs_target)->cs_e1df28e1da14e090 = cs_value; return cs_value; }());
}
}
}
// M:surface.GameView._addTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_63f4ac17c3a51a13(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value,pls::cs::Ref<cs_6517d63c01870958> v_opt) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{try{
if (([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(v_opt); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_8d483d962b875686(); }()); v_opt = cs_value; return cs_value; }());
}
([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(v_opt); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return (cs_left | cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f8d0ca2ad798adff(cs_receiver,cs_arg0); }());
}
if (([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
{
if ((([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x15ull)); return (cs_left == cs_right); }()))) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_id; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = v_w; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fbcbc38ec33df44a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = v_w; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fbcbc38ec33df44a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
} else if ((([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return (cs_left == cs_right); }()))) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_id; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fbcbc38ec33df44a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fbcbc38ec33df44a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
} else if ((([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x13ull)); return (cs_left == cs_right); }()))) {
std::int32_t v_num12_19107 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(v_num12_19107); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_w; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = pls::game::cs_f32(0x40800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num12_19107; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(v_w); float cs_arg3 = pls::game::cs_f32(0x40000000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
std::int32_t v_num13_19250 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_w; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::div_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = v_num13_19250; return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num12_19107; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fbcbc38ec33df44a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = v_num13_19250; return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); v_w = cs_value; return cs_value; }());
} else if ((((([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return (cs_left == cs_right); }())) || (([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); return (cs_left == cs_right); }()))) || (([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return (cs_left == cs_right); }())))) {
std::int32_t v_num_19467 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num2_19495 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
bool v_flag_19525 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_id; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1941f0d8c1b7225c(cs_receiver,cs_arg0,cs_arg1); }());
pls::cs::Array<std::int32_t> v_array_19571 = pls::cs::Array<std::int32_t>{};
if (([&]() -> bool { auto cs_left = v_num_19467; auto cs_right = v_num2_19495; return (cs_left <= cs_right); }())) {
([&]() { auto cs_value = false; v_flag_19525 = cs_value; return cs_value; }());
}
if (v_flag_19525) {
([&]() -> void { cs_dc7bfd9cd45b88ef(); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_left = pls::cs::box(v_opt); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x200ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())); pls::game::cs_require(cs_target)->cs_b8ce53667520b9b8 = cs_value; return cs_value; }());
if ((([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = v_w; std::int32_t cs_arg4 = v_h; std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_left = v_num_19467; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg7 = v_num2_19495; bool cs_arg8 = v_flag_19525; std::int32_t cs_arg9 = ((([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return (cs_left == cs_right); }())) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_031ab111eb4ca5ff(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }()); v_array_19571 = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(v_array_19571); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) {
if ((v_flag_19525 && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_19467; auto cs_right = v_num2_19495; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_target = v_opt; auto cs_old = pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x24ull)); auto cs_value = (cs_old | cs_rhs); pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return (cs_left == cs_right); }())) {
std::int32_t v_num3_20033 = v_x;
std::int32_t v_num4_20054 = v_y;
std::int32_t v_num5_20075 = v_w;
std::int32_t v_num6_20096 = v_h;
std::int32_t v_num7_20117 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num8_20138 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }()); v_num7_20117 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }()); v_num8_20138 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num3_20033; auto cs_rhs = v_num7_20117; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num3_20033 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num4_20054; auto cs_rhs = v_num8_20138; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num4_20054 = cs_value; return cs_value; }());
}
if ((([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left != cs_right); }()))) {
double v_num9_20375 = ([&]() -> double { auto cs_left = static_cast<double>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }())); auto cs_right = static_cast<double>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }())); return (cs_left / cs_right); }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num7_20117; auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_num3_20033; auto cs_right = v_num7_20117; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = v_num9_20375; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }()); v_num3_20033 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num8_20138; auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_num4_20054; auto cs_right = v_num8_20138; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = v_num9_20375; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }()); v_num4_20054 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(v_num5_20075); auto cs_right = v_num9_20375; return (cs_left * cs_right); }()))); v_num5_20075 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(v_num6_20096); auto cs_right = v_num9_20375; return (cs_left * cs_right); }()))); v_num6_20096 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num3_20033; auto cs_rhs = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetRenderRect(); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num3_20033 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num4_20054; auto cs_rhs = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetRenderRect(); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num4_20054 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = v_opt; auto cs_value = ([&](){auto cs_initial_array_590=pls::cs::Array<std::int32_t>::make(8);cs_initial_array_590.at(0)=v_num3_20033;cs_initial_array_590.at(1)=v_num4_20054;cs_initial_array_590.at(2)=v_num5_20075;cs_initial_array_590.at(3)=v_num6_20096;cs_initial_array_590.at(4)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_590.at(5)=v_num_19467;cs_initial_array_590.at(6)=([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }());cs_initial_array_590.at(7)=v_num2_19495;return cs_initial_array_590;}()); pls::game::cs_require(cs_target)->cs_bc3ed6e7ac2c682a = cs_value; return cs_value; }());
} else {
std::int32_t v_num10_21018 = v_x;
std::int32_t v_num11_21040 = v_y;
if (([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_old = v_num10_21018; auto cs_rhs = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num10_21018 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num11_21040; auto cs_rhs = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num11_21040 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num2_19495; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_opt; auto cs_value = ([&](){auto cs_initial_array_591=pls::cs::Array<std::int32_t>::make(6);cs_initial_array_591.at(0)=v_num10_21018;cs_initial_array_591.at(1)=v_num11_21040;cs_initial_array_591.at(2)=v_w;cs_initial_array_591.at(3)=v_h;cs_initial_array_591.at(4)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_591.at(5)=v_num_19467;return cs_initial_array_591;}()); pls::game::cs_require(cs_target)->cs_bc3ed6e7ac2c682a = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = v_opt; auto cs_value = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = ([&]() { auto cs_array = v_array_19571; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_num_19467; auto cs_right = v_num2_19495; return pls::cs::sub_i32(cs_left,cs_right); }()))); return (cs_left / cs_right); }()); pls::game::cs_require(cs_target)->cs_9581916698464411 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9581916698464411; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = v_opt; auto cs_value = pls::game::cs_f32(0x3f800000u); pls::game::cs_require(cs_target)->cs_9581916698464411 = cs_value; return cs_value; }());
}
}
}
([&]() { auto cs_old = v_x; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffc18ull)); v_y = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7dull)); v_w = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7d0ull)); v_h = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() { auto cs_array = v_array_19571; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); v_y = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); v_w = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() { auto cs_array = v_array_19571; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); v_h = cs_value; return cs_value; }());
}
}
}
cs_label_dispatchExit: ;
;
}
}
if (([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetCurrentForm(); }())); auto cs_right = pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }())); return cs_left != cs_right; }())) {
pls::cs::Ref<pls::kairo::FormBase> v_topForm_21707 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }());
pls::cs::Ref<pls::kairo::FormBase> v_currentForm_21753 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetCurrentForm(); }());
if ((((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_topForm_21707); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_currentForm_21753); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_topForm_21707); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left != cs_right); }())) || (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_a2cea92715051fa5>>((pls::cs::unbox<pls::cs::Ref<cs_a2cea92715051fa5>>(pls::cs::box(v_topForm_21707)))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4214a8e7a6aa2068(cs_receiver); }())))) || (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_a2cea92715051fa5>>((pls::cs::unbox<pls::cs::Ref<cs_a2cea92715051fa5>>(pls::cs::box(v_currentForm_21753)))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4214a8e7a6aa2068(cs_receiver); }()))))) {
throw pls::cs::ReturnFlow<pls::cs::Ref<cs_3a3d09f9e75a32d2>>{pls::cs::Ref<cs_3a3d09f9e75a32d2>{}};
}
}
if ((([&]() { auto cs_left = pls::cs::box(v_opt); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()))) {
throw pls::cs::ReturnFlow<pls::cs::Ref<cs_3a3d09f9e75a32d2>>{pls::cs::Ref<cs_3a3d09f9e75a32d2>{}};
}
if ((([&]() -> bool { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }()) && pls::generated::cs_4cc76a7a43706693())) {
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog_22092 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0047" u"\x0061" u"\x006d" u"\x0065" u"\x0054" u"\x006f" u"\x0075" u"\x0063" u"\x0068" u"\x002e" u"\x005f" u"\x0061" u"\x0064" u"\x0064" u"\x0054" u"\x006f" u"\x0075" u"\x0063" u"\x0068" u"",19)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_22092); pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0076" u"\x0061" u"\x006c" u"\x0075" u"\x0065" u"\x306e" u"\x5024" u"\x304c" u"\x4e0d" u"\x6b63" u"\x3067" u"\x3059" u"\x0028" u"\x0076" u"\x0061" u"\x006c" u"\x0075" u"\x0065" u"\x003d" u"",19)); auto cs_right = pls::game::cs_integer_string(v_value); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0029" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_22092); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dce74b5b9a4c3556; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Terminate(); }());
throw pls::cs::ReturnFlow<pls::cs::Ref<cs_3a3d09f9e75a32d2>>{pls::cs::Ref<cs_3a3d09f9e75a32d2>{}};
}
std::int32_t v_num14_22266 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num15_22284 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }()); v_num14_22266 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }()); v_num15_22284 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_x; auto cs_rhs = v_num14_22266; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_x = cs_value; return cs_value; }());
([&]() { auto cs_old = v_y; auto cs_rhs = v_num15_22284; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_y = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
}
std::int32_t v_x2_22441 = v_x;
std::int32_t v_y2_22456 = v_y;
pls::cs::run_finally([&]() {{
if ((([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(v_opt); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
if (((([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { std::int32_t cs_arg0 = v_id; std::int32_t cs_arg1 = v_value; return cs_c09effaa5a5594b5(cs_arg0,cs_arg1); }())) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1ed6a55cc3c2bbc8(cs_receiver); }()))))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::Array<std::int32_t> cs_arg1 = ([&](){auto cs_initial_array_592=pls::cs::Array<std::int32_t>::make(5);cs_initial_array_592.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_592.at(1)=([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_initial_array_592.at(2)=([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_initial_array_592.at(3)=v_w;cs_initial_array_592.at(4)=v_h;return cs_initial_array_592;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0866ebf8137ed363(cs_receiver,cs_arg0,cs_arg1); }());
}
std::int32_t v_color_22753 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetColor(); }());
std::int32_t v_colorOfRGB_22784 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xefull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9aull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }());
if ((([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ((([&]() -> bool { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }())); return (cs_left != cs_right); }()))))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_colorOfRGB_22784; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
std::int32_t v_num16_22966 = pls::cs::conv_i32((([&]() -> double { auto cs_left = pls::game::cs_f64(0x4058000000000000ull); auto cs_right = ([&]() -> double { double cs_arg0 = ([&]() -> double { double cs_arg0 = static_cast<double>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8b0f3ef39ceeed6; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2dull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); return pls::generated::cs_562cc36bcf840cbd(cs_arg0); }()); return pls::generated::cs_458102b5e16b47b0(cs_arg0); }()); return (cs_left * cs_right); }())));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = v_num16_22966; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = v_num16_22966; return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num14_22266; return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num15_22284; return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); float cs_arg3 = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = static_cast<float>(v_w); float cs_arg3 = static_cast<float>(v_h); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(); }());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_colorOfRGB_22784; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
std::int32_t v_num17_23384 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8b0f3ef39ceeed6; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mod_i32(cs_left,cs_right); }());
std::int32_t v_num18_23423 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = v_num17_23384; return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num19_23452 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_num17_23384; return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num20_23481 = ([&]() -> std::int32_t { auto cs_left = v_w; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num17_23384; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num21_23514 = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num17_23384; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_num18_23423); float cs_arg1 = static_cast<float>(v_num19_23452); float cs_arg2 = static_cast<float>(v_num20_23481); float cs_arg3 = static_cast<float>(v_num21_23514); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
if ((([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x800ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_id; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
if ((([&]() { auto cs_left = pls::cs::box(v_opt); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num14_22266; return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num15_22284; return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); float cs_arg3 = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = static_cast<float>(v_w); float cs_arg3 = static_cast<float>(v_h); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopRenderMode(); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color_22753; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
}
if ((!(([&]() -> bool { auto cs_receiver = std::static_pointer_cast<cs_9326c27a92cfea3a>(cs_this); return cs_9e885a578815ee7e(static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_receiver)); }())))) {
throw pls::cs::ReturnFlow<pls::cs::Ref<cs_3a3d09f9e75a32d2>>{pls::cs::Ref<cs_3a3d09f9e75a32d2>{}};
}
pls::cs::Array<std::int32_t> v_array2_24058 = ([&]() { auto cs_array = cs_8c8385709855299d(); auto cs_index = v_id; return cs_array.get_Item(cs_index); }());
if ((([&]() { auto cs_left = pls::cs::box(v_opt); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_907bdb29f23c20f6; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }()))) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_907bdb29f23c20f6; }()); v_array2_24058 = cs_value; return cs_value; }());
}
std::int32_t v_num22_24173 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_array2_24058; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num23_24204 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = v_w; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_array2_24058; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num24_24239 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_array2_24058; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num25_24270 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_h; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_array2_24058; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());
switch (v_id) {
case 8:
{
if (([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetCurrentForm(); }())); auto cs_right = pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }())); return cs_left != cs_right; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = v_w; return pls::cs::add_i32(cs_left,cs_right); }()); v_num23_24204 = cs_value; return cs_value; }());
}
break;
}
case 9:
{
if (([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_19ca6d3dec6d9bd3(cs_receiver,cs_arg0); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = v_x; v_num22_24173 = cs_value; return cs_value; }());
}
break;
}
case 13:
{
{
std::int32_t v_componentLength_24558 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_159596982eb74639(cs_receiver); }());
for (std::int32_t v_i_24612 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_24612; auto cs_right = v_componentLength_24558; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_24612; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_24612 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_24673 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_i_24612; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left != cs_right); }()))) {
continue;
}
{
std::int32_t v_num26_24779 = ([&]() -> std::int32_t { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }());
if ((([&]() -> bool { auto cs_left = v_num26_24779; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num22_24173; std::int32_t cs_arg1 = v_num24_24239; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num23_24204; auto cs_right = v_num22_24173; return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num25_24270; auto cs_right = v_num24_24239; return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); std::int32_t cs_arg5 = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); std::int32_t cs_arg6 = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); std::int32_t cs_arg7 = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_70aeac563b84bccd(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_right = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num24_24239 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = v_num26_24779; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num22_24173; std::int32_t cs_arg1 = v_num24_24239; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num23_24204; auto cs_right = v_num22_24173; return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num25_24270; auto cs_right = v_num24_24239; return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); std::int32_t cs_arg5 = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); std::int32_t cs_arg6 = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); std::int32_t cs_arg7 = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_70aeac563b84bccd(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }()))) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = v_component_24673; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); v_num25_24270 = cs_value; return cs_value; }());
}
}
}
break;
}
}
case 12:
case 14:
case 15:
case 22:
{
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_id; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1941f0d8c1b7225c(cs_receiver,cs_arg0,cs_arg1); }())) {
if (([&]() { auto cs_left = pls::cs::box(v_opt); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_8d483d962b875686(); }()); v_opt = cs_value; return cs_value; }());
}
([&]() { auto cs_target = v_opt; auto cs_old = pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = (cs_old | cs_rhs); pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_old = v_num24_24239; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num24_24239 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num25_24270; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num25_24270 = cs_value; return cs_value; }());
}
break;
}
case 19:
{
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_id; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1941f0d8c1b7225c(cs_receiver,cs_arg0,cs_arg1); }())) {
([&]() { auto cs_target = v_opt; auto cs_old = pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = (cs_old | cs_rhs); pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num22_24173 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num24_24239 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); v_num23_24204 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); v_num25_24270 = cs_value; return cs_value; }());
}
break;
}
case 11:
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b8ce53667520b9b8; }())) {
([&]() { auto cs_old = v_num23_24204; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num23_24204 = cs_value; return cs_value; }());
}
break;
}
}
if (([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {

}
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_8c8385709855299d(); auto cs_index = v_id; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) && ((([&]() { auto cs_left = pls::cs::box(v_opt); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))))) {
float v_num27_25914 = (((([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }()) : ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }())));
std::int32_t v_num28_25979 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = v_num27_25914; return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
std::int32_t v_num29_26046 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = v_num27_25914; return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
if (([&]() -> bool { auto cs_left = v_num22_24173; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num22_24173 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num24_24239; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num24_24239 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num23_24204; auto cs_right = v_num28_25979; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_num28_25979; v_num23_24204 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num25_24270; auto cs_right = v_num29_26046; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_num29_26046; v_num25_24270 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_value = v_num22_24173; v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num24_24239; v_y = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num23_24204; auto cs_right = v_num22_24173; return pls::cs::sub_i32(cs_left,cs_right); }()); v_w = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num25_24270; auto cs_right = v_num24_24239; return pls::cs::sub_i32(cs_left,cs_right); }()); v_h = cs_value; return cs_value; }());
if ((([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left != cs_right); }()))) {
double v_num30_26479 = ([&]() -> double { auto cs_left = static_cast<double>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }())); auto cs_right = static_cast<double>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }())); return (cs_left / cs_right); }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num14_22266; auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = v_num14_22266; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = v_num30_26479; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }()); v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num15_22284; auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_num15_22284; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = v_num30_26479; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }()); v_y = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(v_w); auto cs_right = v_num30_26479; return (cs_left * cs_right); }()))); v_w = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(v_h); auto cs_right = v_num30_26479; return (cs_left * cs_right); }()))); v_h = cs_value; return cs_value; }());
}
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent_26736 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_id; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = v_w; std::int32_t cs_arg4 = v_h; std::int32_t cs_arg5 = v_value; pls::cs::Ref<cs_6517d63c01870958> cs_arg6 = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_30e0326b36c8f3ca(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent_26736); std::int32_t cs_arg0 = v_x2_22441; std::int32_t cs_arg1 = v_y2_22456; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_82cc310ddbc4a2ea(cs_receiver,cs_arg0,cs_arg1); }());
std::int32_t v_num31_26845 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_8c8385709855299d(); auto cs_index = v_id; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_num31_26845; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_id; return pls::cs::shl_i32(cs_left,cs_right); }()); auto cs_value = (cs_old | cs_rhs); v_num31_26845 = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(v_opt); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_old = v_num31_26845; auto cs_rhs = ([&]() { auto cs_receiver = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f1365c978e9c4cae; }()); auto cs_value = (cs_old | cs_rhs); v_num31_26845 = cs_value; return cs_value; }());
}
std::int32_t v_componentLength2_26998 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_159596982eb74639(cs_receiver); }());
for (std::int32_t v_j_27052 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_27052; auto cs_right = v_componentLength2_26998; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_27052; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_27052 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component2_27112 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_j_27052; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_component2_27112); auto cs_right = pls::cs::box(v_touchComponent_26736); return cs_left == cs_right; }())) {
continue;
}
std::int32_t v_num32_27220 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_8c8385709855299d(); auto cs_index = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_num32_27220; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); return pls::cs::shl_i32(cs_left,cs_right); }()); auto cs_value = (cs_old | cs_rhs); v_num32_27220 = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_old = v_num32_27220; auto cs_rhs = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f1365c978e9c4cae; }()); auto cs_value = (cs_old | cs_rhs); v_num32_27220 = cs_value; return cs_value; }());
}
if (((([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num32_27220; auto cs_right = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num31_26845; auto cs_right = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())))) {
continue;
}
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent_26736); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c6d10dc3c886403b(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component2_27112); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c6d10dc3c886403b(cs_receiver); }()); return (cs_left != cs_right); }()) || (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); std::int32_t cs_arg3 = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); std::int32_t cs_arg4 = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); std::int32_t cs_arg5 = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); std::int32_t cs_arg6 = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); std::int32_t cs_arg7 = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_70aeac563b84bccd(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }()))))) {
continue;
}
std::int32_t v_num33_27776 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_right = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_right = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_right = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num33_27776 = cs_value; return cs_value; }());
}
std::int32_t v_num34_27975 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_right = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_right = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_right = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num34_27975 = cs_value; return cs_value; }());
}
bool v_flag2_28177 = ([&]() -> bool { auto cs_left = v_num33_27776; auto cs_right = v_num34_27975; return (cs_left < cs_right); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_right = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); auto cs_right = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = false; v_flag2_28177 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_right = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent_26736; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); auto cs_right = ([&]() { auto cs_receiver = v_component2_27112; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = true; v_flag2_28177 = cs_value; return cs_value; }());
}
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent2_28465 = v_touchComponent_26736;
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent3_28519 = v_component2_27112;
if (v_flag2_28177) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent3_28519; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_right = ([&]() { auto cs_receiver = v_touchComponent2_28465; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_component2_27112; v_touchComponent2_28465 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_touchComponent_26736; v_touchComponent3_28519 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = v_touchComponent2_28465; auto cs_old = pls::game::cs_require(cs_target)->cs_0dcfa10d1674b264; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_num33_27776; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0dcfa10d1674b264 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num33_27776; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_num33_27776; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num33_27776 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent3_28519; auto cs_old = pls::game::cs_require(cs_target)->cs_830652d422733c85; auto cs_rhs = v_num33_27776; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_830652d422733c85 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent3_28519; auto cs_old = pls::game::cs_require(cs_target)->cs_0dcfa10d1674b264; auto cs_rhs = v_num33_27776; auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0dcfa10d1674b264 = cs_value; return cs_value; }());
} else {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent3_28519; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_right = ([&]() { auto cs_receiver = v_touchComponent2_28465; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_component2_27112; v_touchComponent2_28465 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_touchComponent_26736; v_touchComponent3_28519 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = v_touchComponent2_28465; auto cs_old = pls::game::cs_require(cs_target)->cs_2445e8abe98d39d6; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_num34_27975; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_2445e8abe98d39d6 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num34_27975; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_num34_27975; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num34_27975 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent3_28519; auto cs_old = pls::game::cs_require(cs_target)->cs_1ec368037b30316d; auto cs_rhs = v_num34_27975; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_1ec368037b30316d = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent3_28519; auto cs_old = pls::game::cs_require(cs_target)->cs_2445e8abe98d39d6; auto cs_rhs = v_num34_27975; auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_2445e8abe98d39d6 = cs_value; return cs_value; }());
}
}
throw pls::cs::ReturnFlow<pls::cs::Ref<cs_3a3d09f9e75a32d2>>{v_touchComponent_26736};
}}, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_num14_22266; std::int32_t cs_arg1 = v_num15_22284; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
}
});
}catch(const pls::cs::ReturnFlow<pls::cs::Ref<cs_3a3d09f9e75a32d2>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Ref<cs_3a3d09f9e75a32d2>>();}
}
}
// M:surface.GameView.#ctor
pls::cs::Ref<cs_e315dac1df3b175d> cs_99d89125e258aca0() { cs_init_e315dac1df3b175d();
{ auto cs_this = pls::cs::make_ref<cs_e315dac1df3b175d>(); cs_99d89125e258aca0_init(cs_this); return cs_this; }
}
void cs_99d89125e258aca0_init(pls::cs::Ref<cs_e315dac1df3b175d> cs_this) {
cs_this->cs_ac0dd82664682ea8 = ([&]() -> pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Array<std::int32_t>>> { return pls::generated::cs_946b70ecd88b233a<pls::cs::Array<std::int32_t>>(); }());
cs_this->cs_fb778efa514fe1a4 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));
([&]() { cs_a1b466bc14363691_init(std::static_pointer_cast<cs_9326c27a92cfea3a>(cs_this)); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }()); pls::game::cs_require(cs_target)->cs_dce74b5b9a4c3556 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }()); pls::game::cs_require(cs_target)->cs_57645038112781fd = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_4e9b1f0e9e3baf25> { return cs_81e284f6e842da85(); }()); pls::game::cs_require(cs_target)->cs_4ee8a5d8ed6fb33b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }()); pls::game::cs_require(cs_target)->cs_af72b94facaef62c = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::IApplication> v_currentApp_7491 = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); float cs_arg0 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_7491); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScaleRatio(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8de8ff27e94cbce9(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Font> { return pls::cs::make_ref<pls::kairo::Font>(); }()); pls::game::cs_require(cs_target)->cs_5399805dce0daa84 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_e303336fe5f1c8b9 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_d50a8b4d28d66eeb = cs_value; return cs_value; }());
}
}
// M:surface.GameView.AddDelayPaintBuffer(kairo.unity.ui.Graphics,System.Int32[])
void cs_0866ebf8137ed363(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Array<std::int32_t> v_paint) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_48035 = pls::cs::Array<std::int32_t>::make(([&]() -> std::int32_t { auto cs_left = (v_paint).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()));
([&]() -> void { auto cs_arg0 = pls::cs::array_cast(pls::cs::box(v_paint)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::array_cast(pls::cs::box(v_array_48035)); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = (v_paint).length(); pls::cs::array_copy(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() { auto cs_target = v_array_48035; auto cs_index = ([&]() -> std::int32_t { auto cs_left = (v_array_48035).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left * cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Array<std::int32_t>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac0dd82664682ea8; }())); pls::cs::Array<std::int32_t> cs_arg0 = v_array_48035; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
}
}
// M:surface.GameView.AddEffect(System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchComponent)
pls::cs::Ref<cs_9b21b86f0d2914e0> cs_94ba728de1847ec7(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_imgId,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = v_imgId; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
{
pls::cs::Ref<cs_9b21b86f0d2914e0> v_recoveredReturn_49580_46858 = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ee8a5d8ed6fb33b; }())); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = cs_this; std::int32_t cs_arg1 = v_id; float cs_arg2 = static_cast<float>(v_x); float cs_arg3 = static_cast<float>(v_y); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_c; pls::cs::Ref<pls::cs::Object> cs_arg5 = pls::cs::Ref<pls::cs::Object>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2be5d3359f23ac72(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
return v_recoveredReturn_49580_46858;
}
}
pls::cs::Array<std::int32_t> v_array_46972 = ([&]() { auto cs_array = cs_16bdb21bbc3ccb66(); auto cs_index = v_imgId; return cs_array.get_Item(cs_index); }());
pls::cs::Ref<pls::kairo::Image> v_image_47006 = ([&]() { auto cs_array = cs_458e967c446c2f02(); auto cs_index = ([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
float v_num_47042 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_47006); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }())); auto cs_right = static_cast<float>(([&]() { auto cs_array = cs_f1088522c1cb7c9e(); auto cs_index = ([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }())); return (cs_left / cs_right); }());
float v_num2_47113 = pls::game::cs_f32(0x3f400000u);
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_arg_47139 = ([&](){auto cs_initial_array_789=pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::make(2);cs_initial_array_789.at(0)=pls::cs::box(([&]() { auto cs_array = cs_458e967c446c2f02(); auto cs_index = ([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()));cs_initial_array_789.at(1)=pls::cs::box(([&](){auto cs_initial_array_790=pls::cs::Array<float>::make(6);cs_initial_array_790.at(0)=([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num2_47113; return (cs_left * cs_right); }());cs_initial_array_790.at(1)=([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num2_47113; return (cs_left * cs_right); }());cs_initial_array_790.at(2)=([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_47042; return (cs_left * cs_right); }());cs_initial_array_790.at(3)=([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_47042; return (cs_left * cs_right); }());cs_initial_array_790.at(4)=([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_47042; return (cs_left * cs_right); }());cs_initial_array_790.at(5)=([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_47042; return (cs_left * cs_right); }());return cs_initial_array_790;}()));return cs_initial_array_789;}());
{
pls::cs::Ref<cs_9b21b86f0d2914e0> v_recoveredReturn_50165_47424 = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ee8a5d8ed6fb33b; }())); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = cs_this; std::int32_t cs_arg1 = v_id; float cs_arg2 = ([&]() -> float { auto cs_left = static_cast<float>(v_x); auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num2_47113; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); float cs_arg3 = ([&]() -> float { auto cs_left = static_cast<float>(v_y); auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num2_47113; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_c; pls::cs::Ref<pls::cs::Object> cs_arg5 = pls::cs::box(v_arg_47139); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2be5d3359f23ac72(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
return v_recoveredReturn_50165_47424;
}
}
}
}
// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_46657db897a1c20f(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,pls::cs::Ref<pls::kairo::Image> v_img,std::int32_t v_x,std::int32_t v_y,std::int32_t v_u,std::int32_t v_v,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value,pls::cs::Ref<cs_6517d63c01870958> v_opt) { cs_init_e315dac1df3b175d();
{
std::int32_t v_savedX_16079 = v_x;
std::int32_t v_savedY_16095 = v_y;
std::int32_t v_savedWidth_16111 = v_w;
std::int32_t v_savedHeight_16131 = v_h;
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = v_img; float cs_arg1 = static_cast<float>(v_x); float cs_arg2 = static_cast<float>(v_y); std::int32_t cs_arg3 = v_u; std::int32_t cs_arg4 = v_v; std::int32_t cs_arg5 = v_w; std::int32_t cs_arg6 = v_h; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent_16202 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_e41b3ae7bfae5fb1()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = v_savedX_16079; std::int32_t cs_arg3 = v_savedY_16095; std::int32_t cs_arg4 = v_savedWidth_16111; std::int32_t cs_arg5 = v_savedHeight_16131; std::int32_t cs_arg6 = v_value; pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63f4ac17c3a51a13(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
if (([&]() { auto cs_left = pls::cs::box(v_touchComponent_16202); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::Ref<cs_3a3d09f9e75a32d2>{};
}
if (([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent_16202); std::int32_t cs_arg0 = v_x; std::int32_t cs_arg1 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_82cc310ddbc4a2ea(cs_receiver,cs_arg0,cs_arg1); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent_16202); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }()); auto cs_right = v_x; return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }()); auto cs_right = v_y; return pls::cs::add_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_82cc310ddbc4a2ea(cs_receiver,cs_arg0,cs_arg1); }());
}
return v_touchComponent_16202;
}
}
// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_5c6ce742d887c401(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,pls::cs::Ref<pls::kairo::Image> v_img,std::int32_t v_x,std::int32_t v_y,std::int32_t v_u,std::int32_t v_v,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_id; pls::cs::Ref<pls::kairo::Image> cs_arg2 = v_img; std::int32_t cs_arg3 = v_x; std::int32_t cs_arg4 = v_y; std::int32_t cs_arg5 = v_u; std::int32_t cs_arg6 = v_v; std::int32_t cs_arg7 = v_w; std::int32_t cs_arg8 = v_h; std::int32_t cs_arg9 = v_value; return cs_5c6ce742d887c401(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_5249190fd61436f9(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,pls::cs::Ref<pls::kairo::Image> v_img,std::int32_t v_x,std::int32_t v_y,std::int32_t v_u,std::int32_t v_v,std::int32_t v_w,std::int32_t v_h) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_id; pls::cs::Ref<pls::kairo::Image> cs_arg2 = v_img; std::int32_t cs_arg3 = v_x; std::int32_t cs_arg4 = v_y; std::int32_t cs_arg5 = v_u; std::int32_t cs_arg6 = v_v; std::int32_t cs_arg7 = v_w; std::int32_t cs_arg8 = v_h; std::int32_t cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_5c6ce742d887c401(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32,System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_954e4192ea11d297(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,std::int32_t v_frame,std::int32_t v_value,pls::cs::Ref<cs_6517d63c01870958> v_opt) { cs_init_e315dac1df3b175d();
{
pls::cs::Array<std::int16_t> v_boundingRect_17005 = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(v_seb); std::int32_t cs_arg0 = v_frame; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e8833b0a463d9a55(cs_receiver,cs_arg0); }());
std::int32_t v_num_17055 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect_17005; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num2_17089 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect_17005; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num3_17124 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect_17005; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()));
std::int32_t v_num4_17155 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect_17005; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()));
if (([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
switch (v_id) {
case 1:
case 18:
case 26:
{
{
std::int32_t v_num5_17251 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
std::int32_t v_num6_17271 = ((((([&]() -> bool { auto cs_left = v_frame; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_frame; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull))));
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_e41b3ae7bfae5fb1()); std::int32_t cs_arg0 = v_id; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_frame; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_frame; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)))); v_num5_17251 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_frame; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_frame; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)))); v_num5_17251 = cs_value; return cs_value; }());
}
pls::cs::Array<float> v_imageRect_17437 = ([&]() -> pls::cs::Array<float> { std::int32_t cs_arg0 = v_num5_17251; return cs_592f5eb6ecedf86f(cs_arg0); }());
([&]() { auto cs_old = v_x; auto cs_rhs = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect_17005; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect_17005; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()))); auto cs_right = (([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_imageRect_17437; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_imageRect_17437; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left + cs_right); }())); return (cs_left - cs_right); }()))); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_x = cs_value; return cs_value; }());
([&]() { auto cs_old = v_y; auto cs_rhs = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect_17005; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_boundingRect_17005; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()))); auto cs_right = (([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_imageRect_17437; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_imageRect_17437; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left + cs_right); }())); return (cs_left - cs_right); }()))); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_y = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>(v_x); auto cs_right = ([&]() { auto cs_array = v_imageRect_17437; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return (cs_left + cs_right); }()))); v_num_17055 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>(v_y); auto cs_right = ([&]() { auto cs_array = v_imageRect_17437; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left + cs_right); }()))); v_num2_17089 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::conv_i32(([&]() { auto cs_array = v_imageRect_17437; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); v_num3_17124 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::conv_i32(([&]() { auto cs_array = v_imageRect_17437; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); v_num4_17155 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); return (cs_left == cs_right); }())) {
if ((([&]() -> bool { auto cs_left = v_num6_17271; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_old = v_num_17055; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num_17055 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num2_17089; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num2_17089 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num3_17124; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num3_17124 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num4_17155; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num4_17155 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_num6_17271; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_old = v_num_17055; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num_17055 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num2_17089; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num2_17089 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num3_17124; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num3_17124 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num4_17155; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num4_17155 = cs_value; return cs_value; }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_e41b3ae7bfae5fb1()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(v_x); float cs_arg2 = static_cast<float>(v_y); std::int32_t cs_arg3 = v_num5_17251; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fbcbc38ec33df44a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
break;
}
}
}
}
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent_18123 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_e41b3ae7bfae5fb1()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = v_num_17055; std::int32_t cs_arg3 = v_num2_17089; std::int32_t cs_arg4 = v_num3_17124; std::int32_t cs_arg5 = v_num4_17155; std::int32_t cs_arg6 = v_value; pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63f4ac17c3a51a13(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
if (([&]() { auto cs_left = pls::cs::box(v_touchComponent_18123); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::Ref<cs_3a3d09f9e75a32d2>{};
}
if (([&]() { auto cs_left = pls::cs::box(v_g); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent_18123); std::int32_t cs_arg0 = v_x; std::int32_t cs_arg1 = v_y; std::int32_t cs_arg2 = v_frame; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3b828f63c1e0892e(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent_18123); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }()); auto cs_right = v_x; return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }()); auto cs_right = v_y; return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = v_frame; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3b828f63c1e0892e(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
return v_touchComponent_18123;
}
}
// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32,System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_172796b34f9ae01c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,std::int32_t v_frame,std::int32_t v_value) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = v_x; std::int32_t cs_arg3 = v_y; pls::cs::Ref<cs_9cade6927d6e0bf3> cs_arg4 = v_seb; std::int32_t cs_arg5 = v_frame; std::int32_t cs_arg6 = v_value; pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = pls::cs::Ref<cs_6517d63c01870958>{}; return cs_954e4192ea11d297(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_65e8c232b743829f(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,std::int32_t v_frame) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = v_x; std::int32_t cs_arg3 = v_y; pls::cs::Ref<cs_9cade6927d6e0bf3> cs_arg4 = v_seb; std::int32_t cs_arg5 = v_frame; std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = pls::cs::Ref<cs_6517d63c01870958>{}; return cs_954e4192ea11d297(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_5a06983504dd1383(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value,pls::cs::Ref<cs_6517d63c01870958> v_opt) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_e41b3ae7bfae5fb1()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = v_x; std::int32_t cs_arg3 = v_y; std::int32_t cs_arg4 = v_w; std::int32_t cs_arg5 = v_h; std::int32_t cs_arg6 = v_value; pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63f4ac17c3a51a13(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_554ec638efacdc2e(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_e41b3ae7bfae5fb1()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = v_x; std::int32_t cs_arg3 = v_y; std::int32_t cs_arg4 = v_w; std::int32_t cs_arg5 = v_h; std::int32_t cs_arg6 = v_value; pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = pls::cs::Ref<cs_6517d63c01870958>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63f4ac17c3a51a13(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_b3faa2d7f2f94a22(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_e41b3ae7bfae5fb1()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = v_x; std::int32_t cs_arg3 = v_y; std::int32_t cs_arg4 = v_w; std::int32_t cs_arg5 = v_h; std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = pls::cs::Ref<cs_6517d63c01870958>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63f4ac17c3a51a13(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
// M:surface.GameView.AddTouch(System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_3e37cd2e53d2515b(std::int32_t v_id,pls::cs::Ref<cs_6517d63c01870958> v_opt) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_e41b3ae7bfae5fb1()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = pls::cs::Ref<pls::kairo::Graphics>{}; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_e41b3ae7bfae5fb1()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_e41b3ae7bfae5fb1()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63f4ac17c3a51a13(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
// M:surface.GameView.AddTouch(System.Int32,System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_a5b39994341dd6d7(std::int32_t v_id,std::int32_t v_value,pls::cs::Ref<cs_6517d63c01870958> v_opt) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_e41b3ae7bfae5fb1()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = pls::cs::Ref<pls::kairo::Graphics>{}; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_e41b3ae7bfae5fb1()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_e41b3ae7bfae5fb1()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); std::int32_t cs_arg6 = v_value; pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = v_opt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63f4ac17c3a51a13(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
// M:surface.GameView.AddTouch(System.Int32,System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_c856c18651a3dbf3(std::int32_t v_id,std::int32_t v_value) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_e41b3ae7bfae5fb1()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = pls::cs::Ref<pls::kairo::Graphics>{}; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_e41b3ae7bfae5fb1()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_e41b3ae7bfae5fb1()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); std::int32_t cs_arg6 = v_value; pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = pls::cs::Ref<cs_6517d63c01870958>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63f4ac17c3a51a13(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
// M:surface.GameView.AddTouch(System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_597d9c661c469083(std::int32_t v_id) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_e41b3ae7bfae5fb1()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = pls::cs::Ref<pls::kairo::Graphics>{}; std::int32_t cs_arg1 = v_id; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_e41b3ae7bfae5fb1()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_e41b3ae7bfae5fb1()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = pls::cs::Ref<cs_6517d63c01870958>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63f4ac17c3a51a13(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
// M:surface.GameView.BeginTouchRegist(kairo.unity.ui.Graphics)
void cs_344a1e1fb645eab7(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(std::static_pointer_cast<cs_9326c27a92cfea3a>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_14c25464911dc345(cs_receiver,cs_arg0); }());
}
}
}
// M:surface.GameView.CheckHitRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
bool cs_70aeac563b84bccd(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_x1,std::int32_t v_y1,std::int32_t v_w1,std::int32_t v_h1,std::int32_t v_x2,std::int32_t v_y2,std::int32_t v_w2,std::int32_t v_h2) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return (((([&]() -> bool { auto cs_left = v_x1; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_x2; auto cs_right = v_w2; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_y1; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_y2; auto cs_right = v_h2; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x1; auto cs_right = v_w1; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_x2; return (cs_left >= cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y1; auto cs_right = v_h1; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_y2; return (cs_left >= cs_right); }()));
}
}
}
// M:surface.GameView.CheckMarker(System.Int32,System.Int32)
bool cs_c09effaa5a5594b5(std::int32_t v_id,std::int32_t v_value) { cs_init_e315dac1df3b175d();
{
if (([&]() { auto cs_left = pls::cs::box(cs_e41b3ae7bfae5fb1()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return false;
}
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_e41b3ae7bfae5fb1(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = ([&]() -> std::int64_t { std::int32_t cs_arg0 = v_id; std::int32_t cs_arg1 = v_value; return cs_e0f91f73482fc418(cs_arg0,cs_arg1); }()); return (cs_left == cs_right); }());
}
}
// M:surface.GameView.CheckMarker(System.Int64)
bool cs_c32bdb6120b025c7(std::int64_t v_key) { cs_init_e315dac1df3b175d();
{
if (([&]() { auto cs_left = pls::cs::box(cs_e41b3ae7bfae5fb1()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return false;
}
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_e41b3ae7bfae5fb1(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = v_key; return (cs_left == cs_right); }());
}
}
// M:surface.GameView.ClearMarker
void cs_dc7bfd9cd45b88ef() { cs_init_e315dac1df3b175d();
{
if (([&]() { auto cs_left = pls::cs::box(cs_e41b3ae7bfae5fb1()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return;
}
{
([&]() { auto cs_target = cs_e41b3ae7bfae5fb1(); auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_e303336fe5f1c8b9 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_e41b3ae7bfae5fb1(); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_d50a8b4d28d66eeb = cs_value; return cs_value; }());
}
}
}
// M:surface.GameView.DoEnd
void cs_c3eb1a825af8d5f9(pls::cs::Ref<cs_e315dac1df3b175d> cs_this) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(std::static_pointer_cast<cs_9326c27a92cfea3a>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f7a60b8dd9e85732(cs_receiver); }());
}
}
}
// M:surface.GameView.Draw(kairo.unity.ui.Graphics)
void cs_7507297efd553097(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Scale(cs_arg0); }());
pls::cs::Ref<pls::kairo::Font> v_font_42344 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Font> cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }());
pls::cs::run_finally([&]() -> void { {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Font> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5399805dce0daa84; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetFont(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Draw(cs_arg0); }());
} }, [&]() {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Font> cs_arg0 = v_font_42344; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetFont(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = pls::game::cs_f32(0x42c80000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Scale(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClearRenderRect(); }());
});
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_efcdbdc401b76399; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_efcdbdc401b76399; auto cs_new = pls::cs::add_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_efcdbdc401b76399 = cs_new; return cs_old; }());
}
if (((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsPause(); }()))) && (!(([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_792a6372766eb19f> { return cs_a066f615d75279e2(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c9226a2495e37810; }()))))) {
if (([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_792a6372766eb19f> { return cs_a066f615d75279e2(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02d52a36c316037d; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }())); float cs_arg1 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }())); auto cs_right = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6ef35e36e4dfee7; }())); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); return (cs_left + cs_right); }()); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg3 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }())); auto cs_right = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6ef35e36e4dfee7; }())); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); return (cs_left + cs_right); }()); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }())); auto cs_right = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_829b7d2daa7d373f; }())); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); return (cs_left + cs_right); }()); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }())); float cs_arg2 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }())); auto cs_right = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_829b7d2daa7d373f; }())); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); return (cs_left + cs_right); }()); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
if (pls::generated::cs_ec57416f7acf6303()) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }())); float cs_arg2 = pls::game::cs_f32(0x41600000u); float cs_arg3 = pls::game::cs_f32(0x41600000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_6485f92c2f04639f>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3dd794f17d9de88a(cs_receiver); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_15bb231c9f59a4d4(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::String v_text_43322 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_42d69496680e17fc>>(([&]() -> pls::cs::Ref<pls::generated::cs_42d69496680e17fc> { return pls::generated::cs_232fa563e68dcabb(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_24d7565dcc25bb03(cs_receiver); }()); return pls::game::cs_integer_string(cs_arg0); }());
std::int32_t v_num_43385 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Font> cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }())); pls::cs::String cs_arg0 = v_text_43322; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num_43385; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg3 = pls::game::cs_f32(0x41600000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text_43322; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
}
// M:surface.GameView.DrawImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void cs_fbcbc38ec33df44a(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_imgId) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_43744 = ([&]() { auto cs_array = cs_16bdb21bbc3ccb66(); auto cs_index = v_imgId; return cs_array.get_Item(cs_index); }());
float v_num_43778 = pls::game::cs_f32(0x3f400000u);
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = v_x; float cs_arg2 = v_y; float cs_arg3 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43744; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_43778; return (cs_left * cs_right); }()); float cs_arg4 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43744; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_43778; return (cs_left * cs_right); }()); std::int32_t cs_arg5 = v_imgId; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
// M:surface.GameView.DrawScaledImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,System.Int32)
void cs_08f39eff8cfbd63c(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,float v_w,float v_h,std::int32_t v_imgId) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_43981 = ([&]() { auto cs_array = cs_16bdb21bbc3ccb66(); auto cs_index = v_imgId; return cs_array.get_Item(cs_index); }());
pls::cs::Ref<pls::kairo::Image> v_image_44015 = ([&]() { auto cs_array = cs_458e967c446c2f02(); auto cs_index = ([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
float v_num_44051 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_44015); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }())); auto cs_right = static_cast<float>(([&]() { auto cs_array = cs_f1088522c1cb7c9e(); auto cs_index = ([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }())); return (cs_left / cs_right); }());
float v_num2_44122 = pls::game::cs_f32(0x3f400000u);
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = v_image_44015; float cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num2_44122; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num2_44122; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); float cs_arg3 = v_w; float cs_arg4 = v_h; std::int32_t cs_arg5 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_44051; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg6 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_44051; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg7 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_44051; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg8 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_44051; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
}
}
}
// M:surface.GameView.DrawVerticalScroll(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)
pls::cs::Array<std::int32_t> cs_031ab111eb4ca5ff(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value,std::int32_t v_maximum,std::int32_t v_largeChange,bool v_touch,std::int32_t v_type) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = v_maximum; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_largeChange; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_largeChange; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_maximum = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_x; auto cs_new = pls::cs::sub_i32(cs_old,1); v_x = cs_new; return cs_old; }());
([&]() { auto cs_old = v_w; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_w = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4eull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = static_cast<float>(v_w); float cs_arg3 = static_cast<float>(v_h); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa8ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5full)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_w; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_w; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = pls::game::cs_f32(0x3f800000u); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = static_cast<float>(v_w); float cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_h; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(v_w); float cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
if (([&]() -> bool { auto cs_left = v_maximum; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_maximum = cs_value; return cs_value; }());
}
std::int32_t v_num_45592 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_value; auto cs_right = v_h; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_maximum; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num2_45636 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_largeChange; auto cs_right = v_h; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_maximum; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::div_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_45592; auto cs_right = v_num2_45636; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_h; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = v_num_45592; return pls::cs::sub_i32(cs_left,cs_right); }()); v_num2_45636 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num2_45636; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return pls::cs::Array<std::int32_t>{};
}
std::int32_t v_color_45785 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_color2_45803 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
if (v_touch) {
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf6ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x81ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color_45785 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf6ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x81ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color2_45803 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color_45785 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color2_45803 = cs_value; return cs_value; }());
}
} else if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
if (v_touch) {
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x82ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color_45785 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x82ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color2_45803 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf3ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd2ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x72ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color_45785 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color2_45803 = cs_value; return cs_value; }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color_45785; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_num_45592); float cs_arg2 = static_cast<float>(v_w); float cs_arg3 = static_cast<float>(v_num2_45636); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color2_45803; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_num_45592); float cs_arg2 = pls::game::cs_f32(0x3f800000u); float cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = v_w; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(v_num_45592); float cs_arg2 = pls::game::cs_f32(0x3f800000u); float cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_45592; auto cs_right = v_num2_45636; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = pls::game::cs_f32(0x3f800000u); float cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = v_w; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_45592; auto cs_right = v_num2_45636; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = pls::game::cs_f32(0x3f800000u); float cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb778efa514fe1a4; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_num_45592;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb778efa514fe1a4; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_num2_45636;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb778efa514fe1a4; }());
}
}
}
// M:surface.GameView.EndTouchRegist(kairo.unity.ui.Graphics)
void cs_c536f61eec0faa4d(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent_8618 = pls::cs::Ref<cs_3a3d09f9e75a32d2>{};
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent2_8659 = pls::cs::Ref<cs_3a3d09f9e75a32d2>{};
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent3_8701 = pls::cs::Ref<cs_3a3d09f9e75a32d2>{};
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent4_8743 = pls::cs::Ref<cs_3a3d09f9e75a32d2>{};
std::int32_t v_componentLength_8774 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_159596982eb74639(cs_receiver); }());
for (std::int32_t v_i_8826 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_8826; auto cs_right = v_componentLength_8774; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_8826; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_8826 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_8883 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_i_8826; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_8883; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_8883; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = v_component_8883; v_touchComponent3_8701 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_8883; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return (cs_left == cs_right); }())) {
std::int32_t v_num_9056 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_component_8883; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()));
if ((([&]() { auto cs_left = pls::cs::box(v_touchComponent_8618); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_touchComponent_8618; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_9056; return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = v_component_8883; v_touchComponent_8618 = cs_value; return cs_value; }());
}
if ((([&]() { auto cs_left = pls::cs::box(v_touchComponent2_8659); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_touchComponent2_8659; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_9056; return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = v_component_8883; v_touchComponent2_8659 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_8883); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_value = v_component_8883; v_touchComponent4_8743 = cs_value; return cs_value; }());
}
}
pls::cs::List<pls::cs::Ref<cs_3a3d09f9e75a32d2>> v_list_9468 = pls::cs::List<pls::cs::Ref<cs_3a3d09f9e75a32d2>>::make();
pls::cs::List<pls::cs::Ref<cs_3a3d09f9e75a32d2>> v_list2_9527 = pls::cs::List<pls::cs::Ref<cs_3a3d09f9e75a32d2>>::make();
for (std::int32_t v_j_9575 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_9575; auto cs_right = v_componentLength_8774; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_9575; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_9575 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component2_9632 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_j_9575; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component2_9632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return (cs_left == cs_right); }())) {
if ((([&]() { auto cs_left = pls::cs::box(v_touchComponent_8618); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent_8618; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_right = ([&]() { auto cs_receiver = v_component2_9632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = v_list_9468; auto cs_arg0 = v_component2_9632; cs_receiver.Add(cs_arg0); }());
}
if ((([&]() { auto cs_left = pls::cs::box(v_touchComponent2_8659); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent2_8659; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_right = ([&]() { auto cs_receiver = v_touchComponent2_8659; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_component2_9632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_right = ([&]() { auto cs_receiver = v_component2_9632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = v_list2_9527; auto cs_arg0 = v_component2_9632; cs_receiver.Add(cs_arg0); }());
}
}
}
for (std::int32_t v_k_9990 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_9990; auto cs_right = (v_list_9468).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_9990; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_9990 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = v_list_9468; auto cs_index = v_k_9990; return cs_array.get_Item(cs_index); }()); auto cs_old = pls::game::cs_require(cs_target)->cs_1ec368037b30316d; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_1ec368037b30316d = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_array = v_list_9468; auto cs_index = v_k_9990; return cs_array.get_Item(cs_index); }()); auto cs_old = pls::game::cs_require(cs_target)->cs_2445e8abe98d39d6; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_2445e8abe98d39d6 = cs_value; return cs_value; }());
}
for (std::int32_t v_l_10087 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_10087; auto cs_right = (v_list2_9527).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_10087; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_10087 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = v_list2_9527; auto cs_index = v_l_10087; return cs_array.get_Item(cs_index); }()); auto cs_old = pls::game::cs_require(cs_target)->cs_2445e8abe98d39d6; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_2445e8abe98d39d6 = cs_value; return cs_value; }());
}
std::int32_t v_num2_10160 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull));
std::int32_t v_num3_10188 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffff80000000ull));
for (std::int32_t v_m_10221 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_10221; auto cs_right = (v_list_9468).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_10221; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_10221 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list_9468; auto cs_index = v_m_10221; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_right = v_num2_10160; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list_9468; auto cs_index = v_m_10221; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); v_num2_10160 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list_9468; auto cs_index = v_m_10221; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_right = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list_9468; auto cs_index = v_m_10221; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num3_10188; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list_9468; auto cs_index = v_m_10221; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_right = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list_9468; auto cs_index = v_m_10221; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num3_10188 = cs_value; return cs_value; }());
}
}
for (std::int32_t v_n_10425 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_n_10425; auto cs_right = (v_list2_9527).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_10425; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_10425 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list2_9527; auto cs_index = v_n_10425; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_right = v_num2_10160; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list2_9527; auto cs_index = v_n_10425; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); v_num2_10160 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list2_9527; auto cs_index = v_n_10425; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_right = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list2_9527; auto cs_index = v_n_10425; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num3_10188; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list2_9527; auto cs_index = v_n_10425; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_right = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list2_9527; auto cs_index = v_n_10425; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num3_10188 = cs_value; return cs_value; }());
}
}
if ((([&]() { auto cs_left = pls::cs::box(v_touchComponent_8618); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(v_touchComponent3_8701); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
pls::cs::Array<std::int32_t> v_array_10697 = pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }())).length());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_array_10697); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (v_array_10697).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
bool v_flag_10838 = false;
bool v_flag2_10861 = false;
for (std::int32_t v_num4_10889 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num4_10889; auto cs_right = (v_list_9468).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num4_10889; auto cs_new = pls::cs::add_i32(cs_old,1); v_num4_10889 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list_9468; auto cs_index = v_num4_10889; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = true; v_flag_10838 = cs_value; return cs_value; }());
}
}
for (std::int32_t v_num5_11027 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num5_11027; auto cs_right = (v_list2_9527).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num5_11027; auto cs_new = pls::cs::add_i32(cs_old,1); v_num5_11027 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list2_9527; auto cs_index = v_num5_11027; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = true; v_flag2_10861 = cs_value; return cs_value; }());
}
}
pls::cs::Ref<cs_6517d63c01870958> v_option_11171 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { pls::cs::Array<std::int32_t> cs_arg0 = v_array_10697; return cs_7ff4169f9e726138(cs_arg0); }());
if ((v_flag_10838 || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left | cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }()))) {
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); std::int32_t cs_arg1 = v_num2_10160; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num3_10188; auto cs_right = v_num2_10160; return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() { auto cs_receiver = v_touchComponent_8618; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left | cs_right); }()); pls::cs::Ref<cs_6517d63c01870958> cs_arg6 = v_option_11171; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_30e0326b36c8f3ca(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
if ((v_flag2_10861 || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left | cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }()))) {
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); std::int32_t cs_arg1 = v_num2_10160; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent2_8659; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_right = ([&]() { auto cs_receiver = v_touchComponent2_8659; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num3_10188; auto cs_right = v_num2_10160; return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left | cs_right); }()); pls::cs::Ref<cs_6517d63c01870958> cs_arg6 = v_option_11171; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_30e0326b36c8f3ca(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
if (([&]() { auto cs_left = pls::cs::box(v_touchComponent3_8701); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
std::int32_t v_num6_11634 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num7_11681 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = v_num6_11634; auto cs_right = v_num7_11681; return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); auto cs_old = pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = (cs_old | cs_rhs); pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent3_8701; auto cs_old = pls::game::cs_require(cs_target)->cs_830652d422733c85; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_830652d422733c85 = cs_value; return cs_value; }());
for (std::int32_t v_num8_11831 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num8_11831; auto cs_right = v_componentLength_8774; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num8_11831; auto cs_new = pls::cs::add_i32(cs_old,1); v_num8_11831 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component3_11901 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_num8_11831; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component3_11901; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_component3_11901; auto cs_old = pls::game::cs_require(cs_target)->cs_0dcfa10d1674b264; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0dcfa10d1674b264 = cs_value; return cs_value; }());
}
}
}
}
if (([&]() { auto cs_left = pls::cs::box(v_touchComponent4_8743); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg6 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_93c9e5f80bde9aac(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_30e0326b36c8f3ca(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
std::int32_t v_originX_12171 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }());
std::int32_t v_originY_12204 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }());
float v_scale_12239 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dce74b5b9a4c3556; }())); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScaleRatio(cs_arg0); }()); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); std::int32_t cs_arg1 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dce74b5b9a4c3556; }())); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScaleRatio(cs_arg0); }()); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); auto cs_right = pls::game::cs_f32(0x3f800000u); return (cs_left + cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Scale(cs_arg0); }());
for (std::int32_t v_num9_12455 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num9_12455; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Array<std::int32_t>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac0dd82664682ea8; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num9_12455; auto cs_new = pls::cs::add_i32(cs_old,1); v_num9_12455 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array2_12521 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Array<std::int32_t>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac0dd82664682ea8; }())); std::int32_t cs_arg0 = v_num9_12455; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array2_12521; auto cs_index = ([&]() -> std::int32_t { auto cs_left = (v_array2_12521).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Scale(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
std::int32_t v_num10_12658 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull));
std::int32_t v_num11_12678 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
std::int32_t v_num12_12698 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
std::int32_t v_num13_12718 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));
std::int32_t v_num14_12738 = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num15_12766 = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num16_12794 = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num17_12822 = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); v_num12_12698 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); v_num13_12718 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num14_12738; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num14_12738 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num15_12766; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num15_12766 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num16_12794; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num16_12794 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num17_12822; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num17_12822 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); v_num11_12678 = cs_value; return cs_value; }());
}
std::int32_t v_num18_13030 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d50a8b4d28d66eeb; }()); auto cs_right = v_num11_12678; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num10_12658; return pls::cs::mod_i32(cs_left,cs_right); }());
std::int32_t v_num19_13084 = std::int32_t{};
if ((([&]() -> bool { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); v_num19_13084 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe0ull)); v_num19_13084 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc0ull)); v_num19_13084 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa0ull)); v_num19_13084 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); v_num19_13084 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x60ull)); v_num19_13084 = cs_value; return cs_value; }());
}
std::int32_t v_num20_13321 = ([&]() -> std::int32_t { auto cs_left = v_num14_12738; auto cs_right = v_num12_12698; return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num21_13353 = ([&]() -> std::int32_t { auto cs_left = v_num15_12766; auto cs_right = v_num13_12718; return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num22_13385 = ([&]() -> std::int32_t { auto cs_left = v_num16_12794; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num12_12698; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num23_13421 = ([&]() -> std::int32_t { auto cs_left = v_num17_12822; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num13_12718; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = v_num19_13084; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = v_num19_13084; return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num20_13321; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(v_num21_13353); float cs_arg3 = pls::game::cs_f32(0x40a00000u); float cs_arg4 = static_cast<float>(v_num23_13421); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(v_num20_13321); float cs_arg2 = static_cast<float>(v_num21_13353); float cs_arg3 = static_cast<float>(v_num22_13385); float cs_arg4 = static_cast<float>(v_num23_13421); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num20_13321; auto cs_right = v_num22_13385; return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(v_num21_13353); float cs_arg3 = pls::game::cs_f32(0x40a00000u); float cs_arg4 = static_cast<float>(v_num23_13421); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
if (([&]() -> bool { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num20_13321; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_num18_13030; return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num21_13353; auto cs_right = v_num18_13030; return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = pls::game::cs_f32(0x40a00000u); float cs_arg4 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num23_13421; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num20_13321; auto cs_right = v_num18_13030; return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num21_13353; auto cs_right = v_num18_13030; return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num22_13385; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg4 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num23_13421; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num20_13321; auto cs_right = v_num22_13385; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num18_13030; return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num21_13353; auto cs_right = v_num18_13030; return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = pls::game::cs_f32(0x40a00000u); float cs_arg4 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num23_13421; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d50a8b4d28d66eeb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_d50a8b4d28d66eeb = cs_value; return cs_value; }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Array<std::int32_t>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac0dd82664682ea8; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8b0f3ef39ceeed6; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_c8b0f3ef39ceeed6 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = v_scale_12239; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Scale(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_originX_12171; std::int32_t cs_arg1 = v_originY_12204; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(std::static_pointer_cast<cs_9326c27a92cfea3a>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_77304e19eb4e3af6(cs_receiver,cs_arg0); }());
}
}
}
// M:surface.GameView.Get(kairo.unity.surface.TouchValueAccessor,System.Int32)
std::int32_t cs_88dab825dd82b135(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::TouchValueAccessor> v_va,std::int32_t v_type) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::TouchValueAccessor>>(v_va); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTouchValue(cs_arg0,cs_arg1); }());
}
}
}
// M:surface.GameView.Get(System.Int32)
std::int32_t cs_9626ff1065e26bd4(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::TouchValueAccessor> cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::TouchValueAccessor> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b4097d6d0948217d(cs_receiver); }()); std::int32_t cs_arg1 = v_type; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_88dab825dd82b135(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:surface.GameView.GetImageRect(System.Int32)
pls::cs::Array<float> cs_592f5eb6ecedf86f(std::int32_t v_imgId) { cs_init_e315dac1df3b175d();
{
pls::cs::Array<std::int32_t> v_array_44442 = ([&]() { auto cs_array = cs_16bdb21bbc3ccb66(); auto cs_index = v_imgId; return cs_array.get_Item(cs_index); }());
float v_num_44476 = pls::game::cs_f32(0x3f400000u);
pls::cs::Array<float> v_getImageRect_result_44500 = cs_6fbe9e1ef5a2334d();
([&]() { auto cs_target = v_getImageRect_result_44500; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_44442; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_44476; return (cs_left * cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_getImageRect_result_44500; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_44442; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_44476; return (cs_left * cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_getImageRect_result_44500; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_44442; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_44476; return (cs_left * cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_getImageRect_result_44500; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_44442; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_num_44476; return (cs_left * cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return v_getImageRect_result_44500;
}
}
// M:surface.GameView.GetInstance
pls::cs::Ref<cs_e315dac1df3b175d> cs_f32a8bd00f4461ef() { cs_init_e315dac1df3b175d();
{
if (([&]() { auto cs_left = pls::cs::box(cs_e41b3ae7bfae5fb1()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_e315dac1df3b175d> { return cs_99d89125e258aca0(); }()); cs_e41b3ae7bfae5fb1() = cs_value; return cs_value; }());
}
return cs_e41b3ae7bfae5fb1();
}
}
// M:surface.GameView.GetKey(kairo.unity.surface.TouchComponent,System.Int32)
std::int32_t cs_c545d9fff10e97de(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c,std::int32_t v_defaultKey) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be9171376316f3b; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be9171376316f3b; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be9171376316f3b; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
}
return v_defaultKey;
}
}
}
// M:surface.GameView.GetSideSoftWidth
std::int32_t cs_ccbbf4a776947d7c(pls::cs::Ref<cs_e315dac1df3b175d> cs_this) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_792a6372766eb19f> v_instance_8167 = ([&]() -> pls::cs::Ref<cs_792a6372766eb19f> { return cs_a066f615d75279e2(); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(v_instance_8167); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0378d82734b4deab(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
std::int32_t v_sideSize_8246 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(v_instance_8167); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5e393384aa7d2051(cs_receiver); }());
return pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(v_sideSize_8246); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_8167); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
}
}
// M:surface.GameView.GetTouchValueAccessor
pls::cs::Ref<pls::kairo::TouchValueAccessor> cs_b4097d6d0948217d(pls::cs::Ref<cs_e315dac1df3b175d> cs_this) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }());
}
}
}
// M:surface.GameView.IsGameSurface
bool cs_6da64ef97e763094(pls::cs::Ref<cs_e315dac1df3b175d> cs_this) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return true;
}
}
}
// M:surface.GameView.Join(System.Int32,System.Int32)
std::int32_t cs_b22c74454e7f3a62(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int16_t v_high_31203 = pls::cs::cast_integral<std::int16_t>(v_type);
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffff8000ull)); return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffull)); auto cs_right = v_type; return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int16_t>((([&]() -> std::int32_t { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shr_i32(cs_left,cs_right); }()))); v_high_31203 = cs_value; return cs_value; }());
}
return ([&]() -> std::int32_t { std::int16_t cs_arg0 = v_high_31203; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(v_v); return pls::generated::cs_959570d45f7028be(cs_arg0,cs_arg1); }());
}
}
}
// M:surface.GameView.Load(kairo.unity.util.JarInflater)
void cs_e464c93271d834fa(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar) { cs_init_e315dac1df3b175d();
{
try {
([&]() { auto cs_value = pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>::make((cs_23fdb96e8da503d4()).length()); cs_458e967c446c2f02() = cs_value; return cs_value; }());
for (std::int32_t v_i_7784 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7784; auto cs_right = (cs_458e967c446c2f02()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7784; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7784 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar); pls::cs::String cs_arg0 = ([&]() { auto cs_array = cs_23fdb96e8da503d4(); auto cs_index = v_i_7784; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_95ade8baca7a8831(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_458e967c446c2f02(); auto cs_index = v_i_7784; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Image> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar); pls::cs::String cs_arg0 = ([&]() { auto cs_array = cs_23fdb96e8da503d4(); auto cs_index = v_i_7784; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); auto cs_arg1 = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); auto cs_arg2 = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return pls::kairo::Image::Load(cs_arg0,cs_arg1,cs_arg2); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
} catch(const pls::cs::Exception& cs_caught_197) {auto cs_exception_197=pls::cs::capture_exception(cs_caught_197);
if(pls::cs::exception_is(cs_exception_197,"System.Exception")) {{

}}
else {throw;} }
}
}
// M:surface.GameView.OnKeyDown(System.Int32)
void cs_c6107d3d2273b65c(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_key) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { cs_dc7bfd9cd45b88ef(); }());
}
}
}
// M:surface.GameView.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)
void cs_c5c9b2d6ef53a83f(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::MotionEvent> v_evt) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(std::static_pointer_cast<cs_9326c27a92cfea3a>(cs_this)); pls::cs::Ref<pls::kairo::MotionEvent> cs_arg0 = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f10884576b82823a(cs_receiver,cs_arg0); }());
}
}
}
// M:surface.GameView.OnTouchCamera(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_4829fca470a89cdf(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:surface.GameView.OnTouchDlgCmd(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_9e7500152d9a882a(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
switch (v_type) {
case 1:
case 2:
{
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
break;
}
}
}
}
}
}
// M:surface.GameView.OnTouchDlgPage(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_05183bde71e91f92(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_33406 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect_33446 = pls::cs::Ref<cs_9b21b86f0d2914e0>{};
switch (v_type) {
case 0:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyDown(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_33446 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_33446; auto cs_value = pls::game::cs_f32(0xc1200000u); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_33446 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_33446; auto cs_value = pls::game::cs_f32(0x41200000u); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_33446 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_33446; auto cs_value = pls::game::cs_f32(0xc1200000u); pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x13ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_33446 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_33446; auto cs_value = pls::game::cs_f32(0x41200000u); pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889 = cs_value; return cs_value; }());
}
break;
}
case 6:
case 10:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyUp(cs_arg0); }());
break;
}
}
}
}
}
// M:surface.GameView.OnTouchDlgPage2(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_7df5722f15d9103a(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_34283 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect_34323 = pls::cs::Ref<cs_9b21b86f0d2914e0>{};
switch (v_type) {
case 5:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_34323 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_34323; auto cs_value = pls::game::cs_f32(0xc1200000u); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_34323 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_34323; auto cs_value = pls::game::cs_f32(0x41200000u); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_34323 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_34323; auto cs_value = pls::game::cs_f32(0xc1200000u); pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x13ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_34323 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_34323; auto cs_value = pls::game::cs_f32(0x41200000u); pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889 = cs_value; return cs_value; }());
}
break;
}
case 1:
case 2:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_34283); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_34283); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_e303336fe5f1c8b9 = cs_value; return cs_value; }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
}
break;
}
case 6:
case 10:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyUp(cs_arg0); }());
break;
}
}
}
}
}
// M:surface.GameView.OnTouchDlgSel(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_d4e5a1e089490a84(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_35638 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
switch (v_type) {
case 1:
case 2:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_35638); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_35638); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_e303336fe5f1c8b9 = cs_value; return cs_value; }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
}
break;
}
}
}
}
}
// M:surface.GameView.OnTouchEvent(kairo.unity.surface.TouchEvent)
void cs_6a8c2fe4a5f21440(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_31516 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
if (pls::game::cs_is<pls::cs::Ref<cs_5451b2154f09f4c5>>(pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }())))) {
pls::cs::Ref<cs_5451b2154f09f4c5> v_myFormBase_31595 = pls::cs::unbox<pls::cs::Ref<cs_5451b2154f09f4c5>>(pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }())));
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(v_myFormBase_31595); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_7a6109cc91f876a5(cs_arg0); }())))) {
return;
}
}
switch (([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }())) {
case 0:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_20a2c295f3df77da(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 1:
case 18:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_05183bde71e91f92(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 26:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7df5722f15d9103a(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 24:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_05183bde71e91f92(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 2:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9e7500152d9a882a(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 3:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d4e5a1e089490a84(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 4:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d234a499a2d0fedd(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 5:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a1a15f07b87846c7(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 6:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ec59059ca1eb3937(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 7:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5c5d7c393357b952(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 8:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_80bc2f474a7661c0(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 9:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_21a10cf0ef11fc34(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 10:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_febe94c212ee7182(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 11:
case 23:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_95948e152b24f51c(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 12:
case 14:
case 15:
case 22:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8097b6631da89434(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 13:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8c7afeb19f0309c4(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 16:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d9b98385147ebb44(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 17:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4829fca470a89cdf(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 19:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_803a8f1cabc10a01(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 20:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d234a499a2d0fedd(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 21:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d234a499a2d0fedd(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 27:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::cs::Ref<cs_757516ce190cf813> cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4460ad3847e3a9c5(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
}
return;
}
}
}
// M:surface.GameView.OnTouchKeyClick(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_d234a499a2d0fedd(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); v_v = cs_value; return cs_value; }());
}
bool v_flag_36082 = ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { std::int32_t cs_arg0 = v_v; return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }());
switch (v_type) {
case 5:
{
if (v_flag_36082) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
}
break;
}
}
}
}
}
// M:surface.GameView.OnTouchKeyDown(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_ec59059ca1eb3937(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); v_v = cs_value; return cs_value; }());
}
bool v_flag_36828 = ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { std::int32_t cs_arg0 = v_v; return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }());
switch (v_type) {
case 0:
{
if (v_flag_36828) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyDown(cs_arg0,cs_arg1); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
}
break;
}
}
}
}
}
// M:surface.GameView.OnTouchKeyPress(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_a1a15f07b87846c7(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); v_v = cs_value; return cs_value; }());
}
bool v_flag_36390 = ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { std::int32_t cs_arg0 = v_v; return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }());
switch (v_type) {
case 0:
{
if (v_flag_36390) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); bool cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyDown(cs_arg0,cs_arg1); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
}
break;
}
case 6:
case 10:
{
if (v_flag_36390) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyUp(cs_arg0); }());
}
break;
}
}
}
}
}
// M:surface.GameView.OnTouchKeyUp(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_5c5d7c393357b952(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); v_v = cs_value; return cs_value; }());
}
bool v_flag_37132 = ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { std::int32_t cs_arg0 = v_v; return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }());
switch (v_type) {
case 1:
{
if (v_flag_37132) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyDown(cs_arg0,cs_arg1); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
}
break;
}
}
}
}
}
// M:surface.GameView.OnTouchList(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_febe94c212ee7182(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_38220 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
switch (v_type) {
case 1:
case 2:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_38220); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_38220); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_e303336fe5f1c8b9 = cs_value; return cs_value; }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
}
break;
}
}
}
}
}
// M:surface.GameView.OnTouchMainMenu(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_80bc2f474a7661c0(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::kairo::FormBase> v_va_37406 = pls::cs::Ref<pls::kairo::FormBase>{};
for (std::int32_t v_i_37429 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_37429; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_37429; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_37429 = cs_new; return cs_old; }())) {
pls::cs::Ref<pls::kairo::FormBase> v_form_37487 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); std::int32_t cs_arg0 = v_i_37429; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }());
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_form_37487); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_a2cea92715051fa5>>(pls::cs::box(v_form_37487))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f99225d8bef89680; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = v_form_37487; v_va_37406 = cs_value; return cs_value; }());
break;
}
}
switch (v_type) {
case 1:
case 2:
{
if (([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_19ca6d3dec6d9bd3(cs_receiver,cs_arg0); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::TouchValueAccessor> cs_arg0 = v_va_37406; std::int32_t cs_arg1 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_88dab825dd82b135(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }())); return (cs_left != cs_right); }())) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::TouchValueAccessor> cs_arg0 = v_va_37406; std::int32_t cs_arg1 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_624bee8cd9f911a1(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
break;
}
}
}
}
}
// M:surface.GameView.OnTouchRect(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_4460ad3847e3a9c5(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
switch (v_type) {
case 1:
case 2:
{
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
break;
}
}
}
}
}
}
// M:surface.GameView.OnTouchScrollList(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_95948e152b24f51c(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_38639 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
switch (v_type) {
case 1:
case 2:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_38639); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_38639); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_e303336fe5f1c8b9 = cs_value; return cs_value; }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
}
break;
}
}
}
}
}
// M:surface.GameView.OnTouchSubMenu(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_21a10cf0ef11fc34(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
switch (v_type) {
case 1:
case 2:
{
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
break;
}
}
}
}
}
}
// M:surface.GameView.OnTouchTitleMenu(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_20a2c295f3df77da(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
switch (v_type) {
case 2:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30000ull)); std::int32_t cs_arg1 = v_v; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 1:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
break;
}
}
}
}
}
// M:surface.GameView.OnTouchTrackBar(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_803a8f1cabc10a01(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
switch (v_type) {
case 0:
{
break;
}
case 9:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c6683c02c87c987a; }()); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
}
}
}
}
// M:surface.GameView.OnTouchUnMarker(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_d9b98385147ebb44(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent_40811 = pls::cs::Ref<cs_757516ce190cf813>{};
switch (v_type) {
case 0:
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_d50a8b4d28d66eeb = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int64_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6fe130a06a1a3f4e(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_touchEvent_40811); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
break;
}
}
([&]() -> void { cs_dc7bfd9cd45b88ef(); }());
break;
}
case 7:
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return (cs_left == cs_right); }())) {
break;
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int64_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6fe130a06a1a3f4e(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_touchEvent_40811); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { cs_dc7bfd9cd45b88ef(); }());
}
break;
}
case 1:
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return (cs_left == cs_right); }())) {
break;
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c01d41baf2e72b63(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_touchEvent_40811); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
break;
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c01d41baf2e72b63(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_touchEvent_40811); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
break;
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c01d41baf2e72b63(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_touchEvent_40811); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
break;
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c01d41baf2e72b63(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_touchEvent_40811); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
break;
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int64_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6fe130a06a1a3f4e(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_touchEvent_40811); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
break;
}
([&]() -> void { cs_dc7bfd9cd45b88ef(); }());
break;
}
}
}
}
}
// M:surface.GameView.OnTouchVScrollBar(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_8097b6631da89434(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_39058 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
pls::cs::Array<std::int32_t> v_args_39092 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }());
std::int32_t v_num_39131 = ([&]() { auto cs_array = v_args_39092; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num2_39153 = ([&]() { auto cs_array = v_args_39092; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num3_39176 = ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_right = (v_args_39092).length(); return (cs_left < cs_right); }())) ? ([&]() { auto cs_array = v_args_39092; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)));
std::int32_t v_num4_39224 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull));
switch (v_type) {
case 8:
{
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_62b3f795cc04ca10; }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num4_39224 = cs_value; return cs_value; }());
break;
}
case 9:
{
([&]() { auto cs_value = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_62b3f795cc04ca10; }()); v_num4_39224 = cs_value; return cs_value; }());
break;
}
}
if (([&]() -> bool { auto cs_left = v_num4_39224; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return (cs_left == cs_right); }())) {
return;
}
if (([&]() -> bool { auto cs_left = v_num4_39224; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_39131; auto cs_right = v_num2_39153; return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num_39131; auto cs_right = v_num2_39153; return pls::cs::sub_i32(cs_left,cs_right); }()); v_num4_39224 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num4_39224; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num4_39224 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = v_num4_39224; return (cs_left != cs_right); }())) {
std::int32_t v_num5_39543 = ([&]() -> std::int32_t { auto cs_left = v_num4_39224; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; std::int32_t cs_arg1 = v_num4_39224; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = v_num3_39176; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
std::int32_t v_num6_39624 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num3_39176; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_39058; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_num6_39624; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_num5_39543; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num6_39624 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num6_39624; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num6_39624 = cs_value; return cs_value; }());
}
} else {
([&]() { auto cs_old = v_num6_39624; auto cs_rhs = v_num5_39543; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num6_39624 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num6_39624; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num6_39624 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num6_39624; auto cs_right = v_num_39131; return (cs_left >= cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num_39131; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num6_39624 = cs_value; return cs_value; }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num3_39176; std::int32_t cs_arg1 = v_num6_39624; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
}
// M:surface.GameView.OnTouchVScrollButton(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_8c7afeb19f0309c4(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_6517d63c01870958> v_option_40008 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }());
std::int32_t v_num_40044 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_40008; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num2_40073 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_40008; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num3_40103 = ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_right = (([&]() { auto cs_receiver = v_option_40008; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }())).length(); return (cs_left < cs_right); }())) ? ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_40008; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)));
if (([&]() -> bool { auto cs_left = v_num3_40103; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return;
}
std::int32_t v_num4_40206 = ([&]() -> std::int32_t { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }());
switch (v_type) {
case 13:
{
if ((([&]() -> bool { auto cs_left = v_num4_40206; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num3_40103; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
if ((([&]() -> bool { auto cs_left = v_num4_40206; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_40044; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num3_40103; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = v_num2_40073; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num2_40073; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
while ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = v_num_40044; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = v_num2_40073; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); std::int32_t cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
break;
}
}
}
}
}
// M:surface.GameView.RotateClear
void cs_aef9ac5f9063f0c9(pls::cs::Ref<cs_e315dac1df3b175d> cs_this) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { cs_dc7bfd9cd45b88ef(); }());
}
}
}
// M:surface.GameView.Set(kairo.unity.surface.TouchValueAccessor,System.Int32,kairo.unity.surface.TouchComponent)
void cs_624bee8cd9f911a1(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::TouchValueAccessor> v_va,std::int32_t v_value,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::TouchValueAccessor> cs_arg0 = v_va; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_value); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { std::int32_t cs_arg0 = v_value; return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg3 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e1d7840856fb3e3a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:surface.GameView.Set(kairo.unity.surface.TouchValueAccessor,System.Int32,System.Int32,kairo.unity.surface.TouchComponent)
void cs_e1d7840856fb3e3a(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::TouchValueAccessor> v_va,std::int32_t v_type,std::int32_t v_value,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::TouchValueAccessor>>(v_va); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetTouchValue(cs_arg0,cs_arg1); }());
}
if (((([&]() { auto cs_left = pls::cs::box(v_c); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58d9bdebab2ca99e; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }()))) {
pls::cs::Array<std::int32_t> v_extendValues_30550 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58d9bdebab2ca99e; }());
for (std::int32_t v_i_30601 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_30601; auto cs_right = (v_extendValues_30550).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_30601; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_30601 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::TouchValueAccessor>>(v_va); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_array = v_extendValues_30550; auto cs_index = v_i_30601; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { std::int32_t cs_arg0 = ([&]() { auto cs_array = v_extendValues_30550; auto cs_index = v_i_30601; return cs_array.get_Item(cs_index); }()); return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetTouchValue(cs_arg0,cs_arg1); }());
}
}
}
}
}
// M:surface.GameView.Set(System.Int32,kairo.unity.surface.TouchComponent)
void cs_7fe16b2e413fed73(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_value,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::TouchValueAccessor> cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::TouchValueAccessor> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b4097d6d0948217d(cs_receiver); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_value); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { std::int32_t cs_arg0 = v_value; return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg3 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e1d7840856fb3e3a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:surface.GameView.Set(System.Int32,System.Int32,kairo.unity.surface.TouchComponent)
void cs_cc3c4e9704a06708(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_value,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); pls::cs::Ref<pls::kairo::TouchValueAccessor> cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::TouchValueAccessor> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b4097d6d0948217d(cs_receiver); }()); std::int32_t cs_arg1 = v_type; std::int32_t cs_arg2 = v_value; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg3 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e1d7840856fb3e3a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:surface.SurfaceManager.#ctor
pls::cs::Ref<cs_f9cfa6da3459412e> cs_eaf2a1260918d30d() { cs_init_f9cfa6da3459412e();
{ auto cs_this = pls::cs::make_ref<cs_f9cfa6da3459412e>(); cs_eaf2a1260918d30d_init(cs_this); return cs_this; }
}
void cs_eaf2a1260918d30d_init(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this) {
([&]() { cs_03e2f5f2e825917f_init(std::static_pointer_cast<cs_4a8bef2ab48b32d7>(cs_this)); }());
{

}
}
// M:surface.SurfaceManager.AdjustSurfaceLayout
void cs_19ab8dcddc66e785(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_1632 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
pls::cs::Ref<pls::kairo::Canvas> v_instance2_1676 = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());
pls::cs::Ref<cs_4e9b1f0e9e3baf25> v_instance3_1732 = ([&]() -> pls::cs::Ref<cs_4e9b1f0e9e3baf25> { return cs_81e284f6e842da85(); }());
pls::cs::Ref<cs_6485f92c2f04639f> v_instance4_1793 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance4_1793); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return;
}
pls::cs::Ref<pls::kairo::FormBase> v_form_1903 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance4_1793); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }());
bool v_flag_1940 = ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_f9cfa6da3459412e>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_63c6ef254e4171fe(cs_receiver); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c8e32e6eaf380ca6(cs_receiver); }())))) {
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetStatusBarHeight(); }());
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_26fe694df0ae6d4f(cs_receiver); }())))) {
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetStatusBarPosition(); }());
}
pls::cs::Ref<pls::kairo::IApplication> v_currentApp_2189 = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());
std::int32_t v_num_2239 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }());
std::int32_t v_num2_2275 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
std::int32_t v_width_2313 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth2(); }());
std::int32_t v_num3_2351 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight2(); }());
if (((((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c10c93ba981d563f; }()))) && ((((!((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsSide(); }()))))) ? ((([&]() -> bool { auto cs_left = v_num_2239; auto cs_right = v_num2_2275; return (cs_left > cs_right); }()))) : ((([&]() -> bool { auto cs_left = v_num_2239; auto cs_right = v_num2_2275; return (cs_left < cs_right); }()))))))) || ((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c10c93ba981d563f; }()) && ((((!((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsSide(); }()))))) ? ((([&]() -> bool { auto cs_left = v_num_2239; auto cs_right = v_num2_2275; return (cs_left < cs_right); }()))) : ((([&]() -> bool { auto cs_left = v_num_2239; auto cs_right = v_num2_2275; return (cs_left > cs_right); }()))))))))) {
std::int32_t v_num4_2551 = v_num_2239;
([&]() { auto cs_value = v_num2_2275; v_num_2239 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num4_2551; v_num2_2275 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_width_2313; v_num4_2551 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num3_2351; v_width_2313 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num4_2551; v_num3_2351 = cs_value; return cs_value; }());
}
if ((((([&]() -> bool { auto cs_left = pls::generated::cs_c57b75ba2c108877(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_num2_2275; auto cs_right = v_num_2239; return (cs_left > cs_right); }()))) && pls::generated::cs_641d09da1fd4cb6f())) {
([&]() { auto cs_old = v_num2_2275; auto cs_rhs = ([&]() -> std::int32_t { return cs_8919cf419e6c7708(); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num2_2275 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num3_2351; auto cs_rhs = ([&]() -> std::int32_t { return cs_8919cf419e6c7708(); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num3_2351 = cs_value; return cs_value; }());
}
float v_scaleRatio_2814 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); bool cs_arg0 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScaleRatio(cs_arg0); }());
float v_num5_2868 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x43700000u); auto cs_right = v_scaleRatio_2814; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }());
float v_num6_2910 = pls::game::cs_f32(0x43a00000u);
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); float cs_arg0 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScaleRatio(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8de8ff27e94cbce9(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); float cs_arg0 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_num5_2868; auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left * cs_right); }()); auto cs_right = v_num6_2910; return (cs_left / cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8de8ff27e94cbce9(cs_receiver,cs_arg0); }());
std::int32_t v_width2_3031 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }());
std::int32_t v_height_3065 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }());
std::int32_t v_width3_3100 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }());
std::int32_t v_height2_3134 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }());
float v_scaleRatio2_3172 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }());
float v_scaleRatio3_3218 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x43700000u); auto cs_right = v_scaleRatio2_3172; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); std::int32_t cs_arg1 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x43700000u); auto cs_right = v_scaleRatio2_3172; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7676075e268ec275(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); std::int32_t cs_arg1 = v_num3_2351; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7676075e268ec275(cs_receiver,cs_arg0,cs_arg1); }());
std::int32_t v_num7_3406 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(cs_229c0490d0966c6b()); auto cs_right = v_scaleRatio3_3218; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
std::int32_t v_num8_3482 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(cs_44512ae8be40448d()); auto cs_right = v_scaleRatio3_3218; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
std::int32_t v_num9_3559 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(cs_32e9b6e50499ad72()); auto cs_right = v_scaleRatio3_3218; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
std::int32_t v_num10_3640 = ([&]() -> std::int32_t { auto cs_left = v_num2_2275; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_mode_3681 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0378d82734b4deab(cs_receiver); }());
if ((([&]() -> bool { auto cs_left = v_num10_3640; auto cs_right = v_num9_3559; return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); v_mode_3681 = cs_value; return cs_value; }());
} else {
if ((([&]() -> bool { auto cs_left = v_num10_3640; auto cs_right = v_num7_3406; return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); v_mode_3681 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (((((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_instance_1632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) && (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_1632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())))) ? (([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_1632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return cs_array.get_Item(cs_index); }())) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)))); v_mode_3681 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = v_mode_3681; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0378d82734b4deab(cs_receiver); }()); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_a68df2bae0e22f44()); std::int32_t cs_arg0 = v_mode_3681; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7d8c3a37df2c9c0b(cs_receiver,cs_arg0); }());
}
std::int32_t v_num11_3981 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if ((([&]() -> bool { auto cs_left = v_mode_3681; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = v_num7_3406; v_num11_3981 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_mode_3681; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_old = v_num10_3640; auto cs_rhs = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetStatusBarHeight(); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num10_3640 = cs_value; return cs_value; }());
([&]() { auto cs_value = (((([&]() -> bool { auto cs_left = v_num10_3640; auto cs_right = v_num8_3482; return (cs_left < cs_right); }())) ? (v_num10_3640) : (v_num8_3482))); v_num11_3981 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); std::int32_t cs_arg0 = v_num11_3981; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ee0b408f6e8fa392(cs_receiver,cs_arg0); }());
bool v_flag2_4177 = false;
if (([&]() -> bool { auto cs_left = v_mode_3681; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag2_4177 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_flag2_4177; auto cs_right = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsFullscreen(); }()); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); bool cs_arg0 = v_flag2_4177; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_00f4f3ea699b68a8(cs_receiver,cs_arg0); }());
if (v_flag_1940) {
try {
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x64ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_791) {auto cs_exception_791=pls::cs::capture_exception(cs_caught_791);
if(pls::cs::exception_is(cs_exception_791,"System.Exception")) {{

}}
else {throw;} }
}
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth2(); }()); v_width_2313 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight2(); }()); v_num3_2351 = cs_value; return cs_value; }());
if ((((([&]() -> bool { auto cs_left = pls::generated::cs_c57b75ba2c108877(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_num2_2275; auto cs_right = v_num_2239; return (cs_left > cs_right); }()))) && pls::generated::cs_641d09da1fd4cb6f())) {
([&]() { auto cs_old = v_num3_2351; auto cs_rhs = ([&]() -> std::int32_t { return cs_8919cf419e6c7708(); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num3_2351 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_mode_3681; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = v_width_2313; std::int32_t cs_arg1 = v_num3_2351; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7676075e268ec275(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_37c74a3ab45030f2(cs_receiver,cs_arg0,cs_arg1); }());
} else {
std::int32_t v_num12_4728 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_125a8b7955aca1e0; }())) {
pls::cs::Array<std::int32_t> v_viewport_4777 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetViewport(); }());
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_viewport_4777; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_scaleRatio2_3172; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); v_num12_4728 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = v_num3_2351; auto cs_right = v_num11_3981; return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ee0b408f6e8fa392(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = v_num12_4728; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); auto cs_right = v_num12_4728; return (cs_left > cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = v_num12_4728; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ee0b408f6e8fa392(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_width_2313; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num3_2351; auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); auto cs_right = v_num11_3981; return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_37c74a3ab45030f2(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); std::int32_t cs_arg0 = v_width_2313; std::int32_t cs_arg1 = v_num3_2351; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7676075e268ec275(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_width_2313; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_37c74a3ab45030f2(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_37c74a3ab45030f2(cs_receiver,cs_arg0,cs_arg1); }());
}
if ((([&]() -> bool { auto cs_left = v_width3_3100; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_height2_3134; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(v_instance3_1732); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = cs_a68df2bae0e22f44(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_71533940ab051be6(cs_receiver,cs_arg0); }());
}
if ((([&]() -> bool { auto cs_left = v_width2_3031; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_height_3065; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(v_instance3_1732); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = cs_2c0cde3e5aa1e969(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_71533940ab051be6(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_72947298469bea4a()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = v_num3_2351; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_37c74a3ab45030f2(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_72947298469bea4a()); std::int32_t cs_arg0 = v_num_2239; std::int32_t cs_arg1 = ([&]() -> std::int32_t { return cs_8919cf419e6c7708(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7676075e268ec275(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:surface.SurfaceManager.Draw(kairo.unity.ui.Graphics)
void cs_087077460d9ea2a3(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::kairo::Canvas> v_instance_5635 = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());
pls::cs::Ref<cs_4e9b1f0e9e3baf25> v_instance2_5690 = ([&]() -> pls::cs::Ref<cs_4e9b1f0e9e3baf25> { return cs_81e284f6e842da85(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(std::static_pointer_cast<cs_4a8bef2ab48b32d7>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a4fa9c8087597dcf(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(v_instance2_5690); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1fafefacc1319a3f(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(v_instance2_5690); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_27b32c30d93592bb(cs_receiver); }());
}
}
}
// M:surface.SurfaceManager.DrawComponents(kairo.unity.ui.Graphics)
void cs_ae992fe0dbd4a316(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() { auto cs_receiver = cs_a68df2bae0e22f44(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02d52a36c316037d; }()) && ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1ed6a55cc3c2bbc8(cs_receiver); }()) || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1ed6a55cc3c2bbc8(cs_receiver); }()))))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(std::static_pointer_cast<cs_4a8bef2ab48b32d7>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fb350f55fa7620cd(cs_receiver,cs_arg0); }());
}
}
}
}
// M:surface.SurfaceManager.IsLayoutMode
bool cs_da79ce6532ce348b(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_125a8b7955aca1e0; }());
}
}
}
// M:surface.SurfaceManager.SetLayoutMode(System.Boolean)
void cs_82be5e968b3bd7e2(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this,bool v_enable) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_enable; pls::game::cs_require(cs_target)->cs_125a8b7955aca1e0 = cs_value; return cs_value; }());
}
}
}
// M:surface.SurfaceManager.Setup
void cs_969e6cb0fe9187f1() { cs_init_f9cfa6da3459412e();
{try{
if (([&]() { auto cs_left = pls::cs::box(cs_60a3266700f223ca()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
throw pls::cs::ReturnFlow<void>{};
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_f9cfa6da3459412e> { return cs_eaf2a1260918d30d(); }()); cs_60a3266700f223ca() = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::IApplication> v_currentApp_721 = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_721); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsSide(); }())))) {
([&]() { auto cs_target = cs_60a3266700f223ca(); auto cs_value = ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_721); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_721); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return (cs_left > cs_right); }()); pls::game::cs_require(cs_target)->cs_c10c93ba981d563f = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_60a3266700f223ca(); auto cs_value = ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_721); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_721); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return (cs_left < cs_right); }()); pls::game::cs_require(cs_target)->cs_c10c93ba981d563f = cs_value; return cs_value; }());
}
pls::cs::Ref<pls::kairo::Canvas> v_instance_971 = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());
([&](){auto cs_canvas=v_instance_971;auto cs_source=cs_60a3266700f223ca();if(!cs_canvas)throw pls::cs::NullReferenceException();if(!cs_source){cs_canvas->host_source_surface({},{});return;}pls::kairo::SurfaceCallbacks cs_bindings;cs_bindings.raw_key_down=pls::cs::Delegate<void(std::int32_t,pls::cs::Ref<pls::kairo::KeyEvent>)>::bind(cs_source,"source-surface:raw_key_down",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](std::int32_t cs_key,pls::cs::Ref<pls::kairo::KeyEvent> cs_event){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_b8386c421fdf23ad(cs_source,cs_key,cs_event);});cs_bindings.key_down=pls::cs::Delegate<void(std::int32_t)>::bind(cs_source,"source-surface:key_down",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](std::int32_t cs_key){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_9082ae6a6e574dce(cs_source,cs_key);});cs_bindings.key_up=pls::cs::Delegate<void(std::int32_t)>::bind(cs_source,"source-surface:key_up",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](std::int32_t cs_key){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_a945708971ce72b3(cs_source,cs_key);});cs_bindings.clear_touch=pls::cs::Delegate<void()>::bind(cs_source,"source-surface:clear_touch",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_1e0863d8f2b7a360(cs_source);});cs_bindings.do_events=pls::cs::Delegate<void()>::bind(cs_source,"source-surface:do_events",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_c311823b6552fdf7(cs_source);});cs_bindings.adjust_layout=pls::cs::Delegate<void()>::bind(cs_source,"source-surface:adjust_layout",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();pls::game::cs_require(cs_source)->cs_virtual_d58c9861d84c3c7d();});cs_bindings.begin_touch=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>)>::bind(cs_source,"source-surface:begin_touch",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](pls::cs::Ref<pls::kairo::Graphics> cs_graphics){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_919bc150e4142cc1(cs_source,cs_graphics);});cs_bindings.draw=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>)>::bind(cs_source,"source-surface:draw",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](pls::cs::Ref<pls::kairo::Graphics> cs_graphics){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();pls::game::cs_require(cs_source)->cs_virtual_a4fa9c8087597dcf(cs_graphics);});cs_bindings.end_touch=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>)>::bind(cs_source,"source-surface:end_touch",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](pls::cs::Ref<pls::kairo::Graphics> cs_graphics){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_cc1a1bf7edaee778(cs_source,cs_graphics);});cs_bindings.draw_components=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>)>::bind(cs_source,"source-surface:draw_components",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](pls::cs::Ref<pls::kairo::Graphics> cs_graphics){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();pls::game::cs_require(cs_source)->cs_virtual_fb350f55fa7620cd(cs_graphics);});cs_bindings.touch=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::MotionEvent>)>::bind(cs_source,"source-surface:touch",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](pls::cs::Ref<pls::kairo::MotionEvent> cs_event){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();auto cs_list=cs_60d968a93f42ac33(cs_source);for(std::int32_t cs_index=pls::cs::sub_i32(pls::generated::cs_c55367423dbb79a1(cs_list),1);cs_index>=0;--cs_index){auto cs_surface=pls::generated::cs_46529d25e14daec6(cs_list,cs_index);pls::game::cs_require(cs_surface)->cs_virtual_f10884576b82823a(cs_event);}});cs_bindings.clear_game_touch=pls::cs::Delegate<void()>::bind(cs_source,"source-surface:clear_game_touch",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();auto cs_list=cs_60d968a93f42ac33(cs_source);for(std::int32_t cs_index=0;cs_index<pls::generated::cs_c55367423dbb79a1(cs_list);cs_index=pls::cs::add_i32(cs_index,1)){auto cs_surface=pls::generated::cs_46529d25e14daec6(cs_list,cs_index);if(pls::game::cs_require(cs_surface)->cs_virtual_9b7c686ee42b269b())cs_0a96693c31be1e15(cs_surface);}});cs_canvas->host_source_surface(pls::cs::box(cs_source),pls::cs::make_ref<pls::kairo::CallbackFormSurface>(std::move(cs_bindings)));}());
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_1061 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::run_finally([&]() {try {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x0073" u"\x0079" u"\x0073" u"\x0074" u"\x0065" u"\x006d" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",10)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }()); v_jarInflater_1061 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_1061; cs_e464c93271d834fa(cs_arg0); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_1061; cs_2da0940ad60eef3f(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_166) {auto cs_exception_166=pls::cs::capture_exception(cs_caught_166);
if(pls::cs::exception_is(cs_exception_166,"System.Exception")) {{

}}
else {throw;} }}, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_jarInflater_1061); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_1061); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{}; v_jarInflater_1061 = cs_value; return cs_value; }());
});
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_60a3266700f223ca(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_e315dac1df3b175d> { return cs_f32a8bd00f4461ef(); }()); cs_2c0cde3e5aa1e969() = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_60a3266700f223ca(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_792a6372766eb19f> { return cs_a066f615d75279e2(); }()); cs_a68df2bae0e22f44() = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_60a3266700f223ca(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_af32d28251411c95> { return cs_cb8c524e1144420f(); }()); cs_72947298469bea4a() = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}catch(const pls::cs::ReturnFlow<void>& cs_return){return;}}
}
// M:surface.SurfaceManager.UpdateAdMobView
void cs_63c6ef254e4171fe(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::generated::cs_641d09da1fd4cb6f()=false;
cs_44512ae8be40448d()=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x41ull));
return;
}
}
}
// M:surface.TouchEffect.#ctor
pls::cs::Ref<cs_9b21b86f0d2914e0> cs_2a1179e902640c2a() { cs_init_9b21b86f0d2914e0();
{ auto cs_this = pls::cs::make_ref<cs_9b21b86f0d2914e0>(); cs_2a1179e902640c2a_init(cs_this); return cs_this; }
}
void cs_2a1179e902640c2a_init(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this) {
{}
}
// M:surface.TouchEffect.Draw(kairo.unity.ui.Graphics)
void cs_fb03a4148f6cc986(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_9b21b86f0d2914e0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_num_1767 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }());
std::int32_t v_num2_1813 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b9b3024a4bbf4537; }()); return pls::cs::sub_i64(cs_left,cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); return pls::cs::div_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_579f8976161c3a90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_array_1904 = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46524ed757f195c3; }()));
pls::cs::Ref<pls::kairo::Image> v_image_1938 = pls::cs::unbox<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_array = v_array_1904; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()));
pls::cs::Array<float> v_array2_1975 = pls::cs::unbox<pls::cs::Array<float>>(([&]() { auto cs_array = v_array_1904; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()));
std::int32_t v_num3_2011 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa0ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); auto cs_right = v_num2_1813; return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num3_2011; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return;
}
float v_num4_2072 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x40200000u); auto cs_right = static_cast<float>(v_num2_1813); return (cs_left * cs_right); }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }());
float v_num5_2111 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x40200000u); auto cs_right = static_cast<float>(v_num2_1813); return (cs_left * cs_right); }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }());
float v_dx_2150 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }())); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_104e5f6a41bc31a2; }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_num4_2072; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left - cs_right); }());
float v_dy_2208 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }())); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4f23ff2646eb23aa; }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_num5_2111; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left - cs_right); }());
float v_num6_2266 = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }());
float v_num7_2296 = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = v_num3_2011; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = v_num3_2011; return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = v_image_1938; float cs_arg1 = v_dx_2150; float cs_arg2 = v_dy_2208; float cs_arg3 = ([&]() -> float { auto cs_left = v_num6_2266; auto cs_right = v_num4_2072; return (cs_left + cs_right); }()); float cs_arg4 = ([&]() -> float { auto cs_left = v_num7_2296; auto cs_right = v_num5_2111; return (cs_left + cs_right); }()); std::int32_t cs_arg5 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg6 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg7 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg8 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_579f8976161c3a90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_579f8976161c3a90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_579f8976161c3a90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {

}
}
}
}
// M:surface.TouchEffect.Frame
bool cs_2b7db73fe142457a(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this) { cs_init_9b21b86f0d2914e0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_1079 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull));
std::int32_t v_num2_1095 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b9b3024a4bbf4537; }()); return pls::cs::sub_i64(cs_left,cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); return pls::cs::div_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num2_1095; auto cs_right = v_num_1079; return (cs_left >= cs_right); }())) {
return true;
}
double v_num3_1208 = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_287f9edf5a6fc99a; }()));
double v_num4_1230 = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_85d4a94d45c5d889; }()));
double v_num5_1252 = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f9be90c450193aae; }()); return pls::cs::sub_i64(cs_left,cs_right); }()))); auto cs_right = pls::game::cs_f64(0x408f400000000000ull); return (cs_left / cs_right); }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_104e5f6a41bc31a2; auto cs_rhs = static_cast<float>((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_287f9edf5a6fc99a; }())); auto cs_right = v_num5_1252; return (cs_left * cs_right); }()))); auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_104e5f6a41bc31a2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_4f23ff2646eb23aa; auto cs_rhs = static_cast<float>((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_85d4a94d45c5d889; }())); auto cs_right = v_num5_1252; return (cs_left * cs_right); }()))); auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_4f23ff2646eb23aa = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a; auto cs_rhs = static_cast<float>((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b766893b7bb434f0; }())); auto cs_right = v_num5_1252; return (cs_left * cs_right); }()))); auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889; auto cs_rhs = static_cast<float>((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_95b7593873c71ecc; }())); auto cs_right = v_num5_1252; return (cs_left * cs_right); }()))); auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889 = cs_value; return cs_value; }());
if ((((([&]() -> bool { auto cs_left = v_num3_1208; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_287f9edf5a6fc99a; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left < cs_right); }()))) || ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_287f9edf5a6fc99a; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num3_1208; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
}
if ((((([&]() -> bool { auto cs_left = v_num4_1230; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_85d4a94d45c5d889; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left < cs_right); }()))) || ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_85d4a94d45c5d889; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_1230; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }()); pls::game::cs_require(cs_target)->cs_f9be90c450193aae = cs_value; return cs_value; }());
return false;
}
}
}
// M:surface.TouchEffect.Init(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent,System.Object)
void cs_5e534500fa7e2dfa(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component,pls::cs::Ref<pls::cs::Object> v_arg) { cs_init_9b21b86f0d2914e0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_surface; pls::game::cs_require(cs_target)->cs_d5047348b0759e4e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_id; pls::game::cs_require(cs_target)->cs_579f8976161c3a90 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_104e5f6a41bc31a2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_4f23ff2646eb23aa = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }()); pls::game::cs_require(cs_target)->cs_f9be90c450193aae = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_b9b3024a4bbf4537 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_arg; pls::game::cs_require(cs_target)->cs_46524ed757f195c3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_4f16085a44631993 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_component); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_4f16085a44631993 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889 = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_95b7593873c71ecc = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_b766893b7bb434f0 = cs_value; return cs_value; }());
}
}
}
// M:surface.TouchEffect.Init(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent)
void cs_e8150d06f5e6c2cc(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component) { cs_init_9b21b86f0d2914e0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9b21b86f0d2914e0>>(cs_this); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = v_surface; std::int32_t cs_arg1 = v_id; float cs_arg2 = v_x; float cs_arg3 = v_y; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component; pls::cs::Ref<pls::cs::Object> cs_arg5 = pls::cs::Ref<pls::cs::Object>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5e534500fa7e2dfa(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
// M:surface.TouchEffectManager.#ctor
pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_58437f0f251471b8() { cs_init_4e9b1f0e9e3baf25();
{ auto cs_this = pls::cs::make_ref<cs_4e9b1f0e9e3baf25>(); cs_58437f0f251471b8_init(cs_this); return cs_this; }
}
void cs_58437f0f251471b8_init(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this) {
cs_this->cs_7532de0b2467e888 = ([&]() -> pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>> { return pls::generated::cs_f349692afe9e225e<pls::cs::Ref<cs_9b21b86f0d2914e0>>(); }());
cs_this->cs_7cc420fdd246795c = ([&]() -> pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>> { return pls::generated::cs_f349692afe9e225e<pls::cs::Ref<cs_9b21b86f0d2914e0>>(); }());
{

}
}
// M:surface.TouchEffectManager.Add(surface.TouchEffect)
void cs_95d1f01cac020884(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9b21b86f0d2914e0> v_effect) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); pls::cs::Ref<cs_9b21b86f0d2914e0> cs_arg0 = v_effect; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_7969ffc067486ca6(cs_receiver,cs_arg0); }());
}
}
}
// M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent,System.Object)
pls::cs::Ref<cs_9b21b86f0d2914e0> cs_2be5d3359f23ac72(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component,pls::cs::Ref<pls::cs::Object> v_arg) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect_2818 = pls::cs::Ref<cs_9b21b86f0d2914e0>{};
for (std::int32_t v_i_2850 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2850; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7cc420fdd246795c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2850; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2850 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect2_2910 = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7cc420fdd246795c; }())); std::int32_t cs_arg0 = v_i_2850; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); pls::cs::Ref<cs_9b21b86f0d2914e0> cs_arg0 = v_touchEffect2_2910; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c08c9d3910849f27(cs_receiver,cs_arg0); }())) {
continue;
}
([&]() { auto cs_value = v_touchEffect2_2910; v_touchEffect_2818 = cs_value; return cs_value; }());
break;
}
if (([&]() { auto cs_left = pls::cs::box(v_touchEffect_2818); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7cc420fdd246795c; }())); pls::cs::Ref<cs_9b21b86f0d2914e0> cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { return cs_2a1179e902640c2a(); }()); v_touchEffect_2818 = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_7969ffc067486ca6(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9b21b86f0d2914e0>>(v_touchEffect_2818); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = v_surface; std::int32_t cs_arg1 = v_id; float cs_arg2 = v_x; float cs_arg3 = v_y; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component; pls::cs::Ref<pls::cs::Object> cs_arg5 = v_arg; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5e534500fa7e2dfa(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); pls::cs::Ref<cs_9b21b86f0d2914e0> cs_arg0 = v_touchEffect_2818; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_95d1f01cac020884(cs_receiver,cs_arg0); }());
return v_touchEffect_2818;
}
}
}
// M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent)
pls::cs::Ref<cs_9b21b86f0d2914e0> cs_0f9186fdb6403602(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = v_surface; std::int32_t cs_arg1 = v_id; float cs_arg2 = v_x; float cs_arg3 = v_y; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component; pls::cs::Ref<pls::cs::Object> cs_arg5 = pls::cs::Ref<pls::cs::Object>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2be5d3359f23ac72(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
// M:surface.TouchEffectManager.Clear
void cs_8bb33e3a9f88735c(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_1184 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_1184; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_1184; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_1184 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); std::int32_t cs_arg0 = v_num_1184; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8e64ae9ae7382110(cs_receiver); }());
}
}
}
// M:surface.TouchEffectManager.Draw(kairo.unity.ui.Graphics)
void cs_1fafefacc1319a3f(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_952 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_952; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_952; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_952 = cs_new; return cs_old; }())) {
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9b21b86f0d2914e0>>(([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_i_952; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fb03a4148f6cc986(cs_receiver,cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_792) {auto cs_exception_792=pls::cs::capture_exception(cs_caught_792);
if(pls::cs::exception_is(cs_exception_792,"System.Exception")) {auto v_t_1054=cs_exception_792;{
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_1054; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
}
}}
else {throw;} }
}
}
}
}
// M:surface.TouchEffectManager.Frame
void cs_27b32c30d93592bb(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_702 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_702; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_702; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_702 = cs_new; return cs_old; }())) {
{
bool v_recoveredCondition_793_761 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9b21b86f0d2914e0>>(([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_num_702; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b7db73fe142457a(cs_receiver); }());
if (v_recoveredCondition_793_761) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_num_702; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_cc1549d9ed88f4a6(cs_receiver,cs_arg0); }());
}
}
}
}
}
}
// M:surface.TouchEffectManager.GetInstance
pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_81e284f6e842da85() { cs_init_4e9b1f0e9e3baf25();
{
if (([&]() { auto cs_left = pls::cs::box(cs_f0c6ab846fbc94dd()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return cs_f0c6ab846fbc94dd();
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_4e9b1f0e9e3baf25> { return cs_58437f0f251471b8(); }()); cs_f0c6ab846fbc94dd() = cs_value; return cs_value; }());
return cs_f0c6ab846fbc94dd();
}
}
// M:surface.TouchEffectManager.RemoveComponentId(kairo.unity.surface.SurfaceBase,System.Int32)
void cs_e4ad1dff02a4bcf7(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_componentId) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_1953 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_1953; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_1953; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_1953 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect_2017 = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_num_1953; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_touchEffect_2017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); auto cs_right = pls::cs::box(v_surface); return cs_left == cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { std::int64_t cs_arg0 = ([&]() { auto cs_receiver = v_touchEffect_2017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4f16085a44631993; }()); return cs_864b2cef1e2afbf2(cs_arg0); }()); auto cs_right = v_componentId; return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); std::int32_t cs_arg0 = v_num_1953; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
}
}
}
}
}
// M:surface.TouchEffectManager.RemoveComponentKey(kairo.unity.surface.SurfaceBase,System.Int64)
void cs_a36c657b19114aa4(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int64_t v_componentKey) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_2288 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_2288; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_2288; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_2288 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect_2352 = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_num_2288; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_touchEffect_2352; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); auto cs_right = pls::cs::box(v_surface); return cs_left == cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEffect_2352; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4f16085a44631993; }()); auto cs_right = v_componentKey; return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); std::int32_t cs_arg0 = v_num_2288; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
}
}
}
}
}
// M:surface.TouchEffectManager.RemoveEffect(surface.TouchEffect)
void cs_d673003b2f08f29f(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9b21b86f0d2914e0> v_effect) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); pls::cs::Ref<cs_9b21b86f0d2914e0> cs_arg0 = v_effect; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_dcec283a3ce35483(cs_receiver,cs_arg0); }());
}
}
}
// M:surface.TouchEffectManager.RemoveEffect(System.Int32)
void cs_186b1c2eff63e43a(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,std::int32_t v_index) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_cc1549d9ed88f4a6(cs_receiver,cs_arg0); }());
}
}
}
// M:surface.TouchEffectManager.RemoveId(System.Int32)
void cs_bb7358e468d1296c(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,std::int32_t v_id) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_1731 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_1731; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_1731; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_1731 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_num_1731; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_579f8976161c3a90; }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); std::int32_t cs_arg0 = v_num_1731; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
}
}
}
}
}
// M:surface.TouchEffectManager.RemoveSurface(kairo.unity.surface.SurfaceBase)
void cs_71533940ab051be6(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_1538 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_1538; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_1538; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_1538 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_num_1538; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); auto cs_right = pls::cs::box(v_surface); return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); std::int32_t cs_arg0 = v_num_1538; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
}
}
}
}
}
// M:system.billing.MyBilling.#ctor
pls::cs::Ref<cs_08829eb6a4df2a40> cs_b6efdcfa6839537c() { cs_init_08829eb6a4df2a40();
{ auto cs_this = pls::cs::make_ref<cs_08829eb6a4df2a40>(); cs_b6efdcfa6839537c_init(cs_this); return cs_this; }
}
void cs_b6efdcfa6839537c_init(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this) {
([&]() { cs_fb6a0b22d395f57f_init(std::static_pointer_cast<cs_6ee7d14059be1acf>(cs_this)); }());
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }()); cs_2b99e3af7643ea42() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_6485f92c2f04639f>>(pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormManagerBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(cs_2b99e3af7643ea42()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormManager(); }()))); cs_853c51ab649a13bb() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_435cb1470132c214() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> {
