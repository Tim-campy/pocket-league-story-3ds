// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_57e2b41d1ee1c149 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_57e2b41d1ee1c149)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "PlsPortGeneratedBootstrap.Source+ImageTaskState";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::List<cs_fbfef5c19ac20749> cs_927abfca5c112b44{};
pls::cs::List<cs_9896b6da0c305f81> cs_0eb66d6a46162d0d{};
pls::cs::List<cs_5841296a01607078> cs_5484e79983101cbd{};
};

void cs_init_57e2b41d1ee1c149();

pls::cs::Ref<cs_57e2b41d1ee1c149> cs_c80013d97cddb420();

void cs_c80013d97cddb420_init(pls::cs::Ref<cs_57e2b41d1ee1c149> cs_this);
}
