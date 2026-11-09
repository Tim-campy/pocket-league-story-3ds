// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_08829eb6a4df2a40.hpp"
#include "game_generated_type_10edc785c24978fc.hpp"
#include "game_generated_type_15f31d4f046b09a8.hpp"
#include "game_generated_type_1fc419a676702252.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_5df8265429cd2423.hpp"
#include "game_generated_type_6485f92c2f04639f.hpp"
#include "game_generated_type_6ee7d14059be1acf.hpp"
#include "game_generated_type_764e04aa5493d588.hpp"
#include "game_generated_type_931908081ea62151.hpp"
#include "game_generated_type_a2cea92715051fa5.hpp"
#include "game_generated_type_a42daea58251b089.hpp"
#include "game_generated_type_fa01867c9c048464.hpp"
#include "game_generated_type_feb7ae74aa59a27c.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
#include "generated/portable_generated_type_7fd3b635ed6929d0.hpp"
#include "generated/portable_generated_type_bb652fbb61000386.hpp"
namespace pls::game {

void cs_08829eb6a4df2a40::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_6ee7d14059be1acf::trace_edges(visitor);}

void cs_08829eb6a4df2a40::release_edges(){cs_6ee7d14059be1acf::release_edges();}

void cs_08829eb6a4df2a40::cs_virtual_5255d4c2789eac48(pls::cs::Ref<cs_feb7ae74aa59a27c> v_task) {cs_4b3a4c3c146ac496(std::static_pointer_cast<cs_08829eb6a4df2a40>(shared_from_this()),v_task);}

bool cs_08829eb6a4df2a40::cs_virtual_6e47643190d08935() {return cs_ce7e41599b3302a7(std::static_pointer_cast<cs_08829eb6a4df2a40>(shared_from_this()));}

bool cs_08829eb6a4df2a40::cs_virtual_39912b67b6e00cf6(pls::cs::Ref<cs_feb7ae74aa59a27c> v_task) {return cs_988a3445769c5f7e(std::static_pointer_cast<cs_08829eb6a4df2a40>(shared_from_this()),v_task);}

void cs_08829eb6a4df2a40::cs_virtual_219ebd8a0b10d8e7(pls::cs::Ref<cs_feb7ae74aa59a27c> v_task) {cs_9194ae34030bef1a(std::static_pointer_cast<cs_08829eb6a4df2a40>(shared_from_this()),v_task);}

static pls::cs::Ref<cs_2ffa6f51468590ea> cs_435cb1470132c214_value{};

static pls::cs::Ref<pls::kairo::IApplication> cs_2b99e3af7643ea42_value{};

static pls::cs::Ref<cs_6485f92c2f04639f> cs_853c51ab649a13bb_value{};

void cs_init_08829eb6a4df2a40(){static pls::cs::TypeInitState state;state.run("system.billing.MyBilling",[](){

});}

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_435cb1470132c214(){cs_init_08829eb6a4df2a40();return cs_435cb1470132c214_value;}

pls::cs::Ref<pls::kairo::IApplication>& cs_2b99e3af7643ea42(){cs_init_08829eb6a4df2a40();return cs_2b99e3af7643ea42_value;}

pls::cs::Ref<cs_6485f92c2f04639f>& cs_853c51ab649a13bb(){cs_init_08829eb6a4df2a40();return cs_853c51ab649a13bb_value;}

// M:system.billing.MyBilling.#ctor
pls::cs::Ref<cs_08829eb6a4df2a40> cs_b6efdcfa6839537c() { cs_init_08829eb6a4df2a40();
{ auto cs_this = pls::cs::make_ref<cs_08829eb6a4df2a40>(); cs_b6efdcfa6839537c_init(cs_this); return cs_this; }
}

void cs_b6efdcfa6839537c_init(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this) {
([&]() { cs_fb6a0b22d395f57f_init(std::static_pointer_cast<cs_6ee7d14059be1acf>(cs_this)); }());
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }()); cs_2b99e3af7643ea42() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_6485f92c2f04639f>>(pls::cs::box(([&]() -> pls::cs::Ref<pls::kairo::FormManagerBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(cs_2b99e3af7643ea42()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormManager(); }()))); cs_853c51ab649a13bb() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_435cb1470132c214() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x004d" u"\x0049" u"\x0049" u"\x0042" u"\x0049" u"\x006a" u"\x0041" u"\x004e" u"\x0042" u"\x0067" u"\x006b" u"\x0071" u"\x0068" u"\x006b" u"\x0069" u"\x0047" u"\x0039" u"\x0077" u"\x0030" u"\x0042" u"\x0041" u"\x0051" u"\x0045" u"\x0046" u"\x0041" u"\x0041" u"\x004f" u"\x0043" u"\x0041" u"\x0051" u"\x0038" u"\x0041" u"\x004d" u"\x0049" u"\x0049" u"\x0042" u"\x0043" u"\x0067" u"\x004b" u"\x0043" u"\x0041" u"\x0051" u"\x0045" u"\x0041" u"\x006d" u"\x0070" u"\x0034" u"\x006e" u"\x006b" u"\x0054" u"\x0069" u"\x0039" u"\x0063" u"\x0058" u"\x0049" u"\x0066" u"\x0078" u"\x0033" u"\x0062" u"\x0078" u"\x0041" u"\x0074" u"\x0049" u"\x0069" u"\x0046" u"\x004b" u"\x0059" u"\x0074" u"\x004e" u"\x0050" u"\x006e" u"\x0058" u"\x007a" u"\x006b" u"\x0078" u"\x0030" u"\x0031" u"\x0050" u"\x006b" u"\x0066" u"\x0063" u"\x0059" u"\x0061" u"\x0052" u"\x0048" u"\x004b" u"\x0073" u"\x005a" u"\x0059" u"\x0078" u"\x0073" u"\x004f" u"\x0066" u"\x0047" u"\x0077" u"\x0078" u"\x006f" u"\x004a" u"\x0074" u"\x006c" u"\x005a" u"\x0066" u"\x0067" u"\x006f" u"\x0076" u"\x0041" u"\x0067" u"\x006e" u"\x0035" u"\x006d" u"\x002b" u"\x004f" u"\x0073" u"\x0058" u"\x0037" u"\x0064" u"\x0030" u"\x0078" u"\x0072" u"\x0047" u"\x004f" u"\x004e" u"\x002b" u"\x0034" u"\x002f" u"\x0066" u"\x0059" u"\x0044" u"\x0067" u"\x0071" u"\x0077" u"\x0034" u"\x0050" u"\x0066" u"\x007a" u"\x0038" u"\x0047" u"\x0067" u"\x002f" u"\x002f" u"\x0067" u"\x0030" u"\x0044" u"\x0056" u"\x0033" u"\x004a" u"\x004a" u"\x0032" u"\x0030" u"\x0032" u"\x0077" u"\x0068" u"\x0030" u"\x0037" u"\x004f" u"\x0079" u"\x006b" u"\x0079" u"\x0063" u"\x0065" u"\x006d" u"\x004b" u"\x0054" u"\x0052" u"\x0037" u"\x0044" u"\x0058" u"\x0069" u"\x0070" u"\x0069" u"\x0058" u"\x006e" u"\x0065" u"\x0068" u"\x0045" u"\x0049" u"\x0061" u"\x006a" u"\x0057" u"\x0038" u"\x0068" u"\x0058" u"\x0035" u"\x0067" u"\x0049" u"\x0046" u"\x0071" u"\x0046" u"\x0058" u"\x0037" u"\x0033" u"\x0030" u"\x0052" u"\x0042" u"\x0063" u"\x0044" u"\x006c" u"\x0046" u"\x0030" u"\x0061" u"\x0051" u"\x0041" u"\x0045" u"\x004d" u"\x004d" u"\x0037" u"\x006d" u"\x0059" u"\x0051" u"\x0045" u"\x0077" u"\x002f" u"\x005a" u"\x004d" u"\x0078" u"\x0058" u"\x0068" u"\x0030" u"\x0064" u"\x0041" u"\x0077" u"\x0043" u"\x0033" u"\x006a" u"\x0031" u"\x0041" u"\x0057" u"\x0066" u"\x0067" u"\x0041" u"\x007a" u"\x0062" u"\x0078" u"\x0031" u"\x0067" u"\x0079" u"\x006d" u"\x0038" u"\x0036" u"\x004d" u"\x006a" u"\x0031" u"\x0074" u"\x0054" u"\x0063" u"\x0032" u"\x0070" u"\x0030" u"\x004c" u"\x002f" u"\x0047" u"\x004f" u"\x0036" u"\x0057" u"\x0046" u"\x004b" u"\x0056" u"\x0035" u"\x004e" u"\x0059" u"\x0034" u"\x0063" u"\x0049" u"\x0051" u"\x0034" u"\x0035" u"\x0041" u"\x0058" u"\x0035" u"\x005a" u"\x0038" u"\x0035" u"\x0047" u"\x0045" u"\x004c" u"\x004c" u"\x0035" u"\x0032" u"\x0076" u"\x006c" u"\x0070" u"\x0046" u"\x005a" u"\x0034" u"\x006e" u"\x0054" u"\x0079" u"\x0039" u"\x0030" u"\x0048" u"\x0073" u"\x0079" u"\x0033" u"\x0079" u"\x0067" u"\x0075" u"\x0041" u"\x0056" u"\x0051" u"\x0039" u"\x0053" u"\x006f" u"\x0058" u"\x0062" u"\x0045" u"\x002f" u"\x0063" u"\x0045" u"\x0075" u"\x0038" u"\x0031" u"\x0033" u"\x0039" u"\x0043" u"\x006e" u"\x0032" u"\x0053" u"\x006a" u"\x004e" u"\x006f" u"\x0079" u"\x006b" u"\x0069" u"\x004c" u"\x0033" u"\x0045" u"\x004b" u"\x0071" u"\x0055" u"\x0056" u"\x0078" u"\x0033" u"\x0075" u"\x0078" u"\x002f" u"\x002f" u"\x002f" u"\x0073" u"\x0030" u"\x0065" u"\x0031" u"\x006b" u"\x0071" u"\x004a" u"\x0063" u"\x0070" u"\x0057" u"\x006b" u"\x006d" u"\x0035" u"\x006d" u"\x0056" u"\x002f" u"\x0038" u"\x0056" u"\x006c" u"\x0073" u"\x0045" u"\x0064" u"\x0046" u"\x004a" u"\x0057" u"\x004f" u"\x0076" u"\x0038" u"\x0051" u"\x0059" u"\x0033" u"\x006c" u"\x0057" u"\x0055" u"\x0033" u"\x0062" u"\x004b" u"\x004c" u"\x0070" u"\x0037" u"\x004b" u"\x0064" u"\x0065" u"\x0059" u"\x006b" u"\x0062" u"\x0044" u"\x0051" u"\x0051" u"\x0049" u"\x0044" u"\x0041" u"\x0051" u"\x0041" u"\x0042" u"",392)); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()); cs_4ba6b876c86cbecd() = cs_value; return cs_value; }());
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
pls::cs::Ref<pls::kairo::FormBase> v_form_3842 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(cs_853c51ab649a13bb()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }());
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
return ([&](){auto cs_initial_array_809=pls::cs::Array<pls::cs::Array<pls::cs::String>>::make(4);cs_initial_array_809.at(0)=([&](){auto cs_initial_array_810=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_810.at(0)=pls::cs::String(std::u16string(u"\x0030" u"\x0030" u"",2));cs_initial_array_810.at(1)=pls::cs::String(std::u16string(u"\x0030" u"\x0030" u"\x0030" u"\x0030" u"",4));cs_initial_array_810.at(2)=pls::cs::String(std::u16string(u"\x0061" u"\x0064" u"\x005f" u"\x006f" u"\x0066" u"\x0066" u"\x005f" u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"\x0030" u"",12));cs_initial_array_810.at(3)=((v_flag_1148) ? pls::cs::String(std::u16string(u"\x5e83" u"\x544a" u"\x004f" u"\x0046" u"\x0046" u"\x002b" u"\x6a2a" u"\x56de" u"\x8ee2" u"",9)) : pls::cs::String(std::u16string(u"\x0052" u"\x0065" u"\x006d" u"\x006f" u"\x0076" u"\x0065" u"\x0020" u"\x0061" u"\x0064" u"\x0073" u"",10)));cs_initial_array_810.at(4)=pls::cs::String(u"");cs_initial_array_810.at(5)=pls::cs::String(std::u16string(u"\x0030" u"",1));cs_initial_array_810.at(6)=pls::cs::String(u"");return cs_initial_array_810;}());cs_initial_array_809.at(1)=([&](){auto cs_initial_array_811=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_811.at(0)=pls::cs::String(std::u16string(u"\x0031" u"\x0030" u"",2));cs_initial_array_811.at(1)=pls::cs::String(std::u16string(u"\x0031" u"\x0031" u"\x0030" u"\x0030" u"",4));cs_initial_array_811.at(2)=pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x005f" u"\x0031" u"\x005f" u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"\x0030" u"",14));cs_initial_array_811.at(3)=((v_flag_1148) ? pls::cs::String(std::u16string(u"\xff81" u"\xff79" u"\xff6f" u"\xff84" u"\x007c" u"\x679a" u"\x007c" u"\x679a" u"",8)) : pls::cs::String(std::u16string(u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x007c" u"\x007c" u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"",14)));cs_initial_array_811.at(4)=pls::cs::String(u"");cs_initial_array_811.at(5)=pls::cs::String(std::u16string(u"\x0030" u"",1));cs_initial_array_811.at(6)=pls::cs::String(u"");return cs_initial_array_811;}());cs_initial_array_809.at(2)=([&](){auto cs_initial_array_812=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_812.at(0)=pls::cs::String(std::u16string(u"\x0032" u"\x0030" u"",2));cs_initial_array_812.at(1)=pls::cs::String(std::u16string(u"\x0030" u"\x0031" u"\x0030" u"\x0030" u"",4));cs_initial_array_812.at(2)=pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x005f" u"\x0031" u"\x0030" u"\x005f" u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"\x0030" u"\x005f" u"\x0030" u"\x0030" u"",18));cs_initial_array_812.at(3)=((v_flag_1148) ? pls::cs::String(std::u16string(u"\xff81" u"\xff79" u"\xff6f" u"\xff84" u"\x007c" u"\x679a" u"\x007c" u"\x679a" u"\xff7e" u"\xff6f" u"\xff84" u"",11)) : pls::cs::String(std::u16string(u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x0073" u"\x007c" u"\x007c" u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x0073" u"",16)));cs_initial_array_812.at(4)=pls::cs::String(u"");cs_initial_array_812.at(5)=pls::cs::String(std::u16string(u"\x0030" u"",1));cs_initial_array_812.at(6)=pls::cs::String(u"");return cs_initial_array_812;}());cs_initial_array_809.at(3)=([&](){auto cs_initial_array_813=pls::cs::Array<pls::cs::String>::make(7);cs_initial_array_813.at(0)=pls::cs::String(std::u16string(u"\x0032" u"\x0031" u"",2));cs_initial_array_813.at(1)=pls::cs::String(std::u16string(u"\x0030" u"\x0031" u"\x0030" u"\x0030" u"",4));cs_initial_array_813.at(2)=pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x005f" u"\x0031" u"\x0030" u"\x005f" u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"\x0030" u"\x005f" u"\x0030" u"\x0031" u"",18));cs_initial_array_813.at(3)=((v_flag_1148) ? pls::cs::String(std::u16string(u"\xff81" u"\xff79" u"\xff6f" u"\xff84" u"\x007c" u"\x679a" u"\x007c" u"\x679a" u"\xff7e" u"\xff6f" u"\xff84" u"",11)) : pls::cs::String(std::u16string(u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x0073" u"\x007c" u"\x007c" u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"\x0073" u"",16)));cs_initial_array_813.at(4)=pls::cs::String(u"");cs_initial_array_813.at(5)=pls::cs::String(std::u16string(u"\x0030" u"",1));cs_initial_array_813.at(6)=pls::cs::String(u"");return cs_initial_array_813;}());return cs_initial_array_809;}());
}
}
}

// M:system.billing.MyBilling.GetInstance
pls::cs::Ref<cs_08829eb6a4df2a40> cs_aaf24b850afadd84() { cs_init_08829eb6a4df2a40();
{
if (([&]() { auto cs_left = pls::cs::box(cs_33c160ec018e286a()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_08829eb6a4df2a40> { return cs_b6efdcfa6839537c(); }()); cs_33c160ec018e286a() = cs_value; return cs_value; }());
}
return pls::cs::unbox<pls::cs::Ref<cs_08829eb6a4df2a40>>(pls::cs::box(cs_33c160ec018e286a()));
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
}
