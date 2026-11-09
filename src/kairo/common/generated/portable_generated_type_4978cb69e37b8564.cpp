// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_4978cb69e37b8564.hpp"
namespace pls::generated {

static pls::cs::Array<std::uint8_t> cs_1c11d615d9916ed8_value{};

void cs_init_4978cb69e37b8564(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.Encrypter",[](){
cs_1c11d615d9916ed8_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Encrypter.key_",[&](){return pls::cs::Array<std::uint8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)));});

});}

pls::cs::Array<std::uint8_t>& cs_1c11d615d9916ed8(){cs_init_4978cb69e37b8564();return cs_1c11d615d9916ed8_value;}

// M:kairo.unity.util.Encrypter.Decode(System.Byte[],System.Byte[])
void cs_33fd658d45a27eb0(pls::cs::Array<std::uint8_t> v_src,pls::cs::Array<std::uint8_t> v_key) { cs_init_4978cb69e37b8564();
{
([&]() -> void { pls::cs::Array<std::uint8_t> cs_arg0 = v_src; pls::cs::Array<std::uint8_t> cs_arg1 = v_key; cs_17e1939c126befd5(cs_arg0,cs_arg1); }());
}
}

// M:kairo.unity.util.Encrypter.Decode(System.Byte[])
void cs_b78cf957d6d975eb(pls::cs::Array<std::uint8_t> v_src) { cs_init_4978cb69e37b8564();
{
([&]() -> void { pls::cs::Array<std::uint8_t> cs_arg0 = v_src; pls::cs::Array<std::uint8_t> cs_arg1 = cs_1c11d615d9916ed8(); cs_33fd658d45a27eb0(cs_arg0,cs_arg1); }());
}
}

// M:kairo.unity.util.Encrypter.Encode(System.Byte[],System.Byte[])
void cs_17e1939c126befd5(pls::cs::Array<std::uint8_t> v_src,pls::cs::Array<std::uint8_t> v_key) { cs_init_4978cb69e37b8564();
{
for (std::int32_t v_i_530 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_530; auto cs_right = (v_src).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_530; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_530 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_src; auto cs_index = v_i_530; auto cs_value = pls::cs::cast_integral<std::uint8_t>((([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_src; auto cs_index = v_i_530; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_key; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_i_530; auto cs_right = (v_key).length(); return pls::cs::mod_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left ^ cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}

// M:kairo.unity.util.Encrypter.SetEncryptionKey(System.Byte[])
void cs_a232dc3a48dd6d41(pls::cs::Array<std::uint8_t> v_key) { cs_init_4978cb69e37b8564();
{
([&]() { auto cs_value = v_key; cs_1c11d615d9916ed8() = cs_value; return cs_value; }());
}
}
}
