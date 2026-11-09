// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_f3ea616d36334b95.hpp"
#include "generated/portable_generated_type_f3ea616d36334b95.hpp"
namespace pls::game {

// M:kairo.unity.util.BitUtil.Join(System.Int32,System.Int32)
std::int64_t cs_d08f1252d303b1f0(std::int32_t v_high,std::int32_t v_low) { pls::generated::cs_init_f3ea616d36334b95();
{
return ([&]() -> std::int64_t { auto cs_left = (([&]() -> std::int64_t { auto cs_left = (([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_high); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffffffffull))); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::cs::shl_i64(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_low); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffffffffull))); return (cs_left & cs_right); }())); return (cs_left | cs_right); }());
}
}

// M:kairo.unity.util.BitUtil.Split(System.Int64)
pls::cs::Array<std::int32_t> cs_b37fd969c7a5953c(std::int64_t v_value) { pls::generated::cs_init_f3ea616d36334b95();
{
std::uint64_t v_num_1995 = pls::cs::cast_integral<std::uint64_t>(std::uint64_t(0xffffffff00000000ull));
([&]() { auto cs_target = pls::generated::cs_0ee869b1ec0c9fc3(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>((([&]() -> std::uint64_t { auto cs_left = pls::cs::cast_integral<std::uint64_t>(v_value); auto cs_right = v_num_1995; return (cs_left & cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::cs::shr_i64(cs_left,cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = pls::generated::cs_0ee869b1ec0c9fc3(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffffffffull))); return (cs_left & cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return pls::generated::cs_0ee869b1ec0c9fc3();
}
}
}
