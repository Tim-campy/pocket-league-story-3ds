 pls::generated::cs_require(cs_target)->cs_23af4da78e1ad81f = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23af4da78e1ad81f; }()); auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23af4da78e1ad81f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f91a0cd22df6e95f(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_require(cs_target)->cs_fe44ec569b4e9ab5 = cs_value; return cs_value; }());
for (std::int32_t v_i_2061 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2061; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23af4da78e1ad81f; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2061; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2061 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_fe44ec569b4e9ab5; auto cs_rhs = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23af4da78e1ad81f; }()); auto cs_index = v_i_2061; return cs_array.at(cs_index); }()); auto cs_value = (cs_old ^ cs_rhs); pls::generated::cs_require(cs_target)->cs_fe44ec569b4e9ab5 = cs_value; return cs_value; }());
}
return cs_this;
}
}
}
// M:kairo.unity.util.SecureString.StartsWith(System.String)
bool cs_eaf1659172f4a34c(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::String v_prefix) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); auto cs_arg1 = v_prefix; return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.util.SecureString.ToString
pls::cs::String cs_f93784de5b5888a8(pls::cs::Ref<cs_bb652fbb61000386> cs_this) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }());
}
}
}
// M:kairo.unity.util.SecureString.ToString(kairo.unity.util.SecureString)
pls::cs::String cs_1192c1f2378de3bb(pls::cs::Ref<cs_bb652fbb61000386> v_str) { cs_init_bb652fbb61000386();
{
return ([&]() -> pls::cs::String { auto cs_conditional = v_str; if(!cs_conditional)return pls::cs::String{}; return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->ToString(); }()); }());
}
}
// M:kairo.unity.util.SecureString.ValueOf(System.String)
pls::cs::Ref<cs_bb652fbb61000386> cs_376859ff51e2fc37(pls::cs::String v_str) { cs_init_bb652fbb61000386();
{
if (([&]() { auto cs_left = pls::cs::box(v_str); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::Ref<cs_bb652fbb61000386>{};
}
return ([&]() -> pls::cs::Ref<cs_bb652fbb61000386> { auto cs_arg0 = v_str; return cs_ede7ead54c734d4c(cs_arg0); }());
}
}
// M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Boolean)
pls::cs::Array<std::uint8_t> cs_e0ccb4d263b167c0(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream,bool v_size) { cs_init_5098bfda9cf65745();
{
if (v_size) {
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }()); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }());
}
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_stream; return cs_328fe8bffc5f5352(cs_arg0); }());
}
}
// M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Int32)
pls::cs::Array<std::uint8_t> cs_d2d344ef3c486f90(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream,std::int32_t v_size) { cs_init_5098bfda9cf65745();
{
if (([&]() -> bool { auto cs_left = v_size; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return pls::cs::Array<std::uint8_t>{};
}
pls::cs::Ref<cs_fb60578b3098a284> v_byteArrayOutputStream_328 = ([&]() -> pls::cs::Ref<cs_fb60578b3098a284> { return cs_10f86e0fa81e1b57(); }());
pls::cs::Array<std::uint8_t> v_b_391 = pls::cs::Array<std::uint8_t>::make(v_size);
std::int32_t v_num_418 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num2_434 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while (([&]() -> bool { auto cs_left = v_num2_434; auto cs_right = v_size; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(v_stream); auto cs_arg0 = v_b_391; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_size; auto cs_right = v_num2_434; return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_4614e302bc22aa99(cs_arg0,cs_arg1,cs_arg2); }()); v_num_418 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_418; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
break;
}
([&]() { auto cs_old = v_num2_434; auto cs_rhs = v_num_418; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num2_434 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_418; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_byteArrayOutputStream_328); auto cs_arg0 = v_b_391; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = v_num_418; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_eeffa75bcd0cd73d(cs_arg0,cs_arg1,cs_arg2); }());
}
}
if (([&]() -> bool { auto cs_left = v_num2_434; auto cs_right = v_size; return (cs_left < cs_right); }())) {
pls::cs::throw_exception(([&]() -> pls::cs::Ref<cs_64732f8c8acf2fd3> { auto cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0072" u"\x0065" u"\x0071" u"\x0075" u"\x0065" u"\x0073" u"\x0074" u"\x005b" u"",8)); auto cs_right = pls::generated::cs_integer_string(v_size); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x0020" u"\x0072" u"\x0065" u"\x0061" u"\x0064" u"\x005b" u"",7)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::generated::cs_integer_string(v_num2_434); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); return cs_a8c0bbab413528f7(cs_arg0); }()));
}
([&]() { auto cs_value = pls::cs::Array<std::uint8_t>{}; v_b_391 = cs_value; return cs_value; }());
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(v_byteArrayOutputStream_328); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c875afd29ab2966c(cs_receiver); }());
}
}
// M:kairo.unity.util.StreamUtil.Read(java.io.InputStream)
pls::cs::Array<std::uint8_t> cs_328fe8bffc5f5352(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{
pls::cs::Ref<cs_fb60578b3098a284> v_byteArrayOutputStream_1441 = ([&]() -> pls::cs::Ref<cs_fb60578b3098a284> { return cs_10f86e0fa81e1b57(); }());
pls::cs::Array<std::uint8_t> v_array_1504 = pls::cs::Array<std::uint8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)));
while (true) {
std::int32_t v_num_1557 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(v_stream); auto cs_arg0 = v_array_1504; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = (v_array_1504).length(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_4614e302bc22aa99(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = v_num_1557; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
break;
}
if (([&]() -> bool { auto cs_left = v_num_1557; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_byteArrayOutputStream_1441); auto cs_arg0 = v_array_1504; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = v_num_1557; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_eeffa75bcd0cd73d(cs_arg0,cs_arg1,cs_arg2); }());
}
}
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(v_byteArrayOutputStream_1441); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c875afd29ab2966c(cs_receiver); }());
}
}
// M:kairo.unity.util.StreamUtil.ReadBoolean(java.io.InputStream)
bool cs_5cff189cd1a7d066(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{
return ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_stream; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }());
}
}
// M:kairo.unity.util.StreamUtil.ReadByte(java.io.InputStream)
std::int8_t cs_1207de83c3a46662(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{
return pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_stream; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()));
}
}
// M:kairo.unity.util.StreamUtil.ReadFloat(java.io.InputStream)
float cs_92c2775ee2dbf38f(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{
return ([&]() -> float { auto cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_stream; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); auto cs_arg1 = true; return cs_a5c8c88f3deaf88b(cs_arg0,cs_arg1); }());
}
}
// M:kairo.unity.util.StreamUtil.ReadInt(java.io.InputStream)
std::int32_t cs_3715f8f52a079812(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{
return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_stream; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); auto cs_arg1 = true; return cs_959917dd8cfcce1a(cs_arg0,cs_arg1); }());
}
}
// M:kairo.unity.util.StreamUtil.ReadLong(java.io.InputStream)
std::int64_t cs_faab575a7db8f157(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{
return ([&]() -> std::int64_t { auto cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_stream; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); auto cs_arg1 = true; return cs_a02a33f2a801ef0d(cs_arg0,cs_arg1); }());
}
}
// M:kairo.unity.util.StreamUtil.ReadShort(java.io.InputStream)
std::int16_t cs_1368899db48b4fc9(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{
return ([&]() -> std::int16_t { auto cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_stream; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); auto cs_arg1 = true; return cs_b051b64c7d2bd23a(cs_arg0,cs_arg1); }());
}
}
// M:kairo.unity.util.StreamUtil.ReadString(java.io.InputStream)
pls::cs::String cs_50da92fdb560017f(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{
pls::cs::Array<std::uint8_t> v_array_4109 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_stream; auto cs_arg1 = true; return cs_e0ccb4d263b167c0(cs_arg0,cs_arg1); }());
if (([&]() { auto cs_left = v_array_4109; auto cs_right = pls::cs::Array<std::uint8_t>{}; return cs_left == cs_right; }())) {
return pls::cs::String{};
}
return ([&]() -> pls::cs::String { auto cs_arg0 = v_array_4109; return cs_5d8e9e8201c04369(cs_arg0); }());
}
}
// M:kairo.unity.util.StreamUtil.ReadVector3D(java.io.InputStream)
pls::cs::Ref<cs_3c64e1d398f2e00f> cs_44850fa25c576879(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{
pls::cs::Ref<cs_3c64e1d398f2e00f> v_vector3D_3609 = ([&]() -> pls::cs::Ref<cs_3c64e1d398f2e00f> { return cs_f0250768de698879(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(v_vector3D_3609); auto cs_arg0 = ([&]() -> float { auto cs_arg0 = v_stream; return cs_92c2775ee2dbf38f(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_456e4aca00a0b62a(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(v_vector3D_3609); auto cs_arg0 = ([&]() -> float { auto cs_arg0 = v_stream; return cs_92c2775ee2dbf38f(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_229657731d66863f(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(v_vector3D_3609); auto cs_arg0 = ([&]() -> float { auto cs_arg0 = v_stream; return cs_92c2775ee2dbf38f(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ed44f0a0e2f6832a(cs_receiver,cs_arg0); }());
return v_vector3D_3609;
}
}
// M:kairo.unity.util.StreamUtil.Write(java.io.OutputStream,System.Byte[],System.Boolean)
void cs_850594681175a2d3(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,pls::cs::Array<std::uint8_t> v_data,bool v_size) { cs_init_5098bfda9cf65745();
{
if (v_size) {
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ((([&]() { auto cs_left = v_data; auto cs_right = pls::cs::Array<std::uint8_t>{}; return cs_left == cs_right; }())) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)) : (v_data).length()); cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
if (([&]() { auto cs_left = v_data; auto cs_right = pls::cs::Array<std::uint8_t>{}; return cs_left == cs_right; }())) {
return;
}
}
if (([&]() -> bool { auto cs_left = (v_data).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); auto cs_arg0 = v_data; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_109456b2dd9e2d77(cs_arg0); }());
}
}
}
// M:kairo.unity.util.StreamUtil.Write(java.io.OutputStream,System.Byte[])
void cs_242552fbbe53e929(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,pls::cs::Array<std::uint8_t> v_data) { cs_init_5098bfda9cf65745();
{
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = v_data; auto cs_arg2 = false; cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
}
// M:kairo.unity.util.StreamUtil.WriteBoolean(java.io.OutputStream,System.Boolean)
void cs_7c02733ae541274e(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,bool v_data) { cs_init_5098bfda9cf65745();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int8_t>(((v_data ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)))))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
// M:kairo.unity.util.StreamUtil.WriteByte(java.io.OutputStream,System.Byte)
void cs_c43b9bbf725f702e(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::uint8_t v_data) { cs_init_5098bfda9cf65745();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_data); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
// M:kairo.unity.util.StreamUtil.WriteByte(java.io.OutputStream,System.SByte)
void cs_e6e935ad4dd232ab(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::int8_t v_data) { cs_init_5098bfda9cf65745();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_data); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
// M:kairo.unity.util.StreamUtil.WriteFloat(java.io.OutputStream,System.Single)
void cs_07583f591da8d9cb(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,float v_data) { cs_init_5098bfda9cf65745();
{
pls::cs::Array<std::uint8_t> v_array_6774 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_data; auto cs_arg1 = true; return cs_bafe3629b7fca7f3(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_6833 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_6833; auto cs_right = (v_array_6774).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_6833; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_6833 = cs_new; return cs_old; }())) {
std::int8_t v_b_6878 = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array_6774; auto cs_index = v_i_6833; return cs_array.at(cs_index); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_b_6878); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
}
// M:kairo.unity.util.StreamUtil.WriteInt(java.io.OutputStream,System.Int32)
void cs_b87bdf680540412f(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::int32_t v_data) { cs_init_5098bfda9cf65745();
{
pls::cs::Array<std::uint8_t> v_array_5771 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_data; auto cs_arg1 = true; return cs_650130ed3a48c8b1(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_5828 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5828; auto cs_right = (v_array_5771).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5828; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5828 = cs_new; return cs_old; }())) {
std::int8_t v_b_5873 = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array_5771; auto cs_index = v_i_5828; return cs_array.at(cs_index); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_b_5873); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
}
// M:kairo.unity.util.StreamUtil.WriteLong(java.io.OutputStream,System.Int64)
void cs_6c6af002987d1423(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::int64_t v_data) { cs_init_5098bfda9cf65745();
{
pls::cs::Array<std::uint8_t> v_array_6216 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_data; auto cs_arg1 = true; return cs_afc3ba06e9b75538(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_6274 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_6274; auto cs_right = (v_array_6216).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_6274; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_6274 = cs_new; return cs_old; }())) {
std::int8_t v_b_6319 = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array_6216; auto cs_index = v_i_6274; return cs_array.at(cs_index); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_b_6319); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
}
// M:kairo.unity.util.StreamUtil.WriteShort(java.io.OutputStream,System.Int16)
void cs_74e8efcd697e2e61(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::int16_t v_data) { cs_init_5098bfda9cf65745();
{
pls::cs::Array<std::uint8_t> v_array_5320 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_data; auto cs_arg1 = true; return cs_3271310f2199f07a(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_5379 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5379; auto cs_right = (v_array_5320).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5379; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5379 = cs_new; return cs_old; }())) {
std::int8_t v_b_5424 = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array_5320; auto cs_index = v_i_5379; return cs_array.at(cs_index); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_b_5424); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
}
// M:kairo.unity.util.StreamUtil.WriteString(java.io.OutputStream,kairo.unity.util.SecureString)
void cs_be114d9236ab5d44(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,pls::cs::Ref<cs_bb652fbb61000386> v_data) { cs_init_5098bfda9cf65745();
{
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ? pls::cs::Array<std::uint8_t>{} : ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(v_data); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); return pls::generated::cs_require(cs_receiver)->GetBytes(cs_arg0); }())); auto cs_arg2 = true; cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
}
// M:kairo.unity.util.StreamUtil.WriteString(java.io.OutputStream,System.String)
void cs_c3baaa92859d30c1(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,pls::cs::String v_data) { cs_init_5098bfda9cf65745();
{
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ? pls::cs::Array<std::uint8_t>{} : ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = v_data; return pls::generated::cs_require(cs_receiver)->GetBytes(cs_arg0); }())); auto cs_arg2 = true; cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
}
// M:kairo.unity.util.StreamUtil.WriteVector3D(java.io.OutputStream,kairo.unity.m3d4.util3d.Vector3D)
void cs_e29edfec53fd6e1a(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,pls::cs::Ref<cs_3c64e1d398f2e00f> v_value) { cs_init_5098bfda9cf65745();
{
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_057460bc67f561ff(cs_receiver); }()); cs_07583f591da8d9cb(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b09e372c7963bada(cs_receiver); }()); cs_07583f591da8d9cb(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_os; auto cs_arg1 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_8c6fe63f0a32cc25(cs_receiver); }()); cs_07583f591da8d9cb(cs_arg0,cs_arg1); }());
}
}
// M:kairo.unity.util.StringUtil.Escape(System.String)
pls::cs::String cs_d7ec43a7abb0b748(pls::cs::String v_text) { cs_init_1ff3292665c8e0c4();
{
pls::cs::Ref<pls::cs::StringBuilder> v_stringBuilder_3305 = ([&]() { return pls::cs::make_ref<pls::cs::StringBuilder>(); }());
std::int32_t v_num_3349 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while (([&]() -> bool { auto cs_left = v_num_3349; auto cs_right = ([&]() -> std::int32_t { auto cs_arg0 = v_text; return cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left < cs_right); }())) {
std::int32_t v_num2_3402 = ([&]() -> std::int32_t { auto cs_arg0 = v_text; auto cs_arg1 = char16_t(92); auto cs_arg2 = v_num_3349; return pls::generated::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = v_num2_3402; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3305; auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = v_num_3349; return pls::generated::cs_substring1(cs_arg0,cs_arg1); }()); return pls::generated::cs_require(cs_receiver)->Append(cs_arg0); }());
break;
}
([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3305; auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = v_num_3349; auto cs_arg2 = v_num2_3402; return cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); return pls::generated::cs_require(cs_receiver)->Append(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num2_3402; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_arg0 = v_text; return cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left < cs_right); }())) {
char16_t v_c_3630 = ([&]() -> char16_t { auto cs_arg0 = v_text; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num2_3402; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_3630); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(92)); return (cs_left == cs_right); }())) {
([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3305; auto cs_arg0 = char16_t(92); return pls::generated::cs_require(cs_receiver)->Append(cs_arg0); }());
} else if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_3630); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(116)); return (cs_left == cs_right); }())) {
([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3305; auto cs_arg0 = char16_t(9); return pls::generated::cs_require(cs_receiver)->Append(cs_arg0); }());
} else if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_3630); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(110)); return (cs_left == cs_right); }())) {
([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3305; auto cs_arg0 = char16_t(10); return pls::generated::cs_require(cs_receiver)->Append(cs_arg0); }());
}
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num2_3402; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num_3349 = cs_value; return cs_value; }());
}
return ([&]() -> pls::cs::String { auto cs_receiver = v_stringBuilder_3305; return pls::generated::cs_require(cs_receiver)->ToString(); }());
}
}
// M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32,System.Char,System.Boolean)
pls::cs::String cs_b1be14b163e17dea(pls::cs::String v_value,std::int32_t v_len,char16_t v_padding,bool v_left) { cs_init_1ff3292665c8e0c4();
{
pls::cs::String v_text_4289 = pls::cs::String(std::u16string(u"",0));
std::int32_t v_num_4307 = (([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_padding; return cs_f8c13f883911de4b(cs_arg0); }()); return cs_a8e45b955b78e04d(cs_arg0); }())).length();
std::int32_t v_num2_4364 = ([&]() -> std::int32_t { auto cs_left = v_len; auto cs_right = (([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_value; return cs_a8e45b955b78e04d(cs_arg0); }())).length(); return pls::cs::sub_i32(cs_left,cs_right); }());
for (std::int32_t v_i_4414 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_4414; auto cs_right = v_num2_4364; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_4414; auto cs_rhs = v_num_4307; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_i_4414 = cs_value; return cs_value; }())) {
([&]() { auto cs_old = v_text_4289; auto cs_rhs = v_padding; auto cs_value = pls::cs::String::concat(cs_old,pls::generated::cs_char_string(cs_rhs)); v_text_4289 = cs_value; return cs_value; }());
}
if (v_left) {
return ([&]() { auto cs_left = v_value; auto cs_right = v_text_4289; return pls::cs::String::concat(cs_left,cs_right); }());
}
return ([&]() { auto cs_left = v_text_4289; auto cs_right = v_value; return pls::cs::String::concat(cs_left,cs_right); }());
}
}
// M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32,System.Char)
pls::cs::String cs_c6a612f36129f54a(pls::cs::String v_value,std::int32_t v_len,char16_t v_padding) { cs_init_1ff3292665c8e0c4();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = v_value; auto cs_arg1 = v_len; auto cs_arg2 = v_padding; auto cs_arg3 = false; return cs_b1be14b163e17dea(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32)
pls::cs::String cs_17904ea55a78170d(pls::cs::String v_value,std::int32_t v_len) { cs_init_1ff3292665c8e0c4();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = v_value; auto cs_arg1 = v_len; auto cs_arg2 = char16_t(32); auto cs_arg3 = false; return cs_b1be14b163e17dea(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:kairo.unity.util.StringUtil.GetCode(System.Byte[])
pls::cs::String cs_4cdefdb4e661cd56(pls::cs::Array<std::uint8_t> v_bytes) { cs_init_1ff3292665c8e0c4();
{
std::uint8_t v_recoveredPdbConstByte_6203 = pls::cs::cast_integral<std::uint8_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
pls::cs::Array<pls::cs::String> v_array_6242 = ([&](){auto cs_initial_array_517=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_517.at(0)=pls::cs::String(std::u16string(u"\x0055" u"\x0054" u"\x0046" u"\x002d" u"\x0038" u"",5));cs_initial_array_517.at(1)=pls::cs::String(std::u16string(u"\x0053" u"\x0068" u"\x0069" u"\x0066" u"\x0074" u"\x005f" u"\x004a" u"\x0049" u"\x0053" u"",9));return cs_initial_array_517;}());
if (([&]() -> bool { auto cs_left = (v_bytes).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return ([&]() { auto cs_array = v_array_6242; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
}
for (std::int32_t v_i_6359 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_6359; auto cs_right = (v_array_6242).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_6359; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_6359 = cs_new; return cs_old; }())) {
pls::cs::String v_str_6405 = ([&]() -> pls::cs::String { auto cs_arg0 = v_bytes; auto cs_arg1 = ([&]() { auto cs_array = v_array_6242; auto cs_index = v_i_6359; return cs_array.at(cs_index); }()); return cs_0b9238a3df4985af(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_str_6405; return cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
continue;
}
bool v_flag_6504 = false;
for (std::int32_t v_j_6531 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_6531; auto cs_right = ([&]() -> std::int32_t { auto cs_arg0 = v_str_6405; return cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_6531; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_6531 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() -> char16_t { auto cs_arg0 = v_str_6405; auto cs_arg1 = v_j_6531; return cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(65533)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag_6504 = cs_value; return cs_value; }());
break;
}
}
if ((!(v_flag_6504))) {
return ([&]() { auto cs_array = v_array_6242; auto cs_index = v_i_6359; return cs_array.at(cs_index); }());
}
}
std::int32_t v_num_6716 = (v_bytes).length();
std::int32_t v_num2_6743 = std::int32_t{}, v_num3_6749 = std::int32_t{}, v_num4_6755 = std::int32_t{}, v_num5_6761 = std::int32_t{};
bool v_flag2_6775 = false;
for (std::int32_t v_k_6802 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_6802; auto cs_right = v_num_6716; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_6802; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_6802 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = v_k_6802; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num2_6743 = cs_value; return cs_value; }());
if (((([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left <= cs_right); }()) || ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7full)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = true; v_flag2_6775 = cs_value; return cs_value; }());
if (((([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_k_6802; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_k_6802; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7full)); return (cs_left <= cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x0055" u"\x0054" u"\x0046" u"\x002d" u"\x0031" u"\x0036" u"",6));
}
}
}
if (v_flag2_6775) {
return pls::cs::String{};
}
bool v_flag3_7094 = true;
for (std::int32_t v_l_7120 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_7120; auto cs_right = v_num_6716; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_7120; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_7120 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = v_l_7120; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num2_6743 = cs_value; return cs_value; }());
if ((([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1bull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); auto cs_right = v_num2_6743; return (cs_left <= cs_right); }()))) {
([&]() { auto cs_value = false; v_flag3_7094 = cs_value; return cs_value; }());
break;
}
}
if (v_flag3_7094) {
return pls::cs::String(std::u16string(u"\x0041" u"\x0053" u"\x0043" u"\x0049" u"\x0049" u"",5));
}
for (std::int32_t v_m_7314 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_7314; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_7314; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_7314 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = v_m_7314; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num2_6743 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_m_7314; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num3_6749 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_m_7314; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num4_6755 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1bull)); return (cs_left != cs_right); }())) {
continue;
}
if ((([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x24ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x004a" u"\x0049" u"\x0053" u"",3));
}
if ((([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x24ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x004a" u"\x0049" u"\x0053" u"",3));
}
if ((([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return (cs_left == cs_right); }()) && ((([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4aull)); return (cs_left == cs_right); }()))))) {
return pls::cs::String(std::u16string(u"\x004a" u"\x0049" u"\x0053" u"",3));
}
if ((([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x49ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x004a" u"\x0049" u"\x0053" u"",3));
}
if (([&]() -> bool { auto cs_left = v_m_7314; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_m_7314; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num5_6761 = cs_value; return cs_value; }());
if (((([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x24ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = v_num5_6761; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x44ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x004a" u"\x0049" u"\x0053" u"",3));
}
if ((((((([&]() -> bool { auto cs_left = v_m_7314; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x26ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = v_num5_6761; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1bull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_m_7314; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x24ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_m_7314; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x004a" u"\x0049" u"\x0053" u"",3));
}
}
}
std::int32_t v_num6_8080 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num7_8097 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num8_8114 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_n_8136 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_n_8136; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_8136; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_8136 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = v_n_8136; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num2_6743 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_n_8136; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num3_6749 = cs_value; return cs_value; }());
if ((((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x81ull)); auto cs_right = v_num2_6743; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9full)); return (cs_left <= cs_right); }()))) || ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe0ull)); auto cs_right = v_num2_6743; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfcull)); return (cs_left <= cs_right); }()))))) && ((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7eull)); return (cs_left <= cs_right); }()))) || ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfcull)); return (cs_left <= cs_right); }()))))))) {
([&]() { auto cs_old = v_num6_8080; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num6_8080 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_n_8136; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_8136 = cs_new; return cs_old; }());
}
}
for (std::int32_t v_num9_8418 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num9_8418; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num9_8418; auto cs_new = pls::cs::add_i32(cs_old,1); v_num9_8418 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = v_num9_8418; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num2_6743 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num9_8418; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num3_6749 = cs_value; return cs_value; }());
if ((((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa1ull)); auto cs_right = v_num2_6743; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfeull)); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa1ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfeull)); return (cs_left <= cs_right); }()))) || (((([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8eull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa1ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdfull)); return (cs_left <= cs_right); }()))))) {
([&]() { auto cs_old = v_num7_8097; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num7_8097 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num9_8418; auto cs_new = pls::cs::add_i32(cs_old,1); v_num9_8418 = cs_new; return cs_old; }());
} else if (([&]() -> bool { auto cs_left = v_num9_8418; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num9_8418; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num4_6755 = cs_value; return cs_value; }());
if (((((([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8full)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa1ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfeull)); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa1ull)); auto cs_right = v_num4_6755; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfeull)); return (cs_left <= cs_right); }()))) {
([&]() { auto cs_old = v_num7_8097; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num7_8097 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num9_8418; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num9_8418 = cs_value; return cs_value; }());
}
}
}
for (std::int32_t v_num10_8903 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num10_8903; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num10_8903; auto cs_new = pls::cs::add_i32(cs_old,1); v_num10_8903 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = v_num10_8903; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num2_6743 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num10_8903; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num3_6749 = cs_value; return cs_value; }());
if ((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc0ull)); auto cs_right = v_num2_6743; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdfull)); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbfull)); return (cs_left <= cs_right); }()))) {
([&]() { auto cs_old = v_num8_8114; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num8_8114 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num10_8903; auto cs_new = pls::cs::add_i32(cs_old,1); v_num10_8903 = cs_new; return cs_old; }());
} else if (([&]() -> bool { auto cs_left = v_num10_8903; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num10_8903; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num4_6755 = cs_value; return cs_value; }());
if ((((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe0ull)); auto cs_right = v_num2_6743; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xefull)); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbfull)); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); auto cs_right = v_num4_6755; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbfull)); return (cs_left <= cs_right); }()))) {
([&]() { auto cs_old = v_num8_8114; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num8_8114 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num10_8903; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num10_8903 = cs_value; return cs_value; }());
}
}
}
pls::cs::Array<std::int32_t> v_array2_9360 = ([&](){auto cs_initial_array_518=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_518.at(0)=([&]() -> std::int32_t { auto cs_left = v_num8_8114; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::mul_i32(cs_left,cs_right); }());cs_initial_array_518.at(1)=([&]() -> std::int32_t { auto cs_left = v_num6_8080; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::mul_i32(cs_left,cs_right); }());return cs_initial_array_518;}());
pls::cs::Array<pls::cs::String> v_array3_9432 = ([&](){auto cs_initial_array_519=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_519.at(0)=pls::cs::String(std::u16string(u"\x0055" u"\x0054" u"\x0046" u"\x002d" u"\x0038" u"",5));cs_initial_array_519.at(1)=pls::cs::String(std::u16string(u"\x0053" u"\x0068" u"\x0069" u"\x0066" u"\x0074" u"\x005f" u"\x004a" u"\x0049" u"\x0053" u"",9));return cs_initial_array_519;}());
if (([&]() -> bool { auto cs_left = cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array2_9360; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
} else if (([&]() -> bool { auto cs_left = cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array2_9360; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
} else {
([&]() { auto cs_array = v_array2_9360; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
}
for (std::int32_t v_num11_9649 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num11_9649; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_array2_9360).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num11_9649; auto cs_new = pls::cs::add_i32(cs_old,1); v_num11_9649 = cs_new; return cs_old; }())) {
for (std::int32_t v_num12_9714 = ([&]() -> std::int32_t { auto cs_left = (v_array2_9360).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num12_9714; auto cs_right = v_num11_9649; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num12_9714; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num12_9714 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_9360; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_9714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array2_9360; auto cs_index = v_num12_9714; return cs_array.at(cs_index); }()); return (cs_left < cs_right); }())) {
std::int32_t v_num13_9832 = ([&]() { auto cs_array = v_array2_9360; auto cs_index = v_num12_9714; return cs_array.at(cs_index); }());
([&]() { auto cs_target = v_array2_9360; auto cs_index = v_num12_9714; auto cs_value = ([&]() { auto cs_array = v_array2_9360; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_9714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array2_9360; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_9714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_num13_9832; cs_target.at(cs_index) = cs_value; return cs_value; }());
pls::cs::String v_text_9942 = ([&]() { auto cs_array = v_array3_9432; auto cs_index = v_num12_9714; return cs_array.at(cs_index); }());
([&]() { auto cs_target = v_array3_9432; auto cs_index = v_num12_9714; auto cs_value = ([&]() { auto cs_array = v_array3_9432; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_9714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_9432; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_9714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_text_9942; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
for (std::int32_t v_num14_10067 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num14_10067; auto cs_right = (v_array3_9432).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num14_10067; auto cs_new = pls::cs::add_i32(cs_old,1); v_num14_10067 = cs_new; return cs_old; }())) {
bool v_flag4_10124 = false;
pls::cs::String v_str2_10150 = ([&]() -> pls::cs::String { auto cs_arg0 = v_bytes; auto cs_arg1 = ([&]() { auto cs_array = v_array3_9432; auto cs_index = v_num14_10067; return cs_array.at(cs_index); }()); return cs_0b9238a3df4985af(cs_arg0,cs_arg1); }());
for (std::int32_t v_num15_10205 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num15_10205; auto cs_right = ([&]() -> std::int32_t { auto cs_arg0 = v_str2_10150; return cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num15_10205; auto cs_new = pls::cs::add_i32(cs_old,1); v_num15_10205 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() -> char16_t { auto cs_arg0 = v_str2_10150; auto cs_arg1 = v_num15_10205; return cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(65533)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag4_10124 = cs_value; return cs_value; }());
break;
}
}
if ((!(v_flag4_10124))) {
return ([&]() { auto cs_array = v_array3_9432; auto cs_index = v_num14_10067; return cs_array.at(cs_index); }());
}
}
return pls::cs::String{};
}
}
// M:kairo.unity.util.StringUtil.GetString(System.Byte[])
pls::cs::String cs_5d8e9e8201c04369(pls::cs::Array<std::uint8_t> v_bytes) { cs_init_1ff3292665c8e0c4();
{
pls::cs::String v_code_5959 = ([&]() -> pls::cs::String { auto cs_arg0 = v_bytes; return cs_4cdefdb4e661cd56(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_code_5959); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
try {
return ([&]() -> pls::cs::String { auto cs_arg0 = v_bytes; auto cs_arg1 = v_code_5959; return cs_0b9238a3df4985af(cs_arg0,cs_arg1); }());
} catch(const pls::cs::Exception& cs_caught_516) {auto cs_exception_516=pls::cs::capture_exception(cs_caught_516);
if(pls::cs::exception_is(cs_exception_516,"System.Exception")) {{

}}
else {throw;} }
}
return ([&]() -> pls::cs::String { auto cs_arg0 = v_bytes; return cs_0062608f682073ef(cs_arg0); }());
}
}
// M:kairo.unity.util.StringUtil.LoadStringArray(java.io.InputStream,System.Boolean)
pls::cs::Array<pls::cs::String> cs_38c511d0555671a7(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream,bool v_zeroSkip) { cs_init_1ff3292665c8e0c4();
{
return ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_stream; return cs_328fe8bffc5f5352(cs_arg0); }()); return cs_0062608f682073ef(cs_arg0); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x000a" u"",1)); auto cs_arg2 = false; auto cs_arg3 = v_zeroSkip; auto cs_arg4 = false; return cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
// M:kairo.unity.util.StringUtil.LoadStringArray(kairo.unity.util.JarInflater,System.String,System.Boolean)
pls::cs::Array<pls::cs::String> cs_93446701c72d7a20(pls::cs::Ref<cs_52158c8b20364c2b> v_jar,pls::cs::String v_fileName,bool v_zeroSkip) { cs_init_1ff3292665c8e0c4();
{
pls::cs::Ref<cs_e7a5499b363ef51b> v_inputStream_4791 = pls::cs::Ref<cs_e7a5499b363ef51b>{};
return pls::cs::run_finally([&]() -> pls::cs::Array<pls::cs::String> { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_e7a5499b363ef51b> { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(v_jar); auto cs_arg0 = v_fileName; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f410f19385e7fe89(cs_receiver,cs_arg0); }()); v_inputStream_4791 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_inputStream_4791); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::Array<pls::cs::String>{};
}
return ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = v_inputStream_4791; auto cs_arg1 = v_zeroSkip; return cs_38c511d0555671a7(cs_arg0,cs_arg1); }());
} }, [&]() {
([&]() -> void { auto cs_conditional = v_inputStream_4791; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }()); }());
([&]() { auto cs_value = pls::cs::Ref<cs_e7a5499b363ef51b>{}; v_inputStream_4791 = cs_value; return cs_value; }());
});
}
}
// M:kairo.unity.util.StringUtil.LoadStringArray(kairo.unity.util.JarInflater,System.String)
pls::cs::Array<pls::cs::String> cs_aa767d3dce39dc9d(pls::cs::Ref<cs_52158c8b20364c2b> v_jar,pls::cs::String v_fileName) { cs_init_1ff3292665c8e0c4();
{
return ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = v_jar; auto cs_arg1 = v_fileName; auto cs_arg2 = false; return cs_93446701c72d7a20(cs_arg0,cs_arg1,cs_arg2); }());
}
}
// M:kairo.unity.util.StringUtil.Replace(System.String,System.String,System.String)
pls::cs::String cs_8857a152f901dbe0(pls::cs::String v_value,pls::cs::String v_oldStr,pls::cs::String v_newStr) { cs_init_1ff3292665c8e0c4();
{
while (true) {
std::int32_t v_num_567 = ([&]() -> std::int32_t { auto cs_arg0 = v_value; auto cs_arg1 = v_oldStr; return pls::cs::culture_index_of(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num_567; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
break;
}
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_arg0 = v_value; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = v_num_567; return cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_right = v_newStr; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_arg0 = v_value; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num_567; auto cs_right = ([&]() -> std::int32_t { auto cs_arg0 = v_oldStr; return cs_8eed6765a32617b7(cs_arg0); }()); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_51d6c186b8b049a1(cs_arg0,cs_arg1); }()); return pls::cs::String::concat(cs_left,cs_right); }()); v_value = cs_value; return cs_value; }());
}
return v_value;
}
}
// M:kairo.unity.util.StringUtil.Replace(System.String,System.String)
pls::cs::String cs_abfabf5a341e90ae(pls::cs::String v_value,pls::cs::String v_args) { cs_init_1ff3292665c8e0c4();
{
pls::cs::Array<pls::cs::String> v_array_253 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = v_args; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); auto cs_arg2 = false; auto cs_arg3 = false; auto cs_arg4 = false; return cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
for (std::int32_t v_i_313 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_313; auto cs_right = (v_array_253).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_313; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_313 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_value; auto cs_arg1 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x003c" u"",1)); auto cs_right = pls::generated::cs_integer_string(v_i_313); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x003e" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array_253; auto cs_index = v_i_313; return cs_array.at(cs_index); }()); auto cs_arg1 = false; return cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); return cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }()); v_value = cs_value; return cs_value; }());
}
return v_value;
}
}
// M:kairo.unity.util.StringUtil.Split(System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
pls::cs::Array<pls::cs::String> cs_0f7a7a73dac52ca4(pls::cs::String v_text,pls::cs::String v_sep,bool v_trim,bool v_excludeZeroLength,bool v_escape) { cs_init_1ff3292665c8e0c4();
{
pls::cs::Ref<cs_15e3f7b692b3f380> v_fastVector_1202{};
std::int32_t v_num_1218{};
pls::cs::String v_text2_1230{};
pls::cs::Array<pls::cs::String> v_array_1246{};
std::int32_t v_num2_1257{};
bool v_flag_1498{};
std::int32_t v_num3_1521{};
std::int32_t v_i_1974{};
std::int32_t v_num4_2067{};
std::int32_t v_j_2464{};
{
if ((([&]() { auto cs_left = pls::cs::box(v_text); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text; return cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
return pls::cs::Array<pls::cs::String>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
}
v_fastVector_1202 = pls::cs::Ref<cs_15e3f7b692b3f380>{};
v_num_1218 = std::int32_t{};
v_text2_1230 = pls::cs::String{};
v_array_1246 = pls::cs::Array<pls::cs::String>{};
v_num2_1257 = std::int32_t{};
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_15e3f7b692b3f380> { return cs_617649d3cca73756(); }()); v_fastVector_1202 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num_1218 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::String(std::u16string(u"",0)); v_text2_1230 = cs_value; return cs_value; }());
do {
cs_label_IL_0020: ;
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_text; auto cs_arg1 = v_sep; auto cs_arg2 = v_num_1218; return pls::cs::culture_index_of(cs_arg0,cs_arg1,cs_arg2); }()); v_num2_1257 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num2_1257; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_text2_1230; auto cs_rhs = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = v_num_1218; return pls::generated::cs_substring1(cs_arg0,cs_arg1); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text2_1230 = cs_value; return cs_value; }());
} else {
if (v_escape) {
v_flag_1498 = true;
v_num3_1521 = ([&]() -> std::int32_t { auto cs_left = v_num2_1257; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
while (([&]() -> bool { auto cs_left = v_num3_1521; auto cs_right = v_num_1218; return (cs_left >= cs_right); }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() -> char16_t { auto cs_arg0 = v_text; auto cs_arg1 = v_num3_1521; return cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(92)); return (cs_left != cs_right); }())) {
break;
}
([&]() { auto cs_value = (!(v_flag_1498)); v_flag_1498 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num3_1521; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_1521 = cs_new; return cs_old; }());
}
if ((!(v_flag_1498))) {
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text2_1230; auto cs_right = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = v_num_1218; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num2_1257; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_sep; return pls::cs::String::concat(cs_left,cs_right); }()); v_text2_1230 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num2_1257; auto cs_right = ([&]() -> std::int32_t { auto cs_arg0 = v_sep; return cs_8eed6765a32617b7(cs_arg0); }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num_1218 = cs_value; return cs_value; }());
goto cs_label_IL_0020;
}
}
([&]() { auto cs_old = v_text2_1230; auto cs_rhs = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = v_num_1218; auto cs_arg2 = v_num2_1257; return cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text2_1230 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num2_1257; auto cs_right = ([&]() -> std::int32_t { auto cs_arg0 = v_sep; return cs_8eed6765a32617b7(cs_arg0); }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num_1218 = cs_value; return cs_value; }());
}
if (v_escape) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text2_1230; return cs_d7ec43a7abb0b748(cs_arg0); }()); v_text2_1230 = cs_value; return cs_value; }());
}
if (v_trim) {
v_i_1974 = std::int32_t{};
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_i_1974 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_i_1974; auto cs_right = (v_text2_1230).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1974; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1974 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text2_1230; auto cs_index = v_i_1974; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(32)); return (cs_left > cs_right); }())) {
break;
}
}
v_num4_2067 = ([&]() -> std::int32_t { auto cs_left = (v_text2_1230).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
while (([&]() -> bool { auto cs_left = v_num4_2067; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text2_1230; auto cs_index = v_num4_2067; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(32)); return (cs_left > cs_right); }())) {
break;
}
([&]() { auto cs_old = v_num4_2067; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num4_2067 = cs_new; return cs_old; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num4_2067; auto cs_right = v_i_1974; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"",0)); v_text2_1230 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text2_1230; auto cs_arg1 = v_i_1974; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num4_2067; auto cs_right = v_i_1974; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); v_text2_1230 = cs_value; return cs_value; }());
}
}
if (((!(v_excludeZeroLength)) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_text2_1230; return cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_1202); auto cs_arg0 = pls::cs::box(v_text2_1230); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b6a40aa7b6cac314(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_value = pls::cs::String(std::u16string(u"",0)); v_text2_1230 = cs_value; return cs_value; }());
} while (([&]() -> bool { auto cs_left = v_num2_1257; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()));
([&]() { auto cs_value = pls::cs::Array<pls::cs::String>::make(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_1202); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_66a816fe45ab90e7(cs_receiver); }())); v_array_1246 = cs_value; return cs_value; }());
for (v_j_2464 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_2464; auto cs_right = (v_array_1246).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_2464; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_2464 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_1246; auto cs_index = v_j_2464; auto cs_value = pls::cs::unbox<pls::cs::String>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_1202); auto cs_arg0 = v_j_2464; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
return v_array_1246;
}
}
}
// M:kairo.unity.util.StringUtil.Split(System.String,System.String)
pls::cs::Array<pls::cs::String> cs_aed90764bf1359a3(pls::cs::String v_value,pls::cs::String v_sep) { cs_init_1ff3292665c8e0c4();
{
return ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = v_value; auto cs_arg1 = v_sep; auto cs_arg2 = true; auto cs_arg3 = false; auto cs_arg4 = false; return cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
// M:kairo.unity.util.StringUtil.SplitIntegers(System.String,System.String)
pls::cs::Array<std::int32_t> cs_deba8d22dc04f33a(pls::cs::String v_src,pls::cs::String v_sep) { cs_init_1ff3292665c8e0c4();
{
pls::cs::Array<pls::cs::String> v_array_5692 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = v_src; auto cs_arg1 = v_sep; auto cs_arg2 = true; auto cs_arg3 = true; auto cs_arg4 = false; return cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
pls::cs::Array<std::int32_t> v_array2_5745 = pls::cs::Array<std::int32_t>::make((v_array_5692).length());
for (std::int32_t v_i_5789 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5789; auto cs_right = (v_array2_5745).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5789; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5789 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_5745; auto cs_index = v_i_5789; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array_5692; auto cs_index = v_i_5789; return cs_array.at(cs_index); }()); return cs_2dbfed27c63e8b3d(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
return v_array2_5745;
}
}
}
