// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.PlayerData.hpp"
#include "data.TenantData.hpp"
#include "form.GameForm.hpp"
#include "form.SubForm.hpp"
#include "game.Camera.hpp"
#include "game.GameUtil.hpp"
#include "game.MapMain.hpp"
#include "game.Player.hpp"
#include "game.TPlayer.hpp"
#include "game.Tenant.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_java_util = pls::generated::java::util;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace game {

void Tenant::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(apdat_, visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(address_, visitor);
    pls::cs::trace_value(useTPlayers_, visitor);
    pls::cs::trace_value(useTPlayersId, visitor);
}

static IntArray Tenant_camera_pos_storage{};

static IntArray Tenant_USETENANT_TIME_storage{};

static PLS_NOINLINE void cs_init_a9f43a9b869eaae8_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(Tenant_camera_pos_storage, visitor);
        pls::cs::trace_value(Tenant_USETENANT_TIME_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("game.Tenant", flag, []() {
        Tenant_USETENANT_TIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Tenant.USETENANT_TIME", [&]() { return IntArray::from({200, 230}); });
        Tenant_camera_pos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Tenant.camera_pos", [&]() { return IntArray::make(2); });
    });
}

void Tenant::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_a9f43a9b869eaae8_slow(flag);
}

IntArray& Tenant::camera_pos() {
    Tenant::ensure_initialized();
    return Tenant_camera_pos_storage;
}

IntArray& Tenant::USETENANT_TIME() {
    Tenant::ensure_initialized();
    return Tenant_USETENANT_TIME_storage;
}

void Tenant::create_init(pls::cs::Ref<Tenant> self, pls::cs::Int32 id) {
    Tenant::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.#ctor(System.Int32)", game);
    {
        self->id_ = id;
        self->useTPlayers_ = kl_java_util::Vector::create();
        self->address_ = IntArray::make(2);
        self->state_ = 0;
    }
}

// M:game.Tenant.#ctor(System.Int32)
pls::cs::Ref<Tenant> Tenant::create(pls::cs::Int32 id) {
    Tenant::ensure_initialized();
    auto self = pls::cs::make_ref<Tenant>();
    Tenant::create_init(self, id);
    return self;
}

// M:game.Tenant.Init(System.Int32)
void Tenant::Init(pls::cs::Int32 root) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.Init(System.Int32)", game);
    {
        apdat_ = main::AppData::GetInstance();
        udat_ = UserData::GetInstance();
        root_ = root;
    }
}

// M:game.Tenant.Serialize(java.io.OutputStream)
void Tenant::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.Serialize(java.io.OutputStream)", game);
    {
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(id_)));
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(address_[0])));
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(address_[1])));
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_)));
        PLS_API(kl_unity_util::StreamUtil::WriteInt(os, stateCnt_));
        PLS_API(
            kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(tenantDataId_)));
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(root_)));
        PLS_API(kl_unity_util::StreamUtil::WriteInt(
            os, PLS_API(kl_java_util::Vector_2_Size(require(useTPlayers_)))));
        for (pls::cs::Int32 i = 0; i < PLS_API(kl_java_util::Vector_2_Size(require(useTPlayers_))); ++i) {
            pls::cs::Ref<TPlayer> tPlayer = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                PLS_API(kl_java_util::Vector_2_ElementAt(require(useTPlayers_), i)));
            PLS_API(kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(require(tPlayer)->trainingId_[0])));
        }
    }
}

// M:game.Tenant.Deserialize(java.io.InputStream,System.Int32)
void Tenant::Deserialize(pls::cs::Ref<kl_io::InputStream> stream, pls::cs::Int32 index) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.Deserialize(java.io.InputStream,System.Int32)", game);
    {
        data::TenantData::ensure_initialized();

        Init(data::TenantData::TENANT_ROOT()[index]);
        id_ = pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        {
            auto cs_target = address_;
            auto cs_index = 0;
            auto cs_value =
                pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = address_;
            auto cs_index = 1;
            auto cs_value =
                pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
            cs_target.set_Item(cs_index, cs_value);
        }
        state_ =
            pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        stateCnt_ = PLS_API(kl_unity_util::StreamUtil::ReadInt(stream));
        tenantDataId_ =
            pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        root_ = pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        pls::cs::Int32 num = PLS_API(kl_unity_util::StreamUtil::ReadInt(stream));
        useTPlayersId = IntArray::make(num);
        for (pls::cs::Int32 i = 0; i < useTPlayersId.length(); ++i) {
            {
                auto cs_target = useTPlayersId;
                auto cs_index = i;
                auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(
                    PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:game.Tenant.Deserialize2
void Tenant::Deserialize2() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.Deserialize2", game);
    {
        useTPlayers_ = kl_java_util::Vector::create();
        for (pls::cs::Int32 i = 0; i < useTPlayersId.length(); ++i) {
            pls::cs::Ref<TPlayer> obj =
                require(UserData::GetInstance())->tPlayers_.get_Item(useTPlayersId[i]);
            PLS_API(kl_java_util::Vector_2_AddElement(require(useTPlayers_), pls::cs::box(obj)));
        }
    }
}

// M:game.Tenant.ChangeState(System.Int32)
void Tenant::ChangeState(pls::cs::Int32 state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.ChangeState(System.Int32)", game);
    {
        state_ = state;
        stateCnt_ = 0;
    }
}

// M:game.Tenant.Update
void Tenant::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.Update", game);
    {
        data::TenantData::ensure_initialized();
        MapMain::ensure_initialized();

        stateCnt_ = ((stateCnt_ + 1) % 2147483647 /* Int32.MaxValue */);
        if (state_ == 3) {
            if (stateCnt_ >= 12) {
                ChangeState(0);
                require(require(apdat_)->mapMain_)->UpdateTenantMapcip();
            }
            return;
        }
        pls::cs::Ref<data::TenantData> tenantData = pls::cs::Ref<data::TenantData>{};
        if (tenantDataId_ != -1) {
            tenantData = require(apdat_)->tenantData_.get_Item(tenantDataId_);
        } else {
            return;
        }
        if (state_ == 2) {
            if (stateCnt_ >= require(tenantData)->buildTime_) {
                ChangeState(1);
                require(require(apdat_)->mapMain_)->UpdateTenantMapcip();
                if (tenantDataId_ == data::TenantData::TENANT_ID_GOODS()) {
                    if (!require(apdat_)->CheckAlreadyEvent(171)) {
                        require(apdat_)->ExecEvent(171, pls::cs::String{}, IntArray{});
                    }
                }
            }
        } else {
            if (state_ == 4) {
                if (stateCnt_ >= 200) {
                    ChangeState(1);
                    require(require(apdat_)->mapMain_)->UpdateTenantMapcip();
                }
            }
        }
        if (PLS_API(kl_java_util::Vector_2_Size(require(useTPlayers_))) > 0) {
            pls::cs::Ref<TPlayer> tPlayer = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                PLS_API(kl_java_util::Vector_2_ElementAt(require(useTPlayers_), 0)));
            ++require(tPlayer)->useTenantCnt_;
            if (require(tPlayer)->useTenantCnt_ == 1) {
                pls::cs::Int32 userPrice = require(tenantData)->GetUserPrice();
                IntArray array = MapMain::MAPCHIP_SPOS()[address_[1]][address_[0]];
                {
                    pls::cs::Int32 cs_arg0 = array[0];
                    pls::cs::Int32 cs_arg1 = array[1];
                    require(apdat_)->AddEffectMoneyUp(cs_arg0, cs_arg1, userPrice);
                }
                require(apdat_)->AddMoney(userPrice, 1);
            } else {
                if ([&]() -> bool {
                        auto cs_left = require(tPlayer)->useTenantCnt_;
                        auto cs_right = Tenant::USETENANT_TIME()[0];
                        return cs_left == cs_right;
                    }()) {
                    IntArray tenantUseResearchPoint = require(tenantData)->GetTenantUseResearchPoint();
                    IntArray array2 = MapMain::MAPCHIP_SPOS()[address_[1]][address_[0]];
                    {
                        pls::cs::Int32 cs_arg0 = array2[0];
                        pls::cs::Int32 cs_arg1 = array2[1];
                        pls::cs::Int32 cs_arg2 = tenantUseResearchPoint[0];
                        pls::cs::Int32 cs_arg3 = tenantUseResearchPoint[1];
                        require(apdat_)->AddEffectRpUp(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                    }
                    {
                        pls::cs::Int32 cs_arg0 = tenantUseResearchPoint[0];
                        pls::cs::Int32 cs_arg1 = tenantUseResearchPoint[1];
                        require(udat_)->AddResearchPoint(cs_arg0, cs_arg1);
                    }
                    pls::cs::Ref<data::PlayerData> playerData =
                        require(apdat_)->pData_.get_Item(require(tPlayer)->pData_id_);
                    require(playerData)->AddAuraPoint(require(tenantData)->paramEfToFan_, false);
                }
            }
            if ([&]() -> bool {
                    auto cs_left = require(tPlayer)->useTenantCnt_;
                    auto cs_right = Tenant::USETENANT_TIME()[1];
                    return cs_left >= cs_right;
                }()) {
                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(useTPlayers_), 0));
                require(udat_)->SetTenantIn(tPlayer);
            }
        }
        return;
    }
}

// M:game.Tenant.Draw(kairo.unity.ui.Graphics)
void Tenant::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.Draw(kairo.unity.ui.Graphics)", game);
    {
        MapMain::ensure_initialized();
        form::GameForm::ensure_initialized();

        Draw_tenantEffect(g);
        if (PLS_API(kl_java_util::Vector_2_Size(require(useTPlayers_))) > 0) {
            pls::cs::Ref<TPlayer> tPlayer = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                PLS_API(kl_java_util::Vector_2_ElementAt(require(useTPlayers_), 0)));
            Camera::ConvertScreenToCameraIntArray(MapMain::MAPCHIP_SPOS()[address_[1]][address_[0]],
                                                  Tenant::camera_pos());
            {
                auto cs_target = Tenant::camera_pos();
                auto cs_index = 0;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = 30;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            {
                auto cs_target = Tenant::camera_pos();
                auto cs_index = 1;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = 0;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            if ([&]() -> bool {
                    pls::cs::Int32 cs_arg0 = Tenant::camera_pos()[0] - 25;
                    pls::cs::Int32 cs_arg1 = Tenant::camera_pos()[1] - 18;
                    return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, 51, 18, form::GameForm::VIEW_X(),
                                                   form::GameForm::VIEW_Y(), form::GameForm::VIEW_W(),
                                                   form::GameForm::VIEW_H(), false);
                }()) {
                {
                    pls::cs::Int32 cs_arg1 = require(tPlayer)->trainingId_[0];
                    pls::cs::Int32 cs_arg2 = Tenant::camera_pos()[1] + 60;
                    pls::cs::Int32 cs_arg6 = Tenant::camera_pos()[0];
                    pls::cs::Int32 cs_arg7 = Tenant::camera_pos()[1];
                    require(apdat_)->InsertGameObject(10, cs_arg1, cs_arg2, 0, 0, 0, cs_arg6, cs_arg7, false,
                                                      0);
                }
            }
            if ((PLS_API(kl_java_util::Vector_2_Size(require(useTPlayers_))) > 1) &&
                (require(require(apdat_)->save_)->ints[12] == 1)) {
                {
                    auto cs_target = Tenant::camera_pos();
                    auto cs_index = 1;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = 40;
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
                pls::cs::Int32 x, num;
                num = 0;
                x = num;
                draw_cnt = 0;
                pls::cs::Int32 num2 = main::AppData::ClampMax(
                    4, PLS_API(kl_java_util::Vector_2_Size(require(useTPlayers_))) - 1);
                for (pls::cs::Int32 num3 = num2; num3 >= 1; --num3) {
                    x = Tenant::camera_pos()[0] + (num3 - 1) * 8;
                    num = Tenant::camera_pos()[1] + (num3 - 1) * -4;
                    pls::cs::Ref<TPlayer> tPlayer2 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        PLS_API(kl_java_util::Vector_2_ElementAt(require(useTPlayers_), num3)));
                    require(tPlayer2)->direct_ = 2;
                    {
                        auto cs_target = tPlayer2;
                        pls::cs::Int32 cs_value =
                            PLS_API(kl_unity_util::BitUtil::Off(require(tPlayer2)->flag_, 2));
                        require(cs_target)->flag_ = cs_value;
                    }
                    pls::cs::Int32 layer = require(tPlayer2)->SetDrawParam(require(tPlayer2)->seb_, -1);
                    {
                        pls::cs::Int32 cs_arg1 = require(tPlayer2)->trainingId_[0];
                        pls::cs::Int32 cs_arg2 = Tenant::camera_pos()[1] + 60 + 1;
                        require(apdat_)->InsertGameObject(2, cs_arg1, cs_arg2, 0, 0, 0, x, num, false, layer);
                    }
                    ++draw_cnt;
                    if (draw_cnt >= 4) {
                        break;
                    }
                }
            }
        }
    }
}

// M:game.Tenant.Draw_tenantEffect(kairo.unity.ui.Graphics)
void Tenant::Draw_tenantEffect(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.Draw_tenantEffect(kairo.unity.ui.Graphics)", game);
    {
        MapMain::ensure_initialized();
        form::GameForm::ensure_initialized();

        if (state_ == 2) {
            pls::cs::Ref<data::TenantData> tenantData = require(apdat_)->tenantData_.get_Item(tenantDataId_);
            pls::cs::Int32 val =
                GameUtil::RateConvert(stateCnt_, 0, require(tenantData)->buildTime_, 0, 3, true);
            val = main::AppData::ClampMax(val, 2);
            pls::cs::Ref<pls::kairo::Image> image =
                require(require(apdat_)->resCom2_)->img.get_Item(155 + val);
            for (pls::cs::Int32 i = 0; i < 2; ++i) {
                for (pls::cs::Int32 j = 0; j < 2; ++j) {
                    Camera::ConvertScreenToCameraIntArray(
                        MapMain::MAPCHIP_SPOS()[address_[1] - i][address_[0] + j], Tenant::camera_pos());
                    if (!(([&]() -> bool {
                            pls::cs::Int32 cs_arg0 = Tenant::camera_pos()[0];
                            pls::cs::Int32 cs_arg1 = ([&]() -> pls::cs::Int32 {
                                auto cs_left = Tenant::camera_pos()[1] + 29;
                                auto cs_right = PLS_API(require(image)->GetHeight());
                                return cs_left - cs_right;
                            }());
                            pls::cs::Int32 cs_arg3 = PLS_API(require(image)->GetHeight());
                            return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, 60, cs_arg3,
                                                           form::GameForm::VIEW_X(), form::GameForm::VIEW_Y(),
                                                           form::GameForm::VIEW_W(), form::GameForm::VIEW_H(),
                                                           false);
                        }()))) {
                        continue;
                    }
                    {
                        pls::cs::Int32 cs_arg2 = Tenant::camera_pos()[1] + 1;
                        pls::cs::Int32 cs_arg6 = Tenant::camera_pos()[0];
                        pls::cs::Int32 cs_arg7 = Tenant::camera_pos()[1];
                        require(apdat_)->InsertGameObject(8, 0, cs_arg2, 155 + val, 85 + val, 0, cs_arg6,
                                                          cs_arg7, false, 0);
                    }
                }
            }
        } else if (state_ == 3) {
            pls::cs::Int32 val2 = GameUtil::RateConvert(stateCnt_, 0, 12, 0, 3, true);
            val2 = main::AppData::ClampMax(val2, 2);
            pls::cs::Ref<pls::kairo::Image> image2 = require(require(apdat_)->resCom2_)->img.get_Item(158);
            for (pls::cs::Int32 k = 0; k < 2; ++k) {
                for (pls::cs::Int32 l = 0; l < 2; ++l) {
                    Camera::ConvertScreenToCameraIntArray(
                        MapMain::MAPCHIP_SPOS()[address_[1] - k][address_[0] + l], Tenant::camera_pos());
                    if (!(([&]() -> bool {
                            pls::cs::Int32 cs_arg0 = Tenant::camera_pos()[0];
                            pls::cs::Int32 cs_arg1 = ([&]() -> pls::cs::Int32 {
                                auto cs_left = Tenant::camera_pos()[1] + 29;
                                auto cs_right = PLS_API(require(image2)->GetHeight());
                                return cs_left - cs_right;
                            }());
                            pls::cs::Int32 cs_arg3 = PLS_API(require(image2)->GetHeight());
                            return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, 60, cs_arg3,
                                                           form::GameForm::VIEW_X(), form::GameForm::VIEW_Y(),
                                                           form::GameForm::VIEW_W(), form::GameForm::VIEW_H(),
                                                           false);
                        }()))) {
                        continue;
                    }
                    {
                        pls::cs::Int32 cs_arg2 = Tenant::camera_pos()[1];
                        pls::cs::Int32 cs_arg6 = Tenant::camera_pos()[0];
                        pls::cs::Int32 cs_arg7 = Tenant::camera_pos()[1];
                        require(apdat_)->InsertGameObject(8, 0, cs_arg2, 158, 88, val2, cs_arg6, cs_arg7,
                                                          false, 0);
                    }
                }
            }
        } else {
            if (state_ == 4) {
                pls::cs::Int32 val3 = GameUtil::RateConvert(stateCnt_, 0, 200, 0, 3, true);
                val3 = main::AppData::ClampMax(val3, 2);
                pls::cs::Ref<pls::kairo::Image> image3 =
                    require(require(apdat_)->resCom2_)->img.get_Item(155 + val3);
                for (pls::cs::Int32 m = 0; m < 2; ++m) {
                    for (pls::cs::Int32 n = 0; n < 2; ++n) {
                        Camera::ConvertScreenToCameraIntArray(
                            MapMain::MAPCHIP_SPOS()[address_[1] - m][address_[0] + n], Tenant::camera_pos());
                        if (!(([&]() -> bool {
                                pls::cs::Int32 cs_arg0 = Tenant::camera_pos()[0];
                                pls::cs::Int32 cs_arg1 = ([&]() -> pls::cs::Int32 {
                                    auto cs_left = Tenant::camera_pos()[1] + 29;
                                    auto cs_right = PLS_API(require(image3)->GetHeight());
                                    return cs_left - cs_right;
                                }());
                                pls::cs::Int32 cs_arg3 = PLS_API(require(image3)->GetHeight());
                                return GameUtil::ChRectHitRect(
                                    cs_arg0, cs_arg1, 60, cs_arg3, form::GameForm::VIEW_X(),
                                    form::GameForm::VIEW_Y(), form::GameForm::VIEW_W(),
                                    form::GameForm::VIEW_H(), false);
                            }()))) {
                            continue;
                        }
                        {
                            pls::cs::Int32 cs_arg2 = Tenant::camera_pos()[1] + 1;
                            pls::cs::Int32 cs_arg6 = Tenant::camera_pos()[0];
                            pls::cs::Int32 cs_arg7 = Tenant::camera_pos()[1];
                            require(apdat_)->InsertGameObject(8, 0, cs_arg2, 155 + val3, 85 + val3, 0,
                                                              cs_arg6, cs_arg7, false, 0);
                        }
                    }
                }
            }
        }
    }
}

// M:game.Tenant.BuildTenant(System.Int32)
void Tenant::BuildTenant(pls::cs::Int32 tenantDataId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.BuildTenant(System.Int32)", game);
    {
        tenantDataId_ = tenantDataId;
        ChangeState(2);
        for (pls::cs::Int32 num =
                 PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->restTPlayers_))) - 1;
             num >= 0; --num) {
            pls::cs::Ref<TPlayer> tenantIn = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                PLS_API(kl_java_util::Vector_2_ElementAt(require(require(udat_)->restTPlayers_), num)));
            if (require(udat_)->SetTenantIn(tenantIn)) {
                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(require(udat_)->restTPlayers_), num));
            }
        }
    }
}

// M:game.Tenant.DestructTenant
void Tenant::DestructTenant() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.DestructTenant", game);
    {
        tenantDataId_ = -1;
        ChangeState(3);
        require(require(apdat_)->mapMain_)->UpdateTenantMapcip();
        OutUserTPlayers();
    }
}

// M:game.Tenant.StrenghTenant
void Tenant::StrenghTenant() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.StrenghTenant", game);
    {
        ChangeState(4);
        require(require(apdat_)->mapMain_)->UpdateTenantMapcip();
        OutUserTPlayers();
    }
}

// M:game.Tenant.OutUserTPlayers
void Tenant::OutUserTPlayers() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Tenant.OutUserTPlayers", game);
    {
        for (pls::cs::Int32 i = 0; i < PLS_API(kl_java_util::Vector_2_Size(require(useTPlayers_))); ++i) {
            pls::cs::Ref<TPlayer> tenantIn = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                PLS_API(kl_java_util::Vector_2_ElementAt(require(useTPlayers_), i)));
            require(udat_)->SetTenantIn(tenantIn);
        }
        if (PLS_API(kl_java_util::Vector_2_Size(require(useTPlayers_))) > 0) {
            PLS_API(kl_java_util::Vector_2_RemoveAllElements(require(useTPlayers_)));
        }
    }
}
} // namespace game
}
