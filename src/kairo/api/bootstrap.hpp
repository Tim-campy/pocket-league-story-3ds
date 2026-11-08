#pragma once
#include "application.hpp"
#include "forms_execution.hpp"
namespace pls::kairo {
class BootstrapContractError : public cs::InvalidOperationException {
public:using cs::InvalidOperationException::InvalidOperationException;
    const char* type_name()const noexcept override{return "PocketLeaguePort.BootstrapContractError";}
};
struct BootstrapBindings {
    cs::Delegate<void()> create_config;
    cs::Delegate<void()> initialize_platform;
    // Same try block as Awake: create/load ResourceManager, mark each non-null
    // image SetExpiration(true,40), then return that original resource object.
    cs::Delegate<cs::Ref<cs::Object>()> load_library_resources;
    cs::Delegate<void()> initialize_language;
    cs::Ref<FormRuntime> forms;
    void trace_edges(const cs::EdgeVisitor&)const;void release_edges();
};
struct BootstrapStatus {
    bool config_created{},platform_initialized{},resources_attempted{},resource_object_retained{},language_initialized{};
    std::string optional_resource_error_type;
};
class BootstrapContext : public cs::Object {
    BootstrapBindings bindings_;
    cs::Ref<cs::Object> library_resources_;
    BootstrapStatus status_;
    bool before_entered_{},after_entered_{};
public:
    explicit BootstrapContext(BootstrapBindings);
    void BeforeCreate();void AfterCreate();
    const BootstrapStatus& status()const{return status_;}
    cs::Ref<cs::Object> resource_object()const{return library_resources_;}
    void trace_edges(const cs::EdgeVisitor&)const override;void release_edges()override;
};
// Generated configure_application builds the bindings from source functions;
// this installs phases around the *real virtual* Main.OnCreate in host_start.
// No callback here replaces Main, selects a form or draws a synthetic menu.
cs::Ref<BootstrapContext> configure_bootstrap(cs::Ref<IApplication>,BootstrapBindings);
}
