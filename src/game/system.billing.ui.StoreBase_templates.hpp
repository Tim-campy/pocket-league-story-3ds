// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "UnityEngine.Purchasing.IExtensionProvider.hpp"
#include "UnityEngine.Purchasing.IStoreController.hpp"
#include "UnityEngine.Purchasing.IStoreListener.hpp"
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "system.KairoService.hpp"
#include "system.billing.ui.ApplyTask.hpp"
#include "system.billing.ui.BillingItem.hpp"
#include "system.billing.ui.BillingManager.hpp"
#include "system.billing.ui.PurchaseRecord.hpp"
#include "system.billing.ui.Receipt.hpp"
#include "system.billing.ui.StoreBase.hpp"
#include "system.billing.util.Inventory.hpp"
#include "system.billing.util.Json.hpp"
#include "system.billing.util.Purchase.hpp"
#include "system.billing.util.SkuDetails.hpp"
#include "generated/java.util.Vector_1_templates.hpp"
#include "system.billing.ui.BillingManager_templates.hpp"

namespace pls::game {
namespace system::billing::ui {

// M:system.billing.ui.BillingManager.Init``1(System.String[][],System.String,System.String[])
template<typename T_T>
void BillingManager::InitOverload(pls::cs::Ref<BillingManager> self,
                                  pls::cs::Array<pls::cs::Array<pls::cs::String>> data,
                                  pls::cs::String paymentProduct,
                                  pls::cs::Array<pls::cs::String> subscription) {
    require(self);
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.billing.ui.BillingManager.Init\u0060\u00601(System.String[][],System.String,System.String[])",
        game);
    {
        self->StoreBase::Init(data, paymentProduct, subscription);
        self->applyTaskList_ = generated::java::util::Vector::create();
        self->purchaseLog_ = generated::java::util::Vector::create();
        self->items_ = pls::cs::Array<pls::cs::Ref<BillingItem>>::make(1000);
        self->itemList_ = generated::java::util::Vector::create();
        for (pls::cs::Int32 spriteIndex = 0; spriteIndex < data.length(); ++spriteIndex) {
            pls::cs::Array<pls::cs::String> array = data[spriteIndex];
            pls::cs::Int32 id = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return generated::java::lang::JInteger::ParseInt(array[0]); });
            pls::cs::Int32 num = 0;
            for (pls::cs::Int32 j = 0; j < generated::java::lang::StringEx::Length(array[1]); ++j) {
                char16_t c = generated::java::lang::StringEx::CharAt(array[1], j);
                if (pls::cs::cast_integral<pls::cs::Int32>(c) ==
                    pls::cs::cast_integral<pls::cs::Int32>(u'1')) {
                    num = (num | (pls::cs::Int32(1) << j));
                }
            }
            pls::cs::Ref<BillingItem> billingItem =
                static_cast<pls::cs::Ref<BillingItem>>(new_instance(static_cast<T_T*>(nullptr)));
            {
                pls::cs::Int32 cs_arg0 = id;
                pls::cs::Int32 cs_arg1 = num;
                pls::cs::String cs_arg2 = array[2];
                pls::cs::String cs_arg3 = array[3];
                pls::cs::String cs_arg4 = array[4];
                pls::cs::Int32 cs_arg5 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return generated::java::lang::JInteger::ParseInt(array[5]); });
                pls::cs::String cs_arg6 = array[6];
                require(billingItem)->Init(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
            }
            {
                auto cs_target = self->items_;
                auto cs_index = require(billingItem)->GetId();
                auto cs_value = billingItem;
                cs_target.set_Item(cs_index, cs_value);
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return generated::java::util::Vector_2_AddElement(require(self->itemList_),
                                                                  pls::cs::box(billingItem));
            });
        }
        pls::cs::Ref<generated::java::util::Vector> vector = generated::java::util::Vector::create();
        pls::cs::Array<bool> array2 =
            pls::cs::Array<bool>::make(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return generated::java::util::Vector_2_Size(require(self->itemList_));
            }));
        for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return generated::java::util::Vector_2_Size(require(self->itemList_));
                                   });
             ++k) {
            if (array2[k]) {
                continue;
            }
            array2[k] = true;
            pls::cs::Ref<BillingItem> billingItem2 =
                pls::cs::unbox<pls::cs::Ref<BillingItem>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return generated::java::util::Vector_2_ElementAt(require(self->itemList_), k);
                }));
            pls::cs::String seriesName = require(billingItem2)->GetSeriesName();
            if (is_null(seriesName)) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Ref<pls::cs::Object> cs_arg0 =
                            pls::cs::box(pls::cs::Array<pls::cs::Ref<BillingItem>>::from({billingItem2}));
                        generated::java::util::Vector_2_AddElement(require(vector), cs_arg0);
                    }());
                });
                continue;
            }
            pls::cs::Ref<generated::java::util::Vector> vector2 = generated::java::util::Vector::create();
            for (pls::cs::Int32 l = k;
                 l < pls::diagnostic::api_call([&]() -> decltype(auto) {
                     return generated::java::util::Vector_2_Size(require(self->itemList_));
                 });
                 ++l) {
                pls::cs::Ref<BillingItem> billingItem3 = pls::cs::unbox<pls::cs::Ref<BillingItem>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return generated::java::util::Vector_2_ElementAt(require(self->itemList_), l);
                    }));
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return string_equals(seriesName, require(billingItem3)->GetSeriesName());
                    })) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return generated::java::util::Vector_2_AddElement(require(vector2),
                                                                          pls::cs::box(billingItem3));
                    });
                    array2[l] = true;
                }
            }
            pls::cs::Array<pls::cs::Ref<BillingItem>> array3 =
                pls::cs::Array<pls::cs::Ref<BillingItem>>::make(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return generated::java::util::Vector_2_Size(require(vector2));
                    }));
            for (pls::cs::Int32 m = 0; m < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return generated::java::util::Vector_2_Size(require(vector2));
                                       });
                 ++m) {
                array3.set_Item(m, pls::cs::unbox<pls::cs::Ref<BillingItem>>(
                                       pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return generated::java::util::Vector_2_ElementAt(require(vector2),
                                                                                            m);
                                       })));
            }
            for (pls::cs::Int32 n = 0; n < pls::cs::Int32(array3.length()) - 1; ++n) {
                for (pls::cs::Int32 num2 = pls::cs::Int32(array3.length()) - 1; num2 > n; --num2) {
                    if ([&]() -> bool {
                            auto cs_left = require(array3.get_Item(num2 - 1))->GetSeriesNumber();
                            auto cs_right = require(array3.get_Item(num2))->GetSeriesNumber();
                            return cs_left > cs_right;
                        }()) {
                        pls::cs::Ref<BillingItem> billingItem4 = array3.get_Item(num2);
                        array3.set_Item(num2, array3.get_Item(num2 - 1));
                        array3.set_Item(num2 - 1, billingItem4);
                    }
                }
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return generated::java::util::Vector_2_AddElement(require(vector), pls::cs::box(array3));
            });
        }
        self->itemGroup_ =
            pls::cs::Array<pls::cs::Array<pls::cs::Ref<BillingItem>>>::make(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return generated::java::util::Vector_2_Size(require(vector)); }));
        for (pls::cs::Int32 num3 = 0; num3 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                          return generated::java::util::Vector_2_Size(require(vector));
                                      });
             ++num3) {
            {
                auto cs_target = self->itemGroup_;
                auto cs_index = num3;
                auto cs_value = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<BillingItem>>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return generated::java::util::Vector_2_ElementAt(require(vector), num3);
                    }));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:system.billing.ui.BillingManager.Load``1(System.Byte[])
template<typename T_T>
void BillingManager::LoadOverload(pls::cs::Ref<BillingManager> self, pls::cs::Array<std::uint8_t> data) {
    require(self);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.Load\u0060\u00601(System.Byte[])",
                     game);
    {
        pls::cs::Array<bool> array = pls::cs::Array<bool>::make(self->items_.length());
        pls::cs::Ref<generated::java::io::ByteArrayInputStream> byteArrayInputStream =
            pls::cs::Ref<generated::java::io::ByteArrayInputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayInputStream = generated::java::io::ByteArrayInputStream::create(data);
                    pls::cs::Int32 num = pls::cs::cast_integral<pls::cs::Int32>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return generated::kairo::unity::util::StreamUtil::ReadShort(byteArrayInputStream);
                        }));
                    for (pls::cs::Int32 i = 0; i < num; ++i) {
                        pls::cs::Int32 num2 = pls::cs::cast_integral<pls::cs::Int32>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return generated::kairo::unity::util::StreamUtil::ReadShort(
                                    byteArrayInputStream);
                            }));
                        pls::cs::Ref<BillingItem> billingItem = self->items_.get_Item(num2);
                        if (is_null(billingItem)) {
                            billingItem = static_cast<pls::cs::Ref<BillingItem>>(
                                new_instance(static_cast<T_T*>(nullptr)));
                            {
                                pls::cs::Int32 cs_arg0 = i;
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                pls::cs::String cs_arg3 = pls::cs::String(u"");
                                pls::cs::String cs_arg4 = pls::cs::String(u"");
                                pls::cs::String cs_arg6 = pls::cs::String(u"");
                                require(billingItem)->Init(cs_arg0, 0, cs_arg2, cs_arg3, cs_arg4, 0, cs_arg6);
                            }
                        }
                        require(billingItem)->Deserialize(byteArrayInputStream);
                        array[num2] = true;
                    }
                    self->applyTaskList_ = generated::java::util::Vector::create();
                    num = pls::cs::cast_integral<pls::cs::Int32>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return generated::kairo::unity::util::StreamUtil::ReadShort(byteArrayInputStream);
                        }));
                    for (pls::cs::Int32 j = 0; j < num; ++j) {
                        pls::cs::Ref<ApplyTask> applyTask = ApplyTask::create();
                        require(applyTask)->Deserialize(byteArrayInputStream);
                        if (require(applyTask)->Enable()) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return generated::java::util::Vector_2_AddElement(
                                    require(self->applyTaskList_), pls::cs::box(applyTask));
                            });
                        }
                    }
                    self->purchaseLog_ = generated::java::util::Vector::create();
                    num = pls::cs::cast_integral<pls::cs::Int32>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return generated::kairo::unity::util::StreamUtil::ReadShort(byteArrayInputStream);
                        }));
                    for (pls::cs::Int32 k = 0; k < num; ++k) {
                        pls::cs::Ref<PurchaseRecord> purchaseRecord = PurchaseRecord::create();
                        require(purchaseRecord)->Deserialize(byteArrayInputStream);
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return generated::java::util::Vector_2_AddElement(require(self->purchaseLog_),
                                                                              pls::cs::box(purchaseRecord));
                        });
                    }
                    self->StoreBase::Load(byteArrayInputStream);
                }
            },
            [&]() {
                if (!is_null(byteArrayInputStream)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                }
                byteArrayInputStream = pls::cs::Ref<generated::java::io::ByteArrayInputStream>{};
                for (pls::cs::Int32 l = 0;
                     l < pls::diagnostic::api_call([&]() -> decltype(auto) {
                         return generated::java::util::Vector_2_Size(require(self->itemList_));
                     });
                     ++l) {
                    pls::cs::Ref<BillingItem> billingItem2 = pls::cs::unbox<pls::cs::Ref<BillingItem>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return generated::java::util::Vector_2_ElementAt(require(self->itemList_), l);
                        }));
                    if (!array[require(billingItem2)->id_]) {
                        {
                            pls::cs::Int32 cs_arg0 = require(billingItem2)->GetState();
                            require(billingItem2)->ChangeState(cs_arg0);
                        }
                    }
                }
            });
    }
}
} // namespace system::billing::ui
}
