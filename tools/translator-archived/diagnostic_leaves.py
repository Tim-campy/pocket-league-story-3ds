"""Private, fatal leaf guards. Never an implementation or normal API binding."""
import json,re
from pathlib import Path
CAPTURE='M:kairo.unity.form.FormManagerBase.Capture(kairo.unity.surface.SurfaceBase,System.String[],kairo.unity.form.FormManagerBase.OnCaptureCompleted,System.Boolean)'
CPP_NAME='pls::game::diagnostic_deferred_capture'
HEADER='diagnostic_deferred_capture.hpp'
def header(api_id=CAPTURE):
    return '''// GENERATED private diagnostic guard; no successful fallback.
#pragma once
#include <cstdio>
#include <exception>
#include <string>
#include "diagnostic_output.hpp"
namespace pls::game {
class DeferredCaptureGap final:public std::exception {
public:const char*what()const noexcept override{return '''+json.dumps(api_id)+''';}
};
template<class... Args>[[noreturn]] inline void diagnostic_deferred_capture(Args&&...){
    const std::string marker="PLS_TRANSLATION_GAP="+std::string('''+json.dumps(api_id)+''')+"\\n";
    {std::lock_guard<std::mutex>lock(pls::kairo::debug_log_mutex);std::fwrite(marker.data(),1,marker.size(),stderr);std::fflush(stderr);}
    throw DeferredCaptureGap();
}
}
'''
def package(output,api_id=CAPTURE):
    output=Path(output);(output/HEADER).write_text(header(api_id),encoding='utf8',newline='\n')
    def contains(path,seen):
        if path in seen:return False
        seen.add(path);text=path.read_text(encoding='utf8')
        if CPP_NAME in text:return True
        for name in re.findall(r'^\s*#include "([^"\r\n]+\.inc)"',text,re.M):
            child=(output/name).resolve()
            if not child.is_relative_to(output.resolve()):raise ValueError('Private generated include escaped output')
            if child.exists()and contains(child,seen):return True
        return False
    callers=[]
    for path in sorted(output.glob('*.cpp')):
        if contains(path,set()):
            text=path.read_text(encoding='utf8');path.write_text('#include "'+HEADER+'"\n'+text,encoding='utf8',newline='\n');callers.append(path.name)
    return callers
