// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.ByteArrayOutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "system.KairoService.hpp"
#include "system.billing.ui.ApplyTask.hpp"
#include "system.billing.ui.BillingItem.hpp"
#include "system.billing.ui.BillingManager.hpp"
#include "system.billing.ui.PurchaseRecord.hpp"
#include "system.billing.ui.StoreBase.hpp"
#include "system.billing.util.Inventory.hpp"
#include "system.billing.util.Purchase.hpp"
#include "system.billing.util.SkuDetails.hpp"
namespace pls::game {
namespace system::billing::ui {

// M:system.billing.ui.BillingManager.Init``1(System.String[][])
template<typename T_T>
void BillingManager::Init(pls::cs::Ref<BillingManager> self,pls::cs::Array<pls::cs::Array<pls::cs::String>> data) {
require(self);
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingManager.Init\u0060\u00601(System.String[][])",game);
{
BillingManager::InitOverload<T_T>(self, data, literal(u"payment"), pls::cs::Array<pls::cs::String>::make(0));
}

}
} // namespace system::billing::ui
}
