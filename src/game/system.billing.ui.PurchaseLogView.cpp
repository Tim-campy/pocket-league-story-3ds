// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "native.AppPlugin.hpp"
#include "system.billing.ui.BillingManager.hpp"
#include "system.billing.ui.PurchaseLogView.hpp"
#include "system.billing.ui.BillingManager_templates.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace system::billing::ui {

void PurchaseLogView::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(title_,visitor);pls::cs::trace_value(text_,visitor);}

static PLS_NOINLINE void cs_init_24ddde8b39392611_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("system.billing.ui.PurchaseLogView",flag,[](){

});}

void PurchaseLogView::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_24ddde8b39392611_slow(flag);}

void PurchaseLogView::create_init(pls::cs::Ref<PurchaseLogView> self,pls::cs::String title) {
PurchaseLogView::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseLogView.#ctor(System.String)",game);
{
self->title_ = title;
}

}

// M:system.billing.ui.PurchaseLogView.#ctor(System.String)
pls::cs::Ref<PurchaseLogView> PurchaseLogView::create(pls::cs::String title) {
PurchaseLogView::ensure_initialized();
 auto self = pls::cs::make_ref<PurchaseLogView>(); PurchaseLogView::create_init(self,title); return self; 
}

// M:system.billing.ui.PurchaseLogView.SetLog(System.Int32,System.String,System.Boolean)
void PurchaseLogView::SetLog(pls::cs::Int32 num,pls::cs::String text,bool log) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseLogView.SetLog(System.Int32,System.String,System.Boolean)",game);
{
num_ = num;
text_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Replace(text, literal(u"<br>"), literal(u"\n"));});
log_ = log;
}
}

// M:system.billing.ui.PurchaseLogView.Show
void PurchaseLogView::Show() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseLogView.Show",game);
{
pls::cs::Int32 num = native::AppPlugin::ShowPurchaseLog(title_, num_, text_, log_);
if (num == 1) {
pls::cs::Ref<pls::kairo::IApplication> currentApp = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();});
pls::cs::Ref<BillingManager> instance = BillingManager::GetInstance();
require(instance)->ClearPurchaseLog();
pls::cs::Ref<kairo::unity::system::KairoBase> instance2 = kairo::unity::system::KairoBase::GetInstance();
try {
require(instance2)->Save();
} catch(const pls::cs::Exception& cs_caught_200) {pls::cs::capture_exception(cs_caught_200);
{

}}
}
}
}
} // namespace system::billing::ui
}
