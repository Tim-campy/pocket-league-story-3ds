 auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1e0ull)); return (cs_left > cs_right); }())) && ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_50293); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1e0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bc7b8b04f006df42(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); bool cs_arg0 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bc7b8b04f006df42(cs_receiver,cs_arg0); }());
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
} catch(const pls::cs::Exception& cs_caught_717) {auto cs_exception_717=pls::cs::capture_exception(cs_caught_717);
if(pls::cs::exception_is(cs_exception_717,"System.Exception")) {auto v_t_50627=cs_exception_717;{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_50627; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}}
else {throw;} }
}
}
}
}

// M:main.AppData.PhpDlFile(System.String,System.String)
pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_4b1fa6248654b253(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_dir,pls::cs::String v_file) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.PhpDlFile(System.String,System.String)",game);
{
pls::cs::String v_url_44670 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.PhpDlFile(System.String,System.String):44676",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.PhpDlFile(System.String,System.String):44676",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.PhpDlFile(System.String,System.String):44676",([&]() { auto cs_left = pls::generated::cs_716a03e631cc2599(); auto cs_right = (((([&]() { auto cs_left = pls::cs::box(v_dir); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ? (pls::cs::String(u"")) : ((pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.PhpDlFile(System.String,System.String):44730",([&]() { auto cs_left = v_dir; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002f" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())))))); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_file; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",4);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }()));
return ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { pls::cs::String cs_arg0 = v_url_44670; pls::cs::Array<std::uint8_t> cs_arg1 = pls::cs::Array<std::uint8_t>{}; bool cs_arg2 = false; bool cs_arg3 = true; return cs_54dec6a9b058dafd(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
}

// M:main.AppData.PlayBgm(System.Int32)
void cs_1ca8cad04edda95c(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_bgm) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.PlayBgm(System.Int32)",game);
{
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3c515a641b6b6cb5; }()); auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0061" u"\x0070" u"",2);return cs_literal;}()); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());})) {
return;
}
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_528d7332c1044dd7; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_bgm; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetState(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
return;
}
for (std::int32_t v_i_90958 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_90958; auto cs_right = (cs_f0160227dfac6551()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_90958; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_90958 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_528d7332c1044dd7; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = ([&]() { auto cs_array = cs_f0160227dfac6551(); auto cs_index = v_i_90958; return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetState(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_528d7332c1044dd7; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = ([&]() { auto cs_array = cs_f0160227dfac6551(); auto cs_index = v_i_90958; return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Stop(); }());});
}
}
pls::cs::Ref<pls::kairo::SoundPlayer> v_instance_91109 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::SoundPlayer> { return pls::kairo::SoundPlayer::GetInstance(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(v_instance_91109); pls::cs::Ref<pls::kairo::SoundBase> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_528d7332c1044dd7; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_bgm; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Play(cs_arg0); }());});
}
}
}
}

// M:main.AppData.PlayJingle(System.Int32)
void cs_fac1396bd1214784(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_jingle) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.PlayJingle(System.Int32)",game);
{
([&]() -> void { pls::cs::Ref<pls::kairo::SoundBase> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_528d7332c1044dd7; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_jingle; return cs_array.get_Item(cs_index); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); cs_c664e46032693c99(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); std::int32_t cs_arg0 = v_jingle; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a3dc092674ab6de6(cs_receiver,cs_arg0); }());
}
}
}
}

// M:main.AppData.PlaySe(System.Int32)
void cs_a3dc092674ab6de6(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_se) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.PlaySe(System.Int32)",game);
{
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3c515a641b6b6cb5; }()); auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0061" u"\x0070" u"",2);return cs_literal;}()); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());})) {
return;
}
{
pls::cs::Ref<pls::kairo::SoundPlayer> v_instance_91300 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::SoundPlayer> { return pls::kairo::SoundPlayer::GetInstance(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(v_instance_91300); pls::cs::Ref<pls::kairo::SoundBase> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_528d7332c1044dd7; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_se; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Play(cs_arg0); }());});
}
}
}
}
}

// M:main.AppData.Post(System.String,System.String,System.String,System.String,System.Byte[])
void cs_f1241afac3e9e8f5(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_url,pls::cs::String v_file,pls::cs::String v_index,pls::cs::String v_date,pls::cs::Array<std::uint8_t> v_data) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.Post(System.String,System.String,System.String,System.String,System.Byte[])",game);
{
([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.Post(System.String,System.String,System.String,System.String,System.Byte[]):146639",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.Post(System.String,System.String,System.String,System.String,System.Byte[]):146639",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.Post(System.String,System.String,System.String,System.String,System.Byte[]):146639",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.Post(System.String,System.String,System.String,System.String,System.Byte[]):146639",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.Post(System.String,System.String,System.String,System.String,System.Byte[]):146639",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.Post(System.String,System.String,System.String,System.String,System.Byte[]):146639",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.Post(System.String,System.String,System.String,System.String,System.Byte[]):146639",([&]() { auto cs_left = v_url; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0026" u"\x0066" u"\x0069" u"\x006c" u"\x0065" u"\x003d" u"",6);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_file; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0026" u"\x0069" u"\x006e" u"\x0064" u"\x0065" u"\x0078" u"\x003d" u"",7);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_index; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0026" u"\x0064" u"\x0061" u"\x0074" u"\x0065" u"\x003d" u"\x0028" u"",7);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_date; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0029" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); pls::cs::Array<std::uint8_t> cs_arg1 = v_data; bool cs_arg2 = true; return cs_97ad906b29abf8fb(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}

// M:main.AppData.Print(System.String)
void cs_9b142b0c3e92ca63(pls::cs::String v_str) { cs_init_2ffa6f51468590ea();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.Print(System.String)",game);
{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.Print(System.String):125948",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x25a0" u"",1);return cs_literal;}()); auto cs_right = v_str; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
}
}
}

// M:main.AppData.Push(kairo.unity.form.FormBase)
bool cs_68fcb18265769d80(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::FormBase> v_form) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.Push(kairo.unity.form.FormBase)",game);
{
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_83091 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_83091); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_83091); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetCurrentForm(); }());}); pls::cs::Ref<pls::kairo::FormBase> cs_arg1 = v_form; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0,cs_arg1); }());});
}
}
}
}

// M:main.AppData.Random(System.Int32)
std::int32_t cs_15f77c54ef987b54(std::int32_t v_total) { cs_init_2ffa6f51468590ea();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.Random(System.Int32)",game);
{
return ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_total; return cs_fd17a5b5e4e50b65(cs_arg0); }());
}
}
}

// M:main.AppData.RemoveAllMenuForms
bool cs_fc39345b3033cf90(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.RemoveAllMenuForms",game);
{
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_93940 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
std::int32_t v_formsNum_93985 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_93940); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }());});
for (std::int32_t v_num_94032 = ([&]() -> std::int32_t { auto cs_left = v_formsNum_93985; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_94032; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_94032; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_94032 = cs_new; return cs_old; }())) {
pls::cs::Ref<pls::kairo::FormBase> v_form_94087 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_93940); std::int32_t cs_arg0 = v_num_94032; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }());});
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_form_94087); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left != cs_right); }())) {
continue;
}
pls::cs::Ref<cs_a2cea92715051fa5> v_subForm_94166 = pls::cs::unbox<pls::cs::Ref<cs_a2cea92715051fa5>>(pls::cs::box(v_form_94087));
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_a2cea92715051fa5>>(v_subForm_94166); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4214a8e7a6aa2068(cs_receiver); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_93940); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_subForm_94166; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(cs_arg0); }());});
}
}
return true;
}
}
}
}

// M:main.AppData.RemoveeEffect
void cs_1ef08a4806059060(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.RemoveeEffect",game);
{
for (std::int32_t v_num_90217 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_90217; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_90217; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_90217 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_num_90217; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());});
}
}
}
}
}

// M:main.AppData.RemovePopupMessages(System.Int32)
void cs_c86a21cd0da793c3(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_id) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.RemovePopupMessages(System.Int32)",game);
{
for (std::int32_t v_num_132962 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_132962; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_132962; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_132962 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_array_133030 = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); std::int32_t cs_arg0 = v_num_132962; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = (pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() { auto cs_array = v_array_133030; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()))); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); std::int32_t cs_arg0 = v_num_132962; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());});
}
}
}
}
}
}

// M:main.AppData.ResourceReDownload
void cs_04cd481033911765(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.ResourceReDownload",game);
{

}
}
}
}

// M:main.AppData.RotatePoint(System.Int32,System.Int32,System.Int32)
pls::cs::Array<std::int32_t> cs_976ef96162c4c2b4(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_x,std::int32_t v_y,std::int32_t v_dir) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.RotatePoint(System.Int32,System.Int32,System.Int32)",game);
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
}

// M:main.AppData.SaveGame
void cs_9abd6db92a325acc(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SaveGame",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1a8f5c64147b3e5b(cs_receiver,cs_arg0); }());
}
}
}
}

// M:main.AppData.SaveGame(System.Boolean)
void cs_1a8f5c64147b3e5b(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,bool v_auto) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SaveGame(System.Boolean)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::RecordStore> v_recordStore_50798 = pls::cs::Ref<pls::kairo::RecordStore>{};
pls::cs::Ref<pls::generated::cs_fb60578b3098a284> v_byteArrayOutputStream_50843 = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{};
if ((pls::generated::cs_4cc76a7a43706693() && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x25a0" u"\x0041" u"\x0070" u"\x0070" u"\x0044" u"\x0061" u"\x0074" u"\x0061" u"\x002e" u"\x006a" u"\x0061" u"\x0076" u"\x0061" u"\x0020" u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x0047" u"\x0061" u"\x006d" u"\x0065" u"\x0028" u"\x0029" u"\x0020" u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x005f" u"\x0020" u"\x003d" u"\x003d" u"\x0020" u"\x006e" u"\x0075" u"\x006c" u"\x006c" u"",38);return cs_literal;}()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d8524a356e38017; }()); pls::game::cs_require(cs_target)->cs_72da38f2b646e254 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):51115",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; std::int32_t cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7f9e0682751f782; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
for (std::int32_t v_i_51226 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_51226; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7f9e0682751f782; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_51226; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_51226 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
pls::cs::Ref<cs_456d3d004decc356> v_delayEvent_51305 = pls::cs::unbox<pls::cs::Ref<cs_456d3d004decc356>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7f9e0682751f782; }())); std::int32_t cs_arg0 = v_i_51226; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_456d3d004decc356>>(v_delayEvent_51305); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4178ca56a2eb6f02(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):51573",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_j_51615 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_51615; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab1e9b1101610757; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_51615; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_51615 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8f8054b388e3f93e>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab1e9b1101610757; }()); auto cs_index = v_j_51615; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_269ea8f6a92d2b89(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):51846",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_k_51888 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_51888; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_51888; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_51888 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3e5b0d35ae6be8e7>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }()); auto cs_index = v_k_51888; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4503351df0f1771f(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):52121",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_l_52163 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_52163; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_52163; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_52163 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd3043ac164d021f>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }()); auto cs_index = v_l_52163; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1613937bf1e1ad15(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):52406",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_m_52448 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_52448; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_52448; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_52448 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5beb6285da308d06>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }()); auto cs_index = v_m_52448; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_746513213ef872e5(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):52695",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_n_52737 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_n_52737; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c7e3a6362e30637; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_52737; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_52737 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d22b1a8b100a0cab>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c7e3a6362e30637; }()); auto cs_index = v_n_52737; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_65e6e8cf5fc4699e(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):52980",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num_53022 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num_53022; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38b063657ea0f85; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num_53022; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_53022 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6803fd77f880b974>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38b063657ea0f85; }()); auto cs_index = v_num_53022; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d5cb91a571e7b87c(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):53272",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num2_53314 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num2_53314; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num2_53314; auto cs_new = pls::cs::add_i32(cs_old,1); v_num2_53314 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_169021fb033627ed>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }()); auto cs_index = v_num2_53314; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dbc8b1e682acfdab(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):53558",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num3_53600 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num3_53600; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b71369152562ebeb; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num3_53600; auto cs_new = pls::cs::add_i32(cs_old,1); v_num3_53600 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_76884ad002dceb7a>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b71369152562ebeb; }()); auto cs_index = v_num3_53600; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_29c7e6234270da65(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):53854",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num4_53896 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num4_53896; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86eaf5d444f8e536; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num4_53896; auto cs_new = pls::cs::add_i32(cs_old,1); v_num4_53896 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ec7bde62b3c2b35f>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86eaf5d444f8e536; }()); auto cs_index = v_num4_53896; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bb060af473fce27c(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):54150",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num5_54192 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num5_54192; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39dbfa9f37472c19; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num5_54192; auto cs_new = pls::cs::add_i32(cs_old,1); v_num5_54192 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_69a97d2bf5ede86d>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39dbfa9f37472c19; }()); auto cs_index = v_num5_54192; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c3c802ec2eaa524b(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):54442",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num6_54484 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num6_54484; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num6_54484; auto cs_new = pls::cs::add_i32(cs_old,1); v_num6_54484 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ba9af87bc2bff5b4>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }()); auto cs_index = v_num6_54484; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_feaa7acb9d6c4e25(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):54737",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num7_54779 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num7_54779; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num7_54779; auto cs_new = pls::cs::add_i32(cs_old,1); v_num7_54779 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4489b86073532f79>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }()); auto cs_index = v_num7_54779; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4feb02c73e4cf20f(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):55038",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num8_55080 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num8_55080; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num8_55080; auto cs_new = pls::cs::add_i32(cs_old,1); v_num8_55080 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4489b86073532f79>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }()); auto cs_index = v_num8_55080; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4feb02c73e4cf20f(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):55339",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num9_55381 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num9_55381; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num9_55381; auto cs_new = pls::cs::add_i32(cs_old,1); v_num9_55381 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b68aa9c3dd5cf14c>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }()); auto cs_index = v_num9_55381; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d5cc43a853b66354(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):55636",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ca6f5bbc06a496a9>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9a33424672d806b2; }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bc6918d3999db00d(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x13ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):55851",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_50dfaae2579fc0e5(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):56065",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num10_56107 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num10_56107; auto cs_right = (([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_adb25bcb8b2e59bb; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num10_56107; auto cs_new = pls::cs::add_i32(cs_old,1); v_num10_56107 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_a9f43a9b869eaae8>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_adb25bcb8b2e59bb; }()); auto cs_index = v_num10_56107; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3a0f6398a75c8024(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x15ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }());}); v_recordStore_50798 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_50798); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); pls::cs::Array<std::uint8_t> cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_944778f16504220d(cs_receiver); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->WriteRecord(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1full)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int64_t cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_45bf8972ccfd60d6(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
if (pls::generated::cs_4cc76a7a43706693()) {
std::int32_t v_num11_56876 = (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_944778f16504220d(cs_receiver); }());})).length();
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):56926",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):56926",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):56926",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):56926",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):56926",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveGame(System.Boolean):56926",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x003a" u"",5);return cs_literal;}()); auto cs_right = pls::game::cs_integer_string(v_num11_56876); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0062" u"\x0079" u"\x0074" u"\x0065" u"\x0020" u"\x0028" u"",6);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = v_num11_56876; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return pls::cs::div_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002e" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num11_56876; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return pls::cs::div_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006b" u"\x0062" u"\x0029" u"",3);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_byteArrayOutputStream_50843); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());});
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{}; v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_recordStore_50798); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_50798); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());});
}
([&]() { auto cs_value = pls::cs::Ref<pls::kairo::RecordStore>{}; v_recordStore_50798 = cs_value; return cs_value; }());
});
}
}
}
}

// M:main.AppData.SaveSystem
void cs_38f421ed8909306b(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SaveSystem",game);
{
pls::cs::Ref<pls::kairo::RecordStore> v_recordStore_49422 = pls::cs::Ref<pls::kairo::RecordStore>{};
pls::cs::run_finally([&]() -> void { try {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }());}); v_recordStore_49422 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_49422); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Array<std::uint8_t> cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_944778f16504220d(cs_receiver); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->WriteRecord(cs_arg0,cs_arg1); }());});
if ((pls::generated::cs_01d5980f91155b3c() && pls::generated::cs_4cc76a7a43706693())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SaveSystem:49622",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x25a0" u"\x0041" u"\x0070" u"\x0070" u"\x0044" u"\x0061" u"\x0074" u"\x0061" u"\x002e" u"\x006a" u"\x0061" u"\x0076" u"\x0061" u"\x0020" u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x0053" u"\x0079" u"\x0073" u"\x0074" u"\x0065" u"\x006d" u"\x0028" u"\x0029" u"\x0020" u"\x0073" u"\x0079" u"\x0073" u"\x0053" u"\x0061" u"\x0076" u"\x0065" u"\x005f" u"\x002e" u"\x0074" u"\x006f" u"\x0042" u"\x0079" u"\x0074" u"\x0065" u"\x0041" u"\x0072" u"\x0072" u"\x0061" u"\x0079" u"\x0028" u"\x0029" u"\x002e" u"\x006c" u"\x0065" u"\x006e" u"\x0067" u"\x0074" u"\x0068" u"\x0020" u"\x003d" u"\x0020" u"",59);return cs_literal;}()); auto cs_right = pls::game::cs_integer_string((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_944778f16504220d(cs_receiver); }());})).length()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
} catch(const pls::cs::Exception& cs_caught_356) {auto cs_exception_356=pls::cs::capture_exception(cs_caught_356);
if(pls::cs::exception_is(cs_exception_356,"System.Exception")) {auto v_t_49738=cs_exception_356;{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_49738; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}}
else {throw;} } }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_recordStore_49422); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_49422); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());});
}
([&]() { auto cs_value = pls::cs::Ref<pls::kairo::RecordStore>{}; v_recordStore_49422 = cs_value; return cs_value; }());
});
}
}
}
}

// M:main.AppData.SbyteArrayToBoolean(System.Byte[],System.Int32)
pls::cs::Array<bool> cs_6adeca0fd238e2d4(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::uint8_t> v_src,std::int32_t v_size) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SbyteArrayToBoolean(System.Byte[],System.Int32)",game);
{
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_97056 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SbyteArrayToBoolean(System.Byte[],System.Int32):97079",([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = v_src; return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()));
std::int32_t v_num_97117 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_97056; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());});
if (([&]() -> bool { auto cs_left = v_size; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_num_97117; v_size = cs_value; return cs_value; }());
}
pls::cs::Array<bool> v_array_97220 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SbyteArrayToBoolean(System.Byte[],System.Int32):97228",pls::cs::Array<bool>::make(v_size));
for (std::int32_t v_i_97256 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); (([&]() -> bool { auto cs_left = v_i_97256; auto cs_right = v_num_97117; return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = v_i_97256; auto cs_right = (v_array_97220).length(); return (cs_left < cs_right); }())); ([&]() { auto cs_old = v_i_97256; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_97256 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_97220; auto cs_index = v_i_97256; auto cs_value = ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_97056; return pls::generated::cs_1207de83c3a46662(cs_arg0); }());})); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_97056); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());});
return v_array_97220;
}
}
}
}

// M:main.AppData.SbyteArrayToBoolean(System.Byte[])
pls::cs::Array<bool> cs_1ac265addce78873(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::uint8_t> v_src) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SbyteArrayToBoolean(System.Byte[])",game);
{
return ([&]() -> pls::cs::Array<bool> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Array<std::uint8_t> cs_arg0 = v_src; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6adeca0fd238e2d4(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}

// M:main.AppData.SbyteArrayToInt(System.Byte[],System.Int32)
pls::cs::Array<std::int32_t> cs_83519dceef52cfef(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::uint8_t> v_src,std::int32_t v_size) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SbyteArrayToInt(System.Byte[],System.Int32)",game);
{
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_98000 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SbyteArrayToInt(System.Byte[],System.Int32):98023",([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = v_src; return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()));
std::int32_t v_num_98061 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_98000; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());});
if (([&]() -> bool { auto cs_left = v_size; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_num_98061; v_size = cs_value; return cs_value; }());
}
pls::cs::Array<std::int32_t> v_array_98163 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SbyteArrayToInt(System.Byte[],System.Int32):98171",pls::cs::Array<std::int32_t>::make(v_size));
for (std::int32_t v_i_98198 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); (([&]() -> bool { auto cs_left = v_i_98198; auto cs_right = v_num_98061; return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = v_i_98198; auto cs_right = (v_array_98163).length(); return (cs_left < cs_right); }())); ([&]() { auto cs_old = v_i_98198; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_98198 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_98163; auto cs_index = v_i_98198; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_98000; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_98000); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());});
return v_array_98163;
}
}
}
}

// M:main.AppData.SbyteArrayToInt(System.Byte[])
pls::cs::Array<std::int32_t> cs_9860ae9d692b87ac(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::uint8_t> v_src) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SbyteArrayToInt(System.Byte[])",game);
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::Array<std::uint8_t> cs_arg0 = v_src; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_83519dceef52cfef(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}

// M:main.AppData.SearchInteger(System.Int32[],System.Int32)
std::int32_t cs_7f2d55b45a07fbae(pls::cs::Array<std::int32_t> v_array,std::int32_t v_key) { cs_init_2ffa6f51468590ea();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SearchInteger(System.Int32[],System.Int32)",game);
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
}

// M:main.AppData.SendSaveData(System.String,System.Boolean,System.Exception)
void cs_226a08f2e67db01f(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_text,bool v_scratchpad,pls::cs::Ref<pls::cs::ExceptionObject> v_th) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SendSaveData(System.String,System.Boolean,System.Exception)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text; std::int32_t cs_arg1 = (v_scratchpad ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); pls::cs::Ref<pls::cs::ExceptionObject> cs_arg2 = v_th; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e51d08967835b92f(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}

// M:main.AppData.SendSaveData(System.String,System.Boolean)
void cs_8b5f17f6255af03d(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_text,bool v_scratchpad) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SendSaveData(System.String,System.Boolean)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text; bool cs_arg1 = v_scratchpad; pls::cs::Ref<pls::cs::ExceptionObject> cs_arg2 = pls::cs::Ref<pls::cs::ExceptionObject>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_226a08f2e67db01f(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}

// M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception)
void cs_e51d08967835b92f(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_text,std::int32_t v_type,pls::cs::Ref<pls::cs::ExceptionObject> v_th) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception)",game);
{
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
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):137957",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):137957",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):137957",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):137957",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):137957",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0064" u"\x0065" u"\x0076" u"\x003d" u"",4);return cs_literal;}()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3c515a641b6b6cb5; }()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"\x0076" u"\x0065" u"\x0072" u"",4);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::game::cs_integer_string(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull))); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text; return pls::cs::String::concat(cs_left,cs_right); }())); v_text = cs_value; return cs_value; }());
v_instance_138017 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = pls::cs::String(u""); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::String cs_arg1 = pls::cs::String(u""); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1); }());});
v_instance2_138149 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::generated::cs_a465028bea3432a3> { return pls::generated::cs_23a91b30234d4879(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); pls::cs::Ref<pls::generated::cs_66dbad5679f8ab87> cs_arg0 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138207",([&]() -> pls::cs::Ref<pls::generated::cs_66dbad5679f8ab87> { std::int64_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); return pls::generated::cs_bbcadd583a6daacb(cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_e2c62bcb22f058c9(cs_receiver,cs_arg0); }());});
v_text2_138258 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138266",([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());})); return pls::cs::String::concat(cs_left,cs_right); }()));
v_text3_138309 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138317",([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string((([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return pls::cs::String::concat(cs_left,cs_right); }()));
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text3_138309; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138401",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0030" u"",1);return cs_literal;}()); auto cs_right = v_text3_138309; return pls::cs::String::concat(cs_left,cs_right); }())); v_text3_138309 = cs_value; return cs_value; }());
}
v_text4_138429 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138437",([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());})); return pls::cs::String::concat(cs_left,cs_right); }()));
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text4_138429; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138515",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0030" u"",1);return cs_literal;}()); auto cs_right = v_text4_138429; return pls::cs::String::concat(cs_left,cs_right); }())); v_text4_138429 = cs_value; return cs_value; }());
}
v_text5_138543 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138551",([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());})); return pls::cs::String::concat(cs_left,cs_right); }()));
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text5_138543; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138630",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0030" u"",1);return cs_literal;}()); auto cs_right = v_text5_138543; return pls::cs::String::concat(cs_left,cs_right); }())); v_text5_138543 = cs_value; return cs_value; }());
}
v_text6_138658 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138666",([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());})); return pls::cs::String::concat(cs_left,cs_right); }()));
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text6_138658; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138745",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0030" u"",1);return cs_literal;}()); auto cs_right = v_text6_138658; return pls::cs::String::concat(cs_left,cs_right); }())); v_text6_138658 = cs_value; return cs_value; }());
}
v_text7_138773 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138781",([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance2_138149); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());})); return pls::cs::String::concat(cs_left,cs_right); }()));
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text7_138773; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138860",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0030" u"",1);return cs_literal;}()); auto cs_right = v_text7_138773; return pls::cs::String::concat(cs_left,cs_right); }())); v_text7_138773 = cs_value; return cs_value; }());
}
v_date_138888 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138895",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138895",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138895",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138895",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138895",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138895",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138895",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138895",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138895",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138895",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138895",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):138895",([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = v_text2_138258; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002e" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text3_138309; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002e" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text4_138429; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text5_138543; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002e" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text6_138658; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002e" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text7_138773; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()));
v_flag_139010 = false;
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_2981baf401ba64bb = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClearKeyBuffer(); }());});
v_text8_139083 = pls::cs::String{};
if (([&]() { auto cs_left = pls::cs::box(v_th); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::cs::String(u""); v_text8_139083 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::String { return cs_9ec572c71522df31(); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
v_text9_139201 = ([&]() -> pls::cs::String { return cs_9ec572c71522df31(); }());
v_num_139238 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text9_139201; auto cs_arg1 = char16_t(47); return pls::game::cs_last_index_char1(cs_arg0,cs_arg1); }());});
if (([&]() -> bool { auto cs_left = v_num_139238; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text9_139201; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num_139238; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_51d6c186b8b049a1(cs_arg0,cs_arg1); }()); v_text9_139201 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text9_139201; auto cs_arg1 = char16_t(46); return pls::game::cs_last_index_char1(cs_arg0,cs_arg1); }());}); v_num_139238 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_139238; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text9_139201; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = v_num_139238; return pls::generated::cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); v_text9_139201 = cs_value; return cs_value; }());
}
pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):139457",([&]() { auto cs_old = v_text8_139083; auto cs_rhs = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):139466",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):139466",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):139466",([&]() { auto cs_left = v_text9_139201; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002c" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { return cs_3c5e64aab4be4dca(); }())); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text8_139083 = cs_value; return cs_value; }()));
}
v_text11_139525 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):139534",([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_object_string(pls::cs::box(v_th)); return pls::cs::String::concat(cs_left,cs_right); }()));
v_text12_139564 = pls::game::cs_require(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(v_th);return pls::cs::RuntimeType::for_name(pls::game::cs_require(cs_receiver)->managed_type_name());}());}))->get_Name();
v_num2_139600 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text12_139564; auto cs_arg1 = char16_t(46); return pls::game::cs_last_index_char1(cs_arg0,cs_arg1); }());});
if (([&]() -> bool { auto cs_left = v_num2_139600; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text12_139564; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num2_139600; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_51d6c186b8b049a1(cs_arg0,cs_arg1); }()); v_text12_139564 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text11_139525; auto cs_arg1 = v_text12_139564; return pls::cs::culture_index_of(cs_arg0,cs_arg1); }());}); v_num2_139600 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num2_139600; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text11_139525; std::int32_t cs_arg1 = v_num2_139600; return pls::generated::cs_51d6c186b8b049a1(cs_arg0,cs_arg1); }()); v_text11_139525 = cs_value; return cs_value; }());
}
if (pls::game::cs_is<pls::cs::Ref<pls::generated::cs_7254e4706a01e4e7>>(pls::cs::box(v_th))) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):139868",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):139868",([&]() { auto cs_left = v_text11_139525; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002c" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::game::cs_integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7254e4706a01e4e7>>((pls::cs::unbox<pls::cs::Ref<pls::generated::cs_7254e4706a01e4e7>>(pls::cs::box(v_th)))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_bf1ddcf69d442d48(cs_receiver); }());})); return pls::cs::String::concat(cs_left,cs_right); }())); v_text11_139525 = cs_value; return cs_value; }());
}
if (pls::game::cs_is<pls::cs::Ref<cs_27b8baf7307cff9f>>(pls::cs::box(v_th))) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):139975",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):139975",([&]() { auto cs_left = v_text11_139525; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002c" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_27b8baf7307cff9f>>((pls::cs::unbox<pls::cs::Ref<cs_27b8baf7307cff9f>>(pls::cs::box(v_th)))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_31cf637794688433(cs_receiver); }())); return pls::cs::String::concat(cs_left,cs_right); }())); v_text11_139525 = cs_value; return cs_value; }());
}
pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):140031",([&]() { auto cs_old = v_text8_139083; auto cs_rhs = v_text11_139525; auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text8_139083 = cs_value; return cs_value; }()));
}
if (([&]() -> bool { auto cs_left = pls::generated::cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text8_139083; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_845940c7d8ab8fe2(cs_receiver,cs_arg0); }());
while (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetKeypadState(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
try {
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x64ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_736) {auto cs_exception_736=pls::cs::capture_exception(cs_caught_736);
if(pls::cs::exception_is(cs_exception_736,"System.Threading.ThreadAbortException")) {{

}}
else {throw;} }
}
}
while (true) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DecideKeyState(); }());});
try {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2981baf401ba64bb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text8_139083; bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4cd27e7696a39ccb(cs_receiver,cs_arg0,cs_arg1); }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }());})) {
([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); pls::cs::String cs_arg0 = v_text8_139083; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0c63416912f65567(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_2981baf401ba64bb = cs_value; return cs_value; }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2981baf401ba64bb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text8_139083; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_845940c7d8ab8fe2(cs_receiver,cs_arg0); }());
v_array_140651 = pls::cs::Array<std::uint8_t>{};
if (([&]() -> bool { auto cs_left = pls::generated::cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):140727",([&]() { auto cs_old = v_text; auto cs_rhs = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"\x0073" u"\x0063" u"\x0072" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x0070" u"\x0061" u"\x0064" u"",11);return cs_literal;}()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text = cs_value; return cs_value; }()));
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_611e38080e0184ae(cs_arg0); }()); return cs_0478a420e3edd658(cs_arg0,cs_arg1,cs_arg2); }()); v_array_140651 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
{
pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):140862",([&]() { auto cs_old = v_text; auto cs_rhs = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"\x0061" u"\x006c" u"\x006c" u"\x002d" u"\x0073" u"\x0063" u"\x0072" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x0070" u"\x0061" u"\x0064" u"",15);return cs_literal;}()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text = cs_value; return cs_value; }()));
v_array2_140904 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_611e38080e0184ae(cs_arg0); }()); return cs_0478a420e3edd658(cs_arg0,cs_arg1,cs_arg2); }());
v_array3_140984 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_611e38080e0184ae(cs_arg0); }()); return cs_0478a420e3edd658(cs_arg0,cs_arg1,cs_arg2); }());
([&]() { auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):141065",pls::cs::Array<std::uint8_t>::make(([&]() -> std::int32_t { auto cs_left = (v_array2_140904).length(); auto cs_right = (v_array3_140984).length(); return pls::cs::add_i32(cs_left,cs_right); }()))); v_array_140651 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array2_140904); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_array_140651); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (v_array2_140904).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array3_140984); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_array_140651); std::int32_t cs_arg3 = (v_array2_140904).length(); std::int32_t cs_arg4 = (v_array3_140984).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
}
} else if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
try {
v_recordStore_141306 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }());});
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::kairo::RecordStore::ReadRecord(cs_arg0,cs_arg1); }());}); v_array_140651 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_141306); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());});
} catch(const pls::cs::Exception& cs_caught_737) {auto cs_exception_737=pls::cs::capture_exception(cs_caught_737);
if(pls::cs::exception_is(cs_exception_737,"System.Exception")) {auto v_ex2_141479=cs_exception_737;{
if ((!(v_flag_139010))) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):141549",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):141549",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):141549",([&]() { auto cs_left = v_text; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"\x0052" u"\x0065" u"\x0063" u"\x006f" u"\x0072" u"\x0064" u"\x0053" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"\x005b" u"",13);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = v_ex2_141479; return pls::game::cs_require(cs_receiver)->ToString(); }());}); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005d" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); v_text = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_611e38080e0184ae(cs_arg0); }()); return cs_0478a420e3edd658(cs_arg0,cs_arg1,cs_arg2); }()); v_array_140651 = cs_value; return cs_value; }());
([&]() { auto cs_value = true; v_flag_139010 = cs_value; return cs_value; }());
}}
else {throw;} }
}
} else if (([&]() -> bool { auto cs_left = pls::generated::cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
try {
v_recordStore2_141808 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }());});
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::kairo::RecordStore::ReadRecord(cs_arg0,cs_arg1); }());}); v_array_140651 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore2_141808); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());});
} catch(const pls::cs::Exception& cs_caught_738) {auto cs_exception_738=pls::cs::capture_exception(cs_caught_738);
if(pls::cs::exception_is(cs_exception_738,"System.Exception")) {{
([&]() { auto cs_value = true; v_flag_139010 = cs_value; return cs_value; }());
}}
else {throw;} }
}
v_url_142046 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):142052",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):142052",([&]() { auto cs_left = pls::generated::cs_29a6912fb32f7990(); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0026" u"\x0076" u"\x0065" u"\x0072" u"\x003d" u"",5);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::game::cs_integer_string(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull))); return pls::cs::String::concat(cs_left,cs_right); }()));
v_num3_142092 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc800ull));
v_array4_142120 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):142129",pls::cs::Array<pls::cs::Array<std::uint8_t>>::make(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (v_array_140651).length(); auto cs_right = v_num3_142092; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = v_num3_142092; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())));
v_array5_142193 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):142202",pls::cs::Array<pls::cs::String>::make((v_array4_142120).length()));
v_array6_142243 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):142252",pls::cs::Array<pls::cs::String>::make((v_array5_142193).length()));
if (pls::generated::cs_b0827224162a4f93()) {
v_str_142322 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):142328",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):142328",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):142328",([&]() { auto cs_left = (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()) : pls::cs::String(u""))); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }()));
try {
v_recordStore3_142436 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }());});
v_data_142497 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::kairo::RecordStore::ReadRecord(cs_arg0,cs_arg1); }());});
v_property_142569 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):142580",([&]() -> pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e> { pls::cs::Array<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>> cs_arg0 = cs_4cfb7d4f52307756(); pls::cs::Array<std::int32_t> cs_arg1 = cs_b3c4355d79ad4a53(); pls::cs::Array<std::int64_t> cs_arg2 = cs_24baaac10d948736(); pls::cs::Array<pls::cs::String> cs_arg3 = cs_37df3dc1c8f8fe67(); pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_arg4 = cs_237ef7bad1a6bbb9(); return pls::generated::cs_e34104df98d3719c(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()));
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(v_property_142569); pls::cs::Array<std::uint8_t> cs_arg0 = v_data_142497; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_abffc02b85346a7d(cs_receiver,cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore3_142436); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());});
} catch(const pls::cs::Exception& cs_caught_739) {auto cs_exception_739=pls::cs::capture_exception(cs_caught_739);
if(pls::cs::exception_is(cs_exception_739,"System.Exception")) {{

}}
else {throw;} }
([&]() { auto cs_target = v_array4_142120; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_str_142322; return pls::generated::cs_a8e45b955b78e04d(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
([&]() { auto cs_target = v_array4_142120; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = (pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):142842",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):142842",([&]() { auto cs_left = (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()) : pls::cs::String(u""))); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text; return pls::cs::String::concat(cs_left,cs_right); }()))); return pls::generated::cs_a8e45b955b78e04d(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = v_array5_142193; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0069" u"\x006e" u"\x0066" u"\x006f" u"",4);return cs_literal;}());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array6_142243; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0030" u"",1);return cs_literal;}());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
v_num4_142981 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (v_i_143005 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_143005; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_array4_142120).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_143005; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_143005 = cs_new; return cs_old; }())) {
v_num5_143057 = ([&]() -> std::int32_t { auto cs_left = (v_array_140651).length(); auto cs_right = v_num4_142981; return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num5_143057; auto cs_right = v_num3_142092; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_num3_142092; v_num5_143057 = cs_value; return cs_value; }());
}
v_num6_143154 = ([&]() -> std::int32_t { auto cs_left = v_i_143005; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }());
([&]() { auto cs_target = v_array4_142120; auto cs_index = v_num6_143154; auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):143189",pls::cs::Array<std::uint8_t>::make(v_num5_143057));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array_140651); std::int32_t cs_arg1 = v_num4_142981; pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = v_array4_142120; auto cs_index = v_num6_143154; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = v_num5_143057; pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
([&]() { auto cs_target = v_array5_142193; auto cs_index = v_num6_143154; auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"",4);return cs_literal;}());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):143317",([&]() { auto cs_target = v_array5_142193; auto cs_index = v_num6_143154; auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002d" u"\x0073" u"\x0079" u"\x0073" u"",4);return cs_literal;}()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }()));
} else if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):143371",([&]() { auto cs_target = v_array5_142193; auto cs_index = v_num6_143154; auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002d" u"\x0061" u"\x006c" u"\x006c" u"",4);return cs_literal;}()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }()));
}
([&]() { auto cs_target = v_array6_142243; auto cs_index = v_num6_143154; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = v_i_143005; return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_old = v_num4_142981; auto cs_rhs = v_num5_143057; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num4_142981 = cs_value; return cs_value; }());
}
for (v_num7_143486 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num7_143486; auto cs_right = (v_array4_142120).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num7_143486; auto cs_new = pls::cs::add_i32(cs_old,1); v_num7_143486 = cs_new; return cs_old; }())) {
cs_label_recoveredSendRetry: ;
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text8_139083; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_845940c7d8ab8fe2(cs_receiver,cs_arg0); }());
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_url_142046; pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array5_142193; auto cs_index = v_num7_143486; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg2 = ([&]() { auto cs_array = v_array6_142243; auto cs_index = v_num7_143486; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg3 = v_date_138888; pls::cs::Array<std::uint8_t> cs_arg4 = ([&]() { auto cs_array = v_array4_142120; auto cs_index = v_num7_143486; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f1241afac3e9e8f5(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
continue;
} catch(const pls::cs::Exception& cs_caught_740) {auto cs_exception_740=pls::cs::capture_exception(cs_caught_740);
if(pls::cs::exception_is(cs_exception_740,"System.Exception")) {auto v_t_143679=cs_exception_740;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_143679; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
v_dialog_143783 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):143792",([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\xff74" u"\xff97" u"\xff70" u"",3);return cs_literal;}()); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_143783); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x30a8" u"\x30e9" u"\x30fc" u"\x304c" u"\x767a" u"\x751f" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x30ea" u"\x30c8" u"\x30e9" u"\x30a4" u"\x3057" u"\x307e" u"\x3059" u"\x304b" u"\xff1f" u"",20);return cs_literal;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_143783); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left == cs_right); }())) {
while (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetKeypadState(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
try {
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x64ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_741) {auto cs_exception_741=pls::cs::capture_exception(cs_caught_741);
if(pls::cs::exception_is(cs_exception_741,"System.Threading.ThreadAbortException")) {{

}}
else {throw;} }
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_2981baf401ba64bb = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClearKeyBuffer(); }());});
goto cs_label_recoveredSendOuterEnd;
}
}}
else {throw;} }
goto cs_label_recoveredSendRetry;
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::String(u"");cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
v_dialog2_144326 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):144336",([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x5b8c" u"\x4e86" u"",2);return cs_literal;}()); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_144326); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x9001" u"\x4fe1" u"\x3092" u"\x5b8c" u"\x4e86" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x000a" u"\x3054" u"\x5354" u"\x529b" u"\x3042" u"\x308a" u"\x304c" u"\x3068" u"\x3046" u"\x3054" u"\x3056" u"\x3044" u"\x307e" u"\x3059" u"\x3002" u"\x000a" u"\x4eca" u"\x5f8c" u"\x3082" u"\x30ab" u"\x30a4" u"\x30ed" u"\x30d1" u"\x30fc" u"\x30af" u"\x3092" u"\x5b9c" u"\x3057" u"\x304f" u"\x304a" u"\x9858" u"\x3044" u"\x81f4" u"\x3057" u"\x307e" u"\x3059" u"\x3002" u"",47);return cs_literal;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_144326); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
return;
}
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x64ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_742) {auto cs_exception_742=pls::cs::capture_exception(cs_caught_742);
if(pls::cs::exception_is(cs_exception_742,"System.Exception")) {auto v_t2_144515=cs_exception_742;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t2_144515; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
v_dialog3_144605 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/AppData.cs:M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception):144615",([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\xff74" u"\xff97" u"\xff70" u"",3);return cs_literal;}()); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog3_144605); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x30a8" u"\x30e9" u"\x30fc" u"\x304c" u"\x767a" u"\x751f" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x30ea" u"\x30c8" u"\x30e9" u"\x30a4" u"\x3057" u"\x307e" u"\x3059" u"\x304b" u"\xff1f" u"",20);return cs_literal;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog3_144605); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left == cs_right); }())) {
while (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetKeypadState(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
try {
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x64ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_743) {auto cs_exception_743=pls::cs::capture_exception(cs_caught_743);
if(pls::cs::exception_is(cs_exception_743,"System.Threading.ThreadAbortException")) {{

}}
else {throw;} }
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_2981baf401ba64bb = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_138017); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClearKeyBuffer(); }());});
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
}

// M:main.AppData.SendSaveData(System.String,System.Int32)
void cs_463a9e14579423e5(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_text,std::int32_t v_type) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SendSaveData(System.String,System.Int32)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text; std::int32_t cs_arg1 = v_type; pls::cs::Ref<pls::cs::ExceptionObject> cs_arg2 = pls::cs::Ref<pls::cs::ExceptionObject>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e51d08967835b92f(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}

// M:main.AppData.SendSaveData(System.String)
void cs_bb04d65e23009190(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_text) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SendSaveData(System.String)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); pls::cs::String cs_arg0 = v_text; bool cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8b5f17f6255af03d(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}

// M:main.AppData.SerializeScripts(java.io.OutputStream,java.util.Vector)
void cs_124c31e48b3fe662(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os,pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_scripts) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SerializeScripts(java.io.OutputStream,java.util.Vector)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_scripts); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
for (std::int32_t v_i_111194 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_111194; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_scripts); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_111194; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_111194 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_111241 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_scripts); std::int32_t cs_arg0 = v_i_111194; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = (v_array_111241).length(); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
for (std::int32_t v_j_111334 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_111334; auto cs_right = (v_array_111241).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_111334; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_111334 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_array = v_array_111241; auto cs_index = v_j_111334; return cs_array.get_Item(cs_index); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
}
}
}
}
}
}

// M:main.AppData.SetHighScore(System.Int64)
void cs_34a842e07132dc32(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int64_t v_score) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SetHighScore(System.Int64)",game);
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_score;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}

// M:main.AppData.SetMoneyHighScore(System.Int64)
void cs_e1e9cde920cf8975(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int64_t v_score) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SetMoneyHighScore(System.Int64)",game);
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_score;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}

// M:main.AppData.SetNetHighScore(System.Int64)
void cs_c158f59342f4a464(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int64_t v_score) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SetNetHighScore(System.Int64)",game);
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_score;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}

// M:main.AppData.SetNowStoreIndex(System.Int32)
void cs_f49bdf3aeb4aa05c(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_nowStore_index) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SetNowStoreIndex(System.Int32)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_nowStore_index; pls::game::cs_require(cs_target)->cs_dcdb2fb19217cbe2 = cs_value; return cs_value; }());
}
}
}
}

// M:main.AppData.SettMoneyNetHighScore(System.Int64)
void cs_3cef599a40dc9684(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int64_t v_score) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SettMoneyNetHighScore(System.Int64)",game);
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = v_score;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}

// M:main.AppData.ShowNews(System.Int32,System.String)
bool cs_6a1de08d8ad96966(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_id,pls::cs::String v_arg) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.ShowNews(System.Int32,System.String)",game);
{
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_91737 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_91737); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { std::int32_t cs_arg0 = v_id; pls::cs::String cs_arg1 = v_arg; return cs_6ab4e0e4e2fbf409(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_91737); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x958b" u"\x5e55" u"\xff77" u"\xff6f" u"\xff78" u"\xff75" u"\xff8c" u"\x901a" u"\x4fe1" u"\x000a" u"\x304c" u"\x767a" u"\x884c" u"\x3055" u"\x308c" u"\x307e" u"\x3057" u"\x305f" u"",18);return cs_literal;}()); return cs_c99c9d4e5fd84a90(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());});
}
}
}
}

// M:main.AppData.Sort(System.Int32[])
void cs_6dfeb96a20cdf0ae(pls::cs::Array<std::int32_t> v_list) { cs_init_2ffa6f51468590ea();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.Sort(System.Int32[])",game);
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
}

// M:main.AppData.SubMoney(System.Int32,System.Int32)
std::int64_t cs_58ba802eb16824af(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_sub,std::int32_t v_recordId) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.SubMoney(System.Int32,System.Int32)",game);
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int64_t { std::int64_t cs_arg0 = ([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(v_sub); return pls::cs::sub_i64(cs_left,cs_right); }()); std::int64_t cs_arg1 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x8000000000000000ull)); std::int64_t cs_arg2 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x7fffffffffffffffull)); return cs_8416d639bc6d5b2c(cs_arg0,cs_arg1,cs_arg2); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); std::int32_t cs_arg0 = v_recordId; std::int32_t cs_arg1 = v_sub; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0b17210336b6701f(cs_receiver,cs_arg0,cs_arg1); }());
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
}
}
}
}

// M:main.AppData.UpdateEffect
void cs_13c75e0d29dc4795(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.UpdateEffect",game);
{
for (std::int32_t v_i_89076 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_89076; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_89076; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_89076 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_89123 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = cs_64a0d3e3b430c818(); return (cs_left >= cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());});
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = cs_101b5df8388c37cc(); return (cs_left >= cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());});
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_728aa1cb5546b430(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left >= cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());});
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = cs_dadcf852be098f4e(); return (cs_left >= cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());});
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_2cfd34acbad021cb(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left >= cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());});
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_8838d68b05fe9d2a(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left >= cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());});
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_055caef899588fb7(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left >= cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); std::int32_t cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());});
}
}
}
}
}
}
}

// M:main.AppData.UpdatePassiveScript
void cs_6166819f046decb1(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.UpdatePassiveScript",game);
{

}
}
}
}

// M:main.AppData.UpdatePopupMessage
void cs_9454f5d1b6455783(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.UpdatePopupMessage",game);
{
for (std::int32_t v_num_136035 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_136035; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_136035; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_136035 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_array_136103 = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); std::int32_t cs_arg0 = v_num_136035; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
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
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); std::int32_t cs_arg0 = v_num_136035; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());});
}
}
}
}
}
}
}
