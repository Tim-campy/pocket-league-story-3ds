// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_e6ed65290db381ba.hpp"
#include "game_generated_type_efeeb7640894c95e.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
namespace pls::game {

void cs_init_e6ed65290db381ba(){static pls::cs::TypeInitState state;state.run("system.billing.util.Json",[](){

});}

// M:system.billing.util.Json.AdjustJson(System.String,System.String,System.String)
pls::cs::String cs_29cfbbc6ef724690(pls::cs::String v_receipt,pls::cs::String v_productID,pls::cs::String v_iOSPurchaseTime) { cs_init_e6ed65290db381ba();
{
pls::cs::String v_json_1833 = ([&]() -> pls::cs::String { auto cs_arg0 = v_receipt; auto cs_arg1 = pls::cs::String(std::u16string(u"\x005c" u"",1)); auto cs_arg2 = pls::cs::String(u""); return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }());
pls::cs::Array<pls::cs::Array<pls::cs::String>> v_array_1891 = ([&](){auto cs_initial_array_817=pls::cs::Array<pls::cs::Array<pls::cs::String>>::make(9);cs_initial_array_817.at(0)=([&](){auto cs_initial_array_818=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_818.at(0)=pls::cs::String(std::u16string(u"\x006f" u"\x0072" u"\x0064" u"\x0065" u"\x0072" u"\x0049" u"\x0064" u"",7));cs_initial_array_818.at(1)=pls::cs::String(u"");return cs_initial_array_818;}());cs_initial_array_817.at(1)=([&](){auto cs_initial_array_819=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_819.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x0061" u"\x0067" u"\x0065" u"\x004e" u"\x0061" u"\x006d" u"\x0065" u"",11));cs_initial_array_819.at(1)=pls::cs::String(u"");return cs_initial_array_819;}());cs_initial_array_817.at(2)=([&](){auto cs_initial_array_820=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_820.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0072" u"\x006f" u"\x0064" u"\x0075" u"\x0063" u"\x0074" u"\x0049" u"\x0064" u"",9));cs_initial_array_820.at(1)=pls::cs::String(u"");return cs_initial_array_820;}());cs_initial_array_817.at(3)=([&](){auto cs_initial_array_821=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_821.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0054" u"\x0069" u"\x006d" u"\x0065" u"",12));cs_initial_array_821.at(1)=pls::cs::String(u"");return cs_initial_array_821;}());cs_initial_array_817.at(4)=([&](){auto cs_initial_array_822=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_822.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0053" u"\x0074" u"\x0061" u"\x0074" u"\x0065" u"",13));cs_initial_array_822.at(1)=pls::cs::String(u"");return cs_initial_array_822;}());cs_initial_array_817.at(5)=([&](){auto cs_initial_array_823=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_823.at(0)=pls::cs::String(std::u16string(u"\x0064" u"\x0065" u"\x0076" u"\x0065" u"\x006c" u"\x006f" u"\x0070" u"\x0065" u"\x0072" u"\x0050" u"\x0061" u"\x0079" u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"",16));cs_initial_array_823.at(1)=pls::cs::String(u"");return cs_initial_array_823;}());cs_initial_array_817.at(6)=([&](){auto cs_initial_array_824=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_824.at(0)=pls::cs::String(std::u16string(u"\x0074" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",5));cs_initial_array_824.at(1)=pls::cs::String(u"");return cs_initial_array_824;}());cs_initial_array_817.at(7)=([&](){auto cs_initial_array_825=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_825.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0054" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",13));cs_initial_array_825.at(1)=pls::cs::String(u"");return cs_initial_array_825;}());cs_initial_array_817.at(8)=([&](){auto cs_initial_array_826=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_826.at(0)=pls::cs::String(std::u16string(u"\x0073" u"\x0069" u"\x0067" u"\x006e" u"\x0061" u"\x0074" u"\x0075" u"\x0072" u"\x0065" u"",9));cs_initial_array_826.at(1)=pls::cs::String(u"");return cs_initial_array_826;}());return cs_initial_array_817;}());
for (std::int32_t v_spriteIndex_2554 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_spriteIndex_2554; auto cs_right = (v_array_1891).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_spriteIndex_2554; auto cs_new = pls::cs::add_i32(cs_old,1); v_spriteIndex_2554 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::String> v_array2_2625 = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_spriteIndex_2554; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = v_array2_2625; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_json_1833; pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array2_2625; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
pls::cs::List<pls::cs::String> v_list_2711 = pls::cs::List<pls::cs::String>::make();
for (std::int32_t v_j_2750 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_2750; auto cs_right = (v_array_1891).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_2750; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_2750 = cs_new; return cs_old; }())) {
if (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_j_2750; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) || (([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_j_2750; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())))) {
continue;
}
([&]() -> void { auto cs_receiver = v_list_2711; auto cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_j_2750; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array_1891; auto cs_index = v_j_2750; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_e40f466cab31d73b(cs_arg0,cs_arg1); }()); cs_receiver.Add(cs_arg0); }());
}
return ([&]() -> pls::cs::String { pls::cs::Array<pls::cs::String> cs_arg0 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_receiver = v_list_2711; return cs_receiver.ToArray(); }()); return cs_d22851d911e39653(cs_arg0); }());
}
}

// M:system.billing.util.Json.AdjustJson(UnityEngine.Purchasing.Product)
pls::cs::String cs_49d01ebea931c030(pls::cs::Ref<cs_efeeb7640894c95e> v_p) { cs_init_e6ed65290db381ba();
{
return pls::cs::String{};
}
}

// M:system.billing.util.Json.GetDetailJson(UnityEngine.Purchasing.Product)
pls::cs::String cs_85a3de06f9737452(pls::cs::Ref<cs_efeeb7640894c95e> v_p) { cs_init_e6ed65290db381ba();
{
return pls::cs::String{};
}
}

// M:system.billing.util.Json.MakeJson(System.String[])
pls::cs::String cs_d22851d911e39653(pls::cs::Array<pls::cs::String> v_records) { cs_init_e6ed65290db381ba();
{
pls::cs::String v_text_1464 = pls::cs::String(std::u16string(u"\x007b" u"",1));
for (std::int32_t v_i_1488 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1488; auto cs_right = (v_records).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1488; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1488 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_text_1464; auto cs_rhs = ([&]() { auto cs_array = v_records; auto cs_index = v_i_1488; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1464 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_i_1488; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_records).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_text_1464; auto cs_rhs = pls::cs::String(std::u16string(u"\x002c" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1464 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_old = v_text_1464; auto cs_rhs = pls::cs::String(std::u16string(u"\x007d" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1464 = cs_value; return cs_value; }());
return v_text_1464;
}
}

// M:system.billing.util.Json.ReadJSon(System.String,System.String)
pls::cs::String cs_14929f68cda1ed89(pls::cs::String v_json,pls::cs::String v_key) { cs_init_e6ed65290db381ba();
{
if ((([&]() { auto cs_left = pls::cs::box(v_key); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() { auto cs_left = pls::cs::box(v_json); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()))) {
return pls::cs::String{};
}
pls::cs::Ref<pls::cs::RegexMatch> v_match_834 = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_json; auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0022" u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"\x0022" u"\x005c" u"\x0073" u"\x002a" u"\x003a" u"\x005c" u"\x0073" u"\x002a" u"\x0028" u"\x0022" u"\x005b" u"\x005e" u"\x0022" u"\x005d" u"\x002a" u"\x0022" u"\x007c" u"\x005b" u"\x0030" u"\x002d" u"\x0039" u"\x002e" u"\x005d" u"\x002a" u"\x0029" u"",31)); auto cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"",5)); auto cs_arg2 = v_key; return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());
if (pls::game::cs_require(v_match_834)->get_Success()) {
return ([&](){auto cs_text=pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_834)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(34);return pls::cs::string_trim(cs_text,cs_separators);}());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_json; auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0022" u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"\x0022" u"\x005c" u"\x0073" u"\x002a" u"\x003d" u"\x005c" u"\x0073" u"\x002a" u"\x0028" u"\x0022" u"\x005b" u"\x005e" u"\x0022" u"\x005d" u"\x002a" u"\x0022" u"\x007c" u"\x005b" u"\x0030" u"\x002d" u"\x0039" u"\x002e" u"\x005d" u"\x002a" u"\x0029" u"",31)); auto cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"",5)); auto cs_arg2 = v_key; return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }()); v_match_834 = cs_value; return cs_value; }());
if (pls::game::cs_require(v_match_834)->get_Success()) {
return ([&](){auto cs_text=pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_834)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(34);return pls::cs::string_trim(cs_text,cs_separators);}());
}
return pls::cs::String{};
}
}

// M:system.billing.util.Json.Record(System.String,System.String)
pls::cs::String cs_e40f466cab31d73b(pls::cs::String v_type,pls::cs::String v_value) { cs_init_e6ed65290db381ba();
{
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0022" u"",1)); auto cs_right = v_type; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0022" u"\x003a" u"\x0022" u"",3)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_value; return pls::generated::cs_d7ec43a7abb0b748(cs_arg0); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0022" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
