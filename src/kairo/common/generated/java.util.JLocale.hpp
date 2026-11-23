// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace java::util {

struct JLocale : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"Equals", "M:java.util.JLocale.Equals(System.Object)"},
    {"GetHashCode", "M:java.util.JLocale.GetHashCode"});
PLS_MANAGED_CLASS("java.util.JLocale", JLocale, pls::cs::Object)
pls::cs::String language_{};
pls::cs::String country_{};
bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
std::int32_t GetHashCode() override;

static bool Equals(pls::cs::Ref<JLocale> self,pls::cs::Ref<pls::cs::Object> obj);

static void ensure_initialized();

static pls::cs::Ref<JLocale>& CANADA();

static pls::cs::Ref<JLocale>& CANADA_FRENCH();

static pls::cs::Ref<JLocale>& CHINA();

static pls::cs::Ref<JLocale>& CHINESE();

static pls::cs::Ref<JLocale>& defaultLocale();

static pls::cs::Ref<JLocale>& ENGLISH();

static pls::cs::Ref<JLocale>& FRANCE();

static pls::cs::Ref<JLocale>& FRENCH();

static pls::cs::Ref<JLocale>& GERMAN();

static pls::cs::Ref<JLocale>& GERMANY();

static pls::cs::Ref<JLocale>& ITALIAN();

static pls::cs::Ref<JLocale>& ITALY();

static pls::cs::Ref<JLocale>& JAPAN();

static pls::cs::Ref<JLocale>& JAPANESE();

static pls::cs::Ref<JLocale>& KOREA();

static pls::cs::Ref<JLocale>& KOREAN();

static pls::cs::Ref<JLocale>& PRC();

static pls::cs::Ref<JLocale>& ROOT();

static pls::cs::Ref<JLocale>& SIMPLIFIED_CHINESE();

static pls::cs::Ref<JLocale>& TAIWAN();

static pls::cs::Ref<JLocale>& TRADITIONAL_CHINESE();

static pls::cs::Ref<JLocale>& UK();

static pls::cs::Ref<JLocale>& US();

static void create_init(pls::cs::Ref<JLocale> self,pls::cs::String language,pls::cs::String country);

static pls::cs::Int32 GetHashCode(pls::cs::Ref<JLocale> self);

static bool op_Equality(pls::cs::Ref<JLocale> obj1,pls::cs::Ref<JLocale> obj2);

static bool op_Inequality(pls::cs::Ref<JLocale> obj1,pls::cs::Ref<JLocale> obj2);

static pls::cs::Ref<JLocale> create(pls::cs::String language,pls::cs::String country);

static pls::cs::Ref<JLocale> GetDefault();

pls::cs::String GetLanguage();

pls::cs::String GetCountry();
};
} // namespace java::util
}
