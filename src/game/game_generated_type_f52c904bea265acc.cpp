// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
#include "game_generated_type_6485f92c2f04639f.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_b728593e3dcffe31.hpp"
#include "game_generated_type_e315dac1df3b175d.hpp"
#include "game_generated_type_f52c904bea265acc.hpp"
#include "generated/portable_generated_type_83a7bc36395d16bd.hpp"
namespace pls::game {

void cs_f52c904bea265acc::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_5451b2154f09f4c5::trace_edges(visitor);}

void cs_f52c904bea265acc::release_edges(){cs_5451b2154f09f4c5::release_edges();}

bool cs_f52c904bea265acc::Init() {return cs_45e17a9cd5a326a6(std::static_pointer_cast<cs_f52c904bea265acc>(shared_from_this()));}

void cs_f52c904bea265acc::Draw(pls::cs::Ref<pls::kairo::Graphics> v_g) {cs_8f2e07e66a1a99d2(std::static_pointer_cast<cs_f52c904bea265acc>(shared_from_this()),v_g);}

bool cs_f52c904bea265acc::Update() {return cs_3b9c14c758ceb110(std::static_pointer_cast<cs_f52c904bea265acc>(shared_from_this()));}

bool cs_f52c904bea265acc::Finish() {return cs_63e8f3ae67da7af4(std::static_pointer_cast<cs_f52c904bea265acc>(shared_from_this()));}

std::int32_t cs_f52c904bea265acc::GetHashCode() {return cs_69ffb55861de2893(std::static_pointer_cast<cs_f52c904bea265acc>(shared_from_this()));}

bool cs_f52c904bea265acc::Resume() {return cs_affd13cffeea0427(std::static_pointer_cast<cs_f52c904bea265acc>(shared_from_this()));}

pls::cs::String cs_f52c904bea265acc::ToString() {return cs_7ed9b921ca878f0d(std::static_pointer_cast<cs_f52c904bea265acc>(shared_from_this()));}

static bool cs_7a902abf262c4ddf_value{};

static pls::cs::Ref<cs_f52c904bea265acc> cs_b120e26ea937bc88_value{};

static std::int32_t cs_0539026e7603868c_value{};

static std::int32_t cs_e6e37e272cace738_value{};

static pls::cs::Ref<cs_b728593e3dcffe31> cs_467527abd3feb0a2_value{};

void cs_init_f52c904bea265acc(){static pls::cs::TypeInitState state;state.run("system.form.ConnectForm",[](){
cs_0539026e7603868c_value = pls::cs::evaluate_type_initializer_field("F:system.form.ConnectForm.FORMID_CONNECT",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x386ull));});

});}

bool& cs_7a902abf262c4ddf(){cs_init_f52c904bea265acc();return cs_7a902abf262c4ddf_value;}

pls::cs::Ref<cs_f52c904bea265acc>& cs_b120e26ea937bc88(){cs_init_f52c904bea265acc();return cs_b120e26ea937bc88_value;}

std::int32_t& cs_0539026e7603868c(){cs_init_f52c904bea265acc();return cs_0539026e7603868c_value;}

std::int32_t& cs_e6e37e272cace738(){cs_init_f52c904bea265acc();return cs_e6e37e272cace738_value;}

pls::cs::Ref<cs_b728593e3dcffe31>& cs_467527abd3feb0a2(){cs_init_f52c904bea265acc();return cs_467527abd3feb0a2_value;}

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
} catch(const pls::cs::Exception& cs_caught_847) {auto cs_exception_847=pls::cs::capture_exception(cs_caught_847);
if(pls::cs::exception_is(cs_exception_847,"System.Exception")) {{

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
} catch(const pls::cs::Exception& cs_caught_848) {auto cs_exception_848=pls::cs::capture_exception(cs_caught_848);
if(pls::cs::exception_is(cs_exception_848,"System.Exception")) {{

}}
else {throw;} }
return true;
}
}
}
}
