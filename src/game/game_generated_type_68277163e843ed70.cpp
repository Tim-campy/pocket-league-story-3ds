// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_68277163e843ed70.hpp"
#include "game_generated_type_70c4092da329e972.hpp"
#include "game_generated_type_77de402a688eeb9d.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
#include "generated/portable_generated_type_3af9088680f95fb3.hpp"
#include "generated/portable_generated_type_83a7bc36395d16bd.hpp"
namespace pls::game {

static pls::cs::List<pls::cs::Ref<cs_70c4092da329e972>> cs_b3c3facbebad5adb_value{};

static pls::cs::Array<pls::cs::String> cs_9a982ba0549bdebb_value{};

static bool cs_286ddfcc2d29fb20_value{};

static pls::cs::Ref<pls::cs::Object> cs_8c8ed916f00e435c_value{};

static pls::cs::Ref<cs_89c0d586cfe20341> cs_280b0a230ee3dea4_value{};

void cs_init_68277163e843ed70(){static pls::cs::TypeInitState state;state.run("kairo.unity.analytics.AnalyticsTracker",[](){
cs_9a982ba0549bdebb_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.analytics.AnalyticsTracker.HIT_TYPES",[&](){return ([&](){auto cs_initial_array_0=pls::cs::Array<pls::cs::String>::make(8);cs_initial_array_0.at(0)=pls::cs::String(std::u16string(u"\x0070" u"\x0061" u"\x0067" u"\x0065" u"\x0076" u"\x0069" u"\x0065" u"\x0077" u"",8));cs_initial_array_0.at(1)=pls::cs::String(std::u16string(u"\x0073" u"\x0063" u"\x0072" u"\x0065" u"\x0065" u"\x006e" u"\x0076" u"\x0069" u"\x0065" u"\x0077" u"",10));cs_initial_array_0.at(2)=pls::cs::String(std::u16string(u"\x0065" u"\x0076" u"\x0065" u"\x006e" u"\x0074" u"",5));cs_initial_array_0.at(3)=pls::cs::String(std::u16string(u"\x0074" u"\x0072" u"\x0061" u"\x006e" u"\x0073" u"\x0061" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",11));cs_initial_array_0.at(4)=pls::cs::String(std::u16string(u"\x0069" u"\x0074" u"\x0065" u"\x006d" u"",4));cs_initial_array_0.at(5)=pls::cs::String(std::u16string(u"\x0073" u"\x006f" u"\x0063" u"\x0069" u"\x0061" u"\x006c" u"",6));cs_initial_array_0.at(6)=pls::cs::String(std::u16string(u"\x0065" u"\x0078" u"\x0063" u"\x0065" u"\x0070" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",9));cs_initial_array_0.at(7)=pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x006d" u"\x0069" u"\x006e" u"\x0067" u"",6));return cs_initial_array_0;}());});
cs_b3c3facbebad5adb_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.analytics.AnalyticsTracker.analyticsBuffer_",[&](){return pls::cs::List<pls::cs::Ref<cs_70c4092da329e972>>::make();});
cs_8c8ed916f00e435c_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.analytics.AnalyticsTracker.lock_",[&](){return pls::cs::make_ref<pls::cs::Object>();});

});}

pls::cs::List<pls::cs::Ref<cs_70c4092da329e972>>& cs_b3c3facbebad5adb(){cs_init_68277163e843ed70();return cs_b3c3facbebad5adb_value;}

pls::cs::Array<pls::cs::String>& cs_9a982ba0549bdebb(){cs_init_68277163e843ed70();return cs_9a982ba0549bdebb_value;}

bool& cs_286ddfcc2d29fb20(){cs_init_68277163e843ed70();return cs_286ddfcc2d29fb20_value;}

pls::cs::Ref<pls::cs::Object>& cs_8c8ed916f00e435c(){cs_init_68277163e843ed70();return cs_8c8ed916f00e435c_value;}

pls::cs::Ref<cs_89c0d586cfe20341>& cs_280b0a230ee3dea4(){cs_init_68277163e843ed70();return cs_280b0a230ee3dea4_value;}

// M:kairo.unity.analytics.AnalyticsTracker.DispatchPageView
void cs_9d34ee3db26afc7b() { cs_init_68277163e843ed70();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.DispatchPageView",kairo);
{
if ((!(cs_286ddfcc2d29fb20()))) {
return;
}
if ((([&]() -> bool { auto cs_left = (cs_b3c3facbebad5adb()).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }()) || ([&]() { pls::cs::Ref<cs_89c0d586cfe20341> cs_left = cs_280b0a230ee3dea4(); pls::cs::Ref<cs_89c0d586cfe20341> cs_right = pls::cs::Ref<cs_89c0d586cfe20341>{}; return cs_dfac0766ed9ac2a3(cs_left,cs_right); }()))) {
return;
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { pls::cs::Delegate<void()> cs_arg0 = ([&](){return pls::cs::Delegate<void()>::from_static("M:kairo.unity.analytics.AnalyticsTracker.Run",[]()->void{cs_6deea87a1328db75();});}()); return cs_6ac8ad3def9eea9e(cs_arg0); }()); cs_280b0a230ee3dea4() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_89c0d586cfe20341>>(cs_280b0a230ee3dea4()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b9636031b790b537(cs_receiver); }());
}
}
}

// M:kairo.unity.analytics.AnalyticsTracker.Encode(System.String)
pls::cs::String cs_ce577f730d25026e(pls::cs::String v_url) { cs_init_68277163e843ed70();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.Encode(System.String)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_url; return pls::cs::uri_escape_data_string(cs_arg0); }());});
}
}
}

// M:kairo.unity.analytics.AnalyticsTracker.GetApplicationName
pls::cs::String cs_8f665f3f54f79b70() { cs_init_68277163e843ed70();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.GetApplicationName",kairo);
{
pls::cs::String v_packageName_3273 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetPackageName(); }());});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_packageName_3273; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_packageName_3273; auto cs_arg1 = pls::cs::String(std::u16string(u"\x002e" u"",1)); return pls::cs::culture_last_index_of(cs_arg0,cs_arg1); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_substring1(cs_arg0,cs_arg1); }());});
}
}
}

// M:kairo.unity.analytics.AnalyticsTracker.MakeClientId
pls::cs::String cs_eb4256a1bc4490b2() { cs_init_68277163e843ed70();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.MakeClientId",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Guid { return pls::cs::Guid::NewGuid(); }());}); return cs_receiver.ToString(); }());});
}
}
}

// M:kairo.unity.analytics.AnalyticsTracker.Run
void cs_6deea87a1328db75() { cs_init_68277163e843ed70();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.Run",kairo);
{
pls::cs::run_finally([&]() -> void { try {
while (([&]() -> bool { auto cs_left = (cs_b3c3facbebad5adb()).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
pls::cs::Ref<cs_70c4092da329e972> v_analyticsData_2410 = pls::cs::Ref<cs_70c4092da329e972>{};
pls::cs::Ref<cs_77de402a688eeb9d> v_httpObject_2448 = pls::cs::Ref<cs_77de402a688eeb9d>{};
{pls::cs::MonitorScope cs_monitor_779(cs_8c8ed916f00e435c());{
if (([&]() -> bool { auto cs_left = (cs_b3c3facbebad5adb()).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_array = cs_b3c3facbebad5adb(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); v_analyticsData_2410 = cs_value; return cs_value; }());
}
}}
if (([&]() { auto cs_left = pls::cs::box(v_analyticsData_2410); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_77de402a688eeb9d> { auto cs_arg0 = false; return cs_e751bd24448f57f3(cs_arg0); }()); v_httpObject_2448 = cs_value; return cs_value; }());
try {
([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(v_httpObject_2448); pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = v_analyticsData_2410; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dd489d151d299036; }()); pls::cs::Array<std::uint8_t> cs_arg1 = pls::cs::Array<std::uint8_t>{}; bool cs_arg2 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b9e6030919acf56d(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
} catch(const pls::cs::Exception& cs_caught_780) {auto cs_exception_780=pls::cs::capture_exception(cs_caught_780);
if(pls::cs::exception_is(cs_exception_780,"System.Exception")) {{
([&]() { auto cs_target = v_analyticsData_2410; auto cs_old = pls::game::cs_require(cs_target)->cs_d06132c0c6e80bc6; auto cs_new = pls::cs::add_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_d06132c0c6e80bc6 = cs_new; return cs_old; }());
([&]() -> void { cs_0664a3e5428b09ce(); }());
throw;
}}
else {throw;} }
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = cs_b3c3facbebad5adb(); auto cs_arg0 = v_analyticsData_2410; return cs_receiver.Remove(cs_arg0); }());});
([&]() -> void { cs_0664a3e5428b09ce(); }());
continue;
}
break;
}
} catch(const pls::cs::Exception& cs_caught_781) {auto cs_exception_781=pls::cs::capture_exception(cs_caught_781);
if(pls::cs::exception_is(cs_exception_781,"System.Exception")) {auto v_t_2953=cs_exception_781;{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_2953; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}}
else {throw;} } }, [&]() {
([&]() { auto cs_value = pls::cs::Ref<cs_89c0d586cfe20341>{}; cs_280b0a230ee3dea4() = cs_value; return cs_value; }());
});
}
}
}

// M:kairo.unity.analytics.AnalyticsTracker.Save
void cs_0664a3e5428b09ce() { cs_init_68277163e843ed70();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.Save",kairo);
{
if ((!(cs_286ddfcc2d29fb20()))) {
return;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_f847848b2729e34c : pls::cs::Object{void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);}void release_edges()override{pls::cs::Object::release_edges();}void Invoke(){{
try {
pls::cs::Ref<pls::cs::StringBuilder> v_stringBuilder_3573 = ([&]() { return pls::cs::make_ref<pls::cs::StringBuilder>(); }());
{pls::cs::MonitorScope cs_monitor_2(cs_8c8ed916f00e435c());{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3573; auto cs_arg0 = char16_t(49); return pls::game::cs_require(cs_receiver)->Append(cs_arg0); }());});
for (std::int32_t v_i_3683 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3683; auto cs_right = (cs_b3c3facbebad5adb()).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3683; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3683 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_70c4092da329e972> v_analyticsData_3752 = ([&]() { auto cs_array = cs_b3c3facbebad5adb(); auto cs_index = v_i_3683; return cs_array.get_Item(cs_index); }());
if (([&]() { auto cs_left = pls::cs::box(v_analyticsData_3752); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
if (([&]() -> bool { auto cs_left = v_i_3683; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3573; auto cs_arg0 = char16_t(10); return pls::game::cs_require(cs_receiver)->Append(cs_arg0); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3573; auto cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_receiver = v_analyticsData_3752; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dd489d151d299036; }()); auto cs_right = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = v_analyticsData_3752; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d06132c0c6e80bc6; }())); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = v_analyticsData_3752; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_aacdf84efc9d168d; }())); return pls::cs::String::concat(cs_left,cs_right); }()); return pls::game::cs_require(cs_receiver)->Append(cs_arg0); }());});
}
}
}}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x0041" u"\x006e" u"\x0061" u"\x006c" u"\x0079" u"\x0074" u"\x0069" u"\x0063" u"\x0073" u"\x0054" u"\x0072" u"\x0061" u"\x0063" u"\x006b" u"\x0065" u"\x0072" u"",17)); pls::cs::String cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = v_stringBuilder_3573; return pls::game::cs_require(cs_receiver)->ToString(); }());}); pls::kairo::PlayerPrefs::SetString(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::kairo::PlayerPrefs::Save(); }());});
} catch(const pls::cs::Exception& cs_caught_3) {auto cs_exception_3=pls::cs::capture_exception(cs_caught_3);
if(pls::cs::exception_is(cs_exception_3,"System.Exception")) {{

}}
else {throw;} }
}}};auto cs_closure=pls::cs::make_ref<cs_closure_f847848b2729e34c>();return pls::cs::Delegate<void()>::bind_identity(cs_closure,nullptr,std::string("M:kairo.unity.analytics.AnalyticsTracker.Save:3526"),[weak=std::weak_ptr<cs_closure_f847848b2729e34c>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());});
}
}
}

// M:kairo.unity.analytics.AnalyticsTracker.Setup
void cs_dc20b22a3922530e() { cs_init_68277163e843ed70();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.Setup",kairo);
{
if (cs_286ddfcc2d29fb20()) {
return;
}
([&]() { auto cs_value = true; cs_286ddfcc2d29fb20() = cs_value; return cs_value; }());
try {
pls::cs::String v_text_4302 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x005f" u"\x0041" u"\x006e" u"\x0061" u"\x006c" u"\x0079" u"\x0074" u"\x0069" u"\x0063" u"\x0073" u"\x0054" u"\x0072" u"\x0061" u"\x0063" u"\x006b" u"\x0065" u"\x0072" u"",17)); pls::cs::String cs_arg1 = pls::cs::String{}; return pls::kairo::PlayerPrefs::GetString(cs_arg0,cs_arg1); }());});
if ((([&]() { auto cs_left = pls::cs::box(v_text_4302); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = (v_text_4302).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
{pls::cs::MonitorScope cs_monitor_795(cs_8c8ed916f00e435c());{
([&]() { auto cs_value = pls::cs::List<pls::cs::Ref<cs_70c4092da329e972>>::make(); cs_b3c3facbebad5adb() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text_4302; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::game::cs_substring1(cs_arg0,cs_arg1); }());}); v_text_4302 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = (v_text_4302).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
pls::cs::Array<pls::cs::String> v_array_4566 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=v_text_4302;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(10);return pls::cs::string_split(cs_text,cs_separators);}());});
for (std::int32_t v_i_4608 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_4608; auto cs_right = (v_array_4566).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_4608; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_4608 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::String> v_array2_4664 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=([&]() { auto cs_array = v_array_4566; auto cs_index = v_i_4608; return cs_array.get_Item(cs_index); }());auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(9);return pls::cs::string_split(cs_text,cs_separators);}());});
pls::cs::Ref<cs_70c4092da329e972> v_analyticsData_4717 = ([&]() -> pls::cs::Ref<cs_70c4092da329e972> { return cs_d18c126e68c3c396(); }());
([&]() { auto cs_target = v_analyticsData_4717; auto cs_value = ([&]() { auto cs_array = v_array2_4664; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_dd489d151d299036 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_analyticsData_4717; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array2_4664; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_d06132c0c6e80bc6 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_analyticsData_4717; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { auto cs_arg0 = ([&]() { auto cs_array = v_array2_4664; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int64_parse(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_aacdf84efc9d168d = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_b3c3facbebad5adb(); auto cs_arg0 = v_analyticsData_4717; cs_receiver.Add(cs_arg0); }());});
}
}
}}
} else {
pls::cs::String v_installReferrer_4999 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String{}; return pls::kairo::native_install_referrer(cs_arg0); }());});
{pls::cs::MonitorScope cs_monitor_796(cs_8c8ed916f00e435c());{
([&]() { auto cs_value = pls::cs::List<pls::cs::Ref<cs_70c4092da329e972>>::make(); cs_b3c3facbebad5adb() = cs_value; return cs_value; }());
if ((([&]() { auto cs_left = pls::cs::box(v_installReferrer_4999); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = (v_installReferrer_4999).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() -> void { bool cs_arg0 = true; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0055" u"\x0041" u"\x002d" u"\x0033" u"\x0035" u"\x0032" u"\x0032" u"\x0038" u"\x0038" u"\x0037" u"\x0037" u"\x002d" u"\x0031" u"",13)); auto cs_arg2 = pls::cs::Array<pls::cs::String>::make(2); cs_arg2.at(0) = pls::cs::String(std::u16string(u"\x0072" u"\x0065" u"\x0066" u"\x0065" u"\x0072" u"\x0072" u"\x0065" u"\x0072" u"",8)); cs_arg2.at(1) = v_installReferrer_4999; cs_d56fc27939b907e9(cs_arg0,cs_arg1,cs_arg2); }());
}
([&]() -> void { cs_0664a3e5428b09ce(); }());
}}
}
([&]() -> void { cs_9d34ee3db26afc7b(); }());
} catch(const pls::cs::Exception& cs_caught_797) {auto cs_exception_797=pls::cs::capture_exception(cs_caught_797);
if(pls::cs::exception_is(cs_exception_797,"System.Exception")) {{

}}
else {throw;} }
}
}
}

// M:kairo.unity.analytics.AnalyticsTracker.TrackPageView(System.Boolean,System.String,System.String[])
void cs_d56fc27939b907e9(bool v_packageName,pls::cs::String v_id,pls::cs::Array<pls::cs::String> v_p) { cs_init_68277163e843ed70();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.TrackPageView(System.Boolean,System.String,System.String[])",kairo);
{
if ((!(cs_286ddfcc2d29fb20()))) {
return;
}
pls::cs::String v_text_1264 = pls::cs::String(std::u16string(u"",0));
for (std::int32_t v_i_1287 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1287; auto cs_right = (v_p).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1287; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1287 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = v_i_1287; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_text_1264; auto cs_rhs = pls::cs::String(std::u16string(u"\x002f" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1264 = cs_value; return cs_value; }());
}
([&]() { auto cs_old = v_text_1264; auto cs_rhs = ([&]() { auto cs_array = v_p; auto cs_index = v_i_1287; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1264 = cs_value; return cs_value; }());
}
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_text_1264; auto cs_arg1 = pls::cs::String(std::u16string(u"\x002f" u"",1)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());})))) {
([&]() { auto cs_value = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x002f" u"",1)); auto cs_right = v_text_1264; return pls::cs::String::concat(cs_left,cs_right); }()); v_text_1264 = cs_value; return cs_value; }());
}
if (v_packageName) {
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x002f" u"",1)); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetPackageName(); }());}); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text_1264; return pls::cs::String::concat(cs_left,cs_right); }()); v_text_1264 = cs_value; return cs_value; }());
}
pls::cs::String v_text2_1561 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x0073" u"\x003a" u"\x002f" u"\x002f" u"\x0073" u"\x0073" u"\x006c" u"\x002e" u"\x0067" u"\x006f" u"\x006f" u"\x0067" u"\x006c" u"\x0065" u"\x002d" u"\x0061" u"\x006e" u"\x0061" u"\x006c" u"\x0079" u"\x0074" u"\x0069" u"\x0063" u"\x0073" u"\x002e" u"\x0063" u"\x006f" u"\x006d" u"\x002f" u"\x0063" u"\x006f" u"\x006c" u"\x006c" u"\x0065" u"\x0063" u"\x0074" u"\x003f" u"\x0026" u"\x0076" u"\x003d" u"",44)); auto cs_right = pls::game::cs_integer_string(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull))); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0074" u"\x0069" u"\x0064" u"\x003d" u"",5)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_id; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0063" u"\x0069" u"\x0064" u"\x003d" u"",5)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { return cs_eb4256a1bc4490b2(); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0074" u"\x003d" u"",3)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = cs_9a982ba0549bdebb(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0064" u"\x006c" u"\x003d" u"",4)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"",19)); return cs_ce577f730d25026e(cs_arg0); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0061" u"\x006e" u"\x003d" u"",4)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { return cs_8f665f3f54f79b70(); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x0064" u"\x0070" u"\x003d" u"",4)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text_1264; return cs_ce577f730d25026e(cs_arg0); }()); return pls::cs::String::concat(cs_left,cs_right); }());
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text2_1561; auto cs_right = pls::cs::String(std::u16string(u"\x0026" u"\x007a" u"\x003d" u"",3)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = ([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());})); return pls::cs::make_ref<pls::cs::Random>(cs_arg0); }()); return pls::game::cs_require(cs_receiver)->Next(); }());})); return pls::cs::String::concat(cs_left,cs_right); }()); v_text2_1561 = cs_value; return cs_value; }());
{pls::cs::MonitorScope cs_monitor_1(cs_8c8ed916f00e435c());{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_b3c3facbebad5adb(); auto cs_arg0 = ([&]() -> pls::cs::Ref<cs_70c4092da329e972> { pls::cs::String cs_arg0 = v_text2_1561; return cs_626981c8ca17bde5(cs_arg0); }()); cs_receiver.Add(cs_arg0); }());});
}}
([&]() -> void { cs_0664a3e5428b09ce(); }());
}
}
}
}
