#include "diagnostic_profile.hpp"
#include <sstream>
#include <thread>
#include <cassert>
void leaf(){PLS_METHOD_SCOPE("Assembly-CSharp","M:Own.Leaf",game);}
int main(){using namespace pls::diagnostic;enabled=true;begin_frame();auto*e=register_method("Assembly-CSharp","M:Own.Outer");{
 Scope outer(Area::game,e);leaf();{Scope raster(Area::raster);std::this_thread::sleep_for(std::chrono::milliseconds(2));}
 try{Scope failed(Area::kairo,register_method("KairoLibrary","M:Own.Throw"));throw 3;}catch(int){}
 {Scope composition(Area::composition);std::this_thread::sleep_for(std::chrono::milliseconds(1));}
 }auto times=end_frame();assert(times[0]>0&&times[1]>0&&times[2]>0&&times[3]>0);assert(e->calls==1&&e->completed==1&&e->thrown==0);assert(e->inclusive>e->exclusive);std::ostringstream text;dump(text);assert(text.str().find("M:Own.Leaf")!=std::string::npos);auto*t=register_method("KairoLibrary","M:Own.Throw");assert(t->completed==0&&t->thrown==1);enabled=false;{Scope ignored(Area::game,e);}assert(e->calls==1);}
