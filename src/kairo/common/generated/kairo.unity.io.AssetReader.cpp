// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.io.ByteArrayInputStream.hpp"
#include "java.io.InputStream.hpp"
#include "java.lang.StringEx.hpp"
#include "java.util.JLocale.hpp"
#include "kairo.common.cfg.Config.hpp"
#include "kairo.unity.io.AssetReader.hpp"
#include "kairo.unity.util.Encrypter.hpp"
#include "kairo.unity.util.Language.hpp"
#include "kairo.unity.util.StringUtil.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::generated {
namespace kairo::unity::io::AssetReader {

static pls::cs::String country__storage{};

static pls::cs::Int32 dpi__storage{};

static StringArray DPI_FOLDERS_storage{};

static bool encrypt__storage{};

static pls::cs::Dictionary<pls::cs::String,bool> filelist__storage{};

static pls::cs::String language__storage{};

static PLS_NOINLINE void cs_init_edf182ae9bfd734d_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(country__storage,visitor);pls::cs::trace_value(dpi__storage,visitor);pls::cs::trace_value(DPI_FOLDERS_storage,visitor);pls::cs::trace_value(encrypt__storage,visitor);pls::cs::trace_value(filelist__storage,visitor);pls::cs::trace_value(language__storage,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.io.AssetReader",flag,[](){
DPI_FOLDERS_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.io.AssetReader.DPI_FOLDERS",[&](){return StringArray::from({literal(u"drawable-ldpi"), literal(u"drawable-mdpi"), literal(u"drawable-hdpi"), literal(u"drawable-xhdpi")});});

});}

void ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_edf182ae9bfd734d_slow(flag);}

pls::cs::String& country_(){AssetReader::ensure_initialized();return country__storage;}

pls::cs::Int32& dpi_(){AssetReader::ensure_initialized();return dpi__storage;}

StringArray& DPI_FOLDERS(){AssetReader::ensure_initialized();return DPI_FOLDERS_storage;}

bool& encrypt_(){AssetReader::ensure_initialized();return encrypt__storage;}

pls::cs::Dictionary<pls::cs::String,bool>& filelist_(){AssetReader::ensure_initialized();return filelist__storage;}

pls::cs::String& language_(){AssetReader::ensure_initialized();return language__storage;}

// M:kairo.unity.io.AssetReader._init
void _init() {
AssetReader::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.AssetReader._init",kairo);
{
pls::cs::Int32 num = pls::cs::to_int32((160.0f * pls::kairo::DisplayMetrics::get_Density() + 0.5f));
if (0 <= num && num < 140) {
AssetReader::dpi_() = 0;
} else if (140 <= num && num < 180) {
AssetReader::dpi_() = 1;
} else if (190 <= num && num < 250) {
AssetReader::dpi_() = 2;
} else if (250 <= num) {
AssetReader::dpi_() = 3;
}
pls::cs::Ref<java::util::JLocale> jLocale = java::util::JLocale::GetDefault();
AssetReader::language_() = java::lang::StringEx::ToLowerCase(require(jLocale)->GetLanguage());
AssetReader::country_() = java::lang::StringEx::ToLowerCase(require(jLocale)->GetCountry());
}

}

// M:kairo.unity.io.AssetReader.GetInputStream(System.String)
pls::cs::Ref<java::io::InputStream> GetInputStream(pls::cs::String file) {
AssetReader::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.AssetReader.GetInputStream(System.String)",kairo);
{
if (!AssetReader::Exist(file)) {
return pls::cs::Ref<java::io::InputStream>{};
}
return java::io::ByteArrayInputStream::create(AssetReader::GetData(file));
}

}

// M:kairo.unity.io.AssetReader.GetAccessFilesList(System.String)
StringArray GetAccessFilesList(pls::cs::String file) {
AssetReader::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.AssetReader.GetAccessFilesList(System.String)",kairo);
{
if (is_null(AssetReader::country_())) {
AssetReader::_init();
}
file = common::cfg::Config::ConvertExtension(file);
StringArray array = util::StringUtil::Split(file, literal(u"/"));
file = array[pls::cs::Int32(array.length()) - 1];
pls::cs::String text = literal(u"");
for (pls::cs::Int32 i = 0; i < pls::cs::Int32(array.length()) - 1; ++i) {
text = pls::cs::String::concat(pls::cs::String::concat(text, array[i]), literal(u"/"));
}
pls::cs::List<pls::cs::String> list = pls::cs::List<pls::cs::String>::make();
pls::cs::List<pls::cs::String> list2 = pls::cs::List<pls::cs::String>::make();
if ([&]() { auto cs_left = pls::cs::box(util::Language::GetLanguagePackFolders()); auto cs_right = pls::cs::box(StringArray{}); return cs_left != cs_right; }()) {
StringArray languagePackFolders = util::Language::GetLanguagePackFolders();
{ auto cs_each7 = languagePackFolders; for (std::int32_t cs_i7=0; cs_i7<cs_each7.length(); ++cs_i7) { pls::cs::String text2 = cs_each7.get_Item(cs_i7); {
pls::diagnostic::api_call([&]() -> decltype(auto) {return list2.Add(pls::cs::String::concat(text2, literal(u"/")));});
} } }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = list2; auto cs_arg0 = pls::cs::String::concat(util::Language::GetFolder(), literal(u"/")); cs_receiver.Add(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return list2.Add(literal(u""));});
for (pls::cs::Int32 k = AssetReader::dpi_(); k < AssetReader::DPI_FOLDERS().length(); ++k) {
{auto cs_list_enum8=list2.GetEnumerator();struct cs_list_scope8{decltype(cs_list_enum8)&e;~cs_list_scope8(){e.Dispose();}} cs_scope8{cs_list_enum8};while(cs_list_enum8.MoveNext()){ pls::cs::String item=cs_list_enum8.get_Current();{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = list; auto cs_arg0 = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text, AssetReader::DPI_FOLDERS()[k]), literal(u"/")), item), file); cs_receiver.Add(cs_arg0); }());});
}}}
}
for (pls::cs::Int32 num = AssetReader::dpi_() - 1; num >= 0; --num) {
{auto cs_list_enum9=list2.GetEnumerator();struct cs_list_scope9{decltype(cs_list_enum9)&e;~cs_list_scope9(){e.Dispose();}} cs_scope9{cs_list_enum9};while(cs_list_enum9.MoveNext()){ pls::cs::String item2=cs_list_enum9.get_Current();{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = list; auto cs_arg0 = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text, AssetReader::DPI_FOLDERS()[num]), literal(u"/")), item2), file); cs_receiver.Add(cs_arg0); }());});
}}}
}
{auto cs_list_enum10=list2.GetEnumerator();struct cs_list_scope10{decltype(cs_list_enum10)&e;~cs_list_scope10(){e.Dispose();}} cs_scope10{cs_list_enum10};while(cs_list_enum10.MoveNext()){ pls::cs::String item3=cs_list_enum10.get_Current();{
pls::diagnostic::api_call([&]() -> decltype(auto) {return list.Add(pls::cs::String::concat(pls::cs::String::concat(text, item3), file));});
}}}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return list.ToArray();});
}

}

// M:kairo.unity.io.AssetReader._getData(System.String)
ByteArray _getData(pls::cs::String file) {
AssetReader::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.AssetReader._getData(System.String)",kairo);
{
pls::cs::Ref<pls::cs::Cell<pls::cs::String>> file_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::String>>(file);
{
return pls::cs::unbox<ByteArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::from_closure(pls::cs::raw(file_cell),std::string("M:kairo.unity.io.AssetReader._getData(System.String):3368"),[file_cell]() -> pls::cs::Ref<pls::cs::Object> {{
pls::cs::Ref<pls::kairo::NativeTextAsset> textAsset = AssetReader::_getTextAsset(file_cell->value);
if (is_null(textAsset)) {
return pls::cs::Ref<pls::cs::Object>{};
}
{auto cs_flow_16 = pls::cs::run_finally([&]() -> pls::cs::Flow<pls::cs::Ref<pls::cs::Object>> {{
return pls::cs::flow_return(pls::cs::box(require(textAsset)->get_bytes()));
} return {};}, [&]() {
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::unload_text_asset(textAsset);});
});
return cs_flow_16.value();
}
}},file_cell); return require(cs_receiver)->RunOnUiThread(cs_arg0, true); }());}));
}
}

}

// M:kairo.unity.io.AssetReader._getTextAsset(System.String)
pls::cs::Ref<pls::kairo::NativeTextAsset> _getTextAsset(pls::cs::String file) {
AssetReader::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.AssetReader._getTextAsset(System.String)",kairo);
{
pls::cs::Ref<pls::cs::Cell<pls::cs::String>> file_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::String>>(file);
{
return pls::cs::unbox<pls::cs::Ref<pls::kairo::NativeTextAsset>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::from_closure(pls::cs::raw(file_cell),std::string("M:kairo.unity.io.AssetReader._getTextAsset(System.String):3746"),[file_cell]() -> pls::cs::Ref<pls::cs::Object> {{
pls::cs::String text = literal(u"Data/");
file_cell->value = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(common::cfg::Config::ConvertExtension(file_cell->value));});
pls::cs::Ref<pls::kairo::NativeTextAsset> textAsset = pls::cs::Ref<pls::kairo::NativeTextAsset>{};
try {
textAsset = pls::cs::dynamic_pointer_cast<pls::kairo::NativeTextAsset>(pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::load_text_asset(pls::cs::String::concat(text, file_cell->value));})));
if (!is_null(textAsset)) {
return pls::cs::box(textAsset);
}
} catch(const pls::cs::Exception& cs_caught_19) {pls::cs::capture_exception(cs_caught_19);
{

}}
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return last_index_char1(file_cell->value, u'.');});
if (num != -1) {
file_cell->value = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(file_cell->value, 0, num);});
}
try {
textAsset = pls::cs::dynamic_pointer_cast<pls::kairo::NativeTextAsset>(pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::load_text_asset(pls::cs::String::concat(text, file_cell->value));})));
if (!is_null(textAsset)) {
return pls::cs::box(textAsset);
}
} catch(const pls::cs::Exception& cs_caught_20) {pls::cs::capture_exception(cs_caught_20);
{

}}
return pls::cs::Ref<pls::cs::Object>{};
}},file_cell); return require(cs_receiver)->RunOnUiThread(cs_arg0, true); }());}));
}
}

}

// M:kairo.unity.io.AssetReader.GetData(System.String)
ByteArray GetData(pls::cs::String file) {
AssetReader::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.AssetReader.GetData(System.String)",kairo);
{
common::cfg::Config::ensure_initialized();

if (is_null(AssetReader::country_())) {
AssetReader::_init();
}
ByteArray array = ByteArray{};
array = AssetReader::_getData(file);
if ([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(ByteArray{}); return cs_left == cs_right; }()) {
return ByteArray{};
}
if (common::cfg::Config::DEBUG() && pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(file, literal(u"save.bytes"));})) {
return array;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=file;auto cs_char=u'/';return index_char1(cs_text,cs_char)!=-1;}());}) || (!pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_ends_with(file, literal(u".dat"));}) && !pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_ends_with(file, literal(u".bytes"));}))) {
return array;
}
if (AssetReader::encrypt_()) {
util::Encrypter::Decode(array);
}
return array;

}

}

// M:kairo.unity.io.AssetReader.Exist(System.String)
bool Exist(pls::cs::String file) {
AssetReader::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.AssetReader.Exist(System.String)",kairo);
{
if (is_null(AssetReader::filelist_())) {
AssetReader::filelist_() = pls::cs::Dictionary<pls::cs::String,bool>::make();
try {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}); pls::cs::Delegate<void()> cs_arg0 = pls::cs::Delegate<void()>::from_closure(nullptr,std::string("M:kairo.unity.io.AssetReader.Exist(System.String):5021"),[]() -> void {{
pls::cs::Ref<pls::kairo::NativeTextAsset> textAsset = pls::cs::dynamic_pointer_cast<pls::kairo::NativeTextAsset>(pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::load_text_asset(literal(u"Data/filelist"));})));
if (!is_null(textAsset)) {
StringArray array = util::StringUtil::Split(require(textAsset)->get_text(), literal(u"\n"));
for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(array[i]);});
if (text.length() > 0) {
pls::cs::Int32 num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return last_index_char1(text, u'.');});
if (num2 != -1) {
text = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(text, 0, num2);});
}
{ auto cs_target = AssetReader::filelist_(); auto cs_index = text; auto cs_value = true; cs_target.set_Item(cs_index,cs_value); }
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::unload_text_asset(textAsset);});
}
}}); require(cs_receiver)->RunOnUiThread(cs_arg0, true); }());});
} catch(const pls::cs::Exception& cs_caught_14) {pls::cs::capture_exception(cs_caught_14);
{

}}
}
file = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(common::cfg::Config::ConvertExtension(file));});
if (is_null(AssetReader::country_())) {
AssetReader::_init();
}
if (AssetReader::filelist_().get_Count() == 0) {
{auto cs_left_12 = pls::cs::box(AssetReader::_getData(file)); auto cs_right_12 = pls::cs::box(ByteArray{});
return cs_left_12 != cs_right_12;}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return AssetReader::filelist_().ContainsKey(file);})) {
return true;
}
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return last_index_char1(file, u'.');});
if (num != -1) {
file = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(file, 0, num);});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return AssetReader::filelist_().ContainsKey(file);})) {
return true;
}
}
return false;
}

}
} // namespace kairo::unity::io::AssetReader
}
