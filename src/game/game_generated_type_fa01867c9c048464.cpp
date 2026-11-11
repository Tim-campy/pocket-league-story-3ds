// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_0286a0dbe9da0b33.hpp"
#include "game_generated_type_10edc785c24978fc.hpp"
#include "game_generated_type_11e0490f60fdc166.hpp"
#include "game_generated_type_15f31d4f046b09a8.hpp"
#include "game_generated_type_1fc419a676702252.hpp"
#include "game_generated_type_51fd12cb14e568f9.hpp"
#include "game_generated_type_6ee7d14059be1acf.hpp"
#include "game_generated_type_764e04aa5493d588.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
#include "game_generated_type_925b3cf054e42b78.hpp"
#include "game_generated_type_931908081ea62151.hpp"
#include "game_generated_type_a42daea58251b089.hpp"
#include "game_generated_type_b169f360ee9f1108.hpp"
#include "game_generated_type_b489b0d33bb37bb8.hpp"
#include "game_generated_type_e6ed65290db381ba.hpp"
#include "game_generated_type_fa01867c9c048464.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
#include "generated/portable_generated_type_83a7bc36395d16bd.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::game {

void cs_fa01867c9c048464::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_e92a9e2b4e70e8aa,visitor);pls::cs::trace_value(cs_02fc10f7a3f6285a,visitor);pls::cs::trace_value(cs_7051bba65972fd27,visitor);pls::cs::trace_value(cs_4826f2c7dff1307e,visitor);pls::cs::trace_value(cs_6769193235ceb92f,visitor);}

void cs_fa01867c9c048464::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_e92a9e2b4e70e8aa);pls::cs::release_value(cs_02fc10f7a3f6285a);pls::cs::release_value(cs_7051bba65972fd27);pls::cs::release_value(cs_4826f2c7dff1307e);pls::cs::release_value(cs_6769193235ceb92f);}

void cs_fa01867c9c048464::cs_virtual_d3abbeacfed9ec8c(pls::cs::Array<pls::cs::Array<pls::cs::String>> v_data,pls::cs::String v_paymentProduct,pls::cs::Array<pls::cs::String> v_subscription) {cs_d3abbeacfed9ec8c(pls::cs::static_pointer_cast<cs_fa01867c9c048464>(shared_from_this()),v_data,v_paymentProduct,v_subscription);}

static pls::cs::Ref<cs_925b3cf054e42b78> cs_d59ecb529d3c681c_value{};

static pls::cs::String cs_e9c57a349e970656_value{};

void cs_init_fa01867c9c048464(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_d59ecb529d3c681c_value,visitor);pls::cs::trace_value(cs_e9c57a349e970656_value,visitor);});static pls::cs::TypeInitState state;state.run("system.billing.ui.StoreBase",[](){
cs_d59ecb529d3c681c_value = pls::cs::evaluate_type_initializer_field("F:system.billing.ui.StoreBase.ks_",[&](){return pls::cs::Ref<cs_925b3cf054e42b78>{};});

});}

pls::cs::Ref<cs_925b3cf054e42b78>& cs_d59ecb529d3c681c(){cs_init_fa01867c9c048464();return cs_d59ecb529d3c681c_value;}

pls::cs::String& cs_e9c57a349e970656(){cs_init_fa01867c9c048464();return cs_e9c57a349e970656_value;}

// M:system.billing.ui.StoreBase.#ctor
void cs_e3269488b9d47182_init(pls::cs::Ref<cs_fa01867c9c048464> cs_this) {
cs_this->cs_7051bba65972fd27 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.#ctor:671",pls::cs::List<pls::cs::Ref<cs_15f31d4f046b09a8>>::make());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.#ctor",game);
{}
}
}

// M:system.billing.ui.StoreBase.CallRestoreFlow(System.String@)
bool cs_dabb624ad9818668(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String& v_message) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.CallRestoreFlow(System.String@)",game);
{
try {
pls::cs::Ref<cs_925b3cf054e42b78> v_instance_8927 = ([&]() -> pls::cs::Ref<cs_925b3cf054e42b78> { return cs_fd047093624d8d65(); }());
pls::cs::Ref<cs_6ee7d14059be1acf> v_instance2_8985 = ([&]() -> pls::cs::Ref<cs_6ee7d14059be1acf> { return cs_f8eb247e2413618b(); }());
std::int32_t v_testedValue_9081 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_fa01867c9c048464>>(v_instance2_8985); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_59826646bf6d2707(cs_receiver); }());
if (([&]() -> bool { auto cs_left = v_testedValue_9081; auto cs_right = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = (((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());})) ? ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x5fa9" u"\x5143" u"\x30a8" u"\x30e9" u"\x30fc" u"",5);return cs_literal;}()) : ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0045" u"\x0072" u"\x0072" u"\x006f" u"\x0072" u"",5);return cs_literal;}()))); v_message = cs_value; return cs_value; }());
return false;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance2_8985); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4ebd3696a44e4f6b(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance2_8985); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1bfb44d4e16bae10(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = (((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());})) ? ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x8ab2" u"\x91d1" u"\x60c5" u"\x5831" u"\x306e" u"\x5fa9" u"\x5143" u"\x304c" u"\x5b8c" u"\x4e86" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"",15);return cs_literal;}()) : ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0050" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0020" u"\x0069" u"\x006e" u"\x0066" u"\x006f" u"\x0020" u"\x0072" u"\x0065" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"\x0064" u"\x002e" u"",23);return cs_literal;}()))); v_message = cs_value; return cs_value; }());
return true;
} catch(const pls::cs::Exception& cs_caught_828) {auto cs_exception_828=pls::cs::capture_exception(cs_caught_828);
if(pls::cs::exception_is(cs_exception_828,"System.Exception")) {auto v_t_9455=cs_exception_828;{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_9455; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
([&]() { auto cs_value = ([&]() -> pls::cs::String { return cs_11f71ced6c57f274(); }()); v_message = cs_value; return cs_value; }());
return false;
}}
else {throw;} }
}
}
}
}

// M:system.billing.ui.StoreBase.CompletePayment(system.billing.util.Purchase)
pls::cs::Ref<cs_a42daea58251b089> cs_9e9180120f7b6e3a(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_purchase) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.CompletePayment(system.billing.util.Purchase)",game);
{
{auto cs_list_enum832=(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).GetEnumerator();struct cs_list_scope832{decltype(cs_list_enum832)&e;~cs_list_scope832(){e.Dispose();}} cs_scope832{cs_list_enum832};while(cs_list_enum832.MoveNext()){ pls::cs::Ref<cs_15f31d4f046b09a8> v_item_3591=cs_list_enum832.get_Current();{
if (([&]() -> bool { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(v_item_3591); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e8fea88a1ccd74d6(cs_receiver); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_a42daea58251b089>>(v_purchase); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_30a95d92bd1ce70c(cs_receiver); }()); return (cs_left != cs_right); }())) {
continue;
}
([&]() { auto cs_target = v_item_3591; auto cs_value = true; pls::game::cs_require(cs_target)->cs_d6ae59bf543478aa = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_a42daea58251b089>>(v_purchase); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ebb3a05c47178475(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
pls::cs::Ref<cs_a42daea58251b089> v_purchase2_3803 = ([&]() -> pls::cs::Ref<cs_a42daea58251b089> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fa01867c9c048464>>(cs_this); pls::cs::Ref<cs_15f31d4f046b09a8> cs_arg0 = v_item_3591; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_84f1e1cb3af4ded2(cs_receiver,cs_arg0); }());
if ((([&]() { auto cs_left = pls::cs::box(v_purchase2_3803); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_a42daea58251b089>>(v_purchase2_3803); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ebb3a05c47178475(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left <= cs_right); }()))) {
([&]() { auto cs_target = v_item_3591; auto cs_value = false; pls::game::cs_require(cs_target)->cs_d6ae59bf543478aa = cs_value; return cs_value; }());
throw pls::cs::Exception();
}
return v_purchase2_3803;
}
}}}
return v_purchase;
}
}
}
}

// M:system.billing.ui.StoreBase.ConsumeItem(system.billing.util.Purchase)
bool cs_0c2ef3da56499922(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_purchase) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.ConsumeItem(system.billing.util.Purchase)",game);
{
return false;
}
}
}
}

// M:system.billing.ui.StoreBase.GetIncompletePayments
pls::cs::List<pls::cs::Ref<cs_15f31d4f046b09a8>> cs_880efa9ef8cb946d(pls::cs::Ref<cs_fa01867c9c048464> cs_this) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.GetIncompletePayments",game);
{
pls::cs::List<pls::cs::Ref<cs_15f31d4f046b09a8>> v_list_3032 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.GetIncompletePayments:3039",pls::cs::List<pls::cs::Ref<cs_15f31d4f046b09a8>>::make());
{auto cs_list_enum833=(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).GetEnumerator();struct cs_list_scope833{decltype(cs_list_enum833)&e;~cs_list_scope833(){e.Dispose();}} cs_scope833{cs_list_enum833};while(cs_list_enum833.MoveNext()){ pls::cs::Ref<cs_15f31d4f046b09a8> v_item_3063=cs_list_enum833.get_Current();{
if (([&]() { auto cs_receiver = v_item_3063; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6ae59bf543478aa; }())) {
continue;
}
if ((!((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(v_item_3063); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b38ac404eaec0f92(cs_receiver); }()))))) {
continue;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list_3032; auto cs_arg0 = v_item_3063; cs_receiver.Add(cs_arg0); }());});
}}}
return v_list_3032;
}
}
}
}

// M:system.billing.ui.StoreBase.GetProductType(System.String)
std::int32_t cs_a27b4a646a4f6288(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String v_productID) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.GetProductType(System.String)",game);
{
throw pls::cs::Exception(pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.GetProductType(System.String):2916",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.GetProductType(System.String):2916",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005b" u"\x0020" u"\x5b58" u"\x5728" u"\x3057" u"\x306a" u"\x3044" u"\x0070" u"\x0072" u"\x006f" u"\x0064" u"\x0075" u"\x0063" u"\x0074" u"\x0049" u"\x0044" u"\x0020" u"\x003a" u"\x0020" u"",19);return cs_literal;}()); auto cs_right = v_productID; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0020" u"\x005d" u"",2);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())).utf8());
}
}
}
}

// M:system.billing.ui.StoreBase.GetRestoreRequest
std::int32_t cs_4e9bffcbfff0634b() { cs_init_fa01867c9c048464();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.GetRestoreRequest",game);
{
return pls::cs::unbox<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = pls::source_allocations::completed("delegate_evaluation","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.GetRestoreRequest:8513",([&](){struct cs_closure_37aff55c77cf31b8 : pls::cs::Object{void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);}void release_edges()override{pls::cs::Object::release_edges();}pls::cs::Ref<pls::cs::Object> Invoke(){{ return pls::source_allocations::completed("boxing","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.GetRestoreRequest:8519",pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x0072" u"\x0065" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"\x005f" u"\x0074" u"\x0072" u"\x0061" u"\x006e" u"\x0073" u"\x0061" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x0073" u"",21);return cs_literal;}()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return pls::kairo::PlayerPrefs::GetInt(cs_arg0,cs_arg1); }());}))); }}};auto cs_closure=pls::cs::make_ref<cs_closure_37aff55c77cf31b8>();return pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::bind_identity(cs_closure,nullptr,std::string("M:system.billing.ui.StoreBase.GetRestoreRequest:8513"),[weak=pls::cs::DelegateCapture<cs_closure_37aff55c77cf31b8>(cs_closure)]()->pls::cs::Ref<pls::cs::Object>{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();return target->Invoke();});}())); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());}));
}
}
}

// M:system.billing.ui.StoreBase.GetUnityJson(System.String,System.String)
pls::cs::String cs_e8c6c1f01dcb9d31(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String v_json,pls::cs::String v_orderId) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.GetUnityJson(System.String,System.String)",game);
{
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_json; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0069" u"\x006e" u"\x005f" u"\x0061" u"\x0070" u"\x0070" u"",6);return cs_literal;}()); return pls::game::cs_contains_string(cs_arg0,cs_arg1); }());})))) {
return pls::cs::String{};
}
std::int32_t v_num_6143 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_json; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0069" u"\x006e" u"\x005f" u"\x0061" u"\x0070" u"\x0070" u"",6);return cs_literal;}()); return pls::cs::culture_index_of(cs_arg0,cs_arg1); }());});
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
pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.GetUnityJson(System.String,System.String):6422",([&]() { auto cs_old = v_text_6205; auto cs_rhs = ([&]() { auto cs_array = v_json; auto cs_index = v_i_6238; return cs_array.at(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,pls::game::cs_char_string(cs_rhs)); v_text_6205 = cs_value; return cs_value; }()));
}
pls::cs::List<pls::cs::String> v_list_6460 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.GetUnityJson(System.String,System.String):6467",pls::cs::List<pls::cs::String>::make());
([&]() { auto cs_value = false; v_flag_6181 = cs_value; return cs_value; }());
pls::cs::String v_text2_6514 = pls::cs::String(u"");
for (std::int32_t v_j_6548 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_6548; auto cs_right = (v_text_6205).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_6548; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_6548 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text_6205; auto cs_index = v_j_6548; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(123)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag_6181 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::String(u""); v_text2_6514 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text_6205; auto cs_index = v_j_6548; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(125)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = false; v_flag_6181 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list_6460; auto cs_arg0 = v_text2_6514; cs_receiver.Add(cs_arg0); }());});
([&]() { auto cs_value = pls::cs::String(u""); v_text2_6514 = cs_value; return cs_value; }());
} else if ((((!((v_flag_6181)))) || (((([&]() -> bool { auto cs_left = (v_text2_6514).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) && (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text_6205; auto cs_index = v_j_6548; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(44)); return (cs_left == cs_right); }())))))) {

} else {
pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.GetUnityJson(System.String,System.String):6857",([&]() { auto cs_old = v_text2_6514; auto cs_rhs = ([&]() { auto cs_array = v_text_6205; auto cs_index = v_j_6548; return cs_array.at(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,pls::game::cs_char_string(cs_rhs)); v_text2_6514 = cs_value; return cs_value; }()));
}
}
for (std::int32_t v_k_6898 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_6898; auto cs_right = (v_list_6460).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_6898; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_6898 = cs_new; return cs_old; }())) {
pls::cs::String v_text3_6942 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_list_6460; auto cs_index = v_k_6898; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0074" u"\x0072" u"\x0061" u"\x006e" u"\x0073" u"\x0061" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x005f" u"\x0069" u"\x0064" u"",14);return cs_literal;}()); return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }());
if ((([&]() -> bool { auto cs_left = v_text3_6942; auto cs_right = v_orderId; return (cs_left != cs_right); }()))) {

} else {
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_list_6460; auto cs_index = v_k_6898; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x005f" u"\x0064" u"\x0061" u"\x0074" u"\x0065" u"\x005f" u"\x006d" u"\x0073" u"",16);return cs_literal;}()); return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }());
}
}
return pls::cs::String{};
}
}
}
}

// M:system.billing.ui.StoreBase.HasIncompletePayments
bool cs_e407b08e50b1dd2c(pls::cs::Ref<cs_fa01867c9c048464> cs_this) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.HasIncompletePayments",game);
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6769193235ceb92f; }())) {
return false;
}
{auto cs_list_enum834=(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).GetEnumerator();struct cs_list_scope834{decltype(cs_list_enum834)&e;~cs_list_scope834(){e.Dispose();}} cs_scope834{cs_list_enum834};while(cs_list_enum834.MoveNext()){ pls::cs::Ref<cs_15f31d4f046b09a8> v_item_3337=cs_list_enum834.get_Current();{
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
}

// M:system.billing.ui.StoreBase.Init(System.String[][],System.String,System.String[])
void cs_d3abbeacfed9ec8c(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Array<pls::cs::Array<pls::cs::String>> v_data,pls::cs::String v_paymentProduct,pls::cs::Array<pls::cs::String> v_subscription) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.Init(System.String[][],System.String,System.String[])",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_925b3cf054e42b78> { return cs_fd047093624d8d65(); }()); cs_d59ecb529d3c681c() = cs_value; return cs_value; }());
([&]() { auto cs_value = v_paymentProduct; cs_e9c57a349e970656() = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e92a9e2b4e70e8aa; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_fa01867c9c048464>>(cs_this); pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = v_data; pls::cs::String cs_arg1 = v_paymentProduct; pls::cs::Array<pls::cs::String> cs_arg2 = v_subscription; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d5d483312d700179(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
}

// M:system.billing.ui.StoreBase.InitializePurchasing(System.String[][],System.String,System.String[])
void cs_d5d483312d700179(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Array<pls::cs::Array<pls::cs::String>> v_data,pls::cs::String v_paymentProduct,pls::cs::Array<pls::cs::String> v_subscriptions) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.InitializePurchasing(System.String[][],System.String,System.String[])",game);
{

}
}
}
}

// M:system.billing.ui.StoreBase.IsCompletePayment(system.billing.util.Purchase)
bool cs_53ba148e029fe26b(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_purchase) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.IsCompletePayment(system.billing.util.Purchase)",game);
{
if (([&]() { auto cs_left = pls::cs::box(v_purchase); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return false;
}
{auto cs_list_enum835=(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).GetEnumerator();struct cs_list_scope835{decltype(cs_list_enum835)&e;~cs_list_scope835(){e.Dispose();}} cs_scope835{cs_list_enum835};while(cs_list_enum835.MoveNext()){ pls::cs::Ref<cs_15f31d4f046b09a8> v_item_4134=cs_list_enum835.get_Current();{
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
}

// M:system.billing.ui.StoreBase.IsInitialized
bool cs_4e71f3b66d66c79d(pls::cs::Ref<cs_fa01867c9c048464> cs_this) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.IsInitialized",game);
{
return true;
}
}
}
}

// M:system.billing.ui.StoreBase.LaunchPurchaseFlow(System.String)
pls::cs::Ref<cs_a42daea58251b089> cs_87e0519a7f6ab5fc(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String v_productId) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.LaunchPurchaseFlow(System.String)",game);
{
return pls::cs::Ref<cs_a42daea58251b089>{};
}
}
}
}

// M:system.billing.ui.StoreBase.Load(java.io.InputStream)
void cs_6fb7b668d4a70a0f(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.Load(java.io.InputStream)",game);
{
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_stream); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_bb7347310506b971(); }());}); return (cs_left < cs_right); }())) {
std::int32_t v_num_7956 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());});
if ((([&]() -> bool { auto cs_left = v_num_7956; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { return cs_4e9bffcbfff0634b(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))) {
([&]() -> void { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); cs_bf2b5138011e18f8(cs_arg0); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.Load(java.io.InputStream):8089",pls::cs::List<pls::cs::Ref<cs_15f31d4f046b09a8>>::make()); pls::game::cs_require(cs_target)->cs_7051bba65972fd27 = cs_value; return cs_value; }());
std::int32_t v_num2_8117 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());});
for (std::int32_t v_i_8164 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_8164; auto cs_right = v_num2_8117; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_8164; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_8164 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }()); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_15f31d4f046b09a8> { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_fb33e792a02d6245(cs_arg0); }()); cs_receiver.Add(cs_arg0); }());});
}
if (([&]() -> bool { auto cs_left = v_num_7956; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x65ull)); return (cs_left == cs_right); }())) {
std::int32_t v_num3_8269 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());});
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { return cs_4e9bffcbfff0634b(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() -> void { std::int32_t cs_arg0 = ((([&]() -> bool { auto cs_left = v_num3_8269; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); cs_bf2b5138011e18f8(cs_arg0); }());
}
}
}
}
}
}
}

// M:system.billing.ui.StoreBase.QueryInventory(System.Boolean,System.Collections.Generic.List{System.String},System.Collections.Generic.List{System.String})
pls::cs::Ref<cs_51fd12cb14e568f9> cs_3d1833af62584b62(pls::cs::Ref<cs_fa01867c9c048464> cs_this,bool v_querySkuDetails,pls::cs::List<pls::cs::String> v_moreItemSkus,pls::cs::List<pls::cs::String> v_moreSubsSkus) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.QueryInventory(System.Boolean,System.Collections.Generic.List{System.String},System.Collections.Generic.List{System.String})",game);
{
pls::cs::List<pls::cs::String> v_list_1950 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.QueryInventory(System.Boolean,System.Collections.Generic.List{System.String},System.Collections.Generic.List{System.String}):1957",pls::cs::List<pls::cs::String>::make());
pls::cs::Array<pls::cs::List<pls::cs::String>> v_array_1995 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.QueryInventory(System.Boolean,System.Collections.Generic.List{System.String},System.Collections.Generic.List{System.String}):2003",([&](){auto cs_initial_array_842=pls::cs::Array<pls::cs::List<pls::cs::String>>::make(2);cs_initial_array_842.at(0)=v_moreItemSkus;cs_initial_array_842.at(1)=v_moreSubsSkus;return cs_initial_array_842;}()));
{ auto cs_each843 = v_array_1995; for (std::int32_t cs_i843=0; cs_i843<cs_each843.length(); ++cs_i843) { pls::cs::List<pls::cs::String> v_list2_2059 = cs_each843.get_Item(cs_i843); {
if (([&]() { auto cs_left = pls::cs::box(v_list2_2059); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {

} else {
for (std::int32_t v_j_2150 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_2150; auto cs_right = (v_list2_2059).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_2150; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_2150 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list_1950; auto cs_arg0 = ([&]() { auto cs_array = v_list2_2059; auto cs_index = v_j_2150; return cs_array.get_Item(cs_index); }()); cs_receiver.Add(cs_arg0); }());});
}
}
} } }
if (([&]() -> bool { auto cs_left = (v_list_1950).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.QueryInventory(System.Boolean,System.Collections.Generic.List{System.String},System.Collections.Generic.List{System.String}):2270",([&]() -> pls::cs::Ref<cs_51fd12cb14e568f9> { return cs_711d8c323ca1c807(); }()));
}
{
pls::cs::Ref<cs_51fd12cb14e568f9> v_recoveredInventoryResult_2307 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.QueryInventory(System.Boolean,System.Collections.Generic.List{System.String},System.Collections.Generic.List{System.String}):2334",([&]() -> pls::cs::Ref<cs_51fd12cb14e568f9> { return cs_711d8c323ca1c807(); }()));
return v_recoveredInventoryResult_2307;
}
}
}
}
}

// M:system.billing.ui.StoreBase.Restore
std::int32_t cs_59826646bf6d2707(pls::cs::Ref<cs_fa01867c9c048464> cs_this) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.Restore",game);
{
return static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)));
}
}
}
}

// M:system.billing.ui.StoreBase.Save(java.io.OutputStream)
void cs_3784aca2bceecd36(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_stream) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.Save(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x66ull)); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int32_t cs_arg1 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).get_Count(); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
for (std::int32_t v_i_7793 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7793; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7793; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7793 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }()); auto cs_index = v_i_7793; return cs_array.get_Item(cs_index); }())); pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_aafe7f3e366450c4(cs_receiver,cs_arg0); }());
}
}
}
}
}

// M:system.billing.ui.StoreBase.SearchReceipt(System.String)
pls::cs::Ref<cs_15f31d4f046b09a8> cs_9004764138986aa8(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String v_json) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.SearchReceipt(System.String)",game);
{
{auto cs_list_enum844=(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7051bba65972fd27; }())).GetEnumerator();struct cs_list_scope844{decltype(cs_list_enum844)&e;~cs_list_scope844(){e.Dispose();}} cs_scope844{cs_list_enum844};while(cs_list_enum844.MoveNext()){ pls::cs::Ref<cs_15f31d4f046b09a8> v_item_2706=cs_list_enum844.get_Current();{
if (([&]() -> bool { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(v_item_2706); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f228db45ed90d23f(cs_receiver); }()); auto cs_right = v_json; return (cs_left == cs_right); }())) {
return v_item_2706;
}
}}}
return pls::cs::Ref<cs_15f31d4f046b09a8>{};
}
}
}
}

// M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32)
void cs_bf2b5138011e18f8(std::int32_t v_request) { cs_init_fa01867c9c048464();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32)",game);
{
pls::cs::Ref<pls::cs::Cell<std::int32_t>> v_request_cell=pls::cs::make_ref<pls::cs::Cell<std::int32_t>>(v_request);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); pls::cs::Delegate<void()> cs_arg0 = pls::source_allocations::completed("delegate_evaluation","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32):8685",pls::source_allocations::completed("closure_evaluation","src/Assembly-CSharp/system/billing/ui/StoreBase.cs:M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32):8685",([&](){struct cs_closure_ce3d3092d4526806 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<std::int32_t>> v_request_cell;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_request_cell,v);}void release_edges()override{pls::cs::Object::release_edges();pls::cs::clear_ref(v_request_cell);}void Invoke(){{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x0072" u"\x0065" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"\x005f" u"\x0074" u"\x0072" u"\x0061" u"\x006e" u"\x0073" u"\x0061" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x0073" u"",21);return cs_literal;}()); std::int32_t cs_arg1 = v_request_cell->value; pls::kairo::PlayerPrefs::SetInt(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::kairo::PlayerPrefs::Save(); }());});
}}};auto cs_closure=pls::cs::make_ref<cs_closure_ce3d3092d4526806>();cs_closure->v_request_cell=v_request_cell;return pls::cs::Delegate<void()>::bind_identity(cs_closure,pls::cs::raw(v_request_cell),std::string("M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32):8685"),[weak=pls::cs::DelegateCapture<cs_closure_ce3d3092d4526806>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()))); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());});
}
}
}
}

// M:system.billing.ui.StoreBase.SetTime(system.billing.ui.Receipt)
pls::cs::Ref<cs_a42daea58251b089> cs_84f1e1cb3af4ded2(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<cs_15f31d4f046b09a8> v_receipt) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.SetTime(system.billing.ui.Receipt)",game);
{
return pls::cs::Ref<cs_a42daea58251b089>{};
}
}
}
}

// M:system.billing.ui.StoreBase.WaitForInitialized
void cs_cbdd7a7dbb437bf3(pls::cs::Ref<cs_fa01867c9c048464> cs_this) { cs_init_fa01867c9c048464();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.StoreBase.WaitForInitialized",game);
{
return;
}
}
}
}
}
