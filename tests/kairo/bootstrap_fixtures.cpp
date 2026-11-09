#include "bootstrap.hpp"
#include "forms_callbacks.hpp"
#include <iostream>
using namespace pls::kairo;
namespace {std::string trace;int failure;void log(const char* s){trace+=std::string(s)+";";}
struct App:IApplication {void OnCreate()override{log("main");if(failure==4)throw pls::cs::Exception();}void OnUpdate()override{}void OnDraw()override{}pls::cs::Ref<FormManagerBase> GetFormManager()override{return {};}};
BootstrapBindings bindings(){BootstrapBindings b;b.forms=pls::cs::make_ref<CallbackFormRuntime>(FormCallbacks{});
 b.create_config=pls::cs::Delegate<void()>::from_static("synthetic-config",[]{log("config");if(failure==1)throw pls::cs::Exception();});
 b.initialize_platform=pls::cs::Delegate<void()>::from_static("synthetic-platform",[]{log("platform");if(failure==2)throw pls::cs::Exception();});
 b.load_library_resources=pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::from_static("synthetic-resources",[]{log("storage");log("resources");if(failure==3)throw pls::cs::Exception();log("expiration40");return pls::cs::make_ref<pls::cs::Object>();});
 b.initialize_language=pls::cs::Delegate<void()>::from_static("synthetic-language",[]{log("language");if(failure==5)throw pls::cs::Exception();});return b;}
void run(const char* name,int error){trace.clear();failure=error;auto app=pls::cs::make_ref<App>();app->source_Init(app);auto context=configure_bootstrap(app,bindings());try{app->host_start();}catch(const pls::cs::Exception& e){trace+="error:"+std::string(e.type_name())+";";}std::cout<<name<<'='<<trace<<'/'<<(context->resource_object()?1:0)<<'\n';}
int policy(){unsigned int n=0;auto check=[&](bool v){if(!v)throw std::runtime_error("Bootstrap policy failed");++n;};
 auto app=pls::cs::make_ref<App>();auto incomplete=bindings();incomplete.create_config={};bool failed=false;try{configure_bootstrap(app,std::move(incomplete));}catch(const BootstrapContractError&){failed=true;}check(failed);
 auto context=configure_bootstrap(app,bindings());check(!app->source_resource_object());failed=false;try{context->AfterCreate();}catch(const BootstrapContractError&){failed=true;}check(failed);
 auto bad=bindings();bad.load_library_resources=pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::from_static("invalid-null-loader",[]{return pls::cs::Ref<pls::cs::Object>{};});context=configure_bootstrap(app,std::move(bad));failure=0;failed=false;try{context->BeforeCreate();}catch(const BootstrapContractError&){failed=true;}check(failed);
 std::weak_ptr<BootstrapContext> weak;
 {auto owner=pls::cs::make_ref<App>();owner->source_Init(owner);auto b=bindings();auto raw=owner.get();b.create_config=pls::cs::Delegate<void()>::bind(owner,"bound-owner",[raw]{(void)raw;});auto c=configure_bootstrap(owner,std::move(b));weak=c;owner->host_start();check(owner->source_resource_object()==c->resource_object()&&bool(c->resource_object()));owner->host_stop();}
 install_form_runtime({});pls::cs::gc_collect();check(weak.expired());
 std::cout<<"{\"assertions\":"<<n<<",\"critical_missing_bindings_rejected\":true,\"null_resource_success_rejected\":true,\"bootstrap_owner_cycle_collected\":true,\"game_boot\":false}\n";return 0;}
}
int main(int argc,char**){if(argc==2)return policy();run("success",0);run("config-error",1);run("platform-error",2);run("optional-resource-error",3);run("main-error",4);run("language-error",5);}
