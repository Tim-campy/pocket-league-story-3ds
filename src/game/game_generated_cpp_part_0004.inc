cs_arg5,cs_arg6); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
}
}
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
([&]() -> void { auto cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x64ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_1221) {auto cs_exception_1221=pls::cs::capture_exception(cs_caught_1221);
if(pls::cs::exception_is(cs_exception_1221,"System.Exception")) {{

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
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_785744431b3607a3; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_boundingRect_73234; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_785744431b3607a3; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_boundingRect_73234; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_785744431b3607a3; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = v_boundingRect_73234; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_785744431b3607a3; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() { auto cs_array = v_boundingRect_73234; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_785744431b3607a3; }());
}
}
}
// M:main.AppData.GetDelayId(System.Int32[][])
std::int32_t cs_6efab0ea61f29346(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<pls::cs::Array<std::int32_t>> v_script) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_125465 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_125465; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_125465; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_125465 = cs_new; return cs_old; }())) {
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }()); auto cs_index = v_i_125465; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = v_script; auto cs_right = ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }()); auto cs_index = v_i_125465; return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10e47a57597e3769; }()); return cs_left == cs_right; }()))) {
return ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_i_125465; return pls::cs::add_i32(cs_left,cs_right); }());
}
}
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0067" u"\x0065" u"\x0074" u"\x0044" u"\x0065" u"\x006c" u"\x0061" u"\x0079" u"\x0049" u"\x0064" u"\x003a" u"\x002d" u"\x0031" u"",13)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
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
return ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }()); auto cs_index = v_num_125749; return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10e47a57597e3769; }());
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
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b7fccfa2cdbb09c7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_left; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num_109974; auto cs_right = v_padding; return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b7fccfa2cdbb09c7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_left; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num_109974; auto cs_right = v_padding; return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num_109974; return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_array_137149 = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); auto cs_arg0 = v_num2_137078; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
pls::cs::Array<std::int32_t> v_array2_137209 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() { auto cs_array = v_array_137149; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_137209; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
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
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
}
}
}
// M:main.AppData.GetInt2Array(System.String)
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_1790480b70821d5d(pls::cs::String v_src) { cs_init_2ffa6f51468590ea();
{
pls::cs::Array<pls::cs::String> v_array_96244 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = v_src; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0026" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
pls::cs::Array<pls::cs::Array<std::int32_t>> v_array2_96291 = pls::cs::Array<pls::cs::Array<std::int32_t>>::make((v_array_96244).length());
for (std::int32_t v_i_96337 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_96337; auto cs_right = (v_array2_96291).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_96337; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_96337 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_96291; auto cs_index = v_i_96337; auto cs_value = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_arg0 = ([&]() { auto cs_array = v_array_96244; auto cs_index = v_i_96337; return cs_array.at(cs_index); }()); return cs_fd5ca70325423016(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
return v_array2_96291;
}
}
// M:main.AppData.GetIntArray(System.String)
pls::cs::Array<std::int32_t> cs_fd5ca70325423016(pls::cs::String v_src) { cs_init_2ffa6f51468590ea();
{
pls::cs::Array<pls::cs::String> v_array_95981 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = v_src; auto cs_arg1 = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
pls::cs::Array<std::int32_t> v_array2_96026 = pls::cs::Array<std::int32_t>::make((v_array_95981).length());
for (std::int32_t v_i_96070 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_96070; auto cs_right = (v_array2_96026).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_96070; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_96070 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_96026; auto cs_index = v_i_96070; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array_95981; auto cs_index = v_i_96070; return cs_array.at(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }());
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
std::int32_t v_num2_94607 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_2dce95b86e846efc(); auto cs_index = v_i_94562; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num3_94641 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_2dce95b86e846efc(); auto cs_index = v_i_94562; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());
if (((((((([&]() -> bool { auto cs_left = v_num3_94641; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) || (([&]() -> bool { auto cs_left = (v_nodeMap).length(); auto cs_right = v_num3_94641; return (cs_left <= cs_right); }())))) || (([&]() -> bool { auto cs_left = v_num2_94607; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())))) || (([&]() -> bool { auto cs_left = (([&]() { auto cs_array = v_nodeMap; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())).length(); auto cs_right = v_num2_94607; return (cs_left <= cs_right); }())))) {
continue;
}
pls::cs::Array<std::int32_t> v_array_94784 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_nodeMap; auto cs_index = v_num3_94641; return cs_array.at(cs_index); }()); auto cs_index = v_num2_94607; return cs_array.at(cs_index); }());
if ((([&]() { auto cs_left = v_priority; auto cs_right = pls::cs::Array<std::int32_t>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = v_array_94784; auto cs_right = v_priority; return cs_left == cs_right; }()))) {
return v_priority;
}
std::int32_t v_num4_94897 = ([&]() { auto cs_array = v_array_94784; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
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
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_nodeMap; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = pls::cs::Array<std::int32_t>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_66bc9cf12d03f05d(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:main.AppData.GetNeighborNodeList(System.Int32[][][],System.Int32,System.Int32)
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_bb8f32b6ffa34b44(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> v_nodeMap,std::int32_t v_x,std::int32_t v_y) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_95096 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
for (std::int32_t v_i_95131 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_95131; auto cs_right = (cs_2dce95b86e846efc()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_95131; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_95131 = cs_new; return cs_old; }())) {
std::int32_t v_num_95176 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_2dce95b86e846efc(); auto cs_index = v_i_95131; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num2_95209 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_2dce95b86e846efc(); auto cs_index = v_i_95131; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());
if (((((((([&]() -> bool { auto cs_left = v_num2_95209; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) || (([&]() -> bool { auto cs_left = (v_nodeMap).length(); auto cs_right = v_num2_95209; return (cs_left <= cs_right); }())))) || (([&]() -> bool { auto cs_left = v_num_95176; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())))) || (([&]() -> bool { auto cs_left = (([&]() { auto cs_array = v_nodeMap; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())).length(); auto cs_right = v_num_95176; return (cs_left <= cs_right); }())))) {
continue;
}
pls::cs::Array<std::int32_t> v_array_95350 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_nodeMap; auto cs_index = v_num2_95209; return cs_array.at(cs_index); }()); auto cs_index = v_num_95176; return cs_array.at(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_95350; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_95096); auto cs_arg0 = pls::cs::box(v_array_95350); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
pls::cs::Array<pls::cs::Array<std::int32_t>> v_array2_95469 = pls::cs::Array<pls::cs::Array<std::int32_t>>::make(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_95096); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()));
for (std::int32_t v_j_95516 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_95516; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_95096); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_95516; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_95516 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_95469; auto cs_index = v_j_95516; auto cs_value = pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_95096); auto cs_arg0 = v_j_95516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
for (std::int32_t v_k_95613 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_95613; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_array2_95469).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_95613; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_95613 = cs_new; return cs_old; }())) {
for (std::int32_t v_num3_95666 = ([&]() -> std::int32_t { auto cs_left = (v_array2_95469).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num3_95666; auto cs_right = v_k_95613; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num3_95666; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_95666 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array2_95469; auto cs_index = v_num3_95666; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array2_95469; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_95666; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return (cs_left < cs_right); }())) {
pls::cs::Array<std::int32_t> v_array3_95783 = ([&]() { auto cs_array = v_array2_95469; auto cs_index = v_num3_95666; return cs_array.at(cs_index); }());
([&]() { auto cs_target = v_array2_95469; auto cs_index = v_num3_95666; auto cs_value = ([&]() { auto cs_array = v_array2_95469; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_95666; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array2_95469; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_95666; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_array3_95783; cs_target.at(cs_index) = cs_value; return cs_value; }());
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
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }());
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
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_array_136554 = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); auto cs_arg0 = v_num_136486; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
pls::cs::Array<std::int32_t> v_array2_136613 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() { auto cs_array = v_array_136554; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_136613; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_right = v_key; return (cs_left == cs_right); }())) {
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
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left <= cs_right); }()))) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return (cs_left <= cs_right); }()))) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
}
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return (cs_left <= cs_right); }()))) {
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
if (([&]() { auto cs_left = v_stock; auto cs_right = pls::cs::Array<std::int32_t>{}; return cs_left == cs_right; }())) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
std::int32_t v_num_103549 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_i_103570 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_103570; auto cs_right = (v_stock).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_103570; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_103570 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_num_103549; auto cs_rhs = ([&]() { auto cs_array = v_stock; auto cs_index = v_i_103570; return cs_array.at(cs_index); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_103549 = cs_value; return cs_value; }());
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
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }());
}
}
}
// M:main.AppData.InitSystemSaveData
void cs_11c8e1bd6951af89(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e> { auto cs_arg0 = cs_fdd82f25066d7e6e(); auto cs_arg1 = cs_00f9a807d9f63c9e(); auto cs_arg2 = cs_baf0fa689d930b78(); auto cs_arg3 = cs_e25cc3357054a6bb(); auto cs_arg4 = cs_b029919ba6a8806e(); return pls::generated::cs_e34104df98d3719c(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); pls::game::cs_require(cs_target)->cs_cf8366a706eb588f = cs_value; return cs_value; }());
if (([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_target.at(cs_index) = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
if ((pls::generated::cs_d6caa754a735f006() && ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3c515a641b6b6cb5; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0061" u"\x0070" u"",2)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
}
// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
void cs_deba4b0ce0e3b25a(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_type,std::int32_t v_id,std::int32_t v_depth,std::int32_t v_seb,std::int32_t v_frame,std::int32_t v_x,std::int32_t v_y,bool v_dark) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_type; auto cs_arg1 = v_id; auto cs_arg2 = v_depth; auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_arg4 = v_seb; auto cs_arg5 = v_frame; auto cs_arg6 = v_x; auto cs_arg7 = v_y; auto cs_arg8 = v_dark; auto cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e2cc7be9866cb657(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
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
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_797d22d4c2c75df4; }()); auto cs_index = v_num_127159; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return (cs_left >= cs_right); }())) {
([&]() { auto cs_old = v_depth; auto cs_new = pls::cs::add_i32(cs_old,1); v_depth = cs_new; return cs_old; }());
continue;
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a983c6db567ab7de; }()); auto cs_index = v_num_127159; return cs_array.at(cs_index); }()); auto cs_index = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_797d22d4c2c75df4; }()); auto cs_index = v_num_127159; return cs_array.at(cs_index); }()); auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dcc4c8afca6eace7; }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_797d22d4c2c75df4; }()); auto cs_index = v_num_127159; auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::cast_integral<std::uint8_t>(pls::cs::add_i32(cs_old,1)); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6de10b92fdc859b0; }()); auto cs_right = v_num_127159; return (cs_left > cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_num_127159; pls::game::cs_require(cs_target)->cs_6de10b92fdc859b0 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d3b5753ef643c4e; }()); auto cs_right = v_num_127159; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_num_127159; pls::game::cs_require(cs_target)->cs_3d3b5753ef643c4e = cs_value; return cs_value; }());
}
pls::cs::Array<std::int32_t> v_array_127565 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_64448a7513b68aab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dcc4c8afca6eace7; }()); return cs_array.at(cs_index); }());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_type; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_id; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_depth; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = v_img; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = v_seb; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = v_frame; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = v_x; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = v_y; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ((v_dark ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)))); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array_127565; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = v_layer; cs_target.at(cs_index) = cs_value; return cs_value; }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_type; auto cs_arg1 = v_id; auto cs_arg2 = v_depth; auto cs_arg3 = v_img; auto cs_arg4 = v_seb; auto cs_arg5 = v_frame; auto cs_arg6 = v_x; auto cs_arg7 = v_y; auto cs_arg8 = v_dark; auto cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e2cc7be9866cb657(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
}
// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_4cdec4269cf962ba(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_type,std::int32_t v_id,std::int32_t v_depth,std::int32_t v_img,std::int32_t v_seb,std::int32_t v_frame,std::int32_t v_x,std::int32_t v_y) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_type; auto cs_arg1 = v_id; auto cs_arg2 = v_depth; auto cs_arg3 = v_img; auto cs_arg4 = v_seb; auto cs_arg5 = v_frame; auto cs_arg6 = v_x; auto cs_arg7 = v_y; auto cs_arg8 = false; auto cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e2cc7be9866cb657(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
}
// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_6b70c0e50e688669(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_type,std::int32_t v_id,std::int32_t v_depth,std::int32_t v_seb,std::int32_t v_frame,std::int32_t v_x,std::int32_t v_y) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_type; auto cs_arg1 = v_id; auto cs_arg2 = v_depth; auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_arg4 = v_seb; auto cs_arg5 = v_frame; auto cs_arg6 = v_x; auto cs_arg7 = v_y; auto cs_arg8 = false; auto cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e2cc7be9866cb657(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
}
// M:main.AppData.IntegerVectorToIntAry(java.util.Vector)
pls::cs::Array<std::int32_t> cs_ddb8952459c3b653(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_ary) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_90623 = pls::cs::Array<std::int32_t>::make(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_ary); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()));
for (std::int32_t v_i_90664 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_90664; auto cs_right = (v_array_90623).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_90664; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_90664 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_90623; auto cs_index = v_i_90664; auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7de6788b61a5af56>>((pls::cs::unbox<pls::cs::Ref<pls::generated::cs_7de6788b61a5af56>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_ary); auto cs_arg0 = v_i_90664; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_b1fe1ec0a394cd44(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_97497; auto cs_arg1 = (v_ints).length(); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_97622 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_97622; auto cs_right = (v_ints).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_97622; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_97622 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_97497; auto cs_arg1 = ([&]() { auto cs_array = v_ints; auto cs_index = v_i_97622; return cs_array.at(cs_index); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
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
if ((((([&]() -> bool { auto cs_arg0 = v_softLabelL_46958; auto cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_softlabel; return cs_array.at(cs_index); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x200000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }()))) || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); auto cs_arg0 = v_key; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }()))) {
return true;
}
if ((((([&]() -> bool { auto cs_arg0 = v_softLabelR_47006; auto cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_softlabel; return cs_array.at(cs_index); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }()))) || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); auto cs_arg0 = v_key; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }()))) {
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
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_softlabel; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_85342f8bdc3d31a8(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:main.AppData.IsPushStateSoftLabel(System.Int32)
bool cs_165d33155d381848(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_softlabel) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::String v_softLabelL_46560 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSoftLabelL(); }());
pls::cs::String v_softLabelR_46608 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSoftLabelR(); }());
if ((([&]() -> bool { auto cs_arg0 = v_softLabelL_46560; auto cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_softlabel; return cs_array.at(cs_index); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x200000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyState(cs_arg0); }()))) {
return true;
}
if ((([&]() -> bool { auto cs_arg0 = v_softLabelR_46608; auto cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_softlabel; return cs_array.at(cs_index); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(cs_3e56073ce0fe6fbf()); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyState(cs_arg0); }()))) {
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
// M:main.AppData.Print(System.String)
void cs_9b142b0c3e92ca63(pls::cs::String v_str) { cs_init_2ffa6f51468590ea();
{
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x25a0" u"",1)); auto cs_right = v_str; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
}
}
// M:main.AppData.Push(kairo.unity.form.FormBase)
bool cs_68fcb18265769d80(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::FormBase> v_form) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_83091 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_83091); auto cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_83091); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetCurrentForm(); }()); auto cs_arg1 = v_form; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0,cs_arg1); }());
}
}
}
// M:main.AppData.Random(System.Int32)
std::int32_t cs_15f77c54ef987b54(std::int32_t v_total) { cs_init_2ffa6f51468590ea();
{
return ([&]() -> std::int32_t { auto cs_arg0 = v_total; return cs_fd17a5b5e4e50b65(cs_arg0); }());
}
}
// M:main.AppData.RemoveAllMenuForms
bool cs_fc39345b3033cf90(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_93940 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
std::int32_t v_formsNum_93985 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_93940); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }());
for (std::int32_t v_num_94032 = ([&]() -> std::int32_t { auto cs_left = v_formsNum_93985; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_94032; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_94032; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_94032 = cs_new; return cs_old; }())) {
pls::cs::Ref<pls::kairo::FormBase> v_form_94087 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_93940); auto cs_arg0 = v_num_94032; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_form_94087); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left != cs_right); }())) {
continue;
}
pls::cs::Ref<cs_a2cea92715051fa5> v_subForm_94166 = pls::cs::unbox<pls::cs::Ref<cs_a2cea92715051fa5>>(pls::cs::box(v_form_94087));
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_a2cea92715051fa5>>(v_subForm_94166); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4214a8e7a6aa2068(cs_receiver); }())) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_93940); auto cs_arg0 = v_subForm_94166; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = v_num_90217; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
}
}
}
// M:main.AppData.RemovePopupMessages(System.Int32)
void cs_c86a21cd0da793c3(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_id) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_132962 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_132962; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_132962; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_132962 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_array_133030 = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); auto cs_arg0 = v_num_132962; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = (pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() { auto cs_array = v_array_133030; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()))); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); auto cs_arg0 = v_num_132962; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
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
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_x; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_y; cs_target.at(cs_index) = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_dir; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::neg_i32(v_y); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_x; cs_target.at(cs_index) = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_dir; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::neg_i32(v_x); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::neg_i32(v_y); cs_target.at(cs_index) = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_y; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::neg_i32(v_x); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5dc879bb5d27cbe7; }());
}
}
}
// M:main.AppData.SaveGame
void cs_9abd6db92a325acc(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1a8f5c64147b3e5b(cs_receiver,cs_arg0); }());
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
([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x25a0" u"\x0041" u"\x0070" u"\x0070" u"\x0044" u"\x0061" u"\x0074" u"\x0061" u"\x002e" u"\x006a" u"\x0061" u"\x0076" u"\x0061" u"\x0020" u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x0047" u"\x0061" u"\x006d" u"\x0065" u"\x0028" u"\x0029" u"\x0020" u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x005f" u"\x0020" u"\x003d" u"\x003d" u"\x0020" u"\x006e" u"\x0075" u"\x006c" u"\x006c" u"",38)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d8524a356e38017; }()); pls::game::cs_require(cs_target)->cs_72da38f2b646e254 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_50843; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7f9e0682751f782; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_51226 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_51226; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7f9e0682751f782; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_51226; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_51226 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
pls::cs::Ref<cs_456d3d004decc356> v_delayEvent_51305 = pls::cs::unbox<pls::cs::Ref<cs_456d3d004decc356>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7f9e0682751f782; }())); auto cs_arg0 = v_i_51226; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_456d3d004decc356>>(v_delayEvent_51305); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4178ca56a2eb6f02(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_j_51615 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_51615; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab1e9b1101610757; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_51615; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_51615 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8f8054b388e3f93e>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab1e9b1101610757; }()); auto cs_index = v_j_51615; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_269ea8f6a92d2b89(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_k_51888 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_51888; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_51888; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_51888 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3e5b0d35ae6be8e7>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }()); auto cs_index = v_k_51888; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4503351df0f1771f(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_l_52163 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_52163; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_52163; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_52163 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd3043ac164d021f>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }()); auto cs_index = v_l_52163; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1613937bf1e1ad15(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_m_52448 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_52448; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_52448; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_52448 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5beb6285da308d06>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }()); auto cs_index = v_m_52448; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_746513213ef872e5(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_n_52737 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_n_52737; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c7e3a6362e30637; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_52737; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_52737 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d22b1a8b100a0cab>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c7e3a6362e30637; }()); auto cs_index = v_n_52737; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_65e6e8cf5fc4699e(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num_53022 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num_53022; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38b063657ea0f85; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num_53022; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_53022 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6803fd77f880b974>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38b063657ea0f85; }()); auto cs_index = v_num_53022; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d5cb91a571e7b87c(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num2_53314 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num2_53314; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num2_53314; auto cs_new = pls::cs::add_i32(cs_old,1); v_num2_53314 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_169021fb033627ed>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }()); auto cs_index = v_num2_53314; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dbc8b1e682acfdab(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num3_53600 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num3_53600; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b71369152562ebeb; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num3_53600; auto cs_new = pls::cs::add_i32(cs_old,1); v_num3_53600 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_76884ad002dceb7a>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b71369152562ebeb; }()); auto cs_index = v_num3_53600; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_29c7e6234270da65(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num4_53896 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num4_53896; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86eaf5d444f8e536; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num4_53896; auto cs_new = pls::cs::add_i32(cs_old,1); v_num4_53896 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ec7bde62b3c2b35f>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86eaf5d444f8e536; }()); auto cs_index = v_num4_53896; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bb060af473fce27c(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num5_54192 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num5_54192; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39dbfa9f37472c19; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num5_54192; auto cs_new = pls::cs::add_i32(cs_old,1); v_num5_54192 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_69a97d2bf5ede86d>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39dbfa9f37472c19; }()); auto cs_index = v_num5_54192; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c3c802ec2eaa524b(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num6_54484 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num6_54484; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num6_54484; auto cs_new = pls::cs::add_i32(cs_old,1); v_num6_54484 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ba9af87bc2bff5b4>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }()); auto cs_index = v_num6_54484; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_feaa7acb9d6c4e25(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num7_54779 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num7_54779; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num7_54779; auto cs_new = pls::cs::add_i32(cs_old,1); v_num7_54779 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4489b86073532f79>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }()); auto cs_index = v_num7_54779; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4feb02c73e4cf20f(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num8_55080 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num8_55080; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num8_55080; auto cs_new = pls::cs::add_i32(cs_old,1); v_num8_55080 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4489b86073532f79>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }()); auto cs_index = v_num8_55080; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4feb02c73e4cf20f(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num9_55381 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num9_55381; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num9_55381; auto cs_new = pls::cs::add_i32(cs_old,1); v_num9_55381 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b68aa9c3dd5cf14c>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }()); auto cs_index = v_num9_55381; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d5cc43a853b66354(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ca6f5bbc06a496a9>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9a33424672d806b2; }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bc6918d3999db00d(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x13ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_50dfaae2579fc0e5(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_50843 = cs_value; return cs_value; }());
for (std::int32_t v_num10_56107 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num10_56107; auto cs_right = (([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_adb25bcb8b2e59bb; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num10_56107; auto cs_new = pls::cs::add_i32(cs_old,1); v_num10_56107 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_a9f43a9b869eaae8>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_35ab145223dfa9ea(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_adb25bcb8b2e59bb; }()); auto cs_index = v_num10_56107; return cs_array.at(cs_index); }())); auto cs_arg0 = v_byteArrayOutputStream_50843; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3a0f6398a75c8024(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_50843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x15ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }()); v_recordStore_50798 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_50798); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_944778f16504220d(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->WriteRecord(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1full)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_45bf8972ccfd60d6(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (((v_auto) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)))); auto cs_right = cs_6b2df6a76278cb1c(); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); pls::game::cs_require(cs_target)->cs_9d3b28b6be441835 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
if (pls::generated::cs_4cc76a7a43706693()) {
std::int32_t v_num11_56876 = (([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_944778f16504220d(cs_receiver); }())).length();
([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x003a" u"",5)); auto cs_right = pls::game::cs_integer_string(v_num11_56876); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0062" u"\x0079" u"\x0074" u"\x0065" u"\x0020" u"\x0028" u"",6)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = v_num11_56876; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return pls::cs::div_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002e" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num11_56876; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return pls::cs::div_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x006b" u"\x0062" u"\x0029" u"",3)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
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
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }()); v_recordStore_49422 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_49422); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_944778f16504220d(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->WriteRecord(cs_arg0,cs_arg1); }());
if ((pls::generated::cs_01d5980f91155b3c() && pls::generated::cs_4cc76a7a43706693())) {
([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x25a0" u"\x0041" u"\x0070" u"\x0070" u"\x0044" u"\x0061" u"\x0074" u"\x0061" u"\x002e" u"\x006a" u"\x0061" u"\x0076" u"\x0061" u"\x0020" u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x0053" u"\x0079" u"\x0073" u"\x0074" u"\x0065" u"\x006d" u"\x0028" u"\x0029" u"\x0020" u"\x0073" u"\x0079" u"\x0073" u"\x0053" u"\x0061" u"\x0076" u"\x0065" u"\x005f" u"\x002e" u"\x0074" u"\x006f" u"\x0042" u"\x0079" u"\x0074" u"\x0065" u"\x0041" u"\x0072" u"\x0072" u"\x0061" u"\x0079" u"\x0028" u"\x0029" u"\x002e" u"\x006c" u"\x0065" u"\x006e" u"\x0067" u"\x0074" u"\x0068" u"\x0020" u"\x003d" u"\x0020" u"",59)); auto cs_right = pls::game::cs_integer_string((([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_944778f16504220d(cs_receiver); }())).length()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
} catch(const pls::cs::Exception& cs_caught_519) {auto cs_exception_519=pls::cs::capture_exception(cs_caught_519);
if(pls::cs::exception_is(cs_exception_519,"System.Exception")) {auto v_t_49738=cs_exception_519;{
([&]() -> pls::cs::String { auto cs_arg0 = v_t_49738; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
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
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_97056 = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { auto cs_arg0 = v_src; return pls::generated::cs_c3a84083a67ee263(cs_arg0); }());
std::int32_t v_num_97117 = ([&]() -> std::int32_t { auto cs_arg0 = v_byteArrayInputStream_97056; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_size; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_num_97117; v_size = cs_value; return cs_value; }());
}
pls::cs::Array<bool> v_array_97220 = pls::cs::Array<bool>::make(v_size);
for (std::int32_t v_i_97256 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); (([&]() -> bool { auto cs_left = v_i_97256; auto cs_right = v_num_97117; return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = v_i_97256; auto cs_right = (v_array_97220).length(); return (cs_left < cs_right); }())); ([&]() { auto cs_old = v_i_97256; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_97256 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_97220; auto cs_index = v_i_97256; auto cs_value = ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { auto cs_arg0 = v_byteArrayInputStream_97056; return pls::generated::cs_1207de83c3a46662(cs_arg0); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
return ([&]() -> pls::cs::Array<bool> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_src; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6adeca0fd238e2d4(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:main.AppData.SbyteArrayToInt(System.Byte[],System.Int32)
pls::cs::Array<std::int32_t> cs_83519dceef52cfef(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::uint8_t> v_src,std::int32_t v_size) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_98000 = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { auto cs_arg0 = v_src; return pls::generated::cs_c3a84083a67ee263(cs_arg0); }());
std::int32_t v_num_98061 = ([&]() -> std::int32_t { auto cs_arg0 = v_byteArrayInputStream_98000; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_size; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_num_98061; v_size = cs_value; return cs_value; }());
}
pls::cs::Array<std::int32_t> v_array_98163 = pls::cs::Array<std::int32_t>::make(v_size);
for (std::int32_t v_i_98198 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); (([&]() -> bool { auto cs_left = v_i_98198; auto cs_right = v_num_98061; return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = v_i_98198; auto cs_right = (v_array_98163).length(); return (cs_left < cs_right); }())); ([&]() { auto cs_old = v_i_98198; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_98198 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_98163; auto cs_index = v_i_98198; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_byteArrayInputStream_98000; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_src; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_83519dceef52cfef(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:main.AppData.SearchInteger(System.Int32[],System.Int32)
std::int32_t cs_7f2d55b45a07fbae(pls::cs::Array<std::int32_t> v_array,std::int32_t v_key) { cs_init_2ffa6f51468590ea();
{
if (([&]() { auto cs_left = v_array; auto cs_right = pls::cs::Array<std::int32_t>{}; return cs_left == cs_right; }())) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
for (std::int32_t v_i_103770 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_103770; auto cs_right = (v_array).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_103770; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_103770 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array; auto cs_index = v_i_103770; return cs_array.at(cs_index); }()); auto cs_right = v_key; return (cs_left == cs_right); }())) {
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
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_scripts); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_111194 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_111194; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_scripts); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_111194; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_111194 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_111241 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_scripts); auto cs_arg0 = v_i_111194; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = (v_array_111241).length(); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_j_111334 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_111334; auto cs_right = (v_array_111241).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_111334; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_111334 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() { auto cs_array = v_array_111241; auto cs_index = v_j_111334; return cs_array.at(cs_index); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
}
}
}
}
}
// M:main.AppData.SetHighScore(System.Int64)
void cs_34a842e07132dc32(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int64_t v_score) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_score; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
// M:main.AppData.SetMoneyHighScore(System.Int64)
void cs_e1e9cde920cf8975(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int64_t v_score) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_score; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
// M:main.AppData.SetNetHighScore(System.Int64)
void cs_c158f59342f4a464(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int64_t v_score) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_score; cs_target.at(cs_index) = cs_value; return cs_value; }());
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
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = v_score; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
// M:main.AppData.Sort(System.Int32[])
void cs_6dfeb96a20cdf0ae(pls::cs::Array<std::int32_t> v_list) { cs_init_2ffa6f51468590ea();
{
for (std::int32_t v_i_105566 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_105566; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_list).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_105566; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_105566 = cs_new; return cs_old; }())) {
for (std::int32_t v_num_105617 = ([&]() -> std::int32_t { auto cs_left = (v_list).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_105617; auto cs_right = v_i_105566; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num_105617; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_105617 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_list; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_105617; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_list; auto cs_index = v_num_105617; return cs_array.at(cs_index); }()); return (cs_left > cs_right); }())) {
std::int32_t v_num2_105715 = ([&]() { auto cs_array = v_list; auto cs_index = v_num_105617; return cs_array.at(cs_index); }());
([&]() { auto cs_target = v_list; auto cs_index = v_num_105617; auto cs_value = ([&]() { auto cs_array = v_list; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_105617; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_list; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_105617; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_num2_105715; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
}
}
// M:main.AppData.SubMoney(System.Int32,System.Int32)
std::int64_t cs_58ba802eb16824af(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_sub,std::int32_t v_recordId) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int64_t { auto cs_arg0 = ([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(v_sub); return pls::cs::sub_i64(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x8000000000000000ull)); auto cs_arg2 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x7fffffffffffffffull)); return cs_8416d639bc6d5b2c(cs_arg0,cs_arg1,cs_arg2); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); auto cs_arg0 = v_recordId; auto cs_arg1 = v_sub; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0b17210336b6701f(cs_receiver,cs_arg0,cs_arg1); }());
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
}
}
}
// M:main.AppData.UpdateEffect
void cs_13c75e0d29dc4795(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_89076 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_89076; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_89076; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_89076 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_89123 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = cs_64a0d3e3b430c818(); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = cs_101b5df8388c37cc(); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_728aa1cb5546b430(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = cs_dadcf852be098f4e(); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_2cfd34acbad021cb(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_8838d68b05fe9d2a(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_89123; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_055caef899588fb7(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = v_i_89076; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
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
// M:main.Main.#ctor
pls::cs::Ref<cs_bad15ea7469ee2b9> cs_7703d612ae2455fc() { cs_init_bad15ea7469ee2b9();
{ auto cs_this = pls::cs::make_ref<cs_bad15ea7469ee2b9>(); cs_7703d612ae2455fc_init(cs_this); return cs_this; }
}
void cs_7703d612ae2455fc_init(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) {
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(cs_this); auto cs_arg0 = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->source_Init(cs_arg0); }());
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
} catch(const pls::cs::Exception& cs_caught_1233) {auto cs_exception_1233=pls::cs::capture_exception(cs_caught_1233);
if(pls::cs::exception_is(cs_exception_1233,"System.Exception")) {auto v_t_4625=cs_exception_1233;{
([&]() -> pls::cs::String { auto cs_arg0 = v_t_4625; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
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
// M:panel.MainPanel.#ctor
pls::cs::Ref<cs_20db1845606f1f3b> cs_edc2000ae353f18e() { cs_init_20db1845606f1f3b();
{ auto cs_this = pls::cs::make_ref<cs_20db1845606f1f3b>(); cs_edc2000ae353f18e_init(cs_this); return cs_this; }
}
void cs_edc2000ae353f18e_init(pls::cs::Ref<cs_20db1845606f1f3b> cs_this) {
([&]() { cs_3afc5298ce4a3e84_init(std::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this)); }());
{

}
}
// M:surface.GamePad.DrawImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void cs_9bfe00949a9c4d85(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_imgId) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_31176 = ([&]() { auto cs_array = cs_ef3be8cf38199e7e(); auto cs_index = v_imgId; return cs_array.at(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = static_cast<float>(([&]() { auto cs_array = v_array_31176; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }())); auto cs_arg4 = static_cast<float>(([&]() { auto cs_array = v_array_31176; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }())); auto cs_arg5 = v_imgId; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b55690f7a47a296c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
// M:surface.GamePad.DrawScaledImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,System.Int32)
void cs_b55690f7a47a296c(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,float v_w,float v_h,std::int32_t v_imgId) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_31365 = ([&]() { auto cs_array = cs_ef3be8cf38199e7e(); auto cs_index = v_imgId; return cs_array.at(cs_index); }());
pls::cs::Ref<pls::kairo::Image> v_image_31399 = ([&]() { auto cs_array = cs_9149ef90399c862e(); auto cs_index = ([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }());
float v_num_31435 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_31399); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }())); auto cs_right = static_cast<float>(([&]() { auto cs_array = cs_5859d912a9aed67d(); auto cs_index = ([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }())); return (cs_left / cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_image_31399; auto cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = static_cast<float>(([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); return (cs_left + cs_right); }()); auto cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = static_cast<float>(([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }())); return (cs_left + cs_right); }()); auto cs_arg3 = v_w; auto cs_arg4 = v_h; auto cs_arg5 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_31435; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); auto cs_arg6 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_31435; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); auto cs_arg7 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_31435; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); auto cs_arg8 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_31365; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_31435; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_jCalendar_29736); auto cs_arg0 = v_num_29776; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_ab403c0b96bfdb59(cs_receiver,cs_arg0); }());
std::int32_t v_num2_29922 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_jCalendar_29736); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());
std::int32_t v_num3_29956 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_jCalendar_29736); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { auto cs_left = v_num_29776; auto cs_right = pls::cs::cast_integral<std::int64_t>(([&]() -> std::int32_t { auto cs_left = v_num2_29922; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); return pls::cs::sub_i64(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(v_num3_29956); return pls::cs::sub_i64(cs_left,cs_right); }()); cs_64e0a7e74b2c1cd4() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_left = cs_64e0a7e74b2c1cd4(); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xea60ull))); return pls::cs::add_i64(cs_left,cs_right); }()); cs_022c3a0c1cdb7af0() = cs_value; return cs_value; }());
}
std::int32_t v_num4_30098 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_jCalendar_29736); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());
std::int32_t v_num5_30131 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_jCalendar_29736); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());
pls::cs::Ref<pls::generated::cs_a465028bea3432a3> v_instance_30170 = ([&]() -> pls::cs::Ref<pls::generated::cs_a465028bea3432a3> { return pls::generated::cs_23a91b30234d4879(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_30170); auto cs_arg0 = ([&]() -> pls::cs::Ref<pls::generated::cs_66dbad5679f8ab87> { return pls::generated::cs_f437b6bb4cf7b2a6(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_e2c62bcb22f058c9(cs_receiver,cs_arg0); }());
pls::cs::String v_text_30250 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_30170); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); return pls::game::cs_integer_string(cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(v_text_30250); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_arg0 = v_text_30250; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0031" u"\x0032" u"",2)); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()))) {
if (([&]() -> bool { auto cs_left = v_num4_30098; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x42a20000u); return (cs_left - cs_right); }()); auto cs_arg2 = v_y; auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x17ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9bfe00949a9c4d85(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x42a20000u); return (cs_left - cs_right); }()); auto cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = pls::game::cs_f32(0x40a00000u); return (cs_left + cs_right); }()); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9bfe00949a9c4d85(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
([&]() { auto cs_old = v_num4_30098; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); auto cs_value = pls::cs::mod_i32(cs_old,cs_rhs); v_num4_30098 = cs_value; return cs_value; }());
}
for (std::int32_t v_i_30493 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_30493; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_30493; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_30493 = cs_new; return cs_old; }())) {
std::int32_t v_num6_30525 = ([&]() -> std::int32_t { auto cs_left = v_num4_30098; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::mod_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x427c0000u); return (cs_left - cs_right); }()); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left + cs_right); }()); auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_right = v_i_30493; return pls::cs::mul_i32(cs_left,cs_right); }()))); return (cs_left - cs_right); }()); auto cs_arg2 = v_y; auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x19ull)); auto cs_right = v_num6_30525; return pls::cs::add_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9bfe00949a9c4d85(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_old = v_num4_30098; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::div_i32(cs_old,cs_rhs); v_num4_30098 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num4_30098; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
break;
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x42580000u); return (cs_left - cs_right); }()); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left + cs_right); }()); auto cs_arg2 = v_y; auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x23ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9bfe00949a9c4d85(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
for (std::int32_t v_j_30720 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_30720; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_30720; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_30720 = cs_new; return cs_old; }())) {
std::int32_t v_num7_30752 = ([&]() -> std::int32_t { auto cs_left = v_num5_30131; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::mod_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_x; auto cs_right = pls::game::cs_f32(0x42200000u); return (cs_left - cs_right); }()); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left + cs_right); }()); auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_right = v_j_30720; return pls::cs::mul_i32(cs_left,cs_right); }()))); return (cs_left - cs_right); }()); auto cs_arg2 = v_y; auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x19ull)); auto cs_right = v_num7_30752; return pls::cs::add_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9bfe00949a9c4d85(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_old = v_num5_30131; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::div_i32(cs_old,cs_rhs); v_num5_30131 = cs_value; return cs_value; }());
}
}
}
}
// M:surface.GamePad.GetDivisionArea(System.Single,System.Single,System.Single,System.Int32,System.Int32)
pls::cs::Array<float> cs_da8b794ec31d3049(pls::cs::Ref<cs_792a6372766eb19f> cs_this,float v_left,float v_right,float v_padding,std::int32_t v_index,std::int32_t v_max) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_index; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_max; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_83a6f271dad6430d(cs_arg0,cs_arg1); }()); v_index = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_max; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_left; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_right; cs_target.at(cs_index) = cs_value; return cs_value; }());
} else {
float v_num_32051 = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_right; auto cs_right = v_left; return (cs_left - cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_padding; auto cs_right = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_max; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()))); return (cs_left * cs_right); }()); return (cs_left - cs_right); }())); auto cs_right = static_cast<float>(v_max); return (cs_left / cs_right); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> float { auto cs_left = v_left; auto cs_right = static_cast<float>(pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(v_index); auto cs_right = (([&]() -> float { auto cs_left = v_num_32051; auto cs_right = v_padding; return (cs_left + cs_right); }())); return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3dcccccdu); return (cs_left + cs_right); }())))); return (cs_left + cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> float { auto cs_left = v_left; auto cs_right = static_cast<float>(pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(v_index); auto cs_right = (([&]() -> float { auto cs_left = v_num_32051; auto cs_right = v_padding; return (cs_left + cs_right); }())); return (cs_left * cs_right); }()); auto cs_right = v_num_32051; return (cs_left + cs_right); }()); auto cs_right = pls::game::cs_f32(0x3dcccccdu); return (cs_left + cs_right); }())))); return (cs_left + cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return (cs_left - cs_right); }())); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left + cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e9c361e061762844; }());
}
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
// M:surface.GamePad.IsGameSurface
bool cs_d237d8c9ca71f7cc(pls::cs::Ref<cs_792a6372766eb19f> cs_this) { cs_init_792a6372766eb19f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
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
if (([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar); auto cs_arg0 = ([&]() { auto cs_array = cs_b966f65b238fb3f0(); auto cs_index = v_i_8820; return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_95ade8baca7a8831(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_9149ef90399c862e(); auto cs_index = v_i_8820; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Image> { auto cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar); auto cs_arg0 = ([&]() { auto cs_array = cs_b966f65b238fb3f0(); auto cs_index = v_i_8820; return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); auto cs_arg1 = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); auto cs_arg2 = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return pls::kairo::Image::Load(cs_arg0,cs_arg1,cs_arg2); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
std::int32_t v_width_8986 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_array = cs_9149ef90399c862e(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }());
if ((((([&]() -> bool { auto cs_left = v_width_8986; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x180ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = v_width_8986; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x200ull)); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = v_width_8986; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x240ull)); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = v_width_8986; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x300ull)); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_5859d912a9aed67d(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1e4ull)); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_5859d912a9aed67d(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x195ull)); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
} catch(const pls::cs::Exception& cs_caught_1237) {auto cs_exception_1237=pls::cs::capture_exception(cs_caught_1237);
if(pls::cs::exception_is(cs_exception_1237,"System.Exception")) {{

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
// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_5c6ce742d887c401(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,pls::cs::Ref<pls::kairo::Image> v_img,std::int32_t v_x,std::int32_t v_y,std::int32_t v_u,std::int32_t v_v,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_arg0 = v_g; auto cs_arg1 = v_id; auto cs_arg2 = v_img; auto cs_arg3 = v_x; auto cs_arg4 = v_y; auto cs_arg5 = v_u; auto cs_arg6 = v_v; auto cs_arg7 = v_w; auto cs_arg8 = v_h; auto cs_arg9 = v_value; return cs_5c6ce742d887c401(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_5249190fd61436f9(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,pls::cs::Ref<pls::kairo::Image> v_img,std::int32_t v_x,std::int32_t v_y,std::int32_t v_u,std::int32_t v_v,std::int32_t v_w,std::int32_t v_h) { cs_init_e315dac1df3b175d();
{
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_arg0 = v_g; auto cs_arg1 = v_id; auto cs_arg2 = v_img; auto cs_arg3 = v_x; auto cs_arg4 = v_y; auto cs_arg5 = v_u; auto cs_arg6 = v_v; auto cs_arg7 = v_w; auto cs_arg8 = v_h; auto cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_5c6ce742d887c401(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
// M:surface.GameView.BeginTouchRegist(kairo.unity.ui.Graphics)
void cs_344a1e1fb645eab7(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(std::static_pointer_cast<cs_9326c27a92cfea3a>(cs_this)); auto cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_14c25464911dc345(cs_receiver,cs_arg0); }());
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
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_e41b3ae7bfae5fb1(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = ([&]() -> std::int64_t { auto cs_arg0 = v_id; auto cs_arg1 = v_value; return cs_e0f91f73482fc418(cs_arg0,cs_arg1); }()); return (cs_left == cs_right); }());
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
// M:surface.GameView.DrawImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void cs_fbcbc38ec33df44a(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_imgId) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_43744 = ([&]() { auto cs_array = cs_16bdb21bbc3ccb66(); auto cs_index = v_imgId; return cs_array.at(cs_index); }());
float v_num_43778 = pls::game::cs_f32(0x3f400000u);
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43744; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_43778; return (cs_left * cs_right); }()); auto cs_arg4 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43744; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_43778; return (cs_left * cs_right); }()); auto cs_arg5 = v_imgId; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
// M:surface.GameView.DrawScaledImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,System.Int32)
void cs_08f39eff8cfbd63c(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,float v_w,float v_h,std::int32_t v_imgId) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_43981 = ([&]() { auto cs_array = cs_16bdb21bbc3ccb66(); auto cs_index = v_imgId; return cs_array.at(cs_index); }());
pls::cs::Ref<pls::kairo::Image> v_image_44015 = ([&]() { auto cs_array = cs_458e967c446c2f02(); auto cs_index = ([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }());
float v_num_44051 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_44015); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }())); auto cs_right = static_cast<float>(([&]() { auto cs_array = cs_f1088522c1cb7c9e(); auto cs_index = ([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }())); return (cs_left / cs_right); }());
float v_num2_44122 = pls::game::cs_f32(0x3f400000u);
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_image_44015; auto cs_arg1 = ([&]() -> float { auto cs_left = v_x; auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num2_44122; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_arg2 = ([&]() -> float { auto cs_left = v_y; auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num2_44122; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_arg3 = v_w; auto cs_arg4 = v_h; auto cs_arg5 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_44051; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); auto cs_arg6 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_44051; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); auto cs_arg7 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_44051; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); auto cs_arg8 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_43981; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_44051; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4eull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(v_y); auto cs_arg2 = static_cast<float>(v_w); auto cs_arg3 = static_cast<float>(v_h); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa8ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5full)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_w; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_w; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(v_y); auto cs_arg2 = pls::game::cs_f32(0x3f800000u); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(v_y); auto cs_arg2 = static_cast<float>(v_w); auto cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_h; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(v_w); auto cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
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
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf6ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x81ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color_45785 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf6ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x81ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color2_45803 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa0ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color_45785 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa0ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color2_45803 = cs_value; return cs_value; }());
}
} else if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
if (v_touch) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x82ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color_45785 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x82ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color2_45803 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf3ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd2ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x72ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color_45785 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); v_color2_45803 = cs_value; return cs_value; }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color_45785; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(v_num_45592); auto cs_arg2 = static_cast<float>(v_w); auto cs_arg3 = static_cast<float>(v_num2_45636); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color2_45803; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(v_num_45592); auto cs_arg2 = pls::game::cs_f32(0x3f800000u); auto cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = v_w; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(v_num_45592); auto cs_arg2 = pls::game::cs_f32(0x3f800000u); auto cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_45592; auto cs_right = v_num2_45636; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = pls::game::cs_f32(0x3f800000u); auto cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = v_w; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_45592; auto cs_right = v_num2_45636; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = pls::game::cs_f32(0x3f800000u); auto cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb778efa514fe1a4; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_num_45592; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb778efa514fe1a4; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_num2_45636; cs_target.at(cs_index) = cs_value; return cs_value; }());
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb778efa514fe1a4; }());
}
}
}
// M:surface.GameView.Get(kairo.unity.surface.TouchValueAccessor,System.Int32)
std::int32_t cs_88dab825dd82b135(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::TouchValueAccessor> v_va,std::int32_t v_type) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::TouchValueAccessor>>(v_va); auto cs_arg0 = v_type; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTouchValue(cs_arg0,cs_arg1); }());
}
}
}
// M:surface.GameView.Get(System.Int32)
std::int32_t cs_9626ff1065e26bd4(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::TouchValueAccessor> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b4097d6d0948217d(cs_receiver); }()); auto cs_arg1 = v_type; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_88dab825dd82b135(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:surface.GameView.GetImageRect(System.Int32)
pls::cs::Array<float> cs_592f5eb6ecedf86f(std::int32_t v_imgId) { cs_init_e315dac1df3b175d();
{
pls::cs::Array<std::int32_t> v_array_44442 = ([&]() { auto cs_array = cs_16bdb21bbc3ccb66(); auto cs_index = v_imgId; return cs_array.at(cs_index); }());
float v_num_44476 = pls::game::cs_f32(0x3f400000u);
pls::cs::Array<float> v_getImageRect_result_44500 = cs_6fbe9e1ef5a2334d();
([&]() { auto cs_target = v_getImageRect_result_44500; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_44442; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_44476; return (cs_left * cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getImageRect_result_44500; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_44442; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_44476; return (cs_left * cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getImageRect_result_44500; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_44442; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_44476; return (cs_left * cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getImageRect_result_44500; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_44442; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_44476; return (cs_left * cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
return v_getImageRect_result_44500;
}
}
// M:surface.GameView.GetKey(kairo.unity.surface.TouchComponent,System.Int32)
std::int32_t cs_c545d9fff10e97de(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c,std::int32_t v_defaultKey) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be9171376316f3b; }()); auto cs_right = pls::cs::Array<std::int32_t>{}; return cs_left != cs_right; }())) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be9171376316f3b; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be9171376316f3b; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
}
return v_defaultKey;
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
return ([&]() -> std::int32_t { auto cs_arg0 = v_high_31203; auto cs_arg1 = pls::cs::cast_integral<std::int16_t>(v_v); return pls::generated::cs_959570d45f7028be(cs_arg0,cs_arg1); }());
}
}
}
// M:surface.GameView.Load(kairo.unity.util.JarInflater)
void cs_e464c93271d834fa(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar) { cs_init_e315dac1df3b175d();
{
try {
([&]() { auto cs_value = pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>::make((cs_23fdb96e8da503d4()).length()); cs_458e967c446c2f02() = cs_value; return cs_value; }());
for (std::int32_t v_i_7784 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7784; auto cs_right = (cs_458e967c446c2f02()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7784; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7784 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar); auto cs_arg0 = ([&]() { auto cs_array = cs_23fdb96e8da503d4(); auto cs_index = v_i_7784; return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_95ade8baca7a8831(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_458e967c446c2f02(); auto cs_index = v_i_7784; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Image> { auto cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar); auto cs_arg0 = ([&]() { auto cs_array = cs_23fdb96e8da503d4(); auto cs_index = v_i_7784; return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); auto cs_arg1 = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); auto cs_arg2 = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return pls::kairo::Image::Load(cs_arg0,cs_arg1,cs_arg2); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
} catch(const pls::cs::Exception& cs_caught_1241) {auto cs_exception_1241=pls::cs::capture_exception(cs_caught_1241);
if(pls::cs::exception_is(cs_exception_1241,"System.Exception")) {{

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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
break;
}
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_35638); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_35638); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_e303336fe5f1c8b9 = cs_value; return cs_value; }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
}
break;
}
}
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
bool v_flag_36082 = ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_arg0 = v_v; return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }());
switch (v_type) {
case 5:
{
if (v_flag_36082) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
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
bool v_flag_36828 = ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_arg0 = v_v; return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }());
switch (v_type) {
case 0:
{
if (v_flag_36828) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyDown(cs_arg0,cs_arg1); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
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
bool v_flag_36390 = ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_arg0 = v_v; return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }());
switch (v_type) {
case 0:
{
if (v_flag_36390) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyDown(cs_arg0,cs_arg1); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
}
break;
}
case 6:
case 10:
{
if (v_flag_36390) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyUp(cs_arg0); }());
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
bool v_flag_37132 = ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_arg0 = v_v; return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }());
switch (v_type) {
case 1:
{
if (v_flag_37132) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyDown(cs_arg0,cs_arg1); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_38220); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_38220); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_e303336fe5f1c8b9 = cs_value; return cs_value; }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_38639); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_38639); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_e303336fe5f1c8b9 = cs_value; return cs_value; }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30000ull)); auto cs_arg1 = v_v; auto cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 1:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c6683c02c87c987a; }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
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
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6fe130a06a1a3f4e(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
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
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6fe130a06a1a3f4e(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
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
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c01d41baf2e72b63(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_touchEvent_40811); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
break;
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c01d41baf2e72b63(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_touchEvent_40811); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
break;
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c01d41baf2e72b63(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_touchEvent_40811); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
break;
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c01d41baf2e72b63(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_touchEvent_40811); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
break;
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6fe130a06a1a3f4e(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_40811 = cs_value; return cs_value; }());
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
std::int32_t v_num_39131 = ([&]() { auto cs_array = v_args_39092; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
std::int32_t v_num2_39153 = ([&]() { auto cs_array = v_args_39092; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }());
std::int32_t v_num3_39176 = ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_right = (v_args_39092).length(); return (cs_left < cs_right); }())) ? ([&]() { auto cs_array = v_args_39092; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)));
std::int32_t v_num4_39224 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull));
switch (v_type) {
case 8:
{
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_62b3f795cc04ca10; }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num4_39224 = cs_value; return cs_value; }());
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
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = v_num4_39224; return (cs_left != cs_right); }())) {
std::int32_t v_num5_39543 = ([&]() -> std::int32_t { auto cs_left = v_num4_39224; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = v_num4_39224; auto cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = v_num3_39176; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
std::int32_t v_num6_39624 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_num3_39176; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_num3_39176; auto cs_arg1 = v_num6_39624; auto cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
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
std::int32_t v_num_40044 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_40008; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
std::int32_t v_num2_40073 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_40008; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }());
std::int32_t v_num3_40103 = ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_right = (([&]() { auto cs_receiver = v_option_40008; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }())).length(); return (cs_left < cs_right); }())) ? ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_40008; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)));
if (([&]() -> bool { auto cs_left = v_num3_40103; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return;
}
std::int32_t v_num4_40206 = ([&]() -> std::int32_t { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }());
switch (v_type) {
case 13:
{
if ((([&]() -> bool { auto cs_left = v_num4_40206; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_num3_40103; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
if ((([&]() -> bool { auto cs_left = v_num4_40206; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_40044; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_num3_40103; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = v_num2_40073; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num2_40073; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_num3_40103; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
while ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = v_num_40044; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = v_num2_40073; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9626ff1065e26bd4(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc3c4e9704a06708(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_va; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_value); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_arg0 = v_value; return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_arg3 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e1d7840856fb3e3a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:surface.GameView.Set(kairo.unity.surface.TouchValueAccessor,System.Int32,System.Int32,kairo.unity.surface.TouchComponent)
void cs_e1d7840856fb3e3a(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::TouchValueAccessor> v_va,std::int32_t v_type,std::int32_t v_value,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::TouchValueAccessor>>(v_va); auto cs_arg0 = v_type; auto cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetTouchValue(cs_arg0,cs_arg1); }());
}
if (((([&]() { auto cs_left = pls::cs::box(v_c); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) && ([&]() { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58d9bdebab2ca99e; }()); auto cs_right = pls::cs::Array<std::int32_t>{}; return cs_left != cs_right; }()))) {
pls::cs::Array<std::int32_t> v_extendValues_30550 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58d9bdebab2ca99e; }());
for (std::int32_t v_i_30601 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_30601; auto cs_right = (v_extendValues_30550).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_30601; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_30601 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::TouchValueAccessor>>(v_va); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_array = v_extendValues_30550; auto cs_index = v_i_30601; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_arg0 = ([&]() { auto cs_array = v_extendValues_30550; auto cs_index = v_i_30601; return cs_array.at(cs_index); }()); return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetTouchValue(cs_arg0,cs_arg1); }());
}
}
}
}
}
// M:surface.GameView.Set(System.Int32,kairo.unity.surface.TouchComponent)
void cs_7fe16b2e413fed73(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_value,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::TouchValueAccessor> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b4097d6d0948217d(cs_receiver); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_value); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_arg0 = v_value; return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_arg3 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e1d7840856fb3e3a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:surface.GameView.Set(System.Int32,System.Int32,kairo.unity.surface.TouchComponent)
void cs_cc3c4e9704a06708(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_value,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::TouchValueAccessor> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b4097d6d0948217d(cs_receiver); }()); auto cs_arg1 = v_type; auto cs_arg2 = v_value; auto cs_arg3 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e1d7840856fb3e3a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
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
pls::cs::Ref<pls::kairo::Image> v_image_1938 = pls::cs::unbox<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_array = v_array_1904; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()));
pls::cs::Array<float> v_array2_1975 = pls::cs::unbox<pls::cs::Array<float>>(([&]() { auto cs_array = v_array_1904; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()));
std::int32_t v_num3_2011 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa0ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); auto cs_right = v_num2_1813; return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num3_2011; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return;
}
float v_num4_2072 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x40200000u); auto cs_right = static_cast<float>(v_num2_1813); return (cs_left * cs_right); }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }());
float v_num5_2111 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x40200000u); auto cs_right = static_cast<float>(v_num2_1813); return (cs_left * cs_right); }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }());
float v_dx_2150 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }())); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_104e5f6a41bc31a2; }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_num4_2072; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left - cs_right); }());
float v_dy_2208 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }())); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4f23ff2646eb23aa; }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_num5_2111; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left - cs_right); }());
float v_num6_2266 = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }());
float v_num7_2296 = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg1 = v_num3_2011; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = v_num3_2011; return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_image_1938; auto cs_arg1 = v_dx_2150; auto cs_arg2 = v_dy_2208; auto cs_arg3 = ([&]() -> float { auto cs_left = v_num6_2266; auto cs_right = v_num4_2072; return (cs_left + cs_right); }()); auto cs_arg4 = ([&]() -> float { auto cs_left = v_num7_2296; auto cs_right = v_num5_2111; return (cs_left + cs_right); }()); auto cs_arg5 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); auto cs_arg6 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); auto cs_arg7 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); auto cs_arg8 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); auto cs_arg0 = v_effect; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_7969ffc067486ca6(cs_receiver,cs_arg0); }());
}
}
}
// M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent,System.Object)
pls::cs::Ref<cs_9b21b86f0d2914e0> cs_2be5d3359f23ac72(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component,pls::cs::Ref<pls::cs::Object> v_arg) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect_2818 = pls::cs::Ref<cs_9b21b86f0d2914e0>{};
for (std::int32_t v_i_2850 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2850; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7cc420fdd246795c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2850; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2850 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect2_2910 = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7cc420fdd246795c; }())); auto cs_arg0 = v_i_2850; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); auto cs_arg0 = v_touchEffect2_2910; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c08c9d3910849f27(cs_receiver,cs_arg0); }())) {
continue;
}
([&]() { auto cs_value = v_touchEffect2_2910; v_touchEffect_2818 = cs_value; return cs_value; }());
break;
}
if (([&]() { auto cs_left = pls::cs::box(v_touchEffect_2818); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7cc420fdd246795c; }())); auto cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { return cs_2a1179e902640c2a(); }()); v_touchEffect_2818 = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_7969ffc067486ca6(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9b21b86f0d2914e0>>(v_touchEffect_2818); auto cs_arg0 = v_surface; auto cs_arg1 = v_id; auto cs_arg2 = v_x; auto cs_arg3 = v_y; auto cs_arg4 = v_component; auto cs_arg5 = v_arg; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5e534500fa7e2dfa(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); auto cs_arg0 = v_touchEffect_2818; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_95d1f01cac020884(cs_receiver,cs_arg0); }());
return v_touchEffect_2818;
}
}
}
// M:surface.TouchEffectManager.Clear
void cs_8bb33e3a9f88735c(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_1184 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_1184; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_1184; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_1184 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); auto cs_arg0 = v_num_1184; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9b21b86f0d2914e0>>(([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); auto cs_arg0 = v_i_952; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }())); auto cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fb03a4148f6cc986(cs_receiver,cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_1242) {auto cs_exception_1242=pls::cs::capture_exception(cs_caught_1242);
if(pls::cs::exception_is(cs_exception_1242,"System.Exception")) {auto v_t_1054=cs_exception_1242;{
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { auto cs_arg0 = v_t_1054; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
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
bool v_recoveredCondition_793_761 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9b21b86f0d2914e0>>(([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); auto cs_arg0 = v_num_702; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b7db73fe142457a(cs_receiver); }());
if (v_recoveredCondition_793_761) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); auto cs_arg0 = v_num_702; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_cc1549d9ed88f4a6(cs_receiver,cs_arg0); }());
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
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect_2017 = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); auto cs_arg0 = v_num_1953; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_touchEffect_2017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); auto cs_right = pls::cs::box(v_surface); return cs_left == cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_receiver = v_touchEffect_2017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4f16085a44631993; }()); return cs_864b2cef1e2afbf2(cs_arg0); }()); auto cs_right = v_componentId; return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); auto cs_arg0 = v_num_1953; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
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
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect_2352 = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); auto cs_arg0 = v_num_2288; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_touchEffect_2352; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); auto cs_right = pls::cs::box(v_surface); return cs_left == cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEffect_2352; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4f16085a44631993; }()); auto cs_right = v_componentKey; return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); auto cs_arg0 = v_num_2288; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
}
}
}
}
}
// M:surface.TouchEffectManager.RemoveEffect(surface.TouchEffect)
void cs_d673003b2f08f29f(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9b21b86f0d2914e0> v_effect) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); auto cs_arg0 = v_effect; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_dcec283a3ce35483(cs_receiver,cs_arg0); }());
}
}
}
// M:surface.TouchEffectManager.RemoveEffect(System.Int32)
void cs_186b1c2eff63e43a(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,std::int32_t v_index) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); auto cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_cc1549d9ed88f4a6(cs_receiver,cs_arg0); }());
}
}
}
// M:surface.TouchEffectManager.RemoveId(System.Int32)
void cs_bb7358e468d1296c(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,std::int32_t v_id) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_1731 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_1731; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_1731; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_1731 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); auto cs_arg0 = v_num_1731; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_579f8976161c3a90; }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); auto cs_arg0 = v_num_1731; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
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
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); auto cs_arg0 = v_num_1538; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); auto cs_right = pls::cs::box(v_surface); return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); auto cs_arg0 = v_num_1538; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
}
}
}
}
}
// M:system.billing.MyBilling.CheckPlayingGame
bool cs_ce7e41599b3302a7(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this) { cs_init_08829eb6a4df2a40();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(std::static_pointer_cast<cs_6ee7d14059be1acf>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6e47643190d08935(cs_receiver); }())) {
return true;
}
pls::cs::Ref<pls::kairo::FormBase> v_form_3842 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(cs_853c51ab649a13bb()); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(v_form_3842); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_form_3842); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsAlive(); }()))) {
std::int32_t v_id_3917 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_form_3842); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }());
if ((([&]() -> bool { auto cs_left = v_id_3917; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = v_id_3917; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left != cs_right); }()))) {
return true;
}
}
return false;
}
}
}
// M:system.billing.MyBilling.GetBillingTable
pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_bb154ea958b26a29(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this) { cs_init_08829eb6a4df2a40();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
bool v_flag_1148 = ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());
return ([&](){auto cs_initial_array_1244=pls::cs::Array<pls::cs::Array<pls::cs::String>>::make(4);cs_initial_array_1244.at(0)=([&](){auto cs_initial_array_1245=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_1245.at(0)=pls::cs::String(std::u16string(u"\x0030" u"\x0030" u"",2));cs_initial_array_1245.at(1)=pls::cs::String(std::u16string(u"\x0030" u"\x0030" u"\x0030" u"\x0030" u"",4));cs_initial_array_1245.at(2)=pls::cs::String(std::u16string(u"\x0061" u"\x0064" u"\x005f" u"\x006f" u"\x0066" u"\x0066" u"\x005f" u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"\x0030" u"",12));cs_initial_array_1245.at(3)=((v_flag_1148) ? pls::cs::String(std::u16string(u"\x5e83" u"\x544a" u"\x004f" u"\x0046" u"\x0046" u"\x002b" u"\x6a2a" u"\x56de" u"\x8ee2" u"",9)) : pls::cs::String(std::u16string(u"\x0052" u"\x0065" u"\x006d" u"\x006f" u"\x0076" u"\x0065" u"\x0020" u"\x0061" u"\x0064" u"\x0073" u"",10)));cs_initial_array_1245.at(4)=pls::cs::String(u"");cs_initial_array_1245.at(5)=pls::cs::String(std::u16string(u"\x0030" u"",1));cs_initial_array_1245.at(6)=pls::cs::String(u"");return cs_initial_array_1245;}());cs_initial_array_1244.at(1)=([&](){auto cs_initial_array_1246=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_1246.at(0)=pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"",2));cs_initial_array_1246.at(1)=pls::cs::String(std::u16string(u"\x0031" u"\x0031" u"\x0030" u"\x0030" u"",4));cs_initial_array_1246.at(2)=pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x005f" u"\x0031" u"\x005f" u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"\x0030" u"",14));cs_initial_array_1246.at(3)=((v_flag_1148) ? pls::cs::String(std::u16string(u"\xff81" u"\xff79" u"\xff6f" u"\xff84" u"\x007c" u"\x679a" u"\x007c" u"\x679a" u"",8)) : pls::cs::String(std::u16string(u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x007c" u"\x007c" u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"",14)));cs_initial_array_1246.at(4)=pls::cs::String(u"");cs_initial_array_1246.at(5)=pls::cs::String(std::u16string(u"\x0030" u"",1));cs_initial_array_1246.at(6)=pls::cs::String(u"");return cs_initial_array_1246;}());cs_initial_array_1244.at(2)=([&](){auto cs_initial_array_1247=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_1247.at(0)=pls::cs::String(std::u16string(u"\x0032" u"\x0030" u"",2));cs_initial_array_1247.at(1)=pls::cs::String(std::u16string(u"\x0030" u"\x0031" u"\x0030" u"\x0030" u"",4));cs_initial_array_1247.at(2)=pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x005f" u"\x0031" u"\x0030" u"\x005f" u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"\x0030" u"\x005f" u"\x0030" u"\x0030" u"",18));cs_initial_array_1247.at(3)=((v_flag_1148) ? pls::cs::String(std::u16string(u"\xff81" u"\xff79" u"\xff6f" u"\xff84" u"\x007c" u"\x679a" u"\x007c" u"\x679a" u"\xff7e" u"\xff6f" u"\xff84" u"",11)) : pls::cs::String(std::u16string(u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x0073" u"\x007c" u"\x007c" u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x0073" u"",16)));cs_initial_array_1247.at(4)=pls::cs::String(u"");cs_initial_array_1247.at(5)=pls::cs::String(std::u16string(u"\x0030" u"",1));cs_initial_array_1247.at(6)=pls::cs::String(u"");return cs_initial_array_1247;}());cs_initial_array_1244.at(3)=([&](){auto cs_initial_array_1248=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_1248.at(0)=pls::cs::String(std::u16string(u"\x0032" u"\x0031" u"",2));cs_initial_array_1248.at(1)=pls::cs::String(std::u16string(u"\x0030" u"\x0031" u"\x0030" u"\x0030" u"",4));cs_initial_array_1248.at(2)=pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x005f" u"\x0031" u"\x0030" u"\x005f" u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"\x0030" u"\x005f" u"\x0030" u"\x0031" u"",18));cs_initial_array_1248.at(3)=((v_flag_1148) ? pls::cs::String(std::u16string(u"\xff81" u"\xff79" u"\xff6f" u"\xff84" u"\x007c" u"\x679a" u"\x007c" u"\x679a" u"\xff7e" u"\xff6f" u"\xff84" u"",11)) : pls::cs::String(std::u16string(u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x0073" u"\x007c" u"\x007c" u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x0073" u"",16)));cs_initial_array_1248.at(4)=pls::cs::String(u"");cs_initial_array_1248.at(5)=pls::cs::String(std::u16string(u"\x0030" u"",1));cs_initial_array_1248.at(6)=pls::cs::String(u"");return cs_initial_array_1248;}());return cs_initial_array_1244;}());
}
}
}
// M:system.billing.ui.ApplyTask.#ctor
pls::cs::Ref<cs_feb7ae74aa59a27c> cs_6dc2344fc05b41a8() { cs_init_feb7ae74aa59a27c();
{ auto cs_this = pls::cs::make_ref<cs_feb7ae74aa59a27c>(); cs_6dc2344fc05b41a8_init(cs_this); return cs_this; }
}
void cs_6dc2344fc05b41a8_init(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this) {
cs_this->cs_9fc1ef5d1c5e7bde = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
{

}
}
// M:system.billing.ui.ApplyTask.#ctor(system.billing.ui.BillingItem,System.Int32,System.Boolean)
pls::cs::Ref<cs_feb7ae74aa59a27c> cs_be1899f5ff576e9b(pls::cs::Ref<cs_931908081ea62151> v_item,std::int32_t v_type,bool v_notice) { cs_init_feb7ae74aa59a27c();
{ auto cs_this = pls::cs::make_ref<cs_feb7ae74aa59a27c>(); cs_be1899f5ff576e9b_init(cs_this,v_item,v_type,v_notice); return cs_this; }
}
void cs_be1899f5ff576e9b_init(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,std::int32_t v_type,bool v_notice) {
cs_this->cs_9fc1ef5d1c5e7bde = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); auto cs_arg0 = v_item; auto cs_arg1 = pls::cs::String(u""); auto cs_arg2 = v_type; auto cs_arg3 = v_notice; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_845c3c904983102e(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.billing.ui.ApplyTask.#ctor(System.String)
pls::cs::Ref<cs_feb7ae74aa59a27c> cs_c9ca6e1962944643(pls::cs::String v_gift) { cs_init_feb7ae74aa59a27c();
{ auto cs_this = pls::cs::make_ref<cs_feb7ae74aa59a27c>(); cs_c9ca6e1962944643_init(cs_this,v_gift); return cs_this; }
}
void cs_c9ca6e1962944643_init(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::String v_gift) {
cs_this->cs_9fc1ef5d1c5e7bde = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); auto cs_arg0 = pls::cs::Ref<cs_931908081ea62151>{}; auto cs_arg1 = v_gift; auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg3 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_845c3c904983102e(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.billing.ui.ApplyTask.Deserialize(java.io.InputStream)
void cs_af5dfade08dc055d(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_6ee7d14059be1acf> v_instance_4193 = ([&]() -> pls::cs::Ref<cs_6ee7d14059be1acf> { return cs_f8eb247e2413618b(); }());
pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> v_items_4251 = ([&]() -> pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance_4193); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_0f79ffed5440eb44(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_931908081ea62151>{}; pls::game::cs_require(cs_target)->cs_88b3d0bc7988e77a = cs_value; return cs_value; }());
std::int32_t v_num_4304 = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_num_4304; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num_4304; auto cs_right = (v_items_4251).length(); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_items_4251; auto cs_index = v_num_4304; return cs_array.at(cs_index); }()); pls::game::cs_require(cs_target)->cs_88b3d0bc7988e77a = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_48404c380c305c6b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { auto cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_9764b5b60381a8b6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> bool { auto cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_1f1b271de448ce48 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }()); auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); auto cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9764b5b60381a8b6; }()); auto cs_arg3 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1f1b271de448ce48; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_845c3c904983102e(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:system.billing.ui.ApplyTask.Enable
bool cs_6fab53a6524e00ce(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d4b12a9d78baa416(cs_receiver); }()) || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bd823728f9e6fafc(cs_receiver); }()));
}
}
}
// M:system.billing.ui.ApplyTask.Equals(system.billing.ui.ApplyTask)
bool cs_616854ea5e666f2f(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_obj) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d4b12a9d78baa416(cs_receiver); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_obj); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d4b12a9d78baa416(cs_receiver); }()))) {
return (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); auto cs_right = pls::cs::box(([&]() { auto cs_receiver = v_obj; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); return cs_left == cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9764b5b60381a8b6; }()); auto cs_right = ([&]() { auto cs_receiver = v_obj; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9764b5b60381a8b6; }()); return (cs_left == cs_right); }()));
}
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bd823728f9e6fafc(cs_receiver); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_obj); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bd823728f9e6fafc(cs_receiver); }()))) {
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); auto cs_arg0 = ([&]() { auto cs_receiver = v_obj; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_77a6541b4422f624(cs_receiver,cs_arg0); }());
}
if (((((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bd823728f9e6fafc(cs_receiver); }()))) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d4b12a9d78baa416(cs_receiver); }())))) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_obj); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bd823728f9e6fafc(cs_receiver); }())))) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_obj); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d4b12a9d78baa416(cs_receiver); }()))))) {
return true;
}
return false;
}
}
}
// M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean)
void cs_845c3c904983102e(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,pls::cs::String v_gift,std::int32_t v_type,bool v_notice) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_item; pls::game::cs_require(cs_target)->cs_88b3d0bc7988e77a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ((([&]() { auto cs_left = pls::cs::box(v_gift); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? (v_gift) : (pls::cs::String(u""))); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_48404c380c305c6b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_9764b5b60381a8b6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_notice; pls::game::cs_require(cs_target)->cs_1f1b271de448ce48 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_625190bccd0d0fa4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = pls::cs::String(u""); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_ccc8fd33eda36b9e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = pls::cs::String(u""); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_7d0600ed44e25c28 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = pls::cs::String(u""); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_924ce9254cf3db30 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = pls::cs::String(u""); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_f369b68d3e3a2183 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_9fc1ef5d1c5e7bde = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d2976a74aad2ceb5(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_ccc8fd33eda36b9e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_dd481314101ac6b7(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_7d0600ed44e25c28 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f10af6d4bfbcc001(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_924ce9254cf3db30 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ea3e9ac545c4eeff(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_f369b68d3e3a2183 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1d621b133c4f5a78(cs_receiver); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_9fc1ef5d1c5e7bde = cs_value; return cs_value; }());
} else {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b9659319b202661(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_9f636226b66780dc(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Array<pls::cs::String> v_array_1700 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->ToString(); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array_1700; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_cea09c6a91d7c902 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() { auto cs_array = v_array_1700; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_26183201ac982bca = cs_value; return cs_value; }());
} else {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); auto cs_arg0 = pls::cs::String(std::u16string(u"\x0040" u"",1)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_eaf1659172f4a34c(cs_receiver,cs_arg0); }())) {

} else {
pls::cs::Array<pls::cs::String> v_array2_1923 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->ToString(); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() { auto cs_array = v_array2_1923; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_7d0600ed44e25c28 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = (v_array2_1923).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() { auto cs_array = v_array2_1923; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_ccc8fd33eda36b9e = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7d0600ed44e25c28; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dd0b8d6220bd2b3(cs_receiver); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x005f" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }()); v_array2_1923 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = (v_array2_1923).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() { auto cs_array = v_array2_1923; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_924ce9254cf3db30 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = (v_array2_1923).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() { auto cs_array = v_array2_1923; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_f369b68d3e3a2183 = cs_value; return cs_value; }());
}
try {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f369b68d3e3a2183; }())); auto cs_arg0 = pls::cs::String(std::u16string(u"\x006f" u"\x006e" u"",2)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dfda3f794a136b1(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_9fc1ef5d1c5e7bde = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f369b68d3e3a2183; }())); auto cs_arg0 = pls::cs::String(std::u16string(u"\x006f" u"\x0066" u"\x0066" u"",3)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dfda3f794a136b1(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_9fc1ef5d1c5e7bde = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f369b68d3e3a2183; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dd0b8d6220bd2b3(cs_receiver); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_9fc1ef5d1c5e7bde = cs_value; return cs_value; }());
}
} catch(const pls::cs::Exception& cs_caught_1252) {auto cs_exception_1252=pls::cs::capture_exception(cs_caught_1252);
if(pls::cs::exception_is(cs_exception_1252,"System.Exception")) {{

}}
else {throw;} }
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ccc8fd33eda36b9e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b9659319b202661(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
pls::cs::Ref<cs_6ee7d14059be1acf> v_instance_2782 = ([&]() -> pls::cs::Ref<cs_6ee7d14059be1acf> { return cs_f8eb247e2413618b(); }());
pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> v_items_2842 = ([&]() -> pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance_2782); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_0f79ffed5440eb44(); }());
pls::cs::Ref<cs_931908081ea62151> v_billingItem_2888 = pls::cs::Ref<cs_931908081ea62151>{};
pls::cs::Ref<cs_931908081ea62151> v_billingItem2_2925 = pls::cs::Ref<cs_931908081ea62151>{};
pls::cs::Ref<cs_931908081ea62151> v_billingItem3_2963 = pls::cs::Ref<cs_931908081ea62151>{};
for (std::int32_t v_i_2998 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2998; auto cs_right = (v_items_2842).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2998; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2998 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
continue;
}
if ((!((([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f10af6d4bfbcc001(cs_receiver); }()); auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_924ce9254cf3db30; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()))))) {
continue;
}
if (([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ea3e9ac545c4eeff(cs_receiver); }()); auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f369b68d3e3a2183; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.at(cs_index); }()); v_billingItem_2888 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1d621b133c4f5a78(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9fc1ef5d1c5e7bde; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.at(cs_index); }()); v_billingItem2_2925 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.at(cs_index); }()); v_billingItem3_2963 = cs_value; return cs_value; }());
}
}
if (([&]() { auto cs_left = pls::cs::box(v_billingItem_2888); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem_2888); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d2976a74aad2ceb5(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_ccc8fd33eda36b9e = cs_value; return cs_value; }());
} else if (([&]() { auto cs_left = pls::cs::box(v_billingItem2_2925); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem2_2925); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d2976a74aad2ceb5(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_ccc8fd33eda36b9e = cs_value; return cs_value; }());
} else if (([&]() { auto cs_left = pls::cs::box(v_billingItem3_2963); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem3_2963); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d2976a74aad2ceb5(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_ccc8fd33eda36b9e = cs_value; return cs_value; }());
}
}
}
}
}
}
}
}
}
// M:system.billing.ui.ApplyTask.IsGameApply
bool cs_d75c2e1895552ab6(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bd823728f9e6fafc(cs_receiver); }()) || ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d4b12a9d78baa416(cs_receiver); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_526dc02241eb9cf2(cs_receiver,cs_arg0); }()))));
}
}
}
// M:system.billing.ui.ApplyTask.IsGift
bool cs_bd823728f9e6fafc(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b9659319b202661(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()));
}
}
}
// M:system.billing.ui.ApplyTask.IsGiftScript
bool cs_bb022c37b48392ad(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b9659319b202661(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); auto cs_arg0 = pls::cs::String(std::u16string(u"\x0040" u"",1)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_eaf1659172f4a34c(cs_receiver,cs_arg0); }()));
}
}
}
// M:system.billing.ui.ApplyTask.IsItem
bool cs_d4b12a9d78baa416(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }());
}
}
}
// M:system.billing.ui.ApplyTask.Serialize(java.io.OutputStream)
void cs_7248c0ef7932886f(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? (([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bbde759dc3b81081; }())) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? (([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dd0b8d6220bd2b3(cs_receiver); }())) : (pls::cs::String(u""))); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = pls::cs::cast_integral<std::uint8_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9764b5b60381a8b6; }())); pls::generated::cs_c43b9bbf725f702e(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1f1b271de448ce48; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());
}
}
}
// M:system.billing.ui.BillingItem.ChangeState(System.Int32)
void cs_34602a275b94fc86(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_state) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = v_state; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_4ed7d84c1dce4799 = cs_value; return cs_value; }());
}
}
}
// M:system.billing.ui.BillingItem.Check(System.Int32)
bool cs_526dc02241eb9cf2(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_bit) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_feae4d6092e68c7b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = v_bit; return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }());
}
}
}
// M:system.billing.ui.BillingItem.CheckProvision
bool cs_fdc6ec3200ae7826(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_6ee7d14059be1acf> v_instance_3858 = ([&]() -> pls::cs::Ref<cs_6ee7d14059be1acf> { return cs_f8eb247e2413618b(); }());
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_526dc02241eb9cf2(cs_receiver,cs_arg0); }()) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance_3858); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_6e47643190d08935(); }()))))) {
return false;
}
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fd8816021d9a3386; }());
}
}
}
// M:system.billing.ui.BillingItem.CheckTestProduct
bool cs_0becefd0b1d5e4cd(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ffd30ff59c7f2fa7; }());
}
}
}
// M:system.billing.ui.BillingItem.Deserialize(java.io.InputStream)
void cs_d1e3bc579a0b32eb(pls::cs::Ref<cs_931908081ea62151> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { auto cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }())); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_4ed7d84c1dce4799 = cs_value; return cs_value; }());
std::int32_t v_num_4828 = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { auto cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }()));
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> bool { auto cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_fd8816021d9a3386 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> bool { auto cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_041f0f865fe45ade = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_feae4d6092e68c7b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::generated::cs_14daf94c5cc9a117(cs_arg0,cs_arg1); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num_4828; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left & cs_right); }())); return (cs_left | cs_right); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_feae4d6092e68c7b = cs_value; return cs_value; }());
}
}
}
// M:system.billing.ui.BillingItem.GetExplain
pls::cs::String cs_ef16a71fcdfd9b71(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_42e87afb27f20974; }());
}
}
}
// M:system.billing.ui.BillingItem.GetId
std::int32_t cs_859e2922776eae2b(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bbde759dc3b81081; }());
}
}
}
// M:system.billing.ui.BillingItem.GetItemType
std::int32_t cs_e33af97c9acf69d0(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_25ef515e28c2f1c3; }());
}
}
}
// M:system.billing.ui.BillingItem.GetName
pls::cs::String cs_d2976a74aad2ceb5(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8fb66fe9cd2c6fa; }());
}
}
}
// M:system.billing.ui.BillingItem.GetPlatformProductID(System.String)
pls::cs::String cs_61be1ca9ff48e486(pls::cs::String v_productID) { cs_init_931908081ea62151();
{
return v_productID;
}
}
// M:system.billing.ui.BillingItem.GetPrice
pls::cs::String cs_4c61a053b9c9bc8c(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_18b42457ec8905ed; }());
}
}
}
// M:system.billing.ui.BillingItem.GetProductId
pls::cs::String cs_dd481314101ac6b7(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1947569898ac6eaf; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());
}
}
}
// M:system.billing.ui.BillingItem.GetProvisionType
pls::cs::String cs_f10af6d4bfbcc001(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1bc5442ab3af463e; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());
}
}
}
// M:system.billing.ui.BillingItem.GetProvisionValue
std::int32_t cs_1d621b133c4f5a78(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5994cfa5fd307cd3; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());
}
}
}
// M:system.billing.ui.BillingItem.GetProvisionValueText
pls::cs::String cs_ea3e9ac545c4eeff(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15351a5f19e951e7; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());
}
}
}
// M:system.billing.ui.BillingItem.GetPurchase
pls::cs::Ref<cs_a42daea58251b089> cs_02424c6036fcb3c9(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e45a15cae334c64; }());
}
}
}
// M:system.billing.ui.BillingItem.GetSeriesName
pls::cs::String cs_5455b0bdd2f57048(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de33231c384fd439; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());
}
}
}
// M:system.billing.ui.BillingItem.GetSeriesNumber
std::int32_t cs_c94032c6dab33a1c(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_689025ebd1ac5aa9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());
}
}
}
// M:system.billing.ui.BillingItem.GetState
std::int32_t cs_2311693c37cf23d0(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ed7d84c1dce4799; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());
}
}
}
// M:system.billing.ui.BillingItem.Init(System.Int32,System.Int32,System.String,System.String,System.String,System.Int32,System.String)
void cs_d1922bb59f7ed3bf(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_id,std::int32_t v_flag,pls::cs::String v_productId,pls::cs::String v_name,pls::cs::String v_price,std::int32_t v_type,pls::cs::String v_explain) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_id; pls::game::cs_require(cs_target)->cs_bbde759dc3b81081 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = v_flag; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_feae4d6092e68c7b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = v_productId; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_1947569898ac6eaf = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_name; pls::game::cs_require(cs_target)->cs_e8fb66fe9cd2c6fa = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_25ef515e28c2f1c3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (((([&]() { auto cs_left = pls::cs::box(v_price); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ? (pls::cs::String(u"")) : (v_price))); pls::game::cs_require(cs_target)->cs_18b42457ec8905ed = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (((([&]() { auto cs_left = pls::cs::box(v_explain); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ? (pls::cs::String(u"")) : (v_explain))); pls::game::cs_require(cs_target)->cs_42e87afb27f20974 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_4ed7d84c1dce4799 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_fd8816021d9a3386 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_041f0f865fe45ade = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<pls::generated::cs_bb652fbb61000386>{}; pls::game::cs_require(cs_target)->cs_de33231c384fd439 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_689025ebd1ac5aa9 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1947569898ac6eaf; }()); return pls::generated::cs_f1e3fe1dceee44d7(cs_value); }()); return cs_61be1ca9ff48e486(cs_arg0); }()); return pls::generated::cs_7047562b1e051211(cs_value); }()); pls::game::cs_require(cs_target)->cs_1947569898ac6eaf = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_productId); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Array<pls::cs::String> v_array_1733 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = v_productId; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005f" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
std::int32_t v_num_1782 = (v_array_1733).length();
for (std::int32_t v_i_1814 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1814; auto cs_right = (v_array_1733).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1814; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1814 = cs_new; return cs_old; }())) {
if ((([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = v_array_1733; auto cs_index = v_i_1814; return cs_array.at(cs_index); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0062" u"\x0061" u"\x0073" u"\x0065" u"",4)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }()) || ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = v_array_1733; auto cs_index = v_i_1814; return cs_array.at(cs_index); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"",4)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = v_array_1733; auto cs_index = v_i_1814; return cs_array.at(cs_index); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0062" u"\x0061" u"\x0073" u"\x0065" u"",4)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_ffd30ff59c7f2fa7 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_i_1814; v_num_1782 = cs_value; return cs_value; }());
break;
}
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = (v_array_1733).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() { auto cs_array = v_array_1733; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_1bc5442ab3af463e = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num_1782; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() { auto cs_array = v_array_1733; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_15351a5f19e951e7 = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15351a5f19e951e7; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_5994cfa5fd307cd3 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15351a5f19e951e7; }())); auto cs_arg0 = pls::cs::String(std::u16string(u"\x006f" u"\x006e" u"",2)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dfda3f794a136b1(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_5994cfa5fd307cd3 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15351a5f19e951e7; }())); auto cs_arg0 = pls::cs::String(std::u16string(u"\x006f" u"\x0066" u"\x0066" u"",3)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dfda3f794a136b1(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_5994cfa5fd307cd3 = cs_value; return cs_value; }());
} else {
try {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15351a5f19e951e7; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_5994cfa5fd307cd3 = cs_value; return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_1253) {auto cs_exception_1253=pls::cs::capture_exception(cs_caught_1253);
if(pls::cs::exception_is(cs_exception_1253,"System.Exception")) {{

}}
else {throw;} }
}
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_right = (v_array_1733).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_array = v_array_1733; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_array_1733; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_array_1733; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }()); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_de33231c384fd439 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array_1733; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_689025ebd1ac5aa9 = cs_value; return cs_value; }());
}
}
}
}
}
// M:system.billing.ui.BillingItem.Off(System.Int32)
void cs_b3c80163ab846bc1(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_bit) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_feae4d6092e68c7b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(~(v_bit)); return (cs_left & cs_right); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_feae4d6092e68c7b = cs_value; return cs_value; }());
}
}
}
// M:system.billing.ui.BillingItem.On(System.Int32)
void cs_cea422709c0e739c(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_bit) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_feae4d6092e68c7b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = v_bit; return (cs_left | cs_right); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_feae4d6092e68c7b = cs_value; return cs_value; }());
}
}
}
// M:system.billing.ui.BillingItem.Serialize(java.io.OutputStream)
void cs_eae24f37838268a3(pls::cs::Ref<cs_931908081ea62151> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = pls::cs::cast_integral<std::uint8_t>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ed7d84c1dce4799; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }())); pls::generated::cs_c43b9bbf725f702e(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = pls::cs::cast_integral<std::uint8_t>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_feae4d6092e68c7b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }())); pls::generated::cs_c43b9bbf725f702e(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fd8816021d9a3386; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_041f0f865fe45ade; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());
}
}
}
// M:system.billing.ui.BillingItem.SetProvision(System.Boolean)
void cs_86d43294891eab63(pls::cs::Ref<cs_931908081ea62151> cs_this,bool v_provision) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_provision; pls::game::cs_require(cs_target)->cs_fd8816021d9a3386 = cs_value; return cs_value; }());
}
}
}
// M:system.billing.ui.BillingItem.SetPurchase(system.billing.util.Purchase)
void cs_c1ebd2cf1827c239(pls::cs::Ref<cs_931908081ea62151> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_purchase) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_purchase; pls::game::cs_require(cs_target)->cs_9e45a15cae334c64 = cs_value; return cs_value; }());
}
}
}
// M:system.billing.ui.BillingManager.AddApplyTask(system.billing.ui.ApplyTask)
bool cs_0fa7ac35adeb6144(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_26442 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_26442; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_26442; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_26442 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_feb7ae74aa59a27c> v_applyTask_26500 = pls::cs::unbox<pls::cs::Ref<cs_feb7ae74aa59a27c>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); auto cs_arg0 = v_i_26442; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_applyTask_26500); auto cs_arg0 = v_task; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_616854ea5e666f2f(cs_receiver,cs_arg0); }())) {
return false;
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); auto cs_arg0 = pls::cs::box(v_task); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
return true;
}
}
}
// M:system.billing.ui.BillingManager.CheckNextConsume
bool cs_54b9118ddf48a0fd(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_18626 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_18626; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83cb2d63bd6e7794; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_18626; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_18626 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_931908081ea62151> v_billingItem_18681 = pls::cs::unbox<pls::cs::Ref<cs_931908081ea62151>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83cb2d63bd6e7794; }())); auto cs_arg0 = v_i_18626; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_this); auto cs_arg0 = v_billingItem_18681; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_7f5d52ad795f2739(cs_receiver,cs_arg0,cs_arg1); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem_18681); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_526dc02241eb9cf2(cs_receiver,cs_arg0); }()))) {
return true;
}
}
return false;
}
}
}
// M:system.billing.ui.BillingManager.CheckPlayingGame
bool cs_6e47643190d08935(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ed52bb2c3b30e495; }())) {
return true;
}
return false;
}
}
}
// M:system.billing.ui.BillingManager.CheckRegistApply(system.billing.ui.BillingItem,System.Int32)
bool cs_7f5d52ad795f2739(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,std::int32_t v_type) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(v_item); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return false;
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_this); auto cs_arg0 = v_item; auto cs_arg1 = v_type; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2e3d6ed8fe7f9f6e(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
return false;
}
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_item); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_526dc02241eb9cf2(cs_receiver,cs_arg0); }()) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_6e47643190d08935(); }()))))) {
return false;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = v_item; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ed7d84c1dce4799; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && (!(([&]() { auto cs_receiver = v_item; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_041f0f865fe45ade; }()))))) {
return false;
}
if (((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_item); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_526dc02241eb9cf2(cs_receiver,cs_arg0); }()))) && ([&]() { auto cs_receiver = v_item; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fd8816021d9a3386; }()))) {
return false;
}
} else {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_item); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_526dc02241eb9cf2(cs_receiver,cs_arg0); }())) {
return false;
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = v_item; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ed7d84c1dce4799; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
return false;
}
if ((!(([&]() { auto cs_receiver = v_item; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fd8816021d9a3386; }())))) {
return false;
}
}
return true;
}
}
}
// M:system.billing.ui.BillingManager.ClearPurchaseLog
void cs_2fc4f3c7c0abe4f8(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a15dd0109485d6ae; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
}
}
}
// M:system.billing.ui.BillingManager.Finish
void cs_fd462548e4e21992(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:system.billing.ui.BillingManager.GetApplyTaskList(System.Boolean)
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_606db2035b9b12ba(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,bool v_game) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_27697 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
for (std::int32_t v_i_27732 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_27732; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_27732; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_27732 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_feb7ae74aa59a27c> v_applyTask_27790 = pls::cs::unbox<pls::cs::Ref<cs_feb7ae74aa59a27c>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); auto cs_arg0 = v_i_27732; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_left = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_applyTask_27790); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d75c2e1895552ab6(cs_receiver); }()); auto cs_right = v_game; return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_27697); auto cs_arg0 = pls::cs::box(v_applyTask_27790); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
return v_vector_27697;
}
}
}
// M:system.billing.ui.BillingManager.GetInstance
pls::cs::Ref<cs_6ee7d14059be1acf> cs_f8eb247e2413618b() { cs_init_6ee7d14059be1acf();
{
return cs_33c160ec018e286a();
}
}
// M:system.billing.ui.BillingManager.GetItem(System.Int32)
pls::cs::Ref<cs_931908081ea62151> cs_eeb39a8b5e25b72e(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,std::int32_t v_id) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_id; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_id; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_65e865503b8550da; }())).length(); return (cs_left < cs_right); }()))) {
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_65e865503b8550da; }()); auto cs_index = v_id; return cs_array.at(cs_index); }());
}
return pls::cs::Ref<cs_931908081ea62151>{};
}
}
}
// M:system.billing.ui.BillingManager.GetItem(System.String)
pls::cs::Ref<cs_931908081ea62151> cs_825e5e2cb902b87f(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::String v_productId) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_14889 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_14889; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83cb2d63bd6e7794; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_14889; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_14889 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_931908081ea62151> v_billingItem_14944 = pls::cs::unbox<pls::cs::Ref<cs_931908081ea62151>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83cb2d63bd6e7794; }())); auto cs_arg0 = v_i_14889; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_arg0 = v_productId; auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem_14944); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_dd481314101ac6b7(cs_receiver); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }())) {
return v_billingItem_14944;
}
}
return pls::cs::Ref<cs_931908081ea62151>{};
}
}
}
// M:system.billing.ui.BillingManager.GetItemGroup
pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>>> cs_5e95ac080daeec46(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5206026f8dde3f8; }());
}
}
}
// M:system.billing.ui.BillingManager.GetItemList(System.Boolean)
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_308ebf95da3707b4(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,bool v_game) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_28013 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
for (std::int32_t v_i_28048 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_28048; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83cb2d63bd6e7794; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_28048; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_28048 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_931908081ea62151> v_billingItem_28103 = pls::cs::unbox<pls::cs::Ref<cs_931908081ea62151>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83cb2d63bd6e7794; }())); auto cs_arg0 = v_i_28048; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_left = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem_28103); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_526dc02241eb9cf2(cs_receiver,cs_arg0); }()); auto cs_right = v_game; return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_28013); auto cs_arg0 = pls::cs::box(v_billingItem_28103); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
return v_vector_28013;
}
}
}
// M:system.billing.ui.BillingManager.GetItems
pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> cs_a54604197e27ba6e(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_65e865503b8550da; }());
}
}
}
// M:system.billing.ui.BillingManager.GetPurchaseLog
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_26628cac4dee43ab(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a15dd0109485d6ae; }());
}
}
}
// M:system.billing.ui.BillingManager.GetSales
pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> cs_5ec95513c85ebc20(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
bool v_flag_15158 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_6e47643190d08935(); }());
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_15195 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
for (std::int32_t v_i_15230 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_15230; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83cb2d63bd6e7794; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_15230; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_15230 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_931908081ea62151> v_billingItem_15285 = pls::cs::unbox<pls::cs::Ref<cs_931908081ea62151>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83cb2d63bd6e7794; }())); auto cs_arg0 = v_i_15230; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem_15285); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_526dc02241eb9cf2(cs_receiver,cs_arg0); }())) {

} else if (((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem_15285); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_526dc02241eb9cf2(cs_receiver,cs_arg0); }())) && ((!((v_flag_15158)))))) {

} else if (((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem_15285); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0becefd0b1d5e4cd(cs_receiver); }())) && ((!((pls::generated::cs_b0827224162a4f93())))))) {

} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_15195); auto cs_arg0 = pls::cs::box(v_billingItem_15285); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
}
pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> v_array_15553 = pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>>::make(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_15195); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()));
for (std::int32_t v_j_15605 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_15605; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_15195); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_15605; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_15605 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_15553; auto cs_index = v_j_15605; auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_931908081ea62151>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_15195); auto cs_arg0 = v_j_15605; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
return v_array_15553;
}
}
}
// M:system.billing.ui.BillingManager.LoadGame(System.Byte[])
void cs_52c48544109f9d2d(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Array<std::uint8_t> v_data) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_7636 = pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{};
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { auto cs_arg0 = v_data; return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_7636 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> bool { auto cs_arg0 = v_byteArrayInputStream_7636; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_336cd83725fe8f95 = cs_value; return cs_value; }());
for (std::int32_t v_num_7810 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_7810; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_7810; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_7810 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_feb7ae74aa59a27c> v_applyTask_7881 = pls::cs::unbox<pls::cs::Ref<cs_feb7ae74aa59a27c>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); auto cs_arg0 = v_num_7810; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_applyTask_7881); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d75c2e1895552ab6(cs_receiver); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); auto cs_arg0 = v_num_7810; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
}
std::int32_t v_num2_8040 = ([&]() -> std::int32_t { auto cs_arg0 = v_byteArrayInputStream_7636; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
for (std::int32_t v_i_8102 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_8102; auto cs_right = v_num2_8040; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_8102; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_8102 = cs_new; return cs_old; }())) {
std::int32_t v_num3_8139 = ([&]() -> std::int32_t { auto cs_arg0 = v_byteArrayInputStream_7636; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
bool v_provision__8198 = ([&]() -> bool { auto cs_arg0 = v_byteArrayInputStream_7636; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());
if ((([&]() -> bool { auto cs_left = v_num3_8139; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_65e865503b8550da; }())).length(); return (cs_left < cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_65e865503b8550da; }()); auto cs_index = v_num3_8139; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_65e865503b8550da; }()); auto cs_index = v_num3_8139; return cs_array.at(cs_index); }()); auto cs_value = v_provision__8198; pls::game::cs_require(cs_target)->cs_fd8816021d9a3386 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int16_t { auto cs_arg0 = v_byteArrayInputStream_7636; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }())); v_num2_8040 = cs_value; return cs_value; }());
for (std::int32_t v_j_8444 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_8444; auto cs_right = v_num2_8040; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_8444; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_8444 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_feb7ae74aa59a27c> v_applyTask2_8487 = ([&]() -> pls::cs::Ref<cs_feb7ae74aa59a27c> { return cs_6dc2344fc05b41a8(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_applyTask2_8487); auto cs_arg0 = v_byteArrayInputStream_7636; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_af5dfade08dc055d(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_applyTask2_8487); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6fab53a6524e00ce(cs_receiver); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); auto cs_arg0 = pls::cs::box(v_applyTask2_8487); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_byteArrayInputStream_7636); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_7636); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{}; v_byteArrayInputStream_7636 = cs_value; return cs_value; }());
});
}
}
}
// M:system.billing.ui.BillingManager.RemoveApplyTask(system.billing.ui.ApplyTask)
bool cs_10cbcc43cf78e9d4(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_27501 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_this); auto cs_arg0 = v_task; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d0a172330455208b(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_num_27501; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return false;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); auto cs_arg0 = v_num_27501; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
return true;
}
}
}
// M:system.billing.ui.BillingManager.RemoveApplyTask(system.billing.ui.BillingItem,System.Int32)
bool cs_18a3aa1d1ce4817d(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,std::int32_t v_type) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_27300 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_this); auto cs_arg0 = v_item; auto cs_arg1 = v_type; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2e3d6ed8fe7f9f6e(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num_27300; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return false;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); auto cs_arg0 = v_num_27300; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
return true;
}
}
}
// M:system.billing.ui.BillingManager.SearchApplyTask(system.billing.ui.ApplyTask)
std::int32_t cs_d0a172330455208b(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_27036 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_27036; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_27036; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_27036 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_feb7ae74aa59a27c> v_applyTask_27094 = pls::cs::unbox<pls::cs::Ref<cs_feb7ae74aa59a27c>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); auto cs_arg0 = v_i_27036; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_applyTask_27094); auto cs_arg0 = v_task; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_616854ea5e666f2f(cs_receiver,cs_arg0); }())) {
return v_i_27036;
}
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
}
}
// M:system.billing.ui.BillingManager.SearchApplyTask(system.billing.ui.BillingItem,System.Int32)
std::int32_t cs_2e3d6ed8fe7f9f6e(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,std::int32_t v_type) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_26752 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_26752; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_26752; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_26752 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_feb7ae74aa59a27c> v_applyTask_26810 = pls::cs::unbox<pls::cs::Ref<cs_feb7ae74aa59a27c>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5da0dc1a74717a1; }())); auto cs_arg0 = v_i_26752; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_applyTask_26810; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); auto cs_right = pls::cs::box(v_item); return cs_left == cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_applyTask_26810; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9764b5b60381a8b6; }()); auto cs_right = v_type; return (cs_left == cs_right); }()))) {
return v_i_26752;
}
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
}
}
// M:system.billing.ui.BillingManager.WriteGame
pls::cs::Array<std::uint8_t> cs_9d8c67a5fdbb3c7d(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_fb60578b3098a284> v_byteArrayOutputStream_8877 = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{};
return pls::cs::run_finally([&]() -> pls::cs::Array<std::uint8_t> { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_8877 = cs_value; return cs_value; }());
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_8877; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_336cd83725fe8f95; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_itemList_9049 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_this); auto cs_arg0 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_308ebf95da3707b4(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_8877; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_itemList_9049); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_9157 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_9157; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_itemList_9049); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_9157; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_9157 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_931908081ea62151> v_billingItem_9213 = pls::cs::unbox<pls::cs::Ref<cs_931908081ea62151>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_itemList_9049); auto cs_arg0 = v_i_9157; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_8877; auto cs_arg1 = ([&]() { auto cs_receiver = v_billingItem_9213; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bbde759dc3b81081; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_8877; auto cs_arg1 = ([&]() { auto cs_receiver = v_billingItem_9213; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fd8816021d9a3386; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_this); auto cs_arg0 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_606db2035b9b12ba(cs_receiver,cs_arg0); }()); v_itemList_9049 = cs_value; return cs_value; }());
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_8877; auto cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_itemList_9049); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());
for (std::int32_t v_j_9538 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_9538; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_itemList_9049); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_9538; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_9538 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_feb7ae74aa59a27c> v_applyTask_9592 = pls::cs::unbox<pls::cs::Ref<cs_feb7ae74aa59a27c>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_itemList_9049); auto cs_arg0 = v_j_9538; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_applyTask_9592); auto cs_arg0 = v_byteArrayOutputStream_8877; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7248c0ef7932886f(cs_receiver,cs_arg0); }());
}
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_8877); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_byteArrayOutputStream_8877); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_8877); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{}; v_byteArrayOutputStream_8877 = cs_value; return cs_value; }());
});
}
}
}
// M:system.billing.ui.PurchaseLogView.#ctor(System.String)
pls::cs::Ref<cs_24ddde8b39392611> cs_67a7684996012e79(pls::cs::String v_title) { cs_init_24ddde8b39392611();
{ auto cs_this = pls::cs::make_ref<cs_24ddde8b39392611>(); cs_67a7684996012e79_init(cs_this,v_title); return cs_this; }
}
void cs_67a7684996012e79_init(pls::cs::Ref<cs_24ddde8b39392611> cs_this,pls::cs::String v_title) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_title; pls::game::cs_require(cs_target)->cs_86cc8a271e68cde9 = cs_value; return cs_value; }());
}
}
// M:system.billing.ui.PurchaseLogView.SetLog(System.Int32,System.String,System.Boolean)
void cs_5ff6954fb3a61a02(pls::cs::Ref<cs_24ddde8b39392611> cs_this,std::int32_t v_num,pls::cs::String v_text,bool v_log) { cs_init_24ddde8b39392611();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_num; pls::game::cs_require(cs_target)->cs_050458c631e7a9c0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); auto cs_arg2 = pls::cs::String(std::u16string(u"\x000a" u"",1)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }()); pls::game::cs_require(cs_target)->cs_e9473a0af87a54bc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_log; pls::game::cs_require(cs_target)->cs_04a5436ce9dc3d38 = cs_value; return cs_value; }());
}
}
}
// M:system.billing.ui.PurchaseRecord.#ctor
pls::cs::Ref<cs_cd85e7c847ae4598> cs_77c1e405abfca250() { cs_init_cd85e7c847ae4598();
{ auto cs_this = pls::cs::make_ref<cs_cd85e7c847ae4598>(); cs_77c1e405abfca250_init(cs_this); return cs_this; }
}
void cs_77c1e405abfca250_init(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this) {
([&]() { auto cs_arg0 = pls::cs::String(u""); auto cs_arg1 = pls::cs::String(u""); cs_f82de0fa574740fa_init(std::static_pointer_cast<cs_cd85e7c847ae4598>(cs_this),cs_arg0,cs_arg1); }());
{

}
}
// M:system.billing.ui.PurchaseRecord.#ctor(System.String,System.String)
pls::cs::Ref<cs_cd85e7c847ae4598> cs_f82de0fa574740fa(pls::cs::String v_productId,pls::cs::String v_orderId) { cs_init_cd85e7c847ae4598();
{ auto cs_this = pls::cs::make_ref<cs_cd85e7c847ae4598>(); cs_f82de0fa574740fa_init(cs_this,v_productId,v_orderId); return cs_this; }
}
void cs_f82de0fa574740fa_init(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,pls::cs::String v_productId,pls::cs::String v_orderId) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_productId; pls::game::cs_require(cs_target)->cs_08330cbc7084da66 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_orderId; pls::game::cs_require(cs_target)->cs_84fc06b76c121945 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull))); pls::game::cs_require(cs_target)->cs_6decd46ca925e986 = cs_value; return cs_value; }());
for (std::int32_t v_i_659 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_659; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_659; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_659 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_i_659; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_a614ab58777a40a1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_06683c451efa1973 = cs_value; return cs_value; }());
}
}
// M:system.billing.ui.PurchaseRecord.Deserialize(java.io.InputStream)
void cs_9df67280b402af5e(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_08330cbc7084da66 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_84fc06b76c121945 = cs_value; return cs_value; }());
for (std::int32_t v_i_3814 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3814; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3814; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3814 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_i_3814; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int8_t { auto cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_a614ab58777a40a1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> bool { auto cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_06683c451efa1973 = cs_value; return cs_value; }());
}
}
}
// M:system.billing.ui.PurchaseRecord.GetHashCode
std::int32_t cs_a2ebcb9a739953bd(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:system.billing.ui.PurchaseRecord.GetOrderId
pls::cs::String cs_357cc1e956f91fea(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_84fc06b76c121945; }());
}
}
}
// M:system.billing.ui.PurchaseRecord.GetProductId
pls::cs::String cs_9bd032e02c3f6f2a(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_08330cbc7084da66; }());
}
}
}
// M:system.billing.ui.PurchaseRecord.GetState
std::int32_t cs_1c95224fba0dddd6(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a614ab58777a40a1; }());
}
}
}
// M:system.billing.ui.PurchaseRecord.GetTimeStamp(System.Int32)
pls::cs::String cs_f917ec3f98c48427(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,std::int32_t v_state) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_state; return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return pls::cs::String(u"");
}
pls::cs::Ref<pls::generated::cs_a465028bea3432a3> v_instance_1200 = ([&]() -> pls::cs::Ref<pls::generated::cs_a465028bea3432a3> { return pls::generated::cs_23a91b30234d4879(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); auto cs_arg0 = ([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_state; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i64(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_ab403c0b96bfdb59(cs_receiver,cs_arg0); }());
pls::cs::String v_text_1308 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());
pls::cs::String v_text2_1359 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());
pls::cs::String v_text3_1415 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());
pls::cs::String v_text4_1467 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());
pls::cs::String v_text5_1520 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());
pls::cs::String v_text6_1573 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text2_1359; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text2_1359; return pls::cs::String::concat(cs_left,cs_right); }()); v_text2_1359 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text3_1415; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text3_1415; return pls::cs::String::concat(cs_left,cs_right); }()); v_text3_1415 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text4_1467; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text4_1467; return pls::cs::String::concat(cs_left,cs_right); }()); v_text4_1467 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text5_1520; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text5_1520; return pls::cs::String::concat(cs_left,cs_right); }()); v_text5_1520 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text6_1573; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text6_1573; return pls::cs::String::concat(cs_left,cs_right); }()); v_text6_1573 = cs_value; return cs_value; }());
}
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text_1308; auto cs_right = pls::cs::String(std::u16string(u"\x002d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text2_1359; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text3_1415; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0020" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text4_1467; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x003a" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text5_1520; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x003a" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text6_1573; return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:system.billing.ui.PurchaseRecord.GetTimeStampNengappi(System.Int32)
pls::cs::String cs_049aa2baa5783de5(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,std::int32_t v_state) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_state; return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return pls::cs::String(u"");
}
pls::cs::Ref<pls::generated::cs_a465028bea3432a3> v_instance_2153 = ([&]() -> pls::cs::Ref<pls::generated::cs_a465028bea3432a3> { return pls::generated::cs_23a91b30234d4879(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); auto cs_arg0 = ([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_state; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i64(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_ab403c0b96bfdb59(cs_receiver,cs_arg0); }());
pls::cs::String v_text_2261 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());
pls::cs::String v_text2_2312 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());
pls::cs::String v_text3_2368 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());
pls::cs::String v_text4_2420 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());
pls::cs::String v_text5_2473 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());
pls::cs::String v_text6_2526 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text2_2312; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text2_2312; return pls::cs::String::concat(cs_left,cs_right); }()); v_text2_2312 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text3_2368; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text3_2368; return pls::cs::String::concat(cs_left,cs_right); }()); v_text3_2368 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text4_2420; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text4_2420; return pls::cs::String::concat(cs_left,cs_right); }()); v_text4_2420 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text5_2473; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text5_2473; return pls::cs::String::concat(cs_left,cs_right); }()); v_text5_2473 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text6_2526; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text6_2526; return pls::cs::String::concat(cs_left,cs_right); }()); v_text6_2526 = cs_value; return cs_value; }());
}
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text_2261; auto cs_right = pls::cs::String(std::u16string(u"\x002d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text2_2312; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text3_2368; return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:system.billing.ui.PurchaseRecord.Serialize(java.io.OutputStream)
void cs_d407a71ebcad197a(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_08330cbc7084da66; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_84fc06b76c121945; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_3484 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3484; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3484; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3484 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_i_3484; return cs_array.at(cs_index); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = pls::cs::cast_integral<std::uint8_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a614ab58777a40a1; }())); pls::generated::cs_c43b9bbf725f702e(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_06683c451efa1973; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());
}
}
}
// M:system.billing.ui.PurchaseRecord.ToString
pls::cs::String cs_ad7fb776daed3dde(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_cd85e7c847ae4598>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9bd032e02c3f6f2a(cs_receiver); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0020" u"\x0028" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_cd85e7c847ae4598>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1c95224fba0dddd6(cs_receiver); }())); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0029" u"\x0020" u"\x005b" u"",3)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_cd85e7c847ae4598>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f917ec3f98c48427(cs_receiver,cs_arg0); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x005b" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_cd85e7c847ae4598>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f917ec3f98c48427(cs_receiver,cs_arg0); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x005b" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_cd85e7c847ae4598>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f917ec3f98c48427(cs_receiver,cs_arg0); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x000a" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_cd85e7c847ae4598>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_357cc1e956f91fea(cs_receiver); }()); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:system.billing.ui.Receipt.#ctor
pls::cs::Ref<cs_15f31d4f046b09a8> cs_9c5286d2f0a31d6e() { cs_init_15f31d4f046b09a8();
{ auto cs_this = pls::cs::make_ref<cs_15f31d4f046b09a8>(); cs_9c5286d2f0a31d6e_init(cs_this); return cs_this; }
}
void cs_9c5286d2f0a31d6e_init(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) {
cs_this->cs_10794726de973b56 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
{

}
}
// M:system.billing.ui.Receipt.#ctor(UnityEngine.Purchasing.Product,System.String)
pls::cs::Ref<cs_15f31d4f046b09a8> cs_086496be2a9fbcc0(pls::cs::Ref<cs_efeeb7640894c95e> v_p,pls::cs::String v_receipt) { cs_init_15f31d4f046b09a8();
{ auto cs_this = pls::cs::make_ref<cs_15f31d4f046b09a8>(); cs_086496be2a9fbcc0_init(cs_this,v_p,v_receipt); return cs_this; }
}
void cs_086496be2a9fbcc0_init(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::Ref<cs_efeeb7640894c95e> v_p,pls::cs::String v_receipt) {
cs_this->cs_10794726de973b56 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
{

}
}
// M:system.billing.ui.Receipt.Consume
void cs_dd397613cdc03211(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59d0e1ae203981e5; }()); auto cs_right = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left != cs_right); }())) {
return;
}
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_9aee68341f2c87b1(cs_value); }()); pls::game::cs_require(cs_target)->cs_b713199635bb1058 = cs_value; return cs_value; }());
}
}
}
}
// M:system.billing.ui.Receipt.Copy(system.billing.ui.Receipt)
void cs_caaec83cd1923ea7(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::Ref<cs_15f31d4f046b09a8> v_r) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = v_r; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_faf2053d989419ff; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dd0b8d6220bd2b3(cs_receiver); }()); return pls::generated::cs_7047562b1e051211(cs_value); }()); pls::game::cs_require(cs_target)->cs_faf2053d989419ff = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = v_r; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_519713e3b629623c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dd0b8d6220bd2b3(cs_receiver); }()); return pls::generated::cs_7047562b1e051211(cs_value); }()); pls::game::cs_require(cs_target)->cs_519713e3b629623c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = v_r; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b713199635bb1058; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); return pls::generated::cs_9aee68341f2c87b1(cs_value); }()); pls::game::cs_require(cs_target)->cs_b713199635bb1058 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_r; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59d0e1ae203981e5; }()); pls::game::cs_require(cs_target)->cs_59d0e1ae203981e5 = cs_value; return cs_value; }());
}
}
}
// M:system.billing.ui.Receipt.DebugVerificationReceipt
void cs_82519cef4853816c(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f228db45ed90d23f(cs_receiver); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",5)); return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }()); cs_c3cd5afb73d8cc54(cs_arg0); }());
}
}
}
// M:system.billing.ui.Receipt.DebugVerificationReceipt(System.String)
void cs_c3cd5afb73d8cc54(pls::cs::String v_token) { cs_init_15f31d4f046b09a8();
{
if ((!((pls::generated::cs_b0827224162a4f93())))) {
return;
}
}
}
// M:system.billing.ui.Receipt.Equals(System.Object)
bool cs_f86548878598ca1e(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::Ref<pls::cs::Object> v_o) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((!((pls::game::cs_is<pls::cs::Ref<cs_15f31d4f046b09a8>>(pls::cs::box(v_o)))))) {
return false;
}
if (([&]() { auto cs_left = pls::cs::box(v_o); auto cs_right = pls::cs::box(cs_this); return cs_left == cs_right; }())) {
return true;
}
pls::cs::Ref<cs_15f31d4f046b09a8> v_receipt_826 = pls::cs::unbox<pls::cs::Ref<cs_15f31d4f046b09a8>>(v_o);
return (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_faf2053d989419ff; }())); auto cs_right = pls::cs::box(([&]() { auto cs_receiver = v_receipt_826; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_faf2053d989419ff; }())); return cs_left == cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_519713e3b629623c; }())); auto cs_right = pls::cs::box(([&]() { auto cs_receiver = v_receipt_826; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_519713e3b629623c; }())); return cs_left == cs_right; }()));
}
}
}
// M:system.billing.ui.Receipt.GetHashCode
std::int32_t cs_d860de92f53afc6c(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:system.billing.ui.Receipt.GetItemType(UnityEngine.Purchasing.Product)
pls::cs::String cs_f1b1730a73f8deed(pls::cs::Ref<cs_efeeb7640894c95e> v_p) { cs_init_15f31d4f046b09a8();
{
return pls::cs::String{};
}
}
// M:system.billing.ui.Receipt.GetItemType(UnityEngine.Purchasing.ProductType)
pls::cs::String cs_9f1744905f403ec8(std::int32_t v_type) { cs_init_15f31d4f046b09a8();
{
return ((([&]() -> bool { auto cs_left = v_type; auto cs_right = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))); return (cs_left == cs_right); }())) ? pls::cs::String(std::u16string(u"\x0073" u"\x0075" u"\x0062" u"\x0073" u"",4)) : pls::cs::String(std::u16string(u"\x0069" u"\x006e" u"\x0061" u"\x0070" u"\x0070" u"",5)));
}
}
// M:system.billing.ui.Receipt.GetJson
pls::cs::String cs_f228db45ed90d23f(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_76d45a6ec5e37940(cs_receiver); }()); auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_69ca60609ca07561(cs_receiver); }()); auto cs_arg2 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_object_string(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6541be3d4c391c46; }()))); return pls::cs::String::concat(cs_left,cs_right); }()); return cs_29cfbbc6ef724690(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
// M:system.billing.ui.Receipt.GetJsonParam(System.String)
pls::cs::String cs_3401b30298b4eb96(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::String v_tag) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f228db45ed90d23f(cs_receiver); }()); auto cs_arg1 = v_tag; return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }());
}
}
}
// M:system.billing.ui.Receipt.GetOrderId
pls::cs::String cs_e8fea88a1ccd74d6(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); auto cs_arg0 = pls::cs::String(std::u16string(u"\x006f" u"\x0072" u"\x0064" u"\x0065" u"\x0072" u"\x0049" u"\x0064" u"",7)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3401b30298b4eb96(cs_receiver,cs_arg0); }());
}
}
}
// M:system.billing.ui.Receipt.GetProductID
pls::cs::String cs_69ca60609ca07561(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_faf2053d989419ff; }()); return pls::generated::cs_f1e3fe1dceee44d7(cs_value); }()); return cs_0e8660e32789ac5b(cs_arg0); }());
}
}
}
// M:system.billing.ui.Receipt.GetProductType
std::int32_t cs_b16954dcc18f83e4(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59d0e1ae203981e5; }());
}
}
}
// M:system.billing.ui.Receipt.GetPurchase
pls::cs::Ref<cs_a42daea58251b089> cs_9766d64ee1bba541(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::String v_json_1219 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f228db45ed90d23f(cs_receiver); }());
return ([&]() -> pls::cs::Ref<cs_a42daea58251b089> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59d0e1ae203981e5; }()); return cs_9f1744905f403ec8(cs_arg0); }()); auto cs_arg1 = v_json_1219; auto cs_arg2 = ([&]() -> pls::cs::String { auto cs_arg0 = v_json_1219; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0073" u"\x0069" u"\x0067" u"\x006e" u"\x0061" u"\x0074" u"\x0075" u"\x0072" u"\x0065" u"",9)); return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }()); return cs_f7abaa335be13394(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
// M:system.billing.ui.Receipt.GetReceipt
pls::cs::String cs_76d45a6ec5e37940(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_519713e3b629623c; }()); return pls::generated::cs_f1e3fe1dceee44d7(cs_value); }()); return cs_0e8660e32789ac5b(cs_arg0); }());
}
}
}
// M:system.billing.ui.Receipt.IsConsume
bool cs_f1c17b9cbfeb6ace(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59d0e1ae203981e5; }()); auto cs_right = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left != cs_right); }())) {
return false;
}
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b713199635bb1058; }()); return pls::generated::cs_d940a557e2a81257(cs_value); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }());
}
}
}
// M:system.billing.ui.Receipt.Load(java.io.InputStream)
pls::cs::Ref<cs_15f31d4f046b09a8> cs_fb33e792a02d6245(pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_15f31d4f046b09a8();
{
pls::cs::Ref<cs_15f31d4f046b09a8> v_receipt_2975 = ([&]() -> pls::cs::Ref<cs_15f31d4f046b09a8> { return cs_9c5286d2f0a31d6e(); }());
([&]() { auto cs_target = v_receipt_2975; auto cs_value = ([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); return pls::generated::cs_7047562b1e051211(cs_value); }()); pls::game::cs_require(cs_target)->cs_faf2053d989419ff = cs_value; return cs_value; }());
([&]() { auto cs_target = v_receipt_2975; auto cs_value = ([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); return pls::generated::cs_7047562b1e051211(cs_value); }()); pls::game::cs_require(cs_target)->cs_519713e3b629623c = cs_value; return cs_value; }());
([&]() { auto cs_target = v_receipt_2975; auto cs_value = ([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_9aee68341f2c87b1(cs_value); }()); pls::game::cs_require(cs_target)->cs_b713199635bb1058 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_receipt_2975; auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_59d0e1ae203981e5 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_receipt_2975; auto cs_value = ([&]() -> bool { auto cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_d6ae59bf543478aa = cs_value; return cs_value; }());
([&]() { auto cs_target = v_receipt_2975; auto cs_value = ([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_arg0 = v_stream; return pls::generated::cs_faab575a7db8f157(cs_arg0); }()); return pls::generated::cs_867c5dd84cdc90b1(cs_value); }()); pls::game::cs_require(cs_target)->cs_6541be3d4c391c46 = cs_value; return cs_value; }());
return v_receipt_2975;
}
}
// M:system.billing.ui.Receipt.PasswordDecodeToBytes(System.String)
pls::cs::Array<std::uint8_t> cs_942b8b55f6cc61e8(pls::cs::String v_src) { cs_init_15f31d4f046b09a8();
{
bool v_pRINT_4232 = pls::generated::cs_4cc76a7a43706693();
return pls::cs::run_finally([&]() -> pls::cs::Array<std::uint8_t> { {
([&]() { auto cs_value = false; pls::generated::cs_4cc76a7a43706693() = cs_value; return cs_value; }());
pls::cs::Array<std::uint8_t> v_array_4303 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_src; return pls::generated::cs_45659d3497c243a5(cs_arg0); }());
([&]() -> void { auto cs_arg0 = v_array_4303; auto cs_arg1 = cs_0ab9b09ba01c1501(); pls::generated::cs_33fd658d45a27eb0(cs_arg0,cs_arg1); }());
std::int64_t v_num_4378 = ([&]() -> std::int64_t { auto cs_arg0 = v_array_4303; auto cs_arg1 = false; return pls::generated::cs_a02a33f2a801ef0d(cs_arg0,cs_arg1); }());
pls::cs::Array<std::uint8_t> v_array2_4428 = pls::cs::Array<std::uint8_t>::make(([&]() -> std::int32_t { auto cs_left = (v_array_4303).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::sub_i32(cs_left,cs_right); }()));
([&]() -> void { auto cs_arg0 = pls::cs::box(v_array_4303); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_arg2 = pls::cs::box(v_array2_4428); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = (v_array2_4428).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_arg0 = v_array2_4428; return pls::generated::cs_4d36dd315e2118af(cs_arg0); }()); auto cs_right = v_num_4378; return (cs_left != cs_right); }())) {
return pls::cs::Array<std::uint8_t>{};
}
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_array2_4428; return pls::generated::cs_76473a48703be5ba(cs_arg0); }());
} }, [&]() {
([&]() { auto cs_value = v_pRINT_4232; pls::generated::cs_4cc76a7a43706693() = cs_value; return cs_value; }());
});
}
}
// M:system.billing.ui.Receipt.PasswordDecodeToString(System.String)
pls::cs::String cs_0e8660e32789ac5b(pls::cs::String v_src) { cs_init_15f31d4f046b09a8();
{
return ([&]() -> pls::cs::String { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_src; return cs_942b8b55f6cc61e8(cs_arg0); }()); return pls::game::cs_require(cs_receiver)->GetString(cs_arg0); }());
}
}
// M:system.billing.ui.Receipt.PasswordEncode(System.Byte[])
pls::cs::String cs_74c5b1f087d67cd2(pls::cs::Array<std::uint8_t> v_src) { cs_init_15f31d4f046b09a8();
{
bool v_pRINT_3629 = pls::generated::cs_4cc76a7a43706693();
std::int32_t v_num_3658 = (v_src).length();
return pls::cs::run_finally([&]() -> pls::cs::String { {
([&]() { auto cs_value = false; pls::generated::cs_4cc76a7a43706693() = cs_value; return cs_value; }());
pls::cs::Array<std::uint8_t> v_array_3725 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_src; return pls::generated::cs_e44260e02e247abd(cs_arg0); }());
([&]() { auto cs_value = pls::cs::Array<std::uint8_t>::make(([&]() -> std::int32_t { auto cs_left = (v_array_3725).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::add_i32(cs_left,cs_right); }())); v_src = cs_value; return cs_value; }());
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = ([&]() -> std::int64_t { auto cs_arg0 = v_array_3725; return pls::generated::cs_4d36dd315e2118af(cs_arg0); }()); auto cs_arg1 = false; return pls::generated::cs_afc3ba06e9b75538(cs_arg0,cs_arg1); }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(v_src); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_arg0 = pls::cs::box(v_array_3725); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(v_src); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_arg4 = (v_array_3725).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_arg0 = v_src; auto cs_arg1 = cs_0ab9b09ba01c1501(); pls::generated::cs_17e1939c126befd5(cs_arg0,cs_arg1); }());
return ([&]() -> pls::cs::String { auto cs_arg0 = v_src; return pls::generated::cs_7f8edd4d76f97c06(cs_arg0); }());
} }, [&]() {
([&]() { auto cs_value = v_pRINT_3629; pls::generated::cs_4cc76a7a43706693() = cs_value; return cs_value; }());
});
}
}
// M:system.billing.ui.Receipt.PasswordEncode(System.String)
pls::cs::String cs_09009d99b892ed75(pls::cs::String v_src) { cs_init_15f31d4f046b09a8();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_src; return pls::generated::cs_a8e45b955b78e04d(cs_arg0); }()); return cs_74c5b1f087d67cd2(cs_arg0); }());
}
}
// M:system.billing.ui.Receipt.Save(java.io.OutputStream)
void cs_aafe7f3e366450c4(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_stream) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_faf2053d989419ff; }()); pls::generated::cs_be114d9236ab5d44(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_519713e3b629623c; }()); pls::generated::cs_be114d9236ab5d44(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b713199635bb1058; }()); return pls::generated::cs_d940a557e2a81257(cs_value); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59d0e1ae203981e5; }())); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6ae59bf543478aa; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6541be3d4c391c46; }()); return pls::generated::cs_b0c8f3d2fe942bf1(cs_value); }()); pls::generated::cs_6c6af002987d1423(cs_arg0,cs_arg1); }());
}
}
}
// M:system.billing.util.Inventory.#ctor
pls::cs::Ref<cs_51fd12cb14e568f9> cs_711d8c323ca1c807() { cs_init_51fd12cb14e568f9();
{ auto cs_this = pls::cs::make_ref<cs_51fd12cb14e568f9>(); cs_711d8c323ca1c807_init(cs_this); return cs_this; }
}
void cs_711d8c323ca1c807_init(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this) {
cs_this->cs_707c7a72abb82ec1 = pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<cs_b169f360ee9f1108>>::make();
cs_this->cs_3bdfea24b8fa4dd4 = pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<cs_a42daea58251b089>>::make();
{

}
}
// M:system.billing.util.Inventory.AddPurchase(system.billing.util.Purchase)
void cs_83123998486200aa(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_p) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }()); auto cs_index = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_a42daea58251b089>>(v_p); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e57c9ca2bf077da0(cs_receiver); }()); auto cs_value = v_p; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}
// M:system.billing.util.Inventory.AddSkuDetails(system.billing.util.SkuDetails)
void cs_8655b0acd5de2cab(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::Ref<cs_b169f360ee9f1108> v_d) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_707c7a72abb82ec1; }()); auto cs_index = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_b169f360ee9f1108>>(v_d); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6f026fa24daeff2d(cs_receiver); }()); auto cs_value = v_d; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}
// M:system.billing.util.Inventory.ErasePurchase(System.String)
void cs_dbd8e782b8e382eb(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }()); auto cs_arg0 = v_sku; return cs_receiver.ContainsKey(cs_arg0); }())) {
([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }()); auto cs_arg0 = v_sku; return cs_receiver.Remove(cs_arg0); }());
}
}
}
}
// M:system.billing.util.Inventory.GetPurchase(System.String)
pls::cs::Ref<cs_a42daea58251b089> cs_a38e4a52b899543e(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_a42daea58251b089> v_value_519 = pls::cs::Ref<cs_a42daea58251b089>{};
([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }());auto cs_key=v_sku;return cs_dictionary.TryGetValue(cs_key,v_value_519);}());
return v_value_519;
}
}
}
// M:system.billing.util.Inventory.GetSkuDetails(System.String)
pls::cs::Ref<cs_b169f360ee9f1108> cs_dd2b0d12cb37519c(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_b169f360ee9f1108> v_value_392 = pls::cs::Ref<cs_b169f360ee9f1108>{};
([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_707c7a72abb82ec1; }());auto cs_key=v_sku;return cs_dictionary.TryGetValue(cs_key,v_value_392);}());
return v_value_392;
}
}
}
// M:system.billing.util.Inventory.HasDetails(System.String)
bool cs_490b3ef94c6ce903(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_707c7a72abb82ec1; }()); auto cs_arg0 = v_sku; return cs_receiver.ContainsKey(cs_arg0); }());
}
}
}
// M:system.billing.util.Inventory.HasPurchase(System.String)
bool cs_8976c462d0b51676(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }()); auto cs_arg0 = v_sku; return cs_receiver.ContainsKey(cs_arg0); }());
}
}
}
// M:system.billing.util.Json.AdjustJson(System.String,System.String,System.String)
pls::cs::String cs_29cfbbc6ef724690(pls::cs::String v_receipt,pls::cs::String v_productID,pls::cs::String v_iOSPurchaseTime) { cs_init_e6ed65290db381ba();
{
pls::cs::String v_json_1833 = ([&]() -> pls::cs::String { auto cs_arg0 = v_receipt; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005c" u"",1)); auto cs_arg2 = pls::cs::String(u""); return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::Array<pls::cs::Array<pls::cs::String>> v_array_1891 = ([&](){auto cs_initial_array_1259=pls::cs::Array<pls::cs::Array<pls::cs::String>>::make(9);cs_initial_array_1259.at(0)=([&](){auto cs_initial_array_1260=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_1260.at(0)=pls::cs::String(std::u16string(u"\x006f" u"\x0072" u"\x0064" u"\x0065" u"\x0072" u"\x0049" u"\x0064" u"",7));cs_initial_array_1260.at(1)=pls::cs::String(u"");return cs_initial_array_1260;}());cs_initial_array_1259.at(1)=([&](){auto cs_initial_array_1261=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_1261.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x0061" u"\x0067" u"\x0065" u"\x004e" u"\x0061" u"\x006d" u"\x0065" u"",11));cs_initial_array_1261.at(1)=pls::cs::String(u"");return cs_initial_array_1261;}());cs_initial_array_1259.at(2)=([&](){auto cs_initial_array_1262=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_1262.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0072" u"\x006f" u"\x0064" u"\x0075" u"\x0063" u"\x0074" u"\x0049" u"\x0064" u"",9));cs_initial_array_1262.at(1)=pls::cs::String(u"");return cs_initial_array_1262;}());cs_initial_array_1259.at(3)=([&](){auto cs_initial_array_1263=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_1263.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0054" u"\x0069" u"\x006d" u"\x0065" u"",12));cs_initial_array_1263.at(1)=pls::cs::String(u"");return cs_initial_array_1263;}());cs_initial_array_1259.at(4)=([&](){auto cs_initial_array_1264=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_1264.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0053" u"\x0074" u"\x0061" u"\x0074" u"\x0065" u"",13));cs_initial_array_1264.at(1)=pls::cs::String(u"");return cs_initial_array_1264;}());cs_initial_array_1259.at(5)=([&](){auto cs_initial_array_1265=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_1265.at(0)=pls::cs::String(std::u16string(u"\x0064" u"\x0065" u"\x0076" u"\x0065" u"\x006c" u"\x006f" u"\x0070" u"\x0065" u"\x0072" u"\x0050" u"\x0061" u"\x0079" u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"",16));cs_initial_array_1265.at(1)=pls::cs::String(u"");return cs_initial_array_1265;}());cs_initial_array_1259.at(6)=([&](){auto cs_initial_array_1266=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_1266.at(0)=pls::cs::String(std::u16string(u"\x0074" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",5));cs_initial_array_1266.at(1)=pls::cs::String(u"");return cs_initial_array_1266;}());cs_initial_array_1259.at(7)=([&](){auto cs_initial_array_1267=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_1267.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0054" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",13));cs_initial_array_1267.at(1)=pls::cs::String(u"");return cs_initial_array_1267;}());cs_initial_array_1259.at(8)=([&](){auto cs_initial_array_1268=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_1268.at(0)=pls::cs::String(std::u16string(u"\x0073" u"\x0069" u"\x0067" u"\x006e" u"\x0061" u"\x0074" u"\x0075" u"\x0072" u"\x0065" u"",9));cs_initial_array_1268.at(1)=pls::cs::String(u"");return cs_initial_array_1268;}());return cs_initial_array_1259;}());
for (std::int32_t v_spriteIndex_2554 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_spriteIndex_2554; auto cs_right = (v_array_1891).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_spriteIndex_2554; auto cs_new = pls::cs::add_i32(cs_old,1); v_spriteIndex_2554 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::String> v_array2_2625 = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_spriteIndex_2554; return cs_array.at(cs_index); }());
([&]() { auto cs_target = v_array2_2625; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_json_1833; auto cs_arg1 = ([&]() { auto cs_array = v_array2_2625; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
pls::cs::List<pls::cs::String> v_list_2711 = pls::cs::List<pls::cs::String>::make();
for (std::int32_t v_j_2750 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_2750; auto cs_right = (v_array_1891).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_2750; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_2750 = cs_new; return cs_old; }())) {
if (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_j_2750; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) || (([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_j_2750; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())))) {
continue;
}
([&]() -> void { auto cs_receiver = v_list_2711; auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_j_2750; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_j_2750; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return cs_e40f466cab31d73b(cs_arg0,cs_arg1); }()); cs_receiver.Add(cs_arg0); }());
}
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_receiver = v_list_2711; return cs_receiver.ToArray(); }()); return cs_d22851d911e39653(cs_arg0); }());
}
}
// M:system.billing.util.Json.AdjustJson(UnityEngine.Purchasing.Product)
pls::cs::String cs_49d01ebea931c030(pls::cs::Ref<cs_efeeb7640894c95e> v_p) { cs_init_e6ed65290db381ba();
{
return pls::cs::String{};
}
}
// M:system.billing.util.Json.GetDetailJson(UnityEngine.Purchasing.Product)
pls::cs::String cs_85a3de06f9737452(pls::cs::Ref<cs_efeeb7640894c95e> v_p) { cs_init_e6ed65290db381ba();
{
return pls::cs::String{};
}
}
// M:system.billing.util.Json.MakeJson(System.String[])
pls::cs::String cs_d22851d911e39653(pls::cs::Array<pls::cs::String> v_records) { cs_init_e6ed65290db381ba();
{
pls::cs::String v_text_1464 = pls::cs::String(std::u16string(u"\x007b" u"",1));
for (std::int32_t v_i_1488 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1488; auto cs_right = (v_records).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1488; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1488 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_text_1464; auto cs_rhs = ([&]() { auto cs_array = v_records; auto cs_index = v_i_1488; return cs_array.at(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1464 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_i_1488; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_records).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_text_1464; auto cs_rhs = pls::cs::String(std::u16string(u"\x002c" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1464 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_old = v_text_1464; auto cs_rhs = pls::cs::String(std::u16string(u"\x007d" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1464 = cs_value; return cs_value; }());
return v_text_1464;
}
}
// M:system.billing.util.Json.ReadJSon(System.String,System.String)
pls::cs::String cs_14929f68cda1ed89(pls::cs::String v_json,pls::cs::String v_key) { cs_init_e6ed65290db381ba();
{
if ((([&]() { auto cs_left = pls::cs::box(v_key); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() { auto cs_left = pls::cs::box(v_json); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()))) {
return pls::cs::String{};
}
pls::cs::Ref<pls::cs::RegexMatch> v_match_834 = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_json; auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0022" u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"\x0022" u"\x005c" u"\x0073" u"\x002a" u"\x003a" u"\x005c" u"\x0073" u"\x002a" u"\x0028" u"\x0022" u"\x005b" u"\x005e" u"\x0022" u"\x005d" u"\x002a" u"\x0022" u"\x007c" u"\x005b" u"\x0030" u"\x002d" u"\x0039" u"\x002e" u"\x005d" u"\x002a" u"\x0029" u"",31)); auto cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"",5)); auto cs_arg2 = v_key; return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());
if (pls::game::cs_require(v_match_834)->get_Success()) {
return ([&](){auto cs_text=pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_834)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(34);return pls::cs::string_trim(cs_text,cs_separators);}());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_json; auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0022" u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"\x0022" u"\x005c" u"\x0073" u"\x002a" u"\x003d" u"\x005c" u"\x0073" u"\x002a" u"\x0028" u"\x0022" u"\x005b" u"\x005e" u"\x0022" u"\x005d" u"\x002a" u"\x0022" u"\x007c" u"\x005b" u"\x0030" u"\x002d" u"\x0039" u"\x002e" u"\x005d" u"\x002a" u"\x0029" u"",31)); auto cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"",5)); auto cs_arg2 = v_key; return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }()); v_match_834 = cs_value; return cs_value; }());
if (pls::game::cs_require(v_match_834)->get_Success()) {
return ([&](){auto cs_text=pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_834)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(34);return pls::cs::string_trim(cs_text,cs_separators);}());
}
return pls::cs::String{};
}
}
// M:system.billing.util.Json.Record(System.String,System.String)
pls::cs::String cs_e40f466cab31d73b(pls::cs::String v_type,pls::cs::String v_value) { cs_init_e6ed65290db381ba();
{
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0022" u"",1)); auto cs_right = v_type; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0022" u"\x003a" u"\x0022" u"",3)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_arg0 = v_value; return pls::generated::cs_d7ec43a7abb0b748(cs_arg0); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0022" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
// M:system.billing.util.Purchase.#ctor
pls::cs::Ref<cs_a42daea58251b089> cs_a9e6857e64b08e0d() { cs_init_a42daea58251b089();
{ auto cs_this = pls::cs::make_ref<cs_a42daea58251b089>(); cs_a9e6857e64b08e0d_init(cs_this); return cs_this; }
}
void cs_a9e6857e64b08e0d_init(pls::cs::Ref<cs_a42daea58251b089> cs_this) {
{

}
}
// M:system.billing.util.Purchase.#ctor(System.String,System.String,System.String)
pls::cs::Ref<cs_a42daea58251b089> cs_f7abaa335be13394(pls::cs::String v_itemType,pls::cs::String v_jsonPurchaseInfo,pls::cs::String v_signature) { cs_init_a42daea58251b089();
{ auto cs_this = pls::cs::make_ref<cs_a42daea58251b089>(); cs_f7abaa335be13394_init(cs_this,v_itemType,v_jsonPurchaseInfo,v_signature); return cs_this; }
}
void cs_f7abaa335be13394_init(pls::cs::Ref<cs_a42daea58251b089> cs_this,pls::cs::String v_itemType,pls::cs::String v_jsonPurchaseInfo,pls::cs::String v_signature) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_itemType; pls::game::cs_require(cs_target)->cs_d753206820f21a8d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_jsonPurchaseInfo; pls::game::cs_require(cs_target)->cs_2c5a071db61acb18 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x006f" u"\x0072" u"\x0064" u"\x0065" u"\x0072" u"\x0049" u"\x0064" u"",7)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_a5fc6a5046dc6a62 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x0061" u"\x0067" u"\x0065" u"\x004e" u"\x0061" u"\x006d" u"\x0065" u"",11)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_85b5e0881697c2a4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0072" u"\x006f" u"\x0064" u"\x0075" u"\x0063" u"\x0074" u"\x0049" u"\x0064" u"",9)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_4302441eac8005bc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0054" u"\x0069" u"\x006d" u"\x0065" u"",12)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); return pls::cs::int64_parse(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_406b12762a239146 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0053" u"\x0074" u"\x0061" u"\x0074" u"\x0065" u"",13)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); return pls::cs::int32_parse(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_6490fd19ca9cf865 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0064" u"\x0065" u"\x0076" u"\x0065" u"\x006c" u"\x006f" u"\x0070" u"\x0065" u"\x0072" u"\x0050" u"\x0061" u"\x0079" u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"",16)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_6af4ef5d58ee8876 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",5)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_1293600bd46db9ba = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1293600bd46db9ba; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0054" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",13)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_1293600bd46db9ba = cs_value; return cs_value; }());
}
if (((([&]() -> bool { auto cs_left = v_itemType; auto cs_right = pls::cs::String(std::u16string(u"\x0073" u"\x0075" u"\x0062" u"\x0073" u"",4)); return (cs_left == cs_right); }()) && ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a5fc6a5046dc6a62; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a5fc6a5046dc6a62; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())))) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1293600bd46db9ba; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1293600bd46db9ba; }()); pls::game::cs_require(cs_target)->cs_a5fc6a5046dc6a62 = cs_value; return cs_value; }());
std::int32_t v_num_1211 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a5fc6a5046dc6a62; }()); auto cs_arg1 = char16_t(46); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num_1211; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a5fc6a5046dc6a62; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = v_num_1211; return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); pls::game::cs_require(cs_target)->cs_a5fc6a5046dc6a62 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_target = cs_this; auto cs_value = v_signature; pls::game::cs_require(cs_target)->cs_576f47efafc565de = cs_value; return cs_value; }());
}
}
// M:system.billing.util.Purchase.GetDeveloperPayload
pls::cs::String cs_e619522a0176fc33(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6af4ef5d58ee8876; }());
}
}
}
// M:system.billing.util.Purchase.GetHashCode
std::int32_t cs_0d5fadde939d8f48(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:system.billing.util.Purchase.GetItemType
pls::cs::String cs_835e52407836b201(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d753206820f21a8d; }());
}
}
}
// M:system.billing.util.Purchase.GetOrderId
pls::cs::String cs_30a95d92bd1ce70c(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a5fc6a5046dc6a62; }());
}
}
}
// M:system.billing.util.Purchase.GetOriginalJson
pls::cs::String cs_d4114f5e7f34cc57(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }());
}
}
}
// M:system.billing.util.Purchase.GetPackageName
pls::cs::String cs_a07baeaaa234184e(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_85b5e0881697c2a4; }());
}
}
}
// M:system.billing.util.Purchase.GetPurchaseState
std::int32_t cs_dd87274ce185a4e4(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6490fd19ca9cf865; }());
}
}
}
// M:system.billing.util.Purchase.GetPurchaseTime
std::int64_t cs_ebb3a05c47178475(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_406b12762a239146; }());
}
}
}
// M:system.billing.util.Purchase.GetSignature
pls::cs::String cs_cedfa91be2f68a03(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_576f47efafc565de; }());
}
}
}
// M:system.billing.util.Purchase.GetSku
pls::cs::String cs_e57c9ca2bf077da0(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4302441eac8005bc; }());
}
}
}
// M:system.billing.util.Purchase.GetToken
pls::cs::String cs_f88753a6a366d95c(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1293600bd46db9ba; }());
}
}
}
// M:system.billing.util.Purchase.ReadJSon(System.String,System.String)
pls::cs::String cs_c5dc85edf0b8af25(pls::cs::String v_json,pls::cs::String v_key) { cs_init_a42daea58251b089();
{
if ((([&]() { auto cs_left = pls::cs::box(v_key); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() { auto cs_left = pls::cs::box(v_json); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()))) {
return pls::cs::String{};
}
pls::cs::Ref<pls::cs::RegexMatch> v_match_2113 = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_json; auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0022" u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"\x0022" u"\x005c" u"\x0073" u"\x002a" u"\x003a" u"\x005c" u"\x0073" u"\x002a" u"\x0028" u"\x0022" u"\x005b" u"\x005e" u"\x0022" u"\x005d" u"\x002a" u"\x0022" u"\x007c" u"\x005b" u"\x0030" u"\x002d" u"\x0039" u"\x002e" u"\x005d" u"\x002a" u"\x0029" u"",31)); auto cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"",5)); auto cs_arg2 = v_key; return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());
if (pls::game::cs_require(v_match_2113)->get_Success()) {
return ([&](){auto cs_text=pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_2113)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(34);return pls::cs::string_trim(cs_text,cs_separators);}());
}
return pls::cs::String{};
}
}
// M:system.billing.util.Purchase.ToString
pls::cs::String cs_eb2c53bbee32fa6a(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0050" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0049" u"\x006e" u"\x0066" u"\x006f" u"\x0028" u"\x0074" u"\x0079" u"\x0070" u"\x0065" u"\x003a" u"",18)); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d753206820f21a8d; }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0029" u"\x003a" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:system.billing.util.SkuDetails.#ctor
pls::cs::Ref<cs_b169f360ee9f1108> cs_fdfacb67cda123d7() { cs_init_b169f360ee9f1108();
{ auto cs_this = pls::cs::make_ref<cs_b169f360ee9f1108>(); cs_fdfacb67cda123d7_init(cs_this); return cs_this; }
}
void cs_fdfacb67cda123d7_init(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) {
{

}
}
// M:system.billing.util.SkuDetails.#ctor(System.String,System.String)
pls::cs::Ref<cs_b169f360ee9f1108> cs_943696d8c8e0a6d0(pls::cs::String v_itemType,pls::cs::String v_jsonSkuDetails) { cs_init_b169f360ee9f1108();
{ auto cs_this = pls::cs::make_ref<cs_b169f360ee9f1108>(); cs_943696d8c8e0a6d0_init(cs_this,v_itemType,v_jsonSkuDetails); return cs_this; }
}
void cs_943696d8c8e0a6d0_init(pls::cs::Ref<cs_b169f360ee9f1108> cs_this,pls::cs::String v_itemType,pls::cs::String v_jsonSkuDetails) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_itemType; pls::game::cs_require(cs_target)->cs_e0a5bfe7faf6c07e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_jsonSkuDetails; pls::game::cs_require(cs_target)->cs_43141e651b3c1995 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0072" u"\x006f" u"\x0064" u"\x0075" u"\x0063" u"\x0074" u"\x0049" u"\x0064" u"",9)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_47aad339f248ff81 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x0079" u"\x0070" u"\x0065" u"",4)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_6cbd485f86bf5859 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0072" u"\x0069" u"\x0063" u"\x0065" u"",5)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_33c621bd4fd10d07 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x0074" u"\x006c" u"\x0065" u"",5)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_5035eb310e4a8d61 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0064" u"\x0065" u"\x0073" u"\x0063" u"\x0072" u"\x0069" u"\x0070" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",11)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_c8cc33ddf6dcb591 = cs_value; return cs_value; }());
}
}
// M:system.billing.util.SkuDetails.#ctor(System.String)
pls::cs::Ref<cs_b169f360ee9f1108> cs_26ea8b67da16b42f(pls::cs::String v_jsonSkuDetails) { cs_init_b169f360ee9f1108();
{ auto cs_this = pls::cs::make_ref<cs_b169f360ee9f1108>(); cs_26ea8b67da16b42f_init(cs_this,v_jsonSkuDetails); return cs_this; }
}
void cs_26ea8b67da16b42f_init(pls::cs::Ref<cs_b169f360ee9f1108> cs_this,pls::cs::String v_jsonSkuDetails) {
([&]() { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0069" u"\x006e" u"\x0061" u"\x0070" u"\x0070" u"",5)); auto cs_arg1 = v_jsonSkuDetails; cs_943696d8c8e0a6d0_init(std::static_pointer_cast<cs_b169f360ee9f1108>(cs_this),cs_arg0,cs_arg1); }());
{

}
}
// M:system.billing.util.SkuDetails.GetDescription
pls::cs::String cs_007c055a377a3713(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8cc33ddf6dcb591; }());
}
}
}
// M:system.billing.util.SkuDetails.GetHashCode
std::int32_t cs_bd48f39de19516d5(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:system.billing.util.SkuDetails.GetPrice
pls::cs::String cs_f2973c21b56d3d36(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_33c621bd4fd10d07; }());
}
}
}
// M:system.billing.util.SkuDetails.GetSku
pls::cs::String cs_6f026fa24daeff2d(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_47aad339f248ff81; }());
}
}
}
// M:system.billing.util.SkuDetails.GetTitle
pls::cs::String cs_35247c009c4a912a(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5035eb310e4a8d61; }());
}
}
}
// M:system.billing.util.SkuDetails.GetTypeA
pls::cs::String cs_8859afa17c7cf09c(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6cbd485f86bf5859; }());
}
}
}
// M:system.billing.util.SkuDetails.ReadJSon(System.String,System.String)
pls::cs::String cs_edc7a5099fbaba03(pls::cs::String v_json,pls::cs::String v_key) { cs_init_b169f360ee9f1108();
{
if ((([&]() { auto cs_left = pls::cs::box(v_key); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() { auto cs_left = pls::cs::box(v_json); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()))) {
return pls::cs::String{};
}
pls::cs::Ref<pls::cs::RegexMatch> v_match_1145 = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_json; auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0022" u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"\x0022" u"\x005c" u"\x0073" u"\x002a" u"\x003a" u"\x005c" u"\x0073" u"\x002a" u"\x0028" u"\x0022" u"\x005b" u"\x005e" u"\x0022" u"\x005d" u"\x002a" u"\x0022" u"\x007c" u"\x005b" u"\x0030" u"\x002d" u"\x0039" u"\x002e" u"\x005d" u"\x002a" u"\x0029" u"",31)); auto cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"",5)); auto cs_arg2 = v_key; return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());
if (pls::game::cs_require(v_match_1145)->get_Success()) {
return ([&](){auto cs_text=pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_1145)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(34);return pls::cs::string_trim(cs_text,cs_separators);}());
}
return pls::cs::String{};
}
}
// M:system.billing.util.SkuDetails.ToString
pls::cs::String cs_3fc374a8a3e0f24e(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0053" u"\x006b" u"\x0075" u"\x0044" u"\x0065" u"\x0074" u"\x0061" u"\x0069" u"\x006c" u"\x0073" u"\x003a" u"",11)); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:system.form.BillingForm.#ctor
pls::cs::Ref<cs_5df8265429cd2423> cs_b1cdb422de7c19d2() { cs_init_5df8265429cd2423();
{ auto cs_this = pls::cs::make_ref<cs_5df8265429cd2423>(); cs_b1cdb422de7c19d2_init(cs_this); return cs_this; }
}
void cs_b1cdb422de7c19d2_init(pls::cs::Ref<cs_5df8265429cd2423> cs_this) {
cs_this->cs_2f1408df5108f5c0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x384ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_98f193d860f6ae6d = cs_value; return cs_value; }());
}
}
// M:system.form.BillingForm.#ctor(System.Int32,system.billing.ui.ApplyTask)
pls::cs::Ref<cs_5df8265429cd2423> cs_fea1b006f5a8844c(std::int32_t v_type,pls::cs::Ref<cs_feb7ae74aa59a27c> v_provide) { cs_init_5df8265429cd2423();
{ auto cs_this = pls::cs::make_ref<cs_5df8265429cd2423>(); cs_fea1b006f5a8844c_init(cs_this,v_type,v_provide); return cs_this; }
}
void cs_fea1b006f5a8844c_init(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_type,pls::cs::Ref<cs_feb7ae74aa59a27c> v_provide) {
([&]() { auto cs_arg0 = v_type; cs_e8ae3ed2ae7db752_init(std::static_pointer_cast<cs_5df8265429cd2423>(cs_this),cs_arg0); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = v_provide; pls::game::cs_require(cs_target)->cs_9be2b990f12a9cb5 = cs_value; return cs_value; }());
}
}
// M:system.form.BillingForm.#ctor(System.Int32)
pls::cs::Ref<cs_5df8265429cd2423> cs_e8ae3ed2ae7db752(std::int32_t v_type) { cs_init_5df8265429cd2423();
{ auto cs_this = pls::cs::make_ref<cs_5df8265429cd2423>(); cs_e8ae3ed2ae7db752_init(cs_this,v_type); return cs_this; }
}
void cs_e8ae3ed2ae7db752_init(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_type) {
cs_this->cs_2f1408df5108f5c0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x384ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_e8d5f5c38f287b3d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9570901a4b105259 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_98f193d860f6ae6d = cs_value; return cs_value; }());
}
}
// M:system.form.BillingForm.CheckMainWindow
bool cs_47fb2f00c5638918(pls::cs::Ref<cs_5df8265429cd2423> cs_this) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}
// M:system.form.BillingForm.Comma(System.Int64)
pls::cs::String cs_0be1639bb6a05b50(std::int64_t v_value) { cs_init_5df8265429cd2423();
{
bool v_flag_26261 = ([&]() -> bool { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left < cs_right); }());
if (v_flag_26261) {
([&]() { auto cs_value = pls::cs::neg_i64(v_value); v_value = cs_value; return cs_value; }());
}
pls::cs::String v_str_26332 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string(v_value); return pls::cs::String::concat(cs_left,cs_right); }());
pls::cs::String v_text_26370 = pls::cs::String(u"");
std::int32_t v_num_26398 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num2_26414 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_str_26332; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
while (([&]() -> bool { auto cs_left = v_num2_26414; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }())) {
if ((([&]() -> bool { auto cs_left = v_num_26398; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_26398; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::game::cs_char_string(char16_t(44)); auto cs_right = v_text_26370; return pls::cs::String::concat(cs_left,cs_right); }()); v_text_26370 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() { auto cs_left = pls::game::cs_char_string(([&]() -> char16_t { auto cs_arg0 = v_str_26332; auto cs_arg1 = v_num2_26414; return pls::generated::cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }())); auto cs_right = v_text_26370; return pls::cs::String::concat(cs_left,cs_right); }()); v_text_26370 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num2_26414; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_26414 = cs_new; return cs_old; }());
([&]() { auto cs_old = v_num_26398; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_26398 = cs_new; return cs_old; }());
}
if (v_flag_26261) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x002d" u"",1)); auto cs_right = v_text_26370; return pls::cs::String::concat(cs_left,cs_right); }()); v_text_26370 = cs_value; return cs_value; }());
}
return v_text_26370;
}
}
// M:system.form.BillingForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
pls::cs::Array<std::int32_t> cs_660ef87118d6e888(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,bool v_active,bool v_cursor) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = v_str; auto cs_arg2 = v_x; auto cs_arg3 = v_y; auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg5 = v_active; auto cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg7 = v_cursor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_19383a9f099dd72f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
}
// M:system.form.BillingForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
pls::cs::Array<std::int32_t> cs_80bbb1ca8b8e175d(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,bool v_cursor) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = v_str; auto cs_arg2 = v_x; auto cs_arg3 = v_y; auto cs_arg4 = v_anchor; auto cs_arg5 = v_active; auto cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg7 = v_cursor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_19383a9f099dd72f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
}
// M:system.form.BillingForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)
pls::cs::Array<std::int32_t> cs_19383a9f099dd72f(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,std::int32_t v_margin,bool v_cursor) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::Array<std::int32_t>{};
}
}
}
// M:system.form.BillingForm.DrawDotLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_976ab62a50e2937f(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x1,std::int32_t v_y1,std::int32_t v_x2,std::int32_t v_y2,std::int32_t v_color) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
for (std::int32_t v_i_22410 = v_x1; ([&]() -> bool { auto cs_left = v_i_22410; auto cs_right = v_x2; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_22410; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_i_22410 = cs_value; return cs_value; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_i_22410); auto cs_arg1 = static_cast<float>(v_y1); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_i_22410; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(v_y2); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
// M:system.form.BillingForm.DrawGradation(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_885a127960e04407(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_dx,std::int32_t v_dy,std::int32_t v_sx,std::int32_t v_sy,std::int32_t v_w,std::int32_t v_h,std::int32_t v_sr,std::int32_t v_sg,std::int32_t v_sb,std::int32_t v_dr,std::int32_t v_dg,std::int32_t v_db) { cs_init_5df8265429cd2423();
{
if (((([&]() -> bool { auto cs_left = v_w; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) || (([&]() -> bool { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())))) {
return;
}
std::int32_t v_dxAlias_25136 = v_dx;
std::int32_t v_num_25154 = v_dy;
std::int32_t v_num2_25168 = ([&]() -> std::int32_t { auto cs_left = v_dx; auto cs_right = v_w; return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num3_25187 = ([&]() -> std::int32_t { auto cs_left = v_dy; auto cs_right = v_h; return pls::cs::add_i32(cs_left,cs_right); }());
double v_num4_25209 = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_dr; auto cs_right = v_sr; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left / cs_right); }());
double v_num5_25264 = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_dg; auto cs_right = v_sg; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left / cs_right); }());
double v_num6_25319 = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_db; auto cs_right = v_sb; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left / cs_right); }());
double v_num7_25374 = ([&]() -> double { auto cs_left = static_cast<double>(v_sr); auto cs_right = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()))); auto cs_right = v_num4_25209; return (cs_left * cs_right); }()); return (cs_left + cs_right); }());
double v_num8_25426 = ([&]() -> double { auto cs_left = static_cast<double>(v_sg); auto cs_right = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()))); auto cs_right = v_num5_25264; return (cs_left * cs_right); }()); return (cs_left + cs_right); }());
double v_num9_25478 = ([&]() -> double { auto cs_left = static_cast<double>(v_sb); auto cs_right = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()))); auto cs_right = v_num6_25319; return (cs_left * cs_right); }()); return (cs_left + cs_right); }());
while (([&]() -> bool { auto cs_left = v_num_25154; auto cs_right = v_num3_25187; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num7_25374; auto cs_right = pls::game::cs_f64(0x406fe00000000000ull); return (cs_left > cs_right); }()))) ? pls::game::cs_f64(0x406fe00000000000ull) : (v_num7_25374))); v_num7_25374 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num7_25374; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))) ? pls::game::cs_f64(0x0000000000000000ull) : (v_num7_25374))); v_num7_25374 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num8_25426; auto cs_right = pls::game::cs_f64(0x406fe00000000000ull); return (cs_left > cs_right); }()))) ? pls::game::cs_f64(0x406fe00000000000ull) : (v_num8_25426))); v_num8_25426 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num8_25426; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))) ? pls::game::cs_f64(0x0000000000000000ull) : (v_num8_25426))); v_num8_25426 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num9_25478; auto cs_right = pls::game::cs_f64(0x406fe00000000000ull); return (cs_left > cs_right); }()))) ? pls::game::cs_f64(0x406fe00000000000ull) : (v_num9_25478))); v_num9_25478 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num9_25478; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))) ? pls::game::cs_f64(0x0000000000000000ull) : (v_num9_25478))); v_num9_25478 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::conv_i32(v_num7_25374); auto cs_arg1 = pls::cs::conv_i32(v_num8_25426); auto cs_arg2 = pls::cs::conv_i32(v_num9_25478); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
std::int32_t v_num10_25925 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (((([&]() -> bool { auto cs_left = v_num_25154; auto cs_right = v_dy; return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())))) {
([&]() { auto cs_value = (([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mod_i32(cs_left,cs_right); }())); v_num10_25925 = cs_value; return cs_value; }());
} else {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_25154; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num3_25187; return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ((([&]() -> std::int32_t { auto cs_left = v_num3_25187; auto cs_right = v_num_25154; return pls::cs::sub_i32(cs_left,cs_right); }()))); v_num10_25925 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); v_num10_25925 = cs_value; return cs_value; }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_dxAlias_25136); auto cs_arg1 = static_cast<float>(v_num_25154); auto cs_arg2 = static_cast<float>(v_w); auto cs_arg3 = static_cast<float>(v_num10_25925); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_old = v_num_25154; auto cs_rhs = v_num10_25925; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_25154 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num7_25374; auto cs_rhs = v_num4_25209; auto cs_value = (cs_old + cs_rhs); v_num7_25374 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num8_25426; auto cs_rhs = v_num5_25264; auto cs_value = (cs_old + cs_rhs); v_num8_25426 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num9_25478; auto cs_rhs = v_num6_25319; auto cs_value = (cs_old + cs_rhs); v_num9_25478 = cs_value; return cs_value; }());
}
}
}
// M:system.form.BillingForm.DrawLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_a5fe62ccd8a41355(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x1,std::int32_t v_y1,std::int32_t v_x2,std::int32_t v_y2,std::int32_t v_color) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x1); auto cs_arg1 = static_cast<float>(v_y1); auto cs_arg2 = static_cast<float>(v_x2); auto cs_arg3 = static_cast<float>(v_y2); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
// M:system.form.BillingForm.DrawObi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_8cca426a78ed9b99(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = v_width; auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg5 = v_color1; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = v_width; auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color2; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_height; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg3 = v_width; auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg5 = v_color1; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.BillingForm.DrawRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_a0f8c11dc14c72e5(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(v_y); auto cs_arg2 = static_cast<float>(v_width); auto cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.BillingForm.DrawRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_ce1ebb169f71eef8(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color1; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(v_y); auto cs_arg2 = static_cast<float>(v_width); auto cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color2; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.BillingForm.DrawRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_cb82918c87113401(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color1; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(v_y); auto cs_arg2 = static_cast<float>(v_width); auto cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color2; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color3; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.BillingForm.FillRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_fc12049066e10b07(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(v_y); auto cs_arg2 = static_cast<float>(v_width); auto cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.BillingForm.FillRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_1959c523be984faf(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color1; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color2; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.BillingForm.FillRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_0af15e0bbd622bd2(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color1; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color2; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color3; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.BillingForm.FillRect4(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_391cd7af2b74466a(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3,std::int32_t v_color4) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color1; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color2; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color3; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color4; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.BillingForm.FillRectShadow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_00ac4a8c8f789f95(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color1; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color2; cs_a5fe62ccd8a41355(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color2; cs_a5fe62ccd8a41355(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color3; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.BillingForm.Finish
bool cs_edfb76ccf4f648e2(pls::cs::Ref<cs_5df8265429cd2423> cs_this) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2951e25803cf3104(cs_receiver); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c5d00bd651861fba; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_859e2922776eae2b(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = true; cs_9b88f949daa3f81c() = cs_value; return cs_value; }());
}
return true;
}
}
}
// M:system.form.BillingForm.GetHashCode
std::int32_t cs_52627948895b2677(pls::cs::Ref<cs_5df8265429cd2423> cs_this) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:system.form.BillingForm.Resume
bool cs_62252863f9b5a066(pls::cs::Ref<cs_5df8265429cd2423> cs_this) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f6039316248c9637(cs_receiver); }());
return true;
}
}
}
// M:system.form.BillingForm.ScrollControl(System.Int32,System.Int32)
void cs_5e76b9a5115ec3c6(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_num,std::int32_t v_showMax) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = v_num; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return;
}
{
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyRepeat(cs_arg0); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9570901a4b105259; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_num; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = v_num; return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_9570901a4b105259 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyRepeat(cs_arg0); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9570901a4b105259; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = v_num; return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_9570901a4b105259 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); auto cs_arg0 = v_num; auto cs_arg1 = v_showMax; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_875f1f851e8f75df(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}
// M:system.form.BillingForm.ScrollUpdate(System.Int32,System.Int32,System.Int32)
void cs_ac42dbacd2c8b2e5(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_num,std::int32_t v_showMax,std::int32_t v_value) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = v_num; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return;
}
{
if (([&]() -> bool { auto cs_left = v_value; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cebb9da49aa5808c; }()); auto cs_right = v_showMax; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left >= cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_value; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_showMax; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_cebb9da49aa5808c = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_value; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cebb9da49aa5808c; }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_cebb9da49aa5808c = cs_value; return cs_value; }());
}
while ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cebb9da49aa5808c; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = v_num; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cebb9da49aa5808c; }()); auto cs_right = v_showMax; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_cebb9da49aa5808c; auto cs_new = pls::cs::sub_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_cebb9da49aa5808c = cs_new; return cs_old; }());
}
}
}
}
}
// M:system.form.BillingForm.ScrollUpdate(System.Int32,System.Int32)
void cs_875f1f851e8f75df(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_num,std::int32_t v_showMax) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); auto cs_arg0 = v_num; auto cs_arg1 = v_showMax; auto cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9570901a4b105259; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ac42dbacd2c8b2e5(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
// M:system.form.BillingForm.SetSoftlabel
void cs_0d32f320570d6146(pls::cs::Ref<cs_5df8265429cd2423> cs_this) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_19142 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_7193278c42da6bcc(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
std::int32_t v_num2_19178 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_7193278c42da6bcc(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b3c0c2fddc9e2c47; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num2_19178 = cs_value; return cs_value; }())); v_num_19142 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); auto cs_arg0 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num_19142; return cs_array.at(cs_index); }()); auto cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num2_19178; return cs_array.at(cs_index); }()); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:system.form.BillingForm.ThreadStart(System.Int32)
void cs_b9bbd2b4e1a59f2c(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_type) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_befe970f631ca55b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_b3c0c2fddc9e2c47 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::game::cs_require(cs_target)->cs_434791072cb977c2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_901159f84f3b59e3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { auto cs_arg0 = cs_this; return cs_bab91f84bee2e3d9(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_35a06400bd2d3ebf = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_89c0d586cfe20341>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_35a06400bd2d3ebf; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b9636031b790b537(cs_receiver); }());
}
}
}
// M:system.form.BillingForm.ToString
pls::cs::String cs_d8a792a28d79d9b9(pls::cs::Ref<cs_5df8265429cd2423> cs_this) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0042" u"\x0069" u"\x006c" u"\x006c" u"\x0069" u"\x006e" u"\x0067" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"\x003a" u"",12)); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }())); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:system.form.ConnectForm._draw(kairo.unity.ui.Graphics)
void cs_b131397c890a25c9(pls::cs::Ref<cs_f52c904bea265acc> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_f52c904bea265acc();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0043" u"\x006f" u"\x006e" u"\x006e" u"\x0065" u"\x0063" u"\x0074" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"\x002e" u"\x005f" u"\x0064" u"\x0072" u"\x0061" u"\x0077" u"\x0028" u"\x0029" u"",19)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
}
}
// M:system.form.ConnectForm.#ctor
pls::cs::Ref<cs_f52c904bea265acc> cs_5fbebbed5279ae0b() { cs_init_f52c904bea265acc();
{ auto cs_this = pls::cs::make_ref<cs_f52c904bea265acc>(); cs_5fbebbed5279ae0b_init(cs_this); return cs_this; }
}
void cs_5fbebbed5279ae0b_init(pls::cs::Ref<cs_f52c904bea265acc> cs_this) {
([&]() { auto cs_arg0 = cs_0539026e7603868c(); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{

}
}
// M:system.form.ConnectForm.Draw(kairo.unity.ui.Graphics)
void cs_8f2e07e66a1a99d2(pls::cs::Ref<cs_f52c904bea265acc> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_f52c904bea265acc();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); auto cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d85e674b28736422(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); return pls::cs::add_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
pls::cs::run_finally([&]() -> void { {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_f52c904bea265acc>>(cs_this); auto cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b131397c890a25c9(cs_receiver,cs_arg0); }());
} }, [&]() {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
});
}
}
}
// M:system.form.ConnectForm.Finish
bool cs_63e8f3ae67da7af4(pls::cs::Ref<cs_f52c904bea265acc> cs_this) { cs_init_f52c904bea265acc();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2951e25803cf3104(cs_receiver); }());
}
}
}
// M:system.form.ConnectForm.GetHashCode
std::int32_t cs_69ffb55861de2893(pls::cs::Ref<cs_f52c904bea265acc> cs_this) { cs_init_f52c904bea265acc();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:system.form.ConnectForm.Resume
bool cs_affd13cffeea0427(pls::cs::Ref<cs_f52c904bea265acc> cs_this) { cs_init_f52c904bea265acc();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f6039316248c9637(cs_receiver); }());
}
}
}
// M:system.form.ConnectForm.ToString
pls::cs::String cs_7ed9b921ca878f0d(pls::cs::Ref<cs_f52c904bea265acc> cs_this) { cs_init_f52c904bea265acc();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::String(std::u16string(u"\x0043" u"\x006f" u"\x006e" u"\x006e" u"\x0065" u"\x0063" u"\x0074" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"",11));
}
}
}
// M:system.form.ConnectForm.Update
bool cs_3b9c14c758ceb110(pls::cs::Ref<cs_f52c904bea265acc> cs_this) { cs_init_f52c904bea265acc();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_25913418bfe51bb8(cs_receiver); }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = cs_e6e37e272cace738(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return pls::cs::mod_i32(cs_left,cs_right); }()); cs_e6e37e272cace738() = cs_value; return cs_value; }());
if (cs_7a902abf262c4ddf()) {
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(); }());
}
try {
([&]() -> void { cs_012506043193cb2a(); }());
([&]() -> void { auto cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x32ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_1277) {auto cs_exception_1277=pls::cs::capture_exception(cs_caught_1277);
if(pls::cs::exception_is(cs_exception_1277,"System.Exception")) {{

}}
else {throw;} }
return true;
}
}
}
// M:system.form.FriendForm.#ctor
pls::cs::Ref<cs_7eeafe36a056776c> cs_7ed3e1be6e3844e2() { cs_init_7eeafe36a056776c();
{ auto cs_this = pls::cs::make_ref<cs_7eeafe36a056776c>(); cs_7ed3e1be6e3844e2_init(cs_this); return cs_this; }
}
void cs_7ed3e1be6e3844e2_init(pls::cs::Ref<cs_7eeafe36a056776c> cs_this) {
([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x385ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{

}
}
// M:system.form.FriendForm.#ctor(System.Int32)
pls::cs::Ref<cs_7eeafe36a056776c> cs_933732b97e1e3022(std::int32_t v_type) { cs_init_7eeafe36a056776c();
{ auto cs_this = pls::cs::make_ref<cs_7eeafe36a056776c>(); cs_933732b97e1e3022_init(cs_this,v_type); return cs_this; }
}
void cs_933732b97e1e3022_init(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,std::int32_t v_type) {
([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x385ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_d6d8eb7d72b9b8de = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_360ae5878ac698fb = cs_value; return cs_value; }());
}
}
// M:system.form.FriendForm.DrawBonusObi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_618419fdd827986d(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_7eeafe36a056776c();
{
if (([&]() -> bool { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = v_width; auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_arg5 = v_color1; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
if (([&]() -> bool { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = v_width; auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg5 = v_color2; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
if (([&]() -> bool { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = v_width; auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color3; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
if (([&]() -> bool { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_height; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg3 = v_width; auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg5 = v_color2; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
if (([&]() -> bool { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_height; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg3 = v_width; auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_arg5 = v_color1; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
// M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
pls::cs::Array<std::int32_t> cs_32b5130fdbba8e53(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,bool v_active,bool v_cursor) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = v_str; auto cs_arg2 = v_x; auto cs_arg3 = v_y; auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg5 = v_active; auto cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg7 = v_cursor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_717fcad96e6b058f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
}
// M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
pls::cs::Array<std::int32_t> cs_78fce2126cbd70e0(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,bool v_cursor) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = v_str; auto cs_arg2 = v_x; auto cs_arg3 = v_y; auto cs_arg4 = v_anchor; auto cs_arg5 = v_active; auto cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg7 = v_cursor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_717fcad96e6b058f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
}
// M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)
pls::cs::Array<std::int32_t> cs_717fcad96e6b058f(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,std::int32_t v_margin,bool v_cursor) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::Array<std::int32_t>{};
}
}
}
// M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
pls::cs::Array<std::int32_t> cs_0de262acdc40a158(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_anchor,bool v_active,bool v_cursor) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::Array<std::int32_t>{};
}
}
}
// M:system.form.FriendForm.DrawDotLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_62ff81d3bbe8f047(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x1,std::int32_t v_y1,std::int32_t v_x2,std::int32_t v_y2,std::int32_t v_color) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
for (std::int32_t v_i_47618 = v_x1; ([&]() -> bool { auto cs_left = v_i_47618; auto cs_right = v_x2; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_47618; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_i_47618 = cs_value; return cs_value; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_i_47618); auto cs_arg1 = static_cast<float>(v_y1); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_i_47618; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(v_y2); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
// M:system.form.FriendForm.DrawGradation(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_94dcd111b8ee4921(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_dx,std::int32_t v_dy,std::int32_t v_sx,std::int32_t v_sy,std::int32_t v_w,std::int32_t v_h,std::int32_t v_sr,std::int32_t v_sg,std::int32_t v_sb,std::int32_t v_dr,std::int32_t v_dg,std::int32_t v_db) { cs_init_7eeafe36a056776c();
{
if (((([&]() -> bool { auto cs_left = v_w; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) || (([&]() -> bool { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())))) {
return;
}
std::int32_t v_dxAlias_50344 = v_dx;
std::int32_t v_num_50362 = v_dy;
std::int32_t v_num2_50376 = ([&]() -> std::int32_t { auto cs_left = v_dx; auto cs_right = v_w; return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num3_50395 = ([&]() -> std::int32_t { auto cs_left = v_dy; auto cs_right = v_h; return pls::cs::add_i32(cs_left,cs_right); }());
double v_num4_50417 = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_dr; auto cs_right = v_sr; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left / cs_right); }());
double v_num5_50472 = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_dg; auto cs_right = v_sg; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left / cs_right); }());
double v_num6_50527 = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_db; auto cs_right = v_sb; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left / cs_right); }());
double v_num7_50582 = ([&]() -> double { auto cs_left = static_cast<double>(v_sr); auto cs_right = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()))); auto cs_right = v_num4_50417; return (cs_left * cs_right); }()); return (cs_left + cs_right); }());
double v_num8_50634 = ([&]() -> double { auto cs_left = static_cast<double>(v_sg); auto cs_right = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()))); auto cs_right = v_num5_50472; return (cs_left * cs_right); }()); return (cs_left + cs_right); }());
double v_num9_50686 = ([&]() -> double { auto cs_left = static_cast<double>(v_sb); auto cs_right = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()))); auto cs_right = v_num6_50527; return (cs_left * cs_right); }()); return (cs_left + cs_right); }());
while (([&]() -> bool { auto cs_left = v_num_50362; auto cs_right = v_num3_50395; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num7_50582; auto cs_right = pls::game::cs_f64(0x406fe00000000000ull); return (cs_left > cs_right); }()))) ? pls::game::cs_f64(0x406fe00000000000ull) : (v_num7_50582))); v_num7_50582 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num7_50582; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))) ? pls::game::cs_f64(0x0000000000000000ull) : (v_num7_50582))); v_num7_50582 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num8_50634; auto cs_right = pls::game::cs_f64(0x406fe00000000000ull); return (cs_left > cs_right); }()))) ? pls::game::cs_f64(0x406fe00000000000ull) : (v_num8_50634))); v_num8_50634 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num8_50634; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))) ? pls::game::cs_f64(0x0000000000000000ull) : (v_num8_50634))); v_num8_50634 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num9_50686; auto cs_right = pls::game::cs_f64(0x406fe00000000000ull); return (cs_left > cs_right); }()))) ? pls::game::cs_f64(0x406fe00000000000ull) : (v_num9_50686))); v_num9_50686 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num9_50686; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))) ? pls::game::cs_f64(0x0000000000000000ull) : (v_num9_50686))); v_num9_50686 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::conv_i32(v_num7_50582); auto cs_arg1 = pls::cs::conv_i32(v_num8_50634); auto cs_arg2 = pls::cs::conv_i32(v_num9_50686); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
std::int32_t v_num10_51133 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (((([&]() -> bool { auto cs_left = v_num_50362; auto cs_right = v_dy; return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())))) {
([&]() { auto cs_value = (([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mod_i32(cs_left,cs_right); }())); v_num10_51133 = cs_value; return cs_value; }());
} else {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_50362; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num3_50395; return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ((([&]() -> std::int32_t { auto cs_left = v_num3_50395; auto cs_right = v_num_50362; return pls::cs::sub_i32(cs_left,cs_right); }()))); v_num10_51133 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); v_num10_51133 = cs_value; return cs_value; }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_dxAlias_50344); auto cs_arg1 = static_cast<float>(v_num_50362); auto cs_arg2 = static_cast<float>(v_w); auto cs_arg3 = static_cast<float>(v_num10_51133); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_old = v_num_50362; auto cs_rhs = v_num10_51133; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_50362 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num7_50582; auto cs_rhs = v_num4_50417; auto cs_value = (cs_old + cs_rhs); v_num7_50582 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num8_50634; auto cs_rhs = v_num5_50472; auto cs_value = (cs_old + cs_rhs); v_num8_50634 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num9_50686; auto cs_rhs = v_num6_50527; auto cs_value = (cs_old + cs_rhs); v_num9_50686 = cs_value; return cs_value; }());
}
}
}
// M:system.form.FriendForm.DrawLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_399e3725ef656158(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x1,std::int32_t v_y1,std::int32_t v_x2,std::int32_t v_y2,std::int32_t v_color) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x1); auto cs_arg1 = static_cast<float>(v_y1); auto cs_arg2 = static_cast<float>(v_x2); auto cs_arg3 = static_cast<float>(v_y2); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
// M:system.form.FriendForm.DrawObi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_0c8972864e696b8c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = v_width; auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg5 = v_color1; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = v_width; auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color2; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_height; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg3 = v_width; auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg5 = v_color1; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.FriendForm.DrawRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_212cdafe66855f8f(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(v_y); auto cs_arg2 = static_cast<float>(v_width); auto cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.FriendForm.DrawRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_ec22813d171c1d4c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color1; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(v_y); auto cs_arg2 = static_cast<float>(v_width); auto cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color2; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.FriendForm.DrawRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_7bccde6e8ea6f480(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color1; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(v_y); auto cs_arg2 = static_cast<float>(v_width); auto cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color2; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color3; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.FriendForm.FillRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_cb87f98dd032e227(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(v_y); auto cs_arg2 = static_cast<float>(v_width); auto cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.FriendForm.FillRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_69ee200125093993(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color1; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color2; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.FriendForm.FillRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_b8a79edd415baa1c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color1; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color2; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color3; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.FriendForm.FillRect4(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_9dd3a910c5a8997d(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3,std::int32_t v_color4) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color1; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color2; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color3; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color4; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.FriendForm.FillRectShadow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_e4a26c59beed8f2c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color1; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color2; cs_399e3725ef656158(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color2; cs_399e3725ef656158(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg5 = v_color3; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.FriendForm.Finish
bool cs_700199628a5d3944(pls::cs::Ref<cs_7eeafe36a056776c> cs_this) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2951e25803cf3104(cs_receiver); }());
return true;
}
}
}
// M:system.form.FriendForm.GetHashCode
std::int32_t cs_bbd44ad53610e27c(pls::cs::Ref<cs_7eeafe36a056776c> cs_this) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:system.form.FriendForm.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool cs_2e8467cceed75e07(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_46560 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
return true;
}
}
}
// M:system.form.FriendForm.Resume
bool cs_50194a8436c518b8(pls::cs::Ref<cs_7eeafe36a056776c> cs_this) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
{
bool v_recoveredReturn_45707 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f6039316248c9637(cs_receiver); }());
return v_recoveredReturn_45707;
}
}
}
}
// M:system.form.FriendForm.SetSoftLabel(System.Int32,System.Int32)
void cs_dcfbcce06a015340(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,std::int32_t v_left,std::int32_t v_right) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); auto cs_arg0 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_left; return cs_array.at(cs_index); }()); auto cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_right; return cs_array.at(cs_index); }()); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:system.form.FriendForm.ToString
pls::cs::String cs_7b5204c0798583ad(pls::cs::Ref<cs_7eeafe36a056776c> cs_this) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0046" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"\x003a" u"",11)); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }())); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:system.form.HttpForm.CheckMainWindow
bool cs_caae27da0b1b6167(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}
// M:system.form.HttpForm.Finish
bool cs_03296355172125d8(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2951e25803cf3104(cs_receiver); }());
return true;
}
}
}
// M:system.form.HttpForm.ResultData.Add(System.String,System.Object)
void cs_c91786768676e5e6(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_key,pls::cs::Ref<pls::cs::Object> v_data) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_71dbc351ecc57982; }()); auto cs_index = v_key; auto cs_value = v_data; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}
// M:system.form.HttpForm.ResultData.HasKey(System.String)
bool cs_4d31a276865668d1(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_key) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_71dbc351ecc57982; }()); auto cs_arg0 = v_key; return cs_receiver.ContainsKey(cs_arg0); }());
}
}
}
// M:system.form.HttpForm.SetConnectMethod(system.form.HttpForm.HttpMethod)
void cs_d35a505f9a32284f(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_method) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_method; pls::game::cs_require(cs_target)->cs_29c88f84473383fb = cs_value; return cs_value; }());
}
}
}
// M:system.form.HttpForm.SetResultMethod(system.form.HttpForm.HttpMethod)
void cs_eeccced648966040(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_method) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_method; pls::game::cs_require(cs_target)->cs_10571fb04b30cc3f = cs_value; return cs_value; }());
}
}
}
// M:system.form.HttpForm.ToString
pls::cs::String cs_9c863e1edb2b5045(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::String(std::u16string(u"\x0048" u"\x0074" u"\x0074" u"\x0070" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"",8));
}
}
}
// M:system.form.LanguageForm.#ctor
pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_b8786f8cf097476e() { cs_init_c9cd56cdd30ecf7a();
{ auto cs_this = pls::cs::make_ref<cs_c9cd56cdd30ecf7a>(); cs_b8786f8cf097476e_init(cs_this); return cs_this; }
}
void cs_b8786f8cf097476e_init(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this) {
([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x38cull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{

}
}
// M:system.form.LanguageForm.CheckMainWindow
bool cs_27c2d458904084a3(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this) { cs_init_c9cd56cdd30ecf7a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}
// M:system.form.LanguageForm.Finish
bool cs_b220f0282476e9dd(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this) { cs_init_c9cd56cdd30ecf7a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2951e25803cf3104(cs_receiver); }());
return true;
}
}
}
// M:system.form.LanguageForm.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool cs_233f6a98cc8c5aff(pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_c9cd56cdd30ecf7a();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_6624 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_6664 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_6624; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_6624; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x133a066ull)); return (cs_left == cs_right); }())) {
switch (([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }())) {
case 1:
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_6664); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_c9cd56cdd30ecf7a> { return cs_b8786f8cf097476e(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
break;
}
}
return false;
}
}
return true;
}
}
// M:system.form.LanguageForm.ToString
pls::cs::String cs_e349d7428c1381fa(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this) { cs_init_c9cd56cdd30ecf7a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::String(std::u16string(u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"",12));
}
}
}
// M:system.form.LineupForm.#ctor
pls::cs::Ref<cs_d01bf6d528df5d3e> cs_54b9e88b29d65e8e() { cs_init_d01bf6d528df5d3e();
{ auto cs_this = pls::cs::make_ref<cs_d01bf6d528df5d3e>(); cs_54b9e88b29d65e8e_init(cs_this); return cs_this; }
}
void cs_54b9e88b29d65e8e_init(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) {
([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x387ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{

}
}
// M:system.form.LineupForm.#ctor(System.Int32)
pls::cs::Ref<cs_d01bf6d528df5d3e> cs_bde331d144b7e233(std::int32_t v_type) { cs_init_d01bf6d528df5d3e();
{ auto cs_this = pls::cs::make_ref<cs_d01bf6d528df5d3e>(); cs_bde331d144b7e233_init(cs_this,v_type); return cs_this; }
}
void cs_bde331d144b7e233_init(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,std::int32_t v_type) {
([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x387ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_dc1c42d4d7e082e0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_e5f85072dd4bae90 = cs_value; return cs_value; }());
}
}
// M:system.form.LineupForm.CheckMainWindow
bool cs_3ce550173a351902(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}
// M:system.form.LineupForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)
pls::cs::Array<std::int32_t> cs_1445009bb757ae06(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,std::int32_t v_margin,bool v_cursor) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); auto cs_arg0 = v_g; auto cs_arg1 = v_str; auto cs_arg2 = v_x; auto cs_arg3 = v_y; auto cs_arg4 = v_anchor; auto cs_arg5 = v_active; auto cs_arg6 = v_margin; auto cs_arg7 = v_cursor; auto cs_arg8 = cs_this; auto cs_arg9 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b8a6cd3430fb5981; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_03a81c0c58f1d2f9(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
}
// M:system.form.LineupForm.GetHashCode
std::int32_t cs_424cc8dfa482f7f5(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:system.form.LineupForm.Resume
bool cs_2a2e46575659084c(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f6039316248c9637(cs_receiver); }());
return true;
}
}
}
// M:system.form.LineupForm.SetSoftlabel
void cs_a6e481b168e6fc62(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_5456 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_4ed30b03deb528a2(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc1c42d4d7e082e0; }()); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
std::int32_t v_num2_5492 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_4ed30b03deb528a2(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc1c42d4d7e082e0; }()); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); auto cs_arg0 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num_5456; return cs_array.at(cs_index); }()); auto cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num2_5492; return cs_array.at(cs_index); }()); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:system.form.LineupForm.ToString
pls::cs::String cs_83e48a5feada74ed(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x004c" u"\x0069" u"\x006e" u"\x0065" u"\x0075" u"\x0070" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"\x003a" u"",11)); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc1c42d4d7e082e0; }())); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:system.form.MatchForm.#ctor
pls::cs::Ref<cs_c63e265fb6ff73e9> cs_2c89c48d2af86765() { cs_init_c63e265fb6ff73e9();
{ auto cs_this = pls::cs::make_ref<cs_c63e265fb6ff73e9>(); cs_2c89c48d2af86765_init(cs_this); return cs_this; }
}
void cs_2c89c48d2af86765_init(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this) {
cs_this->cs_57680a4eea56750a = pls::cs::Array<pls::cs::Ref<cs_3855bfc5096e5e16>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
cs_this->cs_fa595b12dea8b849 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));
cs_this->cs_d0ea6f6e5f435277 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull));
cs_this->cs_d153a1a8d9bea631 = ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_3855bfc5096e5e16>>> { auto cs_arg0 = pls::assets::baked_array<std::int32_t>("84df5fdee7c18e2e51accfd96b4a5784edcb88801ab8d2129a8bf9d7cf98b8ad"); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_3855bfc5096e5e16>>>>(cs_arg0); }());
([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x388ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_feba1717d60b5691 = cs_value; return cs_value; }());
}
}
// M:system.form.MatchForm.#ctor(System.Int32)
pls::cs::Ref<cs_c63e265fb6ff73e9> cs_ea036ba10872a3b3(std::int32_t v_type) { cs_init_c63e265fb6ff73e9();
{ auto cs_this = pls::cs::make_ref<cs_c63e265fb6ff73e9>(); cs_ea036ba10872a3b3_init(cs_this,v_type); return cs_this; }
}
void cs_ea036ba10872a3b3_init(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,std::int32_t v_type) {
cs_this->cs_57680a4eea56750a = pls::cs::Array<pls::cs::Ref<cs_3855bfc5096e5e16>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
cs_this->cs_fa595b12dea8b849 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));
cs_this->cs_d0ea6f6e5f435277 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull));
cs_this->cs_d153a1a8d9bea631 = ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_3855bfc5096e5e16>>> { auto cs_arg0 = pls::assets::baked_array<std::int32_t>("84df5fdee7c18e2e51accfd96b4a5784edcb88801ab8d2129a8bf9d7cf98b8ad"); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_3855bfc5096e5e16>>>>(cs_arg0); }());
([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x388ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_0c2d548f3728d740 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_8c63b4493a85935e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_feba1717d60b5691 = cs_value; return cs_value; }());
}
}
// M:system.form.MatchForm.CheckMainWindow
bool cs_b3bffc2410b4d94b(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}
// M:system.form.MatchForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)
pls::cs::Array<std::int32_t> cs_6eb22d59c1b6ff83(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,std::int32_t v_margin,bool v_cursor) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); auto cs_arg0 = v_g; auto cs_arg1 = v_str; auto cs_arg2 = v_x; auto cs_arg3 = v_y; auto cs_arg4 = v_anchor; auto cs_arg5 = v_active; auto cs_arg6 = v_margin; auto cs_arg7 = v_cursor; auto cs_arg8 = cs_this; auto cs_arg9 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_17a1d296b3a77b16; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_03a81c0c58f1d2f9(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
}
// M:system.form.MatchForm.Finish
bool cs_28f69dfcc12f8ce5(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2951e25803cf3104(cs_receiver); }());
return true;
}
}
}
// M:system.form.MatchForm.GetHashCode
std::int32_t cs_d2c3db6c33dce4e4(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:system.form.MatchForm.Resume
bool cs_8ef5f4c367db33f4(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f6039316248c9637(cs_receiver); }());
return true;
}
}
}
// M:system.form.MatchForm.SetSoftlabel
void cs_e882a89810a20b62(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_6033 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_819bdeccec161577(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2d548f3728d740; }()); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
std::int32_t v_num2_6069 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_819bdeccec161577(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2d548f3728d740; }()); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c8207c5e86c5d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num2_6069 = cs_value; return cs_value; }())); v_num_6033 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); auto cs_arg0 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num_6033; return cs_array.at(cs_index); }()); auto cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num2_6069; return cs_array.at(cs_index); }()); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:system.form.MatchForm.ThreadStart(System.Int32)
void cs_fe024bdc277f72eb(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,std::int32_t v_type) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_e6f2afddc6ad124e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_d19c8207c5e86c5d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::game::cs_require(cs_target)->cs_bdb10fbc9b318603 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { auto cs_arg0 = cs_this; return cs_bab91f84bee2e3d9(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_9439af5fa0c1f93c = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_89c0d586cfe20341>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9439af5fa0c1f93c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b9636031b790b537(cs_receiver); }());
}
}
}
// M:system.form.MatchForm.ToString
pls::cs::String cs_90a97af61ea9a1ba(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x004d" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"\x003a" u"",10)); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2d548f3728d740; }())); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:system.form.RestoreForm.#ctor(kairo.unity.form.FormBase)
pls::cs::Ref<cs_7a8a85ab4c0396df> cs_972efb29b2f26070(pls::cs::Ref<pls::kairo::FormBase> v_next) { cs_init_7a8a85ab4c0396df();
{ auto cs_this = pls::cs::make_ref<cs_7a8a85ab4c0396df>(); cs_972efb29b2f26070_init(cs_this,v_next); return cs_this; }
}
void cs_972efb29b2f26070_init(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this,pls::cs::Ref<pls::kairo::FormBase> v_next) {
([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x38aull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = v_next; pls::game::cs_require(cs_target)->cs_2ad2f01fccd9369f = cs_value; return cs_value; }());
}
}
// M:system.form.RestoreForm.CheckMainWindow
bool cs_62510745d5314f43(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this) { cs_init_7a8a85ab4c0396df();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}
// M:system.form.RestoreForm.ToString
pls::cs::String cs_6d5017124c1ae7a5(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this) { cs_init_7a8a85ab4c0396df();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::String(std::u16string(u"\x0052" u"\x0065" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"",11));
}
}
}
// M:system.form.RestoreForm.Update
bool cs_a5d5caa24a2ba6d6(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this) { cs_init_7a8a85ab4c0396df();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_25913418bfe51bb8(cs_receiver); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15e2ffc127d2f4c2; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(); }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ad2f01fccd9369f; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ad2f01fccd9369f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3e466a3cb07b200e; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3e466a3cb07b200e; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d659571885cb8cb8(cs_receiver,cs_arg0); }());
}
}
return true;
}
}
}
// M:system.friend.MyFriend.#ctor
pls::cs::Ref<cs_ec8ac507fb495e84> cs_f0504e3d15ead28a() { cs_init_ec8ac507fb495e84();
{ auto cs_this = pls::cs::make_ref<cs_ec8ac507fb495e84>(); cs_f0504e3d15ead28a_init(cs_this); return cs_this; }
}
void cs_f0504e3d15ead28a_init(pls::cs::Ref<cs_ec8ac507fb495e84> cs_this) {
([&]() { cs_7a28af13c1c2f5ac_init(std::static_pointer_cast<cs_2d2e25a6914f7709>(cs_this)); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); pls::game::cs_require(cs_target)->cs_96e8baf9470c6eef = cs_value; return cs_value; }());
if (([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x7533" u"\x8acb" u"\x0020" u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"",14)); return cs_f54ac89fce23e89b(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_cf93b6d0c87591a9 = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_4e08203868786b3e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0041" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x3067" u"\x000a" u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x7533" u"\x8acb" u"\x3057" u"\x305f" u"\x3088" u"\x0021" u"\x000a" u"\x627f" u"\x8a8d" u"\x3057" u"\x3066" u"\x306d" u"\x3002" u"",37)); return cs_f54ac89fce23e89b(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_6bcda45671e82301 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0041" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x3092" u"\x30a4" u"\x30f3" u"\x30b9" u"\x30c8" u"\x30fc" u"\x30eb" u"\x3057" u"\x3066" u"\x000a" u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x3067" u"\x000a" u"\x0049" u"\x0044" u"\xff1a" u"\x300c" u"\x003c" u"\x0030" u"\x003e" u"\x300d" u"\x000a" u"\x3092" u"\x63a2" u"\x3057" u"\x3066" u"\x306d" u"\x3002" u"\x000a" u"\x000a" u"\x0044" u"\x004c" u"\x306f" u"\x3053" u"\x3063" u"\x3061" u"\x3060" u"\x3088" u"\x000a" u"",60)); return cs_f54ac89fce23e89b(cs_arg0); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"\x002f" u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x002f" u"\x003f" u"\x0067" u"\x006d" u"\x003d" u"",31)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::generated::cs_efcdf5d0d7b2cdc2()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0064" u"\x006c" u"\x003d" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"",9)); return pls::cs::String::concat(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_604e4b1ef0997a4e = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0046" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x0020" u"\x0052" u"\x0065" u"\x0071" u"\x0075" u"\x0065" u"\x0073" u"\x0074" u"\x0020" u"\x0028" u"\x0044" u"\x0072" u"\x0065" u"\x0061" u"\x006d" u"\x0020" u"\x0048" u"\x006f" u"\x0075" u"\x0073" u"\x0065" u"\x0020" u"\x0044" u"\x0061" u"\x0079" u"\x0073" u"\x0029" u"",33)); return cs_f54ac89fce23e89b(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_cf93b6d0c87591a9 = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_4e08203868786b3e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0049" u"\x0027" u"\x0064" u"\x0020" u"\x006c" u"\x0069" u"\x006b" u"\x0065" u"\x0020" u"\x0074" u"\x006f" u"\x0020" u"\x0062" u"\x0065" u"\x0020" u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x0073" u"\x0020" u"\x0069" u"\x006e" u"\x0020" u"\x0044" u"\x0072" u"\x0065" u"\x0061" u"\x006d" u"\x0020" u"\x0048" u"\x006f" u"\x0075" u"\x0073" u"\x0065" u"\x0020" u"\x0044" u"\x0061" u"\x0079" u"\x0073" u"\x0020" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0041" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x002e" u"\x0020" u"\x0050" u"\x006c" u"\x0065" u"\x0061" u"\x0073" u"\x0065" u"\x0020" u"\x0061" u"\x0070" u"\x0070" u"\x0072" u"\x006f" u"\x0076" u"\x0065" u"\x0020" u"\x006d" u"\x0079" u"\x0020" u"\x0072" u"\x0065" u"\x0071" u"\x0075" u"\x0065" u"\x0073" u"\x0074" u"\x0021" u"",82)); return cs_f54ac89fce23e89b(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_6bcda45671e82301 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0054" u"\x0072" u"\x0079" u"\x0020" u"\x0044" u"\x0072" u"\x0065" u"\x0061" u"\x006d" u"\x0020" u"\x0048" u"\x006f" u"\x0075" u"\x0073" u"\x0065" u"\x0020" u"\x0044" u"\x0061" u"\x0079" u"\x0073" u"\x0020" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0041" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x0020" u"\x0061" u"\x006e" u"\x0064" u"\x0020" u"\x0073" u"\x0065" u"\x0061" u"\x0072" u"\x0063" u"\x0068" u"\x0020" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0074" u"\x0068" u"\x0065" u"\x0020" u"\x0049" u"\x0044" u"\x0020" u"\x0022" u"\x003c" u"\x0030" u"\x003e" u"\x0022" u"\x0020" u"\x0074" u"\x006f" u"\x0020" u"\x0066" u"\x0069" u"\x006e" u"\x0064" u"\x0020" u"\x006d" u"\x0065" u"\x002e" u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"\x0059" u"\x006f" u"\x0075" u"\x0020" u"\x0063" u"\x0061" u"\x006e" u"\x0020" u"\x0064" u"\x006f" u"\x0077" u"\x006e" u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"\x0020" u"\x0074" u"\x0068" u"\x0065" u"\x0020" u"\x0061" u"\x0070" u"\x0070" u"\x0020" u"\x0068" u"\x0065" u"\x0072" u"\x0065" u"\x003a" u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",114)); return cs_f54ac89fce23e89b(cs_arg0); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"\x002f" u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x002f" u"\x003f" u"\x0067" u"\x006d" u"\x003d" u"",31)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::generated::cs_efcdf5d0d7b2cdc2()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0064" u"\x006c" u"\x003d" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"",9)); return pls::cs::String::concat(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_604e4b1ef0997a4e = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); pls::game::cs_require(cs_target)->cs_52a8e080b7bfd117 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); pls::game::cs_require(cs_target)->cs_28588b55de39809d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); pls::game::cs_require(cs_target)->cs_86537e9773f89c90 = cs_value; return cs_value; }());
}
}
// M:system.friend.MyFriend.GetInstance
pls::cs::Ref<cs_ec8ac507fb495e84> cs_b3ac47ebcf5c05fb() { cs_init_ec8ac507fb495e84();
{
if (([&]() { auto cs_left = pls::cs::box(cs_52166bbebe634258()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_ec8ac507fb495e84> { return cs_f0504e3d15ead28a(); }()); cs_52166bbebe634258() = cs_value; return cs_value; }());
}
return pls::cs::unbox<pls::cs::Ref<cs_ec8ac507fb495e84>>(pls::cs::box(cs_52166bbebe634258()));
}
}
// M:system.friend.MyFriend.PlayBonus(System.Int32)
void cs_c9feed9f197e9812(pls::cs::Ref<cs_ec8ac507fb495e84> cs_this,std::int32_t v_value) { cs_init_ec8ac507fb495e84();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:system.friend.ui.Friend.#ctor
pls::cs::Ref<cs_9465f7541f51c47e> cs_2ce578f5724575d0() { cs_init_9465f7541f51c47e();
{ auto cs_this = pls::cs::make_ref<cs_9465f7541f51c47e>(); cs_2ce578f5724575d0_init(cs_this); return cs_this; }
}
void cs_2ce578f5724575d0_init(pls::cs::Ref<cs_9465f7541f51c47e> cs_this) {
cs_this->cs_617d9d7e65ae6487 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_2b38757bf00583cf = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_c9cc587d986ccc18 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<pls::generated::cs_bb652fbb61000386>{}; pls::game::cs_require(cs_target)->cs_8c0cc3bea061f0cd = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = pls::cs::String(u""); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_aaefb5b9fae0397e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_617d9d7e65ae6487 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2b38757bf00583cf = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_c9cc587d986ccc18 = cs_value; return cs_value; }());
}
}
// M:system.friend.ui.Friend.#ctor(System.String,System.String,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_9465f7541f51c47e> cs_0f10e92aa7924479(pls::cs::String v_friendId,pls::cs::String v_name,std::int32_t v_state,std::int32_t v_minute,std::int32_t v_updated) { cs_init_9465f7541f51c47e();
{ auto cs_this = pls::cs::make_ref<cs_9465f7541f51c47e>(); cs_0f10e92aa7924479_init(cs_this,v_friendId,v_name,v_state,v_minute,v_updated); return cs_this; }
}
void cs_0f10e92aa7924479_init(pls::cs::Ref<cs_9465f7541f51c47e> cs_this,pls::cs::String v_friendId,pls::cs::String v_name,std::int32_t v_state,std::int32_t v_minute,std::int32_t v_updated) {
cs_this->cs_617d9d7e65ae6487 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_2b38757bf00583cf = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_c9cc587d986ccc18 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = v_friendId; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_8c0cc3bea061f0cd = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = v_name; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_aaefb5b9fae0397e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = v_state; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_617d9d7e65ae6487 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = v_minute; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2b38757bf00583cf = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = v_updated; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_c9cc587d986ccc18 = cs_value; return cs_value; }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aaefb5b9fae0397e; }())); auto cs_arg0 = pls::cs::String(std::u16string(u"\x0008" u"",1)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8ebcc441a59bda9a(cs_receiver,cs_arg0); }())))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aaefb5b9fae0397e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->ToString(); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0008" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_aaefb5b9fae0397e = cs_value; return cs_value; }());
}
}
}
// M:system.friend.ui.Friend.Deserialize(java.io.InputStream)
void cs_ab2f2c9f1fce2e02(pls::cs::Ref<cs_9465f7541f51c47e> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_9465f7541f51c47e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_8c0cc3bea061f0cd = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_617d9d7e65ae6487 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2b38757bf00583cf = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_c9cc587d986ccc18 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_aaefb5b9fae0397e = cs_value; return cs_value; }());
}
}
}
// M:system.friend.ui.Friend.Serialize(java.io.OutputStream)
void cs_440d2f888a8888df(pls::cs::Ref<cs_9465f7541f51c47e> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_9465f7541f51c47e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c0cc3bea061f0cd; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_617d9d7e65ae6487; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b38757bf00583cf; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c9cc587d986ccc18; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aaefb5b9fae0397e; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
}
}
}
// M:system.friend.ui.FriendData.#ctor
pls::cs::Ref<cs_2d2e25a6914f7709> cs_7a28af13c1c2f5ac() { cs_init_2d2e25a6914f7709();
{ auto cs_this = pls::cs::make_ref<cs_2d2e25a6914f7709>(); cs_7a28af13c1c2f5ac_init(cs_this); return cs_this; }
}
void cs_7a28af13c1c2f5ac_init(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) {
cs_this->cs_96e8baf9470c6eef = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull));
cs_this->cs_4e08203868786b3e = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x7533" u"\x8acb" u"\x0020" u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"",14)); return cs_f54ac89fce23e89b(cs_arg0); }());
cs_this->cs_6bcda45671e82301 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0041" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x3067" u"\x000a" u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x7533" u"\x8acb" u"\x3057" u"\x305f" u"\x3088" u"\x0021" u"\x000a" u"\x627f" u"\x8a8d" u"\x3057" u"\x3066" u"\x306d" u"\x3002" u"",37)); return cs_f54ac89fce23e89b(cs_arg0); }());
cs_this->cs_cf93b6d0c87591a9 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x7533" u"\x8acb" u"\x0020" u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"",14)); return cs_f54ac89fce23e89b(cs_arg0); }());
cs_this->cs_604e4b1ef0997a4e = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0041" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x3092" u"\x30a4" u"\x30f3" u"\x30b9" u"\x30c8" u"\x30fc" u"\x30eb" u"\x3057" u"\x3066" u"\x000a" u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x3067" u"\x000a" u"\x0049" u"\x0044" u"\xff1a" u"\x300c" u"\x003c" u"\x0030" u"\x003e" u"\x300d" u"\x000a" u"\x3092" u"\x63a2" u"\x3057" u"\x3066" u"\x306d" u"\x3002" u"\x000a" u"\x000a" u"\x0044" u"\x004c" u"\x306f" u"\x3053" u"\x3063" u"\x3061" u"\x3060" u"\x3088" u"\x000a" u"",60)); return cs_f54ac89fce23e89b(cs_arg0); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"\x002f" u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x002f" u"\x003f" u"\x0067" u"\x006d" u"\x003d" u"",31)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::generated::cs_efcdf5d0d7b2cdc2()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0064" u"\x006c" u"\x003d" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"",9)); return pls::cs::String::concat(cs_left,cs_right); }());
cs_this->cs_52a8e080b7bfd117 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull));
cs_this->cs_28588b55de39809d = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull));
cs_this->cs_86537e9773f89c90 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull));
cs_this->cs_265901ac3e38e5a5 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
cs_this->cs_c8c9d3daa8567fa6 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
cs_this->cs_60d30afb5a438553 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
cs_this->cs_be1d7f91510795ac = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return pls::generated::cs_891849d99054b970(cs_arg0); }());
cs_this->cs_c384965fc0d4bd25 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
cs_this->cs_ab8cb0b69ebcac70 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffffffffffffffffull));
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_c20c229ea63037d8> { auto cs_arg0 = cs_4d39e0560b934a4f(); auto cs_arg1 = cs_e2d16fab426c5d2f(); auto cs_arg2 = cs_2f2e8e46132e7fcc(); auto cs_arg3 = cs_1633c4562f4c40eb(); auto cs_arg4 = cs_01b07286e746610e(); return pls::generated::cs_1ec84b4dfcd94394(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); pls::game::cs_require(cs_target)->cs_dc19769b18c674e0 = cs_value; return cs_value; }());
}
}
// M:system.friend.ui.FriendData.CheckRegistFriend
bool cs_dae07ea79e855f60(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b9659319b202661(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()));
}
}
}
// M:system.friend.ui.FriendData.DrawGradation(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_c8383603f8c4d277(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_dx,std::int32_t v_dy,std::int32_t v_sx,std::int32_t v_sy,std::int32_t v_w,std::int32_t v_h,std::int32_t v_sr,std::int32_t v_sg,std::int32_t v_sb,std::int32_t v_dr,std::int32_t v_dg,std::int32_t v_db) { cs_init_2d2e25a6914f7709();
{
if (((([&]() -> bool { auto cs_left = v_w; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) || (([&]() -> bool { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())))) {
return;
}
std::int32_t v_dxAlias_12072 = v_dx;
std::int32_t v_num_12090 = v_dy;
std::int32_t v_num2_12104 = ([&]() -> std::int32_t { auto cs_left = v_dx; auto cs_right = v_w; return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num3_12123 = ([&]() -> std::int32_t { auto cs_left = v_dy; auto cs_right = v_h; return pls::cs::add_i32(cs_left,cs_right); }());
double v_num4_12145 = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_dr; auto cs_right = v_sr; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left / cs_right); }());
double v_num5_12200 = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_dg; auto cs_right = v_sg; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left / cs_right); }());
double v_num6_12255 = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_db; auto cs_right = v_sb; return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return (cs_left / cs_right); }());
double v_num7_12310 = ([&]() -> double { auto cs_left = static_cast<double>(v_sr); auto cs_right = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()))); auto cs_right = v_num4_12145; return (cs_left * cs_right); }()); return (cs_left + cs_right); }());
double v_num8_12362 = ([&]() -> double { auto cs_left = static_cast<double>(v_sg); auto cs_right = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()))); auto cs_right = v_num5_12200; return (cs_left * cs_right); }()); return (cs_left + cs_right); }());
double v_num9_12414 = ([&]() -> double { auto cs_left = static_cast<double>(v_sb); auto cs_right = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()))); auto cs_right = v_num6_12255; return (cs_left * cs_right); }()); return (cs_left + cs_right); }());
while (([&]() -> bool { auto cs_left = v_num_12090; auto cs_right = v_num3_12123; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num7_12310; auto cs_right = pls::game::cs_f64(0x406fe00000000000ull); return (cs_left > cs_right); }()))) ? pls::game::cs_f64(0x406fe00000000000ull) : (v_num7_12310))); v_num7_12310 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num7_12310; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))) ? pls::game::cs_f64(0x0000000000000000ull) : (v_num7_12310))); v_num7_12310 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num8_12362; auto cs_right = pls::game::cs_f64(0x406fe00000000000ull); return (cs_left > cs_right); }()))) ? pls::game::cs_f64(0x406fe00000000000ull) : (v_num8_12362))); v_num8_12362 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num8_12362; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))) ? pls::game::cs_f64(0x0000000000000000ull) : (v_num8_12362))); v_num8_12362 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num9_12414; auto cs_right = pls::game::cs_f64(0x406fe00000000000ull); return (cs_left > cs_right); }()))) ? pls::game::cs_f64(0x406fe00000000000ull) : (v_num9_12414))); v_num9_12414 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((([&]() -> bool { auto cs_left = v_num9_12414; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))) ? pls::game::cs_f64(0x0000000000000000ull) : (v_num9_12414))); v_num9_12414 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::conv_i32(v_num7_12310); auto cs_arg1 = pls::cs::conv_i32(v_num8_12362); auto cs_arg2 = pls::cs::conv_i32(v_num9_12414); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
std::int32_t v_num10_12861 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (((([&]() -> bool { auto cs_left = v_num_12090; auto cs_right = v_dy; return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())))) {
([&]() { auto cs_value = (([&]() -> std::int32_t { auto cs_left = v_sy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mod_i32(cs_left,cs_right); }())); v_num10_12861 = cs_value; return cs_value; }());
} else {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_12090; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num3_12123; return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ((([&]() -> std::int32_t { auto cs_left = v_num3_12123; auto cs_right = v_num_12090; return pls::cs::sub_i32(cs_left,cs_right); }()))); v_num10_12861 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); v_num10_12861 = cs_value; return cs_value; }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_dxAlias_12072); auto cs_arg1 = static_cast<float>(v_num_12090); auto cs_arg2 = static_cast<float>(v_w); auto cs_arg3 = static_cast<float>(v_num10_12861); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_old = v_num_12090; auto cs_rhs = v_num10_12861; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_12090 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num7_12310; auto cs_rhs = v_num4_12145; auto cs_value = (cs_old + cs_rhs); v_num7_12310 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num8_12362; auto cs_rhs = v_num5_12200; auto cs_value = (cs_old + cs_rhs); v_num8_12362 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num9_12414; auto cs_rhs = v_num6_12255; auto cs_value = (cs_old + cs_rhs); v_num9_12414 = cs_value; return cs_value; }());
}
}
}
// M:system.friend.ui.FriendData.ExistRandomFriend
bool cs_fe0d11dfa92eb303(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_91d5244f0e476cfe; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }());
}
}
}
// M:system.friend.ui.FriendData.GetCurrentForm
pls::cs::Ref<cs_7eeafe36a056776c> cs_3fa9688c0681c440(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_this); auto cs_arg0 = pls::cs::Ref<cs_9465f7541f51c47e>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_aa0325ad66b87a4e(cs_receiver,cs_arg0); }());
}
}
}
// M:system.friend.ui.FriendData.GetCurrentForm(system.friend.ui.Friend)
pls::cs::Ref<cs_7eeafe36a056776c> cs_aa0325ad66b87a4e(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this,pls::cs::Ref<cs_9465f7541f51c47e> v_friend) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_dae07ea79e855f60(cs_receiver); }())))) {
pls::cs::Ref<cs_7eeafe36a056776c> v_friendForm_14360 = ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_933732b97e1e3022(cs_arg0); }());
([&]() { auto cs_target = v_friendForm_14360; auto cs_value = v_friend; pls::game::cs_require(cs_target)->cs_0684a6bc733d8cca = cs_value; return cs_value; }());
return v_friendForm_14360;
}
if (([&]() { auto cs_left = pls::cs::box(v_friend); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_933732b97e1e3022(cs_arg0); }());
}
pls::cs::Ref<cs_7eeafe36a056776c> v_friendForm2_14530 = ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_933732b97e1e3022(cs_arg0); }());
([&]() { auto cs_target = v_friendForm2_14530; auto cs_value = v_friend; pls::game::cs_require(cs_target)->cs_0684a6bc733d8cca = cs_value; return cs_value; }());
return v_friendForm2_14530;
}
}
}
// M:system.friend.ui.FriendData.GetFriendName
pls::cs::String cs_caa414870501fd01(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());
}
}
}
// M:system.friend.ui.FriendData.GetInstance
pls::cs::Ref<cs_2d2e25a6914f7709> cs_7c54a1a29559a8d9() { cs_init_2d2e25a6914f7709();
{
return cs_52166bbebe634258();
}
}
// M:system.friend.ui.FriendData.GetPlayBonus
std::int32_t cs_57ce211197b23477(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_28588b55de39809d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_52a8e080b7bfd117; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
std::int32_t v_num_8882 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_52a8e080b7bfd117; }()); return pls::cs::div_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num_8882; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_28588b55de39809d; }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_28588b55de39809d; }()); v_num_8882 = cs_value; return cs_value; }());
}
return v_num_8882;
}
}
}
// M:system.friend.ui.FriendData.GetRandomFriend
pls::cs::Ref<cs_9465f7541f51c47e> cs_d0254afaa80460c4(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_91d5244f0e476cfe; }());
}
}
}
// M:system.friend.ui.FriendData.Init
void cs_f0e539e34f25bb12(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:system.friend.ui.FriendData.InitializeData
void cs_0bc5119046170c54(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_1bddb24fb5cf7315 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_daf9583746fd0c6a = cs_value; return cs_value; }());
}
}
}
// M:system.friend.ui.FriendData.IsFriendDataUpdated
bool cs_1b640c255f09c648(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f0ec3f768b4c70c3; }());
}
}
}
// M:system.friend.ui.FriendData.Load(System.Byte[])
void cs_bae36d1c229dfff8(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this,pls::cs::Array<std::uint8_t> v_data) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_c20c229ea63037d8> { auto cs_arg0 = cs_4d39e0560b934a4f(); auto cs_arg1 = cs_e2d16fab426c5d2f(); auto cs_arg2 = cs_2f2e8e46132e7fcc(); auto cs_arg3 = cs_1633c4562f4c40eb(); auto cs_arg4 = cs_01b07286e746610e(); return pls::generated::cs_1ec84b4dfcd94394(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); pls::game::cs_require(cs_target)->cs_dc19769b18c674e0 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_c20c229ea63037d8>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }())); auto cs_arg0 = v_data; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_f3dde7064a66be23(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_48e169a17c41b95f(cs_receiver); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_112e7bd8029af781(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
// M:system.friend.ui.FriendData.LoadGame(System.Byte[])
void cs_54f11f2e695dcaff(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this,pls::cs::Array<std::uint8_t> v_data) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0bc5119046170c54(cs_receiver); }());
}
}
}
// M:system.friend.ui.FriendData.NewGame(System.Boolean)
void cs_576c42e42f2dbf1d(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this,bool v_take) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0bc5119046170c54(cs_receiver); }());
}
}
}
// M:system.friend.ui.FriendData.PackFriendBinalyData
void cs_e7c4ad65df297928(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_fb60578b3098a284> v_byteArrayOutputStream_3595 = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{};
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_3595 = cs_value; return cs_value; }());
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_3595; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c384965fc0d4bd25; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_3778 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3778; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c384965fc0d4bd25; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3778; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3778 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_22115ea4236d0eaa> v_friendPlayTimeData_3847 = pls::cs::unbox<pls::cs::Ref<cs_22115ea4236d0eaa>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c384965fc0d4bd25; }())); auto cs_arg0 = v_i_3778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_22115ea4236d0eaa>>(v_friendPlayTimeData_3847); auto cs_arg0 = v_byteArrayOutputStream_3595; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2044571a728aaa71(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3595); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_3595 = cs_value; return cs_value; }());
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_3595; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_j_4217 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_4217; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_4217; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_4217 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9465f7541f51c47e> v_friend_4274 = pls::cs::unbox<pls::cs::Ref<cs_9465f7541f51c47e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); auto cs_arg0 = v_j_4217; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9465f7541f51c47e>>(v_friend_4274); auto cs_arg0 = v_byteArrayOutputStream_3595; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_440d2f888a8888df(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3595); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_byteArrayOutputStream_3595); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3595); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{}; v_byteArrayOutputStream_3595 = cs_value; return cs_value; }());
});
}
}
}
// M:system.friend.ui.FriendData.SetFriendName(System.String)
void cs_2bce05baf892a620(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this,pls::cs::String v_name) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = v_name; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
// M:system.friend.ui.FriendData.UnpackFriendBinalyData
void cs_48e169a17c41b95f(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_4687 = pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{};
if ((([&]() { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::Array<std::uint8_t>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
return;
}
pls::cs::run_finally([&]() -> void { {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c384965fc0d4bd25; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_ccc6918433418e24(cs_receiver); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_4687 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>>(v_byteArrayInputStream_4687); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_bb7347310506b971(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
std::int32_t v_num_4975 = ([&]() -> std::int32_t { auto cs_arg0 = v_byteArrayInputStream_4687; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
for (std::int32_t v_i_5037 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5037; auto cs_right = v_num_4975; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5037; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5037 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_22115ea4236d0eaa> v_friendPlayTimeData_5090 = ([&]() -> pls::cs::Ref<cs_22115ea4236d0eaa> { return cs_624a0425464d274a(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_22115ea4236d0eaa>>(v_friendPlayTimeData_5090); auto cs_arg0 = v_byteArrayInputStream_4687; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9b78afe85b06708d(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c384965fc0d4bd25; }())); auto cs_arg0 = pls::cs::box(v_friendPlayTimeData_5090); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_4687); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_ccc6918433418e24(cs_receiver); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_4687 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>>(v_byteArrayInputStream_4687); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_bb7347310506b971(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
std::int32_t v_num2_5457 = ([&]() -> std::int32_t { auto cs_arg0 = v_byteArrayInputStream_4687; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
for (std::int32_t v_j_5520 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_5520; auto cs_right = v_num2_5457; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_5520; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_5520 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9465f7541f51c47e> v_friend_5562 = ([&]() -> pls::cs::Ref<cs_9465f7541f51c47e> { return cs_2ce578f5724575d0(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9465f7541f51c47e>>(v_friend_5562); auto cs_arg0 = v_byteArrayInputStream_4687; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ab2f2c9f1fce2e02(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); auto cs_arg0 = pls::cs::box(v_friend_5562); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_4687); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
} }, [&]() {

});
}
}
}
// M:system.friend.ui.FriendData.UpdatePlayTime
void cs_0f1705dcc62b5add(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int64_t v_num_14667 = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab8cb0b69ebcac70; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_cee7c1140c10ee97 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_num_14667; pls::game::cs_require(cs_target)->cs_ab8cb0b69ebcac70 = cs_value; return cs_value; }());
}
std::int64_t v_num2_14798 = ([&]() -> std::int64_t { auto cs_left = v_num_14667; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab8cb0b69ebcac70; }()); return pls::cs::sub_i64(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num2_14798; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull))); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_cee7c1140c10ee97; auto cs_new = pls::cs::add_i64(cs_old,1); pls::game::cs_require(cs_target)->cs_cee7c1140c10ee97 = cs_new; return cs_old; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_num_14667; pls::game::cs_require(cs_target)->cs_ab8cb0b69ebcac70 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cee7c1140c10ee97; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull))); return (cs_left >= cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_cee7c1140c10ee97 = cs_value; return cs_value; }());
}
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_15044 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
if ((((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_daf9583746fd0c6a; }()))) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86537e9773f89c90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_15044); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); return cs_933732b97e1e3022(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
} else if ((((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1bddb24fb5cf7315; }()))) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_52a8e080b7bfd117; }()); return (cs_left >= cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_52a8e080b7bfd117; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_15044); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_933732b97e1e3022(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
}
}
}
}
// M:system.friend.ui.FriendData.Write
pls::cs::Array<std::uint8_t> cs_017d03dcf50da0a1(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e7c4ad65df297928(cs_receiver); }());
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_c20c229ea63037d8>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_1dc2914985e48e1c(cs_receiver); }());
}
}
}
// M:system.friend.ui.FriendData.WriteGame
pls::cs::Array<std::uint8_t> cs_d21f2be38b215e49(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_fb60578b3098a284> v_byteArrayOutputStream_3229 = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{};
return pls::cs::run_finally([&]() -> pls::cs::Array<std::uint8_t> { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_3229 = cs_value; return cs_value; }());
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3229); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_byteArrayOutputStream_3229); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3229); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{}; v_byteArrayOutputStream_3229 = cs_value; return cs_value; }());
});
}
}
}
// M:system.friend.ui.FriendPlayTimeData.#ctor
pls::cs::Ref<cs_22115ea4236d0eaa> cs_624a0425464d274a() { cs_init_22115ea4236d0eaa();
{ auto cs_this = pls::cs::make_ref<cs_22115ea4236d0eaa>(); cs_624a0425464d274a_init(cs_this); return cs_this; }
}
void cs_624a0425464d274a_init(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this) {
cs_this->cs_db96c721c151249c = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_0ba613afa6875a18 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
{

}
}
// M:system.friend.ui.FriendPlayTimeData.#ctor(System.String,System.Int32,System.Int32)
pls::cs::Ref<cs_22115ea4236d0eaa> cs_d95d2ae3639f5d06(pls::cs::String v_friendId,std::int32_t v_minute,std::int32_t v_state) { cs_init_22115ea4236d0eaa();
{ auto cs_this = pls::cs::make_ref<cs_22115ea4236d0eaa>(); cs_d95d2ae3639f5d06_init(cs_this,v_friendId,v_minute,v_state); return cs_this; }
}
void cs_d95d2ae3639f5d06_init(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this,pls::cs::String v_friendId,std::int32_t v_minute,std::int32_t v_state) {
cs_this->cs_db96c721c151249c = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_0ba613afa6875a18 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = v_friendId; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2940d449a6dc2c58 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = v_minute; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_db96c721c151249c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = v_state; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_0ba613afa6875a18 = cs_value; return cs_value; }());
}
}
// M:system.friend.ui.FriendPlayTimeData.Deserialize(java.io.InputStream)
void cs_9b78afe85b06708d(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_22115ea4236d0eaa();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2940d449a6dc2c58 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_db96c721c151249c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_0ba613afa6875a18 = cs_value; return cs_value; }());
}
}
}
// M:system.friend.ui.FriendPlayTimeData.Serialize(java.io.OutputStream)
void cs_2044571a728aaa71(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_22115ea4236d0eaa();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2940d449a6dc2c58; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_db96c721c151249c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ba613afa6875a18; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
}
}
}
// M:system.KairoText.LT(System.String,System.Int32)
pls::cs::String cs_62153521fbb1f7f8(pls::cs::String v_text,std::int32_t v_arg) { cs_init_851a96be86c28dd2();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; return cs_f54ac89fce23e89b(cs_arg0); }()); auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = v_arg; return pls::generated::cs_420fb62b9e208a96(cs_arg0); }()); return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());
}
}
// M:system.KairoText.LT(System.String,System.String)
pls::cs::String cs_f026ffcc06857429(pls::cs::String v_text,pls::cs::String v_arg) { cs_init_851a96be86c28dd2();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; return cs_f54ac89fce23e89b(cs_arg0); }()); auto cs_arg1 = v_arg; return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());
}
}
// M:system.KairoText.LT(System.String)
pls::cs::String cs_f54ac89fce23e89b(pls::cs::String v_text) { cs_init_851a96be86c28dd2();
{
pls::cs::String v_text2_261 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_text2_261; auto cs_right = v_text; return (cs_left != cs_right); }())) {
return v_text2_261;
}
if (([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }())) {
return v_text;
}
if ((!(cs_66520490d812bf5b()))) {
for (std::int32_t v_i_454 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_454; auto cs_right = (cs_99f86cd66d5ccef0()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_454; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_454 = cs_new; return cs_old; }())) {
for (std::int32_t v_j_514 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_514; auto cs_right = (([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_i_454; return cs_array.at(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_514; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_514 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_i_454; return cs_array.at(cs_index); }()); auto cs_index = v_j_514; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_i_454; return cs_array.at(cs_index); }()); auto cs_index = v_j_514; return cs_array.at(cs_index); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x000a" u"",1)); auto cs_arg2 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
([&]() { auto cs_value = true; cs_66520490d812bf5b() = cs_value; return cs_value; }());
}
pls::cs::String v_value_714 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = pls::cs::String(std::u16string(u"\x000a" u"",1)); auto cs_arg2 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());
std::int32_t v_num_769 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
for (std::int32_t v_k_790 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_790; auto cs_right = (cs_99f86cd66d5ccef0()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_790; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_790 = cs_new; return cs_old; }())) {
if ((([&]() -> bool { auto cs_left = v_num_769; auto cs_right = (([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_k_790; return cs_array.at(cs_index); }())).length(); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_k_790; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_arg1 = v_value_714; return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()))) {
return ([&]() { auto cs_array = ([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_k_790; return cs_array.at(cs_index); }()); auto cs_index = v_num_769; return cs_array.at(cs_index); }());
}
}
return v_text;
}
}
// M:system.lineup.MyLineup.#ctor
pls::cs::Ref<cs_e00832a42e12ec3b> cs_1da4a6941cbe6a25() { cs_init_e00832a42e12ec3b();
{ auto cs_this = pls::cs::make_ref<cs_e00832a42e12ec3b>(); cs_1da4a6941cbe6a25_init(cs_this); return cs_this; }
}
void cs_1da4a6941cbe6a25_init(pls::cs::Ref<cs_e00832a42e12ec3b> cs_this) {
([&]() { cs_c91e4943a0e046f2_init(std::static_pointer_cast<cs_1ab688350081022a>(cs_this)); }());
{

}
}
// M:system.lineup.MyLineup.GetInstance
pls::cs::Ref<cs_e00832a42e12ec3b> cs_9cfcc2afb24b5e63() { cs_init_e00832a42e12ec3b();
{
if (([&]() { auto cs_left = pls::cs::box(cs_eb626cd1b0f88bfd()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_e00832a42e12ec3b> { return cs_1da4a6941cbe6a25(); }()); cs_eb626cd1b0f88bfd() = cs_value; return cs_value; }());
}
return pls::cs::unbox<pls::cs::Ref<cs_e00832a42e12ec3b>>(pls::cs::box(cs_eb626cd1b0f88bfd()));
}
}
// M:system.notification.MyNotify.OnNotify
void cs_a56b328f925cc5e4(pls::cs::Ref<cs_23ed5cbd0e3922f3> cs_this) { cs_init_23ed5cbd0e3922f3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:system.panel.InputPanel.#ctor
pls::cs::Ref<cs_90cdc908fbacdc4d> cs_8a97d90a17275f58() { cs_init_90cdc908fbacdc4d();
{ auto cs_this = pls::cs::make_ref<cs_90cdc908fbacdc4d>(); cs_8a97d90a17275f58_init(cs_this); return cs_this; }
}
void cs_8a97d90a17275f58_init(pls::cs::Ref<cs_90cdc908fbacdc4d> cs_this) {
([&]() { cs_3afc5298ce4a3e84_init(std::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this)); }());
{

}
}
// M:system.surface.GameBanner.IsGameSurface
bool cs_ad96de4fc5954f60(pls::cs::Ref<cs_af32d28251411c95> cs_this) { cs_init_af32d28251411c95();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}
// M:system.surface.GameBanner.RotateClear
void cs_98117d8ad36b8cc1(pls::cs::Ref<cs_af32d28251411c95> cs_this) { cs_init_af32d28251411c95();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:system.surface.GameBanner.Unload
void cs_2fc41a4e0b75b7e8(pls::cs::Ref<cs_af32d28251411c95> cs_this) { cs_init_af32d28251411c95();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(cs_de24cebe7367b9a6()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(cs_de24cebe7367b9a6()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::kairo::Image>{}; cs_de24cebe7367b9a6() = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_a6d9872478ce823a = cs_value; return cs_value; }());
}
}
}
pls::cs::Ref<pls::kairo::IApplication> create_application(){return cs_7703d612ae2455fc();}
}
