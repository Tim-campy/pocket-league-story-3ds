// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace PlsPortGeneratedBootstrap::Source {

void ensure_initialized();

pls::cs::Ref<pls::kairo::Font>& drawBitmapFont();

void AdjustCreateArea(pls::cs::Int32 delta);

pls::cs::Ref<pls::cs::Object> BeginImageTasks(pls::cs::Ref<pls::kairo::Image> image);

void Capture(pls::cs::Ref<pls::kairo::FormManagerBase> manager,pls::cs::Ref<kairo::unity::surface::SurfaceBase> view,pls::cs::Array<pls::cs::String> tables,pls::cs::Delegate<void(pls::cs::Array<pls::cs::String>)> completed,bool temporary);

pls::cs::Int32 CheckCount();

void CloseJarCache();

void Collect();

bool CountEnabled();

void CreateConfig();

bool DebugFlag();

void DisableAds();

void DrawCounters();

void DrawGraphicsText(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<kairo::unity::ui::TextFormat> lf,pls::cs::String str,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 anchor);

void DrawImageBalloons(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<pls::kairo::Image> image,pls::cs::Single dx,pls::cs::Single dy,pls::cs::Single width,pls::cs::Single height,pls::cs::Single sx,pls::cs::Single sy,pls::cs::Single sw,pls::cs::Single sh);

void DrawImageTouches(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<pls::kairo::Image> image,pls::cs::Single dx,pls::cs::Single dy);

void FinishImageTasks(pls::cs::Ref<pls::kairo::Image> image,pls::cs::Ref<pls::cs::Object> value,pls::cs::Ref<pls::kairo::Offscreen> offscreen,bool commit);

pls::cs::Int64 FreeHeapMemory();

pls::cs::Ref<kairo::unity::ui::ResourceManager> GetApplicationResource(pls::cs::Ref<pls::kairo::IApplication> app);

pls::cs::Ref<kairo::unity::panel::FepPanel> GetFep();

pls::cs::Ref<kairo::unity::ui::Matrix> GetGraphicsLocalMatrix(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<kairo::unity::ui::Matrix> value);

pls::cs::Ref<kairo::unity::ui::Matrix> GetGraphicsMatrix(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<kairo::unity::ui::Matrix> value);

pls::cs::Ref<kairo::unity::ui::Matrix> GetGraphicsScreenMatrix(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<kairo::unity::ui::Matrix> value);

pls::cs::Ref<kairo::unity::graphics::RectangleF> GetGraphicsTransRectGUI(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Single x,pls::cs::Single y,pls::cs::Single width,pls::cs::Single height,pls::cs::Ref<kairo::unity::graphics::RectangleF> dst);

pls::cs::Ref<kairo::unity::system::KairoBase> GetKairo();

pls::cs::Int32 GetReserve(pls::cs::Ref<kairo::unity::system::KairoBase> value);

bool GetReserveEnabled(pls::cs::Ref<kairo::unity::system::KairoBase> value);

void InitializeLanguage();

void InitializePlatform();

bool IsPlaying(pls::cs::Ref<kairo::unity::system::KairoBase> value);

bool Japanese();

pls::cs::Ref<pls::cs::Object> LoadLibraryResources();

bool LocalizeScale();

void MarkupDraw(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String value,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 anchor);

pls::cs::Single MarkupWidth(pls::cs::Ref<pls::kairo::Font> font,pls::cs::String value);

pls::cs::Array<pls::cs::Single> MatrixValues(pls::cs::Ref<kairo::unity::ui::Matrix> value);

pls::cs::Array<pls::cs::Int32> MeasureImage(pls::cs::Array<std::uint8_t> data);

pls::cs::Int64 Millis();

void Pause(pls::cs::Int64 value);

void PushGraphicsMatrix(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<kairo::unity::ui::Matrix> value);

void QueueImageText(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String text,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 anchor);

pls::cs::Array<std::uint8_t> ReadImageData(pls::cs::Int32 rs,pls::cs::Int32 rc,pls::cs::String file,pls::cs::String palette);

void Save(pls::cs::Ref<kairo::unity::system::KairoBase> value);

void SaveAll(pls::cs::Ref<kairo::unity::system::KairoBase> value);

void SetGameState(pls::cs::Ref<kairo::unity::system::KairoBase> value,bool playing);

void SetGraphicsMatrix(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<kairo::unity::ui::Matrix> value);

void SetReserve(pls::cs::Ref<kairo::unity::system::KairoBase> value,pls::cs::Int32 reserved);

void SetReserveEnabled(pls::cs::Ref<kairo::unity::system::KairoBase> value,bool enabled);

void SetWindowFullscreen(bool enabled);

void ShapeDrawn();

void ShowToast(pls::cs::String text,pls::cs::Int32 duration);

void TerminateApplication();

pls::cs::Int64 TotalHeapMemory();

pls::cs::String Translate(pls::cs::String value);

bool UpdateFep();

void UpdateKairo(pls::cs::Ref<kairo::unity::system::KairoBase> value);

void Yield();
} // namespace PlsPortGeneratedBootstrap::Source
}
