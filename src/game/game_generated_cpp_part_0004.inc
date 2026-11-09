 auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_recvSize_1981_cell->value = cs_value; return cs_value; }());
}
pls::cs::Array<std::uint8_t> v_array2_6752 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_bais_3905_cell->value; auto cs_arg1 = v_size_6603; return pls::generated::cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4915); auto cs_arg0 = pls::cs::box(v_array2_6752); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
([&]() { auto cs_old = v_recvSize_1981_cell->value; auto cs_rhs = (v_array2_6752).length(); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_recvSize_1981_cell->value = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4915); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if (v_split_cell->value) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { auto cs_arg0 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::uint8_t>>>(cs_arg0); }()); v_recv_1939_cell->value = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { auto cs_arg0 = ([&](){auto cs_initial_array_718=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_718.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_initial_array_718.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));return cs_initial_array_718;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::uint8_t>>>(cs_arg0); }()); v_recv_1939_cell->value = cs_value; return cs_value; }());
}
} else {
([&]() { auto cs_value = pls::cs::Array<pls::cs::Array<std::uint8_t>>::make(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4915); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }())); v_recv_1939_cell->value = cs_value; return cs_value; }());
}
for (std::int32_t v_i_7183 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7183; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4915); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7183; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7183 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_recv_1939_cell->value; auto cs_index = v_i_7183; auto cs_value = pls::cs::unbox<pls::cs::Array<std::uint8_t>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4915); auto cs_arg0 = v_i_7183; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
}}};auto cs_closure=pls::cs::make_ref<cs_closure_f08d338e3ea27f97>();cs_closure->v_totalSize_1959_cell=v_totalSize_1959_cell;cs_closure->v_bais_3905_cell=v_bais_3905_cell;cs_closure->v_check_cell=v_check_cell;cs_closure->v_recvSize_1981_cell=v_recvSize_1981_cell;cs_closure->v_split_cell=v_split_cell;cs_closure->v_recv_1939_cell=v_recv_1939_cell;cs_closure->cs_this=cs_this;return pls::cs::Delegate<void()>::bind_identity(cs_closure,v_totalSize_1959_cell.get(),std::string("M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4586")+std::to_string(reinterpret_cast<std::uintptr_t>(v_bais_3905_cell.get()))+std::to_string(reinterpret_cast<std::uintptr_t>(v_check_cell.get()))+std::to_string(reinterpret_cast<std::uintptr_t>(v_recvSize_1981_cell.get()))+std::to_string(reinterpret_cast<std::uintptr_t>(v_split_cell.get()))+std::to_string(reinterpret_cast<std::uintptr_t>(v_recv_1939_cell.get())),[weak=std::weak_ptr<cs_closure_f08d338e3ea27f97>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c3b53640b80e29dc; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::throw_exception(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c3b53640b80e29dc; }()));
}
} catch(const pls::cs::Exception& cs_caught_719) {auto cs_exception_719=pls::cs::capture_exception(cs_caught_719);
if(pls::cs::exception_is(cs_exception_719,"System.Exception")) {auto v_ex_7377=cs_exception_719;{
([&]() { auto cs_target = cs_this; auto cs_value = v_url_cell->value; pls::game::cs_require(cs_target)->cs_f78aa7a0d989fd7c = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_32388247d17bb567; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffff9eull)); pls::game::cs_require(cs_target)->cs_32388247d17bb567 = cs_value; return cs_value; }());
}
pls::cs::throw_exception(v_ex_7377);
}}
else {throw;} }}, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_bais_3905_cell->value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_bais_3905_cell->value); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
} catch(const pls::cs::Exception& cs_caught_720) {auto cs_exception_720=pls::cs::capture_exception(cs_caught_720);
if(pls::cs::exception_is(cs_exception_720,"System.Exception")) {{

}}
else {throw;} }
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{}; v_bais_3905_cell->value = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c98fe2d601ad1; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); auto cs_arg0 = ([&](){struct cs_closure_00502fed1f329ecc : pls::cs::Object{pls::cs::Ref<cs_77de402a688eeb9d> cs_this;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(cs_this,v);}void release_edges()override{pls::cs::Object::release_edges();cs_this.reset();}void Invoke(){{
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::OfflineWebRequest>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c98fe2d601ad1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
} catch(const pls::cs::Exception& cs_caught_721) {auto cs_exception_721=pls::cs::capture_exception(cs_caught_721);
if(pls::cs::exception_is(cs_exception_721,"System.Exception")) {{

}}
else {throw;} }
}}};auto cs_closure=pls::cs::make_ref<cs_closure_00502fed1f329ecc>();cs_closure->cs_this=cs_this;return pls::cs::Delegate<void()>::bind_identity(cs_closure,cs_this.get(),std::string("M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):7721"),[weak=std::weak_ptr<cs_closure_00502fed1f329ecc>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<pls::kairo::OfflineWebRequest>{}; pls::game::cs_require(cs_target)->cs_d19c98fe2d601ad1 = cs_value; return cs_value; }());
});
throw pls::cs::ReturnFlow<pls::cs::Array<pls::cs::Array<std::uint8_t>>>{v_recv_1939_cell->value};
}
}catch(const pls::cs::ReturnFlow<pls::cs::Array<pls::cs::Array<std::uint8_t>>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<pls::cs::Array<std::uint8_t>>>();}
}
}
// M:kairo.unity.io.HttpObject.#ctor(System.Boolean)
pls::cs::Ref<cs_77de402a688eeb9d> cs_e751bd24448f57f3(bool v_retryEnable) { cs_init_77de402a688eeb9d();
{ auto cs_this = pls::cs::make_ref<cs_77de402a688eeb9d>(); cs_e751bd24448f57f3_init(cs_this,v_retryEnable); return cs_this; }
}
void cs_e751bd24448f57f3_init(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,bool v_retryEnable) {
{
([&]() { auto cs_receiver = cs_this; auto cs_rhs = v_retryEnable; auto cs_value = cs_rhs; cs_2756d68ee4aaa074(static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_receiver),cs_value); return cs_value; }());
}
}
// M:kairo.unity.io.HttpObject.Connect(System.String,System.Byte[],System.Boolean,System.Boolean)
pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_996b0c2cdd719ab2(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,pls::cs::String v_url,pls::cs::Array<std::uint8_t> v_send,bool v_check,bool v_split) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_771{};
pls::cs::String v_title_966{};
pls::cs::String v_text_1033{};
pls::cs::String v_text2_1249{};
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog_1379{};
{
v_num_771 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while (true) {
try {
return ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_this); auto cs_arg0 = v_url; auto cs_arg1 = v_send; auto cs_arg2 = v_check; auto cs_arg3 = v_split; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d2a21b4a921597a9(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} catch(const pls::cs::Exception& cs_caught_712) {auto cs_exception_712=pls::cs::capture_exception(cs_caught_712);
if(pls::cs::exception_is(cs_exception_712,"System.Exception")) {auto v_ex_878=cs_exception_712;{
if ((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa8defba521b90ce; }())))) {
goto cs_label_IL_00ab;
}
v_title_966 = ((([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()) ? pls::cs::String(std::u16string(u"\x63a5" u"\x7d9a" u"\x78ba" u"\x8a8d" u"",4)) : pls::cs::String(std::u16string(u"\x0043" u"\x006f" u"\x006e" u"\x006e" u"\x0065" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",10))));
v_text_1033 = ((([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()) ? pls::cs::String(std::u16string(u"\x30cd" u"\x30c3" u"\x30c8" u"\x30ef" u"\x30fc" u"\x30af" u"\x63a5" u"\x7d9a" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x000a" u"\x96fb" u"\x6ce2" u"\x304c" u"\x7121" u"\x3044" u"\x304b" u"\x3001" u"\x901a" u"\x4fe1" u"\x304c" u"\x8a31" u"\x53ef" u"\x3055" u"\x308c" u"\x3066" u"\x3044" u"\x306a" u"\x3044" u"\x53ef" u"\x80fd" u"\x6027" u"\x304c" u"\x3042" u"\x308a" u"\x307e" u"\x3059" u"\x3002" u"",44)) : pls::cs::String(std::u16string(u"\x0046" u"\x0061" u"\x0069" u"\x006c" u"\x0075" u"\x0072" u"\x0065" u"\x0020" u"\x0074" u"\x006f" u"\x0020" u"\x006e" u"\x0065" u"\x0074" u"\x0077" u"\x006f" u"\x0072" u"\x006b" u"\x0020" u"\x0063" u"\x006f" u"\x006e" u"\x006e" u"\x0065" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x002e" u"\x0020" u"\x000a" u"\x004f" u"\x0072" u"\x0020" u"\x0072" u"\x0061" u"\x0064" u"\x0069" u"\x006f" u"\x0020" u"\x0077" u"\x0061" u"\x0076" u"\x0065" u"\x0073" u"\x0020" u"\x0064" u"\x006f" u"\x0020" u"\x006e" u"\x006f" u"\x0074" u"\x002c" u"\x0020" u"\x0074" u"\x0068" u"\x0065" u"\x0072" u"\x0065" u"\x0020" u"\x0069" u"\x0073" u"\x0020" u"\x0061" u"\x0020" u"\x0070" u"\x006f" u"\x0073" u"\x0073" u"\x0069" u"\x0062" u"\x0069" u"\x006c" u"\x0069" u"\x0074" u"\x0079" u"\x0020" u"\x0074" u"\x0068" u"\x0061" u"\x0074" u"\x0020" u"\x0074" u"\x0068" u"\x0065" u"\x0020" u"\x0063" u"\x006f" u"\x006d" u"\x006d" u"\x0075" u"\x006e" u"\x0069" u"\x0063" u"\x0061" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x0020" u"\x0069" u"\x0073" u"\x0020" u"\x006e" u"\x006f" u"\x0074" u"\x0020" u"\x0070" u"\x0065" u"\x0072" u"\x006d" u"\x0069" u"\x0074" u"\x0074" u"\x0065" u"\x0064" u"\x002e" u"",118))));
v_text2_1249 = ((([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()) ? pls::cs::String(std::u16string(u"\x518d" u"\x63a5" u"\x7d9a" u"\x002c" u"\x4e2d" u"\x6b62" u"",6)) : pls::cs::String(std::u16string(u"\x0052" u"\x0065" u"\x0074" u"\x0072" u"\x0079" u"\x002c" u"\x0043" u"\x0061" u"\x006e" u"\x0063" u"\x0065" u"\x006c" u"",12))));
if (([&]() -> bool { auto cs_left = v_num_771; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x1f4ull)); cs_26244a61d0d2e16c(cs_arg0); }());
}
v_dialog_1379 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_arg1 = v_title_966; return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_1379); auto cs_arg0 = v_text_1033; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_1379); auto cs_arg0 = ([&](){auto cs_text=v_text2_1249;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(44);return pls::cs::string_split(cs_text,cs_separators);}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f93da55cc1dd9ec3(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_1379); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left != cs_right); }())) {
goto cs_label_IL_00ab;
}
([&]() { auto cs_old = v_num_771; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_771 = cs_new; return cs_old; }());
continue;
cs_label_IL_00ab: ;
pls::cs::throw_exception(v_ex_878);
}}
else {throw;} }
}
}
}
}
}
// M:kairo.unity.io.HttpObject.Connect(System.String,System.Byte[],System.Boolean)
pls::cs::Array<std::uint8_t> cs_b9e6030919acf56d(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,pls::cs::String v_url,pls::cs::Array<std::uint8_t> v_send,bool v_check) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_this); auto cs_arg0 = v_url; auto cs_arg1 = v_send; auto cs_arg2 = v_check; auto cs_arg3 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_996b0c2cdd719ab2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }());
}
}
}
// M:kairo.unity.io.HttpObject.get_IsRetryEnable
bool cs_a14193378f92facc(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_7db6741aeec24156;}
}
}
// M:kairo.unity.io.HttpObject.GetErrorCode
std::int32_t cs_bc4c613a89384b31(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_32388247d17bb567; }());
}
}
}
// M:kairo.unity.io.HttpObject.GetErrorText
pls::cs::String cs_a267b8503432886a(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0810a6bbdad8f652; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
if ((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }())))) {
return pls::cs::String(std::u16string(u"\x004d" u"\x0061" u"\x006b" u"\x0065" u"\x0020" u"\x0073" u"\x0075" u"\x0072" u"\x0065" u"\x0020" u"\x0074" u"\x006f" u"\x0020" u"\x0061" u"\x006c" u"\x006c" u"\x006f" u"\x0077" u"\x0020" u"\x0063" u"\x006f" u"\x006e" u"\x006e" u"\x0065" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x0020" u"\x0074" u"\x006f" u"\x0020" u"\x006e" u"\x0065" u"\x0074" u"\x0077" u"\x006f" u"\x0072" u"\x006b" u"\x0020" u"\x0061" u"\x006e" u"\x0064" u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"\x0063" u"\x0068" u"\x0065" u"\x0063" u"\x006b" u"\x0020" u"\x0079" u"\x006f" u"\x0075" u"\x0072" u"\x0020" u"\x0073" u"\x0069" u"\x0067" u"\x006e" u"\x0061" u"\x006c" u"\x0020" u"\x0071" u"\x0075" u"\x0061" u"\x006c" u"\x0069" u"\x0074" u"\x0079" u"\x002e" u"",74));
}
return ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x901a" u"\x4fe1" u"\x3092" u"\x8a31" u"\x53ef" u"\x3057" u"\x96fb" u"\x6ce2" u"\x72b6" u"\x6cc1" u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"\x3092" u"\x78ba" u"\x8a8d" u"\x3057" u"\x3066" u"\x4e0b" u"\x3055" u"\x3044" u"",22)); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());
}
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0810a6bbdad8f652; }());
}
}
}
// M:kairo.unity.io.HttpObject.GetErrorUrl
pls::cs::String cs_cab4479c3676c376(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f78aa7a0d989fd7c; }());
}
}
}
// M:kairo.unity.io.HttpObject.GetTimeStampParam
pls::cs::String cs_c4f4767aa3a57458(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::generated::cs_a465028bea3432a3> v_instance_9019 = ([&]() -> pls::cs::Ref<pls::generated::cs_a465028bea3432a3> { return pls::generated::cs_23a91b30234d4879(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); auto cs_arg0 = ([&]() -> std::int64_t { return cs_e285ad46e15aa69f(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_ab403c0b96bfdb59(cs_receiver,cs_arg0); }());
pls::cs::String v_text_9115 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::box(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }())); return pls::game::cs_object_string(cs_arg0); }());
pls::cs::String v_text2_9164 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::box(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::game::cs_object_string(cs_arg0); }());
pls::cs::String v_text3_9218 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::box(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }())); return pls::game::cs_object_string(cs_arg0); }());
pls::cs::String v_text4_9268 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::box(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }())); return pls::game::cs_object_string(cs_arg0); }());
pls::cs::String v_text5_9319 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::box(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }())); return pls::game::cs_object_string(cs_arg0); }());
pls::cs::String v_text6_9370 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::box(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }())); return pls::game::cs_object_string(cs_arg0); }());
if (([&]() -> bool { auto cs_left = (v_text2_9164).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text2_9164; return pls::cs::String::concat(cs_left,cs_right); }()); v_text2_9164 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (v_text3_9218).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text3_9218; return pls::cs::String::concat(cs_left,cs_right); }()); v_text3_9218 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (v_text4_9268).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text4_9268; return pls::cs::String::concat(cs_left,cs_right); }()); v_text4_9268 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (v_text5_9319).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text5_9319; return pls::cs::String::concat(cs_left,cs_right); }()); v_text5_9319 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (v_text6_9370).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text6_9370; return pls::cs::String::concat(cs_left,cs_right); }()); v_text6_9370 = cs_value; return cs_value; }());
}
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x005f" u"\x0074" u"\x0073" u"\x003d" u"",4)); auto cs_right = v_text_9115; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text2_9164; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text3_9218; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text4_9268; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text5_9319; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text6_9370; return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
// M:kairo.unity.io.HttpObject.PopErrorText
pls::cs::String cs_0c1c941d76211aca(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::String v_errorText_8773 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a267b8503432886a(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }());
return v_errorText_8773;
}
}
}
// M:kairo.unity.io.HttpObject.set_IsRetryEnable(System.Boolean)
void cs_2756d68ee4aaa074(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,bool v_value) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_7db6741aeec24156=v_value;}
}
}
// M:kairo.unity.io.ScratchPad.GetSPSize(System.Int32)
std::int32_t cs_611e38080e0184ae(std::int32_t v_spid) { cs_init_fd48512b974504f6();
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
}
// M:kairo.unity.io.ScratchPad.ReadByteArray(System.Int32,System.Int32,System.Int32)
pls::cs::Array<std::uint8_t> cs_0478a420e3edd658(std::int32_t v_spid,std::int32_t v_pos,std::int32_t v_length) { cs_init_fd48512b974504f6();
{
return pls::cs::Array<std::uint8_t>{};
}
}
// M:kairo.unity.m3d4.util3d.FastMath.Sin(System.Single)
float cs_87ef3d6d0d364edc(float v_a) { cs_init_bcccbac2bf72843d();
{
return static_cast<float>(([&]() -> double { auto cs_arg0 = ([&]() -> double { auto cs_arg0 = static_cast<double>(v_a); return pls::generated::cs_562cc36bcf840cbd(cs_arg0); }()); return std::sin(cs_arg0); }()));
}
}
// M:kairo.unity.native.KairoPlugin.CancelNotifications(System.Boolean,System.Boolean)
void cs_749d49646f9339d3(bool v_notify,bool v_ararm) { cs_init_381ecfc7910ffbab();
{
return;
}
}
// M:kairo.unity.native.KairoPlugin.SetNotificationBackground(System.Boolean)
void cs_b0502ca03ca03061(bool v_enable) { cs_init_381ecfc7910ffbab();
{
return;
}
}
// M:kairo.unity.panel.FepPanel.#ctor
void cs_429433773226956d_init(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this) {
{

}
}
// M:kairo.unity.panel.FepPanel.Display.SetCurrent(kairo.unity.panel.FepPanel)
void cs_73ded8dcd4fca440(pls::cs::Ref<cs_d37bccc1c3814fc6> v_panel) { cs_init_e57cdf426b59f0ee();
{

}
}
// M:kairo.unity.panel.FepPanel.get_Current
pls::cs::Ref<cs_d37bccc1c3814fc6> cs_17329e66670990a9() { cs_init_d37bccc1c3814fc6();
{ return cs_fff40af3d4f61c60(); }
}
// M:kairo.unity.panel.FepPanel.GetStringLength(System.String)
std::int32_t cs_73f2425dc6862ef5(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,pls::cs::String v_s) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_2814 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_i_2835 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2835; auto cs_right = ([&]() -> std::int32_t { auto cs_arg0 = v_s; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2835; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2835 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); auto cs_arg0 = ([&]() -> char16_t { auto cs_arg0 = v_s; auto cs_arg1 = v_i_2835; return pls::generated::cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ce1d94fc60447e39(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_value = (([&]() -> std::int32_t { auto cs_left = v_num_2814; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); v_num_2814 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() -> std::int32_t { auto cs_left = v_num_2814; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); v_num_2814 = cs_value; return cs_value; }());
}
}
return v_num_2814;
}
}
}
// M:kairo.unity.panel.FepPanel.IsSimpleChara(System.Char)
bool cs_ce1d94fc60447e39(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,char16_t v_c) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(127)); return (cs_left >= cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(32)); return (cs_left < cs_right); }()))) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(65376)); return (cs_left > cs_right); }())) {
return ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(65439)); return (cs_left <= cs_right); }());
}
return false;
}
return true;
}
}
}
// M:kairo.unity.panel.FepPanel.SetSoftLabel(System.Int32,System.String)
void cs_88ddecbed02f84a4(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,std::int32_t v_key,pls::cs::String v_text) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:kairo.unity.panel.TextBox.GetText
pls::cs::String cs_b39060ea994b3795(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this) { cs_init_4ccab99c775ca4c5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e7444216b8176cd4; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.AddTouchComponent(kairo.unity.surface.TouchComponent)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_c015426253e69b27(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((!(([&]() -> bool { auto cs_receiver = cs_this; return cs_9e885a578815ee7e(static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_receiver)); }())))) {
return pls::cs::Ref<cs_3a3d09f9e75a32d2>{};
}
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_6236178d574fe9e3(); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); auto cs_arg0 = v_component; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
return v_component;
}
}
}
// M:kairo.unity.surface.SurfaceBase.AddTouchComponent(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_30e0326b36c8f3ca(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_value,pls::cs::Ref<cs_6517d63c01870958> v_option) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> pls::cs::Ref<pls::kairo::Graphics> { return pls::kairo::Graphics::GetCurrent(); }());
if ((!(([&]() -> bool { auto cs_receiver = cs_this; return cs_9e885a578815ee7e(static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_receiver)); }())))) {
return pls::cs::Ref<cs_3a3d09f9e75a32d2>{};
}
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent_8898 = pls::cs::Ref<cs_3a3d09f9e75a32d2>{};
for (std::int32_t v_i_8933 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_8933; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f7c9bda807d7eeb4; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_8933; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_8933 = cs_new; return cs_old; }())) {
if ((!(([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f7c9bda807d7eeb4; }())); auto cs_arg0 = v_i_8933; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec0be04bf6c6d5ad; }())))) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f7c9bda807d7eeb4; }())); auto cs_arg0 = v_i_8933; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()); v_touchComponent_8898 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent_8898); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0541e8aace93207c(cs_receiver); }());
break;
}
}
if (([&]() { auto cs_left = pls::cs::box(v_touchComponent_8898); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f7c9bda807d7eeb4; }())); auto cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { return cs_4766c761098d0094(); }()); v_touchComponent_8898 = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = v_touchComponent_8898; auto cs_value = cs_this; pls::game::cs_require(cs_target)->cs_0c00171d2e322a58 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent_8898; auto cs_value = v_id; pls::game::cs_require(cs_target)->cs_0203776c95852fed = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent_8898; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_830652d422733c85 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent_8898; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_1ec368037b30316d = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent_8898; auto cs_value = v_width; pls::game::cs_require(cs_target)->cs_0dcfa10d1674b264 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent_8898; auto cs_value = v_height; pls::game::cs_require(cs_target)->cs_2445e8abe98d39d6 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent_8898; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_bf6f23b78c4832ac = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent_8898; auto cs_value = v_option; pls::game::cs_require(cs_target)->cs_1d1d519d3428e730 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchComponent_8898; auto cs_value = true; pls::game::cs_require(cs_target)->cs_ec0be04bf6c6d5ad = cs_value; return cs_value; }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = v_touchComponent_8898; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c015426253e69b27(cs_receiver,cs_arg0); }());
return v_touchComponent_8898;
}
}
}
// M:kairo.unity.surface.SurfaceBase.BeginTouchRegist(kairo.unity.ui.Graphics)
void cs_14c25464911dc345(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_24045 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_24045; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f7c9bda807d7eeb4; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_24045; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_24045 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent_24110 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f7c9bda807d7eeb4; }())); auto cs_arg0 = v_i_24045; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchComponent_24110; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48f24d93a00e0ab4; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = v_touchComponent_24110; auto cs_value = false; pls::game::cs_require(cs_target)->cs_ec0be04bf6c6d5ad = cs_value; return cs_value; }());
}
}
for (std::int32_t v_j_24261 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_24261; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_24261; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_24261 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent2_24321 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); auto cs_arg0 = v_j_24261; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = v_touchComponent2_24321; auto cs_value = true; pls::game::cs_require(cs_target)->cs_ec0be04bf6c6d5ad = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_touchComponent2_24321; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_touchComponent2_24321; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); auto cs_value = true; pls::game::cs_require(cs_target)->cs_a404a90eff0aeb13 = cs_value; return cs_value; }());
}
}
for (std::int32_t v_k_24510 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_24510; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_24510; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_24510 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_24574 = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); auto cs_arg0 = v_k_24510; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_07a9daa229d89929; }());
if (([&]() { auto cs_left = pls::cs::box(v_component_24574); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = v_component_24574; auto cs_value = true; pls::game::cs_require(cs_target)->cs_ec0be04bf6c6d5ad = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_component_24574; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_component_24574; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); auto cs_value = true; pls::game::cs_require(cs_target)->cs_a404a90eff0aeb13 = cs_value; return cs_value; }());
}
}
}
for (std::int32_t v_l_24797 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_24797; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_24797; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_24797 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component2_24860 = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); auto cs_arg0 = v_l_24797; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_07a9daa229d89929; }());
if (([&]() { auto cs_left = pls::cs::box(v_component2_24860); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = v_component2_24860; auto cs_value = true; pls::game::cs_require(cs_target)->cs_ec0be04bf6c6d5ad = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_component2_24860; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_component2_24860; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); auto cs_value = true; pls::game::cs_require(cs_target)->cs_a404a90eff0aeb13 = cs_value; return cs_value; }());
}
}
}
([&]() { auto cs_receiver = cs_this; auto cs_rhs = true; auto cs_value = cs_rhs; cs_6b3ccfcb08f2d196(static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_receiver),cs_value); return cs_value; }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.CanRegistComponent
bool cs_6236178d574fe9e3(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return true;
}
}
}
// M:kairo.unity.surface.SurfaceBase.CheckFirstTouch(System.Int32,System.Int32)
bool cs_1941f0d8c1b7225c(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id,std::int32_t v_value) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }()); auto cs_arg1 = ([&]() -> std::int64_t { auto cs_arg0 = v_id; auto cs_arg1 = v_value; return cs_e0f91f73482fc418(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_67202387fb4b4cca(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.CheckFirstTouch(System.Int32)
bool cs_d3954e1f034e3709(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }()); auto cs_arg1 = v_id; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_aeefab6df54a6aa1(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.CheckHitPointRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
bool cs_6528c0f17d8d5769(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_x,std::int32_t v_y,std::int32_t v_rcx,std::int32_t v_rcy,std::int32_t v_rcw,std::int32_t v_rch) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (((([&]() -> bool { auto cs_left = v_rcx; auto cs_right = v_x; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_x; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_rcx; auto cs_right = v_rcw; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }())) && ([&]() -> bool { auto cs_left = v_rcy; auto cs_right = v_y; return (cs_left <= cs_right); }()))) {
return ([&]() -> bool { auto cs_left = v_y; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_rcy; auto cs_right = v_rch; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }());
}
return false;
}
}
}
// M:kairo.unity.surface.SurfaceBase.CheckTouch(System.Int32,System.Int32)
bool cs_559ffe43566a7dfb(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id,std::int32_t v_value) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }()); auto cs_arg1 = ([&]() -> std::int64_t { auto cs_arg0 = v_id; auto cs_arg1 = v_value; return cs_e0f91f73482fc418(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_67202387fb4b4cca(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.CheckTouchId(java.util.Vector{kairo.unity.surface.SurfaceBase.TouchPoint},System.Int32)
bool cs_aeefab6df54a6aa1(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> v_list,std::int32_t v_id) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = v_list; auto cs_arg1 = v_id; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f14e41b7fe4df878(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.CheckTouchKey(java.util.Vector{kairo.unity.surface.SurfaceBase.TouchPoint},System.Int64)
bool cs_67202387fb4b4cca(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> v_list,std::int64_t v_key) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = v_list; auto cs_arg1 = v_key; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f1e94a75305f273b(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.ClearTouchComponent
void cs_0a96693c31be1e15(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.CreateTouchEvent(System.Int32,kairo.unity.surface.TouchComponent)
pls::cs::Ref<cs_757516ce190cf813> cs_63e01a337b8c5816(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_type,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_30686 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); v_num_30686 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_848dae40f6538a32; }()); auto cs_index = v_num_30686; return cs_array.at(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8b12faa23ea1f67; }()); auto cs_index = v_num_30686; return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8b12faa23ea1f67; }()); auto cs_index = v_num_30686; return cs_array.at(cs_index); }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { return cs_f7e61b586cae64ba(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent_30892 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8b12faa23ea1f67; }()); auto cs_index = v_num_30686; return cs_array.at(cs_index); }())); auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_848dae40f6538a32; }()); auto cs_index = v_num_30686; return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_848dae40f6538a32; }()); auto cs_index = v_num_30686; auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
if ((([&]() -> bool { auto cs_left = v_num_30686; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent_30892; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_right = pls::cs::Array<pls::cs::Array<std::int32_t>>{}; return cs_left == cs_right; }()))) {
([&]() { auto cs_target = v_touchEvent_30892; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_arg0 = ([&](){auto cs_initial_array_180=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_180.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));cs_initial_array_180.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));return cs_initial_array_180;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_8d755a9f926cf434 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEvent_30892; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_arg0 = ([&](){auto cs_initial_array_181=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_181.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));cs_initial_array_181.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));return cs_initial_array_181;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_1e8c6984f2271d7b = cs_value; return cs_value; }());
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
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint2_10312 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8d54585ad9a7509; }())); auto cs_arg0 = v_i_10251; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if (((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); auto cs_arg0 = v_touchPoint2_10312; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56806ca0201c5fb9(cs_receiver,cs_arg0); }()))) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); auto cs_arg0 = v_touchPoint2_10312; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56806ca0201c5fb9(cs_receiver,cs_arg0); }()))))) {
([&]() { auto cs_value = v_touchPoint2_10312; v_touchPoint_10220 = cs_value; return cs_value; }());
break;
}
}
if (([&]() { auto cs_left = pls::cs::box(v_touchPoint_10220); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8d54585ad9a7509; }())); auto cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { return cs_939028c47866c657(); }()); v_touchPoint_10220 = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_70b7974d356d68ab>>(v_touchPoint_10220); auto cs_arg0 = v_key; auto cs_arg1 = v_x; auto cs_arg2 = v_y; auto cs_arg3 = v_component; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dbab81fd91425aae(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
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
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_848dae40f6538a32; }()); auto cs_index = v_i_10809; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
for (std::int32_t v_j_10909 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_10909; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_10909; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_10909 = cs_new; return cs_old; }())) {
pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> v_vector_10956 = (((([&]() -> bool { auto cs_left = v_j_10909; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) ? ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }()) : ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())));
for (std::int32_t v_num2_11025 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(v_vector_10956); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num2_11025; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num2_11025; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_11025 = cs_new; return cs_old; }())) {
bool v_flag_11086 = true;
for (std::int32_t v_k_11113 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_11113; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_11113; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_11113 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = v_vector_10956; auto cs_arg1 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); auto cs_arg0 = v_k_11113; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_67202387fb4b4cca(cs_receiver,cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = false; v_flag_11086 = cs_value; return cs_value; }());
break;
}
}
if (v_flag_11086) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_arg1 = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(v_vector_10956); auto cs_arg0 = v_num2_11025; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_07a9daa229d89929; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(v_vector_10956); auto cs_arg0 = v_num2_11025; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
}
}
for (std::int32_t v_l_11450 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_11450; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_11450; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_11450 = cs_new; return cs_old; }())) {
for (std::int32_t v_num3_11508 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num3_11508; auto cs_right = v_l_11450; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num3_11508; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_11508 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent_11583 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = v_num3_11508; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent2_11653 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); auto cs_arg0 = v_num3_11508; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent_11583); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c6d10dc3c886403b(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent2_11653); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c6d10dc3c886403b(cs_receiver); }()); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); auto cs_arg0 = v_touchComponent_11583; auto cs_arg1 = v_num3_11508; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_221133265c339075(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); auto cs_arg0 = v_touchComponent2_11653; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num3_11508; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_221133265c339075(cs_receiver,cs_arg0,cs_arg1); }());
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
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint_12530 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); auto cs_arg0 = v_num5_12455; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
std::int32_t v_num6_12584 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());
for (std::int32_t v_i_12625 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_12625; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_12625; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_12625 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent_12685 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = v_i_12625; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_receiver = v_touchEvent_12685; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); auto cs_right = ([&]() { auto cs_receiver = v_touchPoint_12530; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69110646eac3c92f; }()); return (cs_left == cs_right); }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_757516ce190cf813>>(v_touchEvent_12685); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b85e74354de5635b(cs_receiver); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); v_num6_12584 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() -> std::int32_t { auto cs_left = v_i_12625; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); v_num6_12584 = cs_value; return cs_value; }());
}
}
}
if (([&]() -> bool { auto cs_left = v_num6_12584; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_12933 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = v_touchPoint_12530; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3b9b9f07493bab63; }()); auto cs_arg1 = ([&]() { auto cs_receiver = v_touchPoint_12530; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0556df4715acbd82; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bc6be8a193cbe380(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() { auto cs_left = pls::cs::box(v_component_12933); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_arg1 = v_component_12933; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_arg1 = v_num6_12584; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b9d1ea00d1f689ef(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }()); auto cs_arg1 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component_12933); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_67202387fb4b4cca(cs_receiver,cs_arg0,cs_arg1); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_arg1 = v_component_12933; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num6_12584; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b9d1ea00d1f689ef(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
for (std::int32_t v_j_13337 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_13337; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_13337; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_13337 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent_13399 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); auto cs_arg0 = v_j_13337; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
bool v_flag_13452 = false;
for (std::int32_t v_num7_13480 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num7_13480; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num7_13480; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num7_13480 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent2_13554 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = v_num7_13480; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_touchEvent2_13554; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); auto cs_right = pls::cs::box(v_touchComponent_13399); return cs_left == cs_right; }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_757516ce190cf813>>(v_touchEvent2_13554); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b85e74354de5635b(cs_receiver); }()))) {
([&]() { auto cs_value = true; v_flag_13452 = cs_value; return cs_value; }());
break;
}
}
if (v_flag_13452) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_touchComponent_13399); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); auto cs_arg1 = static_cast<float>(v_num3_12332); auto cs_arg2 = static_cast<float>(v_num4_12391); auto cs_arg3 = v_touchComponent_13399; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_8636a26efe9d2eb5(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
}
for (std::int32_t v_num8_13878 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num8_13878; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num8_13878; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num8_13878 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint2_13954 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); auto cs_arg0 = v_num8_13878; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
bool v_flag2_14011 = true;
for (std::int32_t v_k_14039 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_14039; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_14039; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_14039 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint3_14102 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); auto cs_arg0 = v_k_14039; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchPoint2_13954; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69110646eac3c92f; }()); auto cs_right = ([&]() { auto cs_receiver = v_touchPoint3_14102; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69110646eac3c92f; }()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = false; v_flag2_14011 = cs_value; return cs_value; }());
break;
}
}
if (v_flag2_14011) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); auto cs_arg0 = v_num8_13878; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
}
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_9a72feb799163299 = cs_value; return cs_value; }());
for (std::int32_t v_l_14369 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_14369; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_14369; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_14369 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = v_l_14369; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())); pls::game::cs_require(cs_target)->cs_267c8d43843f9788 = cs_value; return cs_value; }());
if ((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_267c8d43843f9788; }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());
}
}
for (std::int32_t v_m_14648 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_14648; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_14648; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_14648 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint4_14707 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }())); auto cs_arg0 = v_m_14648; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
std::int32_t v_num9_14758 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
for (std::int32_t v_n_14782 = v_num2_12266; ([&]() -> bool { auto cs_left = v_n_14782; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_14782; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_14782 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_757516ce190cf813>>(([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); auto cs_arg0 = v_n_14782; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b85e74354de5635b(cs_receiver); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_n_14782; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num9_14758 = cs_value; return cs_value; }());
break;
}
}
if (([&]() -> bool { auto cs_left = v_num9_14758; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); v_num9_14758 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); auto cs_arg1 = ([&]() { auto cs_receiver = v_touchPoint4_14707; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_07a9daa229d89929; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); auto cs_arg1 = v_num9_14758; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b9d1ea00d1f689ef(cs_receiver,cs_arg0,cs_arg1); }());
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
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent3_15667 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); auto cs_arg0 = v_num10_15596; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = v_evt_15945; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_9f5fde625f99aa16(cs_arg0); }());
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_75dcbdf2f80cf9d3(cs_receiver); }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_711ed50ca021ec51; }())); auto cs_arg0 = cs_this; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e879b926a94bdd5d(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c23db509fef62bc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7c055166f9b27c04(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7c055166f9b27c04(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_974403b828a4cbb8 = cs_value; return cs_value; }());
for (std::int32_t v_num11_16177 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num11_16177; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5becacd354817f23; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num11_16177; auto cs_new = pls::cs::add_i32(cs_old,1); v_num11_16177 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f376b7177e1111c6; }()); auto cs_index = v_num11_16177; return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_77131fb79b6dc21d(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_5becacd354817f23 = cs_value; return cs_value; }());
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8e78aafd74ff9c93; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_cdfbc726afcb4394 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_8e78aafd74ff9c93 = cs_value; return cs_value; }());
}
if (((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdfbc726afcb4394; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { return pls::kairo::DebugInput::get_touchCount(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) && (!(([&]() -> bool { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::DebugInput::GetMouseButton(cs_arg0); }()))))) {
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
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = v_num2_16708; auto cs_arg1 = v_num3_16766; auto cs_arg2 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_arg3 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_arg4 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); auto cs_arg5 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6528c0f17d8d5769(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }())))) {
return false;
}
bool v_flag_17103 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = v_num4_16824; auto cs_arg1 = v_num5_16883; auto cs_arg2 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_arg3 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_arg4 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); auto cs_arg5 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6528c0f17d8d5769(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
bool v_flag2_17178 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }()); auto cs_arg1 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_67202387fb4b4cca(cs_receiver,cs_arg0,cs_arg1); }());
std::int32_t v_num6_17236 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }()); auto cs_arg1 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f1e94a75305f273b(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9d67a26a33b8a0c6; }()); auto cs_arg1 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f1e94a75305f273b(cs_receiver,cs_arg0,cs_arg1); }());
std::int32_t v_num7_17342 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent_17383 = pls::cs::Ref<cs_757516ce190cf813>{};
if ((((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }()) && ([&]() -> bool { auto cs_left = v_action_16942; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdfbc726afcb4394; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdfbc726afcb4394; }()); auto cs_right = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); return (cs_left != cs_right); }()))) {
return false;
}
switch (v_action_16942) {
case 0:
cs_switch_17534_section_0: ;
{
if ((!(v_flag2_17178))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_num6_17236; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); pls::game::cs_require(cs_target)->cs_cdfbc726afcb4394 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); auto cs_arg1 = static_cast<float>(v_num2_16708); auto cs_arg2 = static_cast<float>(v_num3_16766); auto cs_arg3 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_8636a26efe9d2eb5(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
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
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint_17959 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); auto cs_arg0 = v_num6_17236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
float v_num8_18017 = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = v_touchPoint_17959; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c5b0b4bdfc0bc3e5; }()); auto cs_right = static_cast<float>(v_num2_16708); return (cs_left - cs_right); }());
float v_num9_18064 = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = v_touchPoint_17959; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_80159b241b8b0fb0; }()); auto cs_right = static_cast<float>(v_num3_16766); return (cs_left - cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_num8_18017; auto cs_right = v_num8_18017; return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_num9_18064; auto cs_right = v_num9_18064; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = pls::game::cs_f32(0x43610000u); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
} else {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); v_touchEvent_17383 = cs_value; return cs_value; }());
goto cs_switch_17534_section_2;
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
} else if ((v_flag_17103 && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c23db509fef62bc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); pls::game::cs_require(cs_target)->cs_cdfbc726afcb4394 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
break;
}
case 2:
cs_switch_17534_section_2: ;
{
if (v_flag2_17178) {
if (([&]() -> bool { auto cs_left = v_num6_17236; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_70b7974d356d68ab> v_touchPoint2_18922 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); auto cs_arg0 = v_num6_17236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
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
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent2_19485 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_touchEvent2_19485; auto cs_value = v_num10_18979; pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEvent2_19485; auto cs_value = v_num11_19000; pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = v_touchEvent2_19485; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = v_touchPoint2_18922; auto cs_old = pls::game::cs_require(cs_target)->cs_a14ff763839a39fc; auto cs_rhs = ([&]() -> float { auto cs_left = static_cast<float>(v_num10_18979); auto cs_right = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ae43c28ac9b9a7a; }()); return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_a14ff763839a39fc = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchPoint2_18922; auto cs_old = pls::game::cs_require(cs_target)->cs_cdbd50f771e65195; auto cs_rhs = ([&]() -> float { auto cs_left = static_cast<float>(v_num11_19000); auto cs_right = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9581916698464411; }()); return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_cdbd50f771e65195 = cs_value; return cs_value; }());
} else if ((([&]() { auto cs_left = pls::cs::box(v_option_16980); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_right = pls::cs::Array<std::int32_t>{}; return cs_left != cs_right; }()))) {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent3_19844 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = static_cast<float>(v_num2_16708); auto cs_right = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); return (cs_left - cs_right); }())); auto cs_right = (([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }())); auto cs_right = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }())); return (cs_left / cs_right); }())); return (cs_left / cs_right); }()))); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = static_cast<float>(v_num3_16766); auto cs_right = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); return (cs_left - cs_right); }())); auto cs_right = (([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }())); auto cs_right = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }())); return (cs_left / cs_right); }())); return (cs_left / cs_right); }()))); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_right = (([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }())).length(); return (cs_left < cs_right); }())) {
std::int32_t v_num14_20314 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.at(cs_index); }());
std::int32_t v_num15_20354 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.at(cs_index); }());
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
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c6683c02c87c987a; }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); return (cs_left >= cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c6683c02c87c987a; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_62b3f795cc04ca10; }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); return (cs_left >= cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_option_16980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_62b3f795cc04ca10; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = v_touchEvent3_19844; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = v_touchEvent3_19844; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
} else {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent4_21321 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_touchEvent4_21321; auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>(v_num2_16708); auto cs_right = ([&]() { auto cs_receiver = v_touchPoint2_18922; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c5b0b4bdfc0bc3e5; }()); return (cs_left - cs_right); }()))); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEvent4_21321; auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>(v_num3_16766); auto cs_right = ([&]() { auto cs_receiver = v_touchPoint2_18922; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_80159b241b8b0fb0; }()); return (cs_left - cs_right); }()))); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = v_touchEvent4_21321; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
break;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
if ((v_flag_17103 && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c23db509fef62bc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); pls::game::cs_require(cs_target)->cs_cdfbc726afcb4394 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent5_21804 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_touchEvent5_21804; auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num2_16708; auto cs_right = v_num4_16824; return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchEvent5_21804; auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num3_16766; auto cs_right = v_num5_16883; return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = v_touchEvent5_21804; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_num6_17236; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); auto cs_arg0 = v_num6_17236; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8327bff35061e212(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0617db512087b2ec; }())); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); auto cs_arg1 = static_cast<float>(v_num2_16708); auto cs_arg2 = static_cast<float>(v_num3_16766); auto cs_arg3 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_8636a26efe9d2eb5(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = v_touchEvent_17383; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}
if ((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aa003e283f7a4976; }()) && ([&]() -> bool { auto cs_left = ([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9690e9ad077208d1; }())); auto cs_right = v_num_16675; return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left != cs_right); }()))) {
pls::cs::Array<pls::cs::Array<std::int32_t>> v_array_22334 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }());
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_22334; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_81c662bf139f2e37; }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = v_num_16675; return (cs_left / cs_right); }()))); auto cs_arg1 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_22334; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c787628daa40a814; }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = v_num_16675; return (cs_left / cs_right); }()))); auto cs_arg2 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_arg3 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_arg4 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); auto cs_arg5 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6528c0f17d8d5769(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_22334; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_81c662bf139f2e37; }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = v_num_16675; return (cs_left / cs_right); }()))); auto cs_arg1 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_22334; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c787628daa40a814; }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = v_num_16675; return (cs_left / cs_right); }()))); auto cs_arg2 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); auto cs_arg3 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); auto cs_arg4 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); auto cs_arg5 = ([&]() { auto cs_receiver = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6528c0f17d8d5769(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()))) {
std::int32_t v_i_22645 = std::int32_t{};
for (([&]() { auto cs_value = v_num7_17342; v_i_22645 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_i_22645; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_22645; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_22645 = cs_new; return cs_old; }())) {
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_757516ce190cf813>>(([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = v_i_22645; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b85e74354de5635b(cs_receiver); }())))) break;
}
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9a72feb799163299; }())) {
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent6_22821 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_touchEvent6_22821; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_c0fba19991e5dbf1 = cs_value; return cs_value; }());
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent6_22821; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent6_22821; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent6_22821; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent6_22821; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = v_touchEvent6_22821; auto cs_arg1 = ([&]() { auto cs_old = v_i_22645; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_22645 = cs_new; return cs_old; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b9d1ea00d1f689ef(cs_receiver,cs_arg0,cs_arg1); }());
}
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent7_23311 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); auto cs_arg1 = v_c; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_63e01a337b8c5816(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_touchEvent7_23311; auto cs_value = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9690e9ad077208d1; }())); auto cs_right = v_num_16675; return (cs_left / cs_right); }()))); pls::game::cs_require(cs_target)->cs_c0fba19991e5dbf1 = cs_value; return cs_value; }());
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent7_23311; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent7_23311; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent7_23311; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_touchEvent7_23311; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fc3d16947dee37a; }())); auto cs_arg0 = v_touchEvent7_23311; auto cs_arg1 = ([&]() { auto cs_old = v_i_22645; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_22645 = cs_new; return cs_old; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b9d1ea00d1f689ef(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9690e9ad077208d1 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_c); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_458dbabeee49f986(cs_receiver,cs_arg0); }())) {
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
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_26263 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = v_i_26206; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
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
return ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da77c0d1c7c10cf5; }())); auto cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.GetComponentId(System.Int32)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_19ca6d3dec6d9bd3(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_componentLength_26467 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_159596982eb74639(cs_receiver); }());
for (std::int32_t v_i_26519 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_26519; auto cs_right = v_componentLength_26467; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_26519; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_26519 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_26576 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); auto cs_arg0 = v_i_26519; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
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
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent_28974 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); auto cs_arg0 = v_i_28917; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
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
pls::cs::Ref<cs_757516ce190cf813> v_touchEvent_29387 = ([&]() -> pls::cs::Ref<cs_757516ce190cf813> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef6910d6b6998a79; }())); auto cs_arg0 = v_i_29330; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
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
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }()); auto cs_right = pls::cs::Array<std::int32_t>{}; return cs_left != cs_right; }())) {
if ((([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }()); auto cs_right = pls::cs::Array<std::int32_t>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length(); auto cs_right = (([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length(); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length()); pls::game::cs_require(cs_target)->cs_5e13f1b59d6187ce = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }()); auto cs_right = pls::cs::Array<float>{}; return cs_left != cs_right; }())) {
if ((([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }()); auto cs_right = pls::cs::Array<float>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())).length(); auto cs_right = (([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())).length(); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<float>::make((([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())).length()); pls::game::cs_require(cs_target)->cs_68e37d2551fe1039 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }()); auto cs_right = pls::cs::Array<float>{}; return cs_left != cs_right; }())) {
if ((([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }()); auto cs_right = pls::cs::Array<float>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())).length(); auto cs_right = (([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())).length(); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<float>::make((([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())).length()); pls::game::cs_require(cs_target)->cs_445810c66b37725f = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
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
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }()); auto cs_index = v_pointerIndex; return cs_array.at(cs_index); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetX(System.Int32)
float cs_7be670f4053bc836(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,std::int32_t v_index) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }());
}
}
}
// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetY(System.Int32)
float cs_f83f5dafe8eac875(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,std::int32_t v_index) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }());
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
// M:kairo.unity.surface.SurfaceBase.OnReceiveTouchEvent(kairo.unity.surface.SurfaceBase.MotionEventRecord)
void cs_77131fb79b6dc21d(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<cs_e1ac8ca60ae0d404> v_evt) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
{pls::cs::MonitorScope cs_monitor_182(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_509c67bbf073adfa; }()));{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_974403b828a4cbb8; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5becacd354817f23; }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f376b7177e1111c6; }())).length(); return (cs_left >= cs_right); }())) {
pls::cs::Array<pls::cs::Ref<cs_e1ac8ca60ae0d404>> v_array_34216 = pls::cs::Array<pls::cs::Ref<cs_e1ac8ca60ae0d404>>::make(([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f376b7177e1111c6; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()));
([&]() -> void { auto cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f376b7177e1111c6; }())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::box(v_array_34216); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f376b7177e1111c6; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() { auto cs_target = v_array_34216; auto cs_index = ([&]() -> std::int32_t { auto cs_left = (v_array_34216).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> pls::cs::Ref<cs_e1ac8ca60ae0d404> { return cs_ef5589b812f9d157(); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_array_34216; pls::game::cs_require(cs_target)->cs_f376b7177e1111c6 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f376b7177e1111c6; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5becacd354817f23; }()); return cs_array.at(cs_index); }())); auto cs_arg0 = cs_this; auto cs_arg1 = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e879b926a94bdd5d(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_5becacd354817f23; auto cs_new = pls::cs::add_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_5becacd354817f23 = cs_new; return cs_old; }());
return;
}
{
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c23db509fef62bc; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_75dcbdf2f80cf9d3(cs_receiver); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c23db509fef62bc; }())); auto cs_arg0 = cs_this; auto cs_arg1 = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e879b926a94bdd5d(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1fbc2d8a4542188f; }())); auto cs_arg0 = cs_this; auto cs_arg1 = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e879b926a94bdd5d(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aa003e283f7a4976; }())) {
std::int32_t v_action_34640 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1fc22b186f83ddec(cs_receiver); }());
if ((([&]() -> bool { auto cs_left = v_action_34640; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_action_34640; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = (([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); cs_target.at(cs_index) = cs_value; return cs_value; }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9690e9ad077208d1 = cs_value; return cs_value; }());
return;
}
{
std::int32_t v_num_34838 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) {
std::int32_t v_num2_34936 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num3_34998 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() { auto cs_value = pls::cs::conv_i32(([&]() -> double { auto cs_arg0 = static_cast<double>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num2_34936; auto cs_right = v_num2_34936; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num3_34998; auto cs_right = v_num3_34998; return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::generated::cs_6d9bf6060a3effca(cs_arg0); }())); v_num_34838 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = (([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); cs_target.at(cs_index) = cs_value; return cs_value; }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
std::int32_t v_pointerCount_35183 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_40ac27079aeadda5(cs_receiver); }());
for (std::int32_t v_i_35237 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_35237; auto cs_right = v_pointerCount_35183; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_35237; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_35237 = cs_new; return cs_old; }())) {
std::int32_t v_pointerId_35288 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_evt); auto cs_arg0 = v_i_35237; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4ccc696f76a5a02e(cs_receiver,cs_arg0); }());
if (((([&]() -> bool { auto cs_left = v_pointerId_35288; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left < cs_right); }()) && ((([&]() -> bool { auto cs_left = v_pointerId_35288; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_action_34640; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left != cs_right); }())))) && ((([&]() -> bool { auto cs_left = v_pointerId_35288; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_action_34640; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x106ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x106ull)); return (cs_left != cs_right); }()))))) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = v_i_35237; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::conv_i32(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_evt); auto cs_arg0 = v_i_35237; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_7be670f4053bc836(cs_receiver,cs_arg0); }())); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = v_i_35237; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::conv_i32(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_evt); auto cs_arg0 = v_i_35237; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f83f5dafe8eac875(cs_receiver,cs_arg0); }())); auto cs_right = ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3f051d1070002654(cs_receiver); }()) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)) : ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_aa76afa6918aaccc(cs_receiver); }()))); return pls::cs::add_i32(cs_left,cs_right); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = v_i_35237; return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_pointerId_35288; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
std::int32_t v_num4_35664 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) {
std::int32_t v_num5_35763 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num6_35825 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() { auto cs_value = pls::cs::conv_i32(([&]() -> double { auto cs_arg0 = static_cast<double>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num5_35763; auto cs_right = v_num5_35763; return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num6_35825; auto cs_right = v_num6_35825; return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::generated::cs_6d9bf6060a3effca(cs_arg0); }())); v_num4_35664 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = v_num_34838; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_35664; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fb3d6a30817a2b3d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec63e4f8389b2d48; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(v_list); auto cs_arg0 = v_i_27414; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3b9b9f07493bab63; }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
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
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_70b7974d356d68ab> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>>>(v_list); auto cs_arg0 = v_i_27214; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_69110646eac3c92f; }()); auto cs_right = v_key; return (cs_left == cs_right); }())) {
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
// M:kairo.unity.surface.SurfaceBase.SetScaleRatio(System.Single)
void cs_8de8ff27e94cbce9(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,float v_scale) { cs_init_9326c27a92cfea3a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_scale; pls::game::cs_require(cs_target)->cs_78190c2307d8886c = cs_value; return cs_value; }());
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
pls::cs::Array<std::int32_t> v_array_601 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_arg0 = v_key; return cs_b37fd969c7a5953c(cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = v_key; pls::game::cs_require(cs_target)->cs_69110646eac3c92f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_c5b0b4bdfc0bc3e5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_80159b241b8b0fb0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_601; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); pls::game::cs_require(cs_target)->cs_3b9b9f07493bab63 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_601; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); pls::game::cs_require(cs_target)->cs_0556df4715acbd82 = cs_value; return cs_value; }());
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
pls::cs::Ref<cs_6517d63c01870958> v_touchOption_7144 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678()); auto cs_arg0 = v_i_7080; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchOption_7144; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4d04dab5735542a9; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = v_touchOption_7144; auto cs_value = false; pls::game::cs_require(cs_target)->cs_a404a90eff0aeb13 = cs_value; return cs_value; }());
}
}
for (std::int32_t v_num_7286 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_7286; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_7286; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_7286 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); auto cs_arg0 = v_num_7286; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); auto cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_14c25464911dc345(cs_arg0); }());
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.ClearTouchComponent
void cs_1e0863d8f2b7a360(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_829 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_829; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_829; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_829 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); auto cs_arg0 = v_num_829; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0a96693c31be1e15(cs_receiver); }());
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.DoEvents
void cs_c311823b6552fdf7(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_988 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_988; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_988; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_988 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); auto cs_arg0 = v_i_988; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_43e8c5a72fc9d69b(); }());
}
std::int32_t v_num_1083 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_j_1104 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1104; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1104; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1104 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_num_1083; auto cs_rhs = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); auto cs_arg0 = v_j_1104; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_159596982eb74639(cs_receiver); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_1083 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }())).length(); auto cs_right = v_num_1083; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_3a3d09f9e75a32d2>>::make(v_num_1083); pls::game::cs_require(cs_target)->cs_4a2bd2b1dc2b62f7 = cs_value; return cs_value; }());
}
std::int32_t v_num2_1303 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_k_1325 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_1325; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_1325; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_1325 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9326c27a92cfea3a> v_surfaceBase_1383 = ([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); auto cs_arg0 = v_k_1325; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
for (std::int32_t v_l_1437 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_1437; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_1383); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_159596982eb74639(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_1437; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_1437 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = ([&]() { auto cs_old = v_num2_1303; auto cs_new = pls::cs::add_i32(cs_old,1); v_num2_1303 = cs_new; return cs_old; }()); auto cs_value = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_1383); auto cs_arg0 = v_l_1437; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
for (std::int32_t v_m_1572 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_1572; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_1083; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_1572; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_1572 = cs_new; return cs_old; }())) {
for (std::int32_t v_num3_1615 = ([&]() -> std::int32_t { auto cs_left = v_num_1083; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num3_1615; auto cs_right = v_m_1572; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num3_1615; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_1615 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_1615; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c6d10dc3c886403b(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = v_num3_1615; return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c6d10dc3c886403b(cs_receiver); }()); return (cs_left > cs_right); }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent_1763 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = v_num3_1615; return cs_array.at(cs_index); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = v_num3_1615; auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_1615; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num3_1615; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_touchComponent_1763; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
for (std::int32_t v_num4_1924 = ([&]() -> std::int32_t { auto cs_left = v_num_1083; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num4_1924; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num4_1924; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num4_1924 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_touchComponent2_1983 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4a2bd2b1dc2b62f7; }()); auto cs_index = v_num4_1924; return cs_array.at(cs_index); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = v_touchComponent2_1983; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c00171d2e322a58; }())); auto cs_arg0 = v_touchComponent2_1983; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_1698aae3145703cc(cs_arg0); }())) {
break;
}
}
for (std::int32_t v_num5_2120 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num5_2120; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num5_2120; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num5_2120 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); auto cs_arg0 = v_num5_2120; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_f7a60b8dd9e85732(); }());
}
if (((pls::generated::cs_b0827224162a4f93() && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && ((([&]() -> bool { auto cs_arg0 = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x130ull))); return pls::kairo::DebugInput::GetKey(cs_arg0); }()) || ([&]() -> bool { auto cs_arg0 = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12full))); return pls::kairo::DebugInput::GetKey(cs_arg0); }()))))) {
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
if (([&]() -> bool { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::DebugInput::GetMouseButtonDown(cs_arg0); }())) {
std::int32_t v_rectIndex_3206 = std::int32_t{};
std::int32_t v_handleIndex_3226 = std::int32_t{};
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(cs_this); auto cs_arg0 = v_num6_2419; auto cs_arg1 = v_num7_2528; auto& cs_arg2 = v_rectIndex_3206; auto& cs_arg3 = v_handleIndex_3226; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_221c91752345c75b(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }())))) {
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_arg0 = ([&](){auto cs_initial_array_169=pls::cs::Array<pls::kairo::Vector2>::make(2);cs_initial_array_169.at(0)=([&]() { auto cs_arg0 = v_num8_2660; auto cs_arg1 = v_num9_2683; return pls::kairo::Vector2(cs_arg0,cs_arg1); }());cs_initial_array_169.at(1)=([&]() { auto cs_arg0 = v_num8_2660; auto cs_arg1 = v_num9_2683; return pls::kairo::Vector2(cs_arg0,cs_arg1); }());return cs_initial_array_169;}()); cs_receiver.Add(cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_fa643bfe19a61f34 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_1503ca63d74f3eef = cs_value; return cs_value; }());
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = v_rectIndex_3206; pls::game::cs_require(cs_target)->cs_fa643bfe19a61f34 = cs_value; return cs_value; }());
pls::cs::Array<std::int32_t> v_paintRect_3586 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(cs_this); auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ac30f7dfe797187c(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_handleIndex_3226; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&](){auto cs_value_storage_170_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_170_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));auto& cs_value_storage_170=cs_value_storage_170_array.at(cs_value_storage_170_index);auto cs_arg0=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()));auto cs_arg1=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()));cs_value_storage_170.Set(cs_arg0,cs_arg1);}());
([&](){auto cs_value_storage_171_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_171_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));auto& cs_value_storage_171=cs_value_storage_171_array.at(cs_value_storage_171_index);auto cs_arg0=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));auto cs_arg1=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));cs_value_storage_171.Set(cs_arg0,cs_arg1);}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_1503ca63d74f3eef = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_handleIndex_3226; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&](){auto cs_value_storage_172_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_172_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));auto& cs_value_storage_172=cs_value_storage_172_array.at(cs_value_storage_172_index);auto cs_arg0=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()));auto cs_arg1=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));cs_value_storage_172.Set(cs_arg0,cs_arg1);}());
([&](){auto cs_value_storage_173_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_173_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));auto& cs_value_storage_173=cs_value_storage_173_array.at(cs_value_storage_173_index);auto cs_arg0=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));auto cs_arg1=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()));cs_value_storage_173.Set(cs_arg0,cs_arg1);}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_1503ca63d74f3eef = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_handleIndex_3226; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&](){auto cs_value_storage_174_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_174_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));auto& cs_value_storage_174=cs_value_storage_174_array.at(cs_value_storage_174_index);auto cs_arg0=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()));auto cs_arg1=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()));cs_value_storage_174.Set(cs_arg0,cs_arg1);}());
([&](){auto cs_value_storage_175_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_175_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));auto& cs_value_storage_175=cs_value_storage_175_array.at(cs_value_storage_175_index);auto cs_arg0=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));auto cs_arg1=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));cs_value_storage_175.Set(cs_arg0,cs_arg1);}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_1503ca63d74f3eef = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_handleIndex_3226; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
([&](){auto cs_value_storage_176_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_176_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));auto& cs_value_storage_176=cs_value_storage_176_array.at(cs_value_storage_176_index);auto cs_arg0=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()));auto cs_arg1=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));cs_value_storage_176.Set(cs_arg0,cs_arg1);}());
([&](){auto cs_value_storage_177_array=([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); return cs_array.get_Item(cs_index); }());auto cs_value_storage_177_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));auto& cs_value_storage_177=cs_value_storage_177_array.at(cs_value_storage_177_index);auto cs_arg0=static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }()));auto cs_arg1=static_cast<float>(([&]() { auto cs_array = v_paintRect_3586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()));cs_value_storage_177.Set(cs_arg0,cs_arg1);}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_1503ca63d74f3eef = cs_value; return cs_value; }());
}
} else if (([&]() -> bool { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::kairo::DebugInput::GetMouseButtonDown(cs_arg0); }())) {
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); cs_receiver.RemoveAt(cs_arg0); }());
} else {
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); cs_receiver.RemoveAt(cs_arg0); }());
}
}
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_1503ca63d74f3eef = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_fa643bfe19a61f34 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() -> bool { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::DebugInput::GetMouseButton(cs_arg0); }()); auto cs_right = (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa643bfe19a61f34; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())); return (cs_left & cs_right); }())) {
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
// M:kairo.unity.surface.SurfaceManagerBase.DrawComponents(kairo.unity.ui.Graphics)
void cs_fb350f55fa7620cd(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_11537 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_11537; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_11537; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_11537 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9326c27a92cfea3a> v_surfaceBase_11595 = ([&]() -> pls::cs::Ref<cs_9326c27a92cfea3a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); auto cs_arg0 = v_i_11537; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());
double v_num_11647 = ([&]() -> double { auto cs_left = static_cast<double>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }())); auto cs_right = pls::game::cs_f64(0x4059000000000000ull); return (cs_left / cs_right); }());
for (std::int32_t v_num2_11711 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_159596982eb74639(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num2_11711; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num2_11711; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_11711 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_11801 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); auto cs_arg0 = v_num2_11711; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ed99a71361f12b06(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdfull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }())))); auto cs_arg3 = static_cast<float>(pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }())))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surfaceBase_11595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = v_component_11801; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }())); auto cs_right = v_num_11647; return (cs_left * cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
}
}
// M:kairo.unity.surface.SurfaceManagerBase.GetPaintHandlePoint(UnityEngine.Vector2[])
pls::cs::Array<pls::kairo::Vector2> cs_83e2b5e0ec4cdcad(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Array<pls::kairo::Vector2> v_points) { cs_init_4a8bef2ab48b32d7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<std::int32_t> v_paintRect_6676 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(cs_this); auto cs_arg0 = v_points; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ac30f7dfe797187c(cs_receiver,cs_arg0); }());
return ([&](){auto cs_initial_array_183=pls::cs::Array<pls::kairo::Vector2>::make(4);cs_initial_array_183.at(0)=([&]() { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::kairo::Vector2(cs_arg0,cs_arg1); }());cs_initial_array_183.at(1)=([&]() { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::kairo::Vector2(cs_arg0,cs_arg1); }());cs_initial_array_183.at(2)=([&]() { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::kairo::Vector2(cs_arg0,cs_arg1); }());cs_initial_array_183.at(3)=([&]() { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_paintRect_6676; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.at(cs_index); }()); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::kairo::Vector2(cs_arg0,cs_arg1); }());return cs_initial_array_183;}());
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
{ auto cs_each184 = v_points; for (std::int32_t cs_i184=0; cs_i184<cs_each184.length(); ++cs_i184) { pls::kairo::Vector2 v_vector_6126 = cs_each184.at(cs_i184); {
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
pls::cs::Array<pls::kairo::Vector2> v_paintHandlePoint_5553 = ([&]() -> pls::cs::Array<pls::kairo::Vector2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(cs_this); auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60fc9d5519e72fab; }()); auto cs_index = v_i_5499; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_83e2b5e0ec4cdcad(cs_receiver,cs_arg0); }());
for (std::int32_t v_j_5622 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_5622; auto cs_right = (v_paintHandlePoint_5553).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_5622; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_5622 = cs_new; return cs_old; }())) {
float v_num2_5680 = ([&]() -> float { auto cs_left = v_x; auto cs_right = (([&]() { auto cs_array = v_paintHandlePoint_5553; auto cs_index = v_j_5622; return cs_array.at(cs_index); }())).x; return (cs_left - cs_right); }());
float v_num3_5725 = ([&]() -> float { auto cs_left = v_y; auto cs_right = (([&]() { auto cs_array = v_paintHandlePoint_5553; auto cs_index = v_j_5622; return cs_array.at(cs_index); }())).y; return (cs_left - cs_right); }());
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
cs_this->cs_ac9d14d8fd218a0c = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = pls::cs::String(std::u16string(u"",0)); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }());
cs_this->cs_efb4aeef5c6f7590 = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { auto cs_arg0 = pls::cs::String(std::u16string(u"",0)); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }());
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
pls::cs::Ref<cs_7f70540c4f85d74f> v_accessCount2_17896 = pls::cs::unbox<pls::cs::Ref<cs_7f70540c4f85d74f>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_17714); auto cs_arg0 = v_num_17812; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
if (([&]() -> bool { auto cs_arg0 = v_name; auto cs_arg1 = ([&]() { auto cs_receiver = v_accessCount2_17896; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59ca359e3d3d712d; }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = v_accessCount2_17896; v_accessCount_17785 = cs_value; return cs_value; }());
}
([&]() { auto cs_old = v_num_17812; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_17812 = cs_new; return cs_old; }());
}
if (([&]() { auto cs_left = pls::cs::box(v_accessCount_17785); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_7f70540c4f85d74f> { auto cs_arg0 = v_name; auto cs_arg1 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); return cs_b544d4afdbad19e4(cs_arg0,cs_arg1); }()); v_accessCount_17785 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_17714); auto cs_arg0 = pls::cs::box(v_accessCount_17785); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = v_accessCount_17785; auto cs_old = pls::game::cs_require(cs_target)->cs_0d03485f6b953700; auto cs_rhs = v_up; auto cs_value = pls::cs::add_i64(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0d03485f6b953700 = cs_value; return cs_value; }());
try {
if (v_save) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_3481915358ac0fff(); }());
}
} catch(const pls::cs::Exception& cs_caught_737) {auto cs_exception_737=pls::cs::capture_exception(cs_caught_737);
if(pls::cs::exception_is(cs_exception_737,"System.Exception")) {{

}}
else {throw;} }
}
}
}
// M:kairo.unity.system.KairoBase.CheckUserId
bool cs_312c009a993a1e26(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this) { cs_init_b489b0d33bb37bb8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_87f9285131d0cba9(cs_receiver); }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }());
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
cs_c87dc3d2d0f9440a v_item_59358 = ([&]() { auto cs_array = v_array_59279; auto cs_index = v_i_59309; return cs_array.at(cs_index); }());
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
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_efb4aeef5c6f7590; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());
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
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac9d14d8fd218a0c; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());
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
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_arg1 = true; auto cs_arg2 = pls::cs::String(std::u16string(u"\x0061" u"\x0070" u"\x0070" u"\x006c" u"\x0069" u"\x0073" u"\x0074" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",11)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); v_array_56539 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg1 = true; auto cs_arg2 = pls::cs::String(std::u16string(u"\x0061" u"\x0070" u"\x0070" u"\x002f" u"\x006c" u"\x0069" u"\x0073" u"\x0074" u"\x002e" u"\x0062" u"\x0069" u"\x006e" u"",12)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); v_array_56539 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = v_array_56539; auto cs_right = pls::cs::Array<std::uint8_t>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_arg0 = v_array_56539; pls::generated::cs_b78cf957d6d975eb(cs_arg0); }());
}
}
if (([&]() { auto cs_left = v_array_56539; auto cs_right = pls::cs::Array<std::uint8_t>{}; return cs_left != cs_right; }())) {
std::int32_t v_date_56827 = std::int32_t{};
pls::cs::Array<cs_c87dc3d2d0f9440a> v_array2_56851 = ([&]() -> pls::cs::Array<cs_c87dc3d2d0f9440a> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); auto cs_arg0 = v_array_56539; auto& cs_arg1 = v_date_56827; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bf2fb5b5178771c9(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_241b6f9cd68962e5; }()); auto cs_right = v_date_56827; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_date_56827; pls::game::cs_require(cs_target)->cs_241b6f9cd68962e5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_array2_56851; pls::game::cs_require(cs_target)->cs_3f3b83b6a44bdc33 = cs_value; return cs_value; }());
}
}
} catch(const pls::cs::Exception& cs_caught_236) {auto cs_exception_236=pls::cs::capture_exception(cs_caught_236);
if(pls::cs::exception_is(cs_exception_236,"System.Exception")) {auto v_t_57014=cs_exception_236;{
([&]() -> pls::cs::String { auto cs_arg0 = v_t_57014; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
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
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_57258 = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { auto cs_arg0 = v_data; return pls::generated::cs_c3a84083a67ee263(cs_arg0); }());
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_byteArrayInputStream_57258; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); v_date = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_byteArrayInputStream_57258; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); v_text_57221 = cs_value; return cs_value; }());
}}, [&]() {
([&]() -> void { auto cs_conditional = v_byteArrayInputStream_57258; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }()); }());
});
pls::cs::List<cs_c87dc3d2d0f9440a> v_list_57514 = pls::cs::List<cs_c87dc3d2d0f9440a>::make();
pls::cs::Array<std::int32_t> v_array_57553 = pls::cs::Array<std::int32_t>{};
pls::cs::Array<pls::cs::String> v_array2_57579 = ([&](){auto cs_text=v_text_57221;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(10);return pls::cs::string_split(cs_text,cs_separators);}());
for (std::int32_t v_i_57618 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_57618; auto cs_right = (v_array2_57579).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_57618; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_57618 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::String> v_array3_57667 = ([&](){auto cs_text=([&]() { auto cs_array = v_array2_57579; auto cs_index = v_i_57618; return cs_array.at(cs_index); }());auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(44);return pls::cs::string_split(cs_text,cs_separators);}());
if (([&]() { auto cs_left = v_array_57553; auto cs_right = pls::cs::Array<std::int32_t>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull))); v_array_57553 = cs_value; return cs_value; }());
for (std::int32_t v_j_57767 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_57767; auto cs_right = (v_array_57553).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_57767; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_57767 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_57553; auto cs_index = v_j_57767; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
for (std::int32_t v_k_57846 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_57846; auto cs_right = (v_array3_57667).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_57846; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_57846 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_57553; auto cs_index = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = v_k_57846; return cs_array.at(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); auto cs_value = v_k_57846; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
continue;
}
std::int64_t v_num_57960 = std::int64_t{};
cs_c87dc3d2d0f9440a v_item_57975 = cs_c87dc3d2d0f9440a{};
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); (v_item_57975).cs_153fdaae746575f6 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()); return pls::cs::culture_to_lower(cs_arg0); }()); return pls::cs::string_trim(cs_arg0); }()); (v_item_57975).cs_3f97f246a7d4b8ee = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()); (v_item_57975).cs_b455953d5d99c95c = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffffffffffffffffull)); v_num_57960 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()); (v_item_57975).cs_ad6910b7b897b250 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); (v_item_57975).cs_618ea558ebfe77c3 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()); return pls::cs::int64_parse(cs_arg0); }()); v_num_57960 = cs_value; return cs_value; }());
if ((([&]() -> bool { auto cs_left = v_num_57960; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = v_num_57960; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); v_num_57960 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(v_num_57960); (v_item_57975).cs_77e1513fb44fb202 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffffffffffffffffull)); v_num_57960 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x17ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x17ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()); (v_item_57975).cs_7a8e84cb54b27614 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()); (v_item_57975).cs_055616eacd82bf39 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x15ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x15ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }()); (v_item_57975).cs_e9266e43c90692ac = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); return cs_array.at(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_arg0 = ([&]() { auto cs_array = v_array3_57667; auto cs_index = ([&]() { auto cs_array = v_array_57553; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); return cs_array.at(cs_index); }()); return cs_array.at(cs_index); }()); return pls::cs::int64_parse(cs_arg0); }()); v_num_57960 = cs_value; return cs_value; }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0063" u"\x0068" u"\x0065" u"\x0061" u"\x0074" u"",5)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg3 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b70446c7450e6993(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0063" u"\x0068" u"\x0065" u"\x0061" u"\x0074" u"",5)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg3 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b70446c7450e6993(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_3481915358ac0fff(); }());
} catch(const pls::cs::Exception& cs_caught_736) {auto cs_exception_736=pls::cs::capture_exception(cs_caught_736);
if(pls::cs::exception_is(cs_exception_736,"System.Exception")) {{

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
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg1 = true; auto cs_arg2 = v_key; return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());
}
}
// M:kairo.unity.system.lineup.ui.LineupManager.UnloadImage
void cs_04c28d155861f704(pls::cs::Ref<cs_1ab688350081022a> cs_this) { cs_init_1ab688350081022a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_right = pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>{}; return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_i_7656 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7656; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7656; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7656 = cs_new; return cs_old; }())) {
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_7656; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_7656; return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de2327fcc8b4451b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_7656; return cs_array.at(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de2327fcc8b4451b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_7656; return cs_array.at(cs_index); }()); auto cs_value = pls::cs::Ref<pls::kairo::Image>{}; pls::game::cs_require(cs_target)->cs_de2327fcc8b4451b = cs_value; return cs_value; }());
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
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_1131; auto cs_arg1 = pls::cs::cast_integral<std::int16_t>((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }())).length()); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_1319 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1319; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1319; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1319 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_arg0 = v_byteArrayOutputStream_1131; auto cs_arg1 = pls::cs::cast_integral<std::uint8_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }()); auto cs_index = v_i_1319; return cs_array.at(cs_index); }())); pls::generated::cs_c43b9bbf725f702e(cs_arg0,cs_arg1); }());
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
([&]() -> void { auto cs_arg0 = true; auto cs_arg1 = false; cs_749d49646f9339d3(cs_arg0,cs_arg1); }());
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
([&]() -> void { auto cs_arg0 = false; auto cs_arg1 = true; cs_749d49646f9339d3(cs_arg0,cs_arg1); }());
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_1a5ce6d62f4773c6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2b580027dd662ff5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_f1c6c21012307803 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_arg0 = v_stream; return pls::generated::cs_faab575a7db8f157(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_004158f701fd286d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> bool { auto cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_3b077329e09687d5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_cf10600a0f2e10ac = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_b85e706eedf54802 = cs_value; return cs_value; }());
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
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1a5ce6d62f4773c6; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b580027dd662ff5; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f1c6c21012307803; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_004158f701fd286d; }()); pls::generated::cs_6c6af002987d1423(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3b077329e09687d5; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf10600a0f2e10ac; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_arg0 = v_stream; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b85e706eedf54802; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_96c54d9323f24f8e>>(cs_this); auto cs_arg0 = v_text; auto cs_arg1 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4254bc66f1000052(cs_receiver,cs_arg0,cs_arg1); }());
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_value; auto cs_arg1 = pls::cs::String(std::u16string(u"",0)); return cs_334563e946ad4962(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_1d5abc90d11ab0c5 = cs_value; return cs_value; }());
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
pls::cs::Array<cs_c87dc3d2d0f9440a> v_appList_30889 = ([&]() -> pls::cs::Array<cs_c87dc3d2d0f9440a> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_30580); auto cs_arg0 = false; auto cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_7e52a7f62521b1ee(cs_receiver,cs_arg0,cs_arg1); }());
for (std::int32_t v_i_30950 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_30950; auto cs_right = (v_appList_30889).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_30950; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_30950 = cs_new; return cs_old; }())) {
cs_c87dc3d2d0f9440a v_gameAppli2_31009 = ([&]() { auto cs_array = v_appList_30889; auto cs_index = v_i_30950; return cs_array.at(cs_index); }());
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
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog_31582 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_arg1 = pls::cs::String(std::u16string(u"\x004f" u"\x0070" u"\x0065" u"\x006e" u"\x0042" u"\x0072" u"\x006f" u"\x0077" u"\x0073" u"\x0065" u"\x0072" u"",11)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_31582); auto cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\xff8a" u"\xff9f" u"\xff6f" u"\xff79" u"\xff70" u"\xff7c" u"\xff9e" u"\x300c" u"",8)); auto cs_right = v_value_30770; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x300d" u"\x304b" u"\x3089" u"\x0041" u"\x0070" u"\x0070" u"\x006c" u"\x0065" u"\x0049" u"\x0064" u"\x3078" u"\x306e" u"\x5909" u"\x63db" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x000a" u"\x5171" u"\x6709" u"\x0044" u"\x0042" u"\x306b" u"\x767b" u"\x9332" u"\x3055" u"\x308c" u"\x3066" u"\x3044" u"\x308b" u"\x304b" u"\x78ba" u"\x8a8d" u"\x3057" u"\x3066" u"\x304f" u"\x3060" u"\x3055" u"\x3044" u"\x3002" u"",45)); return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); auto cs_arg0 = ([&](){struct cs_closure_749e168bdf49d301 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_url_cell;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_url_cell,v);}void release_edges()override{pls::cs::Object::release_edges();v_url_cell.reset();}void Invoke(){{
([&]() -> void { auto cs_arg0 = static_cast<pls::kairo::AppEventType>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))); auto cs_arg1 = pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::make(1); cs_arg1.at(0) = pls::cs::box(v_url_cell->value); pls::kairo::FormManagerBase::ProcessEvent(cs_arg0,cs_arg1); }());
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
([&]() -> void { auto cs_arg0 = v_url_cell->value; pls::kairo::UnityApplication::OpenURL(cs_arg0); }());
}}};auto cs_closure=pls::cs::make_ref<cs_closure_749e168bdf49d301>();cs_closure->v_url_cell=v_url_cell;return pls::cs::Delegate<void()>::bind_identity(cs_closure,v_url_cell.get(),std::string("M:kairo.unity.ui.Canvas.OpenBrowser(System.String):32082"),[weak=std::weak_ptr<cs_closure_749e168bdf49d301>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());
return true;
} catch(const pls::cs::Exception& cs_caught_233) {auto cs_exception_233=pls::cs::capture_exception(cs_caught_233);
if(pls::cs::exception_is(cs_exception_233,"System.Exception")) {{
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x30d6" u"\x30e9" u"\x30a6" u"\x30b6" u"\x306e" u"\x8d77" u"\x52d5" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"",15)); auto cs_right = v_url_cell->value; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
}}
else {throw;} }
return false;
}
}
// M:kairo.unity.ui.Dialog.#ctor(System.Int32,System.String)
pls::cs::Ref<cs_0286a0dbe9da0b33> cs_63545d46c6887c12(std::int32_t v_type,pls::cs::String v_title) { cs_init_0286a0dbe9da0b33();
{ auto cs_this = pls::cs::make_ref<cs_0286a0dbe9da0b33>(); cs_63545d46c6887c12_init(cs_this,v_type,v_title); return cs_this; }
}
void cs_63545d46c6887c12_init(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this,std::int32_t v_type,pls::cs::String v_title) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_71eb51b3f792969a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_title; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_ef63d4d4b6ab550f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Font> { return pls::cs::make_ref<pls::kairo::Font>(); }()); pls::game::cs_require(cs_target)->cs_6e5c685dce0d605a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String(std::u16string(u"",0)); pls::game::cs_require(cs_target)->cs_7f418c9c27e5c628 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffff000000ull)); return cs_ca48ee9e5dbe6d98(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_1931e59a708b44ff = cs_value; return cs_value; }());
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
pls::cs::Array<pls::cs::String> v_array_920 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = v_msg; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array_920; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_7f418c9c27e5c628 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7f418c9c27e5c628; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); auto cs_arg2 = pls::cs::String(std::u16string(u"\x000a" u"",1)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }()); pls::game::cs_require(cs_target)->cs_7f418c9c27e5c628 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::game::cs_require(cs_target)->cs_49c162566c3d94ef = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = (v_array_920).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_920; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); pls::game::cs_require(cs_target)->cs_49c162566c3d94ef = cs_value; return cs_value; }());
}
}
}
}
// M:kairo.unity.ui.Dialog.Show
std::int32_t cs_1727d3688d4d03e6(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this) { cs_init_0286a0dbe9da0b33();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::String v_text_1364 = pls::cs::String{};
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7c40c7d83d91cf74; }()); auto cs_right = pls::cs::Array<pls::cs::String>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"",0)); v_text_1364 = cs_value; return cs_value; }());
for (std::int32_t v_i_1432 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1432; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7c40c7d83d91cf74; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1432; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1432 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = v_i_1432; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_text_1364; auto cs_rhs = pls::cs::String(std::u16string(u"\x002c" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1364 = cs_value; return cs_value; }());
}
([&]() { auto cs_old = v_text_1364; auto cs_rhs = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7c40c7d83d91cf74; }()); auto cs_index = v_i_1432; return cs_array.at(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1364 = cs_value; return cs_value; }());
}
}
std::int32_t v_num_1559 = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_71eb51b3f792969a; }()); auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef63d4d4b6ab550f; }()); auto cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7f418c9c27e5c628; }()); auto cs_arg3 = v_text_1364; return pls::kairo::show_dialog(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_49c162566c3d94ef; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ((([&]() -> bool { auto cs_left = v_num_1559; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_num_1559; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()))))) {
([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_49c162566c3d94ef; }()); return cs_25bba6e14d51039b(cs_arg0); }());
}
return v_num_1559;
}
}
}
// M:kairo.unity.ui.Graphics.GetColorOfName(System.Int32)
std::int32_t cs_ca48ee9e5dbe6d98(std::int32_t v_name) {
return v_name;
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::String>> { auto cs_arg0 = ([&](){auto cs_initial_array_270=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_270.at(0)=(cs_5e2555ff8a760a8f()).length();cs_initial_array_270.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));return cs_initial_array_270;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<pls::cs::String>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_6a7748b1a6612d58 = cs_value; return cs_value; }());
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
// M:kairo.unity.ui.ResourceManager.CheckFileEffective(System.String)
bool cs_87c6cb7c61cb9fce(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::String v_file) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_file; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); auto cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c04a7ac90db55ca6(cs_receiver,cs_arg0); }());
}
}
}
// M:kairo.unity.ui.ResourceManager.Dispose(System.Boolean)
void cs_c04a7ac90db55ca6(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,bool v_keepFileList) { cs_init_b728593e3dcffe31();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_num_17889 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_17889; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_17889; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_17889 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_num_17889; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_num_17889; return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d034fe7d69888987; }()); auto cs_index = v_num_17889; auto cs_value = pls::cs::Ref<pls::kairo::SoundBase>{}; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
for (std::int32_t v_num2_18042 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num2_18042; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num2_18042; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_18042 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_num2_18042; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_num2_18042; return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_713e673d446e8251(cs_receiver); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_num2_18042; auto cs_value = pls::cs::Ref<cs_9cade6927d6e0bf3>{}; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
for (std::int32_t v_num3_18193 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num3_18193; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num3_18193; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_18193 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num3_18193; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num3_18193; return cs_array.at(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = v_num3_18193; auto cs_value = pls::cs::Ref<pls::kairo::Image>{}; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_this); auto cs_arg0 = v_keepFileList; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2ad8afd403d5dfb4(cs_receiver,cs_arg0); }());
}
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
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = cs_bd0c9538929cdd1c(); auto cs_index = v_i_5679; return cs_array.at(cs_index); }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
pls::cs::Array<pls::cs::String> v_array_5774 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_arg0 = v_jar; auto cs_arg1 = ([&]() { auto cs_array = cs_bd0c9538929cdd1c(); auto cs_index = v_i_5679; return cs_array.at(cs_index); }()); return pls::generated::cs_aa767d3dce39dc9d(cs_arg0,cs_arg1); }());
if (([&]() { auto cs_left = v_array_5774; auto cs_right = pls::cs::Array<pls::cs::String>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_5679; auto cs_value = v_array_5774; cs_target.at(cs_index) = cs_value; return cs_value; }());
}
for (std::int32_t v_j_5905 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_5905; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_5679; return cs_array.at(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_5905; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_5905 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_5679; return cs_array.at(cs_index); }()); auto cs_index = v_j_5905; auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_5679; return cs_array.at(cs_index); }()); auto cs_index = v_j_5905; return cs_array.at(cs_index); }()); return pls::cs::string_trim(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_3fe3f9fb934245ca; auto cs_rhs = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a7748b1a6612d58; }()); auto cs_index = v_i_5679; return cs_array.at(cs_index); }())).length(); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_3fe3f9fb934245ca = cs_value; return cs_value; }());
}
}
}
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
// M:kairo.unity.ui.Seb.Dispose
void cs_713e673d446e8251(pls::cs::Ref<cs_9cade6927d6e0bf3> cs_this) { cs_init_9cade6927d6e0bf3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_cc71c7763ea3aa22 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9d08782ceb3285f3 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_right = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{}; return cs_left != cs_right; }())) {
for (std::int32_t v_num_3863 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_3863; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_3863; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_3863 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da710114f6c50365; }()); auto cs_index = v_num_3863; auto cs_value = pls::cs::Array<pls::cs::Array<std::int32_t>>{}; cs_target.at(cs_index) = cs_value; return cs_value; }());
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
([&]() { auto cs_target = v_workValue_16792; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_arg0 = ([&](){auto cs_initial_array_423=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_423.at(0)=([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a9047ac84bcd384a(cs_receiver); }());cs_initial_array_423.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));return cs_initial_array_423;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_a629158f3074ad89 = cs_value; return cs_value; }());
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
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_workStaticValue_20017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_892fee32e48ccc2a; }()); auto cs_index = v_i_20220; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_arg0 = ([&](){auto cs_initial_array_267=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_267.at(0)=v_i_20220;cs_initial_array_267.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));return cs_initial_array_267;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
([&]() { auto cs_target = v_workValue_15727; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { auto cs_arg0 = ([&](){auto cs_initial_array_422=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_422.at(0)=v_layersNum_15762;cs_initial_array_422.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));return cs_initial_array_422;}()); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_a629158f3074ad89 = cs_value; return cs_value; }());
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
cs_this->cs_892fee32e48ccc2a = ([&](){auto cs_initial_array_266=pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::make(1);cs_initial_array_266.at(0)=pls::cs::Array<pls::cs::Array<std::int32_t>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));return cs_initial_array_266;}());
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
([&]() { auto cs_target = pls::generated::cs_0ee869b1ec0c9fc3(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>((([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>(v_value); auto cs_right = v_num_1995; return (cs_left & cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::cs::shr_i64(cs_left,cs_right); }()))); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = pls::generated::cs_0ee869b1ec0c9fc3(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffffffffull))); return (cs_left & cs_right); }()))); cs_target.at(cs_index) = cs_value; return cs_value; }());
return pls::generated::cs_0ee869b1ec0c9fc3();
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
return ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x006c" u"\x006f" u"\x0063" u"\x0061" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",23)); auto cs_arg1 = pls::cs::String{}; return pls::kairo::PlayerPrefs::GetString(cs_arg0,cs_arg1); }());
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
if (([&]() { auto cs_left = v_data; auto cs_right = pls::cs::Array<std::uint8_t>{}; return cs_left == cs_right; }())) {
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
pls::cs::String v_title_64312 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = v_languagePackInfo_62722; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_559ce244f31c7bdd; }()); return cs_3b656a07e9770826(cs_arg0); }());
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
// M:kairo.unity.util.Language.LanguagePackInfo.#ctor
pls::cs::Ref<cs_d86010513034d6a0> cs_73cc6ce27c640033() { cs_init_d86010513034d6a0();
{ auto cs_this = pls::cs::make_ref<cs_d86010513034d6a0>(); cs_73cc6ce27c640033_init(cs_this); return cs_this; }
}
void cs_73cc6ce27c640033_init(pls::cs::Ref<cs_d86010513034d6a0> cs_this) {
{}
}
// M:kairo.unity.util.Language.LT(System.String,System.String)
pls::cs::String cs_334563e946ad4962(pls::cs::String v_text,pls::cs::String v_arg) { pls::generated::cs_init_72d9658ed61145d6();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); auto cs_arg1 = v_arg; return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());
}
}
// M:kairo.unity.util.SecureNumber.GetHackingCount
std::int64_t cs_45b39acf7715318b() { pls::generated::cs_init_bd164c3c94a49e2a();
{
return pls::generated::cs_a55a986dcce0645f();
}
}
// M:kfw.panel.MainPanel.#ctor
pls::cs::Ref<cs_8bf13b560e1e05e9> cs_3afc5298ce4a3e84() { cs_init_8bf13b560e1e05e9();
{ auto cs_this = pls::cs::make_ref<cs_8bf13b560e1e05e9>(); cs_3afc5298ce4a3e84_init(cs_this); return cs_this; }
}
void cs_3afc5298ce4a3e84_init(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this) {
cs_this->cs_ce90b55fbd071e4f = ([&](){auto cs_initial_array_694=pls::cs::Array<char16_t>::make(4);cs_initial_array_694.at(0)=char16_t(47);cs_initial_array_694.at(1)=char16_t(124);cs_initial_array_694.at(2)=char16_t(60);cs_initial_array_694.at(3)=char16_t(62);return cs_initial_array_694;}());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_663=pls::cs::Array<std::int32_t>::make(4);cs_initial_array_663.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_initial_array_663.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_663.at(2)=v_sx;cs_initial_array_663.at(3)=v_sy;return cs_initial_array_663;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddEffectExpUp(System.Int32,System.Int32)
void cs_2a18809110a77dfa(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_pId,std::int32_t v_value) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_num_83961 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_c1ec402e91d50020(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_c1ec402e91d50020(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_2cfd34acbad021cb(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_07c786b53599514c(cs_arg0,cs_arg1); }());
float v_num2_84058 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_c1ec402e91d50020(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_c1ec402e91d50020(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_2cfd34acbad021cb(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_546689cbdcc8fcf7(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_680=pls::cs::Array<std::int32_t>::make(6);cs_initial_array_680.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull));cs_initial_array_680.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_680.at(2)=v_pId;cs_initial_array_680.at(3)=v_value;cs_initial_array_680.at(4)=pls::cs::conv_i32(v_num_83961);cs_initial_array_680.at(5)=pls::cs::conv_i32(v_num2_84058);return cs_initial_array_680;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddEffectLvUp(System.Int32,System.Int32)
void cs_2cb4b892e0d44f7c(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_wait,std::int32_t v_pId) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_681=pls::cs::Array<std::int32_t>::make(3);cs_initial_array_681.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));cs_initial_array_681.at(1)=pls::cs::neg_i32(v_wait);cs_initial_array_681.at(2)=v_pId;return cs_initial_array_681;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddEffectMoneyUp(System.Int32,System.Int32,System.Int32)
void cs_d8b75a46ef60025e(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_sx,std::int32_t v_sy,std::int32_t v_value) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_num_84715 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_8ce867d8b305e33e(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_8ce867d8b305e33e(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_055caef899588fb7(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_07c786b53599514c(cs_arg0,cs_arg1); }());
float v_num2_84818 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_8ce867d8b305e33e(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_8ce867d8b305e33e(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_055caef899588fb7(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_546689cbdcc8fcf7(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_682=pls::cs::Array<std::int32_t>::make(7);cs_initial_array_682.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull));cs_initial_array_682.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_682.at(2)=v_sx;cs_initial_array_682.at(3)=v_sy;cs_initial_array_682.at(4)=v_value;cs_initial_array_682.at(5)=pls::cs::conv_i32(v_num_84715);cs_initial_array_682.at(6)=pls::cs::conv_i32(v_num2_84818);return cs_initial_array_682;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddEffectRpUp(System.Int32,System.Int32,System.Int32,System.Int32)
void cs_e5421c7604ea06c7(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_sx,std::int32_t v_sy,std::int32_t v_rId,std::int32_t v_value) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_num_84336 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_9b1757f20ba401c4(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_9b1757f20ba401c4(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_8838d68b05fe9d2a(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_07c786b53599514c(cs_arg0,cs_arg1); }());
float v_num2_84430 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_9b1757f20ba401c4(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_9b1757f20ba401c4(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_8838d68b05fe9d2a(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_546689cbdcc8fcf7(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_683=pls::cs::Array<std::int32_t>::make(8);cs_initial_array_683.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull));cs_initial_array_683.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_683.at(2)=v_sx;cs_initial_array_683.at(3)=v_sy;cs_initial_array_683.at(4)=v_rId;cs_initial_array_683.at(5)=v_value;cs_initial_array_683.at(6)=pls::cs::conv_i32(v_num_84336);cs_initial_array_683.at(7)=pls::cs::conv_i32(v_num2_84430);return cs_initial_array_683;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddEffectShoot(System.Int32,System.Int32)
void cs_6dd3f8c8daa64856(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_sx,std::int32_t v_sy) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_638=pls::cs::Array<std::int32_t>::make(4);cs_initial_array_638.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_638.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_638.at(2)=v_sx;cs_initial_array_638.at(3)=v_sy;return cs_initial_array_638;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}
// M:main.AppData.AddEffectTUp(System.Int32,System.Int32,System.Int32)
void cs_a5e7f77e2eb2a2d6(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this,std::int32_t v_TAreaCoatNo,std::int32_t v_pId,std::int32_t v_t_index) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
float v_num_83484 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_ec49e4ede4fa2f6b(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_ec49e4ede4fa2f6b(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_728aa1cb5546b430(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_07c786b53599514c(cs_arg0,cs_arg1); }());
float v_num2_83575 = ([&]() -> float { auto cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = cs_ec49e4ede4fa2f6b(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.at(cs_index); }()); auto cs_right = ([&]() { auto cs_array = cs_ec49e4ede4fa2f6b(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = ([&]() { auto cs_array = cs_728aa1cb5546b430(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.at(cs_index); }()); return cs_546689cbdcc8fcf7(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_92421d82e73ceb9b; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_684=pls::cs::Array<std::int32_t>::make(6);cs_initial_array_684.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));cs_initial_array_684.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_684.at(2)=v_pId;cs_initial_array_684.at(3)=v_t_index;cs_initial_array_684.at(4)=pls::cs::conv_i32(v_num_83484);cs_initial_array_684.at(5)=pls::cs::conv_i32(v_num2_83575);return cs_initial_array_684;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6e73306221e03084; }())); auto cs_arg0 = pls::cs::box(([&](){auto cs_initial_array_685=pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::make(3);cs_initial_array_685.at(0)=pls::cs::box(v_script);cs_initial_array_685.at(1)=pls::cs::box(([&]() -> pls::cs::Ref<pls::generated::cs_7de6788b61a5af56> { auto cs_arg0 = v_popId; return pls::generated::cs_6ebf505bf86af890(cs_arg0); }()));cs_initial_array_685.at(2)=pls::cs::box(v_popMsg);return cs_initial_array_685;}())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
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
pls::cs::Array<pls::cs::Array<std::int32_t>> v_array2_147343 = ([&](){auto cs_initial_array_686=pls::cs::Array<pls::cs::Array<std::int32_t>>::make(2);cs_initial_array_686.at(0)=pls::assets::baked_array<std::int32_t>("17a24ab00c3de67fbe45a81ae20db4314da0513813021dbf5fa1ec25a62f4574");cs_initial_array_686.at(1)=pls::assets::baked_array<std::int32_t>("dc538038acace7d09a817f378c02c20969062c4177211d5c2661109ac146c4c0");return cs_initial_array_686;}());
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
} catch(const pls::cs::Exception& cs_caught_688) {auto cs_exception_688=pls::cs::capture_exception(cs_caught_688);
if(pls::cs::exception_is(cs_exception_688,"System.Exception")) {{

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
// M:main.AppData.LoadSystem
bool cs_934436cd92ceb4da(pls::cs::Ref<cs_2ffa6f51468590ea> cs_this) { cs_init_2ffa6f51468590ea();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{try{
pls::cs::Ref<pls::kairo::RecordStore> v_recordStore_48914 = pls::cs::Ref<pls::kairo::RecordStore>{};
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::RecordStore> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::OpenRecordStore(cs_arg0); }()); v_recordStore_48914 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_48914); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetNumRecords(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
throw pls::cs::ReturnFlow<bool>{false};
}
pls::cs::Array<std::uint8_t> v_data_49080 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::RecordStore::ReadRecord(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_11c8e1bd6951af89(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_8c57b816bbc8fd6e>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }())); auto cs_arg0 = v_data_49080; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_abffc02b85346a7d(cs_receiver,cs_arg0); }());
}}, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_recordStore_48914); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(v_recordStore_48914); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->CloseRecordStore(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::kairo::RecordStore>{}; v_recordStore_48914 = cs_value; return cs_value; }());
});
if (pls::generated::cs_d6caa754a735f006()) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_target.at(cs_index) = cs_value; return cs_value; }());
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
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> {
