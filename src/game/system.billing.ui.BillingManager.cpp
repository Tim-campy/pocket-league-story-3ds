// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "UnityEngine.Purchasing.IStoreListener.hpp"
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.ByteArrayOutputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
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
#include "generated/java.util.Vector_1_templates.hpp"
#include "system.billing.ui.BillingManager_templates.hpp"
#include "system.billing.ui.StoreBase_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;

namespace pls::game {
namespace system::billing::ui {

void BillingManager::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    StoreBase::trace_edges(visitor);
    pls::cs::trace_value(consumeItem_, visitor);
    pls::cs::trace_value(items_, visitor);
    pls::cs::trace_value(itemList_, visitor);
    pls::cs::trace_value(itemGroup_, visitor);
    pls::cs::trace_value(applyTaskList_, visitor);
    pls::cs::trace_value(purchaseLog_, visitor);
    pls::cs::trace_value(RegistApplyTask_lock, visitor);
    pls::cs::trace_value(UpdateApplyTask_lock, visitor);
}

static pls::cs::Ref<kl_unity_util::SecureString> BillingManager_BASE64_PUBLIC_KEY_storage{};

static pls::cs::Ref<BillingManager> BillingManager_instance__storage{};

static PLS_NOINLINE void cs_init_6ee7d14059be1acf_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(BillingManager_BASE64_PUBLIC_KEY_storage, visitor);
        pls::cs::trace_value(BillingManager_instance__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("system.billing.ui.BillingManager", flag, []() {
        BillingManager_BASE64_PUBLIC_KEY_storage = pls::cs::evaluate_type_initializer_field(
            "F:system.billing.ui.BillingManager.BASE64_PUBLIC_KEY",
            [&]() { return kl_unity_util::SecureString::create(pls::cs::String(u"")); });
    });
}

void BillingManager::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_6ee7d14059be1acf_slow(flag);
}

pls::cs::Ref<kl_unity_util::SecureString>& BillingManager::BASE64_PUBLIC_KEY() {
    BillingManager::ensure_initialized();
    return BillingManager_BASE64_PUBLIC_KEY_storage;
}

pls::cs::Ref<BillingManager>& BillingManager::instance_() {
    BillingManager::ensure_initialized();
    return BillingManager_instance__storage;
}

// Concrete compile receipt: M:system.billing.ui.BillingManager.Init``1(System.String[][],System.String,System.String[]) [system.billing.ui.BillingItem]
template void BillingManager::InitOverload<pls::cs::Ref<BillingItem>>(pls::cs::Ref<BillingManager>,
                                                                      StringArray2, pls::cs::String,
                                                                      StringArray);

// Concrete compile receipt: M:system.billing.ui.BillingManager.Init``1(System.String[][]) [system.billing.ui.BillingItem]
template void BillingManager::Init<pls::cs::Ref<BillingItem>>(pls::cs::Ref<BillingManager>, StringArray2);

// Concrete compile receipt: M:system.billing.ui.BillingManager.Load``1(System.Byte[]) [system.billing.ui.BillingItem]
template void BillingManager::LoadOverload<pls::cs::Ref<BillingItem>>(pls::cs::Ref<BillingManager>,
                                                                      ByteArray);

// M:system.billing.ui.BillingManager.#ctor
void BillingManager::create_init(pls::cs::Ref<BillingManager> self) {
    BillingManager::ensure_initialized();
    self->RegistApplyTask_lock = pls::cs::make_ref<pls::cs::Object>();
    self->UpdateApplyTask_lock = pls::cs::make_ref<pls::cs::Object>();
    StoreBase::create_init(pls::cs::static_pointer_cast<StoreBase>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.#ctor", game);
    {
    }
}

// M:system.billing.ui.BillingManager.GetInstance
pls::cs::Ref<BillingManager> BillingManager::GetInstance() {
    BillingManager::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.GetInstance", game);
    {
        return BillingManager::instance_();
    }
}

// M:system.billing.ui.BillingManager.Init(System.String[][])
void BillingManager::Init(StringArray2 data) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.Init(System.String[][])", game);
    {
        BillingManager::InitOverload<pls::cs::Ref<BillingItem>>(this, data, literal(u"payment"),
                                                                StringArray::make(0));
    }
}

// M:system.billing.ui.BillingManager.Init(System.String[][],System.String,System.String[])
void BillingManager::Init(StringArray2 data, pls::cs::String paymentProduct, StringArray subscription) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.billing.ui.BillingManager.Init(System.String[][],System.String,System.String[])", game);
    {
        BillingManager::InitOverload<pls::cs::Ref<BillingItem>>(this, data, paymentProduct, subscription);
    }
}

// M:system.billing.ui.BillingManager.Load(System.Byte[])
void BillingManager::Load(ByteArray data) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.Load(System.Byte[])", game);
    {
        BillingManager::LoadOverload<pls::cs::Ref<BillingItem>>(this, data);
    }
}

// M:system.billing.ui.BillingManager.Write
ByteArray BillingManager::Write() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.Write", game);
    {
        pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream =
            pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
        {
            auto cs_flow_198 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<ByteArray> {
                    {
                        byteArrayOutputStream = kl_io::ByteArrayOutputStream::create();
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::WriteShort(
                                static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                                pls::cs::cast_integral<std::int16_t>(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_java_util::Vector_2_Size(require(itemList_));
                                    })));
                        });
                        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                       return kl_java_util::Vector_2_Size(require(itemList_));
                                                   });
                             ++i) {
                            pls::cs::Ref<BillingItem> billingItem = pls::cs::unbox<pls::cs::Ref<BillingItem>>(
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_ElementAt(require(itemList_), i);
                                }));
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteShort(
                                    static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                                    pls::cs::cast_integral<std::int16_t>(require(billingItem)->id_));
                            });
                            require(billingItem)->Serialize(byteArrayOutputStream);
                        }
                        pls::cs::Ref<kl_java_util::Vector> applyTaskList = GetApplyTaskList(false);
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::WriteShort(
                                static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                                pls::cs::cast_integral<std::int16_t>(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_java_util::Vector_2_Size(require(applyTaskList));
                                    })));
                        });
                        for (pls::cs::Int32 j = 0;
                             j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                 return kl_java_util::Vector_2_Size(require(applyTaskList));
                             });
                             ++j) {
                            pls::cs::Ref<ApplyTask> applyTask = pls::cs::unbox<pls::cs::Ref<ApplyTask>>(
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_ElementAt(require(applyTaskList), j);
                                }));
                            require(applyTask)->Serialize(byteArrayOutputStream);
                        }
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::WriteShort(
                                static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                                pls::cs::cast_integral<std::int16_t>(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_java_util::Vector_2_Size(require(purchaseLog_));
                                    })));
                        });
                        for (pls::cs::Int32 k = 0;
                             k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                 return kl_java_util::Vector_2_Size(require(purchaseLog_));
                             });
                             ++k) {
                            pls::cs::Ref<PurchaseRecord> purchaseRecord =
                                pls::cs::unbox<pls::cs::Ref<PurchaseRecord>>(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_java_util::Vector_2_ElementAt(require(purchaseLog_), k);
                                    }));
                            require(purchaseRecord)->Serialize(byteArrayOutputStream);
                        }
                        Save(byteArrayOutputStream);
                        return pls::cs::flow_return(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        }));
                    }
                    return {};
                },
                [&]() {
                    if (!is_null(byteArrayOutputStream)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    }
                    byteArrayOutputStream = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
                });
            return cs_flow_198.value();
        }
    }
}

// M:system.billing.ui.BillingManager.NewGame(System.Boolean)
void BillingManager::NewGame(bool take) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.NewGame(System.Boolean)", game);
    {
        prepareGame_ = true;
        pls::cs::run_finally(
            [&]() {
                {
                    confirm_ = false;
                    for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                  return kl_java_util::Vector_2_Size(require(applyTaskList_));
                                              }) -
                                              1;
                         num >= 0; --num) {
                        pls::cs::Ref<ApplyTask> applyTask = pls::cs::unbox<pls::cs::Ref<ApplyTask>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(require(applyTaskList_), num);
                            }));
                        if (require(applyTask)->IsGameApply()) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_RemoveElementAt(require(applyTaskList_), num);
                            });
                        }
                    }
                    for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                   return kl_java_util::Vector_2_Size(require(itemList_));
                                               });
                         ++i) {
                        pls::cs::Ref<BillingItem> billingItem = pls::cs::unbox<pls::cs::Ref<BillingItem>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(require(itemList_), i);
                            }));
                        if (!(require(billingItem)->Check(2))) {
                            continue;
                        }
                        require(billingItem)->provision_ = false;
                        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(require(billingItem)->state_)->Get();
                            }) == 1 &&
                            take) {
                            require(billingItem)->provision_ = true;
                        }
                    }
                    UpdateApplyTask(false);
                }
            },
            [&]() { prepareGame_ = false; });
    }
}

// M:system.billing.ui.BillingManager.LoadGame(System.Byte[])
void BillingManager::LoadGame(ByteArray data) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.LoadGame(System.Byte[])", game);
    {
        pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream =
            pls::cs::Ref<kl_io::ByteArrayInputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayInputStream = kl_io::ByteArrayInputStream::create(data);
                    confirm_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::StreamUtil::ReadBoolean(byteArrayInputStream);
                    });
                    for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                  return kl_java_util::Vector_2_Size(require(applyTaskList_));
                                              }) -
                                              1;
                         num >= 0; --num) {
                        pls::cs::Ref<ApplyTask> applyTask = pls::cs::unbox<pls::cs::Ref<ApplyTask>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(require(applyTaskList_), num);
                            }));
                        if (require(applyTask)->IsGameApply()) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_RemoveElementAt(require(applyTaskList_), num);
                            });
                        }
                    }
                    pls::cs::Int32 num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);
                    });
                    for (pls::cs::Int32 i = 0; i < num2; ++i) {
                        pls::cs::Int32 num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);
                        });
                        bool provision_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::ReadBoolean(byteArrayInputStream);
                        });
                        if (num3 < items_.length() && !is_null(items_.get_Item(num3))) {
                            require(items_.get_Item(num3))->provision_ = provision_;
                        }
                    }
                    num2 = pls::cs::cast_integral<pls::cs::Int32>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);
                        }));
                    for (pls::cs::Int32 j = 0; j < num2; ++j) {
                        pls::cs::Ref<ApplyTask> applyTask2 = ApplyTask::create();
                        require(applyTask2)->Deserialize(byteArrayInputStream);
                        if (require(applyTask2)->Enable()) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_AddElement(require(applyTaskList_),
                                                                         pls::cs::box(applyTask2));
                            });
                        }
                    }
                }
            },
            [&]() {
                if (!is_null(byteArrayInputStream)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                }
                byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            });
    }
}

// M:system.billing.ui.BillingManager.WriteGame
ByteArray BillingManager::WriteGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.WriteGame", game);
    {
        pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream =
            pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
        {
            auto cs_flow_199 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<ByteArray> {
                    {
                        byteArrayOutputStream = kl_io::ByteArrayOutputStream::create();
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::WriteBoolean(byteArrayOutputStream, confirm_);
                        });
                        pls::cs::Ref<kl_java_util::Vector> itemList = GetItemList(true);
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::WriteInt(
                                static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_Size(require(itemList));
                                }));
                        });
                        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                       return kl_java_util::Vector_2_Size(require(itemList));
                                                   });
                             ++i) {
                            pls::cs::Ref<BillingItem> billingItem = pls::cs::unbox<pls::cs::Ref<BillingItem>>(
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_ElementAt(require(itemList), i);
                                }));
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteInt(
                                    static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                                    require(billingItem)->id_);
                            });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteBoolean(
                                    byteArrayOutputStream, require(billingItem)->provision_);
                            });
                        }
                        itemList = GetApplyTaskList(true);
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::WriteShort(
                                static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                                pls::cs::cast_integral<std::int16_t>(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_java_util::Vector_2_Size(require(itemList));
                                    })));
                        });
                        for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                       return kl_java_util::Vector_2_Size(require(itemList));
                                                   });
                             ++j) {
                            pls::cs::Ref<ApplyTask> applyTask = pls::cs::unbox<pls::cs::Ref<ApplyTask>>(
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_ElementAt(require(itemList), j);
                                }));
                            require(applyTask)->Serialize(byteArrayOutputStream);
                        }
                        return pls::cs::flow_return(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        }));
                    }
                    return {};
                },
                [&]() {
                    if (!is_null(byteArrayOutputStream)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    }
                    byteArrayOutputStream = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
                });
            return cs_flow_199.value();
        }
    }
}

// M:system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)
void BillingManager::UpdateBillingItems(bool detail) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)", game);
    {
        return;
    }
}

// M:system.billing.ui.BillingManager.Finish
void BillingManager::Finish() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.Finish", game);
    {
    }
}

// M:system.billing.ui.BillingManager.GetItems
pls::cs::Array<pls::cs::Ref<BillingItem>> BillingManager::GetItems() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.GetItems", game);
    {
        return items_;
    }
}

// M:system.billing.ui.BillingManager.GetItem(System.Int32)
pls::cs::Ref<BillingItem> BillingManager::GetItem(pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.GetItem(System.Int32)", game);
    {
        if (0 <= id && id < items_.length()) {
            return items_.get_Item(id);
        }
        return pls::cs::Ref<BillingItem>{};
    }
}

// M:system.billing.ui.BillingManager.GetItem(System.String)
pls::cs::Ref<BillingItem> BillingManager::GetItemString(pls::cs::String productId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.GetItem(System.String)", game);
    {
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(itemList_));
                                   });
             ++i) {
            pls::cs::Ref<BillingItem> billingItem =
                pls::cs::unbox<pls::cs::Ref<BillingItem>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(itemList_), i);
                }));
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return string_equals(productId, require(billingItem)->GetProductId());
                })) {
                return billingItem;
            }
        }
        return pls::cs::Ref<BillingItem>{};
    }
}

// M:system.billing.ui.BillingManager.GetSales
pls::cs::Array<pls::cs::Ref<BillingItem>> BillingManager::GetSales() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.GetSales", game);
    {
        kl_cfg::Config::ensure_initialized();

        bool flag = this->CheckPlayingGame();
        pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(itemList_));
                                   });
             ++i) {
            pls::cs::Ref<BillingItem> billingItem =
                pls::cs::unbox<pls::cs::Ref<BillingItem>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(itemList_), i);
                }));
            if (require(billingItem)->Check(4)) {

            } else if ((require(billingItem)->Check(2)) && (!(flag))) {

            } else if ((require(billingItem)->CheckTestProduct()) && (!(kl_cfg::Config::DEBUG()))) {

            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Add(require(vector), pls::cs::box(billingItem));
                });
            }
        }
        pls::cs::Array<pls::cs::Ref<BillingItem>> array =
            pls::cs::Array<pls::cs::Ref<BillingItem>>::make(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(vector)); }));
        for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(vector));
                                   });
             ++j) {
            array.set_Item(j, pls::cs::unbox<pls::cs::Ref<BillingItem>>(
                                  pls::diagnostic::api_call([&]() -> decltype(auto) {
                                      return kl_java_util::Vector_2_ElementAt(require(vector), j);
                                  })));
        }
        return array;
    }
}

// M:system.billing.ui.BillingManager.LaunchPurchaseFlow(system.billing.ui.BillingItem)
bool BillingManager::LaunchPurchaseFlow(pls::cs::Ref<BillingItem> item) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.BillingManager.LaunchPurchaseFlow(system.billing.ui.BillingItem)",
                     game);
    {
        return false;
    }
}

// M:system.billing.ui.BillingManager.Purchase(system.billing.ui.BillingItem)
void BillingManager::Purchase(pls::cs::Ref<BillingItem> item) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.BillingManager.Purchase(system.billing.ui.BillingItem)", game);
    {
        return;
    }
}

// M:system.billing.ui.BillingManager.Consume(system.billing.ui.BillingItem)
bool BillingManager::Consume(pls::cs::Ref<BillingItem> item) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.BillingManager.Consume(system.billing.ui.BillingItem)", game);
    {
        if (is_null(require(item)->GetPurchase())) {
            if (require(item)->consuming_) {
                return true;
            }
            return false;
        }
        return ConsumeItem(require(item)->GetPurchase());
    }
}

// M:system.billing.ui.BillingManager.CheckRegistApply(system.billing.ui.BillingItem,System.Int32)
bool BillingManager::CheckRegistApply(pls::cs::Ref<BillingItem> item, pls::cs::Int32 type) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.billing.ui.BillingManager.CheckRegistApply(system.billing.ui.BillingItem,System.Int32)",
        game);
    {
        if (is_null(item)) {
            return false;
        }
        if (SearchApplyTask(item, type) != -1) {
            return false;
        }
        if (require(item)->Check(2) && !this->CheckPlayingGame()) {
            return false;
        }
        if (type == 0) {
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(require(item)->state_)->Get(); }) == 0 &&
                !require(item)->consuming_) {
                return false;
            }
            if (!require(item)->Check(1) && require(item)->provision_) {
                return false;
            }
        } else {
            if (require(item)->Check(1)) {
                return false;
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(require(item)->state_)->Get(); }) == 1) {
                return false;
            }
            if (!require(item)->provision_) {
                return false;
            }
        }
        return true;
    }
}

// M:system.billing.ui.BillingManager.CheckNextConsume
bool BillingManager::CheckNextConsume() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.CheckNextConsume", game);
    {
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(itemList_));
                                   });
             ++i) {
            pls::cs::Ref<BillingItem> billingItem =
                pls::cs::unbox<pls::cs::Ref<BillingItem>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(itemList_), i);
                }));
            if (CheckRegistApply(billingItem, 0) && require(billingItem)->Check(1)) {
                return true;
            }
        }
        return false;
    }
}

// M:system.billing.ui.BillingManager.RegistApplyTask(System.Boolean)
bool BillingManager::RegistApplyTask(bool notice) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.RegistApplyTask(System.Boolean)",
                     game);
    {
        return false;
    }
}

// M:system.billing.ui.BillingManager.UpdateApplyTask(System.Boolean)
void BillingManager::UpdateApplyTask(bool notice) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.UpdateApplyTask(System.Boolean)",
                     game);
    {
        return;
    }
}

// M:system.billing.ui.BillingManager.ExecuteApplyTask(system.billing.ui.ApplyTask)
bool BillingManager::ExecuteApplyTask(pls::cs::Ref<ApplyTask> task) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.BillingManager.ExecuteApplyTask(system.billing.ui.ApplyTask)",
                     game);
    {
        return false;
    }
}

// M:system.billing.ui.BillingManager.Provisioning(system.billing.ui.ApplyTask)
void BillingManager::Provisioning(pls::cs::Ref<ApplyTask> task) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.BillingManager.Provisioning(system.billing.ui.ApplyTask)", game);
    {
        return;
    }
}

// M:system.billing.ui.BillingManager.Cancel(system.billing.ui.ApplyTask)
void BillingManager::Cancel(pls::cs::Ref<ApplyTask> task) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.BillingManager.Cancel(system.billing.ui.ApplyTask)", game);
    {
        return;
    }
}

// M:system.billing.ui.BillingManager.GetPurchaseLog
pls::cs::Ref<kl_java_util::Vector> BillingManager::GetPurchaseLog() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.GetPurchaseLog", game);
    {
        return purchaseLog_;
    }
}

// M:system.billing.ui.BillingManager.ClearPurchaseLog
void BillingManager::ClearPurchaseLog() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.ClearPurchaseLog", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::Vector_2_RemoveAllElements(require(purchaseLog_));
        });
    }
}

// M:system.billing.ui.BillingManager.CheckPlayingGame
bool BillingManager::CheckPlayingGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.CheckPlayingGame", game);
    {
        if (prepareGame_) {
            return true;
        }
        return false;
    }
}

// M:system.billing.ui.BillingManager.AddPurchaseLog(System.String,System.Int32,system.billing.util.Purchase)
void BillingManager::AddPurchaseLog(pls::cs::String productId, pls::cs::Int32 state,
                                    pls::cs::Ref<util::Purchase> purchase) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.billing.ui.BillingManager.AddPurchaseLog(System.String,System.Int32,system.billing.util.Purchase)",
        game);
    {
        pls::cs::Ref<PurchaseRecord> purchaseRecord = pls::cs::Ref<PurchaseRecord>{};
        pls::cs::String text = pls::cs::String{};
        if (!is_null(purchase)) {
            text = require(purchase)->GetOrderId();
        }
        for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                      return kl_java_util::Vector_2_Size(require(purchaseLog_));
                                  }) -
                                  1;
             num >= 0; --num) {
            pls::cs::Ref<PurchaseRecord> purchaseRecord2 = pls::cs::unbox<pls::cs::Ref<PurchaseRecord>>(
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(purchaseLog_), num);
                }));
            if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return string_equals(require(purchaseRecord2)->productId_, productId);
                })) {
                continue;
            }
            if ((is_null(text)) || pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return string_equals(require(purchaseRecord2)->orderId_, text);
                })) {
                purchaseRecord = purchaseRecord2;
                break;
            }
        }
        if (is_null(purchaseRecord) && !is_null(text)) {
            purchaseRecord = PurchaseRecord::create(productId, text);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_AddElement(require(purchaseLog_), pls::cs::box(purchaseRecord));
            });
        }
        if (!is_null(purchaseRecord)) {
            require(purchaseRecord)->ChangeState(state, purchase);
        }
    }
}

// M:system.billing.ui.BillingManager.ConnectRegistMarketPurchase
void BillingManager::ConnectRegistMarketPurchase() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.ConnectRegistMarketPurchase",
                     game);
    {
        return;
    }
}

// M:system.billing.ui.BillingManager.ConnectGetMarketPurchase
StringArray2 BillingManager::ConnectGetMarketPurchase() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.ConnectGetMarketPurchase", game);
    {
        return StringArray2{};
    }
}

// M:system.billing.ui.BillingManager.AddApplyTask(system.billing.ui.ApplyTask)
bool BillingManager::AddApplyTask(pls::cs::Ref<ApplyTask> task) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.BillingManager.AddApplyTask(system.billing.ui.ApplyTask)", game);
    {
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(applyTaskList_));
                                   });
             ++i) {
            pls::cs::Ref<ApplyTask> applyTask =
                pls::cs::unbox<pls::cs::Ref<ApplyTask>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(applyTaskList_), i);
                }));
            if (require(applyTask)->Equals(task)) {
                return false;
            }
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::Vector_2_AddElement(require(applyTaskList_), pls::cs::box(task));
        });
        return true;
    }
}

// M:system.billing.ui.BillingManager.SearchApplyTask(system.billing.ui.BillingItem,System.Int32)
pls::cs::Int32 BillingManager::SearchApplyTask(pls::cs::Ref<BillingItem> item, pls::cs::Int32 type) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.billing.ui.BillingManager.SearchApplyTask(system.billing.ui.BillingItem,System.Int32)",
        game);
    {
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(applyTaskList_));
                                   });
             ++i) {
            pls::cs::Ref<ApplyTask> applyTask =
                pls::cs::unbox<pls::cs::Ref<ApplyTask>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(applyTaskList_), i);
                }));
            if (pls::cs::box(require(applyTask)->item_) == pls::cs::box(item) &&
                require(applyTask)->type_ == type) {
                return i;
            }
        }
        return -1;
    }
}

// M:system.billing.ui.BillingManager.SearchApplyTask(system.billing.ui.ApplyTask)
pls::cs::Int32 BillingManager::SearchApplyTask(pls::cs::Ref<ApplyTask> task) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.BillingManager.SearchApplyTask(system.billing.ui.ApplyTask)", game);
    {
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(applyTaskList_));
                                   });
             ++i) {
            pls::cs::Ref<ApplyTask> applyTask =
                pls::cs::unbox<pls::cs::Ref<ApplyTask>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(applyTaskList_), i);
                }));
            if (require(applyTask)->Equals(task)) {
                return i;
            }
        }
        return -1;
    }
}

// M:system.billing.ui.BillingManager.RemoveApplyTask(system.billing.ui.BillingItem,System.Int32)
bool BillingManager::RemoveApplyTask(pls::cs::Ref<BillingItem> item, pls::cs::Int32 type) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.billing.ui.BillingManager.RemoveApplyTask(system.billing.ui.BillingItem,System.Int32)",
        game);
    {
        pls::cs::Int32 num = SearchApplyTask(item, type);
        if (num == -1) {
            return false;
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::Vector_2_RemoveElementAt(require(applyTaskList_), num);
        });
        return true;
    }
}

// M:system.billing.ui.BillingManager.RemoveApplyTask(system.billing.ui.ApplyTask)
bool BillingManager::RemoveApplyTask(pls::cs::Ref<ApplyTask> task) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.BillingManager.RemoveApplyTask(system.billing.ui.ApplyTask)", game);
    {
        pls::cs::Int32 num = SearchApplyTask(task);
        if (num == -1) {
            return false;
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::Vector_2_RemoveElementAt(require(applyTaskList_), num);
        });
        return true;
    }
}

// M:system.billing.ui.BillingManager.GetApplyTaskList(System.Boolean)
pls::cs::Ref<kl_java_util::Vector> BillingManager::GetApplyTaskList(bool game) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.GetApplyTaskList(System.Boolean)",
                     game);
    {
        pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(applyTaskList_));
                                   });
             ++i) {
            pls::cs::Ref<ApplyTask> applyTask =
                pls::cs::unbox<pls::cs::Ref<ApplyTask>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(applyTaskList_), i);
                }));
            if (require(applyTask)->IsGameApply() == game) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_AddElement(require(vector), pls::cs::box(applyTask));
                });
            }
        }
        return vector;
    }
}

// M:system.billing.ui.BillingManager.GetItemList(System.Boolean)
pls::cs::Ref<kl_java_util::Vector> BillingManager::GetItemList(bool game) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.GetItemList(System.Boolean)",
                     game);
    {
        pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(itemList_));
                                   });
             ++i) {
            pls::cs::Ref<BillingItem> billingItem =
                pls::cs::unbox<pls::cs::Ref<BillingItem>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(itemList_), i);
                }));
            if (require(billingItem)->Check(2) == game) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_AddElement(require(vector), pls::cs::box(billingItem));
                });
            }
        }
        return vector;
    }
}

// M:system.billing.ui.BillingManager.GetItemGroup
pls::cs::Array<pls::cs::Array<pls::cs::Ref<BillingItem>>> BillingManager::GetItemGroup() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingManager.GetItemGroup", game);
    {
        return itemGroup_;
    }
}
} // namespace system::billing::ui
}
