#include "bootstrap.hpp"
namespace pls::kairo {
void BootstrapBindings::trace_edges(const cs::EdgeVisitor& v)const{cs::trace_value(create_config,v);cs::trace_value(initialize_platform,v);cs::trace_value(load_library_resources,v);cs::trace_value(initialize_language,v);cs::trace_value(forms,v);}
void BootstrapBindings::release_edges(){cs::release_value(create_config);cs::release_value(initialize_platform);cs::release_value(load_library_resources);cs::release_value(initialize_language);pls::cs::clear_ref(forms);}
BootstrapContext::BootstrapContext(BootstrapBindings bindings):bindings_(std::move(bindings)){
    if(!bindings_.create_config)throw BootstrapContractError("Generated Config.Create(MyConfig) specialization is not bound");
    if(!bindings_.initialize_platform)throw BootstrapContractError("Original Awake platform initialization is not bound");
    if(!bindings_.load_library_resources)throw BootstrapContractError("Original Awake library-resource attempt is not bound");
    if(!bindings_.initialize_language)throw BootstrapContractError("Original Language.Init is not bound");
    if(!bindings_.forms)throw BootstrapContractError("Generated form collaborators are not bound");
}
void BootstrapContext::BeforeCreate(){
    if(before_entered_)throw BootstrapContractError("Awake preparation was entered more than once");before_entered_=true;
    bindings_.create_config();status_.config_created=true;
    // Installing adapters must not eagerly call any source singleton getter.
    install_form_runtime(bindings_.forms);
    bindings_.initialize_platform();status_.platform_initialized=true;
    status_.resources_attempted=true;
    try{
        auto resource=bindings_.load_library_resources();
        if(!resource)throw BootstrapContractError("Library loader completed without its original ResourceManager object");
        library_resources_=std::move(resource);status_.resource_object_retained=true;
    }catch(const BootstrapContractError&){throw;}
     catch(const cs::Exception& error){status_.optional_resource_error_type=error.type_name();}
     catch(const std::bad_alloc&){status_.optional_resource_error_type="System.OutOfMemoryException";}
    // Main.OnCreate is invoked by IApplication.host_start after this returns.
}
void BootstrapContext::AfterCreate(){
    if(!status_.platform_initialized||!status_.resources_attempted||after_entered_)throw BootstrapContractError("Language.Init phase does not follow the original Awake order");
    after_entered_=true;bindings_.initialize_language();status_.language_initialized=true;
}
void BootstrapContext::trace_edges(const cs::EdgeVisitor& v)const{bindings_.trace_edges(v);cs::trace_value(library_resources_,v);}
void BootstrapContext::release_edges(){bindings_.release_edges();pls::cs::clear_ref(library_resources_);}
cs::Ref<BootstrapContext> configure_bootstrap(cs::Ref<IApplication> app,BootstrapBindings bindings){
    if(!app)throw cs::ArgumentNullException();auto context=cs::make_ref<BootstrapContext>(std::move(bindings));const auto weak=cs::Weak<BootstrapContext>(context);
    ApplicationInitializationBridge bridge;
    bridge.before_create=[weak]{auto value=weak.lock();if(!value)throw BootstrapContractError("Awake preparation owner has expired");value->BeforeCreate();};
    bridge.after_create=[weak]{auto value=weak.lock();if(!value)throw BootstrapContractError("Language initialization owner has expired");value->AfterCreate();};
    bridge.library_resources=[weak]{auto value=weak.lock();if(!value)throw BootstrapContractError("Library resource owner has expired");return value->resource_object();};
    app->host_initialization(std::move(bridge),context);return context;
}
}
