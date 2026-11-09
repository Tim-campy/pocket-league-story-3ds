 if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_848dae40f6538a32; }()); auto cs_index = v_num_30686; return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8b12faa23ea1f67; }()); auto cs_index = v_num_30686; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8b12faa23ea1f67; }()); auto cs_index = v_num_30686; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { return cs_f7e61b586cae64ba(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent_30892 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8b12faa23ea1f67; }()); auto cs_index = v_num_30686; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_848dae40f6538a32; }()); auto cs_index = v_num_30686; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_848dae40f6538a32; }()); auto cs_index = v_num_30686; auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if ((([&]() -> bool { auto cs_left = v_num_30686; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_touchEvent_30892; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::int32_t>>{}); return cs_left == cs_right; }()))) {
([&]() { auto cs_target = v_touchEvent_30892; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = ([&](){auto cs_initial_array_180=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_180.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));cs_initial_array_180.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));return cs_initial_array_180;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_8d755a9f926cf434 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEvent_30892; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = ([&](){auto cs_initial_array_181=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_181.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));cs_initial_array_181.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));return cs_initial_array_181;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_1e8c6984f2271d7b = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_757516ce190cf813>>(v_touchEvent_30892); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_76be1a4ec43b41ef(cs_receiver); }());
([&]() { auto cs_target = v_touchEvent_30892; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_4c4f6c2ffd41c9ca = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEvent_30892; auto cs_value = v_component; pls::game::cs_require(cs_target)->cs_613db60c2c58fddc = cs_value; return cs_value; }());
return v_touchEvent_30892;
}
}
}
// M:kairo.unity.surface.SurfaceBase.CreateTouchPoint(System.Int64,System.Single,System.Single,kairo.unity.surface.TouchComponent)
pls::cs::Ref<cs_70b7974d356d68ab> cs_8636a26efe9d2eb5(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int64_t v_key,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint_10220 = pls::cs::Ref<cs_70b7974d356d68ab>{};
for (std::int32_t v_i_10251 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_10251; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8d54585ad9a7509; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_10251; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_10251 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint2_10312 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8d54585ad9a7509; }())); std::int32_t cs_arg0 = v_i_10251; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if (((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); pls::cs::Ref<cs_70b7974d356d68ab> cs_arg0 = v_touchPoint2_10312; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56806ca0201c5fb9(cs_receiver,cs_arg0); }()))) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); pls::cs::Ref<cs_70b7974d356d68ab> cs_arg0 = v_touchPoint2_10312; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56806ca0201c5fb9(cs_receiver,cs_arg0); }()))))) {
([&]() { auto cs_value = v_touchPoint2_10312; v_touchPoint_10220 = cs_value; return cs_value; }());
break;
}
}
if (([&]() { auto cs_left = pls::cs::box(v_touchPoint_10220); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8d54585ad9a7509; }())); pls::cs::Ref<cs_70b7974d356d68ab> cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { return cs_939028c47866c657(); }()); v_touchPoint_10220 = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_70b7974d356d68ab>>(v_touchPoint_10220); std::int64_t cs_arg0 = v_key; float cs_arg1 = v_x; float cs_arg2 = v_y; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg3 = v_component; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dbab81fd91425aae(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
return v_touchPoint_10220;
}
}
}
// M:kairo.unity.surface.SurfaceBase.DoBegin
void cs_43e8c5a72fc9d69b(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_974403b828a4cbb8 = cs_value; return cs_value; }());
double v_num_10734 = static_cast<double>(([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_78190c2307d8886c; }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
for (std::int32_t v_i_10809 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_10809; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_848dae40f6538a32; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_10809; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_10809 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_848dae40f6538a32; }()); auto cs_index = v_i_10809; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (std::int32_t v_j_10909 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_10909; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_10909; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_10909 = cs_new; return cs_old; }())) {
pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> v_vector_10956 = (((([&]() -> bool { auto cs_left = v_j_10909; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) ? ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }()) : ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())));
for (std::int32_t v_num2_11025 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(v_vector_10956); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num2_11025; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num2_11025; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_11025 = cs_new; return cs_old; }())) {
bool v_flag_11086 = true;
for (std::int32_t v_k_11113 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_11113; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_11113; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_11113 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> cs_arg0 = v_vector_10956; std::int64_t cs_arg1 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); std::int32_t cs_arg0 = v_k_11113; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_67202387fb4b4cca(cs_receiver,cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = false; v_flag_11086 = cs_value; return cs_value; }());
break;
}
}
if (v_flag_11086) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(v_vector_10956); std::int32_t cs_arg0 = v_num2_11025; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_07a9daa229d89929; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(v_vector_10956); std::int32_t cs_arg0 = v_num2_11025; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
}
}
for (std::int32_t v_l_11450 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_11450; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_11450; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_11450 = cs_new; return cs_old; }())) {
for (std::int32_t v_num3_11508 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num3_11508; auto cs_right = v_l_11450; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num3_11508; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_11508 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent_11583 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = v_num3_11508; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent2_11653 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); std::int32_t cs_arg0 = v_num3_11508; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent_11583); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c6d10dc3c886403b(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent2_11653); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c6d10dc3c886403b(cs_receiver); }()); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = v_touchComponent_11583; std::int32_t cs_arg1 = v_num3_11508; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_221133265c339075(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = v_touchComponent2_11653; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num3_11508; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_221133265c339075(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_75dcbdf2f80cf9d3(cs_receiver); }())))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a07960f3828b6654; }()); auto cs_right = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_81c662bf139f2e37; }())); return (cs_left - cs_right); }()))); auto cs_right = v_num_10734; return (cs_left / cs_right); }()))); pls::game::cs_require(cs_target)->cs_829b7d2daa7d373f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2122c67a220ad5; }()); auto cs_right = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c787628daa40a814; }())); return (cs_left - cs_right); }()))); auto cs_right = v_num_10734; return (cs_left / cs_right); }()))); pls::game::cs_require(cs_target)->cs_e6ef35e36e4dfee7 = cs_value; return cs_value; }());
}
if (([&]() { pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>> cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }()); pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_right = pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>{}; return pls::generated::cs_391891c911ef6b0a(cs_left,cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>> { return pls::generated::cs_946b70ecd88b233a<pls::cs::Ref<cs_757516ce190cf813>>(); }()); pls::game::cs_require(cs_target)->cs_7fc3d16947dee37a = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.DoEnd
void cs_f7a60b8dd9e85732(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
double v_num_12233 = static_cast<double>(([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_78190c2307d8886c; }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()));
std::int32_t v_num2_12266 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_75dcbdf2f80cf9d3(cs_receiver); }())))) {
std::int32_t v_num3_12332 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a07960f3828b6654; }()); auto cs_right = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_81c662bf139f2e37; }())); return (cs_left - cs_right); }()))); auto cs_right = v_num_12233; return (cs_left / cs_right); }())));
std::int32_t v_num4_12391 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2122c67a220ad5; }()); auto cs_right = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c787628daa40a814; }())); return (cs_left - cs_right); }()))); auto cs_right = v_num_12233; return (cs_left / cs_right); }())));
for (std::int32_t v_num5_12455 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num5_12455; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num5_12455; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num5_12455 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint_12530 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); std::int32_t cs_arg0 = v_num5_12455; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
std::int32_t v_num6_12584 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());
for (std::int32_t v_i_12625 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_12625; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_12625; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_12625 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent_12685 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); std::int32_t cs_arg0 = v_i_12625; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_receiver = v_touchEvent_12685; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); auto cs_right = ([&]() { auto cs_receiver = v_touchPoint_12530; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69110646eac3c92f; }()); return (cs_left == cs_right); }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_757516ce190cf813>>(v_touchEvent_12685); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b85e74354de5635b(cs_receiver); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); v_num6_12584 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() -> std::int32_t { auto cs_left = v_i_12625; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); v_num6_12584 = cs_value; return cs_value; }());
}
}
}
if (([&]() -> bool { auto cs_left = v_num6_12584; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_12933 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_touchPoint_12530; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3b9b9f07493bab63; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_touchPoint_12530; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0556df4715acbd82; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bc6be8a193cbe380(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() { auto cs_left = pls::cs::box(v_component_12933); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_component_12933; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); std::int32_t cs_arg1 = v_num6_12584; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b9d1ea00d1f689ef(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }()); std::int64_t cs_arg1 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_12933); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_67202387fb4b4cca(cs_receiver,cs_arg0,cs_arg1); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_component_12933; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num6_12584; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b9d1ea00d1f689ef(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
for (std::int32_t v_j_13337 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_13337; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_13337; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_13337 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent_13399 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); std::int32_t cs_arg0 = v_j_13337; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
bool v_flag_13452 = false;
for (std::int32_t v_num7_13480 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num7_13480; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num7_13480; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num7_13480 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent2_13554 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); std::int32_t cs_arg0 = v_num7_13480; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_touchEvent2_13554; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); auto cs_right = pls::cs::box(v_touchComponent_13399); return cs_left == cs_right; }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_757516ce190cf813>>(v_touchEvent2_13554); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b85e74354de5635b(cs_receiver); }()))) {
([&]() { auto cs_value = true; v_flag_13452 = cs_value; return cs_value; }());
break;
}
}
if (v_flag_13452) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); pls::cs::Ref<cs_70b7974d356d68ab> cs_arg0 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int64_t cs_arg0 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent_13399); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); float cs_arg1 = static_cast<float>(v_num3_12332); float cs_arg2 = static_cast<float>(v_num4_12391); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg3 = v_touchComponent_13399; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_8636a26efe9d2eb5(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
}
for (std::int32_t v_num8_13878 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num8_13878; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num8_13878; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num8_13878 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint2_13954 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); std::int32_t cs_arg0 = v_num8_13878; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
bool v_flag2_14011 = true;
for (std::int32_t v_k_14039 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_14039; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_14039; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_14039 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint3_14102 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); std::int32_t cs_arg0 = v_k_14039; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchPoint2_13954; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69110646eac3c92f; }()); auto cs_right = ([&]() { auto cs_receiver = v_touchPoint3_14102; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69110646eac3c92f; }()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = false; v_flag2_14011 = cs_value; return cs_value; }());
break;
}
}
if (v_flag2_14011) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); std::int32_t cs_arg0 = v_num8_13878; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
}
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_9a72feb799163299 = cs_value; return cs_value; }());
for (std::int32_t v_l_14369 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_14369; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_14369; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_14369 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); std::int32_t cs_arg0 = v_l_14369; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())); pls::game::cs_require(cs_target)->cs_267c8d43843f9788 = cs_value; return cs_value; }());
if ((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_267c8d43843f9788; }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
}
}
for (std::int32_t v_m_14648 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_14648; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_14648; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_14648 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint4_14707 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); std::int32_t cs_arg0 = v_m_14648; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
std::int32_t v_num9_14758 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
for (std::int32_t v_n_14782 = v_num2_12266; ([&]() -> bool { auto cs_left = v_n_14782; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_14782; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_14782 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_757516ce190cf813>>(([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); std::int32_t cs_arg0 = v_n_14782; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b85e74354de5635b(cs_receiver); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_n_14782; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num9_14758 = cs_value; return cs_value; }());
break;
}
}
if (([&]() -> bool { auto cs_left = v_num9_14758; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); v_num9_14758 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = ([&]() { auto cs_receiver = v_touchPoint4_14707; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_07a9daa229d89929; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); std::int32_t cs_arg1 = v_num9_14758; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b9d1ea00d1f689ef(cs_receiver,cs_arg0,cs_arg1); }());
}
pls::cs::Ref<cs_e1ac8ca60ae0d404> v_motionEventRecord_15106 = ((((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_75dcbdf2f80cf9d3(cs_receiver); }())))) ? ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()) : ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_711ed50ca021ec51; }())));
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_motionEventRecord_15106); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_75dcbdf2f80cf9d3(cs_receiver); }())))) {
std::int32_t v_x_15215 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = v_motionEventRecord_15106; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a07960f3828b6654; }()); auto cs_right = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_81c662bf139f2e37; }())); return (cs_left - cs_right); }()))); auto cs_right = v_num_12233; return (cs_left / cs_right); }())));
std::int32_t v_y_15283 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = v_motionEventRecord_15106; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2122c67a220ad5; }()); auto cs_right = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c787628daa40a814; }())); return (cs_left - cs_right); }()))); auto cs_right = v_num_12233; return (cs_left / cs_right); }())));
float v_speedX_15353 = pls::game::cs_f32(0x00000000u);
float v_speedY_15376 = pls::game::cs_f32(0x00000000u);
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_motionEventRecord_15106; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b2d35947212f5095; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = v_motionEventRecord_15106; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19197b1eca33954; }()); auto cs_right = ([&]() { auto cs_receiver = v_motionEventRecord_15106; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b2d35947212f5095; }()); return (cs_left / cs_right); }()); v_speedX_15353 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = v_motionEventRecord_15106; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_03e6582cfb7c53c4; }()); auto cs_right = ([&]() { auto cs_receiver = v_motionEventRecord_15106; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b2d35947212f5095; }()); return (cs_left / cs_right); }()); v_speedY_15376 = cs_value; return cs_value; }());
}
for (std::int32_t v_num10_15596 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num10_15596; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num10_15596; auto cs_new = pls::cs::add_i32(cs_old,1); v_num10_15596 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent3_15667 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); std::int32_t cs_arg0 = v_num10_15596; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent3_15667; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_15667; auto cs_value = v_x_15215; pls::game::cs_require(cs_target)->cs_514f5ce520685c7d = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEvent3_15667; auto cs_value = v_y_15283; pls::game::cs_require(cs_target)->cs_5d55f15261994422 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEvent3_15667; auto cs_value = v_speedX_15353; pls::game::cs_require(cs_target)->cs_4760729595bf56db = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEvent3_15667; auto cs_value = v_speedY_15376; pls::game::cs_require(cs_target)->cs_34b944f664f45179 = cs_value; return cs_value; }());
}
}
}
while (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
pls::cs::Ref<cs_757516ce190cf813> v_evt_15945 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_0d26c45ae3c275d4(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = v_evt_15945; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_9f5fde625f99aa16(cs_arg0); }());
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_75dcbdf2f80cf9d3(cs_receiver); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_711ed50ca021ec51; }())); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = cs_this; pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e879b926a94bdd5d(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c23db509fef62bc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7c055166f9b27c04(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7c055166f9b27c04(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_974403b828a4cbb8 = cs_value; return cs_value; }());
for (std::int32_t v_num11_16177 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num11_16177; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5becacd354817f23; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num11_16177; auto cs_new = pls::cs::add_i32(cs_old,1); v_num11_16177 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f376b7177e1111c6; }()); auto cs_index = v_num11_16177; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_77131fb79b6dc21d(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_5becacd354817f23 = cs_value; return cs_value; }());
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8e78aafd74ff9c93; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_cdfbc726afcb4394 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_8e78aafd74ff9c93 = cs_value; return cs_value; }());
}
if (((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdfbc726afcb4394; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { return pls::kairo::DebugInput::get_touchCount(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) && (!(([&]() -> bool { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::DebugInput::GetMouseButton(cs_arg0); }()))))) {
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_8e78aafd74ff9c93 = cs_value; return cs_value; }());
}
}
}
}
// M:kairo.unity.surface.SurfaceBase.DoEvent(kairo.unity.surface.TouchComponent)
bool cs_1698aae3145703cc(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_75dcbdf2f80cf9d3(cs_receiver); }())) {
return false;
}
double v_num_16675 = static_cast<double>(([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_78190c2307d8886c; }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()));
std::int32_t v_num2_16708 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a07960f3828b6654; }()); auto cs_right = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_81c662bf139f2e37; }())); return (cs_left - cs_right); }()))); auto cs_right = v_num_16675; return (cs_left / cs_right); }())));
std::int32_t v_num3_16766 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2122c67a220ad5; }()); auto cs_right = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c787628daa40a814; }())); return (cs_left - cs_right); }()))); auto cs_right = v_num_16675; return (cs_left / cs_right); }())));
std::int32_t v_num4_16824 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c23db509fef62bc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a07960f3828b6654; }()); auto cs_right = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_81c662bf139f2e37; }())); return (cs_left - cs_right); }()))); auto cs_right = v_num_16675; return (cs_left / cs_right); }())));
std::int32_t v_num5_16883 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c23db509fef62bc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2122c67a220ad5; }()); auto cs_right = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c787628daa40a814; }())); return (cs_left - cs_right); }()))); auto cs_right = v_num_16675; return (cs_left / cs_right); }())));
std::int32_t v_action_16942 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }());
pls::cs::Ref<cs_6517d63c01870958> v_option_16980 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_num2_16708; std::int32_t cs_arg1 = v_num3_16766; std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); std::int32_t cs_arg3 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); std::int32_t cs_arg4 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); std::int32_t cs_arg5 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6528c0f17d8d5769(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }())))) {
return false;
}
bool v_flag_17103 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_num4_16824; std::int32_t cs_arg1 = v_num5_16883; std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); std::int32_t cs_arg3 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); std::int32_t cs_arg4 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); std::int32_t cs_arg5 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6528c0f17d8d5769(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
bool v_flag2_17178 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }()); std::int64_t cs_arg1 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_67202387fb4b4cca(cs_receiver,cs_arg0,cs_arg1); }());
std::int32_t v_num6_17236 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }()); std::int64_t cs_arg1 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f1e94a75305f273b(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }()); std::int64_t cs_arg1 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f1e94a75305f273b(cs_receiver,cs_arg0,cs_arg1); }());
std::int32_t v_num7_17342 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent_17383 = pls::cs::Ref<cs_757516ce190cf813>{};
if ((((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }()) && ([&]() -> bool { auto cs_left = v_action_16942; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdfbc726afcb4394; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdfbc726afcb4394; }()); auto cs_right = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); return (cs_left != cs_right); }()))) {
return false;
}
switch (v_action_16942) {
case 0:
cs_switch_17534_section_0: ;
{
if ((!(v_flag2_17178))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_num6_17236; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); pls::game::cs_require(cs_target)->cs_cdfbc726afcb4394 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); pls::cs::Ref<cs_70b7974d356d68ab> cs_arg0 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int64_t cs_arg0 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); float cs_arg1 = static_cast<float>(v_num2_16708); float cs_arg2 = static_cast<float>(v_num3_16766); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg3 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_8636a26efe9d2eb5(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num6_17236 = cs_value; return cs_value; }());
}
}
break;
}
case 1:
cs_switch_17534_section_1: ;
{
if (v_flag2_17178) {
if (([&]() -> bool { auto cs_left = v_num6_17236; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint_17959 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); std::int32_t cs_arg0 = v_num6_17236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
float v_num8_18017 = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = v_touchPoint_17959; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c5b0b4bdfc0bc3e5; }()); auto cs_right = static_cast<float>(v_num2_16708); return (cs_left - cs_right); }());
float v_num9_18064 = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = v_touchPoint_17959; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_80159b241b8b0fb0; }()); auto cs_right = static_cast<float>(v_num3_16766); return (cs_left - cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_num8_18017; auto cs_right = v_num8_18017; return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_num9_18064; auto cs_right = v_num9_18064; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = pls::game::cs_f32(0x43610000u); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
} else {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_17383 = cs_value; return cs_value; }());
goto cs_switch_17534_section_2;
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
} else if ((v_flag_17103 && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c23db509fef62bc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); pls::game::cs_require(cs_target)->cs_cdfbc726afcb4394 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
break;
}
case 2:
cs_switch_17534_section_2: ;
{
if (v_flag2_17178) {
if (([&]() -> bool { auto cs_left = v_num6_17236; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint2_18922 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); std::int32_t cs_arg0 = v_num6_17236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
std::int32_t v_num10_18979 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num11_19000 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if ((([&]() { auto cs_left = pls::cs::box(v_option_16980); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ae43c28ac9b9a7a; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left > cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9581916698464411; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left > cs_right); }()))))) {
float v_num12_19110 = ([&]() -> float { auto cs_left = static_cast<float>(v_num2_16708); auto cs_right = ([&]() { auto cs_receiver = v_touchPoint2_18922; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a14ff763839a39fc; }()); return (cs_left - cs_right); }());
float v_num13_19168 = ([&]() -> float { auto cs_left = static_cast<float>(v_num3_16766); auto cs_right = ([&]() { auto cs_receiver = v_touchPoint2_18922; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdbd50f771e65195; }()); return (cs_left - cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ae43c28ac9b9a7a; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = v_num12_19110; auto cs_right = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ae43c28ac9b9a7a; }()); return (cs_left / cs_right); }()))); v_num10_18979 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9581916698464411; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = v_num13_19168; auto cs_right = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9581916698464411; }()); return (cs_left / cs_right); }()))); v_num11_19000 = cs_value; return cs_value; }());
}
}
if ((([&]() -> bool { auto cs_left = v_num10_18979; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_num11_19000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()))) {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent2_19485 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_touchEvent2_19485; auto cs_value = v_num10_18979; pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEvent2_19485; auto cs_value = v_num11_19000; pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = v_touchEvent2_19485; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = v_touchPoint2_18922; auto cs_old = pls::game::cs_require(cs_target)->cs_a14ff763839a39fc; auto cs_rhs = ([&]() -> float { auto cs_left = static_cast<float>(v_num10_18979); auto cs_right = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ae43c28ac9b9a7a; }()); return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_a14ff763839a39fc = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchPoint2_18922; auto cs_old = pls::game::cs_require(cs_target)->cs_cdbd50f771e65195; auto cs_rhs = ([&]() -> float { auto cs_left = static_cast<float>(v_num11_19000); auto cs_right = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9581916698464411; }()); return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_cdbd50f771e65195 = cs_value; return cs_value; }());
} else if ((([&]() { auto cs_left = pls::cs::box(v_option_16980); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }()))) {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent3_19844 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = static_cast<float>(v_num2_16708); auto cs_right = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); return (cs_left - cs_right); }())); auto cs_right = (([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }())); return (cs_left / cs_right); }())); return (cs_left / cs_right); }()))); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = static_cast<float>(v_num3_16766); auto cs_right = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); return (cs_left - cs_right); }())); auto cs_right = (([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); return (cs_left / cs_right); }())); return (cs_left / cs_right); }()))); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_right = (([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }())).length(); return (cs_left < cs_right); }())) {
std::int32_t v_num14_20314 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num15_20354 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }());
if ((([&]() -> bool { auto cs_left = v_num14_20314; auto cs_right = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c6683c02c87c987a; }()); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c6683c02c87c987a; }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num14_20314; auto cs_right = v_num15_20354; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = v_num14_20314; pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num14_20314; auto cs_right = v_num15_20354; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c6683c02c87c987a; }()); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_old = pls::game::cs_require(cs_target)->cs_c6683c02c87c987a; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_num15_20354; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = v_num14_20314; auto cs_right = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_62b3f795cc04ca10; }()); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_62b3f795cc04ca10; }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num14_20314; auto cs_right = v_num15_20354; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = v_num14_20314; pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num14_20314; auto cs_right = v_num15_20354; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_62b3f795cc04ca10; }()); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_old = pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_num15_20354; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c6683c02c87c987a; }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); return (cs_left >= cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c6683c02c87c987a; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_62b3f795cc04ca10; }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); return (cs_left >= cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_62b3f795cc04ca10; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
} else {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent4_21321 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_touchEvent4_21321; auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>(v_num2_16708); auto cs_right = ([&]() { auto cs_receiver = v_touchPoint2_18922; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c5b0b4bdfc0bc3e5; }()); return (cs_left - cs_right); }()))); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEvent4_21321; auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>(v_num3_16766); auto cs_right = ([&]() { auto cs_receiver = v_touchPoint2_18922; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_80159b241b8b0fb0; }()); return (cs_left - cs_right); }()))); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = v_touchEvent4_21321; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
break;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
if ((v_flag_17103 && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c23db509fef62bc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); pls::game::cs_require(cs_target)->cs_cdfbc726afcb4394 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent5_21804 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_touchEvent5_21804; auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num2_16708; auto cs_right = v_num4_16824; return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEvent5_21804; auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num3_16766; auto cs_right = v_num5_16883; return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = v_touchEvent5_21804; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_num6_17236; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); std::int32_t cs_arg0 = v_num6_17236; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); pls::cs::Ref<cs_70b7974d356d68ab> cs_arg0 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int64_t cs_arg0 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); float cs_arg1 = static_cast<float>(v_num2_16708); float cs_arg2 = static_cast<float>(v_num3_16766); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg3 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_8636a26efe9d2eb5(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num6_17236 = cs_value; return cs_value; }());
}
break;
}
case 3:
cs_switch_17534_section_3: ;
{
break;
}
}
if (([&]() { auto cs_left = pls::cs::box(v_touchEvent_17383); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = v_touchEvent_17383; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
if ((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aa003e283f7a4976; }()) && ([&]() -> bool { auto cs_left = ([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9690e9ad077208d1; }())); auto cs_right = v_num_16675; return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left != cs_right); }()))) {
pls::cs::Array<pls::cs::Array<std::int32_t>> v_array_22334 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }());
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_22334; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_81c662bf139f2e37; }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = v_num_16675; return (cs_left / cs_right); }()))); std::int32_t cs_arg1 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_22334; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c787628daa40a814; }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = v_num_16675; return (cs_left / cs_right); }()))); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); std::int32_t cs_arg3 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); std::int32_t cs_arg4 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); std::int32_t cs_arg5 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6528c0f17d8d5769(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_22334; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_81c662bf139f2e37; }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = v_num_16675; return (cs_left / cs_right); }()))); std::int32_t cs_arg1 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_22334; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c787628daa40a814; }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = v_num_16675; return (cs_left / cs_right); }()))); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); std::int32_t cs_arg3 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); std::int32_t cs_arg4 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); std::int32_t cs_arg5 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6528c0f17d8d5769(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()))) {
std::int32_t v_i_22645 = std::int32_t{};
for (([&]() { auto cs_value = v_num7_17342; v_i_22645 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_i_22645; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_22645; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_22645 = cs_new; return cs_old; }())) {
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_757516ce190cf813>>(([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); std::int32_t cs_arg0 = v_i_22645; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b85e74354de5635b(cs_receiver); }())))) break;
}
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9a72feb799163299; }())) {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent6_22821 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_touchEvent6_22821; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_c0fba19991e5dbf1 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent6_22821; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent6_22821; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent6_22821; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent6_22821; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = v_touchEvent6_22821; std::int32_t cs_arg1 = ([&]() { auto cs_old = v_i_22645; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_22645 = cs_new; return cs_old; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b9d1ea00d1f689ef(cs_receiver,cs_arg0,cs_arg1); }());
}
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent7_23311 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_touchEvent7_23311; auto cs_value = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9690e9ad077208d1; }())); auto cs_right = v_num_16675; return (cs_left / cs_right); }()))); pls::game::cs_require(cs_target)->cs_c0fba19991e5dbf1 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent7_23311; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent7_23311; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent7_23311; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent7_23311; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); pls::cs::Ref<cs_757516ce190cf813> cs_arg0 = v_touchEvent7_23311; std::int32_t cs_arg1 = ([&]() { auto cs_old = v_i_22645; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_22645 = cs_new; return cs_old; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b9d1ea00d1f689ef(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9690e9ad077208d1 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }())) {
return false;
}
return true;
}
}
}
// M:kairo.unity.surface.SurfaceBase.EndTouchRegist(kairo.unity.ui.Graphics)
void cs_77304e19eb4e3af6(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_receiver = cs_this; auto cs_rhs = false; auto cs_value = cs_rhs; cs_6b3ccfcb08f2d196(static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_receiver),cs_value); return cs_value; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.get_registTouch
bool cs_9e885a578815ee7e(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77593d7e6503562f; }())) {
return true;
}
if ((([&]() { auto cs_left = pls::cs::box(pls::kairo::Graphics::GetCurrent()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(pls::kairo::Graphics::GetCurrent()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsGUI(); }()))))) {
return true;
}
return false;
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetComponent(System.Int32,System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_bc6be8a193cbe380(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id,std::int32_t v_value) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_componentLength_26154 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_159596982eb74639(cs_receiver); }());
for (std::int32_t v_i_26206 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_26206; auto cs_right = v_componentLength_26154; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_26206; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_26206 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_26263 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_i_26206; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_26263; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = v_id; return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_26263; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = v_value; return (cs_left == cs_right); }()))) {
return v_component_26263;
}
}
return pls::cs::Ref<cs_3a3d09f9e75a32d2>{};
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetComponent(System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_ed99a71361f12b06(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_index) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> pls::cs::Ref<pls::kairo::Graphics> { return pls::kairo::Graphics::GetCurrent(); }());
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetComponentId(System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_19ca6d3dec6d9bd3(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_componentLength_26467 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_159596982eb74639(cs_receiver); }());
for (std::int32_t v_i_26519 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_26519; auto cs_right = v_componentLength_26467; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_26519; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_26519 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_26576 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); std::int32_t cs_arg0 = v_i_26519; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_26576; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
return v_component_26576;
}
}
return pls::cs::Ref<cs_3a3d09f9e75a32d2>{};
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetComponentLength
std::int32_t cs_159596982eb74639(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> pls::cs::Ref<pls::kairo::Graphics> { return pls::kairo::Graphics::GetCurrent(); }());
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetGameHeight
std::int32_t cs_070a99c8794546df(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_32380 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0b13306ae4757130; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0b13306ae4757130; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_num_32380; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = (([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0b13306ae4757130; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }())); return (cs_left / cs_right); }()))); v_num_32380 = cs_value; return cs_value; }());
}
return v_num_32380;
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetGameWidth
std::int32_t cs_4c27f7203ac15d1e(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_32088 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0b13306ae4757130; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0b13306ae4757130; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_num_32088; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = (([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0b13306ae4757130; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScale(); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }())); return (cs_left / cs_right); }()))); v_num_32088 = cs_value; return cs_value; }());
}
return v_num_32088;
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetHeight
std::int32_t cs_3afc83d4646f8f54(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11dd7a86dc1ba3c2; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetScaleRatio
float cs_e739ab87bfd72b08(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_78190c2307d8886c; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetTouchEventId(System.Int32,System.Int32)
pls::cs::Ref<cs_757516ce190cf813> cs_c01d41baf2e72b63(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id,std::int32_t v_type) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_28917 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_28917; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_28917; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_28917 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent_28974 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); std::int32_t cs_arg0 = v_i_28917; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_touchEvent_28974; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = v_id; return (cs_left == cs_right); }()) && ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent_28974; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = v_type; return (cs_left == cs_right); }()))))) {
return v_touchEvent_28974;
}
}
return pls::cs::Ref<cs_757516ce190cf813>{};
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetTouchEventKey(System.Int64,System.Int32)
pls::cs::Ref<cs_757516ce190cf813> cs_6fe130a06a1a3f4e(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int64_t v_key,std::int32_t v_type) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_29330 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_29330; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_29330; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_29330 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent_29387 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); std::int32_t cs_arg0 = v_i_29330; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_receiver = v_touchEvent_29387; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); auto cs_right = v_key; return (cs_left == cs_right); }()) && ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent_29387; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = v_type; return (cs_left == cs_right); }()))))) {
return v_touchEvent_29387;
}
}
return pls::cs::Ref<cs_757516ce190cf813>{};
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetTouchOffset
std::int32_t cs_aa76afa6918aaccc(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::kairo::Canvas> v_instance_37396 = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());
std::int32_t v_num_37451 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_320eb5a0949e0cfd; }())); auto cs_right = ([&]() -> float { return pls::kairo::DebugInput::get_dpi(); }()); return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x43a00000u); return (cs_left / cs_right); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetResolutionScaleRatio(); }()); return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }())));
if (((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_37396); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsFullscreen(); }()))) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_37396); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetStatusBarPosition(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_old = v_num_37451; auto cs_rhs = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance_37396); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetStatusBarHeight(); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num_37451 = cs_value; return cs_value; }());
}
return v_num_37451;
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetWidth
std::int32_t cs_ef5e1e474cdfff4e(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2079021b1cb62f0d; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetX
std::int32_t cs_099daeab6f59a950(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_81c662bf139f2e37; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetY
std::int32_t cs_e806cfaebaa3c9d5(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c787628daa40a814; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.IsTouch
bool cs_1ed6a55cc3c2bbc8(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_267c8d43843f9788; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.#ctor
pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_ef5589b812f9d157() { cs_init_e1ac8ca60ae0d404();
{ auto cs_this = pls::cs::make_ref<cs_e1ac8ca60ae0d404>(); cs_ef5589b812f9d157_init(cs_this); return cs_this; }
}
void cs_ef5589b812f9d157_init(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this) {
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7c055166f9b27c04(cs_receiver); }());
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Clear
void cs_7c055166f9b27c04(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_7e57fb8b2c00b332 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Copy(kairo.unity.surface.SurfaceBase,kairo.unity.surface.MotionEvent)
void cs_f1026731bc4fecf6(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,pls::cs::Ref<pls::kairo::MotionEvent> v_evt) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetAction(); }()); pls::game::cs_require(cs_target)->cs_7e57fb8b2c00b332 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetX(); }()); pls::game::cs_require(cs_target)->cs_a07960f3828b6654 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetY(); }()); auto cs_right = static_cast<float>((((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsMousePointer(); }())) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)) : (([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surface); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_aa76afa6918aaccc(cs_receiver); }()))))); return (cs_left + cs_right); }()); pls::game::cs_require(cs_target)->cs_0c2122c67a220ad5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetDeltaX(); }()); pls::game::cs_require(cs_target)->cs_d19197b1eca33954 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetDeltaY(); }()); pls::game::cs_require(cs_target)->cs_03e6582cfb7c53c4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetDeltaTime(); }()); pls::game::cs_require(cs_target)->cs_b2d35947212f5095 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(cs_994906ff6b942bc3()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_e373231f616cd1ed> { return cs_2ec538e1b5422edb(); }()); cs_994906ff6b942bc3() = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); pls::cs::Ref<pls::kairo::MotionEvent> cs_arg0 = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f14fdc91c7a10673(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ee485ec02dea0628(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_767548071e1ac66d = cs_value; return cs_value; }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length(); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }())); pls::game::cs_require(cs_target)->cs_5e13f1b59d6187ce = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<float>::make(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->cs_68e37d2551fe1039 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<float>::make(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->cs_445810c66b37725f = cs_value; return cs_value; }());
}
for (std::int32_t v_i_3154 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3154; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3154; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3154 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }()); auto cs_index = v_i_3154; auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); std::int32_t cs_arg0 = v_i_3154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_147cc5906608a16b(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_3154; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); std::int32_t cs_arg0 = v_i_3154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_599cda2fd1d6b522(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_3154; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); std::int32_t cs_arg0 = v_i_3154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d831862e2b588867(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_3154; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); std::int32_t cs_arg0 = v_i_3154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4bab6edd4be5b5fc(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_3154; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); std::int32_t cs_arg0 = v_i_3154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e15d44f506415222(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_3154; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); std::int32_t cs_arg0 = v_i_3154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bb7739e815078f77(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsMousePointer(); }()); pls::game::cs_require(cs_target)->cs_dca7b292fa5b4249 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Copy(kairo.unity.surface.SurfaceBase,kairo.unity.surface.SurfaceBase.MotionEventRecord)
void cs_e879b926a94bdd5d(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,pls::cs::Ref<cs_e1ac8ca60ae0d404> v_evt) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }()); pls::game::cs_require(cs_target)->cs_7e57fb8b2c00b332 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a07960f3828b6654; }()); pls::game::cs_require(cs_target)->cs_a07960f3828b6654 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2122c67a220ad5; }()); pls::game::cs_require(cs_target)->cs_0c2122c67a220ad5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19197b1eca33954; }()); pls::game::cs_require(cs_target)->cs_d19197b1eca33954 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_03e6582cfb7c53c4; }()); pls::game::cs_require(cs_target)->cs_03e6582cfb7c53c4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b2d35947212f5095; }()); pls::game::cs_require(cs_target)->cs_b2d35947212f5095 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dca7b292fa5b4249; }()); pls::game::cs_require(cs_target)->cs_dca7b292fa5b4249 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }()); pls::game::cs_require(cs_target)->cs_767548071e1ac66d = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) {
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length(); auto cs_right = (([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length(); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length()); pls::game::cs_require(cs_target)->cs_5e13f1b59d6187ce = cs_value; return cs_value; }());
}
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())); auto cs_right = pls::cs::box(pls::cs::Array<float>{}); return cs_left != cs_right; }())) {
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())); auto cs_right = pls::cs::box(pls::cs::Array<float>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())).length(); auto cs_right = (([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())).length(); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<float>::make((([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())).length()); pls::game::cs_require(cs_target)->cs_68e37d2551fe1039 = cs_value; return cs_value; }());
}
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())); auto cs_right = pls::cs::box(pls::cs::Array<float>{}); return cs_left != cs_right; }())) {
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())); auto cs_right = pls::cs::box(pls::cs::Array<float>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())).length(); auto cs_right = (([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())).length(); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<float>::make((([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())).length()); pls::game::cs_require(cs_target)->cs_445810c66b37725f = cs_value; return cs_value; }());
}
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetAction
std::int32_t cs_1fc22b186f83ddec(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetPointerCount
std::int32_t cs_40ac27079aeadda5(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetPointerId(System.Int32)
std::int32_t cs_4ccc696f76a5a02e(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,std::int32_t v_pointerIndex) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }()); auto cs_index = v_pointerIndex; return cs_array.get_Item(cs_index); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetX(System.Int32)
float cs_7be670f4053bc836(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,std::int32_t v_index) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetY(System.Int32)
float cs_f83f5dafe8eac875(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,std::int32_t v_index) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.IsEmpty
bool cs_75dcbdf2f80cf9d3(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.IsMousePointer
bool cs_3f051d1070002654(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dca7b292fa5b4249; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.#ctor
pls::cs::Ref<cs_e373231f616cd1ed> cs_2ec538e1b5422edb() { cs_init_e373231f616cd1ed();
{ auto cs_this = pls::cs::make_ref<cs_e373231f616cd1ed>(); cs_2ec538e1b5422edb_init(cs_this); return cs_this; }
}
void cs_2ec538e1b5422edb_init(pls::cs::Ref<cs_e373231f616cd1ed> cs_this) {
{}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaTime(System.Int32)
float cs_bb7739e815078f77(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
try {
return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetDeltaTime(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_193) {auto cs_exception_193=pls::cs::capture_exception(cs_caught_193);
if(pls::cs::exception_is(cs_exception_193,"System.Exception")) {{
return pls::game::cs_f32(0x00000000u);
}}
else {throw;} }
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaX(System.Int32)
float cs_4bab6edd4be5b5fc(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
try {
return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetDeltaX(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_191) {auto cs_exception_191=pls::cs::capture_exception(cs_caught_191);
if(pls::cs::exception_is(cs_exception_191,"System.Exception")) {{
return pls::game::cs_f32(0x00000000u);
}}
else {throw;} }
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaY(System.Int32)
float cs_e15d44f506415222(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
try {
return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetDeltaY(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_192) {auto cs_exception_192=pls::cs::capture_exception(cs_caught_192);
if(pls::cs::exception_is(cs_exception_192,"System.Exception")) {{
return pls::game::cs_f32(0x00000000u);
}}
else {throw;} }
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetPointerCount
std::int32_t cs_ee485ec02dea0628(pls::cs::Ref<cs_e373231f616cd1ed> cs_this) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetPointerCount(); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetPointerId(System.Int32)
std::int32_t cs_147cc5906608a16b(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetPointerId(cs_arg0); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetX(System.Int32)
float cs_599cda2fd1d6b522(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
try {
return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetX(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_189) {auto cs_exception_189=pls::cs::capture_exception(cs_caught_189);
if(pls::cs::exception_is(cs_exception_189,"System.Exception")) {{
return pls::game::cs_f32(0x00000000u);
}}
else {throw;} }
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetY(System.Int32)
float cs_d831862e2b588867(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
try {
return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetY(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_190) {auto cs_exception_190=pls::cs::capture_exception(cs_caught_190);
if(pls::cs::exception_is(cs_exception_190,"System.Exception")) {{
return pls::game::cs_f32(0x00000000u);
}}
else {throw;} }
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.Set(kairo.unity.surface.MotionEvent)
void cs_f14fdc91c7a10673(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,pls::cs::Ref<pls::kairo::MotionEvent> v_evt) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_evt; pls::game::cs_require(cs_target)->cs_6a3564cf80f64631 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.OnDraw(kairo.unity.ui.Graphics)
void cs_0979cd4f20b79179(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_g; pls::game::cs_require(cs_target)->cs_0b13306ae4757130 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fd43e19d8c4585af; }()); cs_receiver.Clear(); }());
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_568eda1d21a5fdb4; }()); cs_receiver.Clear(); }());
pls::cs::run_finally([&]() -> void { {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_07a0bb2e4afc307c(cs_arg0); }());
} }, [&]() {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<pls::kairo::Graphics>{}; pls::game::cs_require(cs_target)->cs_0b13306ae4757130 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fd43e19d8c4585af; }()); cs_receiver.Clear(); }());
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_568eda1d21a5fdb4; }()); cs_receiver.Clear(); }());
});
}
}
}
// M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32,kairo.unity.ui.KeyEvent)
void cs_5bc2a6aa84d89f40(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_keyCode,pls::cs::Ref<pls::kairo::KeyEvent> v_evt) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32)
void cs_e94b5958615f0bf0(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_key) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.surface.SurfaceBase.OnKeyUp(System.Int32,kairo.unity.ui.KeyEvent)
void cs_50b7ab3f6322a4ec(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_keyCode,pls::cs::Ref<pls::kairo::KeyEvent> v_evt) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.surface.SurfaceBase.OnKeyUp(System.Int32)
void cs_49999cff44002120(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_key) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.surface.SurfaceBase.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)
void cs_f10884576b82823a(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::kairo::MotionEvent> v_evt) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
{pls::cs::MonitorScope cs_monitor_188(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b48b2a151f962449; }()));{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(cs_e22ec5a4a308544e()); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = cs_this; pls::cs::Ref<pls::kairo::MotionEvent> cs_arg1 = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f1026731bc4fecf6(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_arg0 = cs_e22ec5a4a308544e(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_77131fb79b6dc21d(cs_receiver,cs_arg0); }());
}}
}
}
}
// M:kairo.unity.surface.SurfaceBase.OnReceiveTouchEvent(kairo.unity.surface.SurfaceBase.MotionEventRecord)
void cs_77131fb79b6dc21d(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<cs_e1ac8ca60ae0d404> v_evt) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
{pls::cs::MonitorScope cs_monitor_182(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_509c67bbf073adfa; }()));{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_974403b828a4cbb8; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5becacd354817f23; }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f376b7177e1111c6; }())).length(); return (cs_left >= cs_right); }())) {
pls::cs::Array<pls::cs::Ref<cs_e1ac8ca60ae0d404>> v_array_34216 = pls::cs::Array<pls::cs::Ref<cs_e1ac8ca60ae0d404>>::make(([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f376b7177e1111c6; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()));
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f376b7177e1111c6; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_array_34216); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f376b7177e1111c6; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() { auto cs_target = v_array_34216; auto cs_index = ([&]() -> std::int32_t { auto cs_left = (v_array_34216).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> pls::cs::Ref<cs_e1ac8ca60ae0d404> { return cs_ef5589b812f9d157(); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = v_array_34216; pls::game::cs_require(cs_target)->cs_f376b7177e1111c6 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f376b7177e1111c6; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5becacd354817f23; }()); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = cs_this; pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_arg1 = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e879b926a94bdd5d(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_5becacd354817f23; auto cs_new = pls::cs::add_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_5becacd354817f23 = cs_new; return cs_old; }());
return;
}
{
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c23db509fef62bc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_75dcbdf2f80cf9d3(cs_receiver); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c23db509fef62bc; }())); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = cs_this; pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_arg1 = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e879b926a94bdd5d(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }())); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = cs_this; pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_arg1 = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e879b926a94bdd5d(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aa003e283f7a4976; }())) {
std::int32_t v_action_34640 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1fc22b186f83ddec(cs_receiver); }());
if ((([&]() -> bool { auto cs_left = v_action_34640; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_action_34640; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = (([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));cs_target.set_Item(cs_index,cs_value);return cs_value;}()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9690e9ad077208d1 = cs_value; return cs_value; }());
return;
}
{
std::int32_t v_num_34838 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) {
std::int32_t v_num2_34936 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num3_34998 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() { auto cs_value = pls::cs::conv_i32(([&]() -> double { double cs_arg0 = static_cast<double>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num2_34936; auto cs_right = v_num2_34936; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num3_34998; auto cs_right = v_num3_34998; return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::generated::cs_6d9bf6060a3effca(cs_arg0); }())); v_num_34838 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = (([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));cs_target.set_Item(cs_index,cs_value);return cs_value;}()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
std::int32_t v_pointerCount_35183 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_40ac27079aeadda5(cs_receiver); }());
for (std::int32_t v_i_35237 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_35237; auto cs_right = v_pointerCount_35183; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_35237; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_35237 = cs_new; return cs_old; }())) {
std::int32_t v_pointerId_35288 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_evt); std::int32_t cs_arg0 = v_i_35237; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4ccc696f76a5a02e(cs_receiver,cs_arg0); }());
if (((([&]() -> bool { auto cs_left = v_pointerId_35288; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left < cs_right); }()) && ((([&]() -> bool { auto cs_left = v_pointerId_35288; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_action_34640; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left != cs_right); }())))) && ((([&]() -> bool { auto cs_left = v_pointerId_35288; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_action_34640; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x106ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x106ull)); return (cs_left != cs_right); }()))))) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = v_i_35237; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::conv_i32(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_evt); std::int32_t cs_arg0 = v_i_35237; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_7be670f4053bc836(cs_receiver,cs_arg0); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = v_i_35237; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::conv_i32(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_evt); std::int32_t cs_arg0 = v_i_35237; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f83f5dafe8eac875(cs_receiver,cs_arg0); }())); auto cs_right = ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3f051d1070002654(cs_receiver); }()) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)) : ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_aa76afa6918aaccc(cs_receiver); }()))); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = v_i_35237; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_pointerId_35288;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
std::int32_t v_num4_35664 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) {
std::int32_t v_num5_35763 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num6_35825 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() { auto cs_value = pls::cs::conv_i32(([&]() -> double { double cs_arg0 = static_cast<double>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num5_35763; auto cs_right = v_num5_35763; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num6_35825; auto cs_right = v_num6_35825; return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::generated::cs_6d9bf6060a3effca(cs_arg0); }())); v_num4_35664 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = v_num_34838; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_35664; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_9a72feb799163299 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = v_num_34838; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_num4_35664; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9690e9ad077208d1 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_9690e9ad077208d1; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_num4_35664; auto cs_right = v_num_34838; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_9690e9ad077208d1 = cs_value; return cs_value; }());
}
}
}
}
}}
}
}
}
// M:kairo.unity.surface.SurfaceBase.SearchTouchId(java.util.Vector{kairo.unity.surface.SurfaceBase.TouchPoint},System.Int32)
std::int32_t cs_f14e41b7fe4df878(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> v_list,std::int32_t v_id) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_27414 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_27414; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(v_list); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_27414; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_27414 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(v_list); std::int32_t cs_arg0 = v_i_27414; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3b9b9f07493bab63; }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
return v_i_27414;
}
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
}
}
// M:kairo.unity.surface.SurfaceBase.SearchTouchKey(java.util.Vector{kairo.unity.surface.SurfaceBase.TouchPoint},System.Int64)
std::int32_t cs_f1e94a75305f273b(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> v_list,std::int64_t v_key) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_27214 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_27214; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(v_list); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_27214; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_27214 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(v_list); std::int32_t cs_arg0 = v_i_27214; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69110646eac3c92f; }()); auto cs_right = v_key; return (cs_left == cs_right); }())) {
return v_i_27214;
}
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
}
}
// M:kairo.unity.surface.SurfaceBase.set_registTouch(System.Boolean)
void cs_6b3ccfcb08f2d196(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,bool v_value) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_77593d7e6503562f = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.SetHeight(System.Int32)
void cs_ee0b408f6e8fa392(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_height) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_height; pls::game::cs_require(cs_target)->cs_11dd7a86dc1ba3c2 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.SetLocation(System.Int32,System.Int32)
void cs_37c74a3ab45030f2(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_x,std::int32_t v_y) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_81c662bf139f2e37 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_c787628daa40a814 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.SetScaleRatio(System.Single)
void cs_8de8ff27e94cbce9(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,float v_scale) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_scale; pls::game::cs_require(cs_target)->cs_78190c2307d8886c = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.SetSize(System.Int32,System.Int32)
void cs_7676075e268ec275(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_width,std::int32_t v_height) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_width; pls::game::cs_require(cs_target)->cs_2079021b1cb62f0d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_height; pls::game::cs_require(cs_target)->cs_11dd7a86dc1ba3c2 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.SetTouchRegistEnable(System.Boolean)
void cs_56dbf0b4836fa803(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,bool v_enable) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_receiver = cs_this; auto cs_rhs = v_enable; auto cs_value = cs_rhs; cs_6b3ccfcb08f2d196(static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_receiver),cs_value); return cs_value; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.TouchPoint.#ctor
pls::cs::Ref<cs_70b7974d356d68ab> cs_939028c47866c657() { cs_init_70b7974d356d68ab();
{ auto cs_this = pls::cs::make_ref<cs_70b7974d356d68ab>(); cs_939028c47866c657_init(cs_this); return cs_this; }
}
void cs_939028c47866c657_init(pls::cs::Ref<cs_70b7974d356d68ab> cs_this) {
{}
}
// M:kairo.unity.surface.SurfaceBase.TouchPoint.Init(System.Int64,System.Single,System.Single,kairo.unity.surface.TouchComponent)
void cs_dbab81fd91425aae(pls::cs::Ref<cs_70b7974d356d68ab> cs_this,std::int64_t v_key,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component) { cs_init_70b7974d356d68ab();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_array_601 = ([&]() -> pls::cs::Array<std::int32_t> { std::int64_t cs_arg0 = v_key; return cs_b37fd969c7a5953c(cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = v_key; pls::game::cs_require(cs_target)->cs_69110646eac3c92f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_c5b0b4bdfc0bc3e5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_80159b241b8b0fb0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_601; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_3b9b9f07493bab63 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_601; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_0556df4715acbd82 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_a14ff763839a39fc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_cdbd50f771e65195 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_component; pls::game::cs_require(cs_target)->cs_07a9daa229d89929 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.#ctor
void cs_03e2f5f2e825917f_init(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this) {
cs_this->cs_6a384974a2464779 = ([&]() -> pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>> { return pls::generated::cs_946b70ecd88b233a<pls::cs::Ref<cs_9326c27a92cfea3a>>(); }());
cs_this->cs_4a2bd2b1dc2b62f7 = pls::cs::Array<pls::cs::Ref<cs_3a3d09f9e75a32d2>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
cs_this->cs_60fc9d5519e72fab = pls::cs::List<pls::cs::Array<pls::kairo::Vector2>>::make();
cs_this->cs_fa643bfe19a61f34 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
cs_this->cs_1503ca63d74f3eef = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
cs_this->cs_ae92969ac71a8af3 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)));
{

}
}
// M:kairo.unity.surface.SurfaceManagerBase.BeginTouchRegist(kairo.unity.ui.Graphics)
void cs_919bc150e4142cc1(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_7080 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7080; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7080; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7080 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_6517d63c01870958> v_touchOption_7144 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678()); std::int32_t cs_arg0 = v_i_7080; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchOption_7144; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4d04dab5735542a9; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = v_touchOption_7144; auto cs_value = false; pls::game::cs_require(cs_target)->cs_a404a90eff0aeb13 = cs_value; return cs_value; }());
}
}
for (std::int32_t v_num_7286 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_7286; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_7286; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_7286 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); std::int32_t cs_arg0 = v_num_7286; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_14c25464911dc345(cs_arg0); }());
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.CheckScreenRotation
void cs_70b3e83e4dd8bf96(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.ClearTouchComponent
void cs_1e0863d8f2b7a360(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_829 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_829; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_829; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_829 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); std::int32_t cs_arg0 = v_num_829; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0a96693c31be1e15(cs_receiver); }());
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.DoEvents
void cs_c311823b6552fdf7(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_988 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_988; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_988; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_988 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); std::int32_t cs_arg0 = v_i_988; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_43e8c5a72fc9d69b(); }());
}
std::int32_t v_num_1083 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_j_1104 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1104; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1104; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1104 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_num_1083; auto cs_rhs = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); std::int32_t cs_arg0 = v_j_1104; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_159596982eb74639(cs_receiver); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_1083 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }())).length(); auto cs_right = v_num_1083; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_3a3d09f9e75a32d2>>::make(v_num_1083); pls::game::cs_require(cs_target)->cs_4a2bd2b1dc2b62f7 = cs_value; return cs_value; }());
}
std::int32_t v_num2_1303 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_k_1325 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_1325; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_1325; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_1325 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9326c27a92cfea3a> v_surfaceBase_1383 = ([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); std::int32_t cs_arg0 = v_k_1325; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
for (std::int32_t v_l_1437 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_1437; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_1383); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_159596982eb74639(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_1437; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_1437 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = ([&]() { auto cs_old = v_num2_1303; auto cs_new = pls::cs::add_i32(cs_old,1); v_num2_1303 = cs_new; return cs_old; }()); auto cs_value = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_1383); std::int32_t cs_arg0 = v_l_1437; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
for (std::int32_t v_m_1572 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_1572; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_1083; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_1572; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_1572 = cs_new; return cs_old; }())) {
for (std::int32_t v_num3_1615 = ([&]() -> std::int32_t { auto cs_left = v_num_1083; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num3_1615; auto cs_right = v_m_1572; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num3_1615; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_1615 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_1615; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c6d10dc3c886403b(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = v_num3_1615; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c6d10dc3c886403b(cs_receiver); }()); return (cs_left > cs_right); }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent_1763 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = v_num3_1615; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = v_num3_1615; auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_1615; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_1615; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_touchComponent_1763;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
for (std::int32_t v_num4_1924 = ([&]() -> std::int32_t { auto cs_left = v_num_1083; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num4_1924; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num4_1924; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num4_1924 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent2_1983 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = v_num4_1924; return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = v_touchComponent2_1983; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c00171d2e322a58; }())); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = v_touchComponent2_1983; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_1698aae3145703cc(cs_arg0); }())) {
break;
}
}
for (std::int32_t v_num5_2120 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num5_2120; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num5_2120; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num5_2120 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); std::int32_t cs_arg0 = v_num5_2120; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_f7a60b8dd9e85732(); }());
}
if (((pls::generated::cs_b0827224162a4f93() && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && ((([&]() -> bool { std::int32_t cs_arg0 = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x130ull))); return pls::kairo::DebugInput::GetKey(cs_arg0); }()) || ([&]() -> bool { std::int32_t cs_arg0 = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12full))); return pls::kairo::DebugInput::GetKey(cs_arg0); }()))))) {
pls::cs::Ref<cs_9326c27a92cfea3a> v_surfaceBase2_2365 = ([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_0d26c45ae3c275d4(cs_receiver); }());
float v_num6_2419 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = (([&]() -> pls::kairo::Vector3 { return pls::kairo::DebugInput::get_mousePosition(); }())).x; auto cs_right = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase2_2365); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }())); return (cs_left - cs_right); }())); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase2_2365); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }());
float v_num7_2528 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { return pls::kairo::DebugInput::screen_height(); }())); auto cs_right = (([&]() -> pls::kairo::Vector3 { return pls::kairo::DebugInput::get_mousePosition(); }())).y; return (cs_left - cs_right); }()); auto cs_right = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase2_2365); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }())); return (cs_left - cs_right); }())); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase2_2365); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }());
float v_num8_2660 = v_num6_2419;
float v_num9_2683 = v_num7_2528;
if (([&]() -> bool { auto cs_left = v_num8_2660; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::game::cs_f32(0x00000000u); v_num8_2660 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num8_2660; auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase2_2365); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase2_2365); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase2_2365); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase2_2365); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }()); v_num8_2660 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num9_2683; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::game::cs_f32(0x00000000u); v_num9_2683 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num9_2683; auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase2_2365); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase2_2365); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase2_2365); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase2_2365); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }()); v_num9_2683 = cs_value; return cs_value; }());
}
if (([&]() -> bool { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::DebugInput::GetMouseButtonDown(cs_arg0); }())) {
std::int32_t v_rectIndex_3206 = std::int32_t{};
std::int32_t v_handleIndex_3226 = std::int32_t{};
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(cs_this); float cs_arg0 = v_num6_2419; float cs_arg1 = v_num7_2528; auto& cs_arg2 = v_rectIndex_3206; auto& cs_arg3 = v_handleIndex_3226; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_221c91752345c75b(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }())))) {
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_arg0 = ([&](){auto cs_initial_array_169=pls::cs::Array<pls::kairo::Vector2>::make(2);cs_initial_array_169.at(0)=([&]() { auto cs_arg0 = v_num8_2660; auto cs_arg1 = v_num9_2683; return pls::kairo::Vector2(cs_arg0,cs_arg1); }());cs_initial_array_169.at(1)=([&]() { auto cs_arg0 = v_num8_2660; auto cs_arg1 = v_num9_2683; return pls::kairo::Vector2(cs_arg0,cs_arg1); }());return cs_initial_array_169;}()); cs_receiver.Add(cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_fa643bfe19a61f34 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_1503ca63d74f3eef = cs_value; return cs_value; }());
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = v_rectIndex_3206; pls::game::cs_require(cs_target)->cs_fa643bfe19a61f34 = cs_value; return cs_value; }());
pls::cs::Array<std::int32_t> v_paintRect_3586 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(cs_this); pls::cs::Array<pls::kairo::Vector2> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ac30f7dfe797187c(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_handleIndex_3226; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&](){auto cs_value_storage_170_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_170_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));auto& cs_value_storage_170=cs_value_storage_170_array.at(cs_value_storage_170_index);auto cs_arg0=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()));auto cs_arg1=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()));cs_value_storage_170.Set(cs_arg0,cs_arg1);}());
([&](){auto cs_value_storage_171_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_171_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));auto& cs_value_storage_171=cs_value_storage_171_array.at(cs_value_storage_171_index);auto cs_arg0=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));auto cs_arg1=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));cs_value_storage_171.Set(cs_arg0,cs_arg1);}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_1503ca63d74f3eef = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_handleIndex_3226; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&](){auto cs_value_storage_172_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_172_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));auto& cs_value_storage_172=cs_value_storage_172_array.at(cs_value_storage_172_index);auto cs_arg0=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()));auto cs_arg1=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));cs_value_storage_172.Set(cs_arg0,cs_arg1);}());
([&](){auto cs_value_storage_173_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_173_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));auto& cs_value_storage_173=cs_value_storage_173_array.at(cs_value_storage_173_index);auto cs_arg0=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));auto cs_arg1=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()));cs_value_storage_173.Set(cs_arg0,cs_arg1);}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_1503ca63d74f3eef = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_handleIndex_3226; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&](){auto cs_value_storage_174_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_174_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));auto& cs_value_storage_174=cs_value_storage_174_array.at(cs_value_storage_174_index);auto cs_arg0=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()));auto cs_arg1=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()));cs_value_storage_174.Set(cs_arg0,cs_arg1);}());
([&](){auto cs_value_storage_175_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_175_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));auto& cs_value_storage_175=cs_value_storage_175_array.at(cs_value_storage_175_index);auto cs_arg0=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));auto cs_arg1=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));cs_value_storage_175.Set(cs_arg0,cs_arg1);}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_1503ca63d74f3eef = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_handleIndex_3226; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
([&](){auto cs_value_storage_176_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_176_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));auto& cs_value_storage_176=cs_value_storage_176_array.at(cs_value_storage_176_index);auto cs_arg0=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()));auto cs_arg1=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));cs_value_storage_176.Set(cs_arg0,cs_arg1);}());
([&](){auto cs_value_storage_177_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_177_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));auto& cs_value_storage_177=cs_value_storage_177_array.at(cs_value_storage_177_index);auto cs_arg0=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));auto cs_arg1=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()));cs_value_storage_177.Set(cs_arg0,cs_arg1);}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_1503ca63d74f3eef = cs_value; return cs_value; }());
}
} else if (([&]() -> bool { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::kairo::DebugInput::GetMouseButtonDown(cs_arg0); }())) {
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); cs_receiver.RemoveAt(cs_arg0); }());
} else {
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); cs_receiver.RemoveAt(cs_arg0); }());
}
}
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_1503ca63d74f3eef = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_fa643bfe19a61f34 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() -> bool { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::DebugInput::GetMouseButton(cs_arg0); }()); auto cs_right = (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())); return (cs_left & cs_right); }())) {
([&]() { auto cs_value_storage_178_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_178_index=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1503ca63d74f3eef; }());auto& cs_value_storage_178=cs_value_storage_178_array.at(cs_value_storage_178_index);auto cs_value = v_num8_2660; cs_value_storage_178.x = cs_value; return cs_value; }());
([&]() { auto cs_value_storage_179_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_179_index=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1503ca63d74f3eef; }());auto& cs_value_storage_179=cs_value_storage_179_array.at(cs_value_storage_179_index);auto cs_value = v_num9_2683; cs_value_storage_179.y = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_fa643bfe19a61f34 = cs_value; return cs_value; }());
}
} else {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_fa643bfe19a61f34 = cs_value; return cs_value; }());
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.Draw(kairo.unity.ui.Graphics)
void cs_a4fa9c8087597dcf(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
bool v_flag_7654 = ([&]() -> bool { return cs_ff50c908347e45e2(); }());
std::int32_t v_i_7686 = std::int32_t{};
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_i_7686 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_i_7686; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7686; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7686 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ResetRender(); }());
if (v_flag_7654) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); bool cs_arg0 = cs_c842d4269c1e5564(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->BeginGLRender(cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); std::int32_t cs_arg0 = v_i_7686; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0979cd4f20b79179(cs_receiver,cs_arg0); }());
if (v_flag_7654) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->EndGLRender(cs_arg0); }());
}
}
if (((pls::generated::cs_b0827224162a4f93() && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
pls::cs::Ref<cs_9326c27a92cfea3a> v_surfaceBase_8017 = ([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_0d26c45ae3c275d4(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Scale(cs_arg0); }());
pls::cs::run_finally([&]() -> void { {
float v_x_8232 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = (([&]() -> pls::kairo::Vector3 { return pls::kairo::DebugInput::get_mousePosition(); }())).x; auto cs_right = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }())); return (cs_left - cs_right); }())); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }());
float v_y_8336 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { return pls::kairo::DebugInput::screen_height(); }())); auto cs_right = (([&]() -> pls::kairo::Vector3 { return pls::kairo::DebugInput::get_mousePosition(); }())).y; return (cs_left - cs_right); }()); auto cs_right = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }())); return (cs_left - cs_right); }())); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }());
std::int32_t v_rectIndex_8461 = std::int32_t{};
std::int32_t v_handleIndex_8480 = std::int32_t{};
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(cs_this); float cs_arg0 = v_x_8232; float cs_arg1 = v_y_8336; auto& cs_arg2 = v_rectIndex_8461; auto& cs_arg3 = v_handleIndex_8480; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_221c91752345c75b(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
for (std::int32_t v_j_8569 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_8569; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }())).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_8569; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_8569 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_paintRect_8621 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(cs_this); pls::cs::Array<pls::kairo::Vector2> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = v_j_8569; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ac30f7dfe797187c(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e6ac3efef08ae1c0(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); auto cs_right = v_j_8569; return (cs_left != cs_right); }()) && ((([&]() -> bool { std::int32_t cs_arg0 = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x130ull))); return pls::kairo::DebugInput::GetKey(cs_arg0); }()) || ([&]() -> bool { std::int32_t cs_arg0 = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12full))); return pls::kairo::DebugInput::GetKey(cs_arg0); }()))))) {
pls::cs::Array<pls::kairo::Vector2> v_paintHandlePoint_8910 = ([&]() -> pls::cs::Array<pls::kairo::Vector2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(cs_this); pls::cs::Array<pls::kairo::Vector2> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = v_j_8569; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_83e2b5e0ec4cdcad(cs_receiver,cs_arg0); }());
for (std::int32_t v_k_8981 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_8981; auto cs_right = (v_paintHandlePoint_8910).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_8981; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_8981 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
if (((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_rectIndex_8461; auto cs_right = v_j_8569; return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = v_handleIndex_8480; auto cs_right = v_k_8981; return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = ([&]() -> float { auto cs_left = (([&]() { auto cs_array = v_paintHandlePoint_8910; auto cs_index = v_k_8981; return cs_array.get_Item(cs_index); }())).x; auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left - cs_right); }()); float cs_arg1 = ([&]() -> float { auto cs_left = (([&]() { auto cs_array = v_paintHandlePoint_8910; auto cs_index = v_k_8981; return cs_array.get_Item(cs_index); }())).y; auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left - cs_right); }()); float cs_arg2 = pls::game::cs_f32(0x40000000u); float cs_arg3 = pls::game::cs_f32(0x40000000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushFont(cs_arg0); }());
pls::cs::String v_text_9325 = pls::cs::String{};
std::int32_t v_height_9340 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); return pls::cs::String::concat(cs_left,cs_right); }()); v_text_9325 = cs_value; return cs_value; }());
std::int32_t v_num_9430 = ([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num2_9459 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_height_9340; return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num2_9459; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num2_9459 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = ([&]() -> float { auto cs_left = static_cast<float>(v_num_9430); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left - cs_right); }()); float cs_arg1 = ([&]() -> float { auto cs_left = static_cast<float>(v_num2_9459); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left - cs_right); }()); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text_9325; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height_9340; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text_9325; float cs_arg1 = static_cast<float>(v_num_9430); float cs_arg2 = static_cast<float>(v_num2_9459); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::String(std::u16string(u"\x0078" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); return pls::cs::String::concat(cs_left,cs_right); }()); v_text_9325 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text_9325; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num_9430 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_8621; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num2_9459 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_num2_9459; auto cs_right = v_height_9340; return pls::cs::add_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()))); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_8017); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); return (cs_left / cs_right); }()); auto cs_right = static_cast<float>(v_height_9340); return (cs_left - cs_right); }()))); v_num2_9459 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = ([&]() -> float { auto cs_left = static_cast<float>(v_num_9430); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left - cs_right); }()); float cs_arg1 = ([&]() -> float { auto cs_left = static_cast<float>(v_num2_9459); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left - cs_right); }()); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text_9325; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height_9340; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text_9325; float cs_arg1 = static_cast<float>(v_num_9430); float cs_arg2 = static_cast<float>(v_num2_9459); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopFont(); }());
}
} }, [&]() {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = pls::game::cs_f32(0x42c80000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Scale(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClearRenderRect(); }());
});
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.DrawComponents(kairo.unity.ui.Graphics)
void cs_fb350f55fa7620cd(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_11537 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_11537; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_11537; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_11537 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9326c27a92cfea3a> v_surfaceBase_11595 = ([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); std::int32_t cs_arg0 = v_i_11537; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
double v_num_11647 = ([&]() -> double { auto cs_left = static_cast<double>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }())); auto cs_right = pls::game::cs_f64(0x4059000000000000ull); return (cs_left / cs_right); }());
for (std::int32_t v_num2_11711 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_159596982eb74639(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num2_11711; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num2_11711; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_11711 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_11801 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); std::int32_t cs_arg0 = v_num2_11711; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdfull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }())))); float cs_arg3 = static_cast<float>(pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }())))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.EndTouchRegist(kairo.unity.ui.Graphics)
void cs_cc1a1bf7edaee778(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_7474 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_7474; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_7474; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_7474 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); std::int32_t cs_arg0 = v_num_7474; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_77304e19eb4e3af6(cs_arg0); }());
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.GetPaintHandlePoint(UnityEngine.Vector2[])
pls::cs::Array<pls::kairo::Vector2> cs_83e2b5e0ec4cdcad(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Array<pls::kairo::Vector2> v_points) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_paintRect_6676 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(cs_this); pls::cs::Array<pls::kairo::Vector2> cs_arg0 = v_points; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ac30f7dfe797187c(cs_receiver,cs_arg0); }());
return ([&](){auto cs_initial_array_183=pls::cs::Array<pls::kairo::Vector2>::make(4);cs_initial_array_183.at(0)=([&]() { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::kairo::Vector2(cs_arg0,cs_arg1); }());cs_initial_array_183.at(1)=([&]() { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::kairo::Vector2(cs_arg0,cs_arg1); }());cs_initial_array_183.at(2)=([&]() { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::kairo::Vector2(cs_arg0,cs_arg1); }());cs_initial_array_183.at(3)=([&]() { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::kairo::Vector2(cs_arg0,cs_arg1); }());return cs_initial_array_183;}());
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.GetPaintRect(UnityEngine.Vector2[])
pls::cs::Array<std::int32_t> cs_ac30f7dfe797187c(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Array<pls::kairo::Vector2> v_points) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_num_6005 = pls::game::cs_f32(0x7f7fffffu);
float v_num2_6036 = pls::game::cs_f32(0x7f7fffffu);
float v_num3_6068 = pls::game::cs_f32(0xff7fffffu);
float v_num4_6100 = pls::game::cs_f32(0xff7fffffu);
{ auto cs_each184 = v_points; for (std::int32_t cs_i184=0; cs_i184<cs_each184.length(); ++cs_i184) { pls::kairo::Vector2 v_vector_6126 = cs_each184.get_Item(cs_i184); {
if (([&]() -> bool { auto cs_left = (v_vector_6126).x; auto cs_right = v_num_6005; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = (v_vector_6126).x; v_num_6005 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (v_vector_6126).y; auto cs_right = v_num2_6036; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = (v_vector_6126).y; v_num2_6036 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (v_vector_6126).x; auto cs_right = v_num3_6068; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = (v_vector_6126).x; v_num3_6068 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (v_vector_6126).y; auto cs_right = v_num4_6100; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = (v_vector_6126).y; v_num4_6100 = cs_value; return cs_value; }());
}
} } }
std::int32_t v_num5_6409 = pls::cs::conv_i32((([&]() -> float { auto cs_left = v_num_6005; auto cs_right = pls::game::cs_f32(0x3dcccccdu); return (cs_left + cs_right); }())));
std::int32_t v_num6_6442 = pls::cs::conv_i32((([&]() -> float { auto cs_left = v_num2_6036; auto cs_right = pls::game::cs_f32(0x3dcccccdu); return (cs_left + cs_right); }())));
std::int32_t v_num7_6476 = ([&]() -> std::int32_t { auto cs_left = pls::cs::conv_i32((([&]() -> float { auto cs_left = v_num3_6068; auto cs_right = pls::game::cs_f32(0x3dcccccdu); return (cs_left + cs_right); }()))); auto cs_right = v_num5_6409; return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num8_6517 = ([&]() -> std::int32_t { auto cs_left = pls::cs::conv_i32((([&]() -> float { auto cs_left = v_num4_6100; auto cs_right = pls::game::cs_f32(0x3dcccccdu); return (cs_left + cs_right); }()))); auto cs_right = v_num6_6442; return pls::cs::sub_i32(cs_left,cs_right); }());
return ([&](){auto cs_initial_array_185=pls::cs::Array<std::int32_t>::make(4);cs_initial_array_185.at(0)=v_num5_6409;cs_initial_array_185.at(1)=v_num6_6442;cs_initial_array_185.at(2)=v_num7_6476;cs_initial_array_185.at(3)=v_num8_6517;return cs_initial_array_185;}());
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.GetSelectPaintPoint(System.Single,System.Single,System.Int32@,System.Int32@)
bool cs_221c91752345c75b(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,float v_x,float v_y,std::int32_t& v_rectIndex,std::int32_t& v_handleIndex) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_recoveredPdbConstSingle_5396 = pls::game::cs_f32(0x42100000u);
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); v_rectIndex = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); v_handleIndex = cs_value; return cs_value; }());
float v_num_5476 = pls::game::cs_f32(0x42100000u);
for (std::int32_t v_i_5499 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5499; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }())).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5499; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5499 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::kairo::Vector2> v_paintHandlePoint_5553 = ([&]() -> pls::cs::Array<pls::kairo::Vector2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(cs_this); pls::cs::Array<pls::kairo::Vector2> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = v_i_5499; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_83e2b5e0ec4cdcad(cs_receiver,cs_arg0); }());
for (std::int32_t v_j_5622 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_5622; auto cs_right = (v_paintHandlePoint_5553).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_5622; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_5622 = cs_new; return cs_old; }())) {
float v_num2_5680 = ([&]() -> float { auto cs_left = v_x; auto cs_right = (([&]() { auto cs_array = v_paintHandlePoint_5553; auto cs_index = v_j_5622; return cs_array.get_Item(cs_index); }())).x; return (cs_left - cs_right); }());
float v_num3_5725 = ([&]() -> float { auto cs_left = v_y; auto cs_right = (([&]() { auto cs_array = v_paintHandlePoint_5553; auto cs_index = v_j_5622; return cs_array.get_Item(cs_index); }())).y; return (cs_left - cs_right); }());
float v_num4_5770 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_num2_5680; auto cs_right = v_num2_5680; return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_num3_5725; auto cs_right = v_num3_5725; return (cs_left * cs_right); }()); return (cs_left + cs_right); }());
if (([&]() -> bool { auto cs_left = v_num4_5770; auto cs_right = v_num_5476; return (cs_left <= cs_right); }())) {
([&]() { auto cs_value = v_num4_5770; v_num_5476 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_i_5499; v_rectIndex = cs_value; return cs_value; }());
([&]() { auto cs_value = v_j_5622; v_handleIndex = cs_value; return cs_value; }());
}
}
}
return ([&]() -> bool { auto cs_left = v_rectIndex; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }());
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.GetSurfaceList
pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>> cs_60d968a93f42ac33(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); std::int32_t cs_arg0 = v_num_12776; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); std::int32_t cs_arg0 = v_keyCode; pls::cs::Ref<pls::kairo::KeyEvent> cs_arg1 = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_5bc2a6aa84d89f40(cs_arg0,cs_arg1); }());
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.OnKeyDown(System.Int32)
void cs_9082ae6a6e574dce(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,std::int32_t v_key) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_12442 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_12442; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_12442; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_12442 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); std::int32_t cs_arg0 = v_num_12442; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); std::int32_t cs_arg0 = v_key; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_e94b5958615f0bf0(cs_arg0); }());
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.OnKeyUp(System.Int32)
void cs_a945708971ce72b3(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,std::int32_t v_key) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_12600 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_12600; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_12600; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_12600 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); std::int32_t cs_arg0 = v_num_12600; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); std::int32_t cs_arg0 = v_key; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_49999cff44002120(cs_receiver,cs_arg0); }());
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
return ([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int32_t> { std::int64_t cs_arg0 = v_key; return cs_b37fd969c7a5953c(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
}
}
// M:kairo.unity.surface.TouchComponent.GetKey
std::int64_t cs_994ec0fb562812be(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> std::int64_t { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); return cs_e0f91f73482fc418(cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.surface.TouchComponent.GetKey(System.Int32,System.Int32)
std::int64_t cs_e0f91f73482fc418(std::int32_t v_id,std::int32_t v_value) { cs_init_3a3d09f9e75a32d2();
{
return ([&]() -> std::int64_t { std::int32_t cs_arg0 = v_id; std::int32_t cs_arg1 = v_value; return cs_d08f1252d303b1f0(cs_arg0,cs_arg1); }());
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
// M:kairo.unity.surface.TouchComponent.SetPaint(System.Int32,System.Int32,System.Int32)
void cs_3b828f63c1e0892e(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this,std::int32_t v_x,std::int32_t v_y,std::int32_t v_frame) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_8c5afd45472d0f2e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_9019c7ffefab6ad8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_frame; pls::game::cs_require(cs_target)->cs_91c876c3ea20d77d = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.surface.TouchComponent.SetPaint(System.Int32,System.Int32)
void cs_82cc310ddbc4a2ea(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this,std::int32_t v_x,std::int32_t v_y) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_8c5afd45472d0f2e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_9019c7ffefab6ad8 = cs_value; return cs_value; }());
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
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::int32_t>>{}); return cs_left != cs_right; }())) {
for (std::int32_t v_i_1270 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1270; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1270; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1270 = cs_new; return cs_old; }())) {
for (std::int32_t v_j_1341 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1341; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = v_i_1270; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1341; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1341 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = v_i_1270; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_1341; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::int32_t>>{}); return cs_left != cs_right; }())) {
for (std::int32_t v_k_1513 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_1513; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_1513; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_1513 = cs_new; return cs_old; }())) {
for (std::int32_t v_l_1582 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_1582; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }()); auto cs_index = v_k_1513; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_1582; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_1582 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }()); auto cs_index = v_k_1513; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_1582; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
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
return ([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); return cs_f8630b89ac30a6e6(cs_arg0); }());
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
if ((!(([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678()); std::int32_t cs_arg0 = v_i_2272; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a404a90eff0aeb13; }())))) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678()); std::int32_t cs_arg0 = v_i_2272; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }()); v_touchOption_2240 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(v_touchOption_2240); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_aeddbf9e363c37fe(cs_receiver); }());
break;
}
}
if (([&]() { auto cs_left = pls::cs::box(v_touchOption_2240); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678()); pls::cs::Ref<cs_6517d63c01870958> cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_8d483d962b875686(); }()); v_touchOption_2240 = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_7969ffc067486ca6(cs_receiver,cs_arg0); }());
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
// M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_5620e4317abf431d(std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_xcells,std::int32_t v_ycells,std::int32_t v_flag) { cs_init_6517d63c01870958();
{
pls::cs::Ref<cs_6517d63c01870958> v_touchOption_3638 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }());
([&]() { auto cs_target = v_touchOption_3638; auto cs_value = ([&](){auto cs_initial_array_675=pls::cs::Array<std::int32_t>::make(6);cs_initial_array_675.at(0)=v_x;cs_initial_array_675.at(1)=v_y;cs_initial_array_675.at(2)=v_w;cs_initial_array_675.at(3)=v_h;cs_initial_array_675.at(4)=v_xcells;cs_initial_array_675.at(5)=v_ycells;return cs_initial_array_675;}()); pls::game::cs_require(cs_target)->cs_bc3ed6e7ac2c682a = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchOption_3638; auto cs_value = v_flag; pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
return v_touchOption_3638;
}
}
// M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_6e486801eeb083a6(std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_xcells,std::int32_t v_ycells) { cs_init_6517d63c01870958();
{
return ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { std::int32_t cs_arg0 = v_x; std::int32_t cs_arg1 = v_y; std::int32_t cs_arg2 = v_w; std::int32_t cs_arg3 = v_h; std::int32_t cs_arg4 = v_xcells; std::int32_t cs_arg5 = v_ycells; std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_5620e4317abf431d(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
// M:kairo.unity.surface.TouchOption.ExtendValues(System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_6f3af12bb51c6a25(pls::cs::Ref<cs_6517d63c01870958> cs_this,std::int32_t v_value) { cs_init_6517d63c01870958();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&](){auto cs_initial_array_674=pls::cs::Array<std::int32_t>::make(1);cs_initial_array_674.at(0)=v_value;return cs_initial_array_674;}()); pls::game::cs_require(cs_target)->cs_58d9bdebab2ca99e = cs_value; return cs_value; }());
return cs_this;
}
}
}
// M:kairo.unity.surface.TouchOption.Flag(System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_f8d0ca2ad798adff(pls::cs::Ref<cs_6517d63c01870958> cs_this,std::int32_t v_flag) { cs_init_6517d63c01870958();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_flag; pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
return cs_this;
}
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
// M:kairo.unity.surface.TouchOption.Margin(System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_de6cd246e5da5ce1(pls::cs::Ref<cs_6517d63c01870958> cs_this,std::int32_t v_left,std::int32_t v_right,std::int32_t v_top,std::int32_t v_bottom) { cs_init_6517d63c01870958();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&](){auto cs_initial_array_653=pls::cs::Array<std::int32_t>::make(4);cs_initial_array_653.at(0)=v_left;cs_initial_array_653.at(1)=v_right;cs_initial_array_653.at(2)=v_top;cs_initial_array_653.at(3)=v_bottom;return cs_initial_array_653;}()); pls::game::cs_require(cs_target)->cs_907bdb29f23c20f6 = cs_value; return cs_value; }());
return cs_this;
}
}
}
// M:kairo.unity.system.appli.GameAppli.IsReleaseAndroid
bool cs_273c34670c40021b(cs_c87dc3d2d0f9440a* cs_this) { cs_init_c87dc3d2d0f9440a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77e1513fb44fb202; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }());
}
}
}
// M:kairo.unity.system.appli.GameAppli.IsReleaseIOS
bool cs_71a196f792672514(cs_c87dc3d2d0f9440a* cs_this) { cs_init_c87dc3d2d0f9440a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_38927e554bfc845e; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }());
}
}
}
// M:kairo.unity.system.KairoBase.#ctor
void cs_d710b4eaf3ab212a_init(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) {
cs_this->cs_bb15809d7dd758fd = true;
cs_this->cs_ac9d14d8fd218a0c = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"",0)); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }());
cs_this->cs_efb4aeef5c6f7590 = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"",0)); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }());
cs_this->cs_a051b3620098d255 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
cs_this->cs_284cc3cac7606c94 = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }());
cs_this->cs_6fe9af9a0c00d125 = pls::cs::Array<pls::cs::String>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
cs_this->cs_bbeeaad9491d7958 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
cs_this->cs_f534ca76cfc62abb = pls::cs::Dictionary<pls::cs::String,std::int32_t>::make();
cs_this->cs_d8c919de6b5bfad1 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
cs_this->cs_3f3b83b6a44bdc33 = pls::cs::Array<cs_c87dc3d2d0f9440a>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
cs_this->cs_bc8b4cc170dd0946 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));
cs_this->cs_1f2ecebcf07a4a8b = pls::cs::Stack<pls::cs::Ref<cs_2c2ce8625d613473>>::make();
cs_this->cs_4170a278138fe06e = pls::cs::List<pls::cs::Ref<cs_8e2bf0f8fe011785>>::make();
cs_this->cs_c9f1f5e90f89763b = pls::cs::List<pls::cs::String>::make();
{

}
}
// M:kairo.unity.system.KairoBase.AccessCount.#ctor(System.String,System.Int64)
pls::cs::Ref<cs_7f70540c4f85d74f> cs_b544d4afdbad19e4(pls::cs::String v_name,std::int64_t v_value) { cs_init_7f70540c4f85d74f();
{ auto cs_this = pls::cs::make_ref<cs_7f70540c4f85d74f>(); cs_b544d4afdbad19e4_init(cs_this,v_name,v_value); return cs_this; }
}
void cs_b544d4afdbad19e4_init(pls::cs::Ref<cs_7f70540c4f85d74f> cs_this,pls::cs::String v_name,std::int64_t v_value) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_name; pls::game::cs_require(cs_target)->cs_59ca359e3d3d712d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_0d03485f6b953700 = cs_value; return cs_value; }());
}
}
// M:kairo.unity.system.KairoBase.AccessCount.GetHashCode
std::int32_t cs_6853b87e6d3191df(pls::cs::Ref<cs_7f70540c4f85d74f> cs_this) { cs_init_7f70540c4f85d74f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}
}
// M:kairo.unity.system.KairoBase.AccessCount.ToString
pls::cs::String cs_9eab9ded735366ec(pls::cs::Ref<cs_7f70540c4f85d74f> cs_this) { cs_init_7f70540c4f85d74f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59ca359e3d3d712d; }()); auto cs_right = (((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0d03485f6b953700; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left >= cs_right); }())) ? pls::cs::String(std::u16string(u"\x002b" u"",1)) : pls::cs::String(std::u16string(u"",0)))); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0d03485f6b953700; }())); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:kairo.unity.system.KairoBase.AccessCounter(System.Int32,System.String,System.Int32,System.Boolean)
void cs_b70446c7450e6993(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,std::int32_t v_type,pls::cs::String v_name,std::int32_t v_up,bool v_save) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_17714 = (((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) ? ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a491890168e60b87; }()) : ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cc1025ec243f7ac6; }())));
pls::cs::Ref<cs_7f70540c4f85d74f> v_accessCount_17785 = pls::cs::Ref<cs_7f70540c4f85d74f>{};
std::int32_t v_num_17812 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while ((([&]() -> bool { auto cs_left = v_num_17812; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_17714); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(v_accessCount_17785); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()))) {
pls::cs::Ref<cs_7f70540c4f85d74f> v_accessCount2_17896 = pls::cs::unbox<pls::cs::Ref<cs_7f70540c4f85d74f>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_17714); std::int32_t cs_arg0 = v_num_17812; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_arg0 = v_name; auto cs_arg1 = ([&]() { auto cs_receiver = v_accessCount2_17896; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59ca359e3d3d712d; }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = v_accessCount2_17896; v_accessCount_17785 = cs_value; return cs_value; }());
}
([&]() { auto cs_old = v_num_17812; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_17812 = cs_new; return cs_old; }());
}
if (([&]() { auto cs_left = pls::cs::box(v_accessCount_17785); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_7f70540c4f85d74f> { pls::cs::String cs_arg0 = v_name; std::int64_t cs_arg1 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); return cs_b544d4afdbad19e4(cs_arg0,cs_arg1); }()); v_accessCount_17785 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_17714); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_accessCount_17785); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = v_accessCount_17785; auto cs_old = pls::game::cs_require(cs_target)->cs_0d03485f6b953700; auto cs_rhs = v_up; auto cs_value = pls::cs::add_i64(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0d03485f6b953700 = cs_value; return cs_value; }());
try {
if (v_save) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_3481915358ac0fff(); }());
}
} catch(const pls::cs::Exception& cs_caught_784) {auto cs_exception_784=pls::cs::capture_exception(cs_caught_784);
if(pls::cs::exception_is(cs_exception_784,"System.Exception")) {{

}}
else {throw;} }
}
}
}
// M:kairo.unity.system.KairoBase.Check(System.Int32)
bool cs_f13bfb412c6bef66(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,std::int32_t v_bit) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_284cc3cac7606c94; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = v_bit; return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }());
}
}
}
// M:kairo.unity.system.KairoBase.CheckUserId
bool cs_312c009a993a1e26(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_87f9285131d0cba9(cs_receiver); }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }());
}
}
}
// M:kairo.unity.system.KairoBase.Finish
void cs_706bcbd9776cf6ef(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_98f6c84566bf4254 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.system.KairoBase.GetAppList(System.Boolean,System.Boolean)
pls::cs::Array<cs_c87dc3d2d0f9440a> cs_7e52a7f62521b1ee(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,bool v_languageOnly,bool v_releaseOnly) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3f3b83b6a44bdc33; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b2a7adc10d3ecb29(cs_receiver); }());
}
pls::cs::List<cs_c87dc3d2d0f9440a> v_list_59234 = pls::cs::List<cs_c87dc3d2d0f9440a>::make();
pls::cs::Array<cs_c87dc3d2d0f9440a> v_array_59279 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3f3b83b6a44bdc33; }());
for (std::int32_t v_i_59309 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_59309; auto cs_right = (v_array_59279).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_59309; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_59309 = cs_new; return cs_old; }())) {
cs_c87dc3d2d0f9440a v_item_59358 = ([&]() { auto cs_array = v_array_59279; auto cs_index = v_i_59309; return cs_array.get_Item(cs_index); }());
if ((((((!(v_languageOnly)) || ([&]() -> bool { auto cs_left = ((v_item_59358).cs_3f97f246a7d4b8ee).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) || (((((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))) || (!((([&]() -> bool { auto cs_left = (v_item_59358).cs_3f97f246a7d4b8ee; auto cs_right = pls::cs::String(std::u16string(u"\x006a" u"\x0061" u"",2)); return (cs_left != cs_right); }())))))) && (((!(([&]() -> bool { return cs_dea1d8116ed5aaf1(); }()))) || (!((([&]() -> bool { auto cs_left = (v_item_59358).cs_3f97f246a7d4b8ee; auto cs_right = pls::cs::String(std::u16string(u"\x0065" u"\x006e" u"",2)); return (cs_left != cs_right); }())))))))))) && (((!(v_releaseOnly)) || ((((([&]() -> bool { auto cs_left = pls::generated::cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left != cs_right); }()) || ([&](){return cs_273c34670c40021b(&(v_item_59358));}()))) && ((([&]() -> bool { auto cs_left = pls::generated::cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left != cs_right); }()) || ([&](){return cs_71a196f792672514(&(v_item_59358));}()))))))))) {
([&]() -> void { auto cs_receiver = v_list_59234; auto cs_arg0 = v_item_59358; cs_receiver.Add(cs_arg0); }());
}
}
return ([&]() -> pls::cs::Array<cs_c87dc3d2d0f9440a> { auto cs_receiver = v_list_59234; return cs_receiver.ToArray(); }());
}
}
}
// M:kairo.unity.system.KairoBase.GetFriendId
pls::cs::String cs_047c3ab4bcca9557(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_efb4aeef5c6f7590; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());
}
}
}
// M:kairo.unity.system.KairoBase.GetInstance
pls::cs::Ref<cs_b489b0d33bb37bb8> cs_3eff1227bb0de063() { cs_init_b489b0d33bb37bb8();
{
if (([&]() { auto cs_left = pls::cs::box(cs_11e5ce60ddaa567b()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
if (([&]() { auto cs_left = pls::cs::box(cs_0d794b0205468f6a()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_50c5a567a6876ee3> { return cs_145bafe9acaf77f9(); }()); cs_0d794b0205468f6a() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_0d794b0205468f6a()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b2a7adc10d3ecb29(cs_receiver); }());
}
return cs_0d794b0205468f6a();
}
return cs_11e5ce60ddaa567b();
}
}
// M:kairo.unity.system.KairoBase.GetLatestVersion
std::int32_t cs_033269c53e74ac43(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3803cd72992c3762; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23f814b97b0cdf1c; }());
}
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3803cd72992c3762; }());
}
}
}
// M:kairo.unity.system.KairoBase.GetUserId
pls::cs::String cs_87f9285131d0cba9(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac9d14d8fd218a0c; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());
}
}
}
// M:kairo.unity.system.KairoBase.HandleActivityResult(System.Int32,System.Int32,System.Object)
bool cs_89868493b44dd8bd(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,std::int32_t v_requestCode,std::int32_t v_resultCode,pls::cs::Ref<pls::cs::Object> v_data) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}
// M:kairo.unity.system.KairoBase.IsGamePlaying
bool cs_ab34005322458eed(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77c315e5b65bf792; }());
}
}
}
// M:kairo.unity.system.KairoBase.IsLogin
bool cs_09868bc9a4810065(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ca174d10ffdcf6e9; }());
}
}
}
// M:kairo.unity.system.KairoBase.KairoDummy.#ctor
pls::cs::Ref<cs_50c5a567a6876ee3> cs_145bafe9acaf77f9() { cs_init_50c5a567a6876ee3();
{ auto cs_this = pls::cs::make_ref<cs_50c5a567a6876ee3>(); cs_145bafe9acaf77f9_init(cs_this); return cs_this; }
}
void cs_145bafe9acaf77f9_init(pls::cs::Ref<cs_50c5a567a6876ee3> cs_this) {
([&]() { cs_d710b4eaf3ab212a_init(std::static_pointer_cast<cs_b489b0d33bb37bb8>(cs_this)); }());
{}
}
// M:kairo.unity.system.KairoBase.KairoDummy.OnSaveGameBegin
void cs_b4e47fce38dcaf3b(pls::cs::Ref<cs_50c5a567a6876ee3> cs_this) { cs_init_50c5a567a6876ee3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.KairoDummy.OnSaveGameEnd
void cs_dc354c17f44bb95c(pls::cs::Ref<cs_50c5a567a6876ee3> cs_this) { cs_init_50c5a567a6876ee3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.KairoDummy.Save
void cs_e4f93c2947373f31(pls::cs::Ref<cs_50c5a567a6876ee3> cs_this) { cs_init_50c5a567a6876ee3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.KairoDummy.SaveAll
void cs_c8026282c0a24bbf(pls::cs::Ref<cs_50c5a567a6876ee3> cs_this) { cs_init_50c5a567a6876ee3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.LoadAppList
void cs_b2a7adc10d3ecb29(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_56489 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_56489; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_56489; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_56489 = cs_new; return cs_old; }())) {
try {
pls::cs::Array<std::uint8_t> v_array_56539 = pls::cs::Array<std::uint8_t>{};
if (([&]() -> bool { auto cs_left = v_i_56489; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = true; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x0061" u"\x0070" u"\x0070" u"\x006c" u"\x0069" u"\x0073" u"\x0074" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",11)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); v_array_56539 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg1 = true; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x0061" u"\x0070" u"\x0070" u"\x002f" u"\x006c" u"\x0069" u"\x0073" u"\x0074" u"\x002e" u"\x0062" u"\x0069" u"\x006e" u"",12)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); v_array_56539 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_array_56539); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left != cs_right; }())) {
([&]() -> void { pls::cs::Array<std::uint8_t> cs_arg0 = v_array_56539; pls::generated::cs_b78cf957d6d975eb(cs_arg0); }());
}
}
if (([&]() { auto cs_left = pls::cs::box(v_array_56539); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left != cs_right; }())) {
std::int32_t v_date_56827 = std::int32_t{};
pls::cs::Array<cs_c87dc3d2d0f9440a> v_array2_56851 = ([&]() -> pls::cs::Array<cs_c87dc3d2d0f9440a> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); pls::cs::Array<std::uint8_t> cs_arg0 = v_array_56539; auto& cs_arg1 = v_date_56827; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bf2fb5b5178771c9(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_241b6f9cd68962e5; }()); auto cs_right = v_date_56827; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_date_56827; pls::game::cs_require(cs_target)->cs_241b6f9cd68962e5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_array2_56851; pls::game::cs_require(cs_target)->cs_3f3b83b6a44bdc33 = cs_value; return cs_value; }());
}
}
} catch(const pls::cs::Exception& cs_caught_281) {auto cs_exception_281=pls::cs::capture_exception(cs_caught_281);
if(pls::cs::exception_is(cs_exception_281,"System.Exception")) {auto v_t_57014=cs_exception_281;{
([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_57014; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
}}
else {throw;} }
}
}
}
}
// M:kairo.unity.system.KairoBase.LoadAppList(System.Byte[],System.Int32@)
pls::cs::Array<cs_c87dc3d2d0f9440a> cs_bf2fb5b5178771c9(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,pls::cs::Array<std::uint8_t> v_data,std::int32_t& v_date) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{try{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); v_date = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = (v_data).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
throw pls::cs::ReturnFlow<pls::cs::Array<cs_c87dc3d2d0f9440a>>{pls::cs::Array<cs_c87dc3d2d0f9440a>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)))};
}
pls::cs::String v_text_57221 = pls::cs::String{};
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_57258 = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return pls::generated::cs_c3a84083a67ee263(cs_arg0); }());
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57258; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); v_date = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_57258; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); v_text_57221 = cs_value; return cs_value; }());
}}, [&]() {
([&]() -> void { auto cs_conditional = v_byteArrayInputStream_57258; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }()); }());
});
pls::cs::List<cs_c87dc3d2d0f9440a> v_list_57514 = pls::cs::List<cs_c87dc3d2d0f9440a>::make();
pls::cs::Array<std::int32_t> v_array_57553 = pls::cs::Array<std::int32_t>{};
pls::cs::Array<pls::cs::String> v_array2_57579 = ([&](){auto cs_text=v_text_57221;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(10);return pls::cs::string_split(cs_text,cs_separators);}());
for (std::int32_t v_i_57618 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_57618; auto cs_right = (v_array2_57579).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_57618; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_57618 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::String> v_array3_57667 = ([&](){auto cs_text=([&]() { auto cs_array = v_array2_57579; auto cs_index = v_i_57618; return cs_array.get_Item(cs_index); }());auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(44);return pls::cs::string_split(cs_text,cs_separators);}());
if (([&]() { auto cs_left = pls::cs::box(v_array_57553); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull))); v_array_57553 = cs_value; return cs_value; }());
for (std::int32_t v_j_57767 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_57767; auto cs_right = (v_array_57553).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_57767; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_57767 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_57553; auto cs_index = v_j_57767; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (std::int32_t v_k_57846 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_57846; auto cs_right = (v_array3_57667).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_57846; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_57846 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_57553; auto cs_index = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = v_k_57846; return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); auto cs_value = v_k_57846;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
continue;
}
std::int64_t v_num_57960 = std::int64_t{};
cs_c87dc3d2d0f9440a v_item_57975 = cs_c87dc3d2d0f9440a{};
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); (v_item_57975).cs_153fdaae746575f6 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); return pls::cs::culture_to_lower(cs_arg0); }()); return pls::cs::string_trim(cs_arg0); }()); (v_item_57975).cs_3f97f246a7d4b8ee = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); (v_item_57975).cs_b455953d5d99c95c = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffffffffffffffffull)); v_num_57960 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); (v_item_57975).cs_ad6910b7b897b250 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); (v_item_57975).cs_618ea558ebfe77c3 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); return pls::cs::int64_parse(cs_arg0); }()); v_num_57960 = cs_value; return cs_value; }());
if ((([&]() -> bool { auto cs_left = v_num_57960; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = v_num_57960; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); v_num_57960 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(v_num_57960); (v_item_57975).cs_77e1513fb44fb202 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffffffffffffffffull)); v_num_57960 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x17ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x17ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); (v_item_57975).cs_7a8e84cb54b27614 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); (v_item_57975).cs_055616eacd82bf39 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x15ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x15ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); (v_item_57975).cs_e9266e43c90692ac = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); return pls::cs::int64_parse(cs_arg0); }()); v_num_57960 = cs_value; return cs_value; }());
if ((([&]() -> bool { auto cs_left = v_num_57960; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = v_num_57960; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); v_num_57960 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(v_num_57960); (v_item_57975).cs_38927e554bfc845e = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = v_list_57514; auto cs_arg0 = v_item_57975; cs_receiver.Add(cs_arg0); }());
}
throw pls::cs::ReturnFlow<pls::cs::Array<cs_c87dc3d2d0f9440a>>{([&]() -> pls::cs::Array<cs_c87dc3d2d0f9440a> { auto cs_receiver = v_list_57514; return cs_receiver.ToArray(); }())};
}catch(const pls::cs::ReturnFlow<pls::cs::Array<cs_c87dc3d2d0f9440a>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<cs_c87dc3d2d0f9440a>>();}
}
}
// M:kairo.unity.system.KairoBase.MakeQuery(System.String,System.String)
pls::cs::String cs_e458c0b11b9d98e1(pls::cs::String v_query,pls::cs::String v_param) { cs_init_b489b0d33bb37bb8();
{
if ((([&]() { auto cs_left = pls::cs::box(v_param); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_param; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"",0));
}
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_param; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0008" u"",1)); pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"",0)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }()); v_param = cs_value; return cs_value; }());
try {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_param; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0055" u"\x0054" u"\x0046" u"\x002d" u"\x0038" u"",5)); return cs_b22fe40aa09785ca(cs_arg0,cs_arg1); }()); v_param = cs_value; return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_841) {auto cs_exception_841=pls::cs::capture_exception(cs_caught_841);
if(pls::cs::exception_is(cs_exception_841,"System.ArgumentException")) {{
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_param; return cs_4eef7fc5ca116b40(cs_arg0); }()); v_param = cs_value; return cs_value; }());
}}
else {throw;} }
if ((!(([&]() -> bool { auto cs_arg0 = v_query; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0026" u"",1)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }())))) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0026" u"",1)); auto cs_right = v_query; return pls::cs::String::concat(cs_left,cs_right); }()); v_query = cs_value; return cs_value; }());
}
if ((!(([&]() -> bool { auto cs_arg0 = v_query; auto cs_arg1 = pls::cs::String(std::u16string(u"\x003d" u"",1)); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }())))) {
([&]() { auto cs_old = v_query; auto cs_rhs = pls::cs::String(std::u16string(u"\x003d" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_query = cs_value; return cs_value; }());
}
return ([&]() { auto cs_left = v_query; auto cs_right = v_param; return pls::cs::String::concat(cs_left,cs_right); }());
}
}
// M:kairo.unity.system.KairoBase.On(System.Int32)
void cs_11a43a7110c29351(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,std::int32_t v_bit) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_284cc3cac7606c94; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = v_bit; return (cs_left | cs_right); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_284cc3cac7606c94 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.system.KairoBase.OnInit
void cs_7a0d5be4ca3b1254(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.OnLoad(java.io.InputStream)
void cs_4e3c4bf49c24e27d(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.OnLoadGame(java.io.InputStream)
void cs_10a01b9d900fa6c0(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.OnNewGame(System.Boolean)
void cs_7ebfee2a92c0d37e(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,bool v_take) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.OnSaveGameBegin
void cs_7226942a83482c7a(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.OnSaveGameEnd
void cs_486e7c39f05ac1d6(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.OnStart
void cs_51f84c16de790570(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.OnWrite(java.io.OutputStream)
void cs_e634eb1896b92689(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.OnWriteGame(java.io.OutputStream)
void cs_9a7c0378d22d6bd5(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.KairoBase.SetGameState(System.Boolean)
void cs_e63aaf6292bf7187(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,bool v_playing) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77c315e5b65bf792; }()); auto cs_right = v_playing; return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_playing; pls::game::cs_require(cs_target)->cs_77c315e5b65bf792 = cs_value; return cs_value; }());
pls::cs::Ref<cs_4368d694d01424b0> v_instance_60566 = ([&]() -> pls::cs::Ref<cs_4368d694d01424b0> { return cs_fc7db26d427c32ff(); }());
if (([&]() { auto cs_left = pls::cs::box(v_instance_60566); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
if (v_playing) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4368d694d01424b0>>(v_instance_60566); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fb49ecfe97c9cd02(cs_receiver); }());
return;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4368d694d01424b0>>(v_instance_60566); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f30d255f82bcb932(cs_receiver); }());
}
}
}
}
}
// M:kairo.unity.system.KairoBase.SetReserveSaveEnable(System.Boolean)
void cs_5d101ae71ba29127(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,bool v_enable) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_enable; pls::game::cs_require(cs_target)->cs_bb15809d7dd758fd = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.system.KairoBase.Update
void cs_9ca5e184bd541bee(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60f22a64c143004f; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { return cs_45b39acf7715318b(); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left > cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { return cs_45b39acf7715318b(); }()); pls::game::cs_require(cs_target)->cs_60f22a64c143004f = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0063" u"\x0068" u"\x0065" u"\x0061" u"\x0074" u"",5)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg3 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b70446c7450e6993(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0063" u"\x0068" u"\x0065" u"\x0061" u"\x0074" u"",5)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg3 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b70446c7450e6993(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_3481915358ac0fff(); }());
} catch(const pls::cs::Exception& cs_caught_783) {auto cs_exception_783=pls::cs::capture_exception(cs_caught_783);
if(pls::cs::exception_is(cs_exception_783,"System.Exception")) {{

}}
else {throw;} }
}
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
// M:kairo.unity.system.lineup.ui.LineupData.GetURL
pls::cs::String cs_93bf009f197e5d4a(pls::cs::Ref<cs_fd683372658feff4> cs_this) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7033e8b866a8dda2; }());
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
// M:kairo.unity.system.lineup.ui.LineupManager.GetPreferences(System.String)
pls::cs::Array<std::uint8_t> cs_da3162f01de6e1eb(pls::cs::String v_key) { cs_init_1ab688350081022a();
{
([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x006c" u"\x0069" u"\x006e" u"\x0065" u"\x0075" u"\x0070" u"\x002f" u"",7)); auto cs_right = v_key; return pls::cs::String::concat(cs_left,cs_right); }()); v_key = cs_value; return cs_value; }());
return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg1 = true; pls::cs::String cs_arg2 = v_key; return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());
}
}
// M:kairo.unity.system.lineup.ui.LineupManager.GetShowableLineups
pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>> cs_39cb7b83aa99de82(pls::cs::Ref<cs_1ab688350081022a> cs_this) { cs_init_1ab688350081022a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_107cdef48659996d; }());
}
}
}
// M:kairo.unity.system.lineup.ui.LineupManager.UnloadImage
void cs_04c28d155861f704(pls::cs::Ref<cs_1ab688350081022a> cs_this) { cs_init_1ab688350081022a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_i_7656 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7656; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7656; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7656 = cs_new; return cs_old; }())) {
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_7656; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_7656; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de2327fcc8b4451b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_7656; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de2327fcc8b4451b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_7656; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::Ref<pls::kairo::Image>{}; pls::game::cs_require(cs_target)->cs_de2327fcc8b4451b = cs_value; return cs_value; }());
}
}
}
}
}
// M:kairo.unity.system.lineup.ui.LineupManager.Write
pls::cs::Array<std::uint8_t> cs_cb1becc75b26486d(pls::cs::Ref<cs_1ab688350081022a> cs_this) { cs_init_1ab688350081022a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{try{
pls::cs::Ref<pls::generated::cs_fb60578b3098a284> v_byteArrayOutputStream_1131 = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{};
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_1131 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_1131; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }())).length()); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_1319 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1319; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1319; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1319 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_1131; std::uint8_t cs_arg1 = pls::cs::cast_integral<std::uint8_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }()); auto cs_index = v_i_1319; return cs_array.get_Item(cs_index); }())); pls::generated::cs_c43b9bbf725f702e(cs_arg0,cs_arg1); }());
}
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_1131); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }())};
}}, [&]() {
([&]() -> void { auto cs_conditional = v_byteArrayOutputStream_1131; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }()); }());
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{}; v_byteArrayOutputStream_1131 = cs_value; return cs_value; }());
});
}catch(const pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<std::uint8_t>>();}
}
}
// M:kairo.unity.system.notification.ui.NotifyManager.DoCancel
void cs_fb49ecfe97c9cd02(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_b489b0d33bb37bb8> v_instance_3003 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
if ((([&]() { auto cs_left = pls::cs::box(v_instance_3003); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_3003); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ab34005322458eed(cs_receiver); }()))) {
([&]() -> void { auto cs_arg0 = true; auto cs_arg1 = true; cs_749d49646f9339d3(cs_arg0,cs_arg1); }());
} else {
([&]() -> void { bool cs_arg0 = true; bool cs_arg1 = false; cs_749d49646f9339d3(cs_arg0,cs_arg1); }());
}
}
}
}
// M:kairo.unity.system.notification.ui.NotifyManager.DoNotify
void cs_f30d255f82bcb932(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_b489b0d33bb37bb8> v_instance_2705 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
if ((([&]() { auto cs_left = pls::cs::box(v_instance_2705); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_2705); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ab34005322458eed(cs_receiver); }()))) {
([&]() -> void { bool cs_arg0 = false; auto cs_arg1 = true; cs_749d49646f9339d3(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4368d694d01424b0>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_9ed05c6b3a5346ec(); }());
}
}
}
}
// M:kairo.unity.system.notification.ui.NotifyManager.GetInstance
pls::cs::Ref<cs_4368d694d01424b0> cs_fc7db26d427c32ff() { cs_init_4368d694d01424b0();
{
return cs_af3cecaddfff33af();
}
}
// M:kairo.unity.system.notification.ui.NotifyManager.IsPushEnable
bool cs_c4e7fa21030fbd91(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}
// M:kairo.unity.system.notification.ui.NotifyManager.OnNotify
void cs_9ed05c6b3a5346ec(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.notification.ui.NotifyManager.OnReceiveValue
void cs_2186b93ea03d07c2(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.system.payment.PaymentDataRecord.#ctor(System.String,System.String,System.Int32,System.Int32)
pls::cs::Ref<cs_8e2bf0f8fe011785> cs_2f2e7f50616852fe(pls::cs::String v_productId,pls::cs::String v_orderId,std::int32_t v_amount,std::int32_t v_actCode) { cs_init_8e2bf0f8fe011785();
{ auto cs_this = pls::cs::make_ref<cs_8e2bf0f8fe011785>(); cs_2f2e7f50616852fe_init(cs_this,v_productId,v_orderId,v_amount,v_actCode); return cs_this; }
}
void cs_2f2e7f50616852fe_init(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this,pls::cs::String v_productId,pls::cs::String v_orderId,std::int32_t v_amount,std::int32_t v_actCode) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_productId; pls::game::cs_require(cs_target)->cs_1a5ce6d62f4773c6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_orderId; pls::game::cs_require(cs_target)->cs_2b580027dd662ff5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_amount; pls::game::cs_require(cs_target)->cs_cf10600a0f2e10ac = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_actCode; pls::game::cs_require(cs_target)->cs_b85e706eedf54802 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_3b077329e09687d5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String(std::u16string(u"\x0020" u"",1)); pls::game::cs_require(cs_target)->cs_f1c6c21012307803 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_004158f701fd286d = cs_value; return cs_value; }());
}
}
// M:kairo.unity.system.payment.PaymentDataRecord.Deserialize(java.io.InputStream)
void cs_c147ab1af9f1939f(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_8e2bf0f8fe011785();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_1a5ce6d62f4773c6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2b580027dd662ff5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_f1c6c21012307803 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_faab575a7db8f157(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_004158f701fd286d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_3b077329e09687d5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_cf10600a0f2e10ac = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_b85e706eedf54802 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.system.payment.PaymentDataRecord.GetOrderId
pls::cs::String cs_68d475335d41208d(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this) { cs_init_8e2bf0f8fe011785();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b580027dd662ff5; }());
}
}
}
// M:kairo.unity.system.payment.PaymentDataRecord.GetProductId
pls::cs::String cs_1b2e094e56480170(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this) { cs_init_8e2bf0f8fe011785();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1a5ce6d62f4773c6; }());
}
}
}
// M:kairo.unity.system.payment.PaymentDataRecord.Serialize(java.io.OutputStream)
void cs_5372ec5ae5ecedc0(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_stream) { cs_init_8e2bf0f8fe011785();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1a5ce6d62f4773c6; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b580027dd662ff5; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f1c6c21012307803; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int64_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_004158f701fd286d; }()); pls::generated::cs_6c6af002987d1423(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3b077329e09687d5; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf10600a0f2e10ac; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b85e706eedf54802; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.system.payment.PaymentDataRecord.SetTimeStamp(System.Int64)
void cs_a9f03e15b73f7505(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this,std::int64_t v_time) { cs_init_8e2bf0f8fe011785();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_time; pls::game::cs_require(cs_target)->cs_004158f701fd286d = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.system.payment.PaymentDataRecord.ToString
pls::cs::String cs_1152b3bafa6371e3(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this) { cs_init_8e2bf0f8fe011785();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_8e2bf0f8fe011785>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1b2e094e56480170(cs_receiver); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005b" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_004158f701fd286d; }())); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x000a" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_8e2bf0f8fe011785>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_68d475335d41208d(cs_receiver); }()); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:kairo.unity.ui.Balloon.#ctor(System.String,System.Int32)
pls::cs::Ref<cs_96c54d9323f24f8e> cs_c46e5f8db55f0d51(pls::cs::String v_text,std::int32_t v_color) { cs_init_96c54d9323f24f8e();
{ auto cs_this = pls::cs::make_ref<cs_96c54d9323f24f8e>(); cs_c46e5f8db55f0d51_init(cs_this,v_text,v_color); return cs_this; }
}
void cs_c46e5f8db55f0d51_init(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::String v_text,std::int32_t v_color) {
cs_this->cs_26d7ee92947806bd = pls::cs::List<pls::cs::Ref<cs_9f5a071d05c1d020>>::make();
cs_this->cs_34be2585a809d78b = ([&]() -> pls::cs::Ref<cs_f1dd8f2aa583774c> { return cs_811ec9500127b493(); }());
cs_this->cs_4b66e3dd8daf3086 = ([&]() -> pls::cs::Ref<cs_f1dd8f2aa583774c> { return cs_811ec9500127b493(); }());
cs_this->cs_939495bac7ddc94f = ([&]() -> pls::cs::Ref<cs_f1dd8f2aa583774c> { return cs_811ec9500127b493(); }());
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_96c54d9323f24f8e>>(cs_this); pls::cs::String cs_arg0 = v_text; std::int32_t cs_arg1 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4254bc66f1000052(cs_receiver,cs_arg0,cs_arg1); }());
}
}
// M:kairo.unity.ui.Balloon.Init(System.String,System.Int32)
void cs_4254bc66f1000052(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::String v_text,std::int32_t v_color) { cs_init_96c54d9323f24f8e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_receiver = cs_this; auto cs_rhs = v_text; auto cs_value = cs_rhs; cs_bc64dbfb155d02c7(static_cast<pls::cs::Ref<cs_96c54d9323f24f8e>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_receiver = cs_this; auto cs_rhs = v_color; auto cs_value = cs_rhs; cs_5c18cba22441d508(static_cast<pls::cs::Ref<cs_96c54d9323f24f8e>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffacacacull)); pls::game::cs_require(cs_target)->cs_bc45c0331c449e67 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_16eb79a87eea849e = cs_value; return cs_value; }());
([&]() { auto cs_receiver = cs_this; auto cs_rhs = pls::game::cs_f32(0x3f800000u); auto cs_value = cs_rhs; cs_081ca02a0c18a84a(static_cast<pls::cs::Ref<cs_96c54d9323f24f8e>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x3f800000u); pls::game::cs_require(cs_target)->cs_621b880d085468ff = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_ac0b0615a8627df2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_9cade6927d6e0bf3>{}; pls::game::cs_require(cs_target)->cs_d28d1f2a5203923b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_9cade6927d6e0bf3>{}; pls::game::cs_require(cs_target)->cs_01a33bedccf1ec34 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_cf6df194a94ad0ad = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_33ee1b2838e45703 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_123b4a97b07c8da1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_a3ad63599707ed3a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>,float,pls::cs::Ref<cs_f1dd8f2aa583774c>,pls::cs::Ref<cs_f1dd8f2aa583774c>)>{}; pls::game::cs_require(cs_target)->cs_c0e1478e6e65c04d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_2d58cac572c413df = cs_value; return cs_value; }());
([&]() { auto cs_receiver = cs_this; auto cs_rhs = pls::cs::Ref<cs_9cade6927d6e0bf3>{}; auto cs_value = cs_rhs; cs_0ab9f071b4b5eb48(static_cast<pls::cs::Ref<cs_96c54d9323f24f8e>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_receiver = cs_this; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_value = cs_rhs; cs_3587a8418a3a177d(static_cast<pls::cs::Ref<cs_96c54d9323f24f8e>>(cs_receiver),cs_value); return cs_value; }());
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26d7ee92947806bd; }()); cs_receiver.Clear(); }());
}
}
}
// M:kairo.unity.ui.Balloon.set_FontSize(System.Int32)
void cs_3587a8418a3a177d(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,std::int32_t v_value) { cs_init_96c54d9323f24f8e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_62e2405d56cdd561=v_value;}
}
}
// M:kairo.unity.ui.Balloon.set_Scale(System.Single)
void cs_081ca02a0c18a84a(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,float v_value) { cs_init_96c54d9323f24f8e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_4b9a448ac07ffb59=v_value;}
}
}
// M:kairo.unity.ui.Balloon.set_Seb(kairo.unity.ui.Seb)
void cs_0ab9f071b4b5eb48(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::Ref<cs_9cade6927d6e0bf3> v_value) { cs_init_96c54d9323f24f8e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_2f45ae0b0f0994b7=v_value;}
}
}
// M:kairo.unity.ui.Balloon.set_Text(System.String)
void cs_bc64dbfb155d02c7(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::String v_value) { cs_init_96c54d9323f24f8e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_value; auto cs_arg1 = pls::cs::String(std::u16string(u"",0)); return cs_334563e946ad4962(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_1d5abc90d11ab0c5 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.Balloon.set_TextColor(System.Int32)
void cs_5c18cba22441d508(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,std::int32_t v_value) { cs_init_96c54d9323f24f8e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_46e267201e1c71a0=v_value;}
}
}
// M:kairo.unity.ui.Balloon.SetSpace(System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Balloon.BalloonRender)
void cs_87abc8a059905f77(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,std::int32_t v_left,std::int32_t v_right,std::int32_t v_top,std::int32_t v_bottom,pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>,float,pls::cs::Ref<cs_f1dd8f2aa583774c>,pls::cs::Ref<cs_f1dd8f2aa583774c>)> v_render) { cs_init_96c54d9323f24f8e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_left; pls::game::cs_require(cs_target)->cs_cf6df194a94ad0ad = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_right; pls::game::cs_require(cs_target)->cs_33ee1b2838e45703 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_top; pls::game::cs_require(cs_target)->cs_123b4a97b07c8da1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_bottom; pls::game::cs_require(cs_target)->cs_a3ad63599707ed3a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_render; pls::game::cs_require(cs_target)->cs_c0e1478e6e65c04d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_9cade6927d6e0bf3>{}; pls::game::cs_require(cs_target)->cs_d28d1f2a5203923b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_9cade6927d6e0bf3>{}; pls::game::cs_require(cs_target)->cs_01a33bedccf1ec34 = cs_value; return cs_value; }());
}
}
}
// M:kairo.unity.ui.Canvas.Fullscreen(System.Boolean)
void cs_00f4f3ea699b68a8(pls::cs::Ref<pls::kairo::Canvas> cs_this,bool v_enable) { if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() -> pls::cs::Ref<pls::kairo::FormManagerBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormManager(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsCapturing(); }())) {
return;
}
([&]() -> void { bool cs_arg0 = v_enable; cs_933c73fabeb9213d(cs_arg0); }());
}
}
// M:kairo.unity.ui.Canvas.IsGetStatusBarHeight
bool cs_c8e32e6eaf380ca6(pls::cs::Ref<pls::kairo::Canvas> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
return true;
}
}
// M:kairo.unity.ui.Canvas.IsGetStatusBarPosition
bool cs_26fe694df0ae6d4f(pls::cs::Ref<pls::kairo::Canvas> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_status_bar_position; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }());
}
}
// M:kairo.unity.ui.Canvas.OpenBrowser(System.String)
bool cs_25bba6e14d51039b(pls::cs::String v_url) {
pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_url_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::String>>(v_url);
{
try {
if (([&]() -> bool { auto cs_left = pls::generated::cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
pls::cs::Ref<cs_b489b0d33bb37bb8> v_instance_30580 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
if (([&]() { auto cs_left = pls::cs::box(v_instance_30580); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Ref<pls::cs::RegexMatch> v_match_30662 = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_url_cell->value; auto cs_arg1 = pls::cs::String(std::u16string(u"\x006d" u"\x0061" u"\x0072" u"\x006b" u"\x0065" u"\x0074" u"\x003a" u"\x002f" u"\x002f" u"\x0064" u"\x0065" u"\x0074" u"\x0061" u"\x0069" u"\x006c" u"\x0073" u"\x005c" u"\x003f" u"\x0069" u"\x0064" u"\x003d" u"\x0028" u"\x005b" u"\x005c" u"\x0077" u"\x002e" u"\x005d" u"\x002b" u"\x0029" u"",29)); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());
if (pls::game::cs_require(v_match_30662)->get_Success()) {
pls::cs::String v_value_30770 = pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_30662)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value();
cs_c87dc3d2d0f9440a v_gameAppli_30818 = cs_c87dc3d2d0f9440a{};
std::int32_t v_num_30861 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<cs_c87dc3d2d0f9440a> v_appList_30889 = ([&]() -> pls::cs::Array<cs_c87dc3d2d0f9440a> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_30580); bool cs_arg0 = false; bool cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_7e52a7f62521b1ee(cs_receiver,cs_arg0,cs_arg1); }());
for (std::int32_t v_i_30950 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_30950; auto cs_right = (v_appList_30889).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_30950; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_30950 = cs_new; return cs_old; }())) {
cs_c87dc3d2d0f9440a v_gameAppli2_31009 = ([&]() { auto cs_array = v_appList_30889; auto cs_index = v_i_30950; return cs_array.get_Item(cs_index); }());
if (((([&]() { auto cs_left = pls::cs::box((v_gameAppli2_31009).cs_055616eacd82bf39); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ((v_gameAppli2_31009).cs_055616eacd82bf39).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && ((([&](){auto cs_receiver=(v_gameAppli2_31009).cs_ad6910b7b897b250;auto cs_argument=v_value_30770;cs_receiver.length();return pls::cs::culture_equals_ignore_case(cs_receiver,cs_argument);}()) || ([&](){auto cs_receiver=(v_gameAppli2_31009).cs_7a8e84cb54b27614;auto cs_argument=v_value_30770;cs_receiver.length();return pls::cs::culture_equals_ignore_case(cs_receiver,cs_argument);}()))))) {
std::int32_t v_num2_31284 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
if (([&]() -> bool { auto cs_left = ([&]() -> bool { auto cs_left = (v_gameAppli2_31009).cs_3f97f246a7d4b8ee; auto cs_right = pls::cs::String(std::u16string(u"\x006a" u"\x0061" u"",2)); return (cs_left == cs_right); }()); auto cs_right = ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()); return (cs_left == cs_right); }())) {
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
// M:kairo.unity.ui.Graphics.GetColorOfName(System.Int32)
std::int32_t cs_ca48ee9e5dbe6d98(std::int32_t v_name) {
return v_name;
}
// M:kairo.unity.ui.Graphics.GetLineSpace
std::int32_t cs_734e0f1de4f940e6() {
return pls::kairo::Graphics::lineSpacing_;
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
pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int16_t>>> v_array5_11905 = ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int16_t>>> { pls::cs::Array<std::int32_t> cs_arg0 = ([&](){auto cs_initial_array_362=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_362.at(0)=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeHeightNum_; }());cs_initial_array_362.at(1)=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->optimizeWidthNum_; }());return cs_initial_array_362;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int16_t>>>>(cs_arg0); }());
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::String>> { pls::cs::Array<std::int32_t> cs_arg0 = ([&](){auto cs_initial_array_349=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_349.at(0)=(cs_5e2555ff8a760a8f()).length();cs_initial_array_349.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));return cs_initial_array_349;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<pls::cs::String>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_6a7748b1a6612d58 = cs_value; return cs_value; }());
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
pls::cs::Ref<pls::cs::Cell<pls::cs::Array<pls::cs::Array<std::int32_t>>>> v_loadTask_7041_cell = pls::cs::make_ref<pls::cs::Cell<pls::cs::Array<pls::cs::Array<std::int32_t>>>>(([&](){auto cs_initial_array_352=pls::cs::Array<pls::cs::Array<std::int32_t>>::make(3);cs_initial_array_352.at(0)=pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));cs_initial_array_352.at(1)=([&](){auto cs_initial_array_353=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_353.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_initial_array_353.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));return cs_initial_array_353;}());cs_initial_array_352.at(2)=([&](){auto cs_initial_array_354=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_354.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));cs_initial_array_354.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));return cs_initial_array_354;}());return cs_initial_array_352;}()));
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
} catch(const pls::cs::Exception& cs_caught_355) {auto cs_exception_355=pls::cs::capture_exception(cs_caught_355);
if(pls::cs::exception_is(cs_exception_355,"System.Exception")) {auto v_t2_11654=cs_exception_355;{
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
} catch(const pls::cs::Exception& cs_caught_356) {auto cs_exception_356=pls::cs::capture_exception(cs_caught_356);
if(pls::cs::exception_is(cs_exception_356,"System.Exception")) {auto v_t3_13148=cs_exception_356;{
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
} catch(const pls::cs::Exception& cs_caught_357) {auto cs_exception_357=pls::cs::capture_exception(cs_caught_357);
if(pls::cs::exception_is(cs_exception_357,"System.Exception")) {auto v_t_13916=cs_exception_357;{
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
([&]() -> void { auto cs_receiver = v_atlasIamges_16382_cell->value; auto cs_arg0 = ([&](){auto cs_initial_array_358=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_358.at(0)=v_num13_16427;cs_initial_array_358.at(1)=v_num14_16549;return cs_initial_array_358;}()); cs_receiver.Add(cs_arg0); }());
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
{auto cs_list_enum782=(cs_6e1bce9006dd3621()).GetEnumerator();struct cs_list_scope782{decltype(cs_list_enum782)&e;~cs_list_scope782(){e.Dispose();}} cs_scope782{cs_list_enum782};while(cs_list_enum782.MoveNext()){ cs_bf56843843fb840d v_item_23191=cs_list_enum782.get_Current();{
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
([&]() { auto cs_target = v_workValue_16792; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = ([&](){auto cs_initial_array_482=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_482.at(0)=([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a9047ac84bcd384a(cs_receiver); }());cs_initial_array_482.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));return cs_initial_array_482;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_a629158f3074ad89 = cs_value; return cs_value; }());
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
pls::cs::Array<std::int32_t> v_array5_18945 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); std::int32_t cs_arg0 = v_num5_17720;
