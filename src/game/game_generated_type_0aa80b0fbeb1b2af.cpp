// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_0aa80b0fbeb1b2af.hpp"
namespace pls::game {

// M:native.AppPlugin.Finish
void cs_6fa3a205c04b8999() {PLS_METHOD_SCOPE("Assembly-CSharp","M:native.AppPlugin.Finish",game);
{
pls::kairo::request_host_finish(); return;
}
}

// M:native.AppPlugin.Init(System.Int32,System.Boolean,System.String)
void cs_27592a85fbe0e2b1(std::int32_t v_language,bool v_log,pls::cs::String v_licenseKey) {PLS_METHOD_SCOPE("Assembly-CSharp","M:native.AppPlugin.Init(System.Int32,System.Boolean,System.String)",game);
{
pls::kairo::native_plugin_init(v_language,v_log,v_licenseKey); return;
}
}

// M:native.AppPlugin.LaunchMailer(System.String,System.String)
void cs_364ba559501338c9(pls::cs::String v_subject,pls::cs::String v_text) {PLS_METHOD_SCOPE("Assembly-CSharp","M:native.AppPlugin.LaunchMailer(System.String,System.String)",game);
{
return;
}
}

// M:native.AppPlugin.ShowPurchaseLog(System.String,System.Int32,System.String,System.Boolean)
std::int32_t cs_b1709ea9ab44e567(pls::cs::String v_title,std::int32_t v_num,pls::cs::String v_text,bool v_log) {PLS_METHOD_SCOPE("Assembly-CSharp","M:native.AppPlugin.ShowPurchaseLog(System.String,System.Int32,System.String,System.Boolean)",game);
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
}
}
