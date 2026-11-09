 auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }())))); auto cs_arg3 = static_cast<float>(pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }())))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.IsAutoGLRender
bool cs_ff50c908347e45e2() { cs_init_4a8bef2ab48b32d7();
{
return cs_042e86d7c14d33a1();
}
}
// M:kairo.unity.surface.SurfaceManagerBase.OnKeyDown(System.Int32,kairo.unity.ui.KeyEvent)
void cs_b8386c421fdf23ad(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,std::int32_t v_keyCode,pls::cs::Ref<pls::kairo::KeyEvent> v_evt) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_12776 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_12776; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_12776; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_12776 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); auto cs_arg0 = v_num_12776; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); auto cs_arg0 = v_keyCode; auto cs_arg1 = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_5bc2a6aa84d89f40(cs_arg0,cs_arg1); }());
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.OnKeyDown(System.Int32)
void cs_9082ae6a6e574dce(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,std::int32_t v_key) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_12442 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_12442; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_12442; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_12442 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); auto cs_arg0 = v_num_12442; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); auto cs_arg0 = v_key; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_e94b5958615f0bf0(cs_arg0); }());
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.OnKeyUp(System.Int32)
void cs_a945708971ce72b3(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,std::int32_t v_key) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_12600 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_12600; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_12600; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_12600 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); auto cs_arg0 = v_num_12600; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); auto cs_arg0 = v_key; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_49999cff44002120(cs_receiver,cs_arg0); }());
}
}
}
}
// M:kairo.unity.surface.TouchComponent.#ctor
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_4766c761098d0094() { cs_init_3a3d09f9e75a32d2();
{ auto cs_this = pls::cs::make_ref<cs_3a3d09f9e75a32d2>(); cs_4766c761098d0094_init(cs_this); return cs_this; }
}
void cs_4766c761098d0094_init(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this) {
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0541e8aace93207c(cs_receiver); }());
}
}
// M:kairo.unity.surface.TouchComponent.Check(System.Int32)
bool cs_458dbabeee49f986(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this,std::int32_t v_bit) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_1600 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); v_num_1600 = cs_value; return cs_value; }());
}
return ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num_1600; auto cs_right = v_bit; return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }());
}
}
}
// M:kairo.unity.surface.TouchComponent.GetId(System.Int64)
std::int32_t cs_864b2cef1e2afbf2(std::int64_t v_key) { cs_init_3a3d09f9e75a32d2();
{
return ([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_arg0 = v_key; return cs_b37fd969c7a5953c(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
}
}
// M:kairo.unity.surface.TouchComponent.GetKey
std::int64_t cs_994ec0fb562812be(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int64_t { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); return cs_e0f91f73482fc418(cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.surface.TouchComponent.GetKey(System.Int32,System.Int32)
std::int64_t cs_e0f91f73482fc418(std::int32_t v_id,std::int32_t v_value) { cs_init_3a3d09f9e75a32d2();
{
return ([&]() -> std::int64_t { auto cs_arg0 = v_id; auto cs_arg1 = v_value; return cs_d08f1252d303b1f0(cs_arg0,cs_arg1); }());
}
}
// M:kairo.unity.surface.TouchComponent.GetPriority
std::int32_t cs_c6d10dc3c886403b(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_result_1736 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48f24d93a00e0ab4; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff6ull)); v_result_1736 = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_result_1736 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); v_result_1736 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); v_result_1736 = cs_value; return cs_value; }());
}
}
return v_result_1736;
}
}
}
// M:kairo.unity.surface.TouchComponent.Init
void cs_0541e8aace93207c(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); pls::game::cs_require(cs_target)->cs_9019c7ffefab6ad8 = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_8c5afd45472d0f2e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_9326c27a92cfea3a>{}; pls::game::cs_require(cs_target)->cs_0c00171d2e322a58 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_0203776c95852fed = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_830652d422733c85 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_1ec368037b30316d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_0dcfa10d1674b264 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_2445e8abe98d39d6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_bf6f23b78c4832ac = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_6517d63c01870958>{}; pls::game::cs_require(cs_target)->cs_1d1d519d3428e730 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_91c876c3ea20d77d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_ec0be04bf6c6d5ad = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_48f24d93a00e0ab4 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.surface.TouchEvent.#ctor
pls::cs::Ref<cs_757516ce190cf813> cs_f7e61b586cae64ba() { cs_init_757516ce190cf813();
{ auto cs_this = pls::cs::make_ref<cs_757516ce190cf813>(); cs_f7e61b586cae64ba_init(cs_this); return cs_this; }
}
void cs_f7e61b586cae64ba_init(pls::cs::Ref<cs_757516ce190cf813> cs_this) {
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_757516ce190cf813>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_76be1a4ec43b41ef(cs_receiver); }());
}
}
// M:kairo.unity.surface.TouchEvent.GetHashCode
std::int32_t cs_cffdde71a559d83c(pls::cs::Ref<cs_757516ce190cf813> cs_this) { cs_init_757516ce190cf813();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:kairo.unity.surface.TouchEvent.Init
void cs_76be1a4ec43b41ef(pls::cs::Ref<cs_757516ce190cf813> cs_this) { cs_init_757516ce190cf813();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_3a3d09f9e75a32d2>{}; pls::game::cs_require(cs_target)->cs_613db60c2c58fddc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_4c4f6c2ffd41c9ca = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_514f5ce520685c7d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_5d55f15261994422 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_4760729595bf56db = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_34b944f664f45179 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_c0fba19991e5dbf1 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_right = pls::cs::Array<pls::cs::Array<std::int32_t>>{}; return cs_left != cs_right; }())) {
for (std::int32_t v_i_1270 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1270; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1270; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1270 = cs_new; return cs_old; }())) {
for (std::int32_t v_j_1341 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1341; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = v_i_1270; return cs_array.at(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1341; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1341 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = v_i_1270; return cs_array.at(cs_index); }()); auto cs_index = v_j_1341; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }()); auto cs_right = pls::cs::Array<pls::cs::Array<std::int32_t>>{}; return cs_left != cs_right; }())) {
for (std::int32_t v_k_1513 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_1513; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_1513; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_1513 = cs_new; return cs_old; }())) {
for (std::int32_t v_l_1582 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_1582; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }()); auto cs_index = v_k_1513; return cs_array.at(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_1582; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_1582 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }()); auto cs_index = v_k_1513; return cs_array.at(cs_index); }()); auto cs_index = v_l_1582; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
}
}
}
// M:kairo.unity.surface.TouchEvent.IsPositive
bool cs_b85e74354de5635b(pls::cs::Ref<cs_757516ce190cf813> cs_this) { cs_init_757516ce190cf813();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); return cs_f8630b89ac30a6e6(cs_arg0); }());
}
}
}
// M:kairo.unity.surface.TouchEvent.IsPositive(System.Int32)
bool cs_f8630b89ac30a6e6(std::int32_t v_type) { cs_init_757516ce190cf813();
{
switch (v_type) {
case 0:
case 2:
case 4:
case 7:
case 8:
case 9:
{
return true;
}
default:
{
return false;
}
}
}
}
// M:kairo.unity.surface.TouchOption.#ctor
pls::cs::Ref<cs_6517d63c01870958> cs_8d483d962b875686() { cs_init_6517d63c01870958();
{ auto cs_this = pls::cs::make_ref<cs_6517d63c01870958>(); cs_8d483d962b875686_init(cs_this); return cs_this; }
}
void cs_8d483d962b875686_init(pls::cs::Ref<cs_6517d63c01870958> cs_this) {
cs_this->cs_c71933e9bca11daa = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)));
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_aeddbf9e363c37fe(cs_receiver); }());
}
}
// M:kairo.unity.surface.TouchOption.Create
pls::cs::Ref<cs_6517d63c01870958> cs_4b4ad350b14ef767() { cs_init_6517d63c01870958();
{
pls::cs::Ref<cs_6517d63c01870958> v_touchOption_2240 = pls::cs::Ref<cs_6517d63c01870958>{};
for (std::int32_t v_i_2272 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2272; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2272; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2272 = cs_new; return cs_old; }())) {
if ((!(([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678()); auto cs_arg0 = v_i_2272; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a404a90eff0aeb13; }())))) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678()); auto cs_arg0 = v_i_2272; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }()); v_touchOption_2240 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(v_touchOption_2240); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_aeddbf9e363c37fe(cs_receiver); }());
break;
}
}
if (([&]() { auto cs_left = pls::cs::box(v_touchOption_2240); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678()); auto cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_8d483d962b875686(); }()); v_touchOption_2240 = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_7969ffc067486ca6(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = v_touchOption_2240; auto cs_value = true; pls::game::cs_require(cs_target)->cs_a404a90eff0aeb13 = cs_value; return cs_value; }());
return v_touchOption_2240;
}
}
// M:kairo.unity.surface.TouchOption.Create(System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_93c9e5f80bde9aac(std::int32_t v_flag) { cs_init_6517d63c01870958();
{
pls::cs::Ref<cs_6517d63c01870958> v_touchOption_2974 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }());
([&]() { auto cs_target = v_touchOption_2974; auto cs_value = v_flag; pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
return v_touchOption_2974;
}
}
// M:kairo.unity.surface.TouchOption.Create(System.Int32[])
pls::cs::Ref<cs_6517d63c01870958> cs_7ff4169f9e726138(pls::cs::Array<std::int32_t> v_args) { cs_init_6517d63c01870958();
{
pls::cs::Ref<cs_6517d63c01870958> v_touchOption_2646 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }());
([&]() { auto cs_target = v_touchOption_2646; auto cs_value = v_args; pls::game::cs_require(cs_target)->cs_b5f7390e18875f50 = cs_value; return cs_value; }());
return v_touchOption_2646;
}
}
// M:kairo.unity.surface.TouchOption.Init
void cs_aeddbf9e363c37fe(pls::cs::Ref<cs_6517d63c01870958> cs_this) { cs_init_6517d63c01870958();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_0ae43c28ac9b9a7a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_9581916698464411 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_bc3ed6e7ac2c682a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_b5f7390e18875f50 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_907bdb29f23c20f6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_f1365c978e9c4cae = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_58d9bdebab2ca99e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_4be9171376316f3b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_a404a90eff0aeb13 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_4d04dab5735542a9 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.system.lineup.ui.LineupData.GetExplain
pls::cs::String cs_0ee8c20531783d1b(pls::cs::Ref<cs_fd683372658feff4> cs_this) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7b5ebddf22953059; }());
}
}
}
// M:kairo.unity.system.lineup.ui.LineupData.GetImage
pls::cs::Ref<pls::kairo::Image> cs_aeee5b62db0f8f41(pls::cs::Ref<cs_fd683372658feff4> cs_this) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de2327fcc8b4451b; }());
}
}
}
// M:kairo.unity.system.lineup.ui.LineupManager.#ctor
pls::cs::Ref<cs_1ab688350081022a> cs_c91e4943a0e046f2() { cs_init_1ab688350081022a();
{ auto cs_this = pls::cs::make_ref<cs_1ab688350081022a>(); cs_c91e4943a0e046f2_init(cs_this); return cs_this; }
}
void cs_c91e4943a0e046f2_init(pls::cs::Ref<cs_1ab688350081022a> cs_this) {
cs_this->cs_02dbac76cf838af6 = pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
cs_this->cs_f51be28da9a279d7 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
cs_this->cs_107cdef48659996d = pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
{

}
}
// M:kairo.unity.ui.Balloon.set_Text(System.String)
void cs_bc64dbfb155d02c7(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::String v_value) { cs_init_96c54d9323f24f8e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_value; auto cs_arg1 = pls::cs::String(std::u16string(u"",0)); return cs_334563e946ad4962(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_1d5abc90d11ab0c5 = cs_value; return cs_value; }());
}
}
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
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = v_i_7409; return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_matrix_7374; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = v_i_7409; return cs_array.at(cs_index); }()); return (cs_left != cs_right); }())) {
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
// M:kairo.unity.ui.Matrix.Reset
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_6d52e21bbbc1b83b(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_arg0 = pls::cs::box(cs_973a19e093bc0fda()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = (cs_973a19e093bc0fda()).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
return cs_this;
}
}
}
// M:kairo.unity.ui.ResourceManager._init
void cs_91c7f060c04f2ce6(pls::cs::Ref<cs_b728593e3dcffe31> cs_this) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); auto cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2ad8afd403d5dfb4(cs_receiver,cs_arg0); }());
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::String>> { auto cs_arg0 = ([&](){auto cs_initial_array_693=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_693.at(0)=(cs_5e2555ff8a760a8f()).length();cs_initial_array_693.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));return cs_initial_array_693;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<pls::cs::String>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_6a7748b1a6612d58 = cs_value; return cs_value; }());
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
([&]() -> void { auto cs_arg0 = pls::cs::box(cs_5e2555ff8a760a8f()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(cs_bd0c9538929cdd1c()); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = (cs_5e2555ff8a760a8f()).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
if (([&]() { auto cs_left = pls::cs::box(v_imgList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_imgList; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(v_sebList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_sebList; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(v_sndList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_sndList; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(v_figList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = v_figList; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(v_actList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = v_actList; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(v_texList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = v_texList; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(v_grpList); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_bd0c9538929cdd1c(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = v_grpList; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_91c7f060c04f2ce6(cs_receiver); }());
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
// M:kairo.unity.ui.Seb.ConvBufferToSprite(System.Int32,System.Int32[])
pls::cs::Array<std::int32_t> cs_3c28d7a96403fe84(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this,std::int32_t v_index,pls::cs::Array<std::int32_t> v_sprite) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_index; return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
std::int32_t v_num_23423 = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mul_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int8_t>(std::uint64_t(0xffffffffffffff80ull))); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); return (cs_left | cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
std::int32_t v_num2_23677 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::mul_i32(cs_left,cs_right); }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4270f05b25bc352d; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_23677; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return (cs_left & cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_23423; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::shr_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b87c65d3746a352; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff8ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b87c65d3746a352; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff8ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_sprite; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
return v_sprite;
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
([&]() { auto cs_target = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int16_t>((([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>((([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69c7294e79fb5155; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffff000000000000ull)); return (cs_left & cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30ull)); return pls::cs::shr_u64(cs_left,cs_right); }())))); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int16_t>((([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>((([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69c7294e79fb5155; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffff00000000ull)); return (cs_left & cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::cs::shr_u64(cs_left,cs_right); }())))); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int16_t>((([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>((([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69c7294e79fb5155; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shr_u64(cs_left,cs_right); }())))); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int16_t>((([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69c7294e79fb5155; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffull))); return (cs_left & cs_right); }())))); cs_target.at(cs_index) = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b87c65d3746a352; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b87c65d3746a352; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_getBoundingRectI_result_13507; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int8_t>(std::uint64_t(0xffffffffffffff80ull))); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); v_num_14417 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ee331dc730bd3cd; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ee331dc730bd3cd; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ee331dc730bd3cd; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ee331dc730bd3cd; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c38ed7767bcbc4c5; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_14417; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b87c65d3746a352; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()))); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b87c65d3746a352; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::neg_i32(([&]() { auto cs_array = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_getBoundingRect_result_14340; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()))); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = v_workValue_16792; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a629158f3074ad89; }()); auto cs_right = pls::cs::Array<pls::cs::Array<std::int32_t>>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = v_workValue_16792; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_arg0 = ([&](){auto cs_initial_array_390=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_390.at(0)=([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a9047ac84bcd384a(cs_receiver); }());cs_initial_array_390.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));return cs_initial_array_390;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_a629158f3074ad89 = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_right = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}; return cs_left != cs_right; }())) {
for (std::int32_t v_i_17006 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_17006; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_17006; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_17006 = cs_new; return cs_old; }())) {
std::int32_t v_num_17052 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_i_17006; return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
if (([&]() -> bool { auto cs_left = v_num_17052; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
break;
}
if (([&]() -> bool { auto cs_left = v_num_17052; auto cs_right = v_frameNo; return (cs_left == cs_right); }())) {
pls::cs::Array<std::int32_t> v_array_17171 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_i_17006; return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }());
for (std::int32_t v_num2_17213 = ([&]() -> std::int32_t { auto cs_left = v_i_17006; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num2_17213; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num2_17213; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_17213 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num2_17213; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_num2_17213; return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = v_array_17171; cs_target.at(cs_index) = cs_value; return cs_value; }());
return ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }());
}
}
pls::cs::Array<std::int32_t> v_array2_17406 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }());
for (std::int32_t v_num3_17463 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num3_17463; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num3_17463; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_17463 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_num3_17463; return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_17463; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = v_array2_17406; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
pls::cs::Array<std::int32_t> v_array3_17620 = (((([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_right = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}; return cs_left != cs_right; }())) ? ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }()) : ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_workValue_16792; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a629158f3074ad89; }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }())));
std::int32_t v_num4_17703 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num5_17720 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num6_17737 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num7_17754 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num8_17771 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }());
std::int32_t v_num9_17806 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_lineNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }())).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_lineNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num9_17806 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num8_17771; auto cs_right = v_num9_17806; return (cs_left > cs_right); }())) {
return pls::cs::Array<std::int32_t>{};
}
if ((([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num8_17771; return cs_array.at(cs_index); }())); return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num9_17806; return cs_array.at(cs_index); }())); return (cs_left > cs_right); }()))) {
return pls::cs::Array<std::int32_t>{};
}
if (([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }())) {
while (true) {
std::int32_t v_num10_18136 = ([&]() -> std::int32_t { auto cs_left = v_num8_17771; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num9_17806; auto cs_right = v_num8_17771; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
if ((([&]() -> bool { auto cs_left = v_num10_18136; auto cs_right = v_num8_17771; return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num10_18136; return cs_array.at(cs_index); }())); auto cs_right = v_frameNo; return (cs_left == cs_right); }()))) {
break;
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num10_18136; return cs_array.at(cs_index); }())); auto cs_right = v_frameNo; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_num10_18136; v_num8_17771 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = v_num10_18136; v_num9_17806 = cs_value; return cs_value; }());
}
}
}
for (std::int32_t v_num11_18398 = v_num8_17771, v_num12_18412 = ([&]() -> std::int32_t { auto cs_left = v_num8_17771; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num11_18398; auto cs_right = v_num9_17806; return (cs_left <= cs_right); }()); ) {
if (([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num11_18398; return cs_array.at(cs_index); }())); return (cs_left == cs_right); }())) {
([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); auto cs_arg0 = v_num11_18398; auto cs_arg1 = v_array3_17620; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c28d7a96403fe84(cs_receiver,cs_arg0,cs_arg1); }());
return v_array3_17620;
}
if (([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num11_18398; return cs_array.at(cs_index); }())); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num11_18398; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num4_17703 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num11_18398; v_num5_17720 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num5_17720; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num4_17703; return cs_array.at(cs_index); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num6_17737 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num4_17703; return cs_array.at(cs_index); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num7_17754 = cs_value; return cs_value; }());
break;
}
([&]() { auto cs_old = v_num11_18398; auto cs_new = pls::cs::add_i32(cs_old,1); v_num11_18398 = cs_new; return cs_old; }());
([&]() { auto cs_old = v_num12_18412; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num12_18412 = cs_value; return cs_value; }());
}
pls::cs::Ref<cs_672083a5397f2913> v_workStaticValue_18821 = ([&]() -> pls::cs::Ref<cs_672083a5397f2913> { return cs_eac2553adb9adb2d(); }());
pls::cs::Array<std::int32_t> v_array4_18870 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); auto cs_arg0 = v_num4_17703; auto cs_arg1 = ([&]() { auto cs_receiver = v_workStaticValue_18821; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_868c2bf8c835789a; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c28d7a96403fe84(cs_receiver,cs_arg0,cs_arg1); }());
pls::cs::Array<std::int32_t> v_array5_18945 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); auto cs_arg0 = v_num5_17720; auto cs_arg1 = ([&]() { auto cs_receiver = v_workStaticValue_18821; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_13421d3977fbd718; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c28d7a96403fe84(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_frameNo; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_18945; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num6_17737; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num7_17754; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_18945; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num6_17737; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num7_17754; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_18945; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num6_17737; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num7_17754; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_18945; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num6_17737; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num7_17754; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_18945; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num6_17737; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num7_17754; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_18945; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num6_17737; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num7_17754; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_17620; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = ([&]() { auto cs_array = v_array4_18870; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_workStaticValue_20017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_892fee32e48ccc2a; }()); auto cs_index = v_i_20220; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_arg0 = ([&](){auto cs_initial_array_242=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_242.at(0)=v_i_20220;cs_initial_array_242.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));return cs_initial_array_242;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_right = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}; return cs_left != cs_right; }())) {
for (std::int32_t v_j_20406 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_20406; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_20406; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_20406 = cs_new; return cs_old; }())) {
std::int32_t v_num2_20452 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_j_20406; return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
if (([&]() -> bool { auto cs_left = v_num2_20452; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
break;
}
if (([&]() -> bool { auto cs_left = v_num2_20452; auto cs_right = v_frameNo; return (cs_left == cs_right); }())) {
pls::cs::Array<std::int32_t> v_array_20574 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_j_20406; return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }());
for (std::int32_t v_num3_20616 = ([&]() -> std::int32_t { auto cs_left = v_j_20406; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num3_20616; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num3_20616; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_20616 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_20616; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_num3_20616; return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = v_array_20574; cs_target.at(cs_index) = cs_value; return cs_value; }());
return ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }());
}
}
pls::cs::Array<std::int32_t> v_array2_20809 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }());
for (std::int32_t v_num4_20866 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num4_20866; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num4_20866; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num4_20866 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_num4_20866; return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num4_20866; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; auto cs_value = v_array2_20809; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
pls::cs::Array<std::int32_t> v_array3_21023 = (((([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_right = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}; return cs_left != cs_right; }())) ? ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }()) : ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_workStaticValue_20017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_892fee32e48ccc2a; }()); auto cs_index = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }())).length(); return cs_array.at(cs_index); }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }())));
std::int32_t v_num5_21132 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num6_21149 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num7_21166 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num8_21183 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num9_21200 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }()); auto cs_index = v_lineNo; return cs_array.at(cs_index); }());
std::int32_t v_num10_21235 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0864d2eb25ed95b7; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_lineNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }())).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_53963218095f989a; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_lineNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num10_21235 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num9_21200; auto cs_right = v_num10_21235; return (cs_left > cs_right); }())) {
return pls::cs::Array<std::int32_t>{};
}
if ((([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num9_21200; return cs_array.at(cs_index); }())); return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num10_21235; return cs_array.at(cs_index); }())); return (cs_left > cs_right); }()))) {
return pls::cs::Array<std::int32_t>{};
}
if (([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }())) {
while (true) {
std::int32_t v_num11_21569 = ([&]() -> std::int32_t { auto cs_left = v_num9_21200; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num10_21235; auto cs_right = v_num9_21200; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
if ((([&]() -> bool { auto cs_left = v_num11_21569; auto cs_right = v_num9_21200; return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num11_21569; return cs_array.at(cs_index); }())); auto cs_right = v_frameNo; return (cs_left == cs_right); }()))) {
break;
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num11_21569; return cs_array.at(cs_index); }())); auto cs_right = v_frameNo; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_num11_21569; v_num9_21200 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = v_num11_21569; v_num10_21235 = cs_value; return cs_value; }());
}
}
}
for (std::int32_t v_num12_21833 = v_num9_21200, v_num13_21847 = ([&]() -> std::int32_t { auto cs_left = v_num9_21200; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num12_21833; auto cs_right = v_num10_21235; return (cs_left <= cs_right); }()); ) {
if (([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num12_21833; return cs_array.at(cs_index); }())); return (cs_left == cs_right); }())) {
([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); auto cs_arg0 = v_num12_21833; auto cs_arg1 = v_array3_21023; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c28d7a96403fe84(cs_receiver,cs_arg0,cs_arg1); }());
return v_array3_21023;
}
if (([&]() -> bool { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num12_21833; return cs_array.at(cs_index); }())); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num12_21833; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num5_21132 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num12_21833; v_num6_21149 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num6_21149; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num5_21132; return cs_array.at(cs_index); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num7_21166 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_frameNo; auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3d82d8b64a51d13d; }()); auto cs_index = v_num5_21132; return cs_array.at(cs_index); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num8_21183 = cs_value; return cs_value; }());
break;
}
([&]() { auto cs_old = v_num12_21833; auto cs_new = pls::cs::add_i32(cs_old,1); v_num12_21833 = cs_new; return cs_old; }());
([&]() { auto cs_old = v_num13_21847; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num13_21847 = cs_value; return cs_value; }());
}
pls::cs::Array<std::int32_t> v_array4_22247 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); auto cs_arg0 = v_num5_21132; auto cs_arg1 = ([&]() { auto cs_receiver = v_workStaticValue_20017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_868c2bf8c835789a; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c28d7a96403fe84(cs_receiver,cs_arg0,cs_arg1); }());
pls::cs::Array<std::int32_t> v_array5_22322 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); auto cs_arg0 = v_num6_21149; auto cs_arg1 = ([&]() { auto cs_receiver = v_workStaticValue_20017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_13421d3977fbd718; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c28d7a96403fe84(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_frameNo; cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_22322; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num7_21166; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num8_21183; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_22322; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num7_21166; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num8_21183; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_22322; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num7_21166; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num8_21183; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_22322; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num7_21166; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num8_21183; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_22322; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num7_21166; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num8_21183; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array5_22322; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num7_21166; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = v_num8_21183; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1000ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_array3_21023; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_value = ([&]() { auto cs_array = v_array4_22247; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = v_workValue_15727; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a629158f3074ad89; }()); auto cs_right = pls::cs::Array<pls::cs::Array<std::int32_t>>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = v_workValue_15727; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_arg0 = ([&](){auto cs_initial_array_389=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_389.at(0)=v_layersNum_15762;cs_initial_array_389.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));return cs_initial_array_389;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_a629158f3074ad89 = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = v_workValue_15727; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_577d4cc58848f157; }()); auto cs_right = pls::cs::Array<pls::cs::Array<std::int32_t>>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = v_workValue_15727; auto cs_value = pls::cs::Array<pls::cs::Array<std::int32_t>>::make(v_layersNum_15762); pls::game::cs_require(cs_target)->cs_577d4cc58848f157 = cs_value; return cs_value; }());
}
for (std::int32_t v_i_16014 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_16014; auto cs_right = v_layersNum_15762; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_16014; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_16014 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_workValue_15727; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_577d4cc58848f157; }()); auto cs_index = v_i_16014; auto cs_value = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); auto cs_arg0 = v_frameNo; auto cs_arg1 = v_i_16014; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f424f89d435cbb04(cs_receiver,cs_arg0,cs_arg1); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
if ((([&]() { auto cs_left = ([&]() { auto cs_receiver = v_workStaticValue_16205; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46be5d13750c48b7; }()); auto cs_right = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_workStaticValue_16205; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46be5d13750c48b7; }())).length(); auto cs_right = v_layersNum_16252; return (cs_left <= cs_right); }()))) {
([&]() { auto cs_target = v_workStaticValue_16205; auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::make(([&]() -> std::int32_t { auto cs_left = v_layersNum_16252; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->cs_46be5d13750c48b7 = cs_value; return cs_value; }());
for (std::int32_t v_i_16443 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_16443; auto cs_right = (([&]() { auto cs_receiver = v_workStaticValue_16205; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46be5d13750c48b7; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_16443; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_16443 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_workStaticValue_16205; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46be5d13750c48b7; }()); auto cs_index = v_i_16443; auto cs_value = pls::cs::Array<pls::cs::Array<std::int32_t>>::make(v_i_16443); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
pls::cs::Array<pls::cs::Array<std::int32_t>> v_array_16567 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_workStaticValue_16205; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46be5d13750c48b7; }()); auto cs_index = v_layersNum_16252; return cs_array.at(cs_index); }());
for (std::int32_t v_j_16623 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_16623; auto cs_right = v_layersNum_16252; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_16623; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_16623 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_16567; auto cs_index = v_j_16623; auto cs_value = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); auto cs_arg0 = v_frameNo; auto cs_arg1 = v_j_16623; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_540790251ab6ceed(cs_receiver,cs_arg0,cs_arg1); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
// M:kairo.unity.ui.Seb.SetClip(System.Int32,System.Int32,System.Int32,System.Int32)
void cs_03c8433bb30c2de8(std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h) { cs_init_9cade6927d6e0bf3();
{

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
cs_this->cs_892fee32e48ccc2a = ([&](){auto cs_initial_array_241=pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::make(1);cs_initial_array_241.at(0)=pls::cs::Array<pls::cs::Array<std::int32_t>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));return cs_initial_array_241;}());
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
// M:kairo.unity.ui.TextFormat.GetAnchor(System.Int32)
std::int32_t cs_cb4539652f78b54c(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,std::int32_t v_anchor) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7151221c9064cfc; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return v_anchor;
}
if (([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7151221c9064cfc; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_anchor; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::generated::cs_14daf94c5cc9a117(cs_arg0,cs_arg1); }()); v_anchor = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7151221c9064cfc; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x70ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_anchor; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x70ull)); return pls::generated::cs_14daf94c5cc9a117(cs_arg0,cs_arg1); }()); v_anchor = cs_value; return cs_value; }());
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
return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(cs_this); auto cs_arg0 = v_x; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_110453e9e91b0c62; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4217cc125b778a87(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.ui.TextFormat.GetXY(System.Single,System.Int32[])
float cs_4217cc125b778a87(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,float v_basis,pls::cs::Array<std::int32_t> v_elem) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = v_elem; auto cs_right = pls::cs::Array<std::int32_t>{}; return cs_left == cs_right; }())) {
return v_basis;
}
float v_num_1833 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_right = pls::game::cs_f32(0x41200000u); return (cs_left / cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return v_num_1833;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
return ([&]() -> float { auto cs_left = v_basis; auto cs_right = v_num_1833; return (cs_left + cs_right); }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
return ([&]() -> float { auto cs_left = v_basis; auto cs_right = v_num_1833; return (cs_left - cs_right); }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
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
return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(cs_this); auto cs_arg0 = v_y; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ee2adc9e2cf23dac; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4217cc125b778a87(cs_receiver,cs_arg0,cs_arg1); }());
}
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
([&]() { auto cs_target = pls::generated::cs_0ee869b1ec0c9fc3(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>((([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>(v_value); auto cs_right = v_num_1995; return (cs_left & cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::cs::shr_i64(cs_left,cs_right); }()))); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = pls::generated::cs_0ee869b1ec0c9fc3(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffffffffull))); return (cs_left & cs_right); }()))); cs_target.at(cs_index) = cs_value; return cs_value; }());
return pls::generated::cs_0ee869b1ec0c9fc3();
}
}
// M:kairo.unity.util.Language.English
bool cs_dea1d8116ed5aaf1() { pls::generated::cs_init_72d9658ed61145d6();
{
return ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { return pls::generated::cs_f2f74213ca1ea9bc(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }());
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
// M:kairo.unity.util.Language.LT(System.String,System.String)
pls::cs::String cs_334563e946ad4962(pls::cs::String v_text,pls::cs::String v_arg) { pls::generated::cs_init_72d9658ed61145d6();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); auto cs_arg1 = v_arg; return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());
}
}
// M:kfw.panel.MainPanel.#ctor
pls::cs::Ref<cs_8bf13b560e1e05e9> cs_3afc5298ce4a3e84() { cs_init_8bf13b560e1e05e9();
{ auto cs_this = pls::cs::make_ref<cs_8bf13b560e1e05e9>(); cs_3afc5298ce4a3e84_init(cs_this); return cs_this; }
}
void cs_3afc5298ce4a3e84_init(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this) {
cs_this->cs_ce90b55fbd071e4f = ([&](){auto cs_initial_array_656=pls::cs::Array<char16_t>::make(4);cs_initial_array_656.at(0)=char16_t(47);cs_initial_array_656.at(1)=char16_t(124);cs_initial_array_656.at(2)=char16_t(60);cs_initial_array_656.at(3)=char16_t(62);return cs_initial_array_656;}());
cs_this->cs_cbcfd5b19b2bb127 = pls::cs::String(std::u16string(u"\x540d" u"\x524d" u"",2));
cs_this->cs_210652685e2645f7 = true;
cs_this->cs_4c3b911964e18cd8 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
cs_this->cs_be69170f8edbb93d = pls::cs::Array<pls::cs::String>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)));
([&]() { cs_429433773226956d_init(std::static_pointer_cast<cs_d37bccc1c3814fc6>(cs_this)); }());
{

}
}
// M:main.AppData.#ctor
pls::cs::Ref<cs_2ffa6f51468590ea> cs_2f5492a9dea0a4ac() { cs_init_2ffa6f51468590ea();
{ auto cs_this = pls::cs::make_ref<cs_2ffa6f51468590ea>(); cs_2f5492a9dea0a4ac_init(cs_this); return cs_this; }
}
void cs_2f5492a9dea0a4ac_init(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) {
cs_this->cs_d2755abb70d3cbb1 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
cs_this->cs_92421d82e73ceb9b = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
cs_this->cs_785744431b3607a3 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)));
cs_this->cs_4e9d5679c831c705 = pls::cs::Array<pls::cs::Ref<cs_80d72c9d6f5bfcfe>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
cs_this->cs_d242149a00592f6d = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
cs_this->cs_64448a7513b68aab = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_arg0 = pls::assets::baked_array<std::int32_t>("074ff2d73079d4e1b1d5224634285910b388794c0289909f0d69c222067a6437"); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }());
cs_this->cs_797d22d4c2c75df4 = pls::cs::Array<std::uint8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3c0ull)));
cs_this->cs_a983c6db567ab7de = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_arg0 = pls::assets::baked_array<std::int32_t>("eee543da22bc07c12909cadcf4bcf7750efa44accabb09bc8eb1423b5c215d1c"); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }());
cs_this->cs_298939cfc85b5145 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));
cs_this->cs_7ca29017940553a1 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));
cs_this->cs_0b827d5204787c3d = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));
cs_this->cs_5dc879bb5d27cbe7 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));
cs_this->cs_7aabaf6601189f0f = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)));
cs_this->cs_b7fccfa2cdbb09c7 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));
cs_this->cs_493f330cb256debe = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)));
cs_this->cs_cd44e68e98d12f50 = pls::cs::String(std::u16string(u"\xff11" u"\xff12" u"\xff13" u"\xff14" u"\xff15" u"\xff16" u"\xff17" u"\xff18" u"",8));
cs_this->cs_ddbc612abf18f44b = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
cs_this->cs_2efb0e1b362e0a2d = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
{}
}
// M:main.AppData.AddDebugLog(System.String)
void cs_761ec71a552eb9f1(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_debug_log) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2efb0e1b362e0a2d; }())); auto cs_arg0 = pls::cs::box(v_debug_log); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2efb0e1b362e0a2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2efb0e1b362e0a2d; }())); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
}
}
}
// M:main.AppData.AddEffectCharge(System.Int32,System.Int32)
void cs_86b62a177bc68aa7(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_sx,std::int32_t v_sy) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_617=pls::cs::Array<std::int32_t>::make(4);cs_initial_array_617.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_initial_array_617.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_617.at(2)=v_sx;cs_initial_array_617.at(3)=v_sy;return cs_initial_array_617;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddEffectExpUp(System.Int32,System.Int32)
void cs_2a18809110a77dfa(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_pId,std::int32_t v_value) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_num_83961 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_c1ec402e91d50020(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_c1ec402e91d50020(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_2cfd34acbad021cb(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_07c786b53599514c(cs_arg0,cs_arg1); }());
float v_num2_84058 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_c1ec402e91d50020(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_c1ec402e91d50020(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_2cfd34acbad021cb(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_546689cbdcc8fcf7(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_634=pls::cs::Array<std::int32_t>::make(6);cs_initial_array_634.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull));cs_initial_array_634.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_634.at(2)=v_pId;cs_initial_array_634.at(3)=v_value;cs_initial_array_634.at(4)=pls::cs::conv_i32(v_num_83961);cs_initial_array_634.at(5)=pls::cs::conv_i32(v_num2_84058);return cs_initial_array_634;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddEffectLvUp(System.Int32,System.Int32)
void cs_2cb4b892e0d44f7c(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_wait,std::int32_t v_pId) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_635=pls::cs::Array<std::int32_t>::make(3);cs_initial_array_635.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));cs_initial_array_635.at(1)=pls::cs::neg_i32(v_wait);cs_initial_array_635.at(2)=v_pId;return cs_initial_array_635;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddEffectMoneyUp(System.Int32,System.Int32,System.Int32)
void cs_d8b75a46ef60025e(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_sx,std::int32_t v_sy,std::int32_t v_value) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_num_84715 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_8ce867d8b305e33e(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_8ce867d8b305e33e(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_055caef899588fb7(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_07c786b53599514c(cs_arg0,cs_arg1); }());
float v_num2_84818 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_8ce867d8b305e33e(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_8ce867d8b305e33e(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_055caef899588fb7(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_546689cbdcc8fcf7(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_636=pls::cs::Array<std::int32_t>::make(7);cs_initial_array_636.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull));cs_initial_array_636.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_636.at(2)=v_sx;cs_initial_array_636.at(3)=v_sy;cs_initial_array_636.at(4)=v_value;cs_initial_array_636.at(5)=pls::cs::conv_i32(v_num_84715);cs_initial_array_636.at(6)=pls::cs::conv_i32(v_num2_84818);return cs_initial_array_636;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddEffectRpUp(System.Int32,System.Int32,System.Int32,System.Int32)
void cs_e5421c7604ea06c7(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_sx,std::int32_t v_sy,std::int32_t v_rId,std::int32_t v_value) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_num_84336 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_9b1757f20ba401c4(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_9b1757f20ba401c4(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_8838d68b05fe9d2a(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_07c786b53599514c(cs_arg0,cs_arg1); }());
float v_num2_84430 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_9b1757f20ba401c4(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_9b1757f20ba401c4(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_8838d68b05fe9d2a(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_546689cbdcc8fcf7(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_637=pls::cs::Array<std::int32_t>::make(8);cs_initial_array_637.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull));cs_initial_array_637.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_637.at(2)=v_sx;cs_initial_array_637.at(3)=v_sy;cs_initial_array_637.at(4)=v_rId;cs_initial_array_637.at(5)=v_value;cs_initial_array_637.at(6)=pls::cs::conv_i32(v_num_84336);cs_initial_array_637.at(7)=pls::cs::conv_i32(v_num2_84430);return cs_initial_array_637;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddEffectShoot(System.Int32,System.Int32)
void cs_6dd3f8c8daa64856(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_sx,std::int32_t v_sy) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_592=pls::cs::Array<std::int32_t>::make(4);cs_initial_array_592.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_592.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_592.at(2)=v_sx;cs_initial_array_592.at(3)=v_sy;return cs_initial_array_592;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddEffectTUp(System.Int32,System.Int32,System.Int32)
void cs_a5e7f77e2eb2a2d6(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_TAreaCoatNo,std::int32_t v_pId,std::int32_t v_t_index) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_num_83484 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_ec49e4ede4fa2f6b(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_ec49e4ede4fa2f6b(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_728aa1cb5546b430(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_07c786b53599514c(cs_arg0,cs_arg1); }());
float v_num2_83575 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_ec49e4ede4fa2f6b(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_ec49e4ede4fa2f6b(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_728aa1cb5546b430(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_546689cbdcc8fcf7(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_638=pls::cs::Array<std::int32_t>::make(6);cs_initial_array_638.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));cs_initial_array_638.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_638.at(2)=v_pId;cs_initial_array_638.at(3)=v_t_index;cs_initial_array_638.at(4)=pls::cs::conv_i32(v_num_83484);cs_initial_array_638.at(5)=pls::cs::conv_i32(v_num2_83575);return cs_initial_array_638;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddMoney(System.Int32,System.Int32)
std::int64_t cs_c55d45b06296c39b(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_add,std::int32_t v_recordId) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int64_t { auto cs_arg0 = ([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(v_add); return pls::cs::add_i64(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x8000000000000000ull)); auto cs_arg2 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x7fffffffffffffffull)); return cs_8416d639bc6d5b2c(cs_arg0,cs_arg1,cs_arg2); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_35ab145223dfa9ea()); auto cs_arg0 = v_recordId; auto cs_arg1 = v_add; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dad1bfeaacb9641a(cs_receiver,cs_arg0,cs_arg1); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f9661335e04b605e(cs_receiver); }()); return (cs_left > cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e1e9cde920cf8975(cs_receiver,cs_arg0); }());
}
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
}
}
}
// M:main.AppData.AddPopupScriptBuffer(System.Int32[],System.Int32,System.String)
void cs_d130abd124b700c6(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::int32_t> v_script,std::int32_t v_popId,pls::cs::String v_popMsg) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = v_script; auto cs_right = pls::cs::Array<std::int32_t>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); v_script = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(v_popMsg); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::cs::String(u""); v_popMsg = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6e73306221e03084; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_639=pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::make(3);cs_initial_array_639.at(0)=pls::cs::box(v_script);cs_initial_array_639.at(1)=pls::cs::box(([&]() -> pls::cs::Ref<pls::generated::cs_7de6788b61a5af56> { auto cs_arg0 = v_popId; return pls::generated::cs_6ebf505bf86af890(cs_arg0); }()));cs_initial_array_639.at(2)=pls::cs::box(v_popMsg);return cs_initial_array_639;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.BooleanToByteArray(System.Boolean[])
pls::cs::Array<std::uint8_t> cs_1165aa3eb3bd00a8(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<bool> v_bools) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_fb60578b3098a284> v_byteArrayOutputStream_96518 = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }());
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_96518; auto cs_arg1 = (v_bools).length(); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_96644 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_96644; auto cs_right = (v_bools).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_96644; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_96644 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_96518; auto cs_arg1 = pls::cs::cast_integral<std::int8_t>(((([&]() { auto cs_array = v_bools; auto cs_index = v_i_96644; return cs_array.at(cs_index); }()) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))))); pls::generated::cs_e6e935ad4dd232ab(cs_arg0,cs_arg1); }());
}
pls::cs::Array<std::uint8_t> v_result_96770 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_96518); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_96518); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
return v_result_96770;
}
}
}
// M:main.AppData.BubbleSort(System.Int32[])
void cs_94181b675211bd10(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Array<std::int32_t> v_list) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_110260 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_110260; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_list).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_110260; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_110260 = cs_new; return cs_old; }())) {
for (std::int32_t v_num_110311 = ([&]() -> std::int32_t { auto cs_left = (v_list).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_110311; auto cs_right = v_i_110260; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num_110311; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_110311 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_list; auto cs_index = v_num_110311; return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_list; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_110311; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); return (cs_left > cs_right); }())) {
std::int32_t v_num2_110409 = ([&]() { auto cs_array = v_list; auto cs_index = v_num_110311; return cs_array.at(cs_index); }());
([&]() { auto cs_target = v_list; auto cs_index = v_num_110311; auto cs_value = ([&]() { auto cs_array = v_list; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_110311; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = v_list; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_110311; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_num2_110409; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
}
}
}
// M:main.AppData.CgiGetScoreURL(System.String)
pls::cs::String cs_625a98664abbed2d(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_m) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0026" u"\x006d" u"\x003d" u"",3)); auto cs_arg1 = v_m; return cs_ecb814bcd5ee800e(cs_arg0,cs_arg1); }()); v_m = cs_value; return cs_value; }());
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::generated::cs_883a98c5db7cd0d2(); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0076" u"\x0065" u"\x0072" u"\x003d" u"",5)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull))); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_m; return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:main.AppData.CgiRankingURL(System.String,System.String,System.String)
pls::cs::String cs_38470bdb3f8437ca(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_m,pls::cs::String v_r,pls::cs::String v_p) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0026" u"\x006d" u"\x003d" u"",3)); auto cs_arg1 = v_m; return cs_ecb814bcd5ee800e(cs_arg0,cs_arg1); }()); v_m = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0026" u"\x0072" u"\x003d" u"",3)); auto cs_arg1 = v_r; return cs_ecb814bcd5ee800e(cs_arg0,cs_arg1); }()); v_r = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0026" u"\x0070" u"\x003d" u"",3)); auto cs_arg1 = v_p; return cs_ecb814bcd5ee800e(cs_arg0,cs_arg1); }()); v_p = cs_value; return cs_value; }());
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::generated::cs_7072b3e737bf9940(); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0076" u"\x0065" u"\x0072" u"\x003d" u"",5)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull))); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_m; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_r; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_p; return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:main.AppData.CgiRegist(System.String,System.String)
pls::cs::Array<std::uint8_t> cs_6d95fb53423037bb(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_cm,pls::cs::String v_r) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::services::managed::register_local();
}
}
}
// M:main.AppData.CgiRegistScoreURL(System.String,System.String,System.String)
pls::cs::String cs_2dc4274529875f85(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_m,pls::cs::String v_s,pls::cs::String v_r) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0026" u"\x006d" u"\x003d" u"",3)); auto cs_arg1 = v_m; return cs_ecb814bcd5ee800e(cs_arg0,cs_arg1); }()); v_m = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0026" u"\x0073" u"\x003d" u"",3)); auto cs_arg1 = v_s; return cs_ecb814bcd5ee800e(cs_arg0,cs_arg1); }()); v_s = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0026" u"\x0072" u"\x003d" u"",3)); auto cs_arg1 = v_r; return cs_ecb814bcd5ee800e(cs_arg0,cs_arg1); }()); v_r = cs_value; return cs_value; }());
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::generated::cs_1e2bd71cada8c5c4(); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0076" u"\x0065" u"\x0072" u"\x003d" u"",5)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull))); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_m; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_s; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_r; return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:main.AppData.CgiRegistURL(System.String,System.String)
pls::cs::String cs_956ae4af07815f66(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::String v_cm,pls::cs::String v_r) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0026" u"\x0063" u"\x006d" u"\x003d" u"",4)); auto cs_arg1 = v_cm; return cs_ecb814bcd5ee800e(cs_arg0,cs_arg1); }()); v_cm = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0026" u"\x0072" u"\x003d" u"",3)); auto cs_arg1 = v_r; return cs_ecb814bcd5ee800e(cs_arg0,cs_arg1); }()); v_r = cs_value; return cs_value; }());
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::generated::cs_455a8fee53914552(); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0076" u"\x0065" u"\x0072" u"\x003d" u"",5)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull))); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_cm; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_r; return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:main.AppData.ChangeMap(System.Int32)
void cs_a0d588186627b4ec(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_next_mapId) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_next_mapId; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f49bdf3aeb4aa05c(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.CheckAlreadyEvent(System.Int32)
bool cs_f7e500a9b338d2df(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_id) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_left = v_id; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e9d5679c831c705; }())).length(); auto cs_right = v_id; return (cs_left <= cs_right); }()))) {
return false;
}
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d8524a356e38017; }()); auto cs_index = v_id; return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }());
}
}
}
// M:main.AppData.CheckNightTime(System.Int32)
bool cs_86e437858a15de4f(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_time) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_106025 = ([&]() -> std::int32_t { auto cs_left = v_time; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe10ull)); return pls::cs::div_i32(cs_left,cs_right); }());
return (([&]() -> bool { auto cs_left = v_num_106025; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); auto cs_right = v_num_106025; return (cs_left <= cs_right); }()));
}
}
}
// M:main.AppData.CheckPointInPolygon(System.Int32,System.Int32,System.Int32[][])
bool cs_93892628e95f9417(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_x,std::int32_t v_y,pls::cs::Array<pls::cs::Array<std::int32_t>> v_aPoint) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_106267 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<std::int32_t> v_array_106285 = ([&]() { auto cs_array = v_aPoint; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
bool v_flag_106312 = ([&]() -> bool { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_array_106285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return (cs_left <= cs_right); }());
bool v_flag2_106342 = ([&]() -> bool { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_array_106285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return (cs_left <= cs_right); }());
for (std::int32_t v_i_106377 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); ([&]() -> bool { auto cs_left = v_i_106377; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_aPoint).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_106377; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_106377 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array2_106427 = ([&]() { auto cs_array = v_aPoint; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_i_106377; auto cs_right = (v_aPoint).length(); return pls::cs::mod_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }());
bool v_flag3_106472 = ([&]() -> bool { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_array2_106427; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return (cs_left <= cs_right); }());
bool v_flag4_106505 = ([&]() -> bool { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_array2_106427; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return (cs_left <= cs_right); }());
if (([&]() -> bool { auto cs_left = v_flag2_106342; auto cs_right = v_flag4_106505; return (cs_left != cs_right); }())) {
if (([&]() -> bool { auto cs_left = v_flag_106312; auto cs_right = v_flag3_106472; return (cs_left == cs_right); }())) {
if (v_flag_106312) {
([&]() { auto cs_old = v_num_106267; auto cs_rhs = (((v_flag2_106342) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)))); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_106267 = cs_value; return cs_value; }());
}
} else if (([&]() -> bool { auto cs_left = v_x; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_106285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array2_106427; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array_106285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_array_106285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array2_106427; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array_106285; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left <= cs_right); }())) {
([&]() { auto cs_old = v_num_106267; auto cs_rhs = (((v_flag2_106342) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)))); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_106267 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_value = v_array2_106427; v_array_106285 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_flag3_106472; v_flag_106312 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_flag4_106505; v_flag2_106342 = cs_value; return cs_value; }());
}
return ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_num_106267; return (cs_left != cs_right); }());
}
}
}
// M:main.AppData.CheckSleepingTime(System.Int32)
bool cs_d74d4c96ad53f62e(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_time) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_106134 = ([&]() -> std::int32_t { auto cs_left = v_time; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe10ull)); return pls::cs::div_i32(cs_left,cs_right); }());
return (([&]() -> bool { auto cs_left = v_num_106134; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); auto cs_right = v_num_106134; return (cs_left <= cs_right); }()));
}
}
}
// M:main.AppData.CheckTimeZone(System.Int32,System.Int32,System.Int32)
bool cs_708c86ca034f4ca2(std::int32_t v_time,std::int32_t v_start,std::int32_t v_end) { cs_init_2ffa6f51468590ea();
{
if (([&]() -> bool { auto cs_left = v_start; auto cs_right = v_end; return (cs_left > cs_right); }())) {
return (([&]() -> bool { auto cs_left = v_start; auto cs_right = v_time; return (cs_left <= cs_right); }()) || ([&]() -> bool { auto cs_left = v_time; auto cs_right = v_end; return (cs_left < cs_right); }()));
}
return (([&]() -> bool { auto cs_left = v_start; auto cs_right = v_time; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_time; auto cs_right = v_end; return (cs_left < cs_right); }()));
}
}
// M:main.AppData.ChExistPopup(System.Int32)
bool cs_cfca9553bfb1ae94(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_id) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_136773 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_136773; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_136773; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_136773 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_array_136841 = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); auto cs_arg0 = v_num_136773; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
pls::cs::Array<std::int32_t> v_array2_136900 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(([&]() { auto cs_array = v_array_136841; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_136900; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
return true;
}
}
return false;
}
}
}
// M:main.AppData.ChPayMoney(System.Int32)
bool cs_d357538bb511ab76(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_cost) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(v_cost); return (cs_left >= cs_right); }())) {
return true;
}
return false;
}
}
}
// M:main.AppData.Clamp(System.Int32,System.Int32,System.Int32)
std::int32_t cs_c821e1f1992a1342(std::int32_t v_val,std::int32_t v_min,std::int32_t v_max) { cs_init_2ffa6f51468590ea();
{
if (([&]() -> bool { auto cs_left = v_val; auto cs_right = v_max; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_max; v_val = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_val; auto cs_right = v_min; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_min; v_val = cs_value; return cs_value; }());
}
return v_val;
}
}
// M:main.AppData.Clamp(System.Int64,System.Int64,System.Int64)
std::int64_t cs_8416d639bc6d5b2c(std::int64_t v_val,std::int64_t v_min,std::int64_t v_max) { cs_init_2ffa6f51468590ea();
{
if (([&]() -> bool { auto cs_left = v_val; auto cs_right = v_max; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_max; v_val = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_val; auto cs_right = v_min; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_min; v_val = cs_value; return cs_value; }());
}
return v_val;
}
}
// M:main.AppData.Clamp(System.Single,System.Single,System.Single)
float cs_3f8bc7f4545c9a4d(float v_val,float v_min,float v_max) { cs_init_2ffa6f51468590ea();
{
if (([&]() -> bool { auto cs_left = v_val; auto cs_right = v_max; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_max; v_val = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_val; auto cs_right = v_min; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_min; v_val = cs_value; return cs_value; }());
}
return v_val;
}
}
// M:main.AppData.ClampMax(System.Int32,System.Int32)
std::int32_t cs_83a6f271dad6430d(std::int32_t v_val,std::int32_t v_max) { cs_init_2ffa6f51468590ea();
{
if (([&]() -> bool { auto cs_left = v_val; auto cs_right = v_max; return (cs_left > cs_right); }())) {
return v_max;
}
return v_val;
}
}
// M:main.AppData.ClampMax(System.Int64,System.Int64)
std::int64_t cs_1477e279fa6d8ac9(std::int64_t v_val,std::int64_t v_max) { cs_init_2ffa6f51468590ea();
{
if (([&]() -> bool { auto cs_left = v_val; auto cs_right = v_max; return (cs_left > cs_right); }())) {
return v_max;
}
return v_val;
}
}
// M:main.AppData.ClampMin(System.Int32,System.Int32)
std::int32_t cs_2b137f19947b1086(std::int32_t v_val,std::int32_t v_min) { cs_init_2ffa6f51468590ea();
{
if (([&]() -> bool { auto cs_left = v_val; auto cs_right = v_min; return (cs_left < cs_right); }())) {
return v_min;
}
return v_val;
}
}
// M:main.AppData.ClampMin(System.Int64,System.Int64)
std::int64_t cs_baa5b5b94837c140(std::int64_t v_val,std::int64_t v_min) { cs_init_2ffa6f51468590ea();
{
if (([&]() -> bool { auto cs_left = v_val; auto cs_right = v_min; return (cs_left < cs_right); }())) {
return v_min;
}
return v_val;
}
}
// M:main.AppData.ClearPopupMessages
void cs_fad8b8a56b0e028c(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d2755abb70d3cbb1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
}
}
}
// M:main.AppData.ClearZSortObjects
void cs_7ec70b28294a2260(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_dcc4c8afca6eace7 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_797d22d4c2c75df4; }())).length(); pls::game::cs_require(cs_target)->cs_6de10b92fdc859b0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_3d3b5753ef643c4e = cs_value; return cs_value; }());
for (std::int32_t v_i_126123 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_126123; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_797d22d4c2c75df4; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_126123; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_126123 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_797d22d4c2c75df4; }()); auto cs_index = v_i_126123; auto cs_value = pls::cs::cast_integral<std::uint8_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
}
// M:main.AppData.ColRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
bool cs_b1adefd295de5f23(std::int32_t v_left1,std::int32_t v_top1,std::int32_t v_right1,std::int32_t v_bottom1,std::int32_t v_left2,std::int32_t v_top2,std::int32_t v_right2,std::int32_t v_bottom2) { cs_init_2ffa6f51468590ea();
{
if ((((([&]() -> bool { auto cs_left = v_right1; auto cs_right = v_left2; return (cs_left < cs_right); }()) || ([&]() -> bool { auto cs_left = v_bottom1; auto cs_right = v_top2; return (cs_left < cs_right); }())) || ([&]() -> bool { auto cs_left = v_left1; auto cs_right = v_right2; return (cs_left > cs_right); }())) || ([&]() -> bool { auto cs_left = v_top1; auto cs_right = v_bottom2; return (cs_left > cs_right); }()))) {
return false;
}
return true;
}
}
// M:main.AppData.ColRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
bool cs_add7644b0671f6f3(std::int32_t v_x,std::int32_t v_y,std::int32_t v_left,std::int32_t v_top,std::int32_t v_right,std::int32_t v_bottom) { cs_init_2ffa6f51468590ea();
{
return (((([&]() -> bool { auto cs_left = v_left; auto cs_right = v_x; return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = v_x; auto cs_right = v_right; return (cs_left < cs_right); }())) && ([&]() -> bool { auto cs_left = v_top; auto cs_right = v_y; return (cs_left < cs_right); }())) && ([&]() -> bool { auto cs_left = v_y; auto cs_right = v_bottom; return (cs_left < cs_right); }()));
}
}
// M:main.AppData.ColRect(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
bool cs_e613a1e58fb27103(float v_left1,float v_top1,float v_right1,float v_bottom1,float v_left2,float v_top2,float v_right2,float v_bottom2) { cs_init_2ffa6f51468590ea();
{
if (([&]() -> bool { auto cs_left = v_right1; auto cs_right = v_left2; return (cs_left < cs_right); }())) {
return false;
}
if (([&]() -> bool { auto cs_left = v_bottom1; auto cs_right = v_top2; return (cs_left < cs_right); }())) {
return false;
}
if (([&]() -> bool { auto cs_left = v_left1; auto cs_right = v_right2; return (cs_left > cs_right); }())) {
return false;
}
if (([&]() -> bool { auto cs_left = v_top1; auto cs_right = v_bottom2; return (cs_left > cs_right); }())) {
return false;
}
return true;
}
}
// M:main.AppData.CommaSeparate(System.Int64)
pls::cs::String cs_b3583bc7466553cb(std::int64_t v_value) { cs_init_2ffa6f51468590ea();
{
bool v_flag_71633 = ([&]() -> bool { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left < cs_right); }());
if (v_flag_71633) {
([&]() { auto cs_value = pls::cs::neg_i64(v_value); v_value = cs_value; return cs_value; }());
}
pls::cs::String v_str_71704 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_integer_string(v_value); return pls::cs::String::concat(cs_left,cs_right); }());
pls::cs::String v_text_71742 = pls::cs::String(u"");
std::int32_t v_num_71770 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num2_71786 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_str_71704; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
while (([&]() -> bool { auto cs_left = v_num2_71786; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }())) {
if ((([&]() -> bool { auto cs_left = v_num_71770; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_71770; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::game::cs_char_string(char16_t(44)); auto cs_right = v_text_71742; return pls::cs::String::concat(cs_left,cs_right); }()); v_text_71742 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() { auto cs_left = pls::game::cs_char_string(([&]() -> char16_t { auto cs_arg0 = v_str_71704; auto cs_arg1 = v_num2_71786; return pls::generated::cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }())); auto cs_right = v_text_71742; return pls::cs::String::concat(cs_left,cs_right); }()); v_text_71742 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num2_71786; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_71786 = cs_new; return cs_old; }());
([&]() { auto cs_old = v_num_71770; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_71770 = cs_new; return cs_old; }());
}
if (v_flag_71633) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x002d" u"",1)); auto cs_right = v_text_71742; return pls::cs::String::concat(cs_left,cs_right); }()); v_text_71742 = cs_value; return cs_value; }());
}
return v_text_71742;
}
}
// M:main.AppData.DateToDays(System.Int32,System.Int32,System.Int32)
std::int32_t cs_7b2f6edc71ce4776(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_year,std::int32_t v_month,std::int32_t v_week) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_year; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x150ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_month; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1cull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_week; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
}
}
}
// M:main.AppData.DateToTime(System.Int32,System.Int32,System.Int32,System.Int32)
std::int32_t cs_42b30366d46b5078(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_year,std::int32_t v_month,std::int32_t v_day,std::int32_t v_time) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_year; auto cs_arg1 = v_month; auto cs_arg2 = v_day; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_7b2f6edc71ce4776(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_time; return pls::cs::add_i32(cs_left,cs_right); }());
}
}
}
// M:main.AppData.DeserializeScripts(java.io.InputStream)
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_3eb1a614e127ae1e(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_111495 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
std::int32_t v_num_111525 = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
for (std::int32_t v_i_111571 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_111571; auto cs_right = v_num_111525; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_111571; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_111571 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_111607 = pls::cs::Array<std::int32_t>::make(([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()));
for (std::int32_t v_j_111665 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_111665; auto cs_right = (v_array_111607).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_111665; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_111665 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_111607; auto cs_index = v_j_111665; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_111495); auto cs_arg0 = pls::cs::box(v_array_111607); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
return v_vector_111495;
}
}
}
// M:main.AppData.Draw3DBox(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[][])
void cs_ad6ba23dddb1b618(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_offset_x,std::int32_t v_offset_y,std::int32_t v_width,std::int32_t v_height,pls::cs::Array<pls::cs::Array<std::int32_t>> v_colors) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_recoveredBorderX_66609 = v_offset_x;
std::int32_t v_recoveredBorderY_66642 = v_offset_y;
std::int32_t v_recoveredBorderWidth_66675 = v_width;
std::int32_t v_recoveredBorderHeight_66709 = v_height;
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_colors; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_colors; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_arg2 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_colors; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_recoveredBorderX_66609); auto cs_arg1 = static_cast<float>(v_recoveredBorderY_66642); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_recoveredBorderWidth_66675; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_recoveredBorderHeight_66709; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
std::int32_t v_num_66930 = ([&]() -> std::int32_t { auto cs_left = v_offset_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num2_66957 = ([&]() -> std::int32_t { auto cs_left = v_offset_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num3_66985 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num4_67010 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_colors; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_colors; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_arg2 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_colors; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_num_66930); auto cs_arg1 = static_cast<float>(v_num2_66957); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_66930; auto cs_right = v_num3_66985; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(v_num2_66957); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_num_66930); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_66957; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(v_num_66930); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num2_66957; auto cs_right = v_num4_67010; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_colors; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_colors; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_arg2 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_colors; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_num_66930); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num2_66957; auto cs_right = v_num4_67010; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_66930; auto cs_right = v_num3_66985; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num2_66957; auto cs_right = v_num4_67010; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_66930; auto cs_right = v_num3_66985; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_66957; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_66930; auto cs_right = v_num3_66985; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num2_66957; auto cs_right = v_num4_67010; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
std::int32_t v_num5_67442 = ([&]() -> std::int32_t { auto cs_left = v_offset_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num6_67470 = ([&]() -> std::int32_t { auto cs_left = v_offset_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num7_67498 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num8_67523 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_colors; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_colors; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_arg2 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_colors; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_num5_67442); auto cs_arg1 = static_cast<float>(v_num6_67470); auto cs_arg2 = static_cast<float>(v_num7_67498); auto cs_arg3 = static_cast<float>(v_num8_67523); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:main.AppData.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean,kairo.unity.form.FormBase,System.Int32)
pls::cs::Array<std::int32_t> cs_03a81c0c58f1d2f9(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,std::int32_t v_margin,bool v_cursor,pls::cs::Ref<pls::kairo::FormBase> v_form,std::int32_t v_frame) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::kairo::Font> v_font_104034 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }());
std::int32_t v_num_104065 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_104034); auto cs_arg0 = v_str; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }());
std::int32_t v_height_104101 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_104034); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
pls::cs::Array<std::int32_t> v_anchorPosition_104137 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_arg0 = v_x; auto cs_arg1 = v_y; auto cs_arg2 = v_num_104065; auto cs_arg3 = v_height_104101; auto cs_arg4 = v_anchor; return pls::kairo::Graphics::GetAnchorPosition(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
std::int32_t v_color_104216 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetColor(); }());
if (v_active) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcdull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xebull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6full)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_anchorPosition_104137; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = v_margin; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_anchorPosition_104137; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num_104065; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_margin; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height_104101; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color_104216; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_str; auto cs_arg1 = static_cast<float>(([&]() { auto cs_array = v_anchorPosition_104137; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_arg2 = static_cast<float>(([&]() { auto cs_array = v_anchorPosition_104137; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
if (v_cursor) {

}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7aabaf6601189f0f; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_anchorPosition_104137; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = v_margin; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7aabaf6601189f0f; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_anchorPosition_104137; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7aabaf6601189f0f; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_104065; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_margin; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7aabaf6601189f0f; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_height_104101; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7aabaf6601189f0f; }());
}
}
}
// M:main.AppData.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,kairo.unity.form.FormBase,System.Int32)
void cs_8283a2cef3560ce6(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_anchor,bool v_active,bool v_cursor,pls::cs::Ref<pls::kairo::FormBase> v_form,std::int32_t v_frame) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::kairo::Font> v_font_104891 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }());
std::int32_t v_height_104919 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_104891); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
std::int32_t v_width_104950 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_104891); auto cs_arg0 = v_str; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }());
pls::cs::Array<std::int32_t> v_anchorPosition_104987 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_arg0 = v_x; auto cs_arg1 = v_y; auto cs_arg2 = v_width_104950; auto cs_arg3 = v_height_104919; auto cs_arg4 = v_anchor; return pls::kairo::Graphics::GetAnchorPosition(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
std::int32_t v_color_105065 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetColor(); }());
if (v_active) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcdull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xebull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6full)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_w; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_anchorPosition_104987; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(v_w); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height_104919; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_color_105065; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_str; auto cs_arg1 = static_cast<float>(([&]() { auto cs_array = v_anchorPosition_104987; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_arg2 = static_cast<float>(([&]() { auto cs_array = v_anchorPosition_104987; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
if (v_cursor) {

}
return;
}
}
}
// M:main.AppData.DrawExp(kairo.unity.ui.Graphics,System.Int32,System.Int32)
void cs_3f567eb275fffe13(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { return cs_3fb5098d629f7985(); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x75ull)); return cs_array.at(cs_index); }()); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4cull)); return cs_array.at(cs_index); }()); auto cs_arg4 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x75ull)); return cs_array.at(cs_index); }()); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7b0d143e2789fc4b(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
}
// M:main.AppData.DrawIcon(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)
void cs_12497a30e9540bfb(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_icon) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:main.AppData.DrawLv(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32)
void cs_21e6e0d74e9354dd(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_text,std::int32_t v_x,std::int32_t v_y) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { return cs_3fb5098d629f7985(); }())) {
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); cs_75f1e9b43c680ffb(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_text; auto cs_arg1 = static_cast<float>(v_x); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_arg0 = v_g; cs_ace6778f48cc8fb4(cs_arg0); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_text; auto cs_arg1 = static_cast<float>(v_x); auto cs_arg2 = static_cast<float>(v_y); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
// M:main.AppData.DrawMeter(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32)
void cs_c3c19de516dcf0da(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_value,std::int32_t v_max,std::int32_t v_scaleNum,bool v_reverse,std::int32_t v_anchor,std::int32_t v_height) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_old = v_y; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_y = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_x; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_scaleNum; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_x = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_x; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_scaleNum; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_x = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(v_x); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_scaleNum; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
if (([&]() -> bool { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_scaleNum; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} else {
([&]() { auto cs_old = v_y; auto cs_new = pls::cs::sub_i32(cs_old,1); v_y = cs_new; return cs_old; }());
([&]() { auto cs_old = v_height; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_height = cs_value; return cs_value; }());
}
std::int32_t v_num_102767 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num2_102783 = v_scaleNum;
std::int32_t v_num3_102807 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
if (v_reverse) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_scaleNum; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num_102767 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); v_num2_102783 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); v_num3_102807 = cs_value; return cs_value; }());
}
std::int32_t v_num4_102904 = ([&]() -> std::int32_t { auto cs_left = v_max; auto cs_right = v_scaleNum; return pls::cs::div_i32(cs_left,cs_right); }());
std::int32_t v_num5_102934 = v_value;
for (std::int32_t v_i_102960 = v_num_102767; ([&]() -> bool { auto cs_left = v_i_102960; auto cs_right = v_num2_102783; return (cs_left != cs_right); }()); ([&]() { auto cs_old = v_i_102960; auto cs_rhs = v_num3_102807; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_i_102960 = cs_value; return cs_value; }())) {
std::int32_t v_num6_103004 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_i_102960; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = pls::game::cs_f32(0x3f800000u); auto cs_arg3 = static_cast<float>(v_num6_103004); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
std::int32_t v_num7_103131 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num5_102934; auto cs_right = v_num6_103004; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num4_102904; return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_arg1 = v_num6_103004; return cs_83a6f271dad6430d(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num7_103131; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_i_102960; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num6_103004; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num7_103131; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = pls::game::cs_f32(0x3f800000u); auto cs_arg3 = static_cast<float>(v_num7_103131); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
([&]() { auto cs_old = v_num5_102934; auto cs_rhs = v_num4_102904; auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num5_102934 = cs_value; return cs_value; }());
}
}
}
}
// M:main.AppData.DrawMeter(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)
void cs_de4ed740283fea48(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_value,std::int32_t v_max,std::int32_t v_scaleNum,bool v_reverse,std::int32_t v_anchor) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = v_value; auto cs_arg4 = v_max; auto cs_arg5 = v_scaleNum; auto cs_arg6 = v_reverse; auto cs_arg7 = v_anchor; auto cs_arg8 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c3c19de516dcf0da(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
}
}
}
// M:main.AppData.DrawOutline(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_fd2a119f8fafdcc7(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<pls::kairo::Image> v_img,std::int32_t v_u,std::int32_t v_v,std::int32_t v_w,std::int32_t v_h,std::int32_t v_lineWidth,std::int32_t v_color) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::kairo::Image> v_image_100548 = ([&]() -> pls::cs::Ref<pls::kairo::Image> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = v_w; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_lineWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_h; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_lineWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull))); auto cs_arg3 = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return pls::kairo::Image::CreateImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
pls::cs::Ref<pls::kairo::Image> v_image2_100645 = pls::cs::Ref<pls::kairo::Image>{};
pls::cs::Ref<pls::kairo::Graphics> v_graphics_100662 = ([&]() -> pls::cs::Ref<pls::kairo::Graphics> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_100548); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetGraphics(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Image> { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_100548); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_100548); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); auto cs_arg2 = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull))); auto cs_arg3 = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return pls::kairo::Image::CreateImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); v_image2_100645 = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::Graphics> v_graphics2_100774 = ([&]() -> pls::cs::Ref<pls::kairo::Graphics> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image2_100645); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetGraphics(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_100662); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_100662); auto cs_arg0 = pls::game::cs_f32(0x00000000u); auto cs_arg1 = pls::game::cs_f32(0x00000000u); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_100548); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_100548); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_100662); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
for (std::int32_t v_i_100984 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_100984; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_100984; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_100984 = cs_new; return cs_old; }())) {
for (std::int32_t v_j_101021 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_101021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_101021; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_101021 = cs_new; return cs_old; }())) {
if (((([&]() -> bool { auto cs_left = v_i_100984; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) && (([&]() -> bool { auto cs_left = v_j_101021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())))) {
continue;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_100662); auto cs_arg0 = v_img; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_j_101021; auto cs_right = v_lineWidth; return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_i_100984; auto cs_right = v_lineWidth; return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg3 = v_u; auto cs_arg4 = v_v; auto cs_arg5 = v_w; auto cs_arg6 = v_h; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_100662); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics2_100774); auto cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics2_100774); auto cs_arg0 = pls::game::cs_f32(0x00000000u); auto cs_arg1 = pls::game::cs_f32(0x00000000u); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image2_100645); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image2_100645); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics2_100774); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics2_100774); auto cs_arg0 = v_image_100548; auto cs_arg1 = pls::game::cs_f32(0x00000000u); auto cs_arg2 = pls::game::cs_f32(0x00000000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics2_100774); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics2_100774); auto cs_arg0 = v_img; auto cs_arg1 = static_cast<float>(v_lineWidth); auto cs_arg2 = static_cast<float>(v_lineWidth); auto cs_arg3 = v_u; auto cs_arg4 = v_v; auto cs_arg5 = v_w; auto cs_arg6 = v_h; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics2_100774); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image2_100645); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetTransparentColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image2_100645); auto cs_arg0 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetTransparentEnabled(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_image2_100645; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = v_lineWidth; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_lineWidth; return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics_100662); auto cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_100548); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_graphics2_100774); auto cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image2_100645); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
}
}
}
// M:main.AppData.DrawPositionStatus(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_53d2c70c9185c93d(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_index,std::int32_t v_rank,std::int32_t v_x,std::int32_t v_y) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_149885 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull));
if (([&]() -> bool { return cs_3fb5098d629f7985(); }())) {
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); cs_75f1e9b43c680ffb(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() { auto cs_array = cs_be11b7ad761c961f(); auto cs_index = v_index; return cs_array.at(cs_index); }()); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_old = v_num_149885; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_149885 = cs_new; return cs_old; }());
} else {
([&]() -> void { auto cs_arg0 = v_g; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); cs_75f1e9b43c680ffb(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() { auto cs_array = cs_be11b7ad761c961f(); auto cs_index = v_index; return cs_array.at(cs_index); }()); auto cs_arg1 = static_cast<float>(v_x); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ((([&]() -> bool { return cs_6f798e6a602077c1(); }()) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)))); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
}
([&]() -> void { auto cs_arg0 = v_g; cs_ace6778f48cc8fb4(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_rank; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
return;
}
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = v_num_149885; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x41ull)); return cs_array.at(cs_index); }()); auto cs_arg4 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4bull)); return cs_array.at(cs_index); }()); auto cs_arg5 = v_rank; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7b0d143e2789fc4b(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
}
// M:main.AppData.DrawSeb(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image,System.Int32)
void cs_7b0d143e2789fc4b(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,pls::cs::Ref<pls::kairo::Image> v_img,std::int32_t v_frame) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<pls::cs::Array<std::int32_t>> v_sprites_70137 = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(v_seb); auto cs_arg0 = v_frame; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_eea5b2f6712bae20(cs_receiver,cs_arg0); }());
for (std::int32_t v_spriteIndex_70182 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_spriteIndex_70182; auto cs_right = (v_sprites_70137).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_spriteIndex_70182; auto cs_new = pls::cs::add_i32(cs_old,1); v_spriteIndex_70182 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_70252 = ([&]() { auto cs_array = v_sprites_70137; auto cs_index = v_spriteIndex_70182; return cs_array.at(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_70252; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
continue;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_img; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_array_70252; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_array_70252; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = ([&]() { auto cs_array = v_array_70252; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_arg4 = ([&]() { auto cs_array = v_array_70252; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_arg5 = ([&]() { auto cs_array = v_array_70252; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_arg6 = ([&]() { auto cs_array = v_array_70252; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
}
}
// M:main.AppData.DrawSeb(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
std::int32_t cs_ee47823f51f14062(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> v_imgs,std::int32_t v_frame,std::int32_t v_w1000,std::int32_t v_h1000,std::int32_t v_maxWidth,std::int32_t v_maxHeight) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_68140 = v_x;
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_w1000; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return cs_c821e1f1992a1342(cs_arg0,cs_arg1,cs_arg2); }()); v_w1000 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_h1000; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return cs_c821e1f1992a1342(cs_arg0,cs_arg1,cs_arg2); }()); v_h1000 = cs_value; return cs_value; }());
if ((([&]() -> bool { auto cs_left = v_w1000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }()) || ([&]() -> bool { auto cs_left = v_h1000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }()))) {
return v_num_68140;
}
pls::cs::Array<pls::cs::Array<std::int32_t>> v_sprites_68287 = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(v_seb); auto cs_arg0 = v_frame; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_eea5b2f6712bae20(cs_receiver,cs_arg0); }());
for (std::int32_t v_spriteIndex_68332 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_spriteIndex_68332; auto cs_right = (v_sprites_68287).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_spriteIndex_68332; auto cs_new = pls::cs::add_i32(cs_old,1); v_spriteIndex_68332 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_68402 = ([&]() { auto cs_array = v_sprites_68287; auto cs_index = v_spriteIndex_68332; return cs_array.at(cs_index); }());
std::int32_t v_num2_68436 = v_maxWidth;
std::int32_t v_num3_68457 = v_maxHeight;
if (([&]() -> bool { auto cs_left = v_num2_68436; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_array_68402; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); v_num2_68436 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num3_68457; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_array_68402; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); v_num3_68457 = cs_value; return cs_value; }());
}
pls::cs::Ref<pls::kairo::Image> v_image_68581 = ([&]() { auto cs_array = v_imgs; auto cs_index = ([&]() { auto cs_array = v_array_68402; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_image_68581; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_array_68402; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_array_68402; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = ([&]() { auto cs_array = v_array_68402; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_arg4 = ([&]() { auto cs_array = v_array_68402; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_arg5 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num2_68436; auto cs_right = v_w1000; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_arg6 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num3_68457; auto cs_right = v_h1000; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::div_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
std::int32_t v_num4_68719 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_array_68402; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num2_68436; auto cs_right = v_w1000; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num_68140; auto cs_right = v_num4_68719; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_num4_68719; v_num_68140 = cs_value; return cs_value; }());
}
}
return v_num_68140;
}
}
}
// M:main.AppData.DrawSeb(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32,System.Int32)
std::int32_t cs_0ac7580f496570df(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> v_imgs,std::int32_t v_frame,std::int32_t v_w1000,std::int32_t v_h1000) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = v_seb; auto cs_arg4 = v_imgs; auto cs_arg5 = v_frame; auto cs_arg6 = v_w1000; auto cs_arg7 = v_h1000; auto cs_arg8 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ee47823f51f14062(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
}
// M:main.AppData.DrawSeb(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32)
void cs_751ad0ec7c2df877(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> v_imgs,std::int32_t v_frame,std::int32_t v_ucnt) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<pls::cs::Array<std::int32_t>> v_sprites_68936 = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(v_seb); auto cs_arg0 = v_frame; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_eea5b2f6712bae20(cs_receiver,cs_arg0); }());
for (std::int32_t v_spriteIndex_68981 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_spriteIndex_68981; auto cs_right = (v_sprites_68936).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_spriteIndex_68981; auto cs_new = pls::cs::add_i32(cs_old,1); v_spriteIndex_68981 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_69051 = ([&]() { auto cs_array = v_sprites_68936; auto cs_index = v_spriteIndex_68981; return cs_array.at(cs_index); }());
pls::cs::Ref<pls::kairo::Image> v_image_69087 = ([&]() { auto cs_array = v_imgs; auto cs_index = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_ucnt; auto cs_right = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_69087); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_image_69087; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_ucnt; auto cs_right = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_arg5 = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_arg6 = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_image_69087; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_ucnt; auto cs_right = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_arg5 = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_arg6 = ([&]() { auto cs_array = v_array_69051; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
}
}
}
// M:main.AppData.DrawSebReverse(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32,kairo.unity.ui.Image[])
void cs_3a500e5ac881af86(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,std::int32_t v_frame,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> v_imgs) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<pls::cs::Array<std::int32_t>> v_sprites_70511 = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(v_seb); auto cs_arg0 = v_frame; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_eea5b2f6712bae20(cs_receiver,cs_arg0); }());
for (std::int32_t v_spriteIndex_70556 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_spriteIndex_70556; auto cs_right = (v_sprites_70511).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_spriteIndex_70556; auto cs_new = pls::cs::add_i32(cs_old,1); v_spriteIndex_70556 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_70626 = ([&]() { auto cs_array = v_sprites_70511; auto cs_index = v_spriteIndex_70556; return cs_array.at(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_70626; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
continue;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() { auto cs_array = v_imgs; auto cs_index = ([&]() { auto cs_array = v_array_70626; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_array_70626; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_array_70626; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_array_70626; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = ([&]() { auto cs_array = v_array_70626; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_arg4 = ([&]() { auto cs_array = v_array_70626; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_arg5 = ([&]() { auto cs_array = v_array_70626; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_arg6 = ([&]() { auto cs_array = v_array_70626; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
}
}
// M:main.AppData.DrawSebV(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32)
void cs_0d97bed1c7b35e19(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> v_imgs,std::int32_t v_frame,std::int32_t v_vcnt) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<pls::cs::Array<std::int32_t>> v_sprites_69543 = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(v_seb); auto cs_arg0 = v_frame; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_eea5b2f6712bae20(cs_receiver,cs_arg0); }());
for (std::int32_t v_spriteIndex_69588 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_spriteIndex_69588; auto cs_right = (v_sprites_69543).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_spriteIndex_69588; auto cs_new = pls::cs::add_i32(cs_old,1); v_spriteIndex_69588 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_69658 = ([&]() { auto cs_array = v_sprites_69543; auto cs_index = v_spriteIndex_69588; return cs_array.at(cs_index); }());
pls::cs::Ref<pls::kairo::Image> v_image_69694 = ([&]() { auto cs_array = v_imgs; auto cs_index = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_vcnt; auto cs_right = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_69694); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_image_69694; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_vcnt; auto cs_right = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg5 = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_arg6 = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_image_69694; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_vcnt; auto cs_right = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg5 = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_arg6 = ([&]() { auto cs_array = v_array_69658; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
}
}
}
// M:main.AppData.DrawTrophyEffect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_a53f72c4e4983c65(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_trophy_id,std::int32_t v_subform_frame,std::int32_t v_px,std::int32_t v_py) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = v_px; auto cs_arg2 = v_py; auto cs_arg3 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6aull)); return cs_array.at(cs_index); }()); auto cs_arg4 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbeull)); return cs_array.at(cs_index); }()); auto cs_arg5 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7b0d143e2789fc4b(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
std::int32_t v_trophyOriginX_147150 = v_px;
std::int32_t v_trophyOriginY_147174 = v_py;
std::int32_t v_num_147198 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_subform_frame; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return pls::cs::mod_i32(cs_left,cs_right); }());
pls::cs::Array<std::int32_t> v_array_147240 = pls::cs::Array<std::int32_t>{};
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6aull)); return cs_array.at(cs_index); }())); auto cs_arg0 = v_trophy_id; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f424f89d435cbb04(cs_receiver,cs_arg0,cs_arg1); }()); v_array_147240 = cs_value; return cs_value; }());
std::int32_t v_num2_147315 = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }());
pls::cs::Array<pls::cs::Array<std::int32_t>> v_array2_147343 = ([&](){auto cs_initial_array_640=pls::cs::Array<pls::cs::Array<std::int32_t>>::make(2);cs_initial_array_640.at(0)=pls::assets::baked_array<std::int32_t>("17a24ab00c3de67fbe45a81ae20db4314da0513813021dbf5fa1ec25a62f4574");cs_initial_array_640.at(1)=pls::assets::baked_array<std::int32_t>("dc538038acace7d09a817f378c02c20969062c4177211d5c2661109ac146c4c0");return cs_initial_array_640;}());
std::int32_t v_num3_147448 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull));
std::int32_t v_num4_147465 = ([&]() -> std::int32_t { auto cs_left = v_num_147198; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
for (std::int32_t v_i_147493 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_147493; auto cs_right = (v_array2_147343).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_147493; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_147493 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = v_i_147493; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
continue;
}
pls::cs::Array<std::int32_t> v_array3_147582 = ([&]() { auto cs_array = v_array2_147343; auto cs_index = v_i_147493; return cs_array.at(cs_index); }());
std::int32_t v_num5_147610 = ([&]() -> std::int32_t { auto cs_left = v_num4_147465; auto cs_right = v_num3_147448; return pls::cs::mul_i32(cs_left,cs_right); }());
std::int32_t v_num6_147638 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&]() -> bool { auto cs_left = v_num5_147610; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return (cs_left <= cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_147582; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_arg1 = ([&]() { auto cs_array = v_array3_147582; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_arg3 = v_num5_147610; auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_20d8b864ba249ba5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_num6_147638 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num5_147610; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return (cs_left >= cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_147582; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_arg1 = ([&]() { auto cs_array = v_array3_147582; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num5_147610; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_20d8b864ba249ba5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_num6_147638 = cs_value; return cs_value; }());
}
std::int32_t v_num7_147897 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_trophyOriginX_147150; auto cs_right = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num5_147610; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num6_147638; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num8_147956 = ([&]() -> std::int32_t { auto cs_left = v_trophyOriginY_147174; auto cs_right = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num9_147997 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = v_num5_147610; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num6_147638; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_sy_148040 = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }());
std::int32_t v_num10_148063 = v_num6_147638;
std::int32_t v_height_148085 = v_num2_147315;
if (([&]() -> bool { auto cs_left = v_num9_147997; auto cs_right = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return (cs_left < cs_right); }())) {
std::int32_t v_num11_148140 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = v_num9_147997; return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() { auto cs_old = v_num9_147997; auto cs_rhs = v_num11_148140; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num9_147997 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num10_148063; auto cs_rhs = v_num11_148140; auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num10_148063 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num7_147897; auto cs_rhs = v_num11_148140; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num7_147897 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num9_147997; auto cs_right = v_num10_148063; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num9_147997; return pls::cs::sub_i32(cs_left,cs_right); }()); v_num10_148063 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num10_148063; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg1 = ([&]() { auto cs_array = v_array3_147582; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
for (std::int32_t v_j_148409 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_148409; auto cs_right = ([&]() { auto cs_array = v_array3_147582; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_148409; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_148409 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = ([&]() { auto cs_array = v_array_147240; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()); auto cs_arg1 = static_cast<float>(v_num7_147897); auto cs_arg2 = static_cast<float>(v_num8_147956); auto cs_arg3 = v_num9_147997; auto cs_arg4 = v_sy_148040; auto cs_arg5 = v_num10_148063; auto cs_arg6 = v_height_148085; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
}
// M:main.AppData.DrawWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.String,System.Int32)
void cs_bff8af433f297883(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_GWidth,std::int32_t v_GHeight,std::int32_t v_GTop,pls::cs::String v_T_S,std::int32_t v_off_y) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::kairo::Font> v_font_62532 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }());
std::int32_t v_num_62563 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull));
std::int32_t v_num2_62581 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull));
std::int32_t v_num3_62600 = ([&]() -> std::int32_t { auto cs_left = cs_8e6f0b55ae0ed8f8(); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_off_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_GHeight; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd8ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num3_62600 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x59ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x67ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5bull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_62563; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num3_62600; auto cs_right = v_num2_62581; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GHeight; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_GTop; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_GHeight; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xefull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xefull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xddull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_62563; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num3_62600; auto cs_right = v_num2_62581; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GHeight; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_GTop; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(v_GHeight); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
std::int32_t v_num4_63011 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }());
for (std::int32_t v_i_63047 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_63047; auto cs_right = v_num4_63011; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_63047; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_63047 = cs_new; return cs_old; }())) {
std::int32_t v_num5_63082 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_62563; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_i_63047; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_width_63128 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_i_63047; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return cs_83a6f271dad6430d(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1cull)); return cs_array.at(cs_index); }()); auto cs_arg1 = static_cast<float>(v_num5_63082); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num3_62600; auto cs_right = v_num2_62581; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GHeight; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_GTop; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg5 = v_width_63128; auto cs_arg6 = v_GHeight; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1dull)); return cs_array.at(cs_index); }()); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num3_62600; auto cs_right = v_num2_62581; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GHeight; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_GTop; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg5 = ([&]() -> std::int32_t { auto cs_left = v_GWidth; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
if (([&]() { auto cs_left = pls::cs::box(v_T_S); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return;
}
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = cs_f3bdc307b801c3d8(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_T_S; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_62532); auto cs_arg0 = v_T_S; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num3_62600; auto cs_right = v_num2_62581; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GHeight; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_GTop; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = cs_fff714fdd7b4bc9d(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_T_S; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_62532); auto cs_arg0 = v_T_S; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num3_62600; auto cs_right = v_num2_62581; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_GHeight; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_GTop; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
// M:main.AppData.DrawWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.String)
void cs_e913ec62d66058dc(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_GWidth,std::int32_t v_GHeight,std::int32_t v_GTop,pls::cs::String v_T_S) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = v_GWidth; auto cs_arg2 = v_GHeight; auto cs_arg3 = v_GTop; auto cs_arg4 = v_T_S; auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bff8af433f297883(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
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
} catch(const pls::cs::Exception& cs_caught_642) {auto cs_exception_642=pls::cs::capture_exception(cs_caught_642);
if(pls::cs::exception_is(cs_exception_642,"System.Exception")) {{

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
} catch(const pls::cs::Exception& cs_caught_246) {auto cs_exception_246=pls::cs::capture_exception(cs_caught_246);
if(pls::cs::exception_is(cs_exception_246,"System.Exception")) {auto v_t_49738=cs_exception_246;{
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
} catch(const pls::cs::Exception& cs_caught_653) {auto cs_exception_653=pls::cs::capture_exception(cs_caught_653);
if(pls::cs::exception_is(cs_exception_653,"System.Exception")) {auto v_t_4625=cs_exception_653;{
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
} catch(const pls::cs::Exception& cs_caught_658) {auto cs_exception_658=pls::cs::capture_exception(cs_caught_658);
if(pls::cs::exception_is(cs_exception_658,"System.Exception")) {{

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
// M:surface.GameView.AddEffect(System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchComponent)
pls::cs::Ref<cs_9b21b86f0d2914e0> cs_94ba728de1847ec7(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_imgId,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = v_imgId; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
{
pls::cs::Ref<cs_9b21b86f0d2914e0> v_recoveredReturn_49580_46858 = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ee8a5d8ed6fb33b; }())); auto cs_arg0 = cs_this; auto cs_arg1 = v_id; auto cs_arg2 = static_cast<float>(v_x); auto cs_arg3 = static_cast<float>(v_y); auto cs_arg4 = v_c; auto cs_arg5 = pls::cs::Ref<pls::cs::Object>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2be5d3359f23ac72(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
return v_recoveredReturn_49580_46858;
}
}
pls::cs::Array<std::int32_t> v_array_46972 = ([&]() { auto cs_array = cs_16bdb21bbc3ccb66(); auto cs_index = v_imgId; return cs_array.at(cs_index); }());
pls::cs::Ref<pls::kairo::Image> v_image_47006 = ([&]() { auto cs_array = cs_458e967c446c2f02(); auto cs_index = ([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }());
float v_num_47042 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_47006); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }())); auto cs_right = static_cast<float>(([&]() { auto cs_array = cs_f1088522c1cb7c9e(); auto cs_index = ([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }())); return (cs_left / cs_right); }());
float v_num2_47113 = pls::game::cs_f32(0x3f400000u);
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_arg_47139 = ([&](){auto cs_initial_array_662=pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::make(2);cs_initial_array_662.at(0)=pls::cs::box(([&]() { auto cs_array = cs_458e967c446c2f02(); auto cs_index = ([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()));cs_initial_array_662.at(1)=pls::cs::box(([&](){auto cs_initial_array_663=pls::cs::Array<float>::make(6);cs_initial_array_663.at(0)=([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num2_47113; return (cs_left * cs_right); }());cs_initial_array_663.at(1)=([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num2_47113; return (cs_left * cs_right); }());cs_initial_array_663.at(2)=([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_47042; return (cs_left * cs_right); }());cs_initial_array_663.at(3)=([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_47042; return (cs_left * cs_right); }());cs_initial_array_663.at(4)=([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_47042; return (cs_left * cs_right); }());cs_initial_array_663.at(5)=([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_47042; return (cs_left * cs_right); }());return cs_initial_array_663;}()));return cs_initial_array_662;}());
{
pls::cs::Ref<cs_9b21b86f0d2914e0> v_recoveredReturn_50165_47424 = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ee8a5d8ed6fb33b; }())); auto cs_arg0 = cs_this; auto cs_arg1 = v_id; auto cs_arg2 = ([&]() -> float { auto cs_left = static_cast<float>(v_x); auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num2_47113; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_arg3 = ([&]() -> float { auto cs_left = static_cast<float>(v_y); auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array_46972; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num2_47113; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_arg4 = v_c; auto cs_arg5 = pls::cs::box(v_arg_47139); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2be5d3359f23ac72(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
return v_recoveredReturn_50165_47424;
}
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
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_8883 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = v_i_8826; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_8883; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_8883; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = v_component_8883; v_touchComponent3_8701 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_8883; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return (cs_left == cs_right); }())) {
std::int32_t v_num_9056 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_arg0 = ([&]() { auto cs_receiver = v_component_8883; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()));
if ((([&]() { auto cs_left = pls::cs::box(v_touchComponent_8618); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_arg0 = ([&]() { auto cs_receiver = v_touchComponent_8618; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_9056; return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = v_component_8883; v_touchComponent_8618 = cs_value; return cs_value; }());
}
if ((([&]() { auto cs_left = pls::cs::box(v_touchComponent2_8659); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int16_t> { auto cs_arg0 = ([&]() { auto cs_receiver = v_touchComponent2_8659; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); return pls::generated::cs_ba020c0b5c680349(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_right = v_num_9056; return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = v_component_8883; v_touchComponent2_8659 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_8883); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_value = v_component_8883; v_touchComponent4_8743 = cs_value; return cs_value; }());
}
}
pls::cs::List<pls::cs::Ref<cs_3a3d09f9e75a32d2>> v_list_9468 = pls::cs::List<pls::cs::Ref<cs_3a3d09f9e75a32d2>>::make();
pls::cs::List<pls::cs::Ref<cs_3a3d09f9e75a32d2>> v_list2_9527 = pls::cs::List<pls::cs::Ref<cs_3a3d09f9e75a32d2>>::make();
for (std::int32_t v_j_9575 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_9575; auto cs_right = v_componentLength_8774; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_9575; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_9575 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component2_9632 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = v_j_9575; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
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
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(v_array_10697); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = (v_array_10697).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
bool v_flag_10838 = false;
bool v_flag2_10861 = false;
for (std::int32_t v_num4_10889 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num4_10889; auto cs_right = (v_list_9468).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num4_10889; auto cs_new = pls::cs::add_i32(cs_old,1); v_num4_10889 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_arg1 = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list_9468; auto cs_index = v_num4_10889; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = true; v_flag_10838 = cs_value; return cs_value; }());
}
}
for (std::int32_t v_num5_11027 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num5_11027; auto cs_right = (v_list2_9527).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num5_11027; auto cs_new = pls::cs::add_i32(cs_old,1); v_num5_11027 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_arg1 = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_list2_9527; auto cs_index = v_num5_11027; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = true; v_flag2_10861 = cs_value; return cs_value; }());
}
}
pls::cs::Ref<cs_6517d63c01870958> v_option_11171 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_arg0 = v_array_10697; return cs_7ff4169f9e726138(cs_arg0); }());
if ((v_flag_10838 || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left | cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }()))) {
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); auto cs_arg1 = v_num2_10160; auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num3_10188; auto cs_right = v_num2_10160; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = ([&]() { auto cs_receiver = v_touchComponent_8618; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_arg5 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left | cs_right); }()); auto cs_arg6 = v_option_11171; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_30e0326b36c8f3ca(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
if ((v_flag2_10861 || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left | cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }()))) {
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); auto cs_arg1 = v_num2_10160; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent2_8659; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_right = ([&]() { auto cs_receiver = v_touchComponent2_8659; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num3_10188; auto cs_right = v_num2_10160; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); auto cs_arg5 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left | cs_right); }()); auto cs_arg6 = v_option_11171; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_30e0326b36c8f3ca(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
if (([&]() { auto cs_left = pls::cs::box(v_touchComponent3_8701); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
std::int32_t v_num6_11634 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
std::int32_t v_num7_11681 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }());
if (([&]() -> bool { auto cs_left = v_num6_11634; auto cs_right = v_num7_11681; return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_touchComponent3_8701; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); auto cs_old = pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = (cs_old | cs_rhs); pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent3_8701; auto cs_old = pls::game::cs_require(cs_target)->cs_830652d422733c85; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_830652d422733c85 = cs_value; return cs_value; }());
for (std::int32_t v_num8_11831 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num8_11831; auto cs_right = v_componentLength_8774; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num8_11831; auto cs_new = pls::cs::add_i32(cs_old,1); v_num8_11831 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component3_11901 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = v_num8_11831; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component3_11901; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_component3_11901; auto cs_old = pls::game::cs_require(cs_target)->cs_0dcfa10d1674b264; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0dcfa10d1674b264 = cs_value; return cs_value; }());
}
}
}
}
if (([&]() { auto cs_left = pls::cs::box(v_touchComponent4_8743); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg3 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_arg4 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg6 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_93c9e5f80bde9aac(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_30e0326b36c8f3ca(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
std::int32_t v_originX_12171 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }());
std::int32_t v_originY_12204 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }());
float v_scale_12239 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dce74b5b9a4c3556; }())); auto cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScaleRatio(cs_arg0); }()); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); auto cs_arg1 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dce74b5b9a4c3556; }())); auto cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScaleRatio(cs_arg0); }()); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); auto cs_right = pls::game::cs_f32(0x3f800000u); return (cs_left + cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Scale(cs_arg0); }());
for (std::int32_t v_num9_12455 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num9_12455; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Array<std::int32_t>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac0dd82664682ea8; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num9_12455; auto cs_new = pls::cs::add_i32(cs_old,1); v_num9_12455 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array2_12521 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Array<std::int32_t>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac0dd82664682ea8; }())); auto cs_arg0 = v_num9_12455; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_array2_12521; auto cs_index = ([&]() -> std::int32_t { auto cs_left = (v_array2_12521).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Scale(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
std::int32_t v_num10_12658 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull));
std::int32_t v_num11_12678 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
std::int32_t v_num12_12698 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
std::int32_t v_num13_12718 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));
std::int32_t v_num14_12738 = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }());
std::int32_t v_num15_12766 = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }());
std::int32_t v_num16_12794 = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }());
std::int32_t v_num17_12822 = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_12521; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return (cs_left > cs_right); }()))) {
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg1 = v_num19_13084; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = v_num19_13084; return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num20_13321; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(v_num21_13353); auto cs_arg3 = pls::game::cs_f32(0x40a00000u); auto cs_arg4 = static_cast<float>(v_num23_13421); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = static_cast<float>(v_num20_13321); auto cs_arg2 = static_cast<float>(v_num21_13353); auto cs_arg3 = static_cast<float>(v_num22_13385); auto cs_arg4 = static_cast<float>(v_num23_13421); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num20_13321; auto cs_right = v_num22_13385; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(v_num21_13353); auto cs_arg3 = pls::game::cs_f32(0x40a00000u); auto cs_arg4 = static_cast<float>(v_num23_13421); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
if (([&]() -> bool { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num20_13321; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_num18_13030; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num21_13353; auto cs_right = v_num18_13030; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = pls::game::cs_f32(0x40a00000u); auto cs_arg4 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num23_13421; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num20_13321; auto cs_right = v_num18_13030; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num21_13353; auto cs_right = v_num18_13030; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num22_13385; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg4 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num23_13421; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_g; auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num20_13321; auto cs_right = v_num22_13385; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num18_13030; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num21_13353; auto cs_right = v_num18_13030; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = pls::game::cs_f32(0x40a00000u); auto cs_arg4 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num23_13421; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num18_13030; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_08f39eff8cfbd63c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d50a8b4d28d66eeb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_d50a8b4d28d66eeb = cs_value; return cs_value; }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Array<std::int32_t>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac0dd82664682ea8; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8b0f3ef39ceeed6; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_c8b0f3ef39ceeed6 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_scale_12239; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Scale(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = v_originX_12171; auto cs_arg1 = v_originY_12204; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(std::static_pointer_cast<cs_9326c27a92cfea3a>(cs_this)); auto cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_77304e19eb4e3af6(cs_receiver,cs_arg0); }());
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
} catch(const pls::cs::Exception& cs_caught_664) {auto cs_exception_664=pls::cs::capture_exception(cs_caught_664);
if(pls::cs::exception_is(cs_exception_664,"System.Exception")) {{

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
// M:surface.GameView.OnTouchDlgPage(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_05183bde71e91f92(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_33406 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect_33446 = pls::cs::Ref<cs_9b21b86f0d2914e0>{};
switch (v_type) {
case 0:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyDown(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_arg4 = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_33446 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_33446; auto cs_value = pls::game::cs_f32(0xc1200000u); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_arg4 = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_33446 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_33446; auto cs_value = pls::game::cs_f32(0x41200000u); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); auto cs_arg4 = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_33446 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_33446; auto cs_value = pls::game::cs_f32(0xc1200000u); pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x13ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); auto cs_arg4 = v_component_33406; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_33446 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_33446; auto cs_value = pls::game::cs_f32(0x41200000u); pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889 = cs_value; return cs_value; }());
}
break;
}
case 6:
case 10:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyUp(cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_arg4 = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_34323 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_34323; auto cs_value = pls::game::cs_f32(0xc1200000u); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_arg4 = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_34323 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_34323; auto cs_value = pls::game::cs_f32(0x41200000u); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); auto cs_arg4 = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_34323 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_34323; auto cs_value = pls::game::cs_f32(0xc1200000u); pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x13ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); auto cs_arg2 = ([&]() { auto cs_receiver = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); auto cs_arg4 = v_component_34283; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_94ba728de1847ec7(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_touchEffect_34323 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEffect_34323; auto cs_value = pls::game::cs_f32(0x41200000u); pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889 = cs_value; return cs_value; }());
}
break;
}
case 1:
case 2:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_34283); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e303336fe5f1c8b9; }()); auto cs_right = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_34283); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_e303336fe5f1c8b9 = cs_value; return cs_value; }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
}
break;
}
case 6:
case 10:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_v; return pls::cs::shl_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c545d9fff10e97de(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyUp(cs_arg0); }());
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
// M:surface.GameView.OnTouchEvent(kairo.unity.surface.TouchEvent)
void cs_6a8c2fe4a5f21440(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_31516 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
if (pls::game::cs_is<pls::cs::Ref<cs_5451b2154f09f4c5>>(pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }())))) {
pls::cs::Ref<cs_5451b2154f09f4c5> v_myFormBase_31595 = pls::cs::unbox<pls::cs::Ref<cs_5451b2154f09f4c5>>(pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }())));
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(v_myFormBase_31595); auto cs_arg0 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_7a6109cc91f876a5(cs_arg0); }())))) {
return;
}
}
switch (([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }())) {
case 0:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_20a2c295f3df77da(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 1:
case 18:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_05183bde71e91f92(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 26:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7df5722f15d9103a(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 24:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_05183bde71e91f92(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 2:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9e7500152d9a882a(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 3:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d4e5a1e089490a84(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 4:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d234a499a2d0fedd(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 5:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a1a15f07b87846c7(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 6:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ec59059ca1eb3937(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 7:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5c5d7c393357b952(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 8:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_80bc2f474a7661c0(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 9:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_21a10cf0ef11fc34(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 10:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_febe94c212ee7182(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 11:
case 23:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_95948e152b24f51c(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 12:
case 14:
case 15:
case 22:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8097b6631da89434(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 13:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8c7afeb19f0309c4(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 16:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d9b98385147ebb44(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 17:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4829fca470a89cdf(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 19:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_803a8f1cabc10a01(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 20:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d234a499a2d0fedd(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 21:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d234a499a2d0fedd(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
break;
}
case 27:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_component_31516; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_arg2 = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4460ad3847e3a9c5(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
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
// M:surface.GameView.OnTouchMainMenu(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void cs_80bc2f474a7661c0(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_e315dac1df3b175d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::kairo::FormBase> v_va_37406 = pls::cs::Ref<pls::kairo::FormBase>{};
for (std::int32_t v_i_37429 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_37429; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_37429; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_37429 = cs_new; return cs_old; }())) {
pls::cs::Ref<pls::kairo::FormBase> v_form_37487 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); auto cs_arg0 = v_i_37429; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }());
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_form_37487); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_a2cea92715051fa5>>(pls::cs::box(v_form_37487))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f99225d8bef89680; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = v_form_37487; v_va_37406 = cs_value; return cs_value; }());
break;
}
}
switch (v_type) {
case 1:
case 2:
{
if (([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_19ca6d3dec6d9bd3(cs_receiver,cs_arg0); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_v; auto cs_arg1 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7fe16b2e413fed73(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57645038112781fd; }())); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_va_37406; auto cs_arg1 = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_88dab825dd82b135(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_v; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }())); return (cs_left != cs_right); }())) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_af72b94facaef62c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e315dac1df3b175d>>(cs_this); auto cs_arg0 = v_va_37406; auto cs_arg1 = v_v; auto cs_arg2 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_624bee8cd9f911a1(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
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
// M:surface.SurfaceManager.#ctor
pls::cs::Ref<cs_f9cfa6da3459412e> cs_eaf2a1260918d30d() { cs_init_f9cfa6da3459412e();
{ auto cs_this = pls::cs::make_ref<cs_f9cfa6da3459412e>(); cs_eaf2a1260918d30d_init(cs_this); return cs_this; }
}
void cs_eaf2a1260918d30d_init(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this) {
([&]() { cs_03e2f5f2e825917f_init(std::static_pointer_cast<cs_4a8bef2ab48b32d7>(cs_this)); }());
{

}
}
// M:surface.SurfaceManager.DrawComponents(kairo.unity.ui.Graphics)
void cs_ae992fe0dbd4a316(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() { auto cs_receiver = cs_a68df2bae0e22f44(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02d52a36c316037d; }()) && ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1ed6a55cc3c2bbc8(cs_receiver); }()) || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1ed6a55cc3c2bbc8(cs_receiver); }()))))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(std::static_pointer_cast<cs_4a8bef2ab48b32d7>(cs_this)); auto cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fb350f55fa7620cd(cs_receiver,cs_arg0); }());
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
// M:surface.TouchEffect.Init(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent)
void cs_e8150d06f5e6c2cc(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component) { cs_init_9b21b86f0d2914e0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9b21b86f0d2914e0>>(cs_this); auto cs_arg0 = v_surface; auto cs_arg1 = v_id; auto cs_arg2 = v_x; auto cs_arg3 = v_y; auto cs_arg4 = v_component; auto cs_arg5 = pls::cs::Ref<pls::cs::Object>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5e534500fa7e2dfa(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
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
// M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent)
pls::cs::Ref<cs_9b21b86f0d2914e0> cs_0f9186fdb6403602(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); auto cs_arg0 = v_surface; auto cs_arg1 = v_id; auto cs_arg2 = v_x; auto cs_arg3 = v_y; auto cs_arg4 = v_component; auto cs_arg5 = pls::cs::Ref<pls::cs::Object>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2be5d3359f23ac72(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
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
} catch(const pls::cs::Exception& cs_caught_668) {auto cs_exception_668=pls::cs::capture_exception(cs_caught_668);
if(pls::cs::exception_is(cs_exception_668,"System.Exception")) {auto v_t_1054=cs_exception_668;{
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
// M:system.billing.MyBilling.Cancel(system.billing.ui.ApplyTask)
void cs_4b3a4c3c146ac496(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task) { cs_init_08829eb6a4df2a40();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return;
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
// M:system.billing.MyBilling.ExecuteApplyTask(system.billing.ui.ApplyTask)
bool cs_988a3445769c5f7e(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task) { cs_init_08829eb6a4df2a40();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}
// M:system.billing.MyBilling.GetBillingTable
pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_bb154ea958b26a29(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this) { cs_init_08829eb6a4df2a40();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
bool v_flag_1148 = ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());
return ([&](){auto cs_initial_array_669=pls::cs::Array<pls::cs::Array<pls::cs::String>>::make(4);cs_initial_array_669.at(0)=([&](){auto cs_initial_array_670=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_670.at(0)=pls::cs::String(std::u16string(u"\x0030" u"\x0030" u"",2));cs_initial_array_670.at(1)=pls::cs::String(std::u16string(u"\x0030" u"\x0030" u"\x0030" u"\x0030" u"",4));cs_initial_array_670.at(2)=pls::cs::String(std::u16string(u"\x0061" u"\x0064" u"\x005f" u"\x006f" u"\x0066" u"\x0066" u"\x005f" u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"\x0030" u"",12));cs_initial_array_670.at(3)=((v_flag_1148) ? pls::cs::String(std::u16string(u"\x5e83" u"\x544a" u"\x004f" u"\x0046" u"\x0046" u"\x002b" u"\x6a2a" u"\x56de" u"\x8ee2" u"",9)) : pls::cs::String(std::u16string(u"\x0052" u"\x0065" u"\x006d" u"\x006f" u"\x0076" u"\x0065" u"\x0020" u"\x0061" u"\x0064" u"\x0073" u"",10)));cs_initial_array_670.at(4)=pls::cs::String(u"");cs_initial_array_670.at(5)=pls::cs::String(std::u16string(u"\x0030" u"",1));cs_initial_array_670.at(6)=pls::cs::String(u"");return cs_initial_array_670;}());cs_initial_array_669.at(1)=([&](){auto cs_initial_array_671=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_671.at(0)=pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"",2));cs_initial_array_671.at(1)=pls::cs::String(std::u16string(u"\x0031" u"\x0031" u"\x0030" u"\x0030" u"",4));cs_initial_array_671.at(2)=pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x005f" u"\x0031" u"\x005f" u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"\x0030" u"",14));cs_initial_array_671.at(3)=((v_flag_1148) ? pls::cs::String(std::u16string(u"\xff81" u"\xff79" u"\xff6f" u"\xff84" u"\x007c" u"\x679a" u"\x007c" u"\x679a" u"",8)) : pls::cs::String(std::u16string(u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x007c" u"\x007c" u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"",14)));cs_initial_array_671.at(4)=pls::cs::String(u"");cs_initial_array_671.at(5)=pls::cs::String(std::u16string(u"\x0030" u"",1));cs_initial_array_671.at(6)=pls::cs::String(u"");return cs_initial_array_671;}());cs_initial_array_669.at(2)=([&](){auto cs_initial_array_672=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_672.at(0)=pls::cs::String(std::u16string(u"\x0032" u"\x0030" u"",2));cs_initial_array_672.at(1)=pls::cs::String(std::u16string(u"\x0030" u"\x0031" u"\x0030" u"\x0030" u"",4));cs_initial_array_672.at(2)=pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x005f" u"\x0031" u"\x0030" u"\x005f" u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"\x0030" u"\x005f" u"\x0030" u"\x0030" u"",18));cs_initial_array_672.at(3)=((v_flag_1148) ? pls::cs::String(std::u16string(u"\xff81" u"\xff79" u"\xff6f" u"\xff84" u"\x007c" u"\x679a" u"\x007c" u"\x679a" u"\xff7e" u"\xff6f" u"\xff84" u"",11)) : pls::cs::String(std::u16string(u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x0073" u"\x007c" u"\x007c" u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x0073" u"",16)));cs_initial_array_672.at(4)=pls::cs::String(u"");cs_initial_array_672.at(5)=pls::cs::String(std::u16string(u"\x0030" u"",1));cs_initial_array_672.at(6)=pls::cs::String(u"");return cs_initial_array_672;}());cs_initial_array_669.at(3)=([&](){auto cs_initial_array_673=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_673.at(0)=pls::cs::String(std::u16string(u"\x0032" u"\x0031" u"",2));cs_initial_array_673.at(1)=pls::cs::String(std::u16string(u"\x0030" u"\x0031" u"\x0030" u"\x0030" u"",4));cs_initial_array_673.at(2)=pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x005f" u"\x0031" u"\x0030" u"\x005f" u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"\x0030" u"\x005f" u"\x0030" u"\x0031" u"",18));cs_initial_array_673.at(3)=((v_flag_1148) ? pls::cs::String(std::u16string(u"\xff81" u"\xff79" u"\xff6f" u"\xff84" u"\x007c" u"\x679a" u"\x007c" u"\x679a" u"\xff7e" u"\xff6f" u"\xff84" u"",11)) : pls::cs::String(std::u16string(u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x0073" u"\x007c" u"\x007c" u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x0073" u"",16)));cs_initial_array_673.at(4)=pls::cs::String(u"");cs_initial_array_673.at(5)=pls::cs::String(std::u16string(u"\x0030" u"",1));cs_initial_array_673.at(6)=pls::cs::String(u"");return cs_initial_array_673;}());return cs_initial_array_669;}());
}
}
}
// M:system.billing.MyBilling.Provisioning(system.billing.ui.ApplyTask)
void cs_9194ae34030bef1a(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task) { cs_init_08829eb6a4df2a40();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return;
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
} catch(const pls::cs::Exception& cs_caught_674) {auto cs_exception_674=pls::cs::capture_exception(cs_caught_674);
if(pls::cs::exception_is(cs_exception_674,"System.Exception")) {{

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
} catch(const pls::cs::Exception& cs_caught_675) {auto cs_exception_675=pls::cs::capture_exception(cs_caught_675);
if(pls::cs::exception_is(cs_exception_675,"System.Exception")) {{

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
// M:system.billing.ui.BillingManager.Cancel(system.billing.ui.ApplyTask)
void cs_5255d4c2789eac48(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return;
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
// M:system.billing.ui.BillingManager.ConnectGetMarketPurchase
pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_aa921fb14f112d41(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::Array<pls::cs::Array<pls::cs::String>>{};
}
}
}
// M:system.billing.ui.BillingManager.ConnectRegistMarketPurchase
void cs_ce96308860792979(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return;
}
}
}
// M:system.billing.ui.BillingManager.ExecuteApplyTask(system.billing.ui.ApplyTask)
bool cs_39912b67b6e00cf6(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
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
// M:system.billing.ui.BillingManager.LaunchPurchaseFlow(system.billing.ui.BillingItem)
bool cs_f3ece5a1d40dcbef(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item) { cs_init_6ee7d14059be1acf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
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
if (([&]() -> bool {
