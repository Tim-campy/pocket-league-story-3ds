// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.lang.JFloat.hpp"
#include "kairo.unity.ui.TextFormat.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace kairo::unity::ui {

void TextFormat::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(x_,visitor);pls::cs::trace_value(y_,visitor);}

static pls::cs::Ref<TextFormat> TextFormat_textFormat__storage{};

static PLS_NOINLINE void cs_init_dc09c88a279424b5_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(TextFormat_textFormat__storage,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.ui.TextFormat",flag,[](){

});}

void TextFormat::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_dc09c88a279424b5_slow(flag);}

pls::cs::Ref<TextFormat>& TextFormat::textFormat_(){TextFormat::ensure_initialized();return TextFormat_textFormat__storage;}

void TextFormat::create_init(pls::cs::Ref<TextFormat> self) {
TextFormat::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.#ctor",kairo);
{
self->Init(pls::cs::String{});
}

}

// M:kairo.unity.ui.TextFormat.#ctor
pls::cs::Ref<TextFormat> TextFormat::create() {
TextFormat::ensure_initialized();
 auto self = pls::cs::make_ref<TextFormat>(); TextFormat::create_init(self); return self; 
}

// M:kairo.unity.ui.TextFormat.Create(System.String)
pls::cs::Ref<TextFormat> TextFormat::Create(pls::cs::String format) {
TextFormat::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.Create(System.String)",kairo);
{
if (is_null(TextFormat::textFormat_())) {
TextFormat::textFormat_() = TextFormat::create();
}
require(TextFormat::textFormat_())->Init(format);
return TextFormat::textFormat_();
}

}

// M:kairo.unity.ui.TextFormat.Init(System.String)
void TextFormat::Init(pls::cs::String format) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.Init(System.String)",kairo);
{
font_ = -1;
y_ = IntArray{};
x_ = y_;
anchor_ = -1;
if (is_null(format)) {
return;
}
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Split(format, literal(u","));});
for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(array[i]);});
if (kl_lang::StringEx::Length(text) == 0) {
continue;
}
if ((i == 0)) {
font_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(text);});
} else if ((i == 1) || (i == 2)) {
{
char16_t c = kl_lang::StringEx::CharAt(text, 0);
if ((pls::cs::cast_integral<pls::cs::Int32>(c) == pls::cs::cast_integral<pls::cs::Int32>(u'+')) || (pls::cs::cast_integral<pls::cs::Int32>(c) == pls::cs::cast_integral<pls::cs::Int32>(u'-')) || (pls::cs::cast_integral<pls::cs::Int32>(c) == pls::cs::cast_integral<pls::cs::Int32>(u'*')) || (pls::cs::cast_integral<pls::cs::Int32>(c) == pls::cs::cast_integral<pls::cs::Int32>(u'/'))) {
text = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(text, 1);});
}
pls::cs::Int32 num = pls::cs::to_int32((java::lang::JFloat::ParseFloat(text) * 10.0f));
IntArray array2 = IntArray::make(2);
if (((pls::cs::cast_integral<pls::cs::Int32>(c) == pls::cs::cast_integral<pls::cs::Int32>(u'+')))) {
array2[0] = 1;
} else if (((pls::cs::cast_integral<pls::cs::Int32>(c) == pls::cs::cast_integral<pls::cs::Int32>(u'-')))) {
array2[0] = 2;
} else if (((pls::cs::cast_integral<pls::cs::Int32>(c) == pls::cs::cast_integral<pls::cs::Int32>(u'*')))) {
array2[0] = 3;
} else if (((pls::cs::cast_integral<pls::cs::Int32>(c) == pls::cs::cast_integral<pls::cs::Int32>(u'/')))) {
array2[0] = 4;
}
array2[1] = num;
if (i == 1) {
x_ = array2;
} else {
y_ = array2;
}
}
} else if ((i == 3)) {
anchor_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(text);});
}
}
}
}

// M:kairo.unity.ui.TextFormat.GetFont
pls::cs::Int32 TextFormat::GetFont() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.GetFont",kairo);
{
return font_;
}
}

// M:kairo.unity.ui.TextFormat.GetX(System.Single)
pls::cs::Single TextFormat::GetX(pls::cs::Single x) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.GetX(System.Single)",kairo);
{
return GetXY(x, x_);
}
}

// M:kairo.unity.ui.TextFormat.GetY(System.Single)
pls::cs::Single TextFormat::GetY(pls::cs::Single y) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.GetY(System.Single)",kairo);
{
return GetXY(y, y_);
}
}

// M:kairo.unity.ui.TextFormat.GetXY(System.Single,System.Int32[])
pls::cs::Single TextFormat::GetXY(pls::cs::Single basis,IntArray elem) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.GetXY(System.Single,System.Int32[])",kairo);
{
if ([&]() { auto cs_left = pls::cs::box(elem); auto cs_right = pls::cs::box(IntArray{}); return cs_left == cs_right; }()) {
return basis;
}
pls::cs::Single num = pls::cs::Single(elem[1]) / 10.0f;
if (elem[0] == 0) {
return num;
}
if (elem[0] == 1) {
return basis + num;
}
if (elem[0] == 2) {
return basis - num;
}
if (elem[0] == 3) {
return basis * num;
}
return basis / num;
}
}

// M:kairo.unity.ui.TextFormat.GetAnchor(System.Int32)
pls::cs::Int32 TextFormat::GetAnchor(pls::cs::Int32 anchor) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.GetAnchor(System.Int32)",kairo);
{
if (anchor_ == -1) {
return anchor;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::BitUtil::Check(anchor_, 7);})) {
anchor = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::BitUtil::Off(anchor, 7);});
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::BitUtil::Check(anchor_, 112);})) {
anchor = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::BitUtil::Off(anchor, 112);});
}
return anchor | anchor_;
}
}
} // namespace kairo::unity::ui
}
