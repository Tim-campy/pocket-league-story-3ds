// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_86e62a3c0e632a0f.hpp"
#include "portable_generated_type_a0cf9aef6a251bfd.hpp"
#include "portable_generated_type_bd164c3c94a49e2a.hpp"
namespace pls::generated {

void cs_bd164c3c94a49e2a::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_7e5e9d5195f577e0,visitor);pls::cs::trace_value(cs_83418f44729261df,visitor);pls::cs::trace_value(cs_79a097054602f289,visitor);}

void cs_bd164c3c94a49e2a::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_7e5e9d5195f577e0);pls::cs::release_value(cs_83418f44729261df);pls::cs::release_value(cs_79a097054602f289);}

std::int32_t cs_bd164c3c94a49e2a::GetHashCode() {return cs_bf31ab7151677a25(pls::cs::static_pointer_cast<cs_bd164c3c94a49e2a>(shared_from_this()));}

pls::cs::String cs_bd164c3c94a49e2a::ToString() {return cs_67d34e7fd071e188(pls::cs::static_pointer_cast<cs_bd164c3c94a49e2a>(shared_from_this()));}

static std::int64_t cs_a55a986dcce0645f_value{};

static pls::cs::Ref<cs_a0cf9aef6a251bfd> cs_1e58df81cbed8f35_value{};

void cs_init_bd164c3c94a49e2a(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_a55a986dcce0645f_value,visitor);pls::cs::trace_value(cs_1e58df81cbed8f35_value,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.util.SecureNumber",[](){

});}

std::int64_t& cs_a55a986dcce0645f(){cs_init_bd164c3c94a49e2a();return cs_a55a986dcce0645f_value;}

pls::cs::Ref<cs_a0cf9aef6a251bfd>& cs_1e58df81cbed8f35(){cs_init_bd164c3c94a49e2a();return cs_1e58df81cbed8f35_value;}

// M:kairo.unity.util.SecureNumber.#ctor
void cs_a55d2b3f0d930c1e_init(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureNumber.#ctor",kairo);
{

}
}
}

// M:kairo.unity.util.SecureNumber.#ctor(System.Int64)
void cs_6a8c2e7be2327b6f_init(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this,std::int64_t v_value) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureNumber.#ctor(System.Int64)",kairo);
{
([&]() -> pls::cs::Ref<cs_bd164c3c94a49e2a> { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd164c3c94a49e2a>>(cs_this); std::int64_t cs_arg0 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_322ad21e82d893d1(cs_receiver,cs_arg0); }());
}
}
}

// M:kairo.unity.util.SecureNumber.Generate(System.Int64)
std::int64_t cs_b952a8b36c6ec76a(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this,std::int64_t v_value) { cs_init_bd164c3c94a49e2a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureNumber.Generate(System.Int64)",kairo);
{
return ([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(~((([&]() -> std::int64_t { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int64_t>(~(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e5e9d5195f577e0; }()))); return (cs_left | cs_right); }())))); auto cs_right = (([&]() -> std::int64_t { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int64_t>(~(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e5e9d5195f577e0; }()))); return (cs_left & cs_right); }())); return (cs_left | cs_right); }());
}
}
}
}

// M:kairo.unity.util.SecureNumber.GetHashCode
std::int32_t cs_bf31ab7151677a25(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this) { cs_init_bd164c3c94a49e2a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureNumber.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(cs_this));return pls::generated::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:kairo.unity.util.SecureNumber.GetLong
std::int64_t cs_229565c5769360dd(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this) { cs_init_bd164c3c94a49e2a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureNumber.GetLong",kairo);
{
std::int64_t v_num_881 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd164c3c94a49e2a>>(cs_this); std::int64_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_79a097054602f289; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b952a8b36c6ec76a(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_num_881; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83418f44729261df; }()); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = cs_a55a986dcce0645f(); auto cs_new = pls::cs::add_i64(cs_old,1); cs_a55a986dcce0645f() = cs_new; return cs_old; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_num_881; pls::generated::cs_require(cs_target)->cs_83418f44729261df = cs_value; return cs_value; }());
}
return v_num_881;
}
}
}
}

// M:kairo.unity.util.SecureNumber.SetLong(System.Int64)
pls::cs::Ref<cs_bd164c3c94a49e2a> cs_322ad21e82d893d1(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this,std::int64_t v_value) { cs_init_bd164c3c94a49e2a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureNumber.SetLong(System.Int64)",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(cs_1e58df81cbed8f35()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/SecureNumber.cs:M:kairo.unity.util.SecureNumber.SetLong(System.Int64):521",([&]() -> pls::cs::Ref<cs_a0cf9aef6a251bfd> { return cs_783c2dc4bd688739(); }())); cs_1e58df81cbed8f35() = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x22ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_a0cf9aef6a251bfd>>(cs_1e58df81cbed8f35()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1811bb4f9e389c4b(cs_receiver); }()); return (cs_left | cs_right); }())); pls::generated::cs_require(cs_target)->cs_7e5e9d5195f577e0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::generated::cs_require(cs_target)->cs_83418f44729261df = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd164c3c94a49e2a>>(cs_this); std::int64_t cs_arg0 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b952a8b36c6ec76a(cs_receiver,cs_arg0); }()); pls::generated::cs_require(cs_target)->cs_79a097054602f289 = cs_value; return cs_value; }());
return cs_this;
}
}
}
}

// M:kairo.unity.util.SecureNumber.ToString
pls::cs::String cs_67d34e7fd071e188(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this) { cs_init_bd164c3c94a49e2a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureNumber.ToString",kairo);
{
return ([&]() -> pls::cs::String { std::int64_t cs_arg0 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd164c3c94a49e2a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_229565c5769360dd(cs_receiver); }()); return cs_45bf8972ccfd60d6(cs_arg0); }());
}
}
}
}
}
