#include "application.hpp"
#include <iostream>
using namespace pls::kairo;
namespace {
int assertions=0;void check(bool condition,const char*message){++assertions;if(!condition)throw std::runtime_error(message);}
struct App:IApplication {void OnUpdate()override{}void OnDraw()override{}pls::cs::Ref<FormManagerBase>GetFormManager()override{return {};}};
struct Observation {
    WindowOrientation current;std::vector<WindowOrientation>sequence;std::size_t position{};int reads{},writes{};
    WindowOrientation read(){++reads;if(position<sequence.size())current=sequence[position++];return current;}
};
void print(const std::string&key,const std::string&value,const Observation&o){std::cout<<key<<'\t'<<value<<";gets="<<o.reads<<";auto_gets=0;sets="<<o.writes<<";stored="<<static_cast<std::int32_t>(o.current)<<'\n';}
const char* boolean(bool value){return value?"True":"False";}
int policy(){
    App missing;bool failed=false;try{missing.GetOrientation();}catch(const pls::cs::InvalidOperationException&){failed=true;}check(failed,"Missing orientation reader is explicit");
    failed=false;try{missing.IsSide();}catch(const pls::cs::InvalidOperationException&){failed=true;}check(failed,"Missing side reader is explicit");
    failed=false;try{missing.host_orientation_reader({});}catch(const pls::cs::ArgumentException&){failed=true;}check(failed,"Null reader rejected");
    failed=false;try{missing.ResetOrientation();}catch(const pls::cs::InvalidOperationException&){failed=true;}check(failed,"Missing reset callback is explicit");
    failed=false;try{missing.host_orientation_reset({});}catch(const pls::cs::ArgumentException&){failed=true;}check(failed,"Null reset callback rejected");
    App portrait;portrait.host_configure(240,280,{},{});check(portrait.GetOrientation()==0&&!portrait.IsSide(),"Known PC portrait window");
    App landscape;landscape.host_configure(280,240,{},{});check(landscape.GetOrientation()==3&&landscape.IsSide(),"Explicit PC landscape-left aspect policy");
    App square;square.host_configure(240,240,{},{});check(square.GetOrientation()==0&&!square.IsSide(),"Square aspect policy uses portrait");
    App explicit_reader;explicit_reader.host_orientation_reader([]{return WindowOrientation::landscape_right;});explicit_reader.host_configure(240,280,{},{});check(explicit_reader.GetOrientation()==1,"Explicit reader preserved by host_configure");
    explicit_reader.host_initialization({[]{},[]{}});explicit_reader.host_start();failed=false;try{explicit_reader.host_orientation_reader([]{return WindowOrientation::portrait;});}catch(const pls::cs::InvalidOperationException&){failed=true;}explicit_reader.host_stop();check(failed,"Reader installation is setup-only");
    std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<",\"monitor_sensor_used\":false,\"setter_autorotate_implemented\":false,\"default_reset_callback_implemented\":true}\n";return 0;
}
}
int main(int argc,char**){pls::cs::GcMutatorScope mutator;if(argc>1)return policy();
    for(auto state:{0,1,2,3,4,5,99}){Observation o{static_cast<WindowOrientation>(state),{}};App app;app.host_orientation_reader([&]{return o.read();});print("side-"+std::to_string(state),boolean(app.IsSide()),o);}
    for(auto state:{0,1,2,3,4,5,99}){Observation o{static_cast<WindowOrientation>(state),{}};App app;app.host_orientation_reader([&]{return o.read();});const auto orientation=app.GetOrientation();print("get-"+std::to_string(state),std::to_string(orientation),o);}
    for(auto state:{0,1,2,3,4,5,99}){Observation o{static_cast<WindowOrientation>(state),{}};App app;app.host_orientation_reader([&]{return o.read();});const auto saved=o.read();o.current=WindowOrientation::landscape_right;++o.writes;app.host_orientation_reset([&]{o.current=saved;++o.writes;});app.ResetOrientation();const auto orientation=app.GetOrientation();const auto side=app.IsSide();print("reset-"+std::to_string(state),std::to_string(orientation)+"/"+boolean(side),o);}
    std::vector<std::vector<int>>sequences={{1,3},{1,1,4},{4,1,1},{0,3},{3},{1,1,3}};
    for(std::size_t i=0;i<sequences.size();++i){Observation o{WindowOrientation::unknown,{}};for(auto v:sequences[i])o.sequence.push_back(static_cast<WindowOrientation>(v));App app;app.host_orientation_reader([&]{return o.read();});print("side-reread-"+std::to_string(i),boolean(app.IsSide()),o);}
}
