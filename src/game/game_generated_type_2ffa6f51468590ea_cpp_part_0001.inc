pls::cs::Ref<pls::kairo::Canvas> v_instance_138017{};
pls::cs::Ref<pls::generated::cs_a465028bea3432a3> v_instance2_138149{};
pls::cs::String v_text2_138258{};
pls::cs::String v_text3_138309{};
pls::cs::String v_text4_138429{};
pls::cs::String v_text5_138543{};
pls::cs::String v_text6_138658{};
pls::cs::String v_text7_138773{};
pls::cs::String v_date_138888{};
bool v_flag_139010{};
pls::cs::String v_text8_139083{};
pls::cs::String v_text9_139201{};
std::int32_t v_num_139238{};
pls::cs::String v_text11_139525{};
pls::cs::String v_text12_139564{};
std::int32_t v_num2_139600{};
pls::cs::Array<std::uint8_t> v_array_140651{};
pls::cs::Array<std::uint8_t> v_array2_140904{};
pls::cs::Array<std::uint8_t> v_array3_140984{};
pls::cs::Ref<pls::kairo::RecordStore> v_recordStore_141306{};
pls::cs::Ref<pls::kairo::RecordStore> v_recordStore2_141808{};
pls::cs::String v_url_142046{};
std::int32_t v_num3_142092{};
pls::cs::Array<pls::cs::Array<std::uint8_t>> v_array4_142120{};
pls::cs::Array<pls::cs::String> v_array5_142193{};
pls::cs::Array<pls::cs::String> v_array6_142243{};
pls::cs::String v_str_142322{};
pls::cs::Ref<pls::kairo::RecordStore> v_recordStore3_142436{};
pls::cs::Array<std::uint8_t> v_data_142497{};
pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e> v_property_142569{};
std::int32_t v_num4_142981{};
std::int32_t v_i_143005{};
std::int32_t v_num5_143057{};
std::int32_t v_num6_143154{};
std::int32_t v_num7_143486{};
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog_143783{};
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog2_144326{};
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog3_144605{};
{
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0064" u"\x0065" u"\x0076" u"\x003d" u"",4)); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3c515a641b6b6cb5; }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x000a" u"\x0076" u"\x0065" u"\x0072" u"",4)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull))); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x000a" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text; return pls::cs::String::concat(cs_left,cs_right); }()); v_text = cs_value; return cs_value; }());
v_instance_138017 = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = pls::cs::String(u""); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::String cs_arg1 = pls::cs::String(u""); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1); }());
v_instance2_138149 = ([&]() -> pls::cs::Ref<pls::generated::cs_a465028bea3432a3> { return pls::generated::cs_23a91b30234d4879(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); pls::cs::Ref<pls::generated::cs_66dbad5679f8ab87> cs_arg0 = ([&]() -> pls::cs::Ref<pls::generated::cs_66dbad5679f8ab87> { std::int64_t cs_arg0 = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }()); return pls::generated::cs_bbcadd583a6daacb(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_e2c62bcb22f058c9(cs_receiver,cs_arg0); }());
v_text2_138258 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }())); return pls::cs::String::concat(cs_left,cs_right); }());
v_text3_138309 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return pls::cs::String::concat(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text3_138309; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text3_138309; return pls::cs::String::concat(cs_left,cs_right); }()); v_text3_138309 = cs_value; return cs_value; }());
}
v_text4_138429 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }())); return pls::cs::String::concat(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text4_138429; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text4_138429; return pls::cs::String::concat(cs_left,cs_right); }()); v_text4_138429 = cs_value; return cs_value; }());
}
v_text5_138543 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }())); return pls::cs::String::concat(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text5_138543; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text5_138543; return pls::cs::String::concat(cs_left,cs_right); }()); v_text5_138543 = cs_value; return cs_value; }());
}
v_text6_138658 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }())); return pls::cs::String::concat(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text6_138658; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text6_138658; return pls::cs::String::concat(cs_left,cs_right); }()); v_text6_138658 = cs_value; return cs_value; }());
}
v_text7_138773 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }())); return pls::cs::String::concat(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text7_138773; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text7_138773; return pls::cs::String::concat(cs_left,cs_right); }()); v_text7_138773 = cs_value; return cs_value; }());
}
v_date_138888 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = v_text2_138258; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002e" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text3_138309; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002e" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text4_138429; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text5_138543; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002e" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text6_138658; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002e" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text7_138773; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }());
v_flag_139010 = false;
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_2981baf401ba64bb = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClearKeyBuffer(); }());
v_text8_139083 = pls::cs::String{};
if (([&]() { auto cs_left = pls::cs::box(v_th); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::cs::String(u""); v_text8_139083 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::String { return cs_9ec572c71522df31(); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
v_text9_139201 = ([&]() -> pls::cs::String { return cs_9ec572c71522df31(); }());
v_num_139238 = ([&]() -> std::int32_t { auto cs_arg0 = v_text9_139201; auto cs_arg1 = char16_t(47); return pls::game::cs_last_index_char1(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num_139238; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text9_139201; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num_139238; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_51d6c186b8b049a1(cs_arg0,cs_arg1); }()); v_text9_139201 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_text9_139201; auto cs_arg1 = char16_t(46); return pls::game::cs_last_index_char1(cs_arg0,cs_arg1); }()); v_num_139238 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_139238; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text9_139201; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = v_num_139238; return pls::generated::cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); v_text9_139201 = cs_value; return cs_value; }());
}
([&]() { auto cs_old = v_text8_139083; auto cs_rhs = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text9_139201; auto cs_right = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { return cs_3c5e64aab4be4dca(); }())); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x000a" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text8_139083 = cs_value; return cs_value; }());
}
v_text11_139525 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_object_string(pls::cs::box(v_th)); return pls::cs::String::concat(cs_left,cs_right); }());
v_text12_139564 = pls::game::cs_require(([&](){auto cs_receiver=pls::cs::box(v_th);return pls::cs::RuntimeType::for_name(pls::game::cs_require(cs_receiver)->managed_type_name());}()))->get_Name();
v_num2_139600 = ([&]() -> std::int32_t { auto cs_arg0 = v_text12_139564; auto cs_arg1 = char16_t(46); return pls::game::cs_last_index_char1(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num2_139600; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text12_139564; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num2_139600; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_51d6c186b8b049a1(cs_arg0,cs_arg1); }()); v_text12_139564 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_text11_139525; auto cs_arg1 = v_text12_139564; return pls::cs::culture_index_of(cs_arg0,cs_arg1); }()); v_num2_139600 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num2_139600; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text11_139525; std::int32_t cs_arg1 = v_num2_139600; return pls::generated::cs_51d6c186b8b049a1(cs_arg0,cs_arg1); }()); v_text11_139525 = cs_value; return cs_value; }());
}
if (pls::game::cs_is<pls::cs::Ref<pls::generated::cs_7254e4706a01e4e7>>(pls::cs::box(v_th))) {
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text11_139525; auto cs_right = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7254e4706a01e4e7>>((pls::cs::unbox<pls::cs::Ref<pls::generated::cs_7254e4706a01e4e7>>(pls::cs::box(v_th)))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_bf1ddcf69d442d48(cs_receiver); }())); return pls::cs::String::concat(cs_left,cs_right); }()); v_text11_139525 = cs_value; return cs_value; }());
}
if (pls::game::cs_is<pls::cs::Ref<cs_27b8baf7307cff9f>>(pls::cs::box(v_th))) {
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text11_139525; auto cs_right = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_27b8baf7307cff9f>>((pls::cs::unbox<pls::cs::Ref<cs_27b8baf7307cff9f>>(pls::cs::box(v_th)))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_31cf637794688433(cs_receiver); }())); return pls::cs::String::concat(cs_left,cs_right); }()); v_text11_139525 = cs_value; return cs_value; }());
}
([&]() { auto cs_old = v_text8_139083; auto cs_rhs = v_text11_139525; auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text8_139083 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = pls::generated::cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text8_139083; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_845940c7d8ab8fe2(cs_receiver,cs_arg0); }());
while (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetKeypadState(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
try {
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x64ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_735) {auto cs_exception_735=pls::cs::capture_exception(cs_caught_735);
if(pls::cs::exception_is(cs_exception_735,"System.Threading.ThreadAbortException")) {{

}}
else {throw;} }
}
}
while (true) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DecideKeyState(); }());
try {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2981baf401ba64bb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text8_139083; bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4cd27e7696a39ccb(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }())) {
([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); pls::cs::String cs_arg0 = v_text8_139083; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0c63416912f65567(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
} else if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_2981baf401ba64bb = cs_value; return cs_value; }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2981baf401ba64bb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text8_139083; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_845940c7d8ab8fe2(cs_receiver,cs_arg0); }());
v_array_140651 = pls::cs::Array<std::uint8_t>{};
if (([&]() -> bool { auto cs_left = pls::generated::cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_text; auto cs_rhs = pls::cs::String(std::u16string(u"\x000a" u"\x0073" u"\x0063" u"\x0072" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x0070" u"\x0061" u"\x0064" u"",11)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_611e38080e0184ae(cs_arg0); }()); return cs_0478a420e3edd658(cs_arg0,cs_arg1,cs_arg2); }()); v_array_140651 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
{
([&]() { auto cs_old = v_text; auto cs_rhs = pls::cs::String(std::u16string(u"\x000a" u"\x0061" u"\x006c" u"\x006c" u"\x002d" u"\x0073" u"\x0063" u"\x0072" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x0070" u"\x0061" u"\x0064" u"",15)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text = cs_value; return cs_value; }());
v_array2_140904 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_611e38080e0184ae(cs_arg0); }()); return cs_0478a420e3edd658(cs_arg0,cs_arg1,cs_arg2); }());
v_array3_140984 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_611e38080e0184ae(cs_arg0); }()); return cs_0478a420e3edd658(cs_arg0,cs_arg1,cs_arg2); }());
([&]() { auto cs_value = pls::cs::Array<std::uint8_t>::make(([&]() -> std::int32_t { auto cs_left = (v_array2_140904).length(); auto cs_right = (v_array3_140984).length(); return pls::cs::add_i32(cs_left,cs_right); }())); v_array_140651 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array2_140904); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_array_140651); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (v_array2_140904).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array3_140984); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_array_140651); std::int32_t cs_arg3 = (v_array2_140904).length(); std::int32_t cs_arg4 = (v_array3_140984).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
} else if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
try {
v_recordStore_141306 = ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::kairo::RecordStore::ReadRecord(cs_arg0,cs_arg1); }()); v_array_140651 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_141306); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());
} catch(const pls::cs::Exception& cs_caught_736) {auto cs_exception_736=pls::cs::capture_exception(cs_caught_736);
if(pls::cs::exception_is(cs_exception_736,"System.Exception")) {auto v_ex2_141479=cs_exception_736;{
if ((!(v_flag_139010))) {
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text; auto cs_right = pls::cs::String(std::u16string(u"\x000a" u"\x0052" u"\x0065" u"\x0063" u"\x006f" u"\x0072" u"\x0064" u"\x0053" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"\x005b" u"",13)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = v_ex2_141479; return pls::game::cs_require(cs_receiver)->ToString(); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); v_text = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_611e38080e0184ae(cs_arg0); }()); return cs_0478a420e3edd658(cs_arg0,cs_arg1,cs_arg2); }()); v_array_140651 = cs_value; return cs_value; }());
([&]() { auto cs_value = true; v_flag_139010 = cs_value; return cs_value; }());
}}
else {throw;} }
}
} else if (([&]() -> bool { auto cs_left = pls::generated::cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
try {
v_recordStore2_141808 = ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::kairo::RecordStore::ReadRecord(cs_arg0,cs_arg1); }()); v_array_140651 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore2_141808); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());
} catch(const pls::cs::Exception& cs_caught_737) {auto cs_exception_737=pls::cs::capture_exception(cs_caught_737);
if(pls::cs::exception_is(cs_exception_737,"System.Exception")) {{
([&]() { auto cs_value = true; v_flag_139010 = cs_value; return cs_value; }());
}}
else {throw;} }
}
v_url_142046 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::generated::cs_29a6912fb32f7990(); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0076" u"\x0065" u"\x0072" u"\x003d" u"",5)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull))); return pls::cs::String::concat(cs_left,cs_right); }());
v_num3_142092 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc800ull));
v_array4_142120 = pls::cs::Array<pls::cs::Array<std::uint8_t>>::make(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (v_array_140651).length(); auto cs_right = v_num3_142092; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = v_num3_142092; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()));
v_array5_142193 = pls::cs::Array<pls::cs::String>::make((v_array4_142120).length());
v_array6_142243 = pls::cs::Array<pls::cs::String>::make((v_array5_142193).length());
if (pls::generated::cs_b0827224162a4f93()) {
v_str_142322 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()) : pls::cs::String(u""))); auto cs_right = pls::cs::String(std::u16string(u"\x000a" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x000a" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }());
try {
v_recordStore3_142436 = ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }());
v_data_142497 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::kairo::RecordStore::ReadRecord(cs_arg0,cs_arg1); }());
v_property_142569 = ([&]() -> pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e> { pls::cs::Array<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>> cs_arg0 = cs_4cfb7d4f52307756(); pls::cs::Array<std::int32_t> cs_arg1 = cs_b3c4355d79ad4a53(); pls::cs::Array<std::int64_t> cs_arg2 = cs_24baaac10d948736(); pls::cs::Array<pls::cs::String> cs_arg3 = cs_37df3dc1c8f8fe67(); pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_arg4 = cs_237ef7bad1a6bbb9(); return pls::generated::cs_e34104df98d3719c(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(v_property_142569); pls::cs::Array<std::uint8_t> cs_arg0 = v_data_142497; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_abffc02b85346a7d(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore3_142436); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());
} catch(const pls::cs::Exception& cs_caught_738) {auto cs_exception_738=pls::cs::capture_exception(cs_caught_738);
if(pls::cs::exception_is(cs_exception_738,"System.Exception")) {{

}}
else {throw;} }
([&]() { auto cs_target = v_array4_142120; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_str_142322; return pls::generated::cs_a8e45b955b78e04d(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
([&]() { auto cs_target = v_array4_142120; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = (([&]() { auto cs_left = ([&]() { auto cs_left = (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()) : pls::cs::String(u""))); auto cs_right = pls::cs::String(std::u16string(u"\x000a" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text; return pls::cs::String::concat(cs_left,cs_right); }())); return pls::generated::cs_a8e45b955b78e04d(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = v_array5_142193; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::String(std::u16string(u"\x0069" u"\x006e" u"\x0066" u"\x006f" u"",4));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array6_142243; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::String(std::u16string(u"\x0030" u"",1));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
v_num4_142981 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (v_i_143005 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_143005; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_array4_142120).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_143005; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_143005 = cs_new; return cs_old; }())) {
v_num5_143057 = ([&]() -> std::int32_t { auto cs_left = (v_array_140651).length(); auto cs_right = v_num4_142981; return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num5_143057; auto cs_right = v_num3_142092; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_num3_142092; v_num5_143057 = cs_value; return cs_value; }());
}
v_num6_143154 = ([&]() -> std::int32_t { auto cs_left = v_i_143005; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }());
([&]() { auto cs_target = v_array4_142120; auto cs_index = v_num6_143154; auto cs_value = pls::cs::Array<std::uint8_t>::make(v_num5_143057);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array_140651); std::int32_t cs_arg1 = v_num4_142981; pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = v_array4_142120; auto cs_index = v_num6_143154; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = v_num5_143057; pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() { auto cs_target = v_array5_142193; auto cs_index = v_num6_143154; auto cs_value = pls::cs::String(std::u16string(u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"",4));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_array5_142193; auto cs_index = v_num6_143154; auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::String(std::u16string(u"\x002d" u"\x0073" u"\x0079" u"\x0073" u"",4)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_array5_142193; auto cs_index = v_num6_143154; auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::String(std::u16string(u"\x002d" u"\x0061" u"\x006c" u"\x006c" u"",4)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() { auto cs_target = v_array6_142243; auto cs_index = v_num6_143154; auto cs_value = ([&]() -> pls::cs::String { std::int32_t cs_arg0 = v_i_143005; return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_old = v_num4_142981; auto cs_rhs = v_num5_143057; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num4_142981 = cs_value; return cs_value; }());
}
for (v_num7_143486 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num7_143486; auto cs_right = (v_array4_142120).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num7_143486; auto cs_new = pls::cs::add_i32(cs_old,1); v_num7_143486 = cs_new; return cs_old; }())) {
cs_label_recoveredSendRetry: ;
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text8_139083; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_845940c7d8ab8fe2(cs_receiver,cs_arg0); }());
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_url_142046; pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array5_142193; auto cs_index = v_num7_143486; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg2 = ([&]() { auto cs_array = v_array6_142243; auto cs_index = v_num7_143486; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg3 = v_date_138888; pls::cs::Array<std::uint8_t> cs_arg4 = ([&]() { auto cs_array = v_array4_142120; auto cs_index = v_num7_143486; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f1241afac3e9e8f5(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
continue;
} catch(const pls::cs::Exception& cs_caught_739) {auto cs_exception_739=pls::cs::capture_exception(cs_caught_739);
if(pls::cs::exception_is(cs_exception_739,"System.Exception")) {auto v_t_143679=cs_exception_739;{
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_143679; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
}
v_dialog_143783 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\xff74" u"\xff97" u"\xff70" u"",3)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_143783); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30a8" u"\x30e9" u"\x30fc" u"\x304c" u"\x767a" u"\x751f" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x30ea" u"\x30c8" u"\x30e9" u"\x30a4" u"\x3057" u"\x307e" u"\x3059" u"\x304b" u"\xff1f" u"",20)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_143783); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left == cs_right); }())) {
while (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetKeypadState(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
try {
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x64ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_740) {auto cs_exception_740=pls::cs::capture_exception(cs_caught_740);
if(pls::cs::exception_is(cs_exception_740,"System.Threading.ThreadAbortException")) {{

}}
else {throw;} }
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_2981baf401ba64bb = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClearKeyBuffer(); }());
goto cs_label_recoveredSendOuterEnd;
}
}}
else {throw;} }
goto cs_label_recoveredSendRetry;
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::String(u"");cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
v_dialog2_144326 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x5b8c" u"\x4e86" u"",2)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_144326); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x9001" u"\x4fe1" u"\x3092" u"\x5b8c" u"\x4e86" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x000a" u"\x3054" u"\x5354" u"\x529b" u"\x3042" u"\x308a" u"\x304c" u"\x3068" u"\x3046" u"\x3054" u"\x3056" u"\x3044" u"\x307e" u"\x3059" u"\x3002" u"\x000a" u"\x4eca" u"\x5f8c" u"\x3082" u"\x30ab" u"\x30a4" u"\x30ed" u"\x30d1" u"\x30fc" u"\x30af" u"\x3092" u"\x5b9c" u"\x3057" u"\x304f" u"\x304a" u"\x9858" u"\x3044" u"\x81f4" u"\x3057" u"\x307e" u"\x3059" u"\x3002" u"",47)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_144326); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
return;
}
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x64ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_741) {auto cs_exception_741=pls::cs::capture_exception(cs_caught_741);
if(pls::cs::exception_is(cs_exception_741,"System.Exception")) {auto v_t2_144515=cs_exception_741;{
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t2_144515; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
}
v_dialog3_144605 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\xff74" u"\xff97" u"\xff70" u"",3)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog3_144605); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30a8" u"\x30e9" u"\x30fc" u"\x304c" u"\x767a" u"\x751f" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x30ea" u"\x30c8" u"\x30e9" u"\x30a4" u"\x3057" u"\x307e" u"\x3059" u"\x304b" u"\xff1f" u"",20)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog3_144605); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left == cs_right); }())) {
while (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetKeypadState(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
try {
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x64ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_742) {auto cs_exception_742=pls::cs::capture_exception(cs_caught_742);
if(pls::cs::exception_is(cs_exception_742,"System.Threading.ThreadAbortException")) {{

}}
else {throw;} }
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_2981baf401ba64bb = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClearKeyBuffer(); }());
}
}}
else {throw;} }
cs_label_recoveredSendOuterEnd: ;
;
}
}
}
}
}

// M:main.AppData.SendSaveData(System.String,System.Int32)
void cs_463a9e14579423e5(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_text,std::int32_t v_type) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text; std::int32_t cs_arg1 = v_type; pls::cs::Ref<pls::cs::ExceptionObject> cs_arg2 = pls::cs::Ref<pls::cs::ExceptionObject>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e51d08967835b92f(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}

// M:main.AppData.SendSaveData(System.String)
void cs_bb04d65e23009190(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_text) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text; bool cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8b5f17f6255af03d(cs_receiver,cs_arg0,cs_arg1); }());
}
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
}
