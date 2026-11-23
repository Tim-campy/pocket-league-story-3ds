// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::ui {

struct Matrix : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"Equals", "M:kairo.unity.ui.Matrix.Equals(System.Object)"},
    {"GetHashCode", "M:kairo.unity.ui.Matrix.GetHashCode"});
PLS_MANAGED_CLASS("kairo.unity.ui.Matrix", Matrix, pls::cs::Object)
pls::cs::Array<pls::cs::Single> mtx_{};
pls::cs::Array<pls::cs::Single> mul_{};
pls::cs::Array<pls::cs::Single> set_{};
bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
std::int32_t GetHashCode() override;

static bool Equals(pls::cs::Ref<Matrix> self,pls::cs::Ref<pls::cs::Object> obj);

static void ensure_initialized();

static pls::cs::Array<pls::cs::Single>& identityMatrix_();

static pls::cs::Ref<Matrix>& RotateTempMatrix_();

static pls::cs::Ref<Matrix>& ScaleTemporaryMatrix_();

static pls::cs::Ref<Matrix>& TranslateTempMatrix_();

static void create_init(pls::cs::Ref<Matrix> self);

static pls::cs::Ref<Matrix> create();

pls::cs::Ref<Matrix> Reset();

pls::cs::Ref<Matrix> SetValues(pls::cs::Array<pls::cs::Single> matrix);

void GetValues(pls::cs::Array<pls::cs::Single> matrix);

bool IsIdentity();

pls::cs::Ref<Matrix> PostConcat(pls::cs::Array<pls::cs::Single> transform);

pls::cs::Ref<Matrix> PostRotate(pls::cs::Single angle,pls::cs::Single px,pls::cs::Single py);

pls::cs::Ref<Matrix> SetRotate(pls::cs::Single angle,pls::cs::Single px,pls::cs::Single py);

static pls::cs::Ref<Matrix> RotateTemporary(pls::cs::Single angle,pls::cs::Single px,pls::cs::Single py);

pls::cs::Ref<Matrix> PostScale(pls::cs::Single x,pls::cs::Single y,pls::cs::Single px,pls::cs::Single py);

pls::cs::Ref<Matrix> SetScale(pls::cs::Single x,pls::cs::Single y,pls::cs::Single px,pls::cs::Single py);

static pls::cs::Ref<Matrix> ScaleTemporary(pls::cs::Single x,pls::cs::Single y,pls::cs::Single px,pls::cs::Single py);

pls::cs::Ref<Matrix> PostTranslate(pls::cs::Single x,pls::cs::Single y);

pls::cs::Ref<Matrix> SetTranslate(pls::cs::Single x,pls::cs::Single y);

static pls::cs::Ref<Matrix> TranslateTemporary(pls::cs::Single x,pls::cs::Single y);

void MapPoints(pls::cs::Single& x,pls::cs::Single& y);
};
} // namespace kairo::unity::ui
}
