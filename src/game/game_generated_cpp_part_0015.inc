throw pls::cs::Exception();
}
return v_purchase2_3803;
}
}}}
return v_purchase;
}
}
}
// M:system.billing.ui.StoreBase.ConsumeItem(system.billing.util.Purchase)
bool cs_0c2ef3da56499922(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_purchase) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}
// M:system.billing.ui.StoreBase.GetIncompletePayments
pls::cs::List<pls::cs::Ref<cs_15f31d4f046b09a8>> cs_880efa9ef8cb946d(pls::cs::Ref<cs_fa01867c9c048464> cs_this) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::List<pls::cs::Ref<cs_15f31d4f046b09a8>> v_list_3032 = pls::cs::List<pls::cs::Ref<cs_15f31d4f046b09a8>>::make();
{auto cs_list_enum817=(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).GetEnumerator();struct cs_list_scope817{decltype(cs_list_enum817)&e;~cs_list_scope817(){e.Dispose();}} cs_scope817{cs_list_enum817};while(cs_list_enum817.MoveNext()){ pls::cs::Ref<cs_15f31d4f046b09a8> v_item_3063=cs_list_enum817.get_Current();{
if (([&]() { auto cs_receiver = v_item_3063; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6ae59bf543478aa; }())) {
continue;
}
if ((!((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(v_item_3063); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b38ac404eaec0f92(cs_receiver); }()))))) {
continue;
}
([&]() -> void { auto cs_receiver = v_list_3032; auto cs_arg0 = v_item_3063; cs_receiver.Add(cs_arg0); }());
}}}
return v_list_3032;
}
}
}
// M:system.billing.ui.StoreBase.GetProductType(System.String)
std::int32_t cs_a27b4a646a4f6288(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String v_productID) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
throw pls::cs::Exception(([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x005b" u"\x0020" u"\x5b58" u"\x5728" u"\x3057" u"\x306a" u"\x3044" u"\x0070" u"\x0072" u"\x006f" u"\x0064" u"\x0075" u"\x0063" u"\x0074" u"\x0049" u"\x0044" u"\x0020" u"\x003a" u"\x0020" u"",19)); auto cs_right = v_productID; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0020" u"\x005d" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()).utf8());
}
}
}
// M:system.billing.ui.StoreBase.GetRestoreRequest
std::int32_t cs_4e9bffcbfff0634b() { cs_init_fa01867c9c048464();
{
return pls::cs::unbox<std::int32_t>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = ([&](){struct cs_closure_37aff55c77cf31b8 : pls::cs::Object{void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);}void release_edges()override{pls::cs::Object::release_edges();}pls::cs::Ref<pls::cs::Object> Invoke(){{ return pls::cs::box(([&]() -> std::int32_t { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x0072" u"\x0065" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"\x005f" u"\x0074" u"\x0072" u"\x0061" u"\x006e" u"\x0073" u"\x0061" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x0073" u"",21)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return pls::kairo::PlayerPrefs::GetInt(cs_arg0,cs_arg1); }())); }}};auto cs_closure=pls::cs::make_ref<cs_closure_37aff55c77cf31b8>();return pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::bind_identity(cs_closure,nullptr,std::string("M:system.billing.ui.StoreBase.GetRestoreRequest:8513"),[weak=std::weak_ptr<cs_closure_37aff55c77cf31b8>(cs_closure)]()->pls::cs::Ref<pls::cs::Object>{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();return target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }()));
}
}
// M:system.billing.ui.StoreBase.GetUnityJson(System.String,System.String)
pls::cs::String cs_e8c6c1f01dcb9d31(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String v_json,pls::cs::String v_orderId) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((!(([&]() -> bool { auto cs_arg0 = v_json; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0069" u"\x006e" u"\x005f" u"\x0061" u"\x0070" u"\x0070" u"",6)); return pls::game::cs_contains_string(cs_arg0,cs_arg1); }())))) {
return pls::cs::String{};
}
std::int32_t v_num_6143 = ([&]() -> std::int32_t { auto cs_arg0 = v_json; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0069" u"\x006e" u"\x005f" u"\x0061" u"\x0070" u"\x0070" u"",6)); return pls::cs::culture_index_of(cs_arg0,cs_arg1); }());
bool v_flag_6181 = false;
pls::cs::String v_text_6205 = pls::cs::String(u"");
for (std::int32_t v_i_6238 = v_num_6143; ([&]() -> bool { auto cs_left = v_i_6238; auto cs_right = (v_json).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_6238; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_6238 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_json; auto cs_index = v_i_6238; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(91)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag_6181 = cs_value; return cs_value; }());
continue;
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_json; auto cs_index = v_i_6238; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(93)); return (cs_left == cs_right); }())) {
break;
}
if ((!((v_flag_6181)))) {
continue;
}
([&]() { auto cs_old = v_text_6205; auto cs_rhs = ([&]() { auto cs_array = v_json; auto cs_index = v_i_6238; return cs_array.at(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,pls::game::cs_char_string(cs_rhs)); v_text_6205 = cs_value; return cs_value; }());
}
pls::cs::List<pls::cs::String> v_list_6460 = pls::cs::List<pls::cs::String>::make();
([&]() { auto cs_value = false; v_flag_6181 = cs_value; return cs_value; }());
pls::cs::String v_text2_6514 = pls::cs::String(u"");
for (std::int32_t v_j_6548 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_6548; auto cs_right = (v_text_6205).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_6548; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_6548 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text_6205; auto cs_index = v_j_6548; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(123)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag_6181 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::String(u""); v_text2_6514 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text_6205; auto cs_index = v_j_6548; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(125)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = false; v_flag_6181 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = v_list_6460; auto cs_arg0 = v_text2_6514; cs_receiver.Add(cs_arg0); }());
([&]() { auto cs_value = pls::cs::String(u""); v_text2_6514 = cs_value; return cs_value; }());
} else if ((((!((v_flag_6181)))) || (((([&]() -> bool { auto cs_left = (v_text2_6514).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) && (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text_6205; auto cs_index = v_j_6548; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(44)); return (cs_left == cs_right); }())))))) {

} else {
([&]() { auto cs_old = v_text2_6514; auto cs_rhs = ([&]() { auto cs_array = v_text_6205; auto cs_index = v_j_6548; return cs_array.at(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,pls::game::cs_char_string(cs_rhs)); v_text2_6514 = cs_value; return cs_value; }());
}
}
for (std::int32_t v_k_6898 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_6898; auto cs_right = (v_list_6460).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_6898; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_6898 = cs_new; return cs_old; }())) {
pls::cs::String v_text3_6942 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_list_6460; auto cs_index = v_k_6898; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x0072" u"\x0061" u"\x006e" u"\x0073" u"\x0061" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x005f" u"\x0069" u"\x0064" u"",14)); return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }());
if ((([&]() -> bool { auto cs_left = v_text3_6942; auto cs_right = v_orderId; return (cs_left != cs_right); }()))) {

} else {
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_list_6460; auto cs_index = v_k_6898; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x005f" u"\x0064" u"\x0061" u"\x0074" u"\x0065" u"\x005f" u"\x006d" u"\x0073" u"",16)); return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }());
}
}
return pls::cs::String{};
}
}
}
// M:system.billing.ui.StoreBase.HasIncompletePayments
bool cs_e407b08e50b1dd2c(pls::cs::Ref<cs_fa01867c9c048464> cs_this) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6769193235ceb92f; }())) {
return false;
}
{auto cs_list_enum818=(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).GetEnumerator();struct cs_list_scope818{decltype(cs_list_enum818)&e;~cs_list_scope818(){e.Dispose();}} cs_scope818{cs_list_enum818};while(cs_list_enum818.MoveNext()){ pls::cs::Ref<cs_15f31d4f046b09a8> v_item_3337=cs_list_enum818.get_Current();{
if (([&]() { auto cs_receiver = v_item_3337; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6ae59bf543478aa; }())) {
continue;
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(v_item_3337); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b38ac404eaec0f92(cs_receiver); }())))) {
continue;
}
return true;
}}}
return false;
}
}
}
// M:system.billing.ui.StoreBase.Init(System.String[][],System.String,System.String[])
void cs_d3abbeacfed9ec8c(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Array<pls::cs::Array<pls::cs::String>> v_data,pls::cs::String v_paymentProduct,pls::cs::Array<pls::cs::String> v_subscription) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_925b3cf054e42b78> { return cs_fd047093624d8d65(); }()); cs_d59ecb529d3c681c() = cs_value; return cs_value; }());
([&]() { auto cs_value = v_paymentProduct; cs_e9c57a349e970656() = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e92a9e2b4e70e8aa; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_fa01867c9c048464>>(cs_this); pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = v_data; pls::cs::String cs_arg1 = v_paymentProduct; pls::cs::Array<pls::cs::String> cs_arg2 = v_subscription; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d5d483312d700179(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
// M:system.billing.ui.StoreBase.InitializePurchasing(System.String[][],System.String,System.String[])
void cs_d5d483312d700179(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Array<pls::cs::Array<pls::cs::String>> v_data,pls::cs::String v_paymentProduct,pls::cs::Array<pls::cs::String> v_subscriptions) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
// M:system.billing.ui.StoreBase.IsCompletePayment(system.billing.util.Purchase)
bool cs_53ba148e029fe26b(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_purchase) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(v_purchase); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return false;
}
{auto cs_list_enum819=(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).GetEnumerator();struct cs_list_scope819{decltype(cs_list_enum819)&e;~cs_list_scope819(){e.Dispose();}} cs_scope819{cs_list_enum819};while(cs_list_enum819.MoveNext()){ pls::cs::Ref<cs_15f31d4f046b09a8> v_item_4134=cs_list_enum819.get_Current();{
if (([&]() -> bool { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(v_item_4134); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e8fea88a1ccd74d6(cs_receiver); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_a42daea58251b089>>(v_purchase); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_30a95d92bd1ce70c(cs_receiver); }()); return (cs_left != cs_right); }())) {
continue;
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(v_item_4134); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b38ac404eaec0f92(cs_receiver); }())))) {
continue;
}
return ([&]() { auto cs_receiver = v_item_4134; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6ae59bf543478aa; }());
}}}
return false;
}
}
}
// M:system.billing.ui.StoreBase.IsInitialized
bool cs_4e71f3b66d66c79d(pls::cs::Ref<cs_fa01867c9c048464> cs_this) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return true;
}
}
}
// M:system.billing.ui.StoreBase.LaunchPurchaseFlow(System.String)
pls::cs::Ref<cs_a42daea58251b089> cs_87e0519a7f6ab5fc(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String v_productId) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::Ref<cs_a42daea58251b089>{};
}
}
}
// M:system.billing.ui.StoreBase.Load(java.io.InputStream)
void cs_6fb7b668d4a70a0f(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_stream); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_bb7347310506b971(); }()); return (cs_left < cs_right); }())) {
std::int32_t v_num_7956 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
if ((([&]() -> bool { auto cs_left = v_num_7956; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { return cs_4e9bffcbfff0634b(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))) {
([&]() -> void { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); cs_bf2b5138011e18f8(cs_arg0); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::List<pls::cs::Ref<cs_15f31d4f046b09a8>>::make(); pls::game::cs_require(cs_target)->cs_7051bba65972fd27 = cs_value; return cs_value; }());
std::int32_t v_num2_8117 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
for (std::int32_t v_i_8164 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_8164; auto cs_right = v_num2_8117; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_8164; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_8164 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }()); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_15f31d4f046b09a8> { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_fb33e792a02d6245(cs_arg0); }()); cs_receiver.Add(cs_arg0); }());
}
if (([&]() -> bool { auto cs_left = v_num_7956; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x65ull)); return (cs_left == cs_right); }())) {
std::int32_t v_num3_8269 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { return cs_4e9bffcbfff0634b(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() -> void { std::int32_t cs_arg0 = ((([&]() -> bool { auto cs_left = v_num3_8269; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); cs_bf2b5138011e18f8(cs_arg0); }());
}
}
}
}
}
}
// M:system.billing.ui.StoreBase.QueryInventory(System.Boolean,System.Collections.Generic.List{System.String},System.Collections.Generic.List{System.String})
pls::cs::Ref<cs_51fd12cb14e568f9> cs_3d1833af62584b62(pls::cs::Ref<cs_fa01867c9c048464> cs_this,bool v_querySkuDetails,pls::cs::List<pls::cs::String> v_moreItemSkus,pls::cs::List<pls::cs::String> v_moreSubsSkus) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::List<pls::cs::String> v_list_1950 = pls::cs::List<pls::cs::String>::make();
pls::cs::Array<pls::cs::List<pls::cs::String>> v_array_1995 = ([&](){auto cs_initial_array_826=pls::cs::Array<pls::cs::List<pls::cs::String>>::make(2);cs_initial_array_826.at(0)=v_moreItemSkus;cs_initial_array_826.at(1)=v_moreSubsSkus;return cs_initial_array_826;}());
{ auto cs_each827 = v_array_1995; for (std::int32_t cs_i827=0; cs_i827<cs_each827.length(); ++cs_i827) { pls::cs::List<pls::cs::String> v_list2_2059 = cs_each827.get_Item(cs_i827); {
if (([&]() { auto cs_left = pls::cs::box(v_list2_2059); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {

} else {
for (std::int32_t v_j_2150 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_2150; auto cs_right = (v_list2_2059).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_2150; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_2150 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = v_list_1950; auto cs_arg0 = ([&]() { auto cs_array = v_list2_2059; auto cs_index = v_j_2150; return cs_array.get_Item(cs_index); }()); cs_receiver.Add(cs_arg0); }());
}
}
} } }
if (([&]() -> bool { auto cs_left = (v_list_1950).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return ([&]() -> pls::cs::Ref<cs_51fd12cb14e568f9> { return cs_711d8c323ca1c807(); }());
}
{
pls::cs::Ref<cs_51fd12cb14e568f9> v_recoveredInventoryResult_2307 = ([&]() -> pls::cs::Ref<cs_51fd12cb14e568f9> { return cs_711d8c323ca1c807(); }());
return v_recoveredInventoryResult_2307;
}
}
}
}
// M:system.billing.ui.StoreBase.Restore
std::int32_t cs_59826646bf6d2707(pls::cs::Ref<cs_fa01867c9c048464> cs_this) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)));
}
}
}
// M:system.billing.ui.StoreBase.Save(java.io.OutputStream)
void cs_3784aca2bceecd36(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_stream) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x66ull)); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int32_t cs_arg1 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).get_Count(); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_7793 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7793; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7793; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7793 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }()); auto cs_index = v_i_7793; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_aafe7f3e366450c4(cs_receiver,cs_arg0); }());
}
}
}
}
// M:system.billing.ui.StoreBase.SearchReceipt(System.String)
pls::cs::Ref<cs_15f31d4f046b09a8> cs_9004764138986aa8(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String v_json) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
{auto cs_list_enum828=(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).GetEnumerator();struct cs_list_scope828{decltype(cs_list_enum828)&e;~cs_list_scope828(){e.Dispose();}} cs_scope828{cs_list_enum828};while(cs_list_enum828.MoveNext()){ pls::cs::Ref<cs_15f31d4f046b09a8> v_item_2706=cs_list_enum828.get_Current();{
if (([&]() -> bool { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(v_item_2706); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f228db45ed90d23f(cs_receiver); }()); auto cs_right = v_json; return (cs_left == cs_right); }())) {
return v_item_2706;
}
}}}
return pls::cs::Ref<cs_15f31d4f046b09a8>{};
}
}
}
// M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32)
void cs_bf2b5138011e18f8(std::int32_t v_request) { cs_init_fa01867c9c048464();
{
pls::cs::Ref<pls::cs::Cell<std::int32_t>> v_request_cell=pls::cs::make_ref<pls::cs::Cell<std::int32_t>>(v_request);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_ce3d3092d4526806 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<std::int32_t>> v_request_cell;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_request_cell,v);}void release_edges()override{pls::cs::Object::release_edges();v_request_cell.reset();}void Invoke(){{
([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x0072" u"\x0065" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"\x005f" u"\x0074" u"\x0072" u"\x0061" u"\x006e" u"\x0073" u"\x0061" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x0073" u"",21)); std::int32_t cs_arg1 = v_request_cell->value; pls::kairo::PlayerPrefs::SetInt(cs_arg0,cs_arg1); }());
([&]() -> void { pls::kairo::PlayerPrefs::Save(); }());
}}};auto cs_closure=pls::cs::make_ref<cs_closure_ce3d3092d4526806>();cs_closure->v_request_cell=v_request_cell;return pls::cs::Delegate<void()>::bind_identity(cs_closure,v_request_cell.get(),std::string("M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32):8685"),[weak=std::weak_ptr<cs_closure_ce3d3092d4526806>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());
}
}
}
// M:system.billing.ui.StoreBase.SetTime(system.billing.ui.Receipt)
pls::cs::Ref<cs_a42daea58251b089> cs_84f1e1cb3af4ded2(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<cs_15f31d4f046b09a8> v_receipt) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::Ref<cs_a42daea58251b089>{};
}
}
}
// M:system.billing.ui.StoreBase.WaitForInitialized
void cs_cbdd7a7dbb437bf3(pls::cs::Ref<cs_fa01867c9c048464> cs_this) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return;
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
pls::cs::Array<pls::cs::Array<pls::cs::String>> v_array_1891 = ([&](){auto cs_initial_array_802=pls::cs::Array<pls::cs::Array<pls::cs::String>>::make(9);cs_initial_array_802.at(0)=([&](){auto cs_initial_array_803=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_803.at(0)=pls::cs::String(std::u16string(u"\x006f" u"\x0072" u"\x0064" u"\x0065" u"\x0072" u"\x0049" u"\x0064" u"",7));cs_initial_array_803.at(1)=pls::cs::String(u"");return cs_initial_array_803;}());cs_initial_array_802.at(1)=([&](){auto cs_initial_array_804=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_804.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x0061" u"\x0067" u"\x0065" u"\x004e" u"\x0061" u"\x006d" u"\x0065" u"",11));cs_initial_array_804.at(1)=pls::cs::String(u"");return cs_initial_array_804;}());cs_initial_array_802.at(2)=([&](){auto cs_initial_array_805=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_805.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0072" u"\x006f" u"\x0064" u"\x0075" u"\x0063" u"\x0074" u"\x0049" u"\x0064" u"",9));cs_initial_array_805.at(1)=pls::cs::String(u"");return cs_initial_array_805;}());cs_initial_array_802.at(3)=([&](){auto cs_initial_array_806=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_806.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0054" u"\x0069" u"\x006d" u"\x0065" u"",12));cs_initial_array_806.at(1)=pls::cs::String(u"");return cs_initial_array_806;}());cs_initial_array_802.at(4)=([&](){auto cs_initial_array_807=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_807.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0053" u"\x0074" u"\x0061" u"\x0074" u"\x0065" u"",13));cs_initial_array_807.at(1)=pls::cs::String(u"");return cs_initial_array_807;}());cs_initial_array_802.at(5)=([&](){auto cs_initial_array_808=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_808.at(0)=pls::cs::String(std::u16string(u"\x0064" u"\x0065" u"\x0076" u"\x0065" u"\x006c" u"\x006f" u"\x0070" u"\x0065" u"\x0072" u"\x0050" u"\x0061" u"\x0079" u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"",16));cs_initial_array_808.at(1)=pls::cs::String(u"");return cs_initial_array_808;}());cs_initial_array_802.at(6)=([&](){auto cs_initial_array_809=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_809.at(0)=pls::cs::String(std::u16string(u"\x0074" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",5));cs_initial_array_809.at(1)=pls::cs::String(u"");return cs_initial_array_809;}());cs_initial_array_802.at(7)=([&](){auto cs_initial_array_810=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_810.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0054" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",13));cs_initial_array_810.at(1)=pls::cs::String(u"");return cs_initial_array_810;}());cs_initial_array_802.at(8)=([&](){auto cs_initial_array_811=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_811.at(0)=pls::cs::String(std::u16string(u"\x0073" u"\x0069" u"\x0067" u"\x006e" u"\x0061" u"\x0074" u"\x0075" u"\x0072" u"\x0065" u"",9));cs_initial_array_811.at(1)=pls::cs::String(u"");return cs_initial_array_811;}());return cs_initial_array_802;}());
for (std::int32_t v_spriteIndex_2554 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_spriteIndex_2554; auto cs_right = (v_array_1891).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_spriteIndex_2554; auto cs_new = pls::cs::add_i32(cs_old,1); v_spriteIndex_2554 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::String> v_array2_2625 = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_spriteIndex_2554; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = v_array2_2625; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_json_1833; pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array2_2625; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
pls::cs::List<pls::cs::String> v_list_2711 = pls::cs::List<pls::cs::String>::make();
for (std::int32_t v_j_2750 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_2750; auto cs_right = (v_array_1891).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_2750; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_2750 = cs_new; return cs_old; }())) {
if (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_j_2750; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) || (([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_j_2750; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())))) {
continue;
}
([&]() -> void { auto cs_receiver = v_list_2711; auto cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_j_2750; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_j_2750; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_e40f466cab31d73b(cs_arg0,cs_arg1); }()); cs_receiver.Add(cs_arg0); }());
}
return ([&]() -> pls::cs::String { pls::cs::Array<pls::cs::String> cs_arg0 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_receiver = v_list_2711; return cs_receiver.ToArray(); }()); return cs_d22851d911e39653(cs_arg0); }());
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
([&]() { auto cs_old = v_text_1464; auto cs_rhs = ([&]() { auto cs_array = v_records; auto cs_index = v_i_1488; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1464 = cs_value; return cs_value; }());
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
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0022" u"",1)); auto cs_right = v_type; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0022" u"\x003a" u"\x0022" u"",3)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_value; return pls::generated::cs_d7ec43a7abb0b748(cs_arg0); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0022" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }());
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x006f" u"\x0072" u"\x0064" u"\x0065" u"\x0072" u"\x0049" u"\x0064" u"",7)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_a5fc6a5046dc6a62 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x0061" u"\x0067" u"\x0065" u"\x004e" u"\x0061" u"\x006d" u"\x0065" u"",11)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_85b5e0881697c2a4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0072" u"\x006f" u"\x0064" u"\x0075" u"\x0063" u"\x0074" u"\x0049" u"\x0064" u"",9)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_4302441eac8005bc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0054" u"\x0069" u"\x006d" u"\x0065" u"",12)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); return pls::cs::int64_parse(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_406b12762a239146 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0053" u"\x0074" u"\x0061" u"\x0074" u"\x0065" u"",13)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); return pls::cs::int32_parse(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_6490fd19ca9cf865 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0064" u"\x0065" u"\x0076" u"\x0065" u"\x006c" u"\x006f" u"\x0070" u"\x0065" u"\x0072" u"\x0050" u"\x0061" u"\x0079" u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"",16)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_6af4ef5d58ee8876 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",5)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_1293600bd46db9ba = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1293600bd46db9ba; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0054" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",13)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_1293600bd46db9ba = cs_value; return cs_value; }());
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0072" u"\x006f" u"\x0064" u"\x0075" u"\x0063" u"\x0074" u"\x0049" u"\x0064" u"",9)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_47aad339f248ff81 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x0079" u"\x0070" u"\x0065" u"",4)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_6cbd485f86bf5859 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0072" u"\x0069" u"\x0063" u"\x0065" u"",5)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_33c621bd4fd10d07 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x0074" u"\x006c" u"\x0065" u"",5)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_5035eb310e4a8d61 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0064" u"\x0065" u"\x0073" u"\x0063" u"\x0072" u"\x0069" u"\x0070" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",11)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_c8cc33ddf6dcb591 = cs_value; return cs_value; }());
}
}
// M:system.billing.util.SkuDetails.#ctor(System.String)
pls::cs::Ref<cs_b169f360ee9f1108> cs_26ea8b67da16b42f(pls::cs::String v_jsonSkuDetails) { cs_init_b169f360ee9f1108();
{ auto cs_this = pls::cs::make_ref<cs_b169f360ee9f1108>(); cs_26ea8b67da16b42f_init(cs_this,v_jsonSkuDetails); return cs_this; }
}
void cs_26ea8b67da16b42f_init(pls::cs::Ref<cs_b169f360ee9f1108> cs_this,pls::cs::String v_jsonSkuDetails) {
([&]() { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0069" u"\x006e" u"\x0061" u"\x0070" u"\x0070" u"",5)); pls::cs::String cs_arg1 = v_jsonSkuDetails; cs_943696d8c8e0a6d0_init(std::static_pointer_cast<cs_b169f360ee9f1108>(cs_this),cs_arg0,cs_arg1); }());
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
// M:system.form.BillingForm._draw(kairo.unity.ui.Graphics)
void cs_eb341bfe377d7469(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_98f193d860f6ae6d; }())) {
return;
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c080baf09a2b7f6e(cs_receiver,cs_arg0); }())))) {
pls::cs::Ref<pls::kairo::FormBase> v_topForm_6256 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4887f44792cc883c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_topForm_6256); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left != cs_right); }())) {
return;
}
pls::cs::Ref<cs_a2cea92715051fa5> v_subForm_6356 = pls::cs::unbox<pls::cs::Ref<cs_a2cea92715051fa5>>(pls::cs::box(v_topForm_6256));
if (((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_a2cea92715051fa5>>(v_subForm_6356); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4214a8e7a6aa2068(cs_receiver); }()))) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_subForm_6356; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f99225d8bef89680; }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); return (cs_left != cs_right); }()))) {
return;
}
for (std::int32_t v_num_6475 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4887f44792cc883c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_6475; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_6475; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_6475 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4887f44792cc883c; }())); std::int32_t cs_arg0 = v_num_6475; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }()); v_topForm_6256 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_topForm_6256); auto cs_right = pls::cs::box(cs_this); return cs_left == cs_right; }())) {
break;
}
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_topForm_6256); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left != cs_right); }()) || (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_a2cea92715051fa5>>((pls::cs::unbox<pls::cs::Ref<cs_a2cea92715051fa5>>(pls::cs::box(v_topForm_6256)))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4214a8e7a6aa2068(cs_receiver); }()))))) {
return;
}
}
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0092f5ccddba18bf(cs_receiver); }())))) {
return;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b3c0c2fddc9e2c47; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_901159f84f3b59e3; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_6843 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_6843); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawAllForms(); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_901159f84f3b59e3; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left > cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; cs_0454fc66f95c3746(cs_arg0); }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_901159f84f3b59e3; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left <= cs_right); }())) {
try {
([&]() -> void { cs_012506043193cb2a(); }());
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x32ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_830) {auto cs_exception_830=pls::cs::capture_exception(cs_caught_830);
if(pls::cs::exception_is(cs_exception_830,"System.Exception")) {{

}}
else {throw;} }
}
return;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
std::int32_t v_num2_7181 = ([&]() -> std::int32_t { auto cs_left = cs_9c86e05bddfdb37d(); auto cs_right = cs_d300032e2a41690b(); return (cs_left | cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x25ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x37ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcbull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcaull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e0a50371fd9022b1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ba3d3d5411fb121; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = pls::game::cs_f32(0x42400000u); float cs_arg2 = pls::game::cs_f32(0x428c0000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3d92f78fee96bd83(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
std::int32_t v_gWidth_7363 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbeull));
std::int32_t v_gHeight_7385 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb4ull));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_gWidth_7363; std::int32_t cs_arg2 = v_gHeight_7385; std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg4 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30e1" u"\x30c3" u"\x30bb" u"\x30fc" u"\x30b8" u"",5)); return cs_f54ac89fce23e89b(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e913ec62d66058dc(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x22ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x36ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xceull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb5ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e0a50371fd9022b1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ba3d3d5411fb121; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = pls::game::cs_f32(0x42200000u); float cs_arg2 = pls::game::cs_f32(0x42880000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3d92f78fee96bd83(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x4e86" u"\x89e3" u"",2)); return cs_f54ac89fce23e89b(cs_arg0); }()); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbdull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); bool cs_arg5 = true; bool cs_arg6 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_80bbb1ca8b8e175d(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_597d9c661c469083(cs_arg0); }());
} else {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left == cs_right); }())) {
std::int32_t v_num3_7756 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaeull));
std::int32_t v_num4_7776 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6bull));
std::int32_t v_num5_7796 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num3_7756; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num6_7827 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num4_7776; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num7_7858 = ([&]() -> std::int32_t { auto cs_left = v_num5_7796; auto cs_right = v_num3_7756; return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num8_7886 = ([&]() -> std::int32_t { auto cs_left = v_num6_7827; auto cs_right = v_num4_7776; return pls::cs::add_i32(cs_left,cs_right); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_num5_7796; std::int32_t cs_arg2 = v_num6_7827; std::int32_t cs_arg3 = v_num3_7756; std::int32_t cs_arg4 = v_num4_7776; std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x99ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe1ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x55ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x57ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xabull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg7 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfdull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfdull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfdull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_0af15e0bbd622bd2(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num5_7796; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num6_7827; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num7_7858; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_num8_7886; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e0a50371fd9022b1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x37ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x37ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x37ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x3069" u"\x3061" u"\x3089" u"\x306b" u"\x5165" u"\x5e97" u"\x3057" u"\x307e" u"\x3059" u"\x304b" u"",10)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num6_7827; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
pls::cs::Array<pls::cs::String> v_array_8233 = ([&](){auto cs_initial_array_831=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_831.at(0)=([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30d1" u"\x30f3" u"\x30d7" u"\x30ad" u"\x30f3" u"\x5546" u"\x4f1a" u"",7)); return cs_f54ac89fce23e89b(cs_arg0); }());cs_initial_array_831.at(1)=([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30c1" u"\x30b1" u"\x30c3" u"\x30c8" u"\x30b7" u"\x30e7" u"\x30c3" u"\x30d7" u"",8)); return cs_f54ac89fce23e89b(cs_arg0); }());return cs_initial_array_831;}());
std::int32_t v_num9_8336 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num6_7827; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }());
for (std::int32_t v_i_8371 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_8371; auto cs_right = (v_array_8233).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_8371; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_8371 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x37ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x37ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x37ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::Array<std::int32_t> v_array2_8447 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array_8233; auto cs_index = v_i_8371; return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7dull)); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num9_8336; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); bool cs_arg5 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9570901a4b105259; }()); auto cs_right = v_i_8371; return (cs_left == cs_right); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg7 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9570901a4b105259; }()); auto cs_right = v_i_8371; return (cs_left == cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_19383a9f099dd72f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() { auto cs_array = v_array2_8447; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg3 = ([&]() { auto cs_array = v_array2_8447; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg4 = ([&]() { auto cs_array = v_array2_8447; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_array2_8447; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); auto cs_right = v_i_8371; return (cs_left | cs_right); }()); return cs_554ec638efacdc2e(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = pls::game::cs_f32(0x00000000u); float cs_arg1 = pls::game::cs_f32(0x00000000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num9_8336; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetClip(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
if (([&]() -> bool { auto cs_left = v_i_8371; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_f21e72e05ec4cb79()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num5_7796; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num9_8336; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cd0885d0fd01b56f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_f21e72e05ec4cb79()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num5_7796; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num9_8336; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x17ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cd0885d0fd01b56f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClearClip(); }());
([&]() { auto cs_old = v_num9_8336; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x25ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num9_8336 = cs_value; return cs_value; }());
}
}
}
}
}
}
// M:system.form.BillingForm.#ctor
pls::cs::Ref<cs_5df8265429cd2423> cs_b1cdb422de7c19d2() { cs_init_5df8265429cd2423();
{ auto cs_this = pls::cs::make_ref<cs_5df8265429cd2423>(); cs_b1cdb422de7c19d2_init(cs_this); return cs_this; }
}
void cs_b1cdb422de7c19d2_init(pls::cs::Ref<cs_5df8265429cd2423> cs_this) {
cs_this->cs_2f1408df5108f5c0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x384ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_98f193d860f6ae6d = cs_value; return cs_value; }());
}
}
// M:system.form.BillingForm.#ctor(System.Int32,system.billing.ui.ApplyTask)
pls::cs::Ref<cs_5df8265429cd2423> cs_fea1b006f5a8844c(std::int32_t v_type,pls::cs::Ref<cs_feb7ae74aa59a27c> v_provide) { cs_init_5df8265429cd2423();
{ auto cs_this = pls::cs::make_ref<cs_5df8265429cd2423>(); cs_fea1b006f5a8844c_init(cs_this,v_type,v_provide); return cs_this; }
}
void cs_fea1b006f5a8844c_init(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_type,pls::cs::Ref<cs_feb7ae74aa59a27c> v_provide) {
([&]() { std::int32_t cs_arg0 = v_type; cs_e8ae3ed2ae7db752_init(std::static_pointer_cast<cs_5df8265429cd2423>(cs_this),cs_arg0); }());
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
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x384ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
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
std::int32_t v_num2_26414 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_str_26332; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
while (([&]() -> bool { auto cs_left = v_num2_26414; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }())) {
if ((([&]() -> bool { auto cs_left = v_num_26398; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_26398; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::game::cs_char_string(char16_t(44)); auto cs_right = v_text_26370; return pls::cs::String::concat(cs_left,cs_right); }()); v_text_26370 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() { auto cs_left = pls::game::cs_char_string(([&]() -> char16_t { pls::cs::String cs_arg0 = v_str_26332; std::int32_t cs_arg1 = v_num2_26414; return pls::generated::cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }())); auto cs_right = v_text_26370; return pls::cs::String::concat(cs_left,cs_right); }()); v_text_26370 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num2_26414; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_26414 = cs_new; return cs_old; }());
([&]() { auto cs_old = v_num_26398; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_26398 = cs_new; return cs_old; }());
}
if (v_flag_26261) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x002d" u"",1)); auto cs_right = v_text_26370; return pls::cs::String::concat(cs_left,cs_right); }()); v_text_26370 = cs_value; return cs_value; }());
}
return v_text_26370;
}
}
// M:system.form.BillingForm.Draw(kairo.unity.ui.Graphics)
void cs_9bbb957b6e3a2798(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d85e674b28736422(cs_receiver,cs_arg0); }());
std::int32_t v_num_5696 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d09016f29a76e6c6; }());
std::int32_t v_num2_5713 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0fd5138f4e59e7f2; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4887f44792cc883c; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }())); auto cs_right = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ea5db026197fd848; }())); return cs_left == cs_right; }())) {
([&]() { auto cs_old = v_num2_5713; auto cs_rhs = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_7193278c42da6bcc(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num2_5713 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return (cs_left > cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_old = v_num_5696; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_5696 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num2_5713; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num2_5713 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_num_5696; std::int32_t cs_arg1 = v_num2_5713; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
pls::cs::run_finally([&]() -> void { try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_eb341bfe377d7469(cs_receiver,cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_837) {auto cs_exception_837=pls::cs::capture_exception(cs_caught_837);
if(pls::cs::exception_is(cs_exception_837,"System.Exception")) {{

}}
else {throw;} } }, [&]() {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
});
}
}
}
// M:system.form.BillingForm.DrawAdOffButtoan(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Array<std::int32_t> cs_08ca06402fc0dd58(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_dx,std::int32_t v_dy,std::int32_t v_dw,std::int32_t v_dh,std::int32_t v_frame) { cs_init_5df8265429cd2423();
{
try {
([&]() -> void { cs_810771d135ba3387(); }());
pls::cs::Array<std::int32_t> v_sprite_26805 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_f21e72e05ec4cb79(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg0 = v_frame; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f424f89d435cbb04(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_f21e72e05ec4cb79(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = ([&]() { auto cs_array = v_sprite_26805; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); float cs_arg1 = static_cast<float>(v_dx); float cs_arg2 = static_cast<float>(v_dy); float cs_arg3 = static_cast<float>(v_dw); float cs_arg4 = static_cast<float>(v_dh); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_sprite_26805; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = ([&]() { auto cs_array = v_sprite_26805; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg7 = ([&]() { auto cs_array = v_sprite_26805; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg8 = ([&]() { auto cs_array = v_sprite_26805; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
pls::cs::Array<std::int32_t> v_array_26976 = cs_74505787d7d17de7();
([&]() { auto cs_target = v_array_26976; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_dx;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_26976; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_dy;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_26976; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_dw;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_26976; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = v_dh;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return v_array_26976;
} catch(const pls::cs::Exception& cs_caught_838) {auto cs_exception_838=pls::cs::capture_exception(cs_caught_838);
if(pls::cs::exception_is(cs_exception_838,"System.Exception")) {{
return pls::cs::Array<std::int32_t>{};
}}
else {throw;} }
}
}
// M:system.form.BillingForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
pls::cs::Array<std::int32_t> cs_660ef87118d6e888(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,bool v_active,bool v_cursor) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = v_str; std::int32_t cs_arg2 = v_x; std::int32_t cs_arg3 = v_y; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); bool cs_arg5 = v_active; std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg7 = v_cursor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_19383a9f099dd72f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
}
// M:system.form.BillingForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
pls::cs::Array<std::int32_t> cs_80bbb1ca8b8e175d(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,bool v_cursor) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = v_str; std::int32_t cs_arg2 = v_x; std::int32_t cs_arg3 = v_y; std::int32_t cs_arg4 = v_anchor; bool cs_arg5 = v_active; std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg7 = v_cursor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_19383a9f099dd72f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
for (std::int32_t v_i_22410 = v_x1; ([&]() -> bool { auto cs_left = v_i_22410; auto cs_right = v_x2; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_22410; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_i_22410 = cs_value; return cs_value; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_i_22410); float cs_arg1 = static_cast<float>(v_y1); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_i_22410; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(v_y2); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::conv_i32(v_num7_25374); std::int32_t cs_arg1 = pls::cs::conv_i32(v_num8_25426); std::int32_t cs_arg2 = pls::cs::conv_i32(v_num9_25478); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_dxAlias_25136); float cs_arg1 = static_cast<float>(v_num_25154); float cs_arg2 = static_cast<float>(v_w); float cs_arg3 = static_cast<float>(v_num10_25925); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x1); float cs_arg1 = static_cast<float>(v_y1); float cs_arg2 = static_cast<float>(v_x2); float cs_arg3 = static_cast<float>(v_y2); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
// M:system.form.BillingForm.DrawObi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_8cca426a78ed9b99(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2) { cs_init_5df8265429cd2423();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = v_width; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg5 = v_color1; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = v_width; std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color2; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_height; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = v_width; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg5 = v_color1; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.BillingForm.DrawRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_a0f8c11dc14c72e5(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = static_cast<float>(v_width); float cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.BillingForm.DrawRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_ce1ebb169f71eef8(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color1; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = static_cast<float>(v_width); float cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color2; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.BillingForm.DrawRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_cb82918c87113401(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color1; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = static_cast<float>(v_width); float cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color2; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color3; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.BillingForm.FillRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_fc12049066e10b07(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color) { cs_init_5df8265429cd2423();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = static_cast<float>(v_width); float cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.BillingForm.FillRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_1959c523be984faf(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2) { cs_init_5df8265429cd2423();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color1; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color2; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.BillingForm.FillRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_0af15e0bbd622bd2(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_5df8265429cd2423();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color1; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color2; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color3; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.BillingForm.FillRect4(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_391cd7af2b74466a(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3,std::int32_t v_color4) { cs_init_5df8265429cd2423();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color1; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color2; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color3; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color4; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.BillingForm.FillRectShadow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_00ac4a8c8f789f95(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_5df8265429cd2423();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color1; cs_a0f8c11dc14c72e5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color2; cs_a5fe62ccd8a41355(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color2; cs_a5fe62ccd8a41355(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color3; cs_fc12049066e10b07(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
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
// M:system.form.BillingForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t cs_fdd4c1335685f6d8(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_type,std::int32_t v_index) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
switch (v_type) {
case 131072:
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9570901a4b105259; }());
}
case 262144:
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cebb9da49aa5808c; }());
}
default:
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f0ea1319d9b511eb(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}
}
// M:system.form.BillingForm.Init
bool cs_e4c18b596618208a(pls::cs::Ref<cs_5df8265429cd2423> cs_this) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f2be821373eb0add(cs_receiver); }());
([&]() -> void { cs_810771d135ba3387(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_86239015691f085c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_b3c0c2fddc9e2c47 = cs_value; return cs_value; }());
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_3666 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
std::int32_t v_num_3696 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_7193278c42da6bcc(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num2_3732 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_7193278c42da6bcc(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num_3696; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num2_3732; return cs_array.get_Item(cs_index); }()); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if (([&]() -> bool { auto cs_left = pls::generated::cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
pls::cs::String v_url_3906 = pls::cs::String{};
if (([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }())) {
([&]() { auto cs_value = (([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"\x002f" u"\x0061" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x002f" u"\x0070" u"\x006f" u"\x006c" u"\x0069" u"\x0063" u"\x0079" u"\x002f" u"\x0061" u"\x0070" u"\x0070" u"\x005f" u"\x0067" u"\x006d" u"",41)); auto cs_right = pls::game::cs_integer_string(pls::generated::cs_efcdf5d0d7b2cdc2()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005f" u"\x006b" u"\x0069" u"\x0079" u"\x0061" u"\x006b" u"\x0075" u"\x002e" u"\x0068" u"\x0074" u"\x006d" u"\x006c" u"",12)); return pls::cs::String::concat(cs_left,cs_right); }())); v_url_3906 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"\x002f" u"\x0061" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x002f" u"\x0070" u"\x006f" u"\x006c" u"\x0069" u"\x0063" u"\x0079" u"\x002f" u"\x0065" u"\x006e" u"\x002f" u"\x0061" u"\x0070" u"\x0070" u"\x005f" u"\x0067" u"\x006d" u"",44)); auto cs_right = pls::game::cs_integer_string(pls::generated::cs_efcdf5d0d7b2cdc2()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005f" u"\x006b" u"\x0069" u"\x0079" u"\x0061" u"\x006b" u"\x0075" u"\x002e" u"\x0068" u"\x0074" u"\x006d" u"\x006c" u"",12)); return pls::cs::String::concat(cs_left,cs_right); }())); v_url_3906 = cs_value; return cs_value; }());
}
if ((!(([&]() -> bool { pls::cs::String cs_arg0 = v_url_3906; return cs_25bba6e14d51039b(cs_arg0); }())))) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x901a" u"\x4fe1" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"",9)); return cs_f54ac89fce23e89b(cs_arg0); }()); return cs_c99c9d4e5fd84a90(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
}
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_87fb4d668ea5580b> { return cs_049b13b83157cd05(); }()); pls::game::cs_require(cs_target)->cs_9ba3d3d5411fb121 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ba3d3d5411fb121; }())); float cs_arg0 = pls::game::cs_f32(0x43120000u); float cs_arg1 = pls::game::cs_f32(0x42f80000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_33bd53255618fce1(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ba3d3d5411fb121; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6c80e48b0bf350ca(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ba3d3d5411fb121; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_57d9a00224068c1c(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ba3d3d5411fb121; }())); pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_870211302837662c; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_329e176d5279bda0; }()); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e3fe9411871b8a7e(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ba3d3d5411fb121; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a0d538f5ac080fc1(cs_receiver); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
pls::cs::String v_text_4517 = pls::cs::String{};
if (([&]() -> bool { auto cs_left = pls::generated::cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x901a" u"\x4fe1" u"\x3092" u"\x8a31" u"\x53ef" u"\x3057" u"\x96fb" u"\x6ce2" u"\x3092" u"\x78ba" u"\x8a8d" u"\x3057" u"\x3066" u"\x518d" u"\x8d77" u"\x52d5" u"\x3057" u"\x3066" u"\x304f" u"\x3060" u"\x3055" u"\x3044" u"\x3002" u"\x000a" u"\x304a" u"\x307e" u"\x304b" u"\x305b" u"\x30ed" u"\x30c3" u"\x30af" u"\x7b49" u"\x3092" u"\x3054" u"\x5229" u"\x7528" u"\x306e" u"\x65b9" u"\x306f" u"\x89e3" u"\x9664" u"\x3092" u"\x3054" u"\x78ba" u"\x8a8d" u"\x304f" u"\x3060" u"\x3055" u"\x3044" u"\x3002" u"\x000a" u"\xff77" u"\xff6f" u"\xff7d" u"\xff9e" u"\x0069" u"\xff93" u"\xff70" u"\xff84" u"\xff9e" u"\xff8c" u"\xff68" u"\xff99" u"\xff80" u"\x8a2d" u"\x5b9a" u"\x4e2d" u"\x306f" u"\x4e00" u"\x90e8" u"\x6a5f" u"\x80fd" u"\x304c" u"\x3054" u"\x5229" u"\x7528" u"\x9802" u"\x3051" u"\x307e" u"\x305b" u"\x3093" u"\x3002" u"",82)); v_text_4517 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x901a" u"\x4fe1" u"\x3092" u"\x8a31" u"\x53ef" u"\x3057" u"\x96fb" u"\x6ce2" u"\x3092" u"\x78ba" u"\x8a8d" u"\x3057" u"\x3066" u"\x518d" u"\x8d77" u"\x52d5" u"\x3057" u"\x3066" u"\x304f" u"\x3060" u"\x3055" u"\x3044" u"\x3002" u"\x000a" u"\x901a" u"\x4fe1" u"\x004f" u"\x0046" u"\x0046" u"\x306e" u"\x5834" u"\x5408" u"\x306f" u"\x4e00" u"\x90e8" u"\x306e" u"\x6a5f" u"\x80fd" u"\x304c" u"\x3054" u"\x5229" u"\x7528" u"\x9802" u"\x3051" u"\x306a" u"\x3044" u"\x5834" u"\x5408" u"\x304c" u"\x3054" u"\x3056" u"\x3044" u"\x307e" u"\x3059" u"\x3002" u"",55)); return cs_f54ac89fce23e89b(cs_arg0); }()); v_text_4517 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_87fb4d668ea5580b> { return cs_049b13b83157cd05(); }()); pls::game::cs_require(cs_target)->cs_9ba3d3d5411fb121 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ba3d3d5411fb121; }())); float cs_arg0 = pls::game::cs_f32(0x43260000u); float cs_arg1 = pls::game::cs_f32(0x42f80000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_33bd53255618fce1(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ba3d3d5411fb121; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6c80e48b0bf350ca(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ba3d3d5411fb121; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_57d9a00224068c1c(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ba3d3d5411fb121; }())); pls::cs::String cs_arg0 = v_text_4517; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e3fe9411871b8a7e(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ba3d3d5411fb121; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a0d538f5ac080fc1(cs_receiver); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {

} else {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
pls::cs::Ref<cs_925b3cf054e42b78> v_instance_5030 = ([&]() -> pls::cs::Ref<cs_925b3cf054e42b78> { return cs_fd047093624d8d65(); }());
pls::cs::Ref<cs_08829eb6a4df2a40> v_instance2_5084 = ([&]() -> pls::cs::Ref<cs_08829eb6a4df2a40> { return cs_aaf24b850afadd84(); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_08829eb6a4df2a40>>(v_instance2_5084); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_6e47643190d08935(); }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_5030); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f13bfb412c6bef66(cs_receiver,cs_arg0); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b9bbd2b4e1a59f2c(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0d32f320570d6146(cs_receiver); }());
return true;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_5030); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_11a43a7110c29351(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_925b3cf054e42b78>>(v_instance_5030); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_3481915358ac0fff(); }());
}
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c5d00bd651861fba; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_859e2922776eae2b(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && cs_9b88f949daa3f81c())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b9bbd2b4e1a59f2c(cs_receiver,cs_arg0); }());
} else {
if ((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2cbfc2aac034968a; }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b9bbd2b4e1a59f2c(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_9570901a4b105259 = cs_value; return cs_value; }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {

}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0d32f320570d6146(cs_receiver); }());
return true;
}
}
}
// M:system.form.BillingForm.LoadResource
void cs_810771d135ba3387() { cs_init_5df8265429cd2423();
{
if (([&]() { auto cs_left = pls::cs::box(cs_f21e72e05ec4cb79()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return;
}
try {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { pls::cs::String cs_arg0 = pls::cs::String{}; pls::cs::String cs_arg1 = pls::cs::String{}; pls::cs::String cs_arg2 = pls::cs::String{}; pls::cs::String cs_arg3 = pls::cs::String{}; pls::cs::String cs_arg4 = pls::cs::String{}; pls::cs::String cs_arg5 = pls::cs::String{}; pls::cs::String cs_arg6 = pls::cs::String{}; return cs_63b2bd45669dab69(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_530b5df6d7de28c3(cs_receiver,cs_arg0); }()); cs_f21e72e05ec4cb79() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_f21e72e05ec4cb79()); pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x0062" u"\x0069" u"\x006c" u"\x006c" u"\x0069" u"\x006e" u"\x0067" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",11)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6ec7ac2b50afb0b0(cs_receiver,cs_arg0,cs_arg1); }());
} catch(const pls::cs::Exception& cs_caught_839) {auto cs_exception_839=pls::cs::capture_exception(cs_caught_839);
if(pls::cs::exception_is(cs_exception_839,"System.Exception")) {{
([&]() { auto cs_value = pls::cs::Ref<cs_b728593e3dcffe31>{}; cs_f21e72e05ec4cb79() = cs_value; return cs_value; }());
}}
else {throw;} }
}
}
// M:system.form.BillingForm.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool cs_ead3618c8cf94cf7(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_18757 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_18757; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()))) {
switch (([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }())) {
case 2:
cs_switch_18831_section_0: ;
{
goto cs_switch_18831_section_1;
}
case 1:
cs_switch_18831_section_1: ;
{
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_component_18757; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::game::cs_require(cs_target)->cs_be2ef4fcd6a49514 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x800ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->KeyClick(cs_arg0); }());
}
break;
}
}
}
return false;
}
return true;
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
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyRepeat(cs_arg0); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9570901a4b105259; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_num; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = v_num; return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_9570901a4b105259 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyRepeat(cs_arg0); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9570901a4b105259; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = v_num; return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_9570901a4b105259 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); std::int32_t cs_arg0 = v_num; std::int32_t cs_arg1 = v_showMax; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_875f1f851e8f75df(cs_receiver,cs_arg0,cs_arg1); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); std::int32_t cs_arg0 = v_num; std::int32_t cs_arg1 = v_showMax; std::int32_t cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9570901a4b105259; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ac42dbacd2c8b2e5(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
// M:system.form.BillingForm.SetSoftlabel
void cs_0d32f320570d6146(pls::cs::Ref<cs_5df8265429cd2423> cs_this) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_19142 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_7193278c42da6bcc(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num2_19178 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_7193278c42da6bcc(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8d5f5c38f287b3d; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b3c0c2fddc9e2c47; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num2_19178 = cs_value; return cs_value; }())); v_num_19142 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num_19142; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num2_19178; return cs_array.get_Item(cs_index); }()); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:system.form.BillingForm.SetTouchValue(System.Int32,System.Int32)
void cs_1b77d58a6eb05a2c(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_type,std::int32_t v_value) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
switch (v_type) {
case 131072:
{
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_9570901a4b105259 = cs_value; return cs_value; }());
break;
}
case 262144:
{
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_cebb9da49aa5808c = cs_value; return cs_value; }());
break;
}
default:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3d1ead99a7eb01b8(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
}
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { pls::cs::Ref<cs_4c145fe8f008af05> cs_arg0 = cs_this; return cs_bab91f84bee2e3d9(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_35a06400bd2d3ebf = cs_value; return cs_value; }());
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
// M:system.form.BillingForm.UpdateSaleList
void cs_16641f71ed4d7f8a(pls::cs::Ref<cs_5df8265429cd2423> cs_this) { cs_init_5df8265429cd2423();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_08829eb6a4df2a40> v_instance_19389 = ([&]() -> pls::cs::Ref<cs_08829eb6a4df2a40> { return cs_aaf24b850afadd84(); }());
pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> v_sales_19442 = ([&]() -> pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance_19389); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5ec95513c85ebc20(cs_receiver); }());
pls::cs::Array<std::int32_t> v_array_19480 = pls::cs::Array<std::int32_t>::make((v_sales_19442).length());
for (std::int32_t v_i_19523 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_19523; auto cs_right = (v_array_19480).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_19523; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_19523 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_19480; auto cs_index = v_i_19523; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
std::int32_t v_num_19589 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_j_19610 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_19610; auto cs_right = (v_sales_19442).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_19610; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_19610 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_19480; auto cs_index = v_j_19610; return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
continue;
}
pls::cs::Ref<cs_931908081ea62151> v_billingItem_19712 = ([&]() { auto cs_array = v_sales_19442; auto cs_index = v_j_19610; return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem_19712); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c94032c6dab33a1c(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
for (std::int32_t v_k_19801 = ([&]() -> std::int32_t { auto cs_left = v_j_19610; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_k_19801; auto cs_right = (v_sales_19442).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_19801; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_19801 = cs_new; return cs_old; }())) {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_array = v_sales_19442; auto cs_index = v_k_19801; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c94032c6dab33a1c(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_array = v_sales_19442; auto cs_index = v_j_19610; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5455b0bdd2f57048(cs_receiver); }()); auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_array = v_sales_19442; auto cs_index = v_k_19801; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5455b0bdd2f57048(cs_receiver); }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()))) {
([&]() { auto cs_target = v_array_19480; auto cs_index = v_k_19801; auto cs_value = v_num_19589;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
([&]() { auto cs_target = v_array_19480; auto cs_index = v_j_19610; auto cs_value = v_num_19589;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_old = v_num_19589; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_19589 = cs_new; return cs_old; }());
}
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_20045 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
for (std::int32_t v_l_20080 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_20080; auto cs_right = v_num_19589; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_20080; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_20080 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_931908081ea62151> v_billingItem2_20122 = pls::cs::Ref<cs_931908081ea62151>{};
pls::cs::Ref<cs_931908081ea62151> v_billingItem3_20159 = pls::cs::Ref<cs_931908081ea62151>{};
std::int32_t v_num2_20188 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull));
std::int32_t v_num3_20217 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffff80000000ull));
for (std::int32_t v_m_20251 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_20251; auto cs_right = (v_array_19480).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_20251; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_20251 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array_19480; auto cs_index = v_m_20251; return cs_array.get_Item(cs_index); }()); auto cs_right = v_l_20080; return (cs_left != cs_right); }())) {
continue;
}
pls::cs::Ref<cs_931908081ea62151> v_billingItem4_20337 = ([&]() { auto cs_array = v_sales_19442; auto cs_index = v_m_20251; return cs_array.get_Item(cs_index); }());
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem4_20337); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2311693c37cf23d0(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem4_20337); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c94032c6dab33a1c(cs_receiver); }()); auto cs_right = v_num2_20188; return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem4_20337); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c94032c6dab33a1c(cs_receiver); }()); v_num2_20188 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_billingItem4_20337; v_billingItem2_20122 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem4_20337); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2311693c37cf23d0(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem4_20337); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c94032c6dab33a1c(cs_receiver); }()); auto cs_right = v_num3_20217; return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem4_20337); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c94032c6dab33a1c(cs_receiver); }()); v_num3_20217 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_billingItem4_20337; v_billingItem3_20159 = cs_value; return cs_value; }());
}
}
if (([&]() { auto cs_left = pls::cs::box(v_billingItem2_20122); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_20045); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_billingItem2_20122); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
} else if (([&]() { auto cs_left = pls::cs::box(v_billingItem3_20159); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_20045); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_billingItem3_20159); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>>::make(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_20045); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }())); pls::game::cs_require(cs_target)->cs_47897dcce494b66c = cs_value; return cs_value; }());
for (std::int32_t v_n_20940 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_n_20940; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_47897dcce494b66c; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_20940; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_20940 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_47897dcce494b66c; }()); auto cs_index = v_n_20940; auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_931908081ea62151>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_20045); std::int32_t cs_arg0 = v_n_20940; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9570901a4b105259; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9570901a4b105259 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9570901a4b105259; }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_47897dcce494b66c; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_47897dcce494b66c; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_9570901a4b105259 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5df8265429cd2423>>(cs_this); std::int32_t cs_arg0 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_47897dcce494b66c; }())).length(); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9570901a4b105259; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ac42dbacd2c8b2e5(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
// M:system.form.ConnectForm._draw(kairo.unity.ui.Graphics)
void cs_b131397c890a25c9(pls::cs::Ref<cs_f52c904bea265acc> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_f52c904bea265acc();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0043" u"\x006f" u"\x006e" u"\x006e" u"\x0065" u"\x0063" u"\x0074" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"\x002e" u"\x005f" u"\x0064" u"\x0072" u"\x0061" u"\x0077" u"\x0028" u"\x0029" u"",19)); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
}
}
// M:system.form.ConnectForm.#ctor
pls::cs::Ref<cs_f52c904bea265acc> cs_5fbebbed5279ae0b() { cs_init_f52c904bea265acc();
{ auto cs_this = pls::cs::make_ref<cs_f52c904bea265acc>(); cs_5fbebbed5279ae0b_init(cs_this); return cs_this; }
}
void cs_5fbebbed5279ae0b_init(pls::cs::Ref<cs_f52c904bea265acc> cs_this) {
([&]() { std::int32_t cs_arg0 = cs_0539026e7603868c(); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{

}
}
// M:system.form.ConnectForm.Draw(kairo.unity.ui.Graphics)
void cs_8f2e07e66a1a99d2(pls::cs::Ref<cs_f52c904bea265acc> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_f52c904bea265acc();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d85e674b28736422(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); return pls::cs::add_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
pls::cs::run_finally([&]() -> void { {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_f52c904bea265acc>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b131397c890a25c9(cs_receiver,cs_arg0); }());
} }, [&]() {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
});
}
}
}
// M:system.form.ConnectForm.DrawConnect(kairo.unity.ui.Graphics)
void cs_0454fc66f95c3746(pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_f52c904bea265acc();
{
try {
if (([&]() { auto cs_left = pls::cs::box(cs_b120e26ea937bc88()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_f52c904bea265acc> { return cs_5fbebbed5279ae0b(); }()); cs_b120e26ea937bc88() = cs_value; return cs_value; }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_f52c904bea265acc>>(cs_b120e26ea937bc88()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Init(); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_f52c904bea265acc>>(cs_b120e26ea937bc88()); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Draw(cs_arg0); }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_f52c904bea265acc>>(cs_b120e26ea937bc88()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Update(); }());
} catch(const pls::cs::Exception& cs_caught_832) {auto cs_exception_832=pls::cs::capture_exception(cs_caught_832);
if(pls::cs::exception_is(cs_exception_832,"System.Exception")) {{

}}
else {throw;} }
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
// M:system.form.ConnectForm.Init
bool cs_45e17a9cd5a326a6(pls::cs::Ref<cs_f52c904bea265acc> cs_this) { cs_init_f52c904bea265acc();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f2be821373eb0add(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); pls::game::cs_require(cs_target)->cs_2bb3a4488f925b87 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }()); pls::game::cs_require(cs_target)->cs_bb75efee16cbae19 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }()); pls::game::cs_require(cs_target)->cs_4887f44792cc883c = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(cs_467527abd3feb0a2()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { pls::cs::String cs_arg0 = pls::cs::String{}; pls::cs::String cs_arg1 = pls::cs::String{}; pls::cs::String cs_arg2 = pls::cs::String{}; pls::cs::String cs_arg3 = pls::cs::String{}; pls::cs::String cs_arg4 = pls::cs::String{}; pls::cs::String cs_arg5 = pls::cs::String{}; pls::cs::String cs_arg6 = pls::cs::String{}; return cs_63b2bd45669dab69(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_530b5df6d7de28c3(cs_receiver,cs_arg0); }()); cs_467527abd3feb0a2() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_467527abd3feb0a2()); pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x0063" u"\x006f" u"\x006e" u"\x006e" u"\x0065" u"\x0063" u"\x0074" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",11)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6ec7ac2b50afb0b0(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_e6e37e272cace738() = cs_value; return cs_value; }());
([&]() { auto cs_value = false; cs_7a902abf262c4ddf() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(u""); pls::cs::String cs_arg1 = pls::cs::String(u""); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
return true;
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
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x32ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_833) {auto cs_exception_833=pls::cs::capture_exception(cs_caught_833);
if(pls::cs::exception_is(cs_exception_833,"System.Exception")) {{

}}
else {throw;} }
return true;
}
}
}
// M:system.form.FriendForm._draw(kairo.unity.ui.Graphics)
void cs_9e356fc109624d82(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
bool v_flag_27063 = false;
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()); v_flag_27063 = cs_value; return cs_value; }());
}
pls::cs::Ref<cs_b728593e3dcffe31> v_resourceManager_27174 = cs_6ecb190a724b1910();
if (([&]() { pls::cs::Ref<cs_89c0d586cfe20341> cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf175fafb4adf626; }()); pls::cs::Ref<cs_89c0d586cfe20341> cs_right = pls::cs::Ref<cs_89c0d586cfe20341>{}; return cs_dfac0766ed9ac2a3(cs_left,cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; cs_0454fc66f95c3746(cs_arg0); }());
return;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
std::int32_t v_num_27298 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));
std::int32_t v_num2_27316 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull));
std::int32_t v_num3_27335 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd8ull));
std::int32_t v_num4_27355 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull));
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_num_27298; std::int32_t cs_arg2 = v_num2_27316; std::int32_t cs_arg3 = v_num3_27335; std::int32_t cs_arg4 = v_num4_27355; std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x95ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x95ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xabull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xccull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xceull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf1ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_69ee200125093993(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num_27298; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num2_27316; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_left = v_num3_27335; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_left = v_num4_27355; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg7 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg8 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7dull)); std::int32_t cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg10 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6bull)); std::int32_t cs_arg11 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdcull)); std::int32_t cs_arg12 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); cs_94dcd111b8ee4921(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9,cs_arg10,cs_arg11,cs_arg12); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa4ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa8ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb2ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30b2" u"\x30fc" u"\x30e0" u"\x306e" u"\x524d" u"\x306b" u"",6)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_27316; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcfull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf5ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x3042" u"\x306a" u"\x305f" u"\x306e" u"\xff86" u"\xff6f" u"\xff78" u"\xff88" u"\xff70" u"\xff91" u"\x3092" u"\x5165" u"\x529b" u"\x3057" u"\x3066" u"\x306d" u"",16)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_27316; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1cull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num_27298; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num2_27316; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2full)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xabull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb8ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb8ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb8ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_69ee200125093993(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa6ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa7ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::String v_str_27993 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x3053" u"\x3053" u"\x3092" u"\x30bf" u"\x30c3" u"\x30c1" u"",6)); return cs_f54ac89fce23e89b(cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86329b9069df920d; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86329b9069df920d; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86329b9069df920d; }()); v_str_27993 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_str_27993; float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_27316; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x35ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num_27298; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num2_27316; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2full)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xabull)); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcfull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf5ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x203b" u"\x3042" u"\x3068" u"\x3067" u"\x5909" u"\x66f4" u"\x3067" u"\x304d" u"\x307e" u"\x3059" u"\x203b" u"",11)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_27316; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4dull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x46ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x46ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x46ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
pls::cs::Array<std::int32_t> v_array_28435 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x004f" u"\x004b" u"",2)); return cs_f54ac89fce23e89b(cs_arg0); }()); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num2_27316; auto cs_right = v_num4_27355; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x19ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); bool cs_arg5 = true; std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); bool cs_arg7 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_360ae5878ac698fb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_717fcad96e6b058f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() { auto cs_array = v_array_28435; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg3 = ([&]() { auto cs_array = v_array_28435; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg4 = ([&]() { auto cs_array = v_array_28435; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_array_28435; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20001ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_6ecb190a724b1910(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num_27298; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8eull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_27316; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6dull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = cs_6ecb190a724b1910(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
std::int32_t v_num5_28771 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));
std::int32_t v_num6_28790 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull));
std::int32_t v_num7_28809 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd8ull));
std::int32_t v_num8_28829 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull));
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_num5_28771; std::int32_t cs_arg2 = v_num6_28790; std::int32_t cs_arg3 = v_num7_28809; std::int32_t cs_arg4 = v_num8_28829; std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x95ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x95ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xabull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xccull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xceull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf1ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_69ee200125093993(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num5_28771; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num6_28790; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_left = v_num7_28809; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_left = v_num8_28829; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg7 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg8 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7dull)); std::int32_t cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg10 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6bull)); std::int32_t cs_arg11 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdcull)); std::int32_t cs_arg12 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); cs_94dcd111b8ee4921(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9,cs_arg10,cs_arg11,cs_arg12); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcfull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf5ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x65b0" u"\x3057" u"\x3044" u"\xff86" u"\xff6f" u"\xff78" u"\xff88" u"\xff70" u"\xff91" u"\x3092" u"\x5165" u"\x529b" u"\x3057" u"\x3066" u"\x306d" u"",15)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num6_28790; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1cull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num5_28771; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num6_28790; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2full)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xabull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb8ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb8ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb8ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_69ee200125093993(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa6ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa7ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::String v_str2_29352 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x3053" u"\x3053" u"\x3092" u"\x30bf" u"\x30c3" u"\x30c1" u"",6)); return cs_f54ac89fce23e89b(cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86329b9069df920d; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86329b9069df920d; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86329b9069df920d; }()); v_str2_29352 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_str2_29352; float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num6_28790; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x35ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num5_28771; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num6_28790; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2full)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xabull)); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcfull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf5ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x203b" u"\x3042" u"\x3068" u"\x3067" u"\x5909" u"\x66f4" u"\x3067" u"\x304d" u"\x307e" u"\x3059" u"\x203b" u"",11)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num6_28790; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4dull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x46ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x46ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x46ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
pls::cs::Array<std::int32_t> v_array2_29798 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x004f" u"\x004b" u"",2)); return cs_f54ac89fce23e89b(cs_arg0); }()); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num6_28790; auto cs_right = v_num8_28829; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x19ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); bool cs_arg5 = true; std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); bool cs_arg7 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_360ae5878ac698fb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_717fcad96e6b058f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() { auto cs_array = v_array2_29798; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg3 = ([&]() { auto cs_array = v_array2_29798; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg4 = ([&]() { auto cs_array = v_array2_29798; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_array2_29798; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20001ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_6ecb190a724b1910(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num5_28771; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8eull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num6_28790; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6dull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = cs_6ecb190a724b1910(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
std::int32_t v_num9_30140 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe0ull));
std::int32_t v_num10_30160 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe0ull));
std::int32_t v_num11_30181 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_96e8baf9470c6eef; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::div_i32(cs_left,cs_right); }());
pls::cs::String v_text_30238 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x003c" u"\x0030" u"\x003e" u"\x0020" u"\x0020" u"\x003c" u"\x0031" u"\x003e" u"\x6642" u"\x9593" u"\x0020" u"\x003c" u"\x0032" u"\x003e" u"\x5206" u"",15)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_value = (([&]() { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_right = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::generated::cs_ac62509f5a77f0ac(cs_left,cs_right); }())); return pls::generated::cs_f1e3fe1dceee44d7(cs_value); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::div_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::mod_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }()); return cs_f026ffcc06857429(cs_arg0,cs_arg1); }());
pls::cs::Array<std::int32_t> v_array3_30426 = pls::cs::Array<std::int32_t>{};
std::int32_t v_num12_30449 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_30426; auto cs_index = cs_8af0529eaa9e3582(); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num13_30504 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_30426; auto cs_index = cs_5f21ec3a03035ae3(); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_135df1f37fd59950(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x524d" u"\x56de" u"\x8d77" u"\x52d5" u"\x6642" u"",5)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg2 = static_cast<float>(v_num13_30504); float cs_arg3 = static_cast<float>(v_num12_30449); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ad2d19e5f752fddb(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_799ed27f91c744c4(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x7d2f" u"\x8a08" u"",2)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_30426; auto cs_index = cs_5f21ec3a03035ae3(); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5bull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(v_num12_30449); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ad2d19e5f752fddb(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
std::int32_t v_num14_30786 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x003c" u"\x0030" u"\x003e" u"\x6642" u"\x9593" u"\x003c" u"\x0031" u"\x003e" u"\x5206" u"",9)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = v_num14_30786; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::div_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = v_num14_30786; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::mod_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }()); return cs_f026ffcc06857429(cs_arg0,cs_arg1); }()); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_30426; auto cs_index = cs_4552c7863c9e5897(); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(v_num12_30449); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
std::int32_t v_num15_30980 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_30426; auto cs_index = cs_5f21ec3a03035ae3(); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num16_31037 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull));
std::int32_t v_num17_31058 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_30426; auto cs_index = cs_4552c7863c9e5897(); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::sub_i32(cs_left,cs_right); }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_30426; auto cs_index = cs_8af0529eaa9e3582(); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num12_30449 = cs_value; return cs_value; }());
for (std::int32_t v_i_31173 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_31173; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_31173; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_31173 = cs_new; return cs_old; }())) {
std::int32_t v_num18_31207 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4b5b9a7b753dbd5b; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_i_31173; return pls::cs::add_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num18_31207; auto cs_right = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_96e8baf9470c6eef; }()); return (cs_left < cs_right); }())) {
pls::cs::Ref<cs_9465f7541f51c47e> v_friend_31291 = pls::cs::Ref<cs_9465f7541f51c47e>{};
bool v_flag2_31317 = false;
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8c9d3daa8567fa6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_265901ac3e38e5a5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_96e8baf9470c6eef; }()); return (cs_left < cs_right); }()))) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_96e8baf9470c6eef; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left <= cs_right); }())) {
if (([&]() -> bool { auto cs_left = v_num18_31207; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_96e8baf9470c6eef; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag2_31317 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_num18_31207; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_265901ac3e38e5a5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_9465f7541f51c47e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_265901ac3e38e5a5; }())); std::int32_t cs_arg0 = v_num18_31207; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); v_friend_31291 = cs_value; return cs_value; }());
}
} else if (([&]() -> bool { auto cs_left = v_num18_31207; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag2_31317 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num18_31207; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_265901ac3e38e5a5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_9465f7541f51c47e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_265901ac3e38e5a5; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = v_num18_31207; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); v_friend_31291 = cs_value; return cs_value; }());
}
} else if (([&]() -> bool { auto cs_left = v_num18_31207; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_265901ac3e38e5a5; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_9465f7541f51c47e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_265901ac3e38e5a5; }())); std::int32_t cs_arg0 = v_num18_31207; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }())); v_friend_31291 = cs_value; return cs_value; }());
}
std::int32_t v_num19_32111 = ([&]() -> std::int32_t { auto cs_left = v_num12_30449; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num20_32140 = ([&]() -> std::int32_t { auto cs_left = v_num12_30449; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num21_32170 = ([&]() -> std::int32_t { auto cs_left = v_num12_30449; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::add_i32(cs_left,cs_right); }());
if (([&]() { auto cs_left = pls::cs::box(v_friend_31291); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_30426; auto cs_index = cs_5f21ec3a03035ae3(); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = v_num12_30449; std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc4ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1full)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4bull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_69ee200125093993(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_135df1f37fd59950(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x003c" u"\x0030" u"\x003e" u"\x3055" u"\x3093" u"",5)); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = v_friend_31291; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aaefb5b9fae0397e; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); return cs_f026ffcc06857429(cs_arg0,cs_arg1); }()); float cs_arg2 = static_cast<float>(v_num15_30980); float cs_arg3 = static_cast<float>(v_num21_32170); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_395bd8211173f942(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x003c" u"\x0030" u"\x003e" u"\x6642" u"\x9593" u"\x003c" u"\x0031" u"\x003e" u"\x5206" u"",9)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = v_friend_31291; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b38757bf00583cf; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::div_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = v_friend_31291; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b38757bf00583cf; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::mod_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }()); return cs_f026ffcc06857429(cs_arg0,cs_arg1); }()); float cs_arg2 = static_cast<float>(v_num17_31058); float cs_arg3 = static_cast<float>(v_num21_32170); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
} else if (v_flag2_31317) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_30426; auto cs_index = cs_5f21ec3a03035ae3(); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = v_num12_30449; std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc4ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1full)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4bull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_69ee200125093993(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() { auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_9465f7541f51c47e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8c9d3daa8567fa6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_0d26c45ae3c275d4(cs_receiver); }())); v_friend_31291 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_135df1f37fd59950(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x003c" u"\x0030" u"\x003e" u"\x3055" u"\x3093" u"",5)); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = v_friend_31291; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aaefb5b9fae0397e; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); return cs_f026ffcc06857429(cs_arg0,cs_arg1); }()); float cs_arg2 = static_cast<float>(v_num15_30980); float cs_arg3 = static_cast<float>(v_num19_32111); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x003c" u"\x0030" u"\x003e" u"\x6642" u"\x9593" u"\x003c" u"\x0031" u"\x003e" u"\x5206" u"",9)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = v_friend_31291; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b38757bf00583cf; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::div_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = v_friend_31291; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b38757bf00583cf; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::mod_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }()); return cs_f026ffcc06857429(cs_arg0,cs_arg1); }()); float cs_arg2 = static_cast<float>(v_num17_31058); float cs_arg3 = static_cast<float>(v_num19_32111); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x304b" u"\x3089" u"\x7533" u"\x8acb" u"\x304c" u"\x3042" u"\x308a" u"\x307e" u"\x3059" u"\x3002" u"",10)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg2 = static_cast<float>(v_num15_30980); float cs_arg3 = static_cast<float>(v_num20_32140); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8c9d3daa8567fa6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x4ed6" u"\x003c" u"\x0030" u"\x003e" u"\x4ef6" u"",5)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8c9d3daa8567fa6; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_62153521fbb1f7f8(cs_arg0,cs_arg1); }()); float cs_arg2 = static_cast<float>(v_num17_31058); float cs_arg3 = static_cast<float>(v_num20_32140); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
} else {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_30426; auto cs_index = cs_5f21ec3a03035ae3(); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = v_num12_30449; std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc4ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1full)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4bull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x59ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa7ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x99ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_69ee200125093993(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_9e9f3d99e4fddcd2(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x3092" u"\x63a2" u"\x3059" u"",7)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg2 = static_cast<float>(v_num16_31037); float cs_arg3 = static_cast<float>(v_num21_32170); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_array3_30426; auto cs_index = cs_5f21ec3a03035ae3(); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = v_num12_30449; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc4ull)); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); auto cs_right = v_i_31173; return (cs_left | cs_right); }()); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
([&]() { auto cs_old = v_num12_30449; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num12_30449 = cs_value; return cs_value; }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
std::int32_t v_num22_33997 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));
std::int32_t v_num23_34017 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull));
std::int32_t v_num24_34037 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd8ull));
std::int32_t v_num25_34058 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull));
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_num22_33997; std::int32_t cs_arg2 = v_num23_34017; std::int32_t cs_arg3 = v_num24_34037; std::int32_t cs_arg4 = v_num25_34058; std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x95ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x95ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xabull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xccull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xceull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf1ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_69ee200125093993(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num22_33997; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num23_34017; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_left = v_num24_34037; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_left = v_num25_34058; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg7 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg8 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7dull)); std::int32_t cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg10 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6bull)); std::int32_t cs_arg11 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdcull)); std::int32_t cs_arg12 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); cs_94dcd111b8ee4921(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9,cs_arg10,cs_arg11,cs_arg12); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcfull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf5ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x3042" u"\x306a" u"\x305f" u"\x306e" u"\x0049" u"\x0044" u"\x306f" u"\x3053" u"\x3061" u"\x3089" u"\x0028" u"\xff80" u"\xff6f" u"\xff81" u"\x3057" u"\x3066" u"\x306d" u"\x0029" u"",18)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num23_34017; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num22_33997; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num23_34017; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x19ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xabull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6aull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6aull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6aull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x98ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x98ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x98ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_69ee200125093993(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_9e9f3d99e4fddcd2(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
pls::cs::String v_friendID_34594 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9ab9c500b6159399(cs_receiver); }());
pls::cs::String v_text2_34643 = pls::cs::String(u"");
try {
for (std::int32_t v_num26_34693 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_friendID_34594; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num26_34693; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num26_34693; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num26_34693 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_friendID_34594; std::int32_t cs_arg1 = v_num26_34693; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num26_34693; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_right = v_text2_34643; return pls::cs::String::concat(cs_left,cs_right); }()); v_text2_34643 = cs_value; return cs_value; }());
std::int32_t v_num27_34823 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_friendID_34594; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_num26_34693; return pls::cs::sub_i32(cs_left,cs_right); }());
if ((([&]() -> bool { auto cs_left = v_num26_34693; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num27_34823; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x002c" u"",1)); auto cs_right = v_text2_34643; return pls::cs::String::concat(cs_left,cs_right); }()); v_text2_34643 = cs_value; return cs_value; }());
}
}
} catch(const pls::cs::Exception& cs_caught_845) {auto cs_exception_845=pls::cs::capture_exception(cs_caught_845);
if(pls::cs::exception_is(cs_exception_845,"System.Exception")) {{
([&]() { auto cs_value = pls::cs::String(u""); v_text2_34643 = cs_value; return cs_value; }());
}}
else {throw;} }
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text2_34643; float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num23_34017; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num22_33997; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num23_34017; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x19ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xabull)); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e80001ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcfull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf5ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x691c" u"\x7d22" u"\x306f" u"\x3053" u"\x3061" u"\x3089" u"",6)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num23_34017; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x38ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num22_33997; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num23_34017; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x47ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xabull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb8ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb8ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb8ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_69ee200125093993(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa6ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa7ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::String v_str3_35472 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x3053" u"\x3053" u"\x306b" u"\x5165" u"\x529b" u"",5)); return cs_f54ac89fce23e89b(cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86329b9069df920d; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86329b9069df920d; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86329b9069df920d; }()); v_str3_35472 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_str3_35472; float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num23_34017; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4dull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num22_33997; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num23_34017; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x47ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xabull)); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x46ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x46ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x46ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
pls::cs::Array<std::int32_t> v_array4_35797 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x691c" u"\x7d22" u"",2)); return cs_f54ac89fce23e89b(cs_arg0); }()); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num23_34017; auto cs_right = v_num25_34058; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x19ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); bool cs_arg5 = true; std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); bool cs_arg7 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_360ae5878ac698fb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_717fcad96e6b058f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() { auto cs_array = v_array4_35797; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg3 = ([&]() { auto cs_array = v_array4_35797; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg4 = ([&]() { auto cs_array = v_array4_35797; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_array4_35797; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20001ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
} else {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return (cs_left == cs_right); }())) {
if (v_flag_27063) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcfull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
std::int32_t v_originX_36417 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }());
std::int32_t v_originY_36453 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(cs_f277b5aa54fb7636()); float cs_arg1 = static_cast<float>(cs_8e6f0b55ae0ed8f8()); float cs_arg2 = static_cast<float>(cs_f4ef1996d644dfd1()); float cs_arg3 = static_cast<float>(cs_c2e996830778e0de()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_originX_36417; std::int32_t cs_arg1 = v_originY_36453; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
}
std::int32_t v_originX2_36677 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }());
std::int32_t v_originY2_36713 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = v_originY2_36713; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
std::int32_t v_num28_36780 = ([&]() -> std::int32_t { auto cs_left = cs_f4ef1996d644dfd1(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }());
std::int32_t v_num29_36818 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }());
std::int32_t v_num30_36863 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull));
std::int32_t v_num31_36883 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull));
std::int32_t v_length_36903 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull));
std::int32_t v_num32_36924 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull));
std::int32_t v_num33_36945 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull));
std::int32_t v_vIEW_W_36965 = cs_f4ef1996d644dfd1();
std::int32_t v_num34_37000 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull));
std::int32_t v_num35_37021 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num36_37041 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num37_37061 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull));
std::int32_t v_num38_37082 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_vIEW_W_36965; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = v_num30_36863; return pls::cs::div_i32(cs_left,cs_right); }())); return pls::cs::mul_i32(cs_left,cs_right); }()); v_num37_37061 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num37_37061; auto cs_right = v_vIEW_W_36965; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_vIEW_W_36965; v_num37_37061 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num34_37000; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = v_num30_36863; return pls::cs::div_i32(cs_left,cs_right); }())); return pls::cs::mul_i32(cs_left,cs_right); }()); v_num38_37082 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num38_37082; auto cs_right = v_num34_37000; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_num34_37000; v_num38_37082 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num35_37021 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num29_36818; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num38_37082; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num36_37041 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3full)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_num35_37021; std::int32_t cs_arg2 = v_num36_37041; std::int32_t cs_arg3 = v_num37_37061; std::int32_t cs_arg4 = v_num38_37082; std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb2ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeaull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd7ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg7 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf6ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdeull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_618419fdd827986d(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num31_36883; return (cs_left >= cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x99ull)); v_num37_37061 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x13ull)); v_num38_37082 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::neg_i32(v_num37_37061); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = cs_f4ef1996d644dfd1(); auto cs_right = v_num37_37061; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = v_length_36903; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num31_36883; return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); return cs_20d8b864ba249ba5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_num35_37021 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num29_36818; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x27ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num36_37041 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_num35_37021; std::int32_t cs_arg2 = v_num36_37041; std::int32_t cs_arg3 = v_num37_37061; std::int32_t cs_arg4 = v_num38_37082; std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd2ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x19ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x48ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg7 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfaull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe2ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_b8a79edd415baa1c(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_135df1f37fd59950(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
pls::cs::String v_str4_37984 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\xff8c" u"\xff9a" u"\xff9d" u"\xff84" u"\xff9e" u"\xff8e" u"\xff9e" u"\xff70" u"\xff85" u"\xff7d" u"\x0028" u"\x003c" u"\x0030" u"\x003e" u"\x5206" u"\x6bce" u"\x0029" u"",17)); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_52a8e080b7bfd117; }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }()); return cs_f026ffcc06857429(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::String cs_arg1 = v_str4_37984; float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num37_37061; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num32_36924; return (cs_left >= cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xccull)); v_num37_37061 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x36ull)); v_num38_37082 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::neg_i32(v_num37_37061); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = cs_f4ef1996d644dfd1(); auto cs_right = v_num37_37061; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = v_num33_36945; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num32_36924; return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); return cs_20d8b864ba249ba5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_num35_37021 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num29_36818; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num36_37041 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_num35_37021; std::int32_t cs_arg2 = v_num36_37041; std::int32_t cs_arg3 = v_num37_37061; std::int32_t cs_arg4 = v_num38_37082; std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x38ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9eull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xceull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd9ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x98ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_69ee200125093993(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_left = v_num37_37061; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_left = v_num38_37082; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg7 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x72ull)); std::int32_t cs_arg8 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8eull)); std::int32_t cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb0ull)); std::int32_t cs_arg10 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); std::int32_t cs_arg11 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x56ull)); std::int32_t cs_arg12 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9bull)); cs_94dcd111b8ee4921(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9,cs_arg10,cs_arg11,cs_arg12); }());
std::int32_t v_num39_38588 = ([&]() -> std::int32_t { auto cs_left = v_num32_36924; auto cs_right = v_num33_36945; return pls::cs::add_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num37_37061; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num38_37082; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetClip(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num39_38588; return (cs_left < cs_right); }())) {
std::int32_t v_maxFrame_38717 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_012842e8ba39224c(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x39ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_maxFrame_38717; return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbeull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x39ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_maxFrame_38717; return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
} else {
std::int32_t v_maxFrame2_39022 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_012842e8ba39224c(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x39ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num39_38588; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = v_maxFrame2_39022; return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbeull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x39ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num39_38588; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = v_maxFrame2_39022; return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClearClip(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_9e9f3d99e4fddcd2(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
pls::cs::String v_text3_39387 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\xff8c" u"\xff9a" u"\xff9d" u"\xff84" u"\xff9e" u"\x304b" u"\x3089" u"\x0020" u"\x003c" u"\x0063" u"\x006f" u"\x003d" u"\x0032" u"\x0035" u"\x0034" u"\x002c" u"\x0032" u"\x0033" u"\x0033" u"\x002c" u"\x0031" u"\x003e" u"\x003c" u"\x0030" u"\x003e" u"\x003c" u"\x002f" u"\x0063" u"\x006f" u"\x003e" u"\x6642" u"\x9593" u"\x003c" u"\x0063" u"\x006f" u"\x003d" u"\x0032" u"\x0035" u"\x0034" u"\x002c" u"\x0032" u"\x0033" u"\x0033" u"\x002c" u"\x0031" u"\x003e" u"\x003c" u"\x0031" u"\x003e" u"\x003c" u"\x002f" u"\x0063" u"\x006f" u"\x003e" u"\x5206" u"\x0020" u"\x53d6" u"\x5f97" u"",58)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::div_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::mod_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }()); return cs_f026ffcc06857429(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::Ref<pls::kairo::Graphics> cs_arg1 = v_g; pls::cs::String cs_arg2 = v_text3_39387; float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num37_37061; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg4 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg5 = cs_9e9f3d99e4fddcd2(); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); cs_7650135bd7080a26(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(v_resourceManager_27174); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3bull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bece04d9ec4c4353(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
std::int32_t v_playBonus_39729 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_57ce211197b23477(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); pls::cs::String cs_arg2 = pls::cs::String(u""); std::int64_t cs_arg3 = pls::cs::cast_integral<std::int64_t>(v_playBonus_39729); pls::cs::String cs_arg4 = pls::cs::String(u""); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg7 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg8 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7551c4ecbb942d2c(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x62ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_9e9f3d99e4fddcd2(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_57ce211197b23477(cs_receiver); }()); auto cs_right = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_28588b55de39809d; }()); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = ([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"\x002c" u"\x002c" u"\x002b" u"\x0031" u"",6)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_56d2ec1c1ce5e030(cs_receiver,cs_arg0); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0028" u"\x6700" u"\x5927" u"\x0029" u"",4)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x85ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5d2f1075652c16f2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_9e9f3d99e4fddcd2(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
pls::cs::Array<std::int32_t> v_array5_40260 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x53d7" u"\x3051" u"\x53d6" u"\x308b" u"",4)); return cs_f54ac89fce23e89b(cs_arg0); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x43ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x25ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); bool cs_arg5 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_360ae5878ac698fb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); bool cs_arg7 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_360ae5878ac698fb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_717fcad96e6b058f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() { auto cs_array = v_array5_40260; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg3 = ([&]() { auto cs_array = v_array5_40260; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg4 = ([&]() { auto cs_array = v_array5_40260; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_array5_40260; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x307e" u"\x305f" u"\x6b21" u"\x56de" u"",4)); return cs_f54ac89fce23e89b(cs_arg0); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num35_37021; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8bull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num36_37041; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x25ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); bool cs_arg5 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_360ae5878ac698fb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); bool cs_arg7 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_360ae5878ac698fb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_717fcad96e6b058f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }()); v_array5_40260 = cs_value; return cs_value; }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() { auto cs_array = v_array5_40260; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg3 = ([&]() { auto cs_array = v_array5_40260; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg4 = ([&]() { auto cs_array = v_array5_40260; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_array5_40260; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20001ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); return (cs_left == cs_right); }())) {
if (v_flag_27063) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcfull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
std::int32_t v_originX3_40898 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }());
std::int32_t v_originY3_40935 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(cs_f277b5aa54fb7636()); float cs_arg1 = static_cast<float>(cs_8e6f0b55ae0ed8f8()); float cs_arg2 = static_cast<float>(cs_f4ef1996d644dfd1()); float cs_arg3 = static_cast<float>(cs_c2e996830778e0de()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_originX3_40898; std::int32_t cs_arg1 = v_originY3_40935; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); return (cs_left == cs_right); }())) {
if (v_flag_27063) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcfull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
std::int32_t v_originX4_41309 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }());
std::int32_t v_originY4_41346 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(cs_f277b5aa54fb7636()); float cs_arg1 = static_cast<float>(cs_8e6f0b55ae0ed8f8()); float cs_arg2 = static_cast<float>(cs_f4ef1996d644dfd1()); float cs_arg3 = static_cast<float>(cs_c2e996830778e0de()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_originX4_41309; std::int32_t cs_arg1 = v_originY4_41346; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
}
std::int32_t v_originX5_41573 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }());
std::int32_t v_originY5_41609 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = v_originY5_41609; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
std::int32_t v_num40_41676 = ([&]() -> std::int32_t { auto cs_left = cs_f4ef1996d644dfd1(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }());
std::int32_t v_num41_41714 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }());
std::int32_t v_num42_41759 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull));
std::int32_t v_num43_41779 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull));
std::int32_t v_length2_41799 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull));
std::int32_t v_num44_41821 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull));
std::int32_t v_num45_41842 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull));
std::int32_t v_vIEW_W2_41862 = cs_f4ef1996d644dfd1();
std::int32_t v_num46_41898 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull));
std::int32_t v_num47_41919 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num48_41939 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num49_41959 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull));
std::int32_t v_num50_41980 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_vIEW_W2_41862; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = v_num42_41759; return pls::cs::div_i32(cs_left,cs_right); }())); return pls::cs::mul_i32(cs_left,cs_right); }()); v_num49_41959 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num49_41959; auto cs_right = v_vIEW_W2_41862; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_vIEW_W2_41862; v_num49_41959 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num46_41898; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = v_num42_41759; return pls::cs::div_i32(cs_left,cs_right); }())); return pls::cs::mul_i32(cs_left,cs_right); }()); v_num50_41980 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num50_41980; auto cs_right = v_num46_41898; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_num46_41898; v_num50_41980 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num47_41919 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num41_41714; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num50_41980; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num48_41939 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3full)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_num47_41919; std::int32_t cs_arg2 = v_num48_41939; std::int32_t cs_arg3 = v_num49_41959; std::int32_t cs_arg4 = v_num50_41980; std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb2ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeaull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd7ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg7 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf6ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdeull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_618419fdd827986d(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num43_41779; return (cs_left >= cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x99ull)); v_num49_41959 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x13ull)); v_num50_41980 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::neg_i32(v_num49_41959); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = cs_f4ef1996d644dfd1(); auto cs_right = v_num49_41959; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = v_length2_41799; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num43_41779; return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); return cs_20d8b864ba249ba5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_num47_41919 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num41_41714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x27ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num48_41939 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_num47_41919; std::int32_t cs_arg2 = v_num48_41939; std::int32_t cs_arg3 = v_num49_41959; std::int32_t cs_arg4 = v_num50_41980; std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd2ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x19ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x48ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg7 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfaull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe2ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_b8a79edd415baa1c(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_135df1f37fd59950(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\xff8c" u"\xff9a" u"\xff9d" u"\xff84" u"\xff9e" u"\xff8e" u"\xff9e" u"\xff70" u"\xff85" u"\xff7d" u"",10)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num49_41959; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num44_41821; return (cs_left >= cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xccull)); v_num49_41959 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x36ull)); v_num50_41980 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::neg_i32(v_num49_41959); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = cs_f4ef1996d644dfd1(); auto cs_right = v_num49_41959; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = v_num45_41842; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num44_41821; return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); return cs_20d8b864ba249ba5(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); v_num47_41919 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num41_41714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num48_41939 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_num47_41919; std::int32_t cs_arg2 = v_num48_41939; std::int32_t cs_arg3 = v_num49_41959; std::int32_t cs_arg4 = v_num50_41980; std::int32_t cs_arg5 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x38ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9eull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xceull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd9ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x98ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); cs_69ee200125093993(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_left = v_num49_41959; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_left = v_num50_41980; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg7 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x72ull)); std::int32_t cs_arg8 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8eull)); std::int32_t cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb0ull)); std::int32_t cs_arg10 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); std::int32_t cs_arg11 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x56ull)); std::int32_t cs_arg12 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9bull)); cs_94dcd111b8ee4921(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9,cs_arg10,cs_arg11,cs_arg12); }());
std::int32_t v_num51_43386 = ([&]() -> std::int32_t { auto cs_left = v_num44_41821; auto cs_right = v_num45_41842; return pls::cs::add_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num49_41959; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num50_41980; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetClip(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num51_43386; return (cs_left < cs_right); }())) {
std::int32_t v_maxFrame3_43515 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_012842e8ba39224c(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x39ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_maxFrame3_43515; return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbeull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x39ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_maxFrame3_43515; return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
} else {
std::int32_t v_maxFrame4_43823 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_012842e8ba39224c(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x39ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num51_43386; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = v_maxFrame4_43823; return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbeull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x39ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = v_num51_43386; return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = v_maxFrame4_43823; return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClearClip(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_9e9f3d99e4fddcd2(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
pls::cs::String v_text4_44188 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x304c" u"\x003c" u"\x0063" u"\x006f" u"\x003d" u"\x0032" u"\x0035" u"\x0034" u"\x002c" u"\x0032" u"\x0033" u"\x0033" u"\x002c" u"\x0031" u"\x003e" u"\x003c" u"\x0030" u"\x003e" u"\x4eba" u"\x003c" u"\x002f" u"\x0063" u"\x006f" u"\x003e" u"\x5897" u"\x3048" u"\x307e" u"\x3057" u"\x305f" u"\x0021" u"",34)); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }()); return cs_f026ffcc06857429(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = v_text4_44188; float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num49_41959; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg4 = cs_9e9f3d99e4fddcd2(); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); cs_78b89240a118cc3f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(v_resourceManager_27174); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3bull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bece04d9ec4c4353(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
std::int32_t v_num52_44454 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86537e9773f89c90; }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return pls::cs::mul_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x11ull)); std::int64_t cs_arg2 = pls::cs::cast_integral<std::int64_t>(v_num52_44454); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4f6229a34a386872(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x62ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = v_resourceManager_27174; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2367124edfe6c3cd; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = cs_9e9f3d99e4fddcd2(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
pls::cs::Array<std::int32_t> v_array6_44781 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x53d7" u"\x3051" u"\x53d6" u"\x308b" u"",4)); return cs_f54ac89fce23e89b(cs_arg0); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x43ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x25ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); bool cs_arg5 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_360ae5878ac698fb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); bool cs_arg7 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_360ae5878ac698fb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_717fcad96e6b058f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() { auto cs_array = v_array6_44781; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg3 = ([&]() { auto cs_array = v_array6_44781; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg4 = ([&]() { auto cs_array = v_array6_44781; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_array6_44781; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x307e" u"\x305f" u"\x6b21" u"\x56de" u"",4)); return cs_f54ac89fce23e89b(cs_arg0); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num47_41919; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8bull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num48_41939; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x25ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); bool cs_arg5 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_360ae5878ac698fb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); bool cs_arg7 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_360ae5878ac698fb; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_717fcad96e6b058f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }()); v_array6_44781 = cs_value; return cs_value; }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() { auto cs_array = v_array6_44781; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg3 = ([&]() { auto cs_array = v_array6_44781; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg4 = ([&]() { auto cs_array = v_array6_44781; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_array6_44781; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20001ull)); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
} else if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return (cs_left == cs_right); }()) && v_flag_27063)) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x30ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcfull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
std::int32_t v_originX6_45402 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }());
std::int32_t v_originY6_45438 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(cs_f277b5aa54fb7636()); float cs_arg1 = static_cast<float>(cs_8e6f0b55ae0ed8f8()); float cs_arg2 = static_cast<float>(cs_f4ef1996d644dfd1()); float cs_arg3 = static_cast<float>(cs_c2e996830778e0de()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_originX6_45402; std::int32_t cs_arg1 = v_originY6_45438; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
}
// M:system.form.FriendForm.#ctor
pls::cs::Ref<cs_7eeafe36a056776c> cs_7ed3e1be6e3844e2() { cs_init_7eeafe36a056776c();
{ auto cs_this = pls::cs::make_ref<cs_7eeafe36a056776c>(); cs_7ed3e1be6e3844e2_init(cs_this); return cs_this; }
}
void cs_7ed3e1be6e3844e2_init(pls::cs::Ref<cs_7eeafe36a056776c> cs_this) {
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x385ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{

}
}
// M:system.form.FriendForm.#ctor(System.Int32)
pls::cs::Ref<cs_7eeafe36a056776c> cs_933732b97e1e3022(std::int32_t v_type) { cs_init_7eeafe36a056776c();
{ auto cs_this = pls::cs::make_ref<cs_7eeafe36a056776c>(); cs_933732b97e1e3022_init(cs_this,v_type); return cs_this; }
}
void cs_933732b97e1e3022_init(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,std::int32_t v_type) {
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x385ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_d6d8eb7d72b9b8de = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_360ae5878ac698fb = cs_value; return cs_value; }());
}
}
// M:system.form.FriendForm.Draw(kairo.unity.ui.Graphics)
void cs_60833b1af0d05697(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d85e674b28736422(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
pls::cs::run_finally([&]() -> void { try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9e356fc109624d82(cs_receiver,cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_859) {auto cs_exception_859=pls::cs::capture_exception(cs_caught_859);
if(pls::cs::exception_is(cs_exception_859,"System.Exception")) {auto v_t_26828=cs_exception_859;{
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_26828; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
}
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0074" u"\x0079" u"\x0070" u"\x0065" u"\x005f" u"",5)); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }())); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
}}
else {throw;} } }, [&]() {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
});
}
}
}
// M:system.form.FriendForm.DrawBonusObi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_618419fdd827986d(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_7eeafe36a056776c();
{
if (([&]() -> bool { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left > cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = v_width; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg5 = v_color1; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
if (([&]() -> bool { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left > cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = v_width; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg5 = v_color2; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
if (([&]() -> bool { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return (cs_left > cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = v_width; std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color3; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
if (([&]() -> bool { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left > cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_height; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = v_width; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg5 = v_color2; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
if (([&]() -> bool { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left > cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_height; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = v_width; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg5 = v_color1; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
// M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
pls::cs::Array<std::int32_t> cs_32b5130fdbba8e53(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,bool v_active,bool v_cursor) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = v_str; std::int32_t cs_arg2 = v_x; std::int32_t cs_arg3 = v_y; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); bool cs_arg5 = v_active; std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg7 = v_cursor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_717fcad96e6b058f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
}
}
// M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
pls::cs::Array<std::int32_t> cs_78fce2126cbd70e0(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,bool v_cursor) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = v_str; std::int32_t cs_arg2 = v_x; std::int32_t cs_arg3 = v_y; std::int32_t cs_arg4 = v_anchor; bool cs_arg5 = v_active; std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg7 = v_cursor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_717fcad96e6b058f(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
for (std::int32_t v_i_47618 = v_x1; ([&]() -> bool { auto cs_left = v_i_47618; auto cs_right = v_x2; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_47618; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_i_47618 = cs_value; return cs_value; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_i_47618); float cs_arg1 = static_cast<float>(v_y1); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_i_47618; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(v_y2); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::conv_i32(v_num7_50582); std::int32_t cs_arg1 = pls::cs::conv_i32(v_num8_50634); std::int32_t cs_arg2 = pls::cs::conv_i32(v_num9_50686); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_dxAlias_50344); float cs_arg1 = static_cast<float>(v_num_50362); float cs_arg2 = static_cast<float>(v_w); float cs_arg3 = static_cast<float>(v_num10_51133); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x1); float cs_arg1 = static_cast<float>(v_y1); float cs_arg2 = static_cast<float>(v_x2); float cs_arg3 = static_cast<float>(v_y2); auto cs_arg4 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawLine(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
// M:system.form.FriendForm.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_4f6229a34a386872(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_seb,std::int64_t v_value,std::int32_t v_x,std::int32_t v_y,std::int32_t v_padding,std::int32_t v_anchor) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_b728593e3dcffe31> v_resourceManager_52330 = cs_6ecb190a724b1910();
pls::cs::Array<std::int32_t> v_sprite_52369 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_52330; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_seb; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f424f89d435cbb04(cs_receiver,cs_arg0,cs_arg1); }());
std::int32_t v_num_52427 = ([&]() { auto cs_array = v_sprite_52369; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num2_52451 = ([&]() { auto cs_array = v_sprite_52369; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }());
bool v_flag_52477 = ([&]() -> bool { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left < cs_right); }());
if (([&]() -> bool { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left < cs_right); }())) {
([&]() { auto cs_old = v_value; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); auto cs_value = pls::cs::mul_i64(cs_old,cs_rhs); v_value = cs_value; return cs_value; }());
}
std::int64_t v_num3_52548 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x1ull));
std::int64_t v_num4_52567 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x1ull));
std::int64_t v_num5_52586 = v_value;
while (([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_left = v_num5_52586; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull))); return pls::cs::div_i64(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left > cs_right); }())) {
([&]() { auto cs_old = v_num5_52586; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::div_i64(cs_old,cs_rhs); v_num5_52586 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num4_52567; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::mul_i64(cs_old,cs_rhs); v_num4_52567 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num3_52548; auto cs_new = pls::cs::add_i64(cs_old,1); v_num3_52548 = cs_new; return cs_old; }());
}
std::int64_t v_num6_52687 = v_num3_52548;
if (v_flag_52477) {
([&]() { auto cs_old = v_num6_52687; auto cs_new = pls::cs::add_i64(cs_old,1); v_num6_52687 = cs_new; return cs_old; }());
}
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { auto cs_left = v_num6_52687; auto cs_right = pls::cs::cast_integral<std::int64_t>((([&]() -> std::int32_t { auto cs_left = v_num_52427; auto cs_right = v_padding; return pls::cs::add_i32(cs_left,cs_right); }()))); return pls::cs::mul_i64(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(v_padding); return pls::cs::sub_i64(cs_left,cs_right); }()); v_num6_52687 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_x; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_num6_52687); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_x = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_x; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(v_num6_52687); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_x = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_y; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_num2_52451; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_y = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_y; auto cs_rhs = v_num2_52451; auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_y = cs_value; return cs_value; }());
}
if (v_flag_52477) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2dull)); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_52330; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_seb; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_012842e8ba39224c(cs_receiver); }()); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_52330; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_seb; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(v_x); float cs_arg2 = static_cast<float>(v_y); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = v_resourceManager_52330; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2dull)); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x002d" u"",1)); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x002d" u"",1)); float cs_arg1 = static_cast<float>(v_x); float cs_arg2 = static_cast<float>(v_y); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
}
([&]() { auto cs_old = v_x; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_num_52427; auto cs_right = v_padding; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_x = cs_value; return cs_value; }());
}
([&]() { auto cs_value = v_value; v_num5_52586 = cs_value; return cs_value; }());
for (std::int32_t v_i_53428 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_i_53428); auto cs_right = v_num3_52548; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_53428; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_53428 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resourceManager_52330; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = v_seb; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(v_x); float cs_arg2 = static_cast<float>(v_y); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = v_resourceManager_52330; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = v_num5_52586; auto cs_right = v_num4_52567; return pls::cs::div_i64(cs_left,cs_right); }()))); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() { auto cs_old = v_num5_52586; auto cs_rhs = v_num4_52567; auto cs_value = pls::cs::mod_i64(cs_old,cs_rhs); v_num5_52586 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num4_52567; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = pls::cs::div_i64(cs_old,cs_rhs); v_num4_52567 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_x; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_num_52427; auto cs_right = v_padding; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_x = cs_value; return cs_value; }());
}
}
}
}
// M:system.form.FriendForm.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32)
void cs_949e82e12c99b348(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_seb,std::int64_t v_value,std::int32_t v_x,std::int32_t v_y,std::int32_t v_padding) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_seb; std::int64_t cs_arg2 = v_value; std::int32_t cs_arg3 = v_x; std::int32_t cs_arg4 = v_y; std::int32_t cs_arg5 = v_padding; std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4f6229a34a386872(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
}
// M:system.form.FriendForm.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32)
void cs_36ab60c3bd163638(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_seb,std::int64_t v_value,std::int32_t v_x,std::int32_t v_y) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_seb; std::int64_t cs_arg2 = v_value; std::int32_t cs_arg3 = v_x; std::int32_t cs_arg4 = v_y; std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4f6229a34a386872(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
}
// M:system.form.FriendForm.DrawObi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_0c8972864e696b8c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2) { cs_init_7eeafe36a056776c();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = v_width; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg5 = v_color1; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = v_width; std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color2; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = v_height; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = v_width; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg5 = v_color1; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.FriendForm.DrawRandomFriend(kairo.unity.ui.Graphics,System.Int32,System.Int32)
pls::cs::Array<std::int32_t> cs_0135d43d4cb4564e(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_center,std::int32_t v_top) { cs_init_7eeafe36a056776c();
{
([&]() -> void { cs_1d17a4b2334bbb84(); }());
pls::cs::Ref<cs_2d2e25a6914f7709> v_instance_54403 = ([&]() -> pls::cs::Ref<cs_ec8ac507fb495e84> { return cs_b3ac47ebcf5c05fb(); }());
if ((([&]() { auto cs_left = pls::cs::box(cs_6ecb190a724b1910()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(v_instance_54403); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_fe0d11dfa92eb303(cs_receiver); }()))))) {
return pls::cs::Array<std::int32_t>{};
}
pls::cs::Ref<cs_9465f7541f51c47e> v_randomFriend_54535 = ([&]() -> pls::cs::Ref<cs_9465f7541f51c47e> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(v_instance_54403); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d0254afaa80460c4(cs_receiver); }());
std::int32_t v_num_54585 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x96ull));
std::int32_t v_num2_54603 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x35ull));
std::int32_t v_num3_54621 = ([&]() -> std::int32_t { auto cs_left = v_center; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_54585; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_topAlias_54653 = v_top;
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc8ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x37ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num3_54621; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_topAlias_54653; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_left = v_num_54585; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_left = v_num2_54603; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg7 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x63ull)); std::int32_t cs_arg8 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x54ull)); std::int32_t cs_arg9 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x95ull)); std::int32_t cs_arg10 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9full)); std::int32_t cs_arg11 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); std::int32_t cs_arg12 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbaull)); cs_94dcd111b8ee4921(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9,cs_arg10,cs_arg11,cs_arg12); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5cull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x68ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_num3_54621); float cs_arg1 = static_cast<float>(v_topAlias_54653); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num_54585; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_54603; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
pls::cs::String v_str_54969 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x003c" u"\x0030" u"\x003e" u"\x3055" u"\x3093" u"",5)); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = v_randomFriend_54535; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aaefb5b9fae0397e; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); return cs_f026ffcc06857429(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_str_54969; float cs_arg1 = static_cast<float>(v_center); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_topAlias_54653; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
pls::cs::String v_str2_55098 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\xff8c" u"\xff9f" u"\xff9a" u"\xff72" u"\x0020" u"\x003c" u"\x0030" u"\x003e" u"\x6642" u"\x9593" u"\x003c" u"\x0031" u"\x003e" u"\x5206" u"",14)); pls::cs::String cs_arg1 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = v_randomFriend_54535; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b38757bf00583cf; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::div_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = v_randomFriend_54535; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b38757bf00583cf; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::cs::mod_i32(cs_left,cs_right); }())); return pls::cs::String::concat(cs_left,cs_right); }()); return cs_f026ffcc06857429(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_str2_55098; float cs_arg1 = static_cast<float>(v_center); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_topAlias_54653; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x55ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x7533" u"\x8acb" u"\x3057" u"\x3066" u"\x307f" u"\x308b" u"",6)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg1 = static_cast<float>(v_center); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_topAlias_54653; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x25ull)); return pls::cs::add_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf6ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdeull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bd0818c86bdc2dd2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_6ecb190a724b1910(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num3_54621; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_topAlias_54653; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = cs_6ecb190a724b1910(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_6ecb190a724b1910(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num3_54621; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x81ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_topAlias_54653; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); return pls::cs::add_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = cs_6ecb190a724b1910(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_6ecb190a724b1910(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num3_54621; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2aull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_topAlias_54653; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return pls::cs::sub_i32(cs_left,cs_right); }())); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = ([&]() { auto cs_receiver = cs_6ecb190a724b1910(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1154a923e75c7349(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() { auto cs_target = cs_c367fac6300f8cee(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_num3_54621;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_c367fac6300f8cee(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_topAlias_54653;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_c367fac6300f8cee(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = v_num_54585;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_c367fac6300f8cee(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = v_num2_54603;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return cs_c367fac6300f8cee();
}
}
// M:system.form.FriendForm.DrawRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_212cdafe66855f8f(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = static_cast<float>(v_width); float cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.FriendForm.DrawRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_ec22813d171c1d4c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color1; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = static_cast<float>(v_width); float cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color2; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.FriendForm.DrawRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_7bccde6e8ea6f480(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color1; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = static_cast<float>(v_width); float cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color2; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color3; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.FriendForm.FillRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_cb87f98dd032e227(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color) { cs_init_7eeafe36a056776c();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_color; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_x); float cs_arg1 = static_cast<float>(v_y); float cs_arg2 = static_cast<float>(v_width); float cs_arg3 = static_cast<float>(v_height); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
// M:system.form.FriendForm.FillRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_69ee200125093993(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2) { cs_init_7eeafe36a056776c();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color1; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color2; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.FriendForm.FillRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_b8a79edd415baa1c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_7eeafe36a056776c();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color1; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color2; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color3; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.FriendForm.FillRect4(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_9dd3a910c5a8997d(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3,std::int32_t v_color4) { cs_init_7eeafe36a056776c();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color1; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color2; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color3; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color4; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
// M:system.form.FriendForm.FillRectShadow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_e4a26c59beed8f2c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3) { cs_init_7eeafe36a056776c();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color1; cs_212cdafe66855f8f(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color2; cs_399e3725ef656158(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color2; cs_399e3725ef656158(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_width; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = v_height; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = v_color3; cs_cb87f98dd032e227(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
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
// M:system.form.FriendForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t cs_cfa914e2f676e2a8(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,std::int32_t v_type,std::int32_t v_index) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
switch (v_type) {
case 131072:
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_360ae5878ac698fb; }());
}
case 65536000:
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4535dd5fc188a436; }());
}
default:
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f0ea1319d9b511eb(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}
}
// M:system.form.FriendForm.LoadResource
void cs_1d17a4b2334bbb84() { cs_init_7eeafe36a056776c();
{
if (([&]() { auto cs_left = pls::cs::box(cs_6ecb190a724b1910()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return;
}
try {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { pls::cs::String cs_arg0 = pls::cs::String{}; pls::cs::String cs_arg1 = pls::cs::String{}; pls::cs::String cs_arg2 = pls::cs::String{}; pls::cs::String cs_arg3 = pls::cs::String{}; pls::cs::String cs_arg4 = pls::cs::String{}; pls::cs::String cs_arg5 = pls::cs::String{}; pls::cs::String cs_arg6 = pls::cs::String{}; return cs_63b2bd45669dab69(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_530b5df6d7de28c3(cs_receiver,cs_arg0); }()); cs_6ecb190a724b1910() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_6ecb190a724b1910()); pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",10)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6ec7ac2b50afb0b0(cs_receiver,cs_arg0,cs_arg1); }());
} catch(const pls::cs::Exception& cs_caught_860) {auto cs_exception_860=pls::cs::capture_exception(cs_caught_860);
if(pls::cs::exception_is(cs_exception_860,"System.Exception")) {{
([&]() { auto cs_value = pls::cs::Ref<cs_b728593e3dcffe31>{}; cs_6ecb190a724b1910() = cs_value; return cs_value; }());
}}
else {throw;} }
}
}
// M:system.form.FriendForm.MakeErrorDialog
pls::cs::Ref<pls::kairo::FormBase> cs_bdd6740f5b4600f8(pls::cs::Ref<cs_7eeafe36a056776c> cs_this) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7eeafe36a056776c>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String{}; pls::cs::String cs_arg1 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e33fb17009a2cbc9(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:system.form.FriendForm.MakeErrorDialog(System.String,System.String)
pls::cs::Ref<pls::kairo::FormBase> cs_e33fb17009a2cbc9(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::String v_msg,pls::cs::String v_args) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() { auto cs_left = pls::cs::box(v_msg); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_msg; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x901a" u"\x4fe1" u"\x3067" u"\x304d" u"\x307e" u"\x305b" u"\x3093" u"\x3067" u"\x3057" u"\x305f" u"\x3002" u"\x007c" u"\x8a2d" u"\x5b9a" u"\x3092" u"\x78ba" u"\x8a8d" u"\x3057" u"\x6642" u"\x9593" u"\x3092" u"\x007c" u"\x304a" u"\x3044" u"\x3066" u"\x6311" u"\x6226" u"\x3057" u"\x3066" u"\x4e0b" u"\x3055" u"\x3044" u"\x3002" u"\x0026" u"\xff8c" u"\xff9a" u"\xff9d" u"\xff84" u"\xff9e" u"\x306f" u"\x003c" u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x005f" u"\x006d" u"\x0061" u"\x0078" u"\x003e" u"\x4eba" u"\x307e" u"\x3067" u"\x767b" u"\x9332" u"\x3067" u"\x304d" u"\x307e" u"\x3059" u"",61)); return cs_f54ac89fce23e89b(cs_arg0); }()); v_msg = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_msg; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x005f" u"\x006d" u"\x0061" u"\x0078" u"\x003e" u"",12)); pls::cs::String cs_arg2 = ([&]() -> pls::cs::String { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9af5d3a1e7852653; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_96e8baf9470c6eef; }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }()); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }()); v_msg = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_args); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_msg; pls::cs::String cs_arg1 = v_args; return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }()); v_msg = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_msg; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x007c" u"",1)); pls::cs::String cs_arg2 = pls::cs::String(u""); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }()); v_msg = cs_value; return cs_value; }());
pls::cs::Array<pls::cs::String> v_array_54128 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_msg; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0026" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = (v_array_54128).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
return ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_54128; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_c99c9d4e5fd84a90(cs_arg0); }());
}
return ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_54128; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array_54128; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_6365b6907852f094(cs_arg0,cs_arg1); }());
}
}
}
// M:system.form.FriendForm.MakeErrorMsgForm(System.String,System.String)
pls::cs::Ref<cs_7eeafe36a056776c> cs_6365b6907852f094(pls::cs::String v_msg,pls::cs::String v_msg_sub) { cs_init_7eeafe36a056776c();
{
pls::cs::Ref<cs_7eeafe36a056776c> v_friendForm_3815 = ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { return cs_7ed3e1be6e3844e2(); }());
([&]() { auto cs_target = v_friendForm_3815; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); pls::game::cs_require(cs_target)->cs_d6d8eb7d72b9b8de = cs_value; return cs_value; }());
([&]() { auto cs_target = v_friendForm_3815; auto cs_value = ([&]() -> pls::cs::Ref<cs_87fb4d668ea5580b> { return cs_049b13b83157cd05(); }()); pls::game::cs_require(cs_target)->cs_1dc765cc4cfa5d31 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = v_friendForm_3815; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1dc765cc4cfa5d31; }())); float cs_arg0 = pls::game::cs_f32(0x430c0000u); float cs_arg1 = pls::game::cs_f32(0x42300000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_33bd53255618fce1(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = v_friendForm_3815; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1dc765cc4cfa5d31; }())); std::int32_t cs_arg0 = cs_135df1f37fd59950(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_57d9a00224068c1c(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = v_friendForm_3815; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1dc765cc4cfa5d31; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x22ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2be5ebb4744281a0(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = v_friendForm_3815; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1dc765cc4cfa5d31; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6c80e48b0bf350ca(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = v_friendForm_3815; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1dc765cc4cfa5d31; }())); pls::cs::String cs_arg0 = v_msg; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e3fe9411871b8a7e(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = v_friendForm_3815; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1dc765cc4cfa5d31; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a0d538f5ac080fc1(cs_receiver); }());
([&]() { auto cs_target = v_friendForm_3815; auto cs_value = v_msg_sub; pls::game::cs_require(cs_target)->cs_86329b9069df920d = cs_value; return cs_value; }());
return v_friendForm_3815;
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_left; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_right; return cs_array.get_Item(cs_index); }()); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:system.form.FriendForm.SetTouchValue(System.Int32,System.Int32)
void cs_6b3d79cf80d0d155(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,std::int32_t v_type,std::int32_t v_value) { cs_init_7eeafe36a056776c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
switch (v_type) {
case 131072:
{
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_360ae5878ac698fb = cs_value; return cs_value; }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6d8eb7d72b9b8de; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left >= cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_4535dd5fc188a436 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); pls::game::cs_require(cs_target)->cs_360ae5878ac698fb = cs_value; return cs_value; }());
}
break;
}
case 65536000:
{
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_4535dd5fc188a436 = cs_value; return cs_value; }());
break;
}
default:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3d1ead99a7eb01b8(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
}
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
// M:system.form.HttpForm.#ctor(system.form.HttpForm.HttpMethod,system.form.HttpForm.HttpMethod)
pls::cs::Ref<cs_5dc998c2cffb18c8> cs_148ae4520ebf5819(pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_connectMethod,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_resultMethod) { cs_init_5dc998c2cffb18c8();
{ auto cs_this = pls::cs::make_ref<cs_5dc998c2cffb18c8>(); cs_148ae4520ebf5819_init(cs_this,v_connectMethod,v_resultMethod); return cs_this; }
}
void cs_148ae4520ebf5819_init(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_connectMethod,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_resultMethod) {
cs_this->cs_c1863875b9b75cb4 = pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<pls::cs::Object>>::make();
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x38dull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = v_connectMethod; pls::game::cs_require(cs_target)->cs_29c88f84473383fb = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_resultMethod; pls::game::cs_require(cs_target)->cs_10571fb04b30cc3f = cs_value; return cs_value; }());
([&]() { auto cs_receiver = cs_this; auto cs_rhs = true; auto cs_value = cs_rhs; cs_7f2977d6d7eff4a2(static_cast<pls::cs::Ref<cs_5dc998c2cffb18c8>>(cs_receiver),cs_value); return cs_value; }());
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
// M:system.form.HttpForm.Draw(kairo.unity.ui.Graphics)
void cs_cf0a08b4237473bc(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d85e674b28736422(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ec59762286c4307; }()); auto cs_right = cs_4eda79c4b15c03ea(); return (cs_left != cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; cs_611b444a90ba63e4(cs_arg0); }());
}
}
}
}
// M:system.form.HttpForm.DrawConnect(kairo.unity.ui.Graphics)
void cs_611b444a90ba63e4(pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_5dc998c2cffb18c8();
{
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushOrigin(cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::Ref<cs_e315dac1df3b175d> v_instance_2449 = ([&]() -> pls::cs::Ref<cs_e315dac1df3b175d> { return cs_f32a8bd00f4461ef(); }());
std::int32_t v_num_2492 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_2449); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }());
std::int32_t v_num2_2535 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_2449); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }());
std::int32_t v_totalFrames_2580 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTotalFrames(); }());
pls::cs::Ref<cs_b728593e3dcffe31> v_resource_2661 = ([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_910a62f2dd3a48eb(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { float cs_arg0 = pls::game::cs_f32(0x3f000000u); float cs_arg1 = pls::game::cs_f32(0x3f000000u); auto cs_arg2 = pls::game::cs_f32(0x00000000u); auto cs_arg3 = pls::game::cs_f32(0x00000000u); return cs_e8ceb82625f5a10e(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9d946ea24c94dbc(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(v_resource_2661); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(v_num_2492); float cs_arg2 = static_cast<float>(v_num2_2535); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bece04d9ec4c4353(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_totalFrames_2580; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = pls::game::cs_f32(0x00000000u); auto cs_arg2 = pls::game::cs_f32(0x00000000u); return cs_54df3686b06bf8e3(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9d946ea24c94dbc(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(v_resource_2661); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(v_num_2492); float cs_arg2 = static_cast<float>(v_num2_2535); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bece04d9ec4c4353(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopMatrix(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopMatrix(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushFont(cs_arg0); }());
pls::cs::String v_text_2980 = pls::cs::String(std::u16string(u"\x0054" u"\x0072" u"\x0061" u"\x006e" u"\x0073" u"\x006d" u"\x0069" u"\x0073" u"\x0073" u"\x0069" u"\x006f" u"\x006e" u"",12));
std::int32_t v_num3_3011 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text_2980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }());
for (std::int32_t v_i_3052 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3052; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_totalFrames_2580; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3052; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3052 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_text_2980; auto cs_rhs = pls::cs::String(std::u16string(u"\x002e" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_2980 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text_2980; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_2492; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num3_3011; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_2535; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2aull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopFont(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopOrigin(); }());
} catch(const pls::cs::Exception& cs_caught_862) {auto cs_exception_862=pls::cs::capture_exception(cs_caught_862);
if(pls::cs::exception_is(cs_exception_862,"System.Exception")) {{

}}
else {throw;} }
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
// M:system.form.HttpForm.get_IsCancelable
bool cs_c94b8415150fa1bf(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_e855bbf60b28c0af;}
}
}
// M:system.form.HttpForm.get_ProcessError
bool cs_f102c933220ac9aa(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_bf94607445778940;}
}
}
// M:system.form.HttpForm.Init
bool cs_879e1552c1bc0b54(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f2be821373eb0add(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = cs_21099aafdcadb3e3(); pls::game::cs_require(cs_target)->cs_4ec59762286c4307 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_408ac5c74e5f3515> { return cs_8aaa473de163f748(); }()); pls::game::cs_require(cs_target)->cs_3ae23c92a69c00cc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { pls::cs::Ref<cs_4c145fe8f008af05> cs_arg0 = cs_this; return cs_bab91f84bee2e3d9(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_88389be19ba33eb1 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_89c0d586cfe20341>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88389be19ba33eb1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b9636031b790b537(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(u""); pls::cs::String cs_arg1 = pls::cs::String(u""); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
return true;
}
}
}
// M:system.form.HttpForm.ResultData.#ctor
pls::cs::Ref<cs_408ac5c74e5f3515> cs_8aaa473de163f748() { cs_init_408ac5c74e5f3515();
{ auto cs_this = pls::cs::make_ref<cs_408ac5c74e5f3515>(); cs_8aaa473de163f748_init(cs_this); return cs_this; }
}
void cs_8aaa473de163f748_init(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this) {
cs_this->cs_71dbc351ecc57982 = pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<pls::cs::Object>>::make();
{}
}
// M:system.form.HttpForm.ResultData.Add(System.String,System.Object)
void cs_c91786768676e5e6(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_key,pls::cs::Ref<pls::cs::Object> v_data) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_71dbc351ecc57982; }()); auto cs_index = v_key; auto cs_value = v_data; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}
// M:system.form.HttpForm.ResultData.get_Error
pls::cs::String cs_afca4e9abd6175de(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_7d56a65066430756;}
}
}
// M:system.form.HttpForm.ResultData.get_Exception
pls::cs::Ref<pls::cs::ExceptionObject> cs_6ed697c2d33e26f6(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_fcff22ab2f484bde;}
}
}
// M:system.form.HttpForm.ResultData.get_Succeed
bool cs_07512424539c2fc2(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_4d9cb6241cd66304;}
}
}
// M:system.form.HttpForm.ResultData.Get(System.String)
pls::cs::Ref<pls::cs::Object> cs_1a4dc7b41c694d0c(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_key) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::cs::Object> v_value_746 = pls::cs::Ref<pls::cs::Object>{};
if (([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_71dbc351ecc57982; }());auto cs_key=v_key;return cs_dictionary.TryGetValue(cs_key,v_value_746);}())) {
return v_value_746;
}
return pls::cs::Ref<pls::cs::Object>{};
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
// M:system.form.HttpForm.ResultData.set_Error(System.String)
void cs_491eae3eae7d9573(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_value) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_7d56a65066430756=v_value;}
}
}
// M:system.form.HttpForm.ResultData.set_Exception(System.Exception)
void cs_8d58629cef163b32(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::Ref<pls::cs::ExceptionObject> v_value) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_fcff22ab2f484bde=v_value;}
}
}
// M:system.form.HttpForm.ResultData.set_Succeed(System.Boolean)
void cs_961e1edcb72ada4a(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,bool v_value) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_4d9cb6241cd66304=v_value;}
}
}
// M:system.form.HttpForm.Run
void cs_c5e84308fbc916b7(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::run_finally([&]() -> void { try {
if (([&](){auto cs_left=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_29c88f84473383fb; }());auto cs_right=pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)>{};return cs_left!=cs_right;}())) {
([&](){auto cs_delegate=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_29c88f84473383fb; }());auto cs_arg0=cs_this;auto cs_arg1=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }());cs_delegate(cs_arg0,cs_arg1);}());
}
([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }()); auto cs_rhs = true; auto cs_value = cs_rhs; cs_961e1edcb72ada4a(static_cast<pls::cs::Ref<cs_408ac5c74e5f3515>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = cs_34052c1785c8754e(); pls::game::cs_require(cs_target)->cs_4ec59762286c4307 = cs_value; return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_863) {auto cs_exception_863=pls::cs::capture_exception(cs_caught_863);
if(pls::cs::exception_is(cs_exception_863,"System.Exception")) {auto v_ex_4374=cs_exception_863;{
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_object_string(pls::cs::box(v_ex_4374)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }()); auto cs_rhs = ([&]() -> pls::cs::String { return cs_42eaa879561f279c(); }()); auto cs_value = cs_rhs; cs_491eae3eae7d9573(static_cast<pls::cs::Ref<cs_408ac5c74e5f3515>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }()); auto cs_rhs = v_ex_4374; auto cs_value = cs_rhs; cs_8d58629cef163b32(static_cast<pls::cs::Ref<cs_408ac5c74e5f3515>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }()); auto cs_rhs = false; auto cs_value = cs_rhs; cs_961e1edcb72ada4a(static_cast<pls::cs::Ref<cs_408ac5c74e5f3515>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = cs_6165a1c4f7bf45ea(); pls::game::cs_require(cs_target)->cs_4ec59762286c4307 = cs_value; return cs_value; }());
}}
else {throw;} } }, [&]() {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_89c0d586cfe20341>{}; pls::game::cs_require(cs_target)->cs_88389be19ba33eb1 = cs_value; return cs_value; }());
});
}
}
}
// M:system.form.HttpForm.set_IsCancelable(System.Boolean)
void cs_6454cbcccfc7db21(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,bool v_value) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_e855bbf60b28c0af=v_value;}
}
}
// M:system.form.HttpForm.set_ProcessError(System.Boolean)
void cs_7f2977d6d7eff4a2(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,bool v_value) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_bf94607445778940=v_value;}
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
// M:system.form.HttpForm.Update
bool cs_f76006a37a507361(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_25913418bfe51bb8(cs_receiver); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ec59762286c4307; }()); auto cs_right = cs_4eda79c4b15c03ea(); return (cs_left != cs_right); }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ec59762286c4307; }()); auto cs_right = cs_21099aafdcadb3e3(); return (cs_left == cs_right); }())) {
return true;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ec59762286c4307; }()); auto cs_right = cs_34052c1785c8754e(); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = cs_4eda79c4b15c03ea(); pls::game::cs_require(cs_target)->cs_4ec59762286c4307 = cs_value; return cs_value; }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(); }());
if (([&](){auto cs_left=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10571fb04b30cc3f; }());auto cs_right=pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)>{};return cs_left!=cs_right;}())) {
([&](){auto cs_delegate=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10571fb04b30cc3f; }());auto cs_arg0=cs_this;auto cs_arg1=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }());cs_delegate(cs_arg0,cs_arg1);}());
}
return true;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ec59762286c4307; }()); auto cs_right = cs_6165a1c4f7bf45ea(); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = cs_4eda79c4b15c03ea(); pls::game::cs_require(cs_target)->cs_4ec59762286c4307 = cs_value; return cs_value; }());
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }()); return cs_afca4e9abd6175de(static_cast<pls::cs::Ref<cs_408ac5c74e5f3515>>(cs_receiver)); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(); }());
if (([&]() -> bool { auto cs_receiver = cs_this; return cs_f102c933220ac9aa(static_cast<pls::cs::Ref<cs_5dc998c2cffb18c8>>(cs_receiver)); }())) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }()); return cs_afca4e9abd6175de(static_cast<pls::cs::Ref<cs_408ac5c74e5f3515>>(cs_receiver)); }()); return cs_c99c9d4e5fd84a90(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
} else if (([&](){auto cs_left=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10571fb04b30cc3f; }());auto cs_right=pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)>{};return cs_left!=cs_right;}())) {
([&](){auto cs_delegate=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10571fb04b30cc3f; }());auto cs_arg0=cs_this;auto cs_arg1=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }());cs_delegate(cs_arg0,cs_arg1);}());
}
return true;
}
}
return true;
}
}
}
// M:system.form.LanguageForm.#ctor
pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_b8786f8cf097476e() { cs_init_c9cd56cdd30ecf7a();
{ auto cs_this = pls::cs::make_ref<cs_c9cd56cdd30ecf7a>(); cs_b8786f8cf097476e_init(cs_this); return cs_this; }
}
void cs_b8786f8cf097476e_init(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this) {
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x38cull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
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
// M:system.form.LanguageForm.DrawButton(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Threading.ThreadStart)
void cs_da7545682de782c6(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,pls::cs::Delegate<void()> v_callback) { cs_init_c9cd56cdd30ecf7a();
{
([&]() { auto cs_value = v_callback; cs_169d42739a93e08e() = cs_value; return cs_value; }());
pls::cs::Ref<cs_e315dac1df3b175d> v_instance_5646 = ([&]() -> pls::cs::Ref<cs_e315dac1df3b175d> { return cs_f32a8bd00f4461ef(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushOrigin(cs_arg0,cs_arg1,cs_arg2); }());
std::int32_t v_value_5711 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x133a066ull));
bool v_flag_5737 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_5646); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg1 = v_value_5711; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }());
pls::cs::Ref<cs_b728593e3dcffe31> v_resource_5794 = ([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_910a62f2dd3a48eb(cs_receiver); }());
pls::cs::Array<std::int32_t> v_sprite_5858 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resource_5794; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f424f89d435cbb04(cs_receiver,cs_arg0,cs_arg1); }());
if (v_flag_5737) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushBlendMode(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { float cs_arg0 = pls::game::cs_f32(0x3f8ccccdu); float cs_arg1 = pls::game::cs_f32(0x3f8ccccdu); auto cs_arg2 = pls::game::cs_f32(0x00000000u); auto cs_arg3 = pls::game::cs_f32(0x00000000u); return cs_e8ceb82625f5a10e(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9d946ea24c94dbc(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { float cs_arg0 = pls::game::cs_f32(0x3f000000u); float cs_arg1 = pls::game::cs_f32(0x3f000000u); auto cs_arg2 = pls::game::cs_f32(0x00000000u); auto cs_arg3 = pls::game::cs_f32(0x00000000u); return cs_e8ceb82625f5a10e(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9d946ea24c94dbc(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(v_resource_5794); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(v_x); float cs_arg2 = static_cast<float>(v_y); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bece04d9ec4c4353(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopMatrix(); }());
if (v_flag_5737) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopMatrix(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopBlendMode(); }());
}
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite_5858; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite_5858; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite_5858; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite_5858; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg6 = v_value_5711; return cs_554ec638efacdc2e(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopOrigin(); }());
if ((pls::generated::cs_b0827224162a4f93() && (!(cs_40a53d57b75c7593())))) {
if ((!(([&]() -> bool { return pls::kairo::Graphics::IsAutoTextLayout(); }())))) {
([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x81ea" u"\x52d5" u"\x30c6" u"\x30ad" u"\x30b9" u"\x30c8" u"\x30ec" u"\x30a4" u"\x30a2" u"\x30a6" u"\x30c8" u"\x304c" u"\x7121" u"\x52b9" u"\x306b" u"\x306a" u"\x3063" u"\x3066" u"\x3044" u"\x307e" u"\x3059" u"\x3002" u"\x000a" u"\x0047" u"\x0072" u"\x0061" u"\x0070" u"\x0068" u"\x0069" u"\x0063" u"\x0073" u"\x002e" u"\x0053" u"\x0065" u"\x0074" u"\x0041" u"\x0075" u"\x0074" u"\x006f" u"\x0054" u"\x0065" u"\x0078" u"\x0074" u"\x004c" u"\x0061" u"\x0079" u"\x006f" u"\x0075" u"\x0074" u"\x0028" u"\x0029" u"\x0020" u"\x3092" u"\x4f7f" u"\x3063" u"\x3066" u"\x6709" u"\x52b9" u"\x306b" u"\x3059" u"\x308b" u"\x4e8b" u"\x3092" u"\x63a8" u"\x5968" u"\x3057" u"\x307e" u"\x3059" u"\x3002" u"",69)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_4d9093772b7b2178(cs_arg0,cs_arg1); }());
}
([&]() { auto cs_value = true; cs_40a53d57b75c7593() = cs_value; return cs_value; }());
}
}
}
// M:system.form.LanguageForm.DrawButton(kairo.unity.ui.Graphics,System.Threading.ThreadStart,System.Int32)
void cs_eee149edf159a78f(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Delegate<void()> v_callback,std::int32_t v_anchor) { cs_init_c9cd56cdd30ecf7a();
{
pls::cs::Ref<cs_e315dac1df3b175d> v_instance_5001 = ([&]() -> pls::cs::Ref<cs_e315dac1df3b175d> { return cs_f32a8bd00f4461ef(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushOrigin(cs_arg0,cs_arg1,cs_arg2); }());
std::int32_t v_originalUnusedSlot1_5083 = std::int32_t{};
std::int32_t v_x_5109 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull));
std::int32_t v_y_5124 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull));
if (([&]() -> bool { std::int32_t cs_arg0 = v_anchor; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_5001); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); v_x_5109 = cs_value; return cs_value; }());
} else if (([&]() -> bool { std::int32_t cs_arg0 = v_anchor; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_5001); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_x_5109 = cs_value; return cs_value; }());
}
if (([&]() -> bool { std::int32_t cs_arg0 = v_anchor; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_5001); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); v_y_5124 = cs_value; return cs_value; }());
} else if (([&]() -> bool { std::int32_t cs_arg0 = v_anchor; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_5001); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_y_5124 = cs_value; return cs_value; }());
}
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x_5109; std::int32_t cs_arg2 = v_y_5124; pls::cs::Delegate<void()> cs_arg3 = v_callback; cs_da7545682de782c6(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopOrigin(); }());
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
// M:system.form.LanguageForm.Init
bool cs_d89100ce3e5567b3(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this) { cs_init_c9cd56cdd30ecf7a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f2be821373eb0add(cs_receiver); }());
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
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_6664); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c9cd56cdd30ecf7a> { return cs_b8786f8cf097476e(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
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
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x387ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{

}
}
// M:system.form.LineupForm.#ctor(System.Int32)
pls::cs::Ref<cs_d01bf6d528df5d3e> cs_bde331d144b7e233(std::int32_t v_type) { cs_init_d01bf6d528df5d3e();
{ auto cs_this = pls::cs::make_ref<cs_d01bf6d528df5d3e>(); cs_bde331d144b7e233_init(cs_this,v_type); return cs_this; }
}
void cs_bde331d144b7e233_init(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,std::int32_t v_type) {
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x387ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
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
// M:system.form.LineupForm.Draw(kairo.unity.ui.Graphics)
void cs_bcecdee954fd1704(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d85e674b28736422(cs_receiver,cs_arg0); }());
([&]() -> void { bool cs_arg0 = false; pls::kairo::Font::PushLocalizeSetting(cs_arg0); }());
pls::cs::Array<std::int32_t> v_sprite_1420 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_a251c18c9d0f913d(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f424f89d435cbb04(cs_receiver,cs_arg0,cs_arg1); }());
std::int32_t v_num_1477 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }());
std::int32_t v_num2_1524 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30aa" u"\x30b9" u"\x30b9" u"\x30e1" u"\x30a2" u"\x30d7" u"\x30ea" u"\x60c5" u"\x5831" u"",9)); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_1524; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1full)); return pls::cs::sub_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_a251c18c9d0f913d(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = ([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); float cs_arg1 = pls::game::cs_f32(0x00000000u); float cs_arg2 = static_cast<float>(v_num2_1524); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }())); float cs_arg4 = static_cast<float>(([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = ([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg7 = ([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg8 = ([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());
pls::cs::Ref<cs_fd683372658feff4> v_lineupData_1829 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::Image> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fd683372658feff4>>(v_lineupData_1829); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_aeee5b62db0f8f41(cs_receiver); }()); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num_1477; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_1524; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2); }());
std::int32_t v_num3_1919 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_1477; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x21ull)); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num4_1948 = ([&]() -> std::int32_t { auto cs_left = v_num2_1524; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::add_i32(cs_left,cs_right); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }())).length(); return (cs_left < cs_right); }()) && ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e13125ff785351a8; }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbbull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4cull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_num3_1919); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num4_1948; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1aull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = pls::game::cs_f32(0x43200000u); float cs_arg3 = pls::game::cs_f32(0x42740000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
pls::cs::String v_explain_2158 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_fd683372658feff4>>(v_lineupData_1829); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0ee8c20531783d1b(cs_receiver); }());
std::int32_t v_num5_2201 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3aull));
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_87fb4d668ea5580b> { return cs_049b13b83157cd05(); }()); pls::game::cs_require(cs_target)->cs_5d81c03afa7f452c = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); float cs_arg0 = pls::game::cs_f32(0x43200000u); float cs_arg1 = static_cast<float>(v_num5_2201); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_33bd53255618fce1(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x22ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2be5ebb4744281a0(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfeull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_57d9a00224068c1c(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6c80e48b0bf350ca(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); pls::cs::String cs_arg0 = v_explain_2158; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e3fe9411871b8a7e(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a0d538f5ac080fc1(cs_receiver); }());
std::int32_t v_height_2432 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_42908a7b6fab813f(cs_receiver); }());
if (([&]() -> bool { auto cs_left = v_height_2432; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num5_2201; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::assets::baked_array<std::int32_t>("d51e48762bddbcdf57a692a84699c60601ff47656b993f41ed325e808706e8a4"); pls::game::cs_require(cs_target)->cs_5145f5183f9e37e4 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_height_2432; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num5_2201; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::assets::baked_array<std::int32_t>("b7cfac5dfb1a2d763e6170856ae228c3725c081ee5767083aedd9af53a88dbe5"); pls::game::cs_require(cs_target)->cs_5145f5183f9e37e4 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_value = pls::assets::baked_array<std::int32_t>("a70e770ed15a63930146415eac3c9c49dedae9aa2574d0f7ff8b90ea0d3c9188"); pls::game::cs_require(cs_target)->cs_5145f5183f9e37e4 = cs_value; return cs_value; }());
}
}
std::int32_t v_num6_2710 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a238febfe0fec26; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::sub_i32(cs_left,cs_right); }());
if ((([&]() -> bool { auto cs_left = v_num6_2710; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
std::int32_t v_num7_2777 = ([&]() -> std::int32_t { auto cs_left = v_num6_2710; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::div_i32(cs_left,cs_right); }());
if (((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e13125ff785351a8; }()))) && ([&]() -> bool { auto cs_left = v_num7_2777; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5145f5183f9e37e4; }())).length(); return (cs_left >= cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_e13125ff785351a8 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num7_2777; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5145f5183f9e37e4; }())).length(); return (cs_left >= cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5145f5183f9e37e4; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num7_2777 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = pls::game::cs_f32(0x00000000u); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num4_1948; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }())); float cs_arg3 = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5145f5183f9e37e4; }()); auto cs_index = v_num7_2777; return cs_array.get_Item(cs_index); }())); auto cs_arg4 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClipRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(v_num3_1919); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num4_1948; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3d92f78fee96bd83(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopClip(); }());
}
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e13125ff785351a8; }())) {
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = v_num2_1524; std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4dull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); return cs_554ec638efacdc2e(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
std::int32_t v_num8_3162 = ([&]() -> std::int32_t { auto cs_left = v_num2_1524; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6dull)); return pls::cs::add_i32(cs_left,cs_right); }());
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e13125ff785351a8; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4full)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4full)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4full)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num_1477; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x31ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(v_num8_3162); float cs_arg2 = pls::game::cs_f32(0x43140000u); float cs_arg3 = pls::game::cs_f32(0x42140000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd9ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xedull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_1477; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x31ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num8_3162; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = pls::game::cs_f32(0x43120000u); float cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6cull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa7ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_1477; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x31ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num8_3162; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = pls::game::cs_f32(0x43120000u); float cs_arg3 = pls::game::cs_f32(0x42080000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfeull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::Array<std::int32_t> v_array_3475 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_d01bf6d528df5d3e>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30bf" u"\x30a4" u"\x30c8" u"\x30eb" u"\x753b" u"\x9762" u"\x3078" u"",7)); return cs_f54ac89fce23e89b(cs_arg0); }()); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num8_3162; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); bool cs_arg5 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }())).length(); return (cs_left == cs_right); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); bool cs_arg7 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1445009bb757ae06(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
pls::cs::Ref<cs_6517d63c01870958> v_opt_3596 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull)); return cs_93c9e5f80bde9aac(cs_arg0); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); std::int32_t cs_arg2 = ([&]() { auto cs_array = v_array_3475; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg3 = ([&]() { auto cs_array = v_array_3475; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg4 = ([&]() { auto cs_array = v_array_3475; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_array_3475; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }())).length(); return (cs_left | cs_right); }()); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = v_opt_3596; return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
([&]() -> void { pls::kairo::Font::PopLocalizeSetting(); }());
}
}
}
// M:system.form.LineupForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)
pls::cs::Array<std::int32_t> cs_1445009bb757ae06(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,std::int32_t v_margin,bool v_cursor) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = v_str; std::int32_t cs_arg2 = v_x; std::int32_t cs_arg3 = v_y; std::int32_t cs_arg4 = v_anchor; bool cs_arg5 = v_active; std::int32_t cs_arg6 = v_margin; bool cs_arg7 = v_cursor; pls::cs::Ref<pls::kairo::FormBase> cs_arg8 = cs_this; std::int32_t cs_arg9 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b8a6cd3430fb5981; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_03a81c0c58f1d2f9(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
}
// M:system.form.LineupForm.Finish
bool cs_4cbf34065e9c29cc(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2951e25803cf3104(cs_receiver); }());
if (([&]() { auto cs_left = pls::cs::box(cs_a251c18c9d0f913d()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_a251c18c9d0f913d()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9cd9f49f64199fc(cs_receiver); }());
}
([&]() { auto cs_value = pls::cs::Ref<cs_b728593e3dcffe31>{}; cs_a251c18c9d0f913d() = cs_value; return cs_value; }());
pls::cs::Ref<cs_e00832a42e12ec3b> v_instance_3959 = ([&]() -> pls::cs::Ref<cs_e00832a42e12ec3b> { return cs_9cfcc2afb24b5e63(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_1ab688350081022a>>(v_instance_3959); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_04c28d155861f704(cs_receiver); }());
return true;
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
// M:system.form.LineupForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t cs_f2e4ff8d5073c2eb(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,std::int32_t v_type,std::int32_t v_index) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
std::int32_t v_num_5023 = v_type;
if (([&]() -> bool { auto cs_left = v_num_5023; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); return (cs_left != cs_right); }())) {

} else {
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }());
}
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f0ea1319d9b511eb(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:system.form.LineupForm.Init
bool cs_fd09666c1ad0b529(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f2be821373eb0add(cs_receiver); }());
pls::cs::Ref<cs_e00832a42e12ec3b> v_instance_965 = ([&]() -> pls::cs::Ref<cs_e00832a42e12ec3b> { return cs_9cfcc2afb24b5e63(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { pls::cs::String cs_arg0 = pls::cs::String{}; pls::cs::String cs_arg1 = pls::cs::String{}; pls::cs::String cs_arg2 = pls::cs::String{}; pls::cs::String cs_arg3 = pls::cs::String{}; pls::cs::String cs_arg4 = pls::cs::String{}; pls::cs::String cs_arg5 = pls::cs::String{}; pls::cs::String cs_arg6 = pls::cs::String{}; return cs_63b2bd45669dab69(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_530b5df6d7de28c3(cs_receiver,cs_arg0); }()); cs_a251c18c9d0f913d() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_a251c18c9d0f913d()); pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x006c" u"\x0069" u"\x006e" u"\x0065" u"\x0075" u"\x0070" u"\x005f" u"\x006c" u"\x0061" u"\x0079" u"\x006f" u"\x0075" u"\x0074" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",17)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6ec7ac2b50afb0b0(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_1ab688350081022a>>(v_instance_965); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_39cb7b83aa99de82(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_abcd3f40ba2c255e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }())).length(); pls::game::cs_require(cs_target)->cs_e5f85072dd4bae90 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d01bf6d528df5d3e>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a6e481b168e6fc62(cs_receiver); }());
return true;
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
std::int32_t v_num_5456 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_4ed30b03deb528a2(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc1c42d4d7e082e0; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num2_5492 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_4ed30b03deb528a2(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc1c42d4d7e082e0; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num_5456; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num2_5492; return cs_array.get_Item(cs_index); }()); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:system.form.LineupForm.SetTouchValue(System.Int32,System.Int32)
void cs_784b75a2e8fe91ae(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,std::int32_t v_type,std::int32_t v_value) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
switch (v_type) {
case 131072:
{
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_e5f85072dd4bae90 = cs_value; return cs_value; }());
break;
}
default:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3d1ead99a7eb01b8(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
}
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
// M:system.form.LineupForm.Update
bool cs_6ee8d12c93887b93(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_25913418bfe51bb8(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a238febfe0fec26; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_3a238febfe0fec26 = cs_value; return cs_value; }());
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e13125ff785351a8; }())) {
std::int32_t v_num_4239 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_num_4239; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = v_num_4239; return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_e5f85072dd4bae90 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num_4239; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = v_num_4239; return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_e5f85072dd4bae90 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }()))) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }())).length(); return (cs_left < cs_right); }())) {
([&]() -> bool { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_fd683372658feff4>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }()); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_93bf009f197e5d4a(cs_receiver); }()); return cs_25bba6e14d51039b(cs_arg0); }());
} else {
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(); }());
}
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4887f44792cc883c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawAllForms(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d01bf6d528df5d3e>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a6e481b168e6fc62(cs_receiver); }());
return true;
}
}
}
// M:system.form.MatchForm._draw(kairo.unity.ui.Graphics)
void cs_e3c23e4f2567a056(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_feba1717d60b5691; }())) {
return;
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c080baf09a2b7f6e(cs_receiver,cs_arg0); }())))) {
pls::cs::Ref<pls::kairo::FormBase> v_topForm_2782 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4887f44792cc883c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_topForm_2782); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left != cs_right); }())) {
return;
}
pls::cs::Ref<cs_a2cea92715051fa5> v_subForm_2882 = pls::cs::unbox<pls::cs::Ref<cs_a2cea92715051fa5>>(pls::cs::box(v_topForm_2782));
if (((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_a2cea92715051fa5>>(v_subForm_2882); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4214a8e7a6aa2068(cs_receiver); }()))) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_subForm_2882; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f99225d8bef89680; }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2d548f3728d740; }()); return (cs_left != cs_right); }()))) {
return;
}
for (std::int32_t v_num_3001 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4887f44792cc883c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_3001; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_3001; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_3001 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4887f44792cc883c; }())); std::int32_t cs_arg0 = v_num_3001; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }()); v_topForm_2782 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_topForm_2782); auto cs_right = pls::cs::box(cs_this); return cs_left == cs_right; }())) {
break;
}
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_topForm_2782); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left != cs_right); }()) || (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_a2cea92715051fa5>>((pls::cs::unbox<pls::cs::Ref<cs_a2cea92715051fa5>>(pls::cs::box(v_topForm_2782)))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4214a8e7a6aa2068(cs_receiver); }()))))) {
return;
}
}
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0092f5ccddba18bf(cs_receiver); }())))) {
return;
}
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c8207c5e86c5d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && (!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5aa48abd014a25b5; }()))))) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; cs_0454fc66f95c3746(cs_arg0); }());
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_5aa48abd014a25b5 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2d548f3728d740; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2d548f3728d740; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {

}
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
cs_this->cs_d153a1a8d9bea631 = ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_3855bfc5096e5e16>>> { pls::cs::Array<std::int32_t> cs_arg0 = pls::assets::baked_array<std::int32_t>("84df5fdee7c18e2e51accfd96b4a5784edcb88801ab8d2129a8bf9d7cf98b8ad"); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_3855bfc5096e5e16>>>>(cs_arg0); }());
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x388ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
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
cs_this->cs_d153a1a8d9bea631 = ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_3855bfc5096e5e16>>> { pls::cs::Array<std::int32_t> cs_arg0 = pls::assets::baked_array<std::int32_t>("84df5fdee7c18e2e51accfd96b4a5784edcb88801ab8d2129a8bf9d7cf98b8ad"); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_3855bfc5096e5e16>>>>(cs_arg0); }());
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x388ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
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
// M:system.form.MatchForm.Draw(kairo.unity.ui.Graphics)
void cs_ea7e56a5733aa227(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d85e674b28736422(cs_receiver,cs_arg0); }());
std::int32_t v_num_2222 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4bb5c3a6226854eb; }());
std::int32_t v_num2_2239 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86deab007f9c32fe; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4887f44792cc883c; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }())); auto cs_right = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ea5db026197fd848; }())); return cs_left == cs_right; }())) {
([&]() { auto cs_old = v_num2_2239; auto cs_rhs = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_819bdeccec161577(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2d548f3728d740; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num2_2239 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return (cs_left > cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_old = v_num_2222; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_2222 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num2_2239; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num2_2239 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_num_2222; std::int32_t cs_arg1 = v_num2_2239; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
pls::cs::run_finally([&]() -> void { try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c63e265fb6ff73e9>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e3c23e4f2567a056(cs_receiver,cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_871) {auto cs_exception_871=pls::cs::capture_exception(cs_caught_871);
if(pls::cs::exception_is(cs_exception_871,"System.Exception")) {{

}}
else {throw;} } }, [&]() {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());
});
}
}
}
// M:system.form.MatchForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)
pls::cs::Array<std::int32_t> cs_6eb22d59c1b6ff83(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,std::int32_t v_margin,bool v_cursor) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = v_str; std::int32_t cs_arg2 = v_x; std::int32_t cs_arg3 = v_y; std::int32_t cs_arg4 = v_anchor; bool cs_arg5 = v_active; std::int32_t cs_arg6 = v_margin; bool cs_arg7 = v_cursor; pls::cs::Ref<pls::kairo::FormBase> cs_arg8 = cs_this; std::int32_t cs_arg9 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_17a1d296b3a77b16; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_03a81c0c58f1d2f9(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
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
// M:system.form.MatchForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t cs_67dd227a98626429(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,std::int32_t v_type,std::int32_t v_index) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
switch (v_type) {
case 131072:
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c63b4493a85935e; }());
}
case 196608:
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_734678a50ebceb4a; }());
}
default:
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f0ea1319d9b511eb(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}
}
// M:system.form.MatchForm.Init
bool cs_57c70e6e7991c22c(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f2be821373eb0add(cs_receiver); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2d548f3728d740; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {

} else if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2d548f3728d740; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c63e265fb6ff73e9>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fe024bdc277f72eb(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c63e265fb6ff73e9>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e882a89810a20b62(cs_receiver); }());
return true;
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
std::int32_t v_num_6033 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_819bdeccec161577(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2d548f3728d740; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num2_6069 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_819bdeccec161577(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2d548f3728d740; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c8207c5e86c5d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num2_6069 = cs_value; return cs_value; }())); v_num_6033 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num_6033; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num2_6069; return cs_array.get_Item(cs_index); }()); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
// M:system.form.MatchForm.SetTouchValue(System.Int32,System.Int32)
void cs_138177c5ca8d7e75(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,std::int32_t v_type,std::int32_t v_value) { cs_init_c63e265fb6ff73e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
switch (v_type) {
case 131072:
{
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_8c63b4493a85935e = cs_value; return cs_value; }());
break;
}
case 196608:
{
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_734678a50ebceb4a = cs_value; return cs_value; }());
break;
}
default:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3d1ead99a7eb01b8(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
}
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { pls::cs::Ref<cs_4c145fe8f008af05> cs_arg0 = cs_this; return cs_bab91f84bee2e3d9(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_9439af5fa0c1f93c = cs_value; return cs_value; }());
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
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x38aull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
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
// M:system.form.RestoreForm.Draw(kairo.unity.ui.Graphics)
void cs_92c8ac080808b50a(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_7a8a85ab4c0396df();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d85e674b28736422(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15e2ffc127d2f4c2; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; cs_0454fc66f95c3746(cs_arg0); }());
}
}
}
}
// M:system.form.RestoreForm.Init
bool cs_c2191f4ad81242f9(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this) { cs_init_7a8a85ab4c0396df();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f2be821373eb0add(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(u""); pls::cs::String cs_arg1 = pls::cs::String(u""); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_15e2ffc127d2f4c2 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_89c0d586cfe20341>>(([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_8be9de4464439ca3 : pls::cs::Object{pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(cs_this,v);}void release_edges()override{pls::cs::Object::release_edges();cs_this.reset();}void Invoke(){{
pls::cs::Ref<cs_6ee7d14059be1acf> v_instance_578 = ([&]() -> pls::cs::Ref<cs_6ee7d14059be1acf> { return cs_f8eb247e2413618b(); }());
([&]() { auto cs_target = cs_this; auto cs_value = ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_fa01867c9c048464>>(v_instance_578); auto cs_value_storage_873_owner=cs_this;auto& cs_value_storage_873=pls::game::cs_require(cs_value_storage_873_owner)->cs_3e466a3cb07b200e;auto& cs_arg0 = cs_value_storage_873; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_dabb624ad9818668(cs_receiver,cs_arg0); }()) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)))); pls::game::cs_require(cs_target)->cs_15e2ffc127d2f4c2 = cs_value; return cs_value; }());
}}};auto cs_closure=pls::cs::make_ref<cs_closure_8be9de4464439ca3>();cs_closure->cs_this=cs_this;return pls::cs::Delegate<void()>::bind_identity(cs_closure,cs_this.get(),std::string("M:system.form.RestoreForm.Init:545"),[weak=std::weak_ptr<cs_closure_8be9de4464439ca3>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); return cs_6ac8ad3def9eea9e(cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b9636031b790b537(cs_receiver); }());
return true;
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
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ad2f01fccd9369f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3e466a3cb07b200e; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3e466a3cb07b200e; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d659571885cb8cb8(cs_receiver,cs_arg0); }());
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
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x7533" u"\x8acb" u"\x0020" u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"",14)); return cs_f54ac89fce23e89b(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_cf93b6d0c87591a9 = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_4e08203868786b3e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0041" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x3067" u"\x000a" u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x7533" u"\x8acb" u"\x3057" u"\x305f" u"\x3088" u"\x0021" u"\x000a" u"\x627f" u"\x8a8d" u"\x3057" u"\x3066" u"\x306d" u"\x3002" u"",37)); return cs_f54ac89fce23e89b(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_6bcda45671e82301 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0041" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x3092" u"\x30a4" u"\x30f3" u"\x30b9" u"\x30c8" u"\x30fc" u"\x30eb" u"\x3057" u"\x3066" u"\x000a" u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x3067" u"\x000a" u"\x0049" u"\x0044" u"\xff1a" u"\x300c" u"\x003c" u"\x0030" u"\x003e" u"\x300d" u"\x000a" u"\x3092" u"\x63a2" u"\x3057" u"\x3066" u"\x306d" u"\x3002" u"\x000a" u"\x000a" u"\x0044" u"\x004c" u"\x306f" u"\x3053" u"\x3063" u"\x3061" u"\x3060" u"\x3088" u"\x000a" u"",60)); return cs_f54ac89fce23e89b(cs_arg0); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"\x002f" u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x002f" u"\x003f" u"\x0067" u"\x006d" u"\x003d" u"",31)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::generated::cs_efcdf5d0d7b2cdc2()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0064" u"\x006c" u"\x003d" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"",9)); return pls::cs::String::concat(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_604e4b1ef0997a4e = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0046" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x0020" u"\x0052" u"\x0065" u"\x0071" u"\x0075" u"\x0065" u"\x0073" u"\x0074" u"\x0020" u"\x0028" u"\x0044" u"\x0072" u"\x0065" u"\x0061" u"\x006d" u"\x0020" u"\x0048" u"\x006f" u"\x0075" u"\x0073" u"\x0065" u"\x0020" u"\x0044" u"\x0061" u"\x0079" u"\x0073" u"\x0029" u"",33)); return cs_f54ac89fce23e89b(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_cf93b6d0c87591a9 = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_4e08203868786b3e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0049" u"\x0027" u"\x0064" u"\x0020" u"\x006c" u"\x0069" u"\x006b" u"\x0065" u"\x0020" u"\x0074" u"\x006f" u"\x0020" u"\x0062" u"\x0065" u"\x0020" u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x0073" u"\x0020" u"\x0069" u"\x006e" u"\x0020" u"\x0044" u"\x0072" u"\x0065" u"\x0061" u"\x006d" u"\x0020" u"\x0048" u"\x006f" u"\x0075" u"\x0073" u"\x0065" u"\x0020" u"\x0044" u"\x0061" u"\x0079" u"\x0073" u"\x0020" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0041" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x002e" u"\x0020" u"\x0050" u"\x006c" u"\x0065" u"\x0061" u"\x0073" u"\x0065" u"\x0020" u"\x0061" u"\x0070" u"\x0070" u"\x0072" u"\x006f" u"\x0076" u"\x0065" u"\x0020" u"\x006d" u"\x0079" u"\x0020" u"\x0072" u"\x0065" u"\x0071" u"\x0075" u"\x0065" u"\x0073" u"\x0074" u"\x0021" u"",82)); return cs_f54ac89fce23e89b(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_6bcda45671e82301 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0054" u"\x0072" u"\x0079" u"\x0020" u"\x0044" u"\x0072" u"\x0065" u"\x0061" u"\x006d" u"\x0020" u"\x0048" u"\x006f" u"\x0075" u"\x0073" u"\x0065" u"\x0020" u"\x0044" u"\x0061" u"\x0079" u"\x0073" u"\x0020" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0041" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x0020" u"\x0061" u"\x006e" u"\x0064" u"\x0020" u"\x0073" u"\x0065" u"\x0061" u"\x0072" u"\x0063" u"\x0068" u"\x0020" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0074" u"\x0068" u"\x0065" u"\x0020" u"\x0049" u"\x0044" u"\x0020" u"\x0022" u"\x003c" u"\x0030" u"\x003e" u"\x0022" u"\x0020" u"\x0074" u"\x006f" u"\x0020" u"\x0066" u"\x0069" u"\x006e" u"\x0064" u"\x0020" u"\x006d" u"\x0065" u"\x002e" u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"\x0059" u"\x006f" u"\x0075" u"\x0020" u"\x0063" u"\x0061" u"\x006e" u"\x0020" u"\x0064" u"\x006f" u"\x0077" u"\x006e" u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"\x0020" u"\x0074" u"\x0068" u"\x0065" u"\x0020" u"\x0061" u"\x0070" u"\x0070" u"\x0020" u"\x0068" u"\x0065" u"\x0072" u"\x0065" u"\x003a" u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",114)); return cs_f54ac89fce23e89b(cs_arg0); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"\x002f" u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x002f" u"\x003f" u"\x0067" u"\x006d" u"\x003d" u"",31)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::generated::cs_efcdf5d0d7b2cdc2()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0064" u"\x006c" u"\x003d" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"",9)); return pls::cs::String::concat(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_604e4b1ef0997a4e = cs_value; return cs_value; }());
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = pls::cs::String(u""); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_aaefb5b9fae0397e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_617d9d7e65ae6487 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2b38757bf00583cf = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_c9cc587d986ccc18 = cs_value; return cs_value; }());
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = v_friendId; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_8c0cc3bea061f0cd = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = v_name; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_aaefb5b9fae0397e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_state; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_617d9d7e65ae6487 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_minute; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2b38757bf00583cf = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_updated; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_c9cc587d986ccc18 = cs_value; return cs_value; }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aaefb5b9fae0397e; }())); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0008" u"",1)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8ebcc441a59bda9a(cs_receiver,cs_arg0); }())))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aaefb5b9fae0397e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->ToString(); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0008" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_aaefb5b9fae0397e = cs_value; return cs_value; }());
}
}
}
// M:system.friend.ui.Friend.Deserialize(java.io.InputStream)
void cs_ab2f2c9f1fce2e02(pls::cs::Ref<cs_9465f7541f51c47e> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_9465f7541f51c47e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_8c0cc3bea061f0cd = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_617d9d7e65ae6487 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2b38757bf00583cf = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_c9cc587d986ccc18 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_aaefb5b9fae0397e = cs_value; return cs_value; }());
}
}
}
// M:system.friend.ui.Friend.Serialize(java.io.OutputStream)
void cs_440d2f888a8888df(pls::cs::Ref<cs_9465f7541f51c47e> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_9465f7541f51c47e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c0cc3bea061f0cd; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_617d9d7e65ae6487; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b38757bf00583cf; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c9cc587d986ccc18; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aaefb5b9fae0397e; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
}
}
}
// M:system.friend.ui.FriendData.#ctor
void cs_7a28af13c1c2f5ac_init(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) {
cs_this->cs_96e8baf9470c6eef = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull));
cs_this->cs_4e08203868786b3e = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x7533" u"\x8acb" u"\x0020" u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"",14)); return cs_f54ac89fce23e89b(cs_arg0); }());
cs_this->cs_6bcda45671e82301 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0041" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x3067" u"\x000a" u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x7533" u"\x8acb" u"\x3057" u"\x305f" u"\x3088" u"\x0021" u"\x000a" u"\x627f" u"\x8a8d" u"\x3057" u"\x3066" u"\x306d" u"\x3002" u"",37)); return cs_f54ac89fce23e89b(cs_arg0); }());
cs_this->cs_cf93b6d0c87591a9 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x7533" u"\x8acb" u"\x0020" u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"",14)); return cs_f54ac89fce23e89b(cs_arg0); }());
cs_this->cs_604e4b1ef0997a4e = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x304a" u"\x4f4f" u"\x307e" u"\x3044" u"\x5922" u"\x7269" u"\x8a9e" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0041" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x3092" u"\x30a4" u"\x30f3" u"\x30b9" u"\x30c8" u"\x30fc" u"\x30eb" u"\x3057" u"\x3066" u"\x000a" u"\x30d5" u"\x30ec" u"\x30f3" u"\x30c9" u"\x3067" u"\x000a" u"\x0049" u"\x0044" u"\xff1a" u"\x300c" u"\x003c" u"\x0030" u"\x003e" u"\x300d" u"\x000a" u"\x3092" u"\x63a2" u"\x3057" u"\x3066" u"\x306d" u"\x3002" u"\x000a" u"\x000a" u"\x0044" u"\x004c" u"\x306f" u"\x3053" u"\x3063" u"\x3061" u"\x3060" u"\x3088" u"\x000a" u"",60)); return cs_f54ac89fce23e89b(cs_arg0); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"\x002f" u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x002f" u"\x003f" u"\x0067" u"\x006d" u"\x003d" u"",31)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::generated::cs_efcdf5d0d7b2cdc2()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0064" u"\x006c" u"\x003d" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"",9)); return pls::cs::String::concat(cs_left,cs_right); }());
cs_this->cs_52a8e080b7bfd117 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull));
cs_this->cs_28588b55de39809d = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull));
cs_this->cs_86537e9773f89c90 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull));
cs_this->cs_265901ac3e38e5a5 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
cs_this->cs_c8c9d3daa8567fa6 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
cs_this->cs_60d30afb5a438553 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
cs_this->cs_be1d7f91510795ac = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return pls::generated::cs_891849d99054b970(cs_arg0); }());
cs_this->cs_c384965fc0d4bd25 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
cs_this->cs_ab8cb0b69ebcac70 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffffffffffffffffull));
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_c20c229ea63037d8> { pls::cs::Array<pls::cs::Ref<pls::generated::cs_c20c229ea63037d8>> cs_arg0 = cs_4d39e0560b934a4f(); pls::cs::Array<std::int32_t> cs_arg1 = cs_e2d16fab426c5d2f(); pls::cs::Array<std::int64_t> cs_arg2 = cs_2f2e8e46132e7fcc(); pls::cs::Array<pls::cs::String> cs_arg3 = cs_1633c4562f4c40eb(); pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_arg4 = cs_01b07286e746610e(); return pls::generated::cs_1ec84b4dfcd94394(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); pls::game::cs_require(cs_target)->cs_dc19769b18c674e0 = cs_value; return cs_value; }());
}
}
// M:system.friend.ui.FriendData.CheckRegistFriend
bool cs_dae07ea79e855f60(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b9659319b202661(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()));
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::conv_i32(v_num7_12310); std::int32_t cs_arg1 = pls::cs::conv_i32(v_num8_12362); std::int32_t cs_arg2 = pls::cs::conv_i32(v_num9_12414); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
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
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_dxAlias_12072); float cs_arg1 = static_cast<float>(v_num_12090); float cs_arg2 = static_cast<float>(v_w); float cs_arg3 = static_cast<float>(v_num10_12861); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
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
return ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_this); pls::cs::Ref<cs_9465f7541f51c47e> cs_arg0 = pls::cs::Ref<cs_9465f7541f51c47e>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_aa0325ad66b87a4e(cs_receiver,cs_arg0); }());
}
}
}
// M:system.friend.ui.FriendData.GetCurrentForm(system.friend.ui.Friend)
pls::cs::Ref<cs_7eeafe36a056776c> cs_aa0325ad66b87a4e(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this,pls::cs::Ref<cs_9465f7541f51c47e> v_friend) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_dae07ea79e855f60(cs_receiver); }())))) {
pls::cs::Ref<cs_7eeafe36a056776c> v_friendForm_14360 = ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_933732b97e1e3022(cs_arg0); }());
([&]() { auto cs_target = v_friendForm_14360; auto cs_value = v_friend; pls::game::cs_require(cs_target)->cs_0684a6bc733d8cca = cs_value; return cs_value; }());
return v_friendForm_14360;
}
if (([&]() { auto cs_left = pls::cs::box(v_friend); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_933732b97e1e3022(cs_arg0); }());
}
pls::cs::Ref<cs_7eeafe36a056776c> v_friendForm2_14530 = ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_933732b97e1e3022(cs_arg0); }());
([&]() { auto cs_target = v_friendForm2_14530; auto cs_value = v_friend; pls::game::cs_require(cs_target)->cs_0684a6bc733d8cca = cs_value; return cs_value; }());
return v_friendForm2_14530;
}
}
}
// M:system.friend.ui.FriendData.GetFriendID
pls::cs::String cs_9ab9c500b6159399(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_b489b0d33bb37bb8> v_instance_8409 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
if (([&]() { auto cs_left = pls::cs::box(v_instance_8409); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::String(u"");
}
return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_8409); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_047c3ab4bcca9557(cs_receiver); }());
}
}
}
// M:system.friend.ui.FriendData.GetFriendName
pls::cs::String cs_caa414870501fd01(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());
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
std::int32_t v_num_8882 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_52a8e080b7bfd117; }()); return pls::cs::div_i32(cs_left,cs_right); }());
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
// M:system.friend.ui.FriendData.IsEffectiveRegistName(System.String,System.Int32)
bool cs_4a40f2f39745d124(pls::cs::String v_name,std::int32_t v_max) { cs_init_2d2e25a6914f7709();
{
if (([&]() { auto cs_left = pls::cs::box(v_name); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return false;
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_name; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return false;
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_name; return pls::cs::string_trim(cs_arg0); }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return false;
}
if ((([&]() -> bool { auto cs_left = v_max; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_name; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = v_max; return (cs_left > cs_right); }()))) {
return false;
}
try {
pls::cs::String v_text_13885 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_name; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0055" u"\x0054" u"\x0046" u"\x002d" u"\x0038" u"",5)); return cs_b22fe40aa09785ca(cs_arg0,cs_arg1); }());
if (([&]() { auto cs_left = pls::cs::box(v_text_13885); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return false;
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_13885; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return false;
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text_13885; return pls::cs::string_trim(cs_arg0); }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return false;
}
} catch(const pls::cs::Exception& cs_caught_858) {auto cs_exception_858=pls::cs::capture_exception(cs_caught_858);
if(pls::cs::exception_is(cs_exception_858,"System.Exception")) {{
return false;
}}
else {throw;} }
return true;
}
}
// M:system.friend.ui.FriendData.IsEffectiveRegistName(System.String)
bool cs_ff0c06237c9b0726(pls::cs::String v_name) { cs_init_2d2e25a6914f7709();
{
return ([&]() -> bool { pls::cs::String cs_arg0 = v_name; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return cs_4a40f2f39745d124(cs_arg0,cs_arg1); }());
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_c20c229ea63037d8> { pls::cs::Array<pls::cs::Ref<pls::generated::cs_c20c229ea63037d8>> cs_arg0 = cs_4d39e0560b934a4f(); pls::cs::Array<std::int32_t> cs_arg1 = cs_e2d16fab426c5d2f(); pls::cs::Array<std::int64_t> cs_arg2 = cs_2f2e8e46132e7fcc(); pls::cs::Array<pls::cs::String> cs_arg3 = cs_1633c4562f4c40eb(); pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_arg4 = cs_01b07286e746610e(); return pls::generated::cs_1ec84b4dfcd94394(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); pls::game::cs_require(cs_target)->cs_dc19769b18c674e0 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_c20c229ea63037d8>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }())); pls::cs::Array<std::uint8_t> cs_arg0 = v_data; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_f3dde7064a66be23(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_48e169a17c41b95f(cs_receiver); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_112e7bd8029af781(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
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
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_3595; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c384965fc0d4bd25; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_3778 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3778; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c384965fc0d4bd25; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3778; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3778 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_22115ea4236d0eaa> v_friendPlayTimeData_3847 = pls::cs::unbox<pls::cs::Ref<cs_22115ea4236d0eaa>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c384965fc0d4bd25; }())); std::int32_t cs_arg0 = v_i_3778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_22115ea4236d0eaa>>(v_friendPlayTimeData_3847); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_3595; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2044571a728aaa71(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3595); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_3595 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_3595; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_j_4217 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_4217; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_4217; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_4217 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9465f7541f51c47e> v_friend_4274 = pls::cs::unbox<pls::cs::Ref<cs_9465f7541f51c47e>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); std::int32_t cs_arg0 = v_j_4217; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9465f7541f51c47e>>(v_friend_4274); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_3595; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_440d2f888a8888df(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3595); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
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
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = v_name; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
// M:system.friend.ui.FriendData.UnpackFriendBinalyData
void cs_48e169a17c41b95f(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this) { cs_init_2d2e25a6914f7709();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{try{
pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> v_byteArrayInputStream_4687 = pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{};
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
throw pls::cs::ReturnFlow<void>{};
}
pls::cs::run_finally([&]() {{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c384965fc0d4bd25; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_ccc6918433418e24(cs_receiver); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_4687 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>>(v_byteArrayInputStream_4687); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_bb7347310506b971(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
std::int32_t v_num_4975 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_4687; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
for (std::int32_t v_i_5037 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5037; auto cs_right = v_num_4975; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5037; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5037 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_22115ea4236d0eaa> v_friendPlayTimeData_5090 = ([&]() -> pls::cs::Ref<cs_22115ea4236d0eaa> { return cs_624a0425464d274a(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_22115ea4236d0eaa>>(v_friendPlayTimeData_5090); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_4687; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9b78afe85b06708d(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c384965fc0d4bd25; }())); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_friendPlayTimeData_5090); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_4687); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_ccc6918433418e24(cs_receiver); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_4687 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>>(v_byteArrayInputStream_4687); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_bb7347310506b971(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
std::int32_t v_num2_5457 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_4687; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());
for (std::int32_t v_j_5520 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_5520; auto cs_right = v_num2_5457; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_5520; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_5520 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9465f7541f51c47e> v_friend_5562 = ([&]() -> pls::cs::Ref<cs_9465f7541f51c47e> { return cs_2ce578f5724575d0(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9465f7541f51c47e>>(v_friend_5562); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_4687; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ab2f2c9f1fce2e02(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_friend_5562); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_byteArrayInputStream_4687); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
}}, [&]() {

});
}catch(const pls::cs::ReturnFlow<void>& cs_return){return;}}
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
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_cee7c1140c10ee97 = cs_value; return cs_value; }());
}
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_15044 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
if ((((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_daf9583746fd0c6a; }()))) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_60d30afb5a438553; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_86537e9773f89c90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_15044); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); return cs_933732b97e1e3022(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
} else if ((((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1bddb24fb5cf7315; }()))) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc19769b18c674e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_52a8e080b7bfd117; }()); return (cs_left >= cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_52a8e080b7bfd117; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_15044); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_7eeafe36a056776c> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return cs_933732b97e1e3022(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
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
{try{
pls::cs::Ref<pls::generated::cs_fb60578b3098a284> v_byteArrayOutputStream_3229 = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{};
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_3229 = cs_value; return cs_value; }());
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3229); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }())};
}}, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_byteArrayOutputStream_3229); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3229); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{}; v_byteArrayOutputStream_3229 = cs_value; return cs_value; }());
});
}catch(const pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<std::uint8_t>>();}
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
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = v_friendId; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2940d449a6dc2c58 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_minute; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_db96c721c151249c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_state; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_0ba613afa6875a18 = cs_value; return cs_value; }());
}
}
// M:system.friend.ui.FriendPlayTimeData.Deserialize(java.io.InputStream)
void cs_9b78afe85b06708d(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_22115ea4236d0eaa();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }()); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_2940d449a6dc2c58 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_db96c721c151249c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_0ba613afa6875a18 = cs_value; return cs_value; }());
}
}
}
// M:system.friend.ui.FriendPlayTimeData.Serialize(java.io.OutputStream)
void cs_2044571a728aaa71(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_22115ea4236d0eaa();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2940d449a6dc2c58; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_db96c721c151249c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ba613afa6875a18; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
}
}
}
// M:system.KairoService.#ctor
pls::cs::Ref<cs_925b3cf054e42b78> cs_f6c1ebd73ba5dcdc() { cs_init_925b3cf054e42b78();
{ auto cs_this = pls::cs::make_ref<cs_925b3cf054e42b78>(); cs_f6c1ebd73ba5dcdc_init(cs_this); return cs_this; }
}
void cs_f6c1ebd73ba5dcdc_init(pls::cs::Ref<cs_925b3cf054e42b78> cs_this) {
cs_this->cs_42ee6ef0eb7e8761 = true;
cs_this->cs_25150d256e75d102 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
([&]() { cs_d710b4eaf3ab212a_init(std::static_pointer_cast<cs_b489b0d33bb37bb8>(cs_this)); }());
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_79b2a93539dda8c5() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_08829eb6a4df2a40> { return cs_aaf24b850afadd84(); }()); cs_4fd143d9a5ab23f5() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_ec8ac507fb495e84> { return cs_b3ac47ebcf5c05fb(); }()); cs_1cc9a669b732975f() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_e00832a42e12ec3b> { return cs_9cfcc2afb24b5e63(); }()); cs_859633da82a2fd50() = cs_value; return cs_value; }());
}
}
// M:system.KairoService.Finish
void cs_15b3a4a01f584c1b(pls::cs::Ref<cs_925b3cf054e42b78> cs_this) { cs_init_925b3cf054e42b78();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(cs_4fd143d9a5ab23f5()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_4fd143d9a5ab23f5()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fd462548e4e21992(cs_receiver); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(std::static_pointer_cast<cs_b489b0d33bb37bb8>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_706bcbd9776cf6ef(cs_receiver); }());
}
}
}
// M:system.KairoService.GetInstance
pls::cs::Ref<cs_925b3cf054e42b78> cs_fd047093624d8d65() { cs_init_925b3cf054e42b78();
{
if (([&]() { auto cs_left = pls::cs::box(cs_11e5ce60ddaa567b()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_925b3cf054e42b78> { return cs_f6c1ebd73ba5dcdc(); }()); cs_11e5ce60ddaa567b() = cs_value; return cs_value; }());
}
return pls::cs::unbox<pls::cs::Ref<cs_925b3cf054e42b78>>(pls::cs::box(cs_11e5ce60ddaa567b()));
}
}
// M:system.KairoService.OnLoadGame(java.io.InputStream)
void cs_6e4860eac11a2eaf(pls::cs::Ref<cs_925b3cf054e42b78> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_925b3cf054e42b78();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_4fd143d9a5ab23f5()); pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; bool cs_arg1 = true; return pls::generated::cs_e0ccb4d263b167c0(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_52c48544109f9d2d(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_1cc9a669b732975f()); pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; bool cs_arg1 = true; return pls::generated::cs_e0ccb4d263b167c0(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_54f11f2e695dcaff(cs_receiver,cs_arg0); }());
}
}
}
// M:system.KairoService.OnNewGame(System.Boolean)
void cs_ee25274aa8cb5d52(pls::cs::Ref<cs_925b3cf054e42b78> cs_this,bool v_take) { cs_init_925b3cf054e42b78();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_4fd143d9a5ab23f5()); bool cs_arg0 = v_take; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_83421b64347901dd(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_1cc9a669b732975f()); bool cs_arg0 = v_take; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_576c42e42f2dbf1d(cs_receiver,cs_arg0); }());
}
}
}
// M:system.KairoService.OnWrite(java.io.OutputStream)
void cs_aae6871b403a2662(pls::cs::Ref<cs_925b3cf054e42b78> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_925b3cf054e42b78();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_4fd143d9a5ab23f5()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_0c7e726b5f1c3198(); }()); bool cs_arg2 = true; pls::generated::cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_1cc9a669b732975f()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_017d03dcf50da0a1(cs_receiver); }()); bool cs_arg2 = true; pls::generated::cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_1ab688350081022a>>(cs_859633da82a2fd50()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cb1becc75b26486d(cs_receiver); }()); bool cs_arg2 = true; pls::generated::cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
// M:system.KairoService.OnWriteGame(java.io.OutputStream)
void cs_5ebe1d2502f4ce47(pls::cs::Ref<cs_925b3cf054e42b78> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_925b3cf054e42b78();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_4fd143d9a5ab23f5()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_9d8c67a5fdbb3c7d(); }()); bool cs_arg2 = true; pls::generated::cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2d2e25a6914f7709>>(cs_1cc9a669b732975f()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d21f2be38b215e49(cs_receiver); }()); bool cs_arg2 = true; pls::generated::cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
// M:system.KairoService.Save
void cs_9006c280cca35190(pls::cs::Ref<cs_925b3cf054e42b78> cs_this) { cs_init_925b3cf054e42b78();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_79b2a93539dda8c5()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
}
}
}
// M:system.KairoService.SaveAll
void cs_87141379d7c66315(pls::cs::Ref<cs_925b3cf054e42b78> cs_this) { cs_init_925b3cf054e42b78();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_79b2a93539dda8c5(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_79b2a93539dda8c5()); bool cs_arg0 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1a8f5c64147b3e5b(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_79b2a93539dda8c5()); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1a8f5c64147b3e5b(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(cs_79b2a93539dda8c5()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
}
}
}
// M:system.KairoService.Update
void cs_5e6fee4146930115(pls::cs::Ref<cs_925b3cf054e42b78> cs_this) { cs_init_925b3cf054e42b78();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(std::static_pointer_cast<cs_b489b0d33bb37bb8>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9ca5e184bd541bee(cs_receiver); }());
if ((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_98f6c84566bf4254; }())))) {
return;
}
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_3856 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
pls::cs::Ref<pls::kairo::FormBase> v_form_3906 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_3856); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }());
if ((((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_42ee6ef0eb7e8761; }()) && ([&]() { pls::cs::Ref<cs_89c0d586cfe20341> cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0f9909df8253bfe0; }()); pls::cs::Ref<cs_89c0d586cfe20341> cs_right = pls::cs::Ref<cs_89c0d586cfe20341>{}; return cs_f0878a49dfa6a661(cs_left,cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_form_3906); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_25150d256e75d102; }()); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_form_3906); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()))) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_4fd143d9a5ab23f5()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_54b9118ddf48a0fd(cs_receiver); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_24c36b76e15982e9 : pls::cs::Object{pls::cs::Ref<cs_925b3cf054e42b78> cs_this;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(cs_this,v);}void release_edges()override{pls::cs::Object::release_edges();cs_this.reset();}void Invoke(){{
pls::cs::run_finally([&]() -> void { try {
pls::cs::Ref<cs_6ee7d14059be1acf> v_instance2_4173 = ([&]() -> pls::cs::Ref<cs_6ee7d14059be1acf> { return cs_f8eb247e2413618b(); }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance2_4173); bool cs_arg0 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4351661fbbfaa7c4(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance2_4173); bool cs_arg0 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1bfb44d4e16bae10(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance2_4173); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_54b9118ddf48a0fd(cs_receiver); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_42ee6ef0eb7e8761 = cs_value; return cs_value; }());
}
} catch(const pls::cs::Exception& cs_caught_887) {auto cs_exception_887=pls::cs::capture_exception(cs_caught_887);
if(pls::cs::exception_is(cs_exception_887,"System.Exception")) {auto v_t_4406=cs_exception_887;{
if (pls::generated::cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_4406; return pls::generated::cs_b686603f380b2527(cs_arg0); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_42ee6ef0eb7e8761 = cs_value; return cs_value; }());
}}
else {throw;} } }, [&]() {
([&]() { auto cs_value = true; cs_7a902abf262c4ddf() = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_89c0d586cfe20341>{}; pls::game::cs_require(cs_target)->cs_0f9909df8253bfe0 = cs_value; return cs_value; }());
});
}}};auto cs_closure=pls::cs::make_ref<cs_closure_24c36b76e15982e9>();cs_closure->cs_this=cs_this;return pls::cs::Delegate<void()>::bind_identity(cs_closure,cs_this.get(),std::string("M:system.KairoService.Update:4117"),[weak=std::weak_ptr<cs_closure_24c36b76e15982e9>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); return cs_6ac8ad3def9eea9e(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_0f9909df8253bfe0 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_89c0d586cfe20341>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0f9909df8253bfe0; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b9636031b790b537(cs_receiver); }());
try {
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x14ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_888) {auto cs_exception_888=pls::cs::capture_exception(cs_caught_888);
if(pls::cs::exception_is(cs_exception_888,"System.Exception")) {{

}}
else {throw;} }
if (([&]() { pls::cs::Ref<cs_89c0d586cfe20341> cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0f9909df8253bfe0; }()); pls::cs::Ref<cs_89c0d586cfe20341> cs_right = pls::cs::Ref<cs_89c0d586cfe20341>{}; return cs_dfac0766ed9ac2a3(cs_left,cs_right); }())) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_3856); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_f52c904bea265acc> { return cs_5fbebbed5279ae0b(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
}
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(cs_4fd143d9a5ab23f5()); bool cs_arg0 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1bfb44d4e16bae10(cs_receiver,cs_arg0); }());
}
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_form_3906); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }()); pls::game::cs_require(cs_target)->cs_25150d256e75d102 = cs_value; return cs_value; }());
}
}
}
// M:system.KairoText.LT(System.String,System.Int32)
pls::cs::String cs_62153521fbb1f7f8(pls::cs::String v_text,std::int32_t v_arg) { cs_init_851a96be86c28dd2();
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; return cs_f54ac89fce23e89b(cs_arg0); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { std::int32_t cs_arg0 = v_arg; return pls::generated::cs_420fb62b9e208a96(cs_arg0); }()); return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());
}
}
// M:system.KairoText.LT(System.String,System.String)
pls::cs::String cs_f026ffcc06857429(pls::cs::String v_text,pls::cs::String v_arg) { cs_init_851a96be86c28dd2();
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; return cs_f54ac89fce23e89b(cs_arg0); }()); pls::cs::String cs_arg1 = v_arg; return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());
}
}
// M:system.KairoText.LT(System.String)
pls::cs::String cs_f54ac89fce23e89b(pls::cs::String v_text) { cs_init_851a96be86c28dd2();
{
pls::cs::String v_text2_261 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_text2_261; auto cs_right = v_text; return (cs_left != cs_right); }())) {
return v_text2_261;
}
if (([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }())) {
return v_text;
}
if ((!(cs_66520490d812bf5b()))) {
for (std::int32_t v_i_454 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_454; auto cs_right = (cs_99f86cd66d5ccef0()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_454; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_454 = cs_new; return cs_old; }())) {
for (std::int32_t v_j_514 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_514; auto cs_right = (([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_i_454; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_514; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_514 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_i_454; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_514; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_i_454; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_514; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x000a" u"",1)); pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
([&]() { auto cs_value = true; cs_66520490d812bf5b() = cs_value; return cs_value; }());
}
pls::cs::String v_value_714 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x000a" u"",1)); pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());
std::int32_t v_num_769 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
for (std::int32_t v_k_790 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_790; auto cs_right = (cs_99f86cd66d5ccef0()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_790; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_790 = cs_new; return cs_old; }())) {
if ((([&]() -> bool { auto cs_left = v_num_769; auto cs_right = (([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_k_790; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_k_790; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = v_value_714; return pls::game::cs_string_equals(cs_arg0,cs_arg1); }()))) {
return ([&]() { auto cs_array = ([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_k_790; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num_769; return cs_array.get_Item(cs_index); }());
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
// M:system.notification.MyNotify.OnReceiveValue
void cs_e17b9d62b02e038f(pls::cs::Ref<cs_23ed5cbd0e3922f3> cs_this) { cs_init_23ed5cbd0e3922f3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return;
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
// M:system.panel.InputPanel.#ctor(System.String,System.String,System.Int32,System.Int32,System.String)
pls::cs::Ref<cs_90cdc908fbacdc4d> cs_7236fab2e58bd0b3(pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength,std::int32_t v_inputMode,pls::cs::String v_itemName) { cs_init_90cdc908fbacdc4d();
{ auto cs_this = pls::cs::make_ref<cs_90cdc908fbacdc4d>(); cs_7236fab2e58bd0b3_init(cs_this,v_label,v_defaultText,v_maxLength,v_inputMode,v_itemName); return cs_this; }
}
void cs_7236fab2e58bd0b3_init(pls::cs::Ref<cs_90cdc908fbacdc4d> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength,std::int32_t v_inputMode,pls::cs::String v_itemName) {
([&]() { pls::cs::String cs_arg0 = v_label; pls::cs::String cs_arg1 = v_defaultText; std::int32_t cs_arg2 = v_maxLength; std::int32_t cs_arg3 = v_inputMode; pls::cs::String cs_arg4 = v_itemName; cs_6b53a5cdc402f43c_init(std::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this),cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
{

}
}
// M:system.panel.InputPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)
void cs_8bc9aa25aebc3796(pls::cs::Ref<cs_90cdc908fbacdc4d> cs_this,pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod) { cs_init_90cdc908fbacdc4d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8bf13b560e1e05e9>>(std::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this)); pls::cs::Ref<pls::kairo::Canvas> cs_arg0 = v_canvas; pls::cs::Delegate<void(pls::cs::String)> cs_arg1 = v_onFinishMethod; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a3ffc1615f910b95(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
// M:system.surface.GameBanner.#ctor
pls::cs::Ref<cs_af32d28251411c95> cs_11534d928e8399e4() { cs_init_af32d28251411c95();
{ auto cs_this = pls::cs::make_ref<cs_af32d28251411c95>(); cs_11534d928e8399e4_init(cs_this); return cs_this; }
}
void cs_11534d928e8399e4_init(pls::cs::Ref<cs_af32d28251411c95> cs_this) {
([&]() { cs_a1b466bc14363691_init(std::static_pointer_cast<cs_9326c27a92cfea3a>(cs_this)); }());
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }()); pls::game::cs_require(cs_target)->cs_449a72c816bc8b81 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }()); pls::game::cs_require(cs_target)->cs_7098c1837eb30f29 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_4e9b1f0e9e3baf25> { return cs_81e284f6e842da85(); }()); pls::game::cs_require(cs_target)->cs_f7b1fd704bdd2c8a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_a0cf9aef6a251bfd> { return pls::generated::cs_783c2dc4bd688739(); }()); pls::game::cs_require(cs_target)->cs_790b10da4e9ff66f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_a6d9872478ce823a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }()); pls::game::cs_require(cs_target)->cs_522c8c247df0b8bb = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_9104d50d4078e9c9 = cs_value; return cs_value; }());
}
}
// M:system.surface.GameBanner.Draw(kairo.unity.ui.Graphics)
void cs_9d38c5ec25140485(pls::cs::Ref<cs_af32d28251411c95> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_af32d28251411c95();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return;
}
}
}
// M:system.surface.GameBanner.GetInstance
pls::cs::Ref<cs_af32d28251411c95> cs_cb8c524e1144420f() { cs_init_af32d28251411c95();
{
if (([&]() { auto cs_left = pls::cs::box(cs_49cf94cd1a414d1f()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_af32d28251411c95> { return cs_11534d928e8399e4(); }()); cs_49cf94cd1a414d1f() = cs_value; return cs_value; }());
}
return cs_49cf94cd1a414d1f();
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
// M:system.surface.GameBanner.Load
void cs_e60d8493ba30ab4c(pls::cs::Ref<cs_af32d28251411c95> cs_this) { cs_init_af32d28251411c95();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return;
}
}
}
// M:system.surface.GameBanner.OnTouchEvent(kairo.unity.surface.TouchEvent)
void cs_826469405b7c0a34(pls::cs::Ref<cs_af32d28251411c95> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_evt) { cs_init_af32d28251411c95();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_1500 = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
std::int32_t v_type_1534 = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }());
if (([&]() -> bool { auto cs_left = v_type_1534; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left == cs_right); }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_1500; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
pls::cs::String v_text_1622 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6c5020fb7ea0a4fb; }()); auto cs_right = pls::cs::String(std::u16string(u"\x000a" u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"\x002f" u"\x0066" u"\x0072" u"\x0069" u"\x0065" u"\x006e" u"\x0064" u"\x002f" u"\x003f" u"\x0067" u"\x006d" u"\x003d" u"",32)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::generated::cs_efcdf5d0d7b2cdc2()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0064" u"\x006c" u"\x003d" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"\x000a" u"\x000a" u"",11)); return pls::cs::String::concat(cs_left,cs_right); }());
pls::cs::Ref<pls::kairo::IApplication> v_currentApp_1731 = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_1500; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_1838 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
pls::cs::Ref<cs_08829eb6a4df2a40> v_instance2_1891 = ([&]() -> pls::cs::Ref<cs_08829eb6a4df2a40> { return cs_aaf24b850afadd84(); }());
pls::cs::Ref<cs_5df8265429cd2423> v_billingForm_1945 = ([&]() -> pls::cs::Ref<cs_5df8265429cd2423> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_e8ae3ed2ae7db752(cs_arg0); }());
([&]() { auto cs_target = v_billingForm_1945; auto cs_value = ([&]() -> pls::cs::Ref<cs_931908081ea62151> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance2_1891); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_eeb39a8b5e25b72e(cs_receiver,cs_arg0); }()); pls::game::cs_require(cs_target)->cs_c5d00bd651861fba = cs_value; return cs_value; }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_1838); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = v_billingForm_1945; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());
} else {
([&]() -> bool { pls::cs::String cs_arg0 = pls::generated::cs_7f5d05d9a8be3705(); return cs_25bba6e14d51039b(cs_arg0); }());
}
}
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
