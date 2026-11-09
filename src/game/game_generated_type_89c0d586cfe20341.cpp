// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_4c145fe8f008af05.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
namespace pls::game {

void cs_89c0d586cfe20341::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_a54a7772b0af70eb,visitor);pls::cs::trace_value(cs_6480f04c9d401dc1,visitor);}

void cs_89c0d586cfe20341::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_a54a7772b0af70eb);pls::cs::release_value(cs_6480f04c9d401dc1);}

bool cs_89c0d586cfe20341::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_4b78e5289d2c84c2(std::static_pointer_cast<cs_89c0d586cfe20341>(shared_from_this()),v_obj);}

std::int32_t cs_89c0d586cfe20341::GetHashCode() {return cs_d33c547c634b2bdf(std::static_pointer_cast<cs_89c0d586cfe20341>(shared_from_this()));}

static pls::cs::List<pls::cs::Ref<cs_89c0d586cfe20341>> cs_110a219403a49c59_value{};

void cs_init_89c0d586cfe20341(){static pls::cs::TypeInitState state;state.run("java.lang.JThread",[](){
cs_110a219403a49c59_value = pls::cs::evaluate_type_initializer_field("F:java.lang.JThread.threadBuffer_",[&](){return pls::cs::List<pls::cs::Ref<cs_89c0d586cfe20341>>::make();});

});}

pls::cs::List<pls::cs::Ref<cs_89c0d586cfe20341>>& cs_110a219403a49c59(){cs_init_89c0d586cfe20341();return cs_110a219403a49c59_value;}

// M:java.lang.JThread.#ctor
pls::cs::Ref<cs_89c0d586cfe20341> cs_f8a8e5cab3297e6d() { cs_init_89c0d586cfe20341();
{ auto cs_this = pls::cs::make_ref<cs_89c0d586cfe20341>(); cs_f8a8e5cab3297e6d_init(cs_this); return cs_this; }
}

void cs_f8a8e5cab3297e6d_init(pls::cs::Ref<cs_89c0d586cfe20341> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JThread.#ctor",kairo);
{

}
}
}

// M:java.lang.JThread.#ctor(java.lang.JRunnable)
pls::cs::Ref<cs_89c0d586cfe20341> cs_bab91f84bee2e3d9(pls::cs::Ref<cs_4c145fe8f008af05> v_target) { cs_init_89c0d586cfe20341();
{ auto cs_this = pls::cs::make_ref<cs_89c0d586cfe20341>(); cs_bab91f84bee2e3d9_init(cs_this,v_target); return cs_this; }
}

void cs_bab91f84bee2e3d9_init(pls::cs::Ref<cs_89c0d586cfe20341> cs_this,pls::cs::Ref<cs_4c145fe8f008af05> v_target) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JThread.#ctor(java.lang.JRunnable)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_arg0 = ([&](){auto cs_target=static_cast<pls::cs::Ref<cs_4c145fe8f008af05>>(v_target);if(!cs_target)throw pls::cs::NullReferenceException();return pls::cs::Delegate<void()>::bind(cs_target,pls::cs::box(cs_target)->managed_delegate_method_id("cs_virtual_6cb47d5f5df8e7cc"),[cs_weak=std::weak_ptr<cs_4c145fe8f008af05>(cs_target)]()->void{auto cs_receiver=cs_weak.lock();if(!cs_receiver)throw pls::cs::NullReferenceException();cs_receiver->cs_virtual_6cb47d5f5df8e7cc();});}()); return pls::cs::make_ref<pls::cs::Thread>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_a54a7772b0af70eb = cs_value; return cs_value; }());
}
}
}

// M:java.lang.JThread.#ctor(System.Threading.ThreadStart)
pls::cs::Ref<cs_89c0d586cfe20341> cs_6ac8ad3def9eea9e(pls::cs::Delegate<void()> v_start) { cs_init_89c0d586cfe20341();
{ auto cs_this = pls::cs::make_ref<cs_89c0d586cfe20341>(); cs_6ac8ad3def9eea9e_init(cs_this,v_start); return cs_this; }
}

void cs_6ac8ad3def9eea9e_init(pls::cs::Ref<cs_89c0d586cfe20341> cs_this,pls::cs::Delegate<void()> v_start) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JThread.#ctor(System.Threading.ThreadStart)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_arg0 = v_start; return pls::cs::make_ref<pls::cs::Thread>(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_a54a7772b0af70eb = cs_value; return cs_value; }());
}
}
}

// M:java.lang.JThread.CurrentThread
pls::cs::Ref<cs_89c0d586cfe20341> cs_c84940406f4f068f() { cs_init_89c0d586cfe20341();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JThread.CurrentThread",kairo);
{
for (std::int32_t v_i_1625 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1625; auto cs_right = (cs_110a219403a49c59()).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1625; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1625 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_array = cs_110a219403a49c59(); auto cs_index = v_i_1625; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a54a7772b0af70eb; }())); auto cs_right = pls::cs::box(pls::cs::Thread::get_CurrentThread()); return cs_left == cs_right; }())) {
return ([&]() { auto cs_array = cs_110a219403a49c59(); auto cs_index = v_i_1625; return cs_array.get_Item(cs_index); }());
}
}
if (([&]() -> bool { auto cs_left = (cs_110a219403a49c59()).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left > cs_right); }())) {
for (std::int32_t v_num_1822 = ([&]() -> std::int32_t { auto cs_left = (cs_110a219403a49c59()).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_1822; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_1822; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_1822 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::game::cs_require(([&]() { auto cs_receiver = ([&]() { auto cs_array = cs_110a219403a49c59(); auto cs_index = v_num_1822; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a54a7772b0af70eb; }()))->get_ThreadState(); auto cs_right = static_cast<pls::cs::ThreadState>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left != cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_110a219403a49c59(); auto cs_arg0 = v_num_1822; cs_receiver.RemoveAt(cs_arg0); }());});
}
}
}
pls::cs::Ref<cs_89c0d586cfe20341> v_jThread_2019 = ([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { return cs_f8a8e5cab3297e6d(); }());
([&]() { auto cs_target = v_jThread_2019; auto cs_value = pls::cs::Thread::get_CurrentThread(); pls::game::cs_require(cs_target)->cs_a54a7772b0af70eb = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_110a219403a49c59(); auto cs_arg0 = v_jThread_2019; cs_receiver.Add(cs_arg0); }());});
return v_jThread_2019;
}
}
}

// M:java.lang.JThread.Equals(System.Object)
bool cs_4b78e5289d2c84c2(pls::cs::Ref<cs_89c0d586cfe20341> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_89c0d586cfe20341();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JThread.Equals(System.Object)",kairo);
{
if (pls::game::cs_is<pls::cs::Ref<cs_89c0d586cfe20341>>(pls::cs::box(v_obj))) {
return ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a54a7772b0af70eb; }())); auto cs_right = pls::cs::box(([&]() { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_89c0d586cfe20341>>(v_obj)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a54a7772b0af70eb; }())); return cs_left == cs_right; }());
}
if (pls::game::cs_is<pls::cs::Ref<pls::cs::Thread>>(pls::cs::box(v_obj))) {
return ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a54a7772b0af70eb; }())); auto cs_right = pls::cs::box(pls::cs::unbox<pls::cs::Ref<pls::cs::Thread>>(v_obj)); return cs_left == cs_right; }());
}
return ([&]() { auto cs_left = pls::cs::box(cs_this); auto cs_right = pls::cs::box(v_obj); return cs_left == cs_right; }());
}
}
}
}

// M:java.lang.JThread.GetHashCode
std::int32_t cs_d33c547c634b2bdf(pls::cs::Ref<cs_89c0d586cfe20341> cs_this) { cs_init_89c0d586cfe20341();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JThread.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:java.lang.JThread.op_Equality(java.lang.JThread,java.lang.JThread)
bool cs_f0878a49dfa6a661(pls::cs::Ref<cs_89c0d586cfe20341> v_obj1,pls::cs::Ref<cs_89c0d586cfe20341> v_obj2) { cs_init_89c0d586cfe20341();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JThread.op_Equality(java.lang.JThread,java.lang.JThread)",kairo);
{
if ((([&]() { auto cs_left = pls::cs::box(pls::cs::box(v_obj1)); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() { auto cs_left = pls::cs::box(pls::cs::box(v_obj2)); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()))) {
return ([&]() { auto cs_left = pls::cs::box(pls::cs::box(v_obj1)); auto cs_right = pls::cs::box(v_obj2); return cs_left == cs_right; }());
}
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_89c0d586cfe20341>>(v_obj1); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_obj2); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Equals(cs_arg0); }());
}
}
}

// M:java.lang.JThread.op_Inequality(java.lang.JThread,java.lang.JThread)
bool cs_dfac0766ed9ac2a3(pls::cs::Ref<cs_89c0d586cfe20341> v_obj1,pls::cs::Ref<cs_89c0d586cfe20341> v_obj2) { cs_init_89c0d586cfe20341();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JThread.op_Inequality(java.lang.JThread,java.lang.JThread)",kairo);
{
return (!((([&]() { pls::cs::Ref<cs_89c0d586cfe20341> cs_left = v_obj1; pls::cs::Ref<cs_89c0d586cfe20341> cs_right = v_obj2; return cs_f0878a49dfa6a661(cs_left,cs_right); }()))));
}
}
}

// M:java.lang.JThread.Sleep(System.Int64)
void cs_26244a61d0d2e16c(std::int64_t v_millis) { cs_init_89c0d586cfe20341();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JThread.Sleep(System.Int64)",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_millis); pls::cs::Thread::Sleep(cs_arg0); }());});
}
}
}

// M:java.lang.JThread.Start
void cs_b9636031b790b537(pls::cs::Ref<cs_89c0d586cfe20341> cs_this) { cs_init_89c0d586cfe20341();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JThread.Start",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a54a7772b0af70eb; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a54a7772b0af70eb; }()); pls::game::cs_require(cs_receiver)->Start(); }());});
}
}
}
}
}

// M:java.lang.JThread.Yield
void cs_012506043193cb2a() { cs_init_89c0d586cfe20341();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JThread.Yield",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Thread::Sleep(cs_arg0); }());});
}
}
}
}
