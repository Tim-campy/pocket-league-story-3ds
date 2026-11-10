// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_0db347231f2257f9.hpp"
#include "game_generated_type_169021fb033627ed.hpp"
#include "game_generated_type_1815a6964debf82a.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
#include "game_generated_type_80d72c9d6f5bfcfe.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
#include "game_generated_type_b728593e3dcffe31.hpp"
#include "game_generated_type_bd3043ac164d021f.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "generated/portable_generated_type_f3ea616d36334b95.hpp"
namespace pls::game {

void cs_bd3043ac164d021f::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_b08d770c239489bf::trace_edges(visitor);pls::cs::trace_value(cs_a8dd07e21120b8fc,visitor);pls::cs::trace_value(cs_8414d28f2c564b08,visitor);pls::cs::trace_value(cs_fb9e2e54a4e5add8,visitor);pls::cs::trace_value(cs_b3744c9c8902bc25,visitor);pls::cs::trace_value(cs_46c8a058571eeafc,visitor);pls::cs::trace_value(cs_a50b7cd5744c495b,visitor);pls::cs::trace_value(cs_601e287145250385,visitor);pls::cs::trace_value(cs_6eac5daaba2f3295,visitor);pls::cs::trace_value(cs_8f541e0d2e31d7fe,visitor);pls::cs::trace_value(cs_d08cdbaad6145b1d,visitor);pls::cs::trace_value(cs_076d7a8d9883fcfd,visitor);pls::cs::trace_value(cs_983002ff6e0f2ea0,visitor);pls::cs::trace_value(cs_f0f476890aa67d1b,visitor);pls::cs::trace_value(cs_fbb7dfc4736997fe,visitor);pls::cs::trace_value(cs_51d53808250d860a,visitor);pls::cs::trace_value(cs_792072ed01591cb4,visitor);}

void cs_bd3043ac164d021f::release_edges(){cs_b08d770c239489bf::release_edges();pls::cs::release_value(cs_a8dd07e21120b8fc);pls::cs::release_value(cs_8414d28f2c564b08);pls::cs::release_value(cs_fb9e2e54a4e5add8);pls::cs::release_value(cs_b3744c9c8902bc25);pls::cs::release_value(cs_46c8a058571eeafc);pls::cs::release_value(cs_a50b7cd5744c495b);pls::cs::release_value(cs_601e287145250385);pls::cs::release_value(cs_6eac5daaba2f3295);pls::cs::release_value(cs_8f541e0d2e31d7fe);pls::cs::release_value(cs_d08cdbaad6145b1d);pls::cs::release_value(cs_076d7a8d9883fcfd);pls::cs::release_value(cs_983002ff6e0f2ea0);pls::cs::release_value(cs_f0f476890aa67d1b);pls::cs::release_value(cs_fbb7dfc4736997fe);pls::cs::release_value(cs_51d53808250d860a);pls::cs::release_value(cs_792072ed01591cb4);}

static pls::cs::Ref<cs_2ffa6f51468590ea> cs_7feb13590a54786c_value{};

static pls::cs::Array<pls::cs::String> cs_e6ecf2ecb1664f3f_value{};

static pls::cs::Ref<cs_75707aa3f1629c85> cs_d96057d2c61e3445_value{};

void cs_init_bd3043ac164d021f(){static pls::cs::TypeInitState state;state.run("data.SponsorData",[](){
cs_e6ecf2ecb1664f3f_value = pls::cs::evaluate_type_initializer_field("F:data.SponsorData.difficultStr",[&](){return pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/SponsorData.cs:M:data.SponsorData.ChangeState(System.Int32):1145",([&](){auto cs_initial_array_298=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_298.at(0)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x7c21" u"\x5358" u"",2);return cs_literal;}());cs_initial_array_298.at(1)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x666e" u"\x901a" u"",2);return cs_literal;}());cs_initial_array_298.at(2)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x96e3" u"\x3057" u"\x3044" u"",3);return cs_literal;}());return cs_initial_array_298;}()));});

});}

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_7feb13590a54786c(){cs_init_bd3043ac164d021f();return cs_7feb13590a54786c_value;}

pls::cs::Array<pls::cs::String>& cs_e6ecf2ecb1664f3f(){cs_init_bd3043ac164d021f();return cs_e6ecf2ecb1664f3f_value;}

pls::cs::Ref<cs_75707aa3f1629c85>& cs_d96057d2c61e3445(){cs_init_bd3043ac164d021f();return cs_d96057d2c61e3445_value;}

// M:data.SponsorData.#ctor
pls::cs::Ref<cs_bd3043ac164d021f> cs_48c3032d5b5bf9c8() { cs_init_bd3043ac164d021f();
{ auto cs_this = pls::cs::make_ref<cs_bd3043ac164d021f>(); cs_48c3032d5b5bf9c8_init(cs_this); return cs_this; }
}

void cs_48c3032d5b5bf9c8_init(pls::cs::Ref<cs_bd3043ac164d021f> cs_this) {
cs_this->cs_601e287145250385 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/SponsorData.cs:M:data.SponsorData.#ctor:839",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))));
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.#ctor",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_7feb13590a54786c() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_d96057d2c61e3445() = cs_value; return cs_value; }());
}
}
}

// M:data.SponsorData.#ctor(System.String)
pls::cs::Ref<cs_bd3043ac164d021f> cs_2699965129f6a232(pls::cs::String v_src) { cs_init_bd3043ac164d021f();
{ auto cs_this = pls::cs::make_ref<cs_bd3043ac164d021f>(); cs_2699965129f6a232_init(cs_this,v_src); return cs_this; }
}

void cs_2699965129f6a232_init(pls::cs::Ref<cs_bd3043ac164d021f> cs_this,pls::cs::String v_src) {
cs_this->cs_601e287145250385 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/SponsorData.cs:M:data.SponsorData.#ctor(System.String):839",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))));
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.#ctor(System.String)",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_7feb13590a54786c() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_d96057d2c61e3445() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd3043ac164d021f>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ee6741c0910b8b25(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd3043ac164d021f>>(cs_this); pls::cs::String cs_arg0 = v_src; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8f0f37521764bf27(cs_receiver,cs_arg0); }());
}
}
}

// M:data.SponsorData.ChangeState(System.Int32)
void cs_2ebff4ed9484ea5e(pls::cs::Ref<cs_bd3043ac164d021f> cs_this,std::int32_t v_state) { cs_init_bd3043ac164d021f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.ChangeState(System.Int32)",game);
{
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f0f476890aa67d1b; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_state; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_792072ed01591cb4 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = v_state; pls::game::cs_require(cs_target)->cs_f0f476890aa67d1b = cs_value; return cs_value; }());
}
}
}
}

// M:data.SponsorData.Deserialize(java.io.InputStream)
void cs_5b72ece6ea740ac2(pls::cs::Ref<cs_bd3043ac164d021f> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_bd3043ac164d021f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.Deserialize(java.io.InputStream)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_f0f476890aa67d1b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_fbb7dfc4736997fe = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_51d53808250d860a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_792072ed01591cb4 = cs_value; return cs_value; }());
}
}
}
}

// M:data.SponsorData.Draw_sponsorChara(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)
void cs_96b71976a8afb2ff(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_charaId,std::int32_t v_dx,std::int32_t v_dy) { cs_init_bd3043ac164d021f();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.Draw_sponsorChara(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_7feb13590a54786c(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa9ull)); return cs_array.get_Item(cs_index); }()); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_dx; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_dy; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return pls::cs::sub_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_charaId; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::mod_i32(cs_left,cs_right); }())); return pls::cs::mul_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_charaId; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::div_i32(cs_left,cs_right); }())); return pls::cs::mul_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());});
}
}
}

// M:data.SponsorData.GetDifficultStr
pls::cs::String cs_d48dfa4448b977ba(pls::cs::Ref<cs_bd3043ac164d021f> cs_this) { cs_init_bd3043ac164d021f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.GetDifficultStr",game);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f541e0d2e31d7fe; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); return (cs_left < cs_right); }())) {
return ([&]() { auto cs_array = cs_e6ecf2ecb1664f3f(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f541e0d2e31d7fe; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return (cs_left < cs_right); }())) {
return ([&]() { auto cs_array = cs_e6ecf2ecb1664f3f(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
}
return ([&]() { auto cs_array = cs_e6ecf2ecb1664f3f(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }());
}
}
}
}

// M:data.SponsorData.GetIncome
std::int32_t cs_133ab1ff637d568b(pls::cs::Ref<cs_bd3043ac164d021f> cs_this) { cs_init_bd3043ac164d021f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.GetIncome",game);
{
return ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fbb7dfc4736997fe; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); std::int32_t cs_arg3 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_601e287145250385; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg4 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_601e287145250385; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); bool cs_arg5 = true; return cs_c2e72dbaa2066493(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
}

// M:data.SponsorData.Init
void cs_ee6741c0910b8b25(pls::cs::Ref<cs_bd3043ac164d021f> cs_this) { cs_init_bd3043ac164d021f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.Init",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_f0f476890aa67d1b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_fbb7dfc4736997fe = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_51d53808250d860a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_792072ed01591cb4 = cs_value; return cs_value; }());
}
}
}
}

// M:data.SponsorData.IsExistNew
bool cs_049e0eb5a30e326f() { cs_init_bd3043ac164d021f();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.IsExistNew",game);
{
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_df4d36551e4e7018(cs_receiver,cs_arg0); }())))) {
return false;
}
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_4881 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
for (std::int32_t v_i_4927 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_4927; auto cs_right = (([&]() { auto cs_receiver = v_instance_4881; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_4927; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_4927 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd3043ac164d021f>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_instance_4881; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }()); auto cs_index = v_i_4927; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f26c74a3f658b98b(cs_receiver); }())) {
return true;
}
}
return false;
}
}
}

// M:data.SponsorData.IsNew
bool cs_f26c74a3f658b98b(pls::cs::Ref<cs_bd3043ac164d021f> cs_this) { cs_init_bd3043ac164d021f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.IsNew",game);
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_792072ed01591cb4; }())) {
return true;
}
return false;
}
}
}
}

// M:data.SponsorData.Load(System.String)
void cs_8f0f37521764bf27(pls::cs::Ref<cs_bd3043ac164d021f> cs_this,pls::cs::String v_src) { cs_init_bd3043ac164d021f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.Load(System.String)",game);
{
std::int32_t v_num_1566 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<pls::cs::String> v_array_1587 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18df8a841fecdd70 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_a8dd07e21120b8fc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_8414d28f2c564b08 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_fb9e2e54a4e5add8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_b3744c9c8902bc25 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_46c8a058571eeafc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_a50b7cd5744c495b = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_601e287145250385; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_601e287145250385; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_6eac5daaba2f3295 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_8f541e0d2e31d7fe = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_d08cdbaad6145b1d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_076d7a8d9883fcfd = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return cs_8cff19a3e40ed58e(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_983002ff6e0f2ea0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1587; auto cs_index = ([&]() { auto cs_old = v_num_1566; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1566 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_77b7447583c10f78 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d08cdbaad6145b1d; }()); pls::game::cs_require(cs_target)->cs_51d53808250d860a = cs_value; return cs_value; }());
}
}
}
}

// M:data.SponsorData.NewGame
void cs_0443c011bb471ba1(pls::cs::Ref<cs_bd3043ac164d021f> cs_this) { cs_init_bd3043ac164d021f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.NewGame",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_f0f476890aa67d1b = cs_value; return cs_value; }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77b7447583c10f78; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd3043ac164d021f>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2ebff4ed9484ea5e(cs_receiver,cs_arg0); }());
}
}
}
}
}

// M:data.SponsorData.RemoveNew
void cs_91e27b4f04f20882() { cs_init_bd3043ac164d021f();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.RemoveNew",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_5125 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
for (std::int32_t v_i_5171 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5171; auto cs_right = (([&]() { auto cs_receiver = v_instance_5125; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5171; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5171 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_instance_5125; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }()); auto cs_index = v_i_5171; return cs_array.get_Item(cs_index); }()); auto cs_value = false; pls::game::cs_require(cs_target)->cs_792072ed01591cb4 = cs_value; return cs_value; }());
}
}
}
}

// M:data.SponsorData.Serialize(java.io.OutputStream)
void cs_1613937bf1e1ad15(pls::cs::Ref<cs_bd3043ac164d021f> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_bd3043ac164d021f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f0f476890aa67d1b; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fbb7dfc4736997fe; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_51d53808250d860a; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_792072ed01591cb4; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());});
}
}
}
}

// M:data.SponsorData.UpdateSatisFactPoint
void cs_783eeb903890d4d1() { cs_init_bd3043ac164d021f();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.SponsorData.UpdateSatisFactPoint",game);
{
pls::cs::Ref<cs_169021fb033627ed> v_teamData_3421 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_7feb13590a54786c(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }()); auto cs_index = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_d96057d2c61e3445(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58530a52dc525520; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_759d3fbb8e1c6be6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
pls::cs::Ref<cs_169021fb033627ed> v_teamData2_3481 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_7feb13590a54786c(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }()); auto cs_index = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_d96057d2c61e3445(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58530a52dc525520; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_759d3fbb8e1c6be6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
bool v_flag_3538 = false;
bool v_flag2_3560 = false;
bool v_flag3_3583 = false;
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_d96057d2c61e3445(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58530a52dc525520; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1dc6ad81a01b35ba; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_d96057d2c61e3445(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58530a52dc525520; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1dc6ad81a01b35ba; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = true; v_flag_3538 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_d96057d2c61e3445(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58530a52dc525520; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1dc6ad81a01b35ba; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_d96057d2c61e3445(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58530a52dc525520; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1dc6ad81a01b35ba; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag2_3560 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = true; v_flag3_3583 = cs_value; return cs_value; }());
}
if (v_flag3_3583) {
return;
}
std::int32_t v_x_3838 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_teamData_3421; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4120c353f39753d8; }()); auto cs_right = ([&]() { auto cs_receiver = v_teamData2_3481; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4120c353f39753d8; }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_x2_3899 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (v_flag_3538) {
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_x_3838; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffceull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14dull)); bool cs_arg5 = true; return cs_c2e72dbaa2066493(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()); v_x2_3899 = cs_value; return cs_value; }());
} else if (v_flag2_3560) {
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_x_3838; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffceull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14dull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); bool cs_arg5 = true; return cs_c2e72dbaa2066493(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()); v_x2_3899 = cs_value; return cs_value; }());
}
for (std::int32_t v_i_4088 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_4088; auto cs_right = (([&]() { auto cs_receiver = cs_7feb13590a54786c(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_4088; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_4088 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_bd3043ac164d021f> v_sponsorData_4153 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_7feb13590a54786c(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d0591574a68d1633; }()); auto cs_index = v_i_4088; return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_sponsorData_4153; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f0f476890aa67d1b; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left != cs_right); }())) {
continue;
}
std::int32_t v_x3_4242 = ([&]() { auto cs_receiver = v_sponsorData_4153; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6eac5daaba2f3295; }());
std::int32_t v_c2min_4284 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_x3_4242; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg5 = true; return cs_c2e72dbaa2066493(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
std::int32_t v_c2max_4343 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_x3_4242; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg5 = true; return cs_c2e72dbaa2066493(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
std::int32_t v_num_4403 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_x2_3899; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); std::int32_t cs_arg3 = v_c2min_4284; std::int32_t cs_arg4 = v_c2max_4343; bool cs_arg5 = true; return cs_c2e72dbaa2066493(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() { auto cs_target = v_sponsorData_4153; auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_sponsorData_4153; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fbb7dfc4736997fe; }()); auto cs_right = v_num_4403; return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return cs_c821e1f1992a1342(cs_arg0,cs_arg1,cs_arg2); }()); pls::game::cs_require(cs_target)->cs_fbb7dfc4736997fe = cs_value; return cs_value; }());
}
}
}
}
}
