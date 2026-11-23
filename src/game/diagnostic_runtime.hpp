// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include <cstdio>
#include <exception>
#include <string>
#include "diagnostic_output.hpp"
namespace pls::game {
class TranslationGap final:public std::exception {
    std::string id_;
public:
    explicit TranslationGap(const char* id):id_(id){}
    const char*what()const noexcept override{return id_.c_str();}
};
[[noreturn]] inline void diagnostic_translation_gap(const char* id){
    const auto marker=std::string("PLS_TRANSLATION_GAP=")+id+"\n";
    {std::lock_guard<std::mutex> lock(pls::kairo::debug_log_mutex);std::fwrite(marker.data(),1,marker.size(),stderr);std::fflush(stderr);}
    throw TranslationGap(id);
}
}
#define PLS_BOOTSTRAP_GAP(id) ::pls::game::diagnostic_translation_gap(id)
