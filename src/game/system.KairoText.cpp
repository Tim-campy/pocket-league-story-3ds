// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.lang.JString.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "system.KairoText.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;

namespace pls::game {
namespace system {

void KairoText::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

static bool KairoText_convertTranslateTable__storage{};

static StringArray2 KairoText_TRANSLATE_TABLE_storage{};

static PLS_NOINLINE void cs_init_851a96be86c28dd2_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(KairoText_convertTranslateTable__storage,visitor);pls::cs::trace_value(KairoText_TRANSLATE_TABLE_storage,visitor);});static pls::cs::TypeInitState state;state.run("system.KairoText",flag,[](){
KairoText_TRANSLATE_TABLE_storage = pls::cs::evaluate_type_initializer_field("F:system.KairoText.TRANSLATE_TABLE",[&](){return StringArray2::make(0);});

});}

void KairoText::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_851a96be86c28dd2_slow(flag);}

bool& KairoText::convertTranslateTable_(){KairoText::ensure_initialized();return KairoText_convertTranslateTable__storage;}

StringArray2& KairoText::TRANSLATE_TABLE(){KairoText::ensure_initialized();return KairoText_TRANSLATE_TABLE_storage;}

void KairoText::create_init(pls::cs::Ref<KairoText> self) {
KairoText::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoText.#ctor",game);
{}

}

// M:system.KairoText.#ctor
pls::cs::Ref<KairoText> KairoText::create() {
KairoText::ensure_initialized();
 auto self = pls::cs::make_ref<KairoText>(); KairoText::create_init(self); return self; 
}

// M:system.KairoText.LT(System.String)
pls::cs::String KairoText::LT(pls::cs::String text) {
KairoText::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoText.LT(System.String)",game);
{
pls::cs::String text2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Language::TranslateText(text, true);});
if (text2 != text) {
return text2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Language::Japanese();})) {
return text;
}
if (!KairoText::convertTranslateTable_()) {
for (pls::cs::Int32 i = 0; i < KairoText::TRANSLATE_TABLE().length(); ++i) {
for (pls::cs::Int32 j = 0; j < KairoText::TRANSLATE_TABLE()[i].length(); ++j) {
{ auto cs_target = KairoText::TRANSLATE_TABLE()[i]; auto cs_index = j; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Replace(KairoText::TRANSLATE_TABLE()[i][j], literal(u"\n"), literal(u"<br>"));});cs_target.set_Item(cs_index,cs_value);}
}
}
KairoText::convertTranslateTable_() = true;
}
pls::cs::String value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Replace(text, literal(u"\n"), literal(u"<br>"));});
pls::cs::Int32 num = 1;
for (pls::cs::Int32 k = 0; k < KairoText::TRANSLATE_TABLE().length(); ++k) {
if (num < KairoText::TRANSLATE_TABLE()[k].length() && pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(KairoText::TRANSLATE_TABLE()[k][0], value);})) {
return KairoText::TRANSLATE_TABLE()[k][num];
}
}
return text;
}

}

// M:system.KairoText.LT(System.String,System.String)
pls::cs::String KairoText::LT(pls::cs::String text,pls::cs::String arg) {
KairoText::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoText.LT(System.String,System.String)",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Replace(KairoText::LT(text), arg);});
}

}

// M:system.KairoText.LT(System.String,System.Int32)
pls::cs::String KairoText::LTInt(pls::cs::String text,pls::cs::Int32 arg) {
KairoText::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoText.LT(System.String,System.Int32)",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = KairoText::LT(text); pls::cs::String cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(arg);}); return kl_util::StringUtil::Replace(cs_arg0, cs_arg1); }());});
}

}
} // namespace system
}
