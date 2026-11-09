#include "system.hpp"
#include <iostream>
#include <sstream>
int main(){
    using namespace pls::kairo;
    int cases=0;
    auto check=[&](bool value){if(!value)throw std::runtime_error("Platform contract assertion failed");++cases;};
    check(UnityApplication::get_targetFrameRate()==-1);
    for(auto rate:{-1,0,2,20,120,400}){
        UnityApplication::set_targetFrameRate(rate);
        check(UnityApplication::get_targetFrameRate()==rate);
    }
    QualitySettings::set_vSyncCount(0);check(QualitySettings::get_vSyncCount()==0);
    check(QualitySettings::get_antiAliasing()==0);
    auto battery=native_battery_info();check(battery.length()==2&&battery.at(0)==0&&battery.at(1)==0);
    battery.at(0)=2;check(native_battery_info().at(0)==0);
    bool rejected=false;try{QualitySettings::set_vSyncCount(1);}catch(const pls::cs::NotSupportedException&){rejected=true;}
    check(rejected);
    check(!native_package_name().is_null()&&native_package_name().length()==0);
    native_plugin_init(3,true,pls::cs::String(u"synthetic-unused-key"));
    auto state=native_plugin_state();check(state.initialized&&state.language==3&&state.logging);
    native_plugin_init(-7,false,{});state=native_plugin_state();check(state.language==-7&&!state.logging);
    // Exercise real pacing without claiming frame-time performance of the game.
    UnityApplication::set_targetFrameRate(100);
    auto start=std::chrono::steady_clock::now();UnityApplication::pace(start);
    check(std::chrono::steady_clock::now()-start>=std::chrono::milliseconds(9));
    std::ostringstream diagnostics;auto* previous=std::cerr.rdbuf(diagnostics.rdbuf());
    debug_log(pls::cs::String(u"fixture-log"));debug_log(pls::cs::Ref<pls::cs::Object>{});
    std::cerr.rdbuf(previous);check(diagnostics.str()=="fixture-log\nNull\n");
    std::cout<<"{\"status\":\"PASS\",\"native_assertions\":"<<cases<<",\"game_boot\":false}\n";
}
