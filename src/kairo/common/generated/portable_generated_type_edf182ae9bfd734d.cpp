// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_1ff3292665c8e0c4.hpp"
#include "portable_generated_type_3b41638e424b9ee0.hpp"
#include "portable_generated_type_4978cb69e37b8564.hpp"
#include "portable_generated_type_582a926e9c7748a6.hpp"
#include "portable_generated_type_72d9658ed61145d6.hpp"
#include "portable_generated_type_c0fae45144034cf9.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
#include "portable_generated_type_e7d772862db62924.hpp"
#include "portable_generated_type_edf182ae9bfd734d.hpp"
namespace pls::generated {

static pls::cs::String cs_6ce655df5c01ad40_value{};

static std::int32_t cs_0be6a67a68fc8c7b_value{};

static pls::cs::Array<pls::cs::String> cs_33074213f1660560_value{};

static bool cs_8491f3974fd931ce_value{};

static pls::cs::Dictionary<pls::cs::String,bool> cs_55ec76aaf7c140e9_value{};

static pls::cs::String cs_eddd1c84a8587987_value{};

void cs_init_edf182ae9bfd734d(){static pls::cs::TypeInitState state;state.run("kairo.unity.io.AssetReader",[](){
cs_33074213f1660560_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.io.AssetReader.DPI_FOLDERS",[&](){return ([&](){auto cs_initial_array_506=pls::cs::Array<pls::cs::String>::make(4);cs_initial_array_506.at(0)=pls::cs::String(std::u16string(u"\x0064" u"\x0072" u"\x0061" u"\x0077" u"\x0061" u"\x0062" u"\x006c" u"\x0065" u"\x002d" u"\x006c" u"\x0064" u"\x0070" u"\x0069" u"",13));cs_initial_array_506.at(1)=pls::cs::String(std::u16string(u"\x0064" u"\x0072" u"\x0061" u"\x0077" u"\x0061" u"\x0062" u"\x006c" u"\x0065" u"\x002d" u"\x006d" u"\x0064" u"\x0070" u"\x0069" u"",13));cs_initial_array_506.at(2)=pls::cs::String(std::u16string(u"\x0064" u"\x0072" u"\x0061" u"\x0077" u"\x0061" u"\x0062" u"\x006c" u"\x0065" u"\x002d" u"\x0068" u"\x0064" u"\x0070" u"\x0069" u"",13));cs_initial_array_506.at(3)=pls::cs::String(std::u16string(u"\x0064" u"\x0072" u"\x0061" u"\x0077" u"\x0061" u"\x0062" u"\x006c" u"\x0065" u"\x002d" u"\x0078" u"\x0068" u"\x0064" u"\x0070" u"\x0069" u"",14));return cs_initial_array_506;}());});

});}

pls::cs::String& cs_6ce655df5c01ad40(){cs_init_edf182ae9bfd734d();return cs_6ce655df5c01ad40_value;}

std::int32_t& cs_0be6a67a68fc8c7b(){cs_init_edf182ae9bfd734d();return cs_0be6a67a68fc8c7b_value;}

pls::cs::Array<pls::cs::String>& cs_33074213f1660560(){cs_init_edf182ae9bfd734d();return cs_33074213f1660560_value;}

bool& cs_8491f3974fd931ce(){cs_init_edf182ae9bfd734d();return cs_8491f3974fd931ce_value;}

pls::cs::Dictionary<pls::cs::String,bool>& cs_55ec76aaf7c140e9(){cs_init_edf182ae9bfd734d();return cs_55ec76aaf7c140e9_value;}

pls::cs::String& cs_eddd1c84a8587987(){cs_init_edf182ae9bfd734d();return cs_eddd1c84a8587987_value;}

// M:kairo.unity.io.AssetReader._getData(System.String)
pls::cs::Array<std::uint8_t> cs_8c6bbd3f0b8c1627(pls::cs::String v_file) { cs_init_edf182ae9bfd734d();
{
pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_file_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::String>>(v_file);
{
return pls::cs::unbox<pls::cs::Array<std::uint8_t>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = ([&](){struct cs_closure_7ef24dee0ade584f : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_file_cell;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_file_cell,v);}void release_edges()override{pls::cs::Object::release_edges();v_file_cell.reset();}pls::cs::Ref<pls::cs::Object> Invoke(){{
pls::cs::Ref<pls::kairo::NativeTextAsset> v_textAsset_3396 = ([&]() -> pls::cs::Ref<pls::kairo::NativeTextAsset> { pls::cs::String cs_arg0 = v_file_cell->value; return cs_d142809cb87361d3(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_textAsset_3396); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::Ref<pls::cs::Object>{};
}
return pls::cs::run_finally([&]() -> pls::cs::Ref<pls::cs::Object> { {
return pls::cs::box(([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = v_textAsset_3396; return pls::generated::cs_require(cs_receiver)->get_bytes(); }()));
} }, [&]() {
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = v_textAsset_3396; pls::kairo::unload_text_asset(cs_arg0); }());
});
}}};auto cs_closure=pls::cs::make_ref<cs_closure_7ef24dee0ade584f>();cs_closure->v_file_cell=v_file_cell;return pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::bind_identity(cs_closure,v_file_cell.get(),std::string("M:kairo.unity.io.AssetReader._getData(System.String):3368"),[weak=std::weak_ptr<cs_closure_7ef24dee0ade584f>(cs_closure)]()->pls::cs::Ref<pls::cs::Object>{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();return target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }()));
}
}
}

// M:kairo.unity.io.AssetReader._getTextAsset(System.String)
pls::cs::Ref<pls::kairo::NativeTextAsset> cs_d142809cb87361d3(pls::cs::String v_file) { cs_init_edf182ae9bfd734d();
{
pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_file_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::String>>(v_file);
{
return pls::cs::unbox<pls::cs::Ref<pls::kairo::NativeTextAsset>>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = ([&](){struct cs_closure_b1a6f7482df14589 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_file_cell;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_file_cell,v);}void release_edges()override{pls::cs::Object::release_edges();v_file_cell.reset();}pls::cs::Ref<pls::cs::Object> Invoke(){{
pls::cs::String v_text_3771 = pls::cs::String(std::u16string(u"\x0044" u"\x0061" u"\x0074" u"\x0061" u"\x002f" u"",5));
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_file_cell->value; return cs_56a96842a5446791(cs_arg0); }()); return pls::cs::string_trim(cs_arg0); }()); v_file_cell->value = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::NativeTextAsset> v_textAsset_3850 = pls::cs::Ref<pls::kairo::NativeTextAsset>{};
try {
([&]() { auto cs_value = std::dynamic_pointer_cast<pls::kairo::NativeTextAsset>(pls::cs::box(([&]() -> pls::cs::Ref<pls::cs::Object> { pls::cs::String cs_arg0 = ([&]() { auto cs_left = v_text_3771; auto cs_right = v_file_cell->value; return pls::cs::String::concat(cs_left,cs_right); }()); return pls::kairo::load_text_asset(cs_arg0); }()))); v_textAsset_3850 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_textAsset_3850); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return pls::cs::box(v_textAsset_3850);
}
} catch(const pls::cs::Exception& cs_caught_514) {auto cs_exception_514=pls::cs::capture_exception(cs_caught_514);
if(pls::cs::exception_is(cs_exception_514,"System.Exception")) {{

}}
else {throw;} }
std::int32_t v_num_4055 = ([&]() -> std::int32_t { auto cs_arg0 = v_file_cell->value; auto cs_arg1 = char16_t(46); return pls::generated::cs_last_index_char1(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num_4055; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_file_cell->value; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = v_num_4055; return pls::generated::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); v_file_cell->value = cs_value; return cs_value; }());
}
try {
([&]() { auto cs_value = std::dynamic_pointer_cast<pls::kairo::NativeTextAsset>(pls::cs::box(([&]() -> pls::cs::Ref<pls::cs::Object> { pls::cs::String cs_arg0 = ([&]() { auto cs_left = v_text_3771; auto cs_right = v_file_cell->value; return pls::cs::String::concat(cs_left,cs_right); }()); return pls::kairo::load_text_asset(cs_arg0); }()))); v_textAsset_3850 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_textAsset_3850); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return pls::cs::box(v_textAsset_3850);
}
} catch(const pls::cs::Exception& cs_caught_515) {auto cs_exception_515=pls::cs::capture_exception(cs_caught_515);
if(pls::cs::exception_is(cs_exception_515,"System.Exception")) {{

}}
else {throw;} }
return pls::cs::Ref<pls::cs::Object>{};
}}};auto cs_closure=pls::cs::make_ref<cs_closure_b1a6f7482df14589>();cs_closure->v_file_cell=v_file_cell;return pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::bind_identity(cs_closure,v_file_cell.get(),std::string("M:kairo.unity.io.AssetReader._getTextAsset(System.String):3746"),[weak=std::weak_ptr<cs_closure_b1a6f7482df14589>(cs_closure)]()->pls::cs::Ref<pls::cs::Object>{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();return target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }()));
}
}
}

// M:kairo.unity.io.AssetReader._init
void cs_f39e5dc55d257528() { cs_init_edf182ae9bfd734d();
{
std::int32_t v_num_854 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::generated::cs_f32(0x43200000u); auto cs_right = ([&]() -> float { return pls::kairo::DisplayMetrics::get_Density(); }()); return (cs_left * cs_right); }()); auto cs_right = pls::generated::cs_f32(0x3f000000u); return (cs_left + cs_right); }())));
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_num_854; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num_854; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8cull)); return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_0be6a67a68fc8c7b() = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8cull)); auto cs_right = v_num_854; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num_854; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xb4ull)); return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); cs_0be6a67a68fc8c7b() = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbeull)); auto cs_right = v_num_854; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num_854; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfaull)); return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); cs_0be6a67a68fc8c7b() = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfaull)); auto cs_right = v_num_854; return (cs_left <= cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); cs_0be6a67a68fc8c7b() = cs_value; return cs_value; }());
}
pls::cs::Ref<cs_c0fae45144034cf9> v_jLocale_1140 = ([&]() -> pls::cs::Ref<cs_c0fae45144034cf9> { return cs_7faa6468ee6a5cd1(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_c0fae45144034cf9>>(v_jLocale_1140); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_af0690d8cc2a7c96(cs_receiver); }()); return cs_69fdc17c11a6247b(cs_arg0); }()); cs_eddd1c84a8587987() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_c0fae45144034cf9>>(v_jLocale_1140); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9731cae4f8bdbaf7(cs_receiver); }()); return cs_69fdc17c11a6247b(cs_arg0); }()); cs_6ce655df5c01ad40() = cs_value; return cs_value; }());
}
}

// M:kairo.unity.io.AssetReader.Exist(System.String)
bool cs_0932d38228a45953(pls::cs::String v_file) { cs_init_edf182ae9bfd734d();
{
if (([&]() { auto cs_left = pls::cs::box(cs_55ec76aaf7c140e9()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::cs::Dictionary<pls::cs::String,bool>::make(); cs_55ec76aaf7c140e9() = cs_value; return cs_value; }());
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_db6c0535c13d57e1 : pls::cs::Object{void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);}void release_edges()override{pls::cs::Object::release_edges();}void Invoke(){{
pls::cs::Ref<pls::kairo::NativeTextAsset> v_textAsset_5053 = std::dynamic_pointer_cast<pls::kairo::NativeTextAsset>(pls::cs::box(([&]() -> pls::cs::Ref<pls::cs::Object> { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0044" u"\x0061" u"\x0074" u"\x0061" u"\x002f" u"\x0066" u"\x0069" u"\x006c" u"\x0065" u"\x006c" u"\x0069" u"\x0073" u"\x0074" u"",13)); return pls::kairo::load_text_asset(cs_arg0); }())));
if (([&]() { auto cs_left = pls::cs::box(v_textAsset_5053); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Array<pls::cs::String> v_array_5164 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = v_textAsset_5053; return pls::generated::cs_require(cs_receiver)->get_text(); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x000a" u"",1)); return cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_5228 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5228; auto cs_right = (v_array_5164).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5228; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5228 = cs_new; return cs_old; }())) {
pls::cs::String v_text_5282 = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array_5164; auto cs_index = v_i_5228; return cs_array.get_Item(cs_index); }()); return pls::cs::string_trim(cs_arg0); }());
if (([&]() -> bool { auto cs_left = (v_text_5282).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
std::int32_t v_num2_5358 = ([&]() -> std::int32_t { auto cs_arg0 = v_text_5282; auto cs_arg1 = char16_t(46); return pls::generated::cs_last_index_char1(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num2_5358; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text_5282; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = v_num2_5358; return pls::generated::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); v_text_5282 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_55ec76aaf7c140e9(); auto cs_index = v_text_5282; auto cs_value = true; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = v_textAsset_5053; pls::kairo::unload_text_asset(cs_arg0); }());
}
}}};auto cs_closure=pls::cs::make_ref<cs_closure_db6c0535c13d57e1>();return pls::cs::Delegate<void()>::bind_identity(cs_closure,nullptr,std::string("M:kairo.unity.io.AssetReader.Exist(System.String):5021"),[weak=std::weak_ptr<cs_closure_db6c0535c13d57e1>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());
} catch(const pls::cs::Exception& cs_caught_513) {auto cs_exception_513=pls::cs::capture_exception(cs_caught_513);
if(pls::cs::exception_is(cs_exception_513,"System.Exception")) {{

}}
else {throw;} }
}
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_file; return cs_56a96842a5446791(cs_arg0); }()); return pls::cs::string_trim(cs_arg0); }()); v_file = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(cs_6ce655df5c01ad40()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { cs_f39e5dc55d257528(); }());
}
if (([&]() -> bool { auto cs_left = (cs_55ec76aaf7c140e9()).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return ([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_file; return cs_8c6bbd3f0b8c1627(cs_arg0); }())); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left != cs_right; }());
}
if (([&]() -> bool { auto cs_receiver = cs_55ec76aaf7c140e9(); auto cs_arg0 = v_file; return cs_receiver.ContainsKey(cs_arg0); }())) {
return true;
}
std::int32_t v_num_5878 = ([&]() -> std::int32_t { auto cs_arg0 = v_file; auto cs_arg1 = char16_t(46); return pls::generated::cs_last_index_char1(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num_5878; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_file; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = v_num_5878; return pls::generated::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); v_file = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_receiver = cs_55ec76aaf7c140e9(); auto cs_arg0 = v_file; return cs_receiver.ContainsKey(cs_arg0); }())) {
return true;
}
}
return false;
}
}

// M:kairo.unity.io.AssetReader.GetAccessFilesList(System.String)
pls::cs::Array<pls::cs::String> cs_2abb7e234674bdd0(pls::cs::String v_file) { cs_init_edf182ae9bfd734d();
{
if (([&]() { auto cs_left = pls::cs::box(cs_6ce655df5c01ad40()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { cs_f39e5dc55d257528(); }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_file; return cs_56a96842a5446791(cs_arg0); }()); v_file = cs_value; return cs_value; }());
pls::cs::Array<pls::cs::String> v_array_2082 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_file; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x002f" u"",1)); return cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
([&]() { auto cs_value = ([&]() { auto cs_array = v_array_2082; auto cs_index = ([&]() -> std::int32_t { auto cs_left = (v_array_2082).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); v_file = cs_value; return cs_value; }());
pls::cs::String v_text_2164 = pls::cs::String(std::u16string(u"",0));
for (std::int32_t v_i_2187 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2187; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_array_2082).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2187; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2187 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text_2164; auto cs_right = ([&]() { auto cs_array = v_array_2082; auto cs_index = v_i_2187; return cs_array.get_Item(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); v_text_2164 = cs_value; return cs_value; }());
}
pls::cs::List<pls::cs::String> v_list_2281 = pls::cs::List<pls::cs::String>::make();
pls::cs::List<pls::cs::String> v_list2_2324 = pls::cs::List<pls::cs::String>::make();
if (([&]() { auto cs_left = pls::cs::box(([&]() -> pls::cs::Array<pls::cs::String> { return cs_2f109647f6f30207(); }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
pls::cs::Array<pls::cs::String> v_languagePackFolders_2420 = ([&]() -> pls::cs::Array<pls::cs::String> { return cs_2f109647f6f30207(); }());
{ auto cs_each507 = v_languagePackFolders_2420; for (std::int32_t cs_i507=0; cs_i507<cs_each507.length(); ++cs_i507) { pls::cs::String v_text2_2481 = cs_each507.get_Item(cs_i507); {
([&]() -> void { auto cs_receiver = v_list2_2324; auto cs_arg0 = ([&]() { auto cs_left = v_text2_2481; auto cs_right = pls::cs::String(std::u16string(u"\x002f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); cs_receiver.Add(cs_arg0); }());
} } }
}
([&]() -> void { auto cs_receiver = v_list2_2324; auto cs_arg0 = ([&]() { auto cs_left = ([&]() -> pls::cs::String { return cs_32fd76cf013efb1e(); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); cs_receiver.Add(cs_arg0); }());
([&]() -> void { auto cs_receiver = v_list2_2324; auto cs_arg0 = pls::cs::String(std::u16string(u"",0)); cs_receiver.Add(cs_arg0); }());
for (std::int32_t v_k_2645 = cs_0be6a67a68fc8c7b(); ([&]() -> bool { auto cs_left = v_k_2645; auto cs_right = (cs_33074213f1660560()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_2645; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_2645 = cs_new; return cs_old; }())) {
{auto cs_list_enum508=(v_list2_2324).GetEnumerator();struct cs_list_scope508{decltype(cs_list_enum508)&e;~cs_list_scope508(){e.Dispose();}} cs_scope508{cs_list_enum508};while(cs_list_enum508.MoveNext()){ pls::cs::String v_item_2693=cs_list_enum508.get_Current();{
([&]() -> void { auto cs_receiver = v_list_2281; auto cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text_2164; auto cs_right = ([&]() { auto cs_array = cs_33074213f1660560(); auto cs_index = v_k_2645; return cs_array.get_Item(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_item_2693; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_file; return pls::cs::String::concat(cs_left,cs_right); }()); cs_receiver.Add(cs_arg0); }());
}}}
}
for (std::int32_t v_num_2811 = ([&]() -> std::int32_t { auto cs_left = cs_0be6a67a68fc8c7b(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_2811; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_2811; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_2811 = cs_new; return cs_old; }())) {
{auto cs_list_enum509=(v_list2_2324).GetEnumerator();struct cs_list_scope509{decltype(cs_list_enum509)&e;~cs_list_scope509(){e.Dispose();}} cs_scope509{cs_list_enum509};while(cs_list_enum509.MoveNext()){ pls::cs::String v_item2_2853=cs_list_enum509.get_Current();{
([&]() -> void { auto cs_receiver = v_list_2281; auto cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text_2164; auto cs_right = ([&]() { auto cs_array = cs_33074213f1660560(); auto cs_index = v_num_2811; return cs_array.get_Item(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_item2_2853; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_file; return pls::cs::String::concat(cs_left,cs_right); }()); cs_receiver.Add(cs_arg0); }());
}}}
}
{auto cs_list_enum510=(v_list2_2324).GetEnumerator();struct cs_list_scope510{decltype(cs_list_enum510)&e;~cs_list_scope510(){e.Dispose();}} cs_scope510{cs_list_enum510};while(cs_list_enum510.MoveNext()){ pls::cs::String v_item3_2966=cs_list_enum510.get_Current();{
([&]() -> void { auto cs_receiver = v_list_2281; auto cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text_2164; auto cs_right = v_item3_2966; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_file; return pls::cs::String::concat(cs_left,cs_right); }()); cs_receiver.Add(cs_arg0); }());
}}}
return ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_receiver = v_list_2281; return cs_receiver.ToArray(); }());
}
}

// M:kairo.unity.io.AssetReader.GetData(System.String)
pls::cs::Array<std::uint8_t> cs_7b3078b027129799(pls::cs::String v_file) { cs_init_edf182ae9bfd734d();
{
if (([&]() { auto cs_left = pls::cs::box(cs_6ce655df5c01ad40()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() -> void { cs_f39e5dc55d257528(); }());
}
pls::cs::Array<std::uint8_t> v_array_4479 = pls::cs::Array<std::uint8_t>{};
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_file; return cs_8c6bbd3f0b8c1627(cs_arg0); }()); v_array_4479 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_array_4479); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
return pls::cs::Array<std::uint8_t>{};
}
if ((cs_b0827224162a4f93() && ([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0073" u"\x0061" u"\x0076" u"\x0065" u"\x002e" u"\x0062" u"\x0079" u"\x0074" u"\x0065" u"\x0073" u"",10)); return pls::generated::cs_string_equals(cs_arg0,cs_arg1); }()))) {
return v_array_4479;
}
if ((([&](){auto cs_text=v_file;auto cs_char=char16_t(47);return pls::generated::cs_index_char1(cs_text,cs_char)!=-1;}()) || (((!(([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::cs::String(std::u16string(u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",4)); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }()))) && (!(([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::cs::String(std::u16string(u"\x002e" u"\x0062" u"\x0079" u"\x0074" u"\x0065" u"\x0073" u"",6)); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }()))))))) {
return v_array_4479;
}
if (cs_8491f3974fd931ce()) {
([&]() -> void { pls::cs::Array<std::uint8_t> cs_arg0 = v_array_4479; cs_b78cf957d6d975eb(cs_arg0); }());
}
return v_array_4479;
}
}

// M:kairo.unity.io.AssetReader.GetInputStream(System.String)
pls::cs::Ref<cs_e7a5499b363ef51b> cs_3b653770361acb31(pls::cs::String v_file) { cs_init_edf182ae9bfd734d();
{
if ((!(([&]() -> bool { pls::cs::String cs_arg0 = v_file; return cs_0932d38228a45953(cs_arg0); }())))) {
return pls::cs::Ref<cs_e7a5499b363ef51b>{};
}
return ([&]() -> pls::cs::Ref<cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_file; return cs_7b3078b027129799(cs_arg0); }()); return cs_c3a84083a67ee263(cs_arg0); }());
}
}
}
