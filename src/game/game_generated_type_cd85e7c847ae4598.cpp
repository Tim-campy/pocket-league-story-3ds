// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_130519c307b90f46.hpp"
#include "game_generated_type_a42daea58251b089.hpp"
#include "game_generated_type_cd85e7c847ae4598.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_86e62a3c0e632a0f.hpp"
#include "generated/portable_generated_type_a465028bea3432a3.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::game {

void cs_cd85e7c847ae4598::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_08330cbc7084da66,visitor);pls::cs::trace_value(cs_84fc06b76c121945,visitor);pls::cs::trace_value(cs_6decd46ca925e986,visitor);pls::cs::trace_value(cs_a614ab58777a40a1,visitor);pls::cs::trace_value(cs_06683c451efa1973,visitor);}

void cs_cd85e7c847ae4598::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_08330cbc7084da66);pls::cs::release_value(cs_84fc06b76c121945);pls::cs::release_value(cs_6decd46ca925e986);pls::cs::release_value(cs_a614ab58777a40a1);pls::cs::release_value(cs_06683c451efa1973);}

std::int32_t cs_cd85e7c847ae4598::GetHashCode() {return cs_a2ebcb9a739953bd(std::static_pointer_cast<cs_cd85e7c847ae4598>(shared_from_this()));}

pls::cs::String cs_cd85e7c847ae4598::ToString() {return cs_ad7fb776daed3dde(std::static_pointer_cast<cs_cd85e7c847ae4598>(shared_from_this()));}

void cs_init_cd85e7c847ae4598(){static pls::cs::TypeInitState state;state.run("system.billing.ui.PurchaseRecord",[](){

});}

// M:system.billing.ui.PurchaseRecord.#ctor
pls::cs::Ref<cs_cd85e7c847ae4598> cs_77c1e405abfca250() { cs_init_cd85e7c847ae4598();
{ auto cs_this = pls::cs::make_ref<cs_cd85e7c847ae4598>(); cs_77c1e405abfca250_init(cs_this); return cs_this; }
}

void cs_77c1e405abfca250_init(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this) {
([&]() { pls::cs::String cs_arg0 = pls::cs::String(u""); pls::cs::String cs_arg1 = pls::cs::String(u""); cs_f82de0fa574740fa_init(std::static_pointer_cast<cs_cd85e7c847ae4598>(cs_this),cs_arg0,cs_arg1); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.#ctor",game);
{

}
}
}

// M:system.billing.ui.PurchaseRecord.#ctor(System.String,System.String)
pls::cs::Ref<cs_cd85e7c847ae4598> cs_f82de0fa574740fa(pls::cs::String v_productId,pls::cs::String v_orderId) { cs_init_cd85e7c847ae4598();
{ auto cs_this = pls::cs::make_ref<cs_cd85e7c847ae4598>(); cs_f82de0fa574740fa_init(cs_this,v_productId,v_orderId); return cs_this; }
}

void cs_f82de0fa574740fa_init(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,pls::cs::String v_productId,pls::cs::String v_orderId) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.#ctor(System.String,System.String)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_productId; pls::game::cs_require(cs_target)->cs_08330cbc7084da66 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_orderId; pls::game::cs_require(cs_target)->cs_84fc06b76c121945 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull))); pls::game::cs_require(cs_target)->cs_6decd46ca925e986 = cs_value; return cs_value; }());
for (std::int32_t v_i_659 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_659; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_659; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_659 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_i_659; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_a614ab58777a40a1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_06683c451efa1973 = cs_value; return cs_value; }());
}
}
}

// M:system.billing.ui.PurchaseRecord.ChangeState(System.Int32,system.billing.util.Purchase)
void cs_c1bab19e556927b9(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,std::int32_t v_state,pls::cs::Ref<cs_a42daea58251b089> v_purchase) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.ChangeState(System.Int32,system.billing.util.Purchase)",game);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a614ab58777a40a1; }()); auto cs_right = v_state; return (cs_left == cs_right); }())) {
return;
}
std::int64_t v_num_3085 = ([&]() -> std::int64_t { return cs_e285ad46e15aa69f(); }());
if ((([&]() -> bool { auto cs_left = v_state; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(v_purchase); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_a42daea58251b089>>(v_purchase); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ebb3a05c47178475(cs_receiver); }()); v_num_3085 = cs_value; return cs_value; }());
}
std::int32_t v_num2_3203 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = v_num_3085; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull))); return pls::cs::div_i64(cs_left,cs_right); }())));
([&]() { auto cs_target = cs_this; auto cs_value = v_state; pls::game::cs_require(cs_target)->cs_a614ab58777a40a1 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num2_3203; auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_state; return cs_array.get_Item(cs_index); }()); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_06683c451efa1973 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_state; auto cs_value = v_num2_3203;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:system.billing.ui.PurchaseRecord.Deserialize(java.io.InputStream)
void cs_9df67280b402af5e(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.Deserialize(java.io.InputStream)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_08330cbc7084da66 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_84fc06b76c121945 = cs_value; return cs_value; }());
for (std::int32_t v_i_3814 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3814; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3814; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3814 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_i_3814; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_a614ab58777a40a1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_06683c451efa1973 = cs_value; return cs_value; }());
}
}
}
}

// M:system.billing.ui.PurchaseRecord.GetHashCode
std::int32_t cs_a2ebcb9a739953bd(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:system.billing.ui.PurchaseRecord.GetOrderId
pls::cs::String cs_357cc1e956f91fea(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.GetOrderId",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_84fc06b76c121945; }());
}
}
}
}

// M:system.billing.ui.PurchaseRecord.GetProductId
pls::cs::String cs_9bd032e02c3f6f2a(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.GetProductId",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_08330cbc7084da66; }());
}
}
}
}

// M:system.billing.ui.PurchaseRecord.GetState
std::int32_t cs_1c95224fba0dddd6(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.GetState",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a614ab58777a40a1; }());
}
}
}
}

// M:system.billing.ui.PurchaseRecord.GetTimeStamp(System.Int32)
pls::cs::String cs_f917ec3f98c48427(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,std::int32_t v_state) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.GetTimeStamp(System.Int32)",game);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_state; return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return pls::cs::String(u"");
}
pls::cs::Ref<pls::generated::cs_a465028bea3432a3> v_instance_1200 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::generated::cs_a465028bea3432a3> { return pls::generated::cs_23a91b30234d4879(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); std::int64_t cs_arg0 = ([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_state; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i64(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_ab403c0b96bfdb59(cs_receiver,cs_arg0); }());});
pls::cs::String v_text_1308 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});
pls::cs::String v_text2_1359 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});
pls::cs::String v_text3_1415 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});
pls::cs::String v_text4_1467 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});
pls::cs::String v_text5_1520 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});
pls::cs::String v_text6_1573 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_1200); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text2_1359; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text2_1359; return pls::cs::String::concat(cs_left,cs_right); }()); v_text2_1359 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text3_1415; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text3_1415; return pls::cs::String::concat(cs_left,cs_right); }()); v_text3_1415 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text4_1467; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text4_1467; return pls::cs::String::concat(cs_left,cs_right); }()); v_text4_1467 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text5_1520; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text5_1520; return pls::cs::String::concat(cs_left,cs_right); }()); v_text5_1520 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text6_1573; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text6_1573; return pls::cs::String::concat(cs_left,cs_right); }()); v_text6_1573 = cs_value; return cs_value; }());
}
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text_1308; auto cs_right = pls::cs::String(std::u16string(u"\x002d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text2_1359; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text3_1415; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0020" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text4_1467; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x003a" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text5_1520; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x003a" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text6_1573; return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
}

// M:system.billing.ui.PurchaseRecord.GetTimeStampNengappi(System.Int32)
pls::cs::String cs_049aa2baa5783de5(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,std::int32_t v_state) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.GetTimeStampNengappi(System.Int32)",game);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_state; return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return pls::cs::String(u"");
}
pls::cs::Ref<pls::generated::cs_a465028bea3432a3> v_instance_2153 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::generated::cs_a465028bea3432a3> { return pls::generated::cs_23a91b30234d4879(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); std::int64_t cs_arg0 = ([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_state; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x3e8ull)); return pls::cs::mul_i64(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_ab403c0b96bfdb59(cs_receiver,cs_arg0); }());});
pls::cs::String v_text_2261 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});
pls::cs::String v_text2_2312 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});
pls::cs::String v_text3_2368 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});
pls::cs::String v_text4_2420 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});
pls::cs::String v_text5_2473 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});
pls::cs::String v_text6_2526 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_2153); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());});
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text2_2312; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text2_2312; return pls::cs::String::concat(cs_left,cs_right); }()); v_text2_2312 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text3_2368; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text3_2368; return pls::cs::String::concat(cs_left,cs_right); }()); v_text3_2368 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text4_2420; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text4_2420; return pls::cs::String::concat(cs_left,cs_right); }()); v_text4_2420 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text5_2473; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text5_2473; return pls::cs::String::concat(cs_left,cs_right); }()); v_text5_2473 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text6_2526; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0030" u"",1)); auto cs_right = v_text6_2526; return pls::cs::String::concat(cs_left,cs_right); }()); v_text6_2526 = cs_value; return cs_value; }());
}
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text_2261; auto cs_right = pls::cs::String(std::u16string(u"\x002d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text2_2312; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002d" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text3_2368; return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
}

// M:system.billing.ui.PurchaseRecord.Serialize(java.io.OutputStream)
void cs_d407a71ebcad197a(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_08330cbc7084da66; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_84fc06b76c121945; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());});
for (std::int32_t v_i_3484 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3484; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3484; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3484 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6decd46ca925e986; }()); auto cs_index = v_i_3484; return cs_array.get_Item(cs_index); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::uint8_t cs_arg1 = pls::cs::cast_integral<std::uint8_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a614ab58777a40a1; }())); pls::generated::cs_c43b9bbf725f702e(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_06683c451efa1973; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());});
}
}
}
}

// M:system.billing.ui.PurchaseRecord.ToString
pls::cs::String cs_ad7fb776daed3dde(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this) { cs_init_cd85e7c847ae4598();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.ToString",game);
{
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_cd85e7c847ae4598>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9bd032e02c3f6f2a(cs_receiver); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0020" u"\x0028" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_cd85e7c847ae4598>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1c95224fba0dddd6(cs_receiver); }())); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0029" u"\x0020" u"\x005b" u"",3)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_cd85e7c847ae4598>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f917ec3f98c48427(cs_receiver,cs_arg0); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x005b" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_cd85e7c847ae4598>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f917ec3f98c48427(cs_receiver,cs_arg0); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x005b" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_cd85e7c847ae4598>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f917ec3f98c48427(cs_receiver,cs_arg0); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x000a" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_cd85e7c847ae4598>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_357cc1e956f91fea(cs_receiver); }()); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
}
}
