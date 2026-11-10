// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_f3ea616d36334b95.hpp"
namespace pls::generated {

static pls::cs::Array<std::int8_t> cs_229d1569f1fc0620_value{};

static pls::cs::Array<std::int32_t> cs_0ee869b1ec0c9fc3_value{};

static pls::cs::Array<std::int16_t> cs_4854f02f058c4f7b_value{};

void cs_init_f3ea616d36334b95(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.BitUtil",[](){
cs_229d1569f1fc0620_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.BitUtil.split_tmpB",[&](){return pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/BitUtil.cs:M:kairo.unity.util.BitUtil.Check(System.Int32,System.Int32):92",pls::cs::Array<std::int8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))));});
cs_4854f02f058c4f7b_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.BitUtil.split_tmpS",[&](){return pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/BitUtil.cs:M:kairo.unity.util.BitUtil.Check(System.Int32,System.Int32):145",pls::cs::Array<std::int16_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))));});
cs_0ee869b1ec0c9fc3_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.BitUtil.split_tmpI",[&](){return pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/BitUtil.cs:M:kairo.unity.util.BitUtil.Check(System.Int32,System.Int32):196",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))));});

});}

pls::cs::Array<std::int8_t>& cs_229d1569f1fc0620(){cs_init_f3ea616d36334b95();return cs_229d1569f1fc0620_value;}

pls::cs::Array<std::int32_t>& cs_0ee869b1ec0c9fc3(){cs_init_f3ea616d36334b95();return cs_0ee869b1ec0c9fc3_value;}

pls::cs::Array<std::int16_t>& cs_4854f02f058c4f7b(){cs_init_f3ea616d36334b95();return cs_4854f02f058c4f7b_value;}

// M:kairo.unity.util.BitUtil.Check(System.Int32,System.Int32)
bool cs_0bb436a75579d50a(std::int32_t v_v,std::int32_t v_bit) { cs_init_f3ea616d36334b95();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.BitUtil.Check(System.Int32,System.Int32)",kairo);
{
return ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_v; auto cs_right = v_bit; return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }());
}
}
}

// M:kairo.unity.util.BitUtil.Join(System.Int16,System.Int16)
std::int32_t cs_959570d45f7028be(std::int16_t v_high,std::int16_t v_low) { cs_init_f3ea616d36334b95();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.BitUtil.Join(System.Int16,System.Int16)",kairo);
{
return ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_high); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_low); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }())); return (cs_left | cs_right); }());
}
}
}

// M:kairo.unity.util.BitUtil.Off(System.Int32,System.Int32)
std::int32_t cs_14daf94c5cc9a117(std::int32_t v_v,std::int32_t v_bit) { cs_init_f3ea616d36334b95();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.BitUtil.Off(System.Int32,System.Int32)",kairo);
{
return ([&]() { auto cs_old = v_v; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(~(v_bit)); auto cs_value = (cs_old & cs_rhs); v_v = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.util.BitUtil.On(System.Int32,System.Int32)
std::int32_t cs_239ce9a0914fe00b(std::int32_t v_v,std::int32_t v_bit) { cs_init_f3ea616d36334b95();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.BitUtil.On(System.Int32,System.Int32)",kairo);
{
return ([&]() -> std::int32_t { auto cs_left = v_v; auto cs_right = v_bit; return (cs_left | cs_right); }());
}
}
}

// M:kairo.unity.util.BitUtil.Split(System.Int32)
pls::cs::Array<std::int16_t> cs_ba020c0b5c680349(std::int32_t v_value) { cs_init_f3ea616d36334b95();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.BitUtil.Split(System.Int32)",kairo);
{
([&]() { auto cs_target = cs_4854f02f058c4f7b(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>((([&]() -> std::int64_t { auto cs_left = (([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_value); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shr_i64(cs_left,cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_4854f02f058c4f7b(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int16_t>((([&]() -> std::int32_t { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffull)); return (cs_left & cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return cs_4854f02f058c4f7b();
}
}
}
}
