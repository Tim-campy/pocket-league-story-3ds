// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_381ecfc7910ffbab.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
namespace pls::game {

static std::int32_t cs_ee68d7af15d52996_value{};

static std::int32_t cs_d55e531dc45044c8_value{};

static std::int32_t cs_488c822c37320213_value{};

static std::int32_t cs_949f450fbe8c712e_value{};

static std::int32_t cs_a5a25a2e3d29a692_value{};

static std::int32_t cs_8fd991c5a14be628_value{};

static std::int32_t cs_14be5baf84375bb9_value{};

static std::int32_t cs_92a1a5572c032916_value{};

void cs_init_381ecfc7910ffbab(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_ee68d7af15d52996_value,visitor);pls::cs::trace_value(cs_d55e531dc45044c8_value,visitor);pls::cs::trace_value(cs_488c822c37320213_value,visitor);pls::cs::trace_value(cs_949f450fbe8c712e_value,visitor);pls::cs::trace_value(cs_a5a25a2e3d29a692_value,visitor);pls::cs::trace_value(cs_8fd991c5a14be628_value,visitor);pls::cs::trace_value(cs_14be5baf84375bb9_value,visitor);pls::cs::trace_value(cs_92a1a5572c032916_value,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.native.KairoPlugin",[](){
cs_949f450fbe8c712e_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.sdk_",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));});
cs_488c822c37320213_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.isTablet_",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));});
cs_14be5baf84375bb9_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.systemBarHeight_",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull));});
cs_a5a25a2e3d29a692_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.statusBarHeight_",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull));});
cs_92a1a5572c032916_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.unityVarsion_",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull));});
cs_8fd991c5a14be628_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.statusBarPosition_",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull));});
cs_d55e531dc45044c8_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.appWidth_",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));});
cs_ee68d7af15d52996_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.appHeight_",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));});

});}

std::int32_t& cs_ee68d7af15d52996(){cs_init_381ecfc7910ffbab();return cs_ee68d7af15d52996_value;}

std::int32_t& cs_d55e531dc45044c8(){cs_init_381ecfc7910ffbab();return cs_d55e531dc45044c8_value;}

std::int32_t& cs_488c822c37320213(){cs_init_381ecfc7910ffbab();return cs_488c822c37320213_value;}

std::int32_t& cs_949f450fbe8c712e(){cs_init_381ecfc7910ffbab();return cs_949f450fbe8c712e_value;}

std::int32_t& cs_a5a25a2e3d29a692(){cs_init_381ecfc7910ffbab();return cs_a5a25a2e3d29a692_value;}

std::int32_t& cs_8fd991c5a14be628(){cs_init_381ecfc7910ffbab();return cs_8fd991c5a14be628_value;}

std::int32_t& cs_14be5baf84375bb9(){cs_init_381ecfc7910ffbab();return cs_14be5baf84375bb9_value;}

std::int32_t& cs_92a1a5572c032916(){cs_init_381ecfc7910ffbab();return cs_92a1a5572c032916_value;}

// M:kairo.unity.native.KairoPlugin.CancelNotifications(System.Boolean,System.Boolean)
void cs_749d49646f9339d3(bool v_notify,bool v_ararm) { cs_init_381ecfc7910ffbab();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.native.KairoPlugin.CancelNotifications(System.Boolean,System.Boolean)",kairo);
{
return;
}
}
}

// M:kairo.unity.native.KairoPlugin.GetReleaseNumber
pls::cs::String cs_0d8fb4e4b5984298() { cs_init_381ecfc7910ffbab();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.native.KairoPlugin.GetReleaseNumber",kairo);
{
pls::cs::String v_text_3019 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { return pls::kairo::native_release(); }());});
for (std::int32_t v_num_3052 = ([&]() -> std::int32_t { auto cs_left = (v_text_3019).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_3052; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_3052; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_3052 = cs_new; return cs_old; }())) {
if ((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(char16_t(48)); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text_3019; auto cs_index = v_num_3052; return cs_array.at(cs_index); }())); return (cs_left > cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text_3019; auto cs_index = v_num_3052; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(57)); return (cs_left >= cs_right); }()))) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text_3019; auto cs_index = v_num_3052; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(46)); return (cs_left != cs_right); }()))) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text_3019; auto cs_arg1 = v_num_3052; return pls::cs::string_remove(cs_arg0,cs_arg1); }());}); v_text_3019 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = (v_text_3019).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0037" u"\x002e" u"\x0030" u"",3);return cs_literal;}()); v_text_3019 = cs_value; return cs_value; }());
}
return v_text_3019;
}
}
}

// M:kairo.unity.native.KairoPlugin.IsWeakDrawDevice
bool cs_8f839333536cd1aa() { cs_init_381ecfc7910ffbab();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.native.KairoPlugin.IsWeakDrawDevice",kairo);
{
return false;
}
}
}

// M:kairo.unity.native.KairoPlugin.SetNotificationBackground(System.Boolean)
void cs_b0502ca03ca03061(bool v_enable) { cs_init_381ecfc7910ffbab();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.native.KairoPlugin.SetNotificationBackground(System.Boolean)",kairo);
{
return;
}
}
}
}
