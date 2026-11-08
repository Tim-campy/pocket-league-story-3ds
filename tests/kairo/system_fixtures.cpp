#include "system.hpp"
#include <iostream>
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
    bool rejected=false;try{QualitySettings::set_vSyncCount(1);}catch(const pls::cs::NotSupportedException&){rejected=true;}
    check(rejected);
    native_plugin_init(3,true,pls::cs::String(u"synthetic-unused-key"));
    auto state=native_plugin_state();check(state.initialized&&state.language==3&&state.logging);
    native_plugin_init(-7,false,{});state=native_plugin_state();check(state.language==-7&&!state.logging);
    // Exercise real pacing without claiming frame-time performance of the game.
    UnityApplication::set_targetFrameRate(100);
    auto start=std::chrono::steady_clock::now();UnityApplication::pace(start);
    check(std::chrono::steady_clock::now()-start>=std::chrono::milliseconds(9));
    std::cout<<"{\"status\":\"PASS\",\"native_assertions\":"<<cases<<",\"game_boot\":false}\n";
}
