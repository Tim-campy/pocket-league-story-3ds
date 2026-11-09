#pragma once
#include "forms.hpp"
#include <filesystem>
namespace pls::kairo {
using CaptureCompleted=cs::Delegate<void(cs::Array<cs::String>)>;
void configure_capture(const std::filesystem::path&);
void queue_capture(cs::Ref<FormManagerBase>,std::int32_t,std::int32_t,std::int32_t,std::int32_t,cs::Array<cs::String>,CaptureCompleted,bool);
void finish_captures(cs::Ref<Image>);
void write_capture_png(const std::filesystem::path&,const Image&);
}
